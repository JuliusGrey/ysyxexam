// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_041728__Syms.h"


void Vysyx_041728___024root__traceInitSub0(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_041728___024root__traceInitTop(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_041728___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_041728___024root__traceInitSub0(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+3976,"clock", false,-1);
        tracep->declBit(c+3977,"reset", false,-1);
        tracep->declBit(c+3978,"io_imaster_awready", false,-1);
        tracep->declBit(c+3979,"io_imaster_awvalid", false,-1);
        tracep->declBus(c+3980,"io_imaster_awid", false,-1, 3,0);
        tracep->declBus(c+3981,"io_imaster_awaddr", false,-1, 31,0);
        tracep->declBus(c+3982,"io_imaster_awlen", false,-1, 7,0);
        tracep->declBus(c+3983,"io_imaster_awsize", false,-1, 2,0);
        tracep->declBus(c+3984,"io_imaster_awburst", false,-1, 1,0);
        tracep->declBit(c+3985,"io_imaster_wready", false,-1);
        tracep->declBit(c+3986,"io_imaster_wvalid", false,-1);
        tracep->declQuad(c+3987,"io_imaster_wdata", false,-1, 63,0);
        tracep->declBus(c+3989,"io_imaster_wstrb", false,-1, 7,0);
        tracep->declBit(c+3990,"io_imaster_wlast", false,-1);
        tracep->declBit(c+3991,"io_imaster_bready", false,-1);
        tracep->declBit(c+3992,"io_imaster_bvalid", false,-1);
        tracep->declBus(c+3993,"io_imaster_bid", false,-1, 3,0);
        tracep->declBus(c+3994,"io_imaster_bresp", false,-1, 1,0);
        tracep->declBit(c+3995,"io_imaster_arready", false,-1);
        tracep->declBit(c+3996,"io_imaster_arvalid", false,-1);
        tracep->declBus(c+3997,"io_imaster_arid", false,-1, 3,0);
        tracep->declBus(c+3998,"io_imaster_araddr", false,-1, 31,0);
        tracep->declBus(c+3999,"io_imaster_arlen", false,-1, 7,0);
        tracep->declBus(c+4000,"io_imaster_arsize", false,-1, 2,0);
        tracep->declBus(c+4001,"io_imaster_arburst", false,-1, 1,0);
        tracep->declBit(c+4002,"io_imaster_rready", false,-1);
        tracep->declBit(c+4003,"io_imaster_rvalid", false,-1);
        tracep->declBus(c+4004,"io_imaster_rid", false,-1, 3,0);
        tracep->declBus(c+4005,"io_imaster_rresp", false,-1, 1,0);
        tracep->declQuad(c+4006,"io_imaster_rdata", false,-1, 63,0);
        tracep->declBit(c+4008,"io_imaster_rlast", false,-1);
        tracep->declBit(c+4009,"io_dmaster_awready", false,-1);
        tracep->declBit(c+4010,"io_dmaster_awvalid", false,-1);
        tracep->declBus(c+4011,"io_dmaster_awid", false,-1, 3,0);
        tracep->declBus(c+4012,"io_dmaster_awaddr", false,-1, 31,0);
        tracep->declBus(c+4013,"io_dmaster_awlen", false,-1, 7,0);
        tracep->declBus(c+4014,"io_dmaster_awsize", false,-1, 2,0);
        tracep->declBus(c+4015,"io_dmaster_awburst", false,-1, 1,0);
        tracep->declBit(c+4016,"io_dmaster_wready", false,-1);
        tracep->declBit(c+4017,"io_dmaster_wvalid", false,-1);
        tracep->declQuad(c+4018,"io_dmaster_wdata", false,-1, 63,0);
        tracep->declBus(c+4020,"io_dmaster_wstrb", false,-1, 7,0);
        tracep->declBit(c+4021,"io_dmaster_wlast", false,-1);
        tracep->declBit(c+4022,"io_dmaster_bready", false,-1);
        tracep->declBit(c+4023,"io_dmaster_bvalid", false,-1);
        tracep->declBus(c+4024,"io_dmaster_bid", false,-1, 3,0);
        tracep->declBus(c+4025,"io_dmaster_bresp", false,-1, 1,0);
        tracep->declBit(c+4026,"io_dmaster_arready", false,-1);
        tracep->declBit(c+4027,"io_dmaster_arvalid", false,-1);
        tracep->declBus(c+4028,"io_dmaster_arid", false,-1, 3,0);
        tracep->declBus(c+4029,"io_dmaster_araddr", false,-1, 31,0);
        tracep->declBus(c+4030,"io_dmaster_arlen", false,-1, 7,0);
        tracep->declBus(c+4031,"io_dmaster_arsize", false,-1, 2,0);
        tracep->declBus(c+4032,"io_dmaster_arburst", false,-1, 1,0);
        tracep->declBit(c+4033,"io_dmaster_rready", false,-1);
        tracep->declBit(c+4034,"io_dmaster_rvalid", false,-1);
        tracep->declBus(c+4035,"io_dmaster_rid", false,-1, 3,0);
        tracep->declBus(c+4036,"io_dmaster_rresp", false,-1, 1,0);
        tracep->declQuad(c+4037,"io_dmaster_rdata", false,-1, 63,0);
        tracep->declBit(c+4039,"io_dmaster_rlast", false,-1);
        tracep->declBit(c+4040,"io_mmio_valid", false,-1);
        tracep->declBit(c+4041,"io_mmio_ready", false,-1);
        tracep->declQuad(c+4042,"io_mmio_data_read", false,-1, 63,0);
        tracep->declQuad(c+4044,"io_mmio_data_write", false,-1, 63,0);
        tracep->declBit(c+4046,"io_mmio_wen", false,-1);
        tracep->declBus(c+4047,"io_mmio_addr", false,-1, 31,0);
        tracep->declBus(c+4048,"io_mmio_rsize", false,-1, 1,0);
        tracep->declBus(c+4049,"io_mmio_mask", false,-1, 7,0);
        tracep->declBit(c+3976,"ysyx_041728 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 reset", false,-1);
        tracep->declBit(c+3978,"ysyx_041728 io_imaster_awready", false,-1);
        tracep->declBit(c+3979,"ysyx_041728 io_imaster_awvalid", false,-1);
        tracep->declBus(c+3980,"ysyx_041728 io_imaster_awid", false,-1, 3,0);
        tracep->declBus(c+3981,"ysyx_041728 io_imaster_awaddr", false,-1, 31,0);
        tracep->declBus(c+3982,"ysyx_041728 io_imaster_awlen", false,-1, 7,0);
        tracep->declBus(c+3983,"ysyx_041728 io_imaster_awsize", false,-1, 2,0);
        tracep->declBus(c+3984,"ysyx_041728 io_imaster_awburst", false,-1, 1,0);
        tracep->declBit(c+3985,"ysyx_041728 io_imaster_wready", false,-1);
        tracep->declBit(c+3986,"ysyx_041728 io_imaster_wvalid", false,-1);
        tracep->declQuad(c+3987,"ysyx_041728 io_imaster_wdata", false,-1, 63,0);
        tracep->declBus(c+3989,"ysyx_041728 io_imaster_wstrb", false,-1, 7,0);
        tracep->declBit(c+3990,"ysyx_041728 io_imaster_wlast", false,-1);
        tracep->declBit(c+3991,"ysyx_041728 io_imaster_bready", false,-1);
        tracep->declBit(c+3992,"ysyx_041728 io_imaster_bvalid", false,-1);
        tracep->declBus(c+3993,"ysyx_041728 io_imaster_bid", false,-1, 3,0);
        tracep->declBus(c+3994,"ysyx_041728 io_imaster_bresp", false,-1, 1,0);
        tracep->declBit(c+3995,"ysyx_041728 io_imaster_arready", false,-1);
        tracep->declBit(c+3996,"ysyx_041728 io_imaster_arvalid", false,-1);
        tracep->declBus(c+3997,"ysyx_041728 io_imaster_arid", false,-1, 3,0);
        tracep->declBus(c+3998,"ysyx_041728 io_imaster_araddr", false,-1, 31,0);
        tracep->declBus(c+3999,"ysyx_041728 io_imaster_arlen", false,-1, 7,0);
        tracep->declBus(c+4000,"ysyx_041728 io_imaster_arsize", false,-1, 2,0);
        tracep->declBus(c+4001,"ysyx_041728 io_imaster_arburst", false,-1, 1,0);
        tracep->declBit(c+4002,"ysyx_041728 io_imaster_rready", false,-1);
        tracep->declBit(c+4003,"ysyx_041728 io_imaster_rvalid", false,-1);
        tracep->declBus(c+4004,"ysyx_041728 io_imaster_rid", false,-1, 3,0);
        tracep->declBus(c+4005,"ysyx_041728 io_imaster_rresp", false,-1, 1,0);
        tracep->declQuad(c+4006,"ysyx_041728 io_imaster_rdata", false,-1, 63,0);
        tracep->declBit(c+4008,"ysyx_041728 io_imaster_rlast", false,-1);
        tracep->declBit(c+4009,"ysyx_041728 io_dmaster_awready", false,-1);
        tracep->declBit(c+4010,"ysyx_041728 io_dmaster_awvalid", false,-1);
        tracep->declBus(c+4011,"ysyx_041728 io_dmaster_awid", false,-1, 3,0);
        tracep->declBus(c+4012,"ysyx_041728 io_dmaster_awaddr", false,-1, 31,0);
        tracep->declBus(c+4013,"ysyx_041728 io_dmaster_awlen", false,-1, 7,0);
        tracep->declBus(c+4014,"ysyx_041728 io_dmaster_awsize", false,-1, 2,0);
        tracep->declBus(c+4015,"ysyx_041728 io_dmaster_awburst", false,-1, 1,0);
        tracep->declBit(c+4016,"ysyx_041728 io_dmaster_wready", false,-1);
        tracep->declBit(c+4017,"ysyx_041728 io_dmaster_wvalid", false,-1);
        tracep->declQuad(c+4018,"ysyx_041728 io_dmaster_wdata", false,-1, 63,0);
        tracep->declBus(c+4020,"ysyx_041728 io_dmaster_wstrb", false,-1, 7,0);
        tracep->declBit(c+4021,"ysyx_041728 io_dmaster_wlast", false,-1);
        tracep->declBit(c+4022,"ysyx_041728 io_dmaster_bready", false,-1);
        tracep->declBit(c+4023,"ysyx_041728 io_dmaster_bvalid", false,-1);
        tracep->declBus(c+4024,"ysyx_041728 io_dmaster_bid", false,-1, 3,0);
        tracep->declBus(c+4025,"ysyx_041728 io_dmaster_bresp", false,-1, 1,0);
        tracep->declBit(c+4026,"ysyx_041728 io_dmaster_arready", false,-1);
        tracep->declBit(c+4027,"ysyx_041728 io_dmaster_arvalid", false,-1);
        tracep->declBus(c+4028,"ysyx_041728 io_dmaster_arid", false,-1, 3,0);
        tracep->declBus(c+4029,"ysyx_041728 io_dmaster_araddr", false,-1, 31,0);
        tracep->declBus(c+4030,"ysyx_041728 io_dmaster_arlen", false,-1, 7,0);
        tracep->declBus(c+4031,"ysyx_041728 io_dmaster_arsize", false,-1, 2,0);
        tracep->declBus(c+4032,"ysyx_041728 io_dmaster_arburst", false,-1, 1,0);
        tracep->declBit(c+4033,"ysyx_041728 io_dmaster_rready", false,-1);
        tracep->declBit(c+4034,"ysyx_041728 io_dmaster_rvalid", false,-1);
        tracep->declBus(c+4035,"ysyx_041728 io_dmaster_rid", false,-1, 3,0);
        tracep->declBus(c+4036,"ysyx_041728 io_dmaster_rresp", false,-1, 1,0);
        tracep->declQuad(c+4037,"ysyx_041728 io_dmaster_rdata", false,-1, 63,0);
        tracep->declBit(c+4039,"ysyx_041728 io_dmaster_rlast", false,-1);
        tracep->declBit(c+4040,"ysyx_041728 io_mmio_valid", false,-1);
        tracep->declBit(c+4041,"ysyx_041728 io_mmio_ready", false,-1);
        tracep->declQuad(c+4042,"ysyx_041728 io_mmio_data_read", false,-1, 63,0);
        tracep->declQuad(c+4044,"ysyx_041728 io_mmio_data_write", false,-1, 63,0);
        tracep->declBit(c+4046,"ysyx_041728 io_mmio_wen", false,-1);
        tracep->declBus(c+4047,"ysyx_041728 io_mmio_addr", false,-1, 31,0);
        tracep->declBus(c+4048,"ysyx_041728 io_mmio_rsize", false,-1, 1,0);
        tracep->declBus(c+4049,"ysyx_041728 io_mmio_mask", false,-1, 7,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns_reset", false,-1);
        tracep->declBit(c+90,"ysyx_041728 riscvIns_io_instIO_valid", false,-1);
        tracep->declBit(c+91,"ysyx_041728 riscvIns_io_instIO_ready", false,-1);
        tracep->declQuad(c+92,"ysyx_041728 riscvIns_io_instIO_data_read", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_041728 riscvIns_io_instIO_addr", false,-1, 31,0);
        tracep->declBit(c+95,"ysyx_041728 riscvIns_io_dataIO_valid", false,-1);
        tracep->declBit(c+63,"ysyx_041728 riscvIns_io_dataIO_ready", false,-1);
        tracep->declQuad(c+96,"ysyx_041728 riscvIns_io_dataIO_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 riscvIns_io_dataIO_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 riscvIns_io_dataIO_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 riscvIns_io_dataIO_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 riscvIns_io_dataIO_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 riscvIns_io_dataIO_mask", false,-1, 7,0);
        tracep->declBit(c+104,"ysyx_041728 riscvIns_intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 riscvIns_startTimeCnt", false,-1);
        tracep->declBit(c+106,"ysyx_041728 riscvIns_block2_0", false,-1);
        tracep->declBit(c+64,"ysyx_041728 riscvIns_fencei_0", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 iCache_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 iCache_reset", false,-1);
        tracep->declBit(c+107,"ysyx_041728 iCache_io_cacheOut_ar_valid_o", false,-1);
        tracep->declBus(c+108,"ysyx_041728 iCache_io_cacheOut_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_041728 iCache_io_cacheOut_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4003,"ysyx_041728 iCache_io_cacheOut_r_valid_i", false,-1);
        tracep->declQuad(c+4006,"ysyx_041728 iCache_io_cacheOut_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4008,"ysyx_041728 iCache_io_cacheOut_r_last_i", false,-1);
        tracep->declBus(c+94,"ysyx_041728 iCache_io_cacheOut_w_addr_o", false,-1, 31,0);
        tracep->declBit(c+90,"ysyx_041728 iCache_io_cacheIn_valid", false,-1);
        tracep->declBit(c+91,"ysyx_041728 iCache_io_cacheIn_ready", false,-1);
        tracep->declQuad(c+92,"ysyx_041728 iCache_io_cacheIn_data_read", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_041728 iCache_io_cacheIn_addr", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_041728 iCache_io_SRAMIO_0_cen", false,-1);
        tracep->declBit(c+1,"ysyx_041728 iCache_io_SRAMIO_0_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache_io_SRAMIO_0_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache_io_SRAMIO_0_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache_io_SRAMIO_0_wmask", false,-1, 127,0);
        tracep->declArray(c+111,"ysyx_041728 iCache_io_SRAMIO_0_rdata", false,-1, 127,0);
        tracep->declBit(c+2,"ysyx_041728 iCache_io_SRAMIO_1_cen", false,-1);
        tracep->declBit(c+2,"ysyx_041728 iCache_io_SRAMIO_1_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache_io_SRAMIO_1_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache_io_SRAMIO_1_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache_io_SRAMIO_1_wmask", false,-1, 127,0);
        tracep->declArray(c+115,"ysyx_041728 iCache_io_SRAMIO_1_rdata", false,-1, 127,0);
        tracep->declBit(c+3,"ysyx_041728 iCache_io_SRAMIO_2_cen", false,-1);
        tracep->declBit(c+3,"ysyx_041728 iCache_io_SRAMIO_2_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache_io_SRAMIO_2_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache_io_SRAMIO_2_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache_io_SRAMIO_2_wmask", false,-1, 127,0);
        tracep->declArray(c+119,"ysyx_041728 iCache_io_SRAMIO_2_rdata", false,-1, 127,0);
        tracep->declBit(c+4,"ysyx_041728 iCache_io_SRAMIO_3_cen", false,-1);
        tracep->declBit(c+4,"ysyx_041728 iCache_io_SRAMIO_3_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache_io_SRAMIO_3_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache_io_SRAMIO_3_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache_io_SRAMIO_3_wmask", false,-1, 127,0);
        tracep->declArray(c+123,"ysyx_041728 iCache_io_SRAMIO_3_rdata", false,-1, 127,0);
        tracep->declBit(c+64,"ysyx_041728 iCache_updataICache_0", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 axiIIO_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 axiIIO_reset", false,-1);
        tracep->declBit(c+3978,"ysyx_041728 axiIIO_io_axiIO_awready", false,-1);
        tracep->declBit(c+127,"ysyx_041728 axiIIO_io_axiIO_awvalid", false,-1);
        tracep->declBus(c+128,"ysyx_041728 axiIIO_io_axiIO_awaddr", false,-1, 31,0);
        tracep->declBus(c+4063,"ysyx_041728 axiIIO_io_axiIO_awsize", false,-1, 2,0);
        tracep->declBit(c+3985,"ysyx_041728 axiIIO_io_axiIO_wready", false,-1);
        tracep->declBit(c+129,"ysyx_041728 axiIIO_io_axiIO_wvalid", false,-1);
        tracep->declQuad(c+4064,"ysyx_041728 axiIIO_io_axiIO_wdata", false,-1, 63,0);
        tracep->declBus(c+4066,"ysyx_041728 axiIIO_io_axiIO_wstrb", false,-1, 7,0);
        tracep->declBit(c+129,"ysyx_041728 axiIIO_io_axiIO_wlast", false,-1);
        tracep->declBit(c+130,"ysyx_041728 axiIIO_io_axiIO_bready", false,-1);
        tracep->declBit(c+3992,"ysyx_041728 axiIIO_io_axiIO_bvalid", false,-1);
        tracep->declBit(c+3995,"ysyx_041728 axiIIO_io_axiIO_arready", false,-1);
        tracep->declBit(c+131,"ysyx_041728 axiIIO_io_axiIO_arvalid", false,-1);
        tracep->declBus(c+132,"ysyx_041728 axiIIO_io_axiIO_araddr", false,-1, 31,0);
        tracep->declBus(c+133,"ysyx_041728 axiIIO_io_axiIO_arlen", false,-1, 7,0);
        tracep->declBus(c+134,"ysyx_041728 axiIIO_io_axiIO_arsize", false,-1, 2,0);
        tracep->declBus(c+135,"ysyx_041728 axiIIO_io_axiIO_arburst", false,-1, 1,0);
        tracep->declBit(c+136,"ysyx_041728 axiIIO_io_axiIO_rready", false,-1);
        tracep->declBit(c+4003,"ysyx_041728 axiIIO_io_axiIO_rvalid", false,-1);
        tracep->declQuad(c+4006,"ysyx_041728 axiIIO_io_axiIO_rdata", false,-1, 63,0);
        tracep->declBit(c+4008,"ysyx_041728 axiIIO_io_axiIO_rlast", false,-1);
        tracep->declBit(c+107,"ysyx_041728 axiIIO_io_cache_ar_valid_o", false,-1);
        tracep->declBus(c+108,"ysyx_041728 axiIIO_io_cache_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_041728 axiIIO_io_cache_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4003,"ysyx_041728 axiIIO_io_cache_r_valid_i", false,-1);
        tracep->declQuad(c+4006,"ysyx_041728 axiIIO_io_cache_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4008,"ysyx_041728 axiIIO_io_cache_r_last_i", false,-1);
        tracep->declBit(c+4067,"ysyx_041728 axiIIO_io_cache_w_valid_o", false,-1);
        tracep->declBit(c+4058,"ysyx_041728 axiIIO_io_cache_w_ready_i", false,-1);
        tracep->declQuad(c+4064,"ysyx_041728 axiIIO_io_cache_w_data_o", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_041728 axiIIO_io_cache_w_addr_o", false,-1, 31,0);
        tracep->declBus(c+4066,"ysyx_041728 axiIIO_io_cache_w_mask_o", false,-1, 7,0);
        tracep->declBus(c+4068,"ysyx_041728 axiIIO_io_cache_wsize", false,-1, 1,0);
        tracep->declBit(c+95,"ysyx_041728 dArbIns_io_arbIn_valid", false,-1);
        tracep->declBit(c+63,"ysyx_041728 dArbIns_io_arbIn_ready", false,-1);
        tracep->declQuad(c+96,"ysyx_041728 dArbIns_io_arbIn_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns_io_arbIn_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns_io_arbIn_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns_io_arbIn_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dArbIns_io_arbIn_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dArbIns_io_arbIn_mask", false,-1, 7,0);
        tracep->declBit(c+137,"ysyx_041728 dArbIns_io_arbMMIO_valid", false,-1);
        tracep->declBit(c+138,"ysyx_041728 dArbIns_io_arbMMIO_ready", false,-1);
        tracep->declQuad(c+139,"ysyx_041728 dArbIns_io_arbMMIO_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns_io_arbMMIO_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns_io_arbMMIO_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns_io_arbMMIO_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dArbIns_io_arbMMIO_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dArbIns_io_arbMMIO_mask", false,-1, 7,0);
        tracep->declBit(c+141,"ysyx_041728 dArbIns_io_arbClint_valid", false,-1);
        tracep->declQuad(c+142,"ysyx_041728 dArbIns_io_arbClint_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns_io_arbClint_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns_io_arbClint_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns_io_arbClint_addr", false,-1, 31,0);
        tracep->declBit(c+144,"ysyx_041728 dArbIns_io_arbDCache_valid", false,-1);
        tracep->declBit(c+65,"ysyx_041728 dArbIns_io_arbDCache_ready", false,-1);
        tracep->declQuad(c+145,"ysyx_041728 dArbIns_io_arbDCache_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns_io_arbDCache_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns_io_arbDCache_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns_io_arbDCache_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dArbIns_io_arbDCache_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dArbIns_io_arbDCache_mask", false,-1, 7,0);
        tracep->declBit(c+3976,"ysyx_041728 mmioDCache_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 mmioDCache_reset", false,-1);
        tracep->declBit(c+106,"ysyx_041728 mmioDCache_io_block", false,-1);
        tracep->declBit(c+137,"ysyx_041728 mmioDCache_io_mmioIn_valid", false,-1);
        tracep->declBit(c+138,"ysyx_041728 mmioDCache_io_mmioIn_ready", false,-1);
        tracep->declQuad(c+139,"ysyx_041728 mmioDCache_io_mmioIn_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 mmioDCache_io_mmioIn_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 mmioDCache_io_mmioIn_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 mmioDCache_io_mmioIn_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 mmioDCache_io_mmioIn_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 mmioDCache_io_mmioIn_mask", false,-1, 7,0);
        tracep->declBit(c+147,"ysyx_041728 mmioDCache_io_mmioOut_valid", false,-1);
        tracep->declBit(c+4041,"ysyx_041728 mmioDCache_io_mmioOut_ready", false,-1);
        tracep->declQuad(c+4042,"ysyx_041728 mmioDCache_io_mmioOut_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 mmioDCache_io_mmioOut_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 mmioDCache_io_mmioOut_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 mmioDCache_io_mmioOut_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 mmioDCache_io_mmioOut_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 mmioDCache_io_mmioOut_mask", false,-1, 7,0);
        tracep->declBit(c+3976,"ysyx_041728 dCache_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 dCache_reset", false,-1);
        tracep->declBit(c+148,"ysyx_041728 dCache_io_cacheOut_ar_valid_o", false,-1);
        tracep->declBus(c+149,"ysyx_041728 dCache_io_cacheOut_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+150,"ysyx_041728 dCache_io_cacheOut_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4034,"ysyx_041728 dCache_io_cacheOut_r_valid_i", false,-1);
        tracep->declQuad(c+4037,"ysyx_041728 dCache_io_cacheOut_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4039,"ysyx_041728 dCache_io_cacheOut_r_last_i", false,-1);
        tracep->declBit(c+151,"ysyx_041728 dCache_io_cacheOut_w_valid_o", false,-1);
        tracep->declBit(c+5,"ysyx_041728 dCache_io_cacheOut_w_ready_i", false,-1);
        tracep->declQuad(c+98,"ysyx_041728 dCache_io_cacheOut_w_data_o", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_041728 dCache_io_cacheOut_w_addr_o", false,-1, 31,0);
        tracep->declBus(c+103,"ysyx_041728 dCache_io_cacheOut_w_mask_o", false,-1, 7,0);
        tracep->declBus(c+102,"ysyx_041728 dCache_io_cacheOut_wsize", false,-1, 1,0);
        tracep->declBit(c+144,"ysyx_041728 dCache_io_cacheIn_valid", false,-1);
        tracep->declBit(c+65,"ysyx_041728 dCache_io_cacheIn_ready", false,-1);
        tracep->declQuad(c+145,"ysyx_041728 dCache_io_cacheIn_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dCache_io_cacheIn_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dCache_io_cacheIn_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dCache_io_cacheIn_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dCache_io_cacheIn_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dCache_io_cacheIn_mask", false,-1, 7,0);
        tracep->declBit(c+66,"ysyx_041728 dCache_io_SRAMIO_0_cen", false,-1);
        tracep->declBit(c+67,"ysyx_041728 dCache_io_SRAMIO_0_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache_io_SRAMIO_0_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache_io_SRAMIO_0_addr", false,-1, 5,0);
        tracep->declArray(c+6,"ysyx_041728 dCache_io_SRAMIO_0_wmask", false,-1, 127,0);
        tracep->declArray(c+153,"ysyx_041728 dCache_io_SRAMIO_0_rdata", false,-1, 127,0);
        tracep->declBit(c+72,"ysyx_041728 dCache_io_SRAMIO_1_cen", false,-1);
        tracep->declBit(c+73,"ysyx_041728 dCache_io_SRAMIO_1_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache_io_SRAMIO_1_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache_io_SRAMIO_1_addr", false,-1, 5,0);
        tracep->declArray(c+10,"ysyx_041728 dCache_io_SRAMIO_1_wmask", false,-1, 127,0);
        tracep->declArray(c+157,"ysyx_041728 dCache_io_SRAMIO_1_rdata", false,-1, 127,0);
        tracep->declBit(c+74,"ysyx_041728 dCache_io_SRAMIO_2_cen", false,-1);
        tracep->declBit(c+75,"ysyx_041728 dCache_io_SRAMIO_2_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache_io_SRAMIO_2_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache_io_SRAMIO_2_addr", false,-1, 5,0);
        tracep->declArray(c+14,"ysyx_041728 dCache_io_SRAMIO_2_wmask", false,-1, 127,0);
        tracep->declArray(c+161,"ysyx_041728 dCache_io_SRAMIO_2_rdata", false,-1, 127,0);
        tracep->declBit(c+76,"ysyx_041728 dCache_io_SRAMIO_3_cen", false,-1);
        tracep->declBit(c+77,"ysyx_041728 dCache_io_SRAMIO_3_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache_io_SRAMIO_3_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache_io_SRAMIO_3_addr", false,-1, 5,0);
        tracep->declArray(c+18,"ysyx_041728 dCache_io_SRAMIO_3_wmask", false,-1, 127,0);
        tracep->declArray(c+165,"ysyx_041728 dCache_io_SRAMIO_3_rdata", false,-1, 127,0);
        tracep->declBit(c+106,"ysyx_041728 dCache_io_block", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 clintIns_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 clintIns_reset", false,-1);
        tracep->declBit(c+141,"ysyx_041728 clintIns_io_clintIO_valid", false,-1);
        tracep->declQuad(c+142,"ysyx_041728 clintIns_io_clintIO_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 clintIns_io_clintIO_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 clintIns_io_clintIO_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 clintIns_io_clintIO_addr", false,-1, 31,0);
        tracep->declBit(c+104,"ysyx_041728 clintIns_intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 clintIns_startTimeCnt_0", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 axiDIO_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 axiDIO_reset", false,-1);
        tracep->declBit(c+4009,"ysyx_041728 axiDIO_io_axiIO_awready", false,-1);
        tracep->declBit(c+169,"ysyx_041728 axiDIO_io_axiIO_awvalid", false,-1);
        tracep->declBus(c+170,"ysyx_041728 axiDIO_io_axiIO_awaddr", false,-1, 31,0);
        tracep->declBus(c+171,"ysyx_041728 axiDIO_io_axiIO_awsize", false,-1, 2,0);
        tracep->declBit(c+4016,"ysyx_041728 axiDIO_io_axiIO_wready", false,-1);
        tracep->declBit(c+172,"ysyx_041728 axiDIO_io_axiIO_wvalid", false,-1);
        tracep->declQuad(c+173,"ysyx_041728 axiDIO_io_axiIO_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"ysyx_041728 axiDIO_io_axiIO_wstrb", false,-1, 7,0);
        tracep->declBit(c+172,"ysyx_041728 axiDIO_io_axiIO_wlast", false,-1);
        tracep->declBit(c+176,"ysyx_041728 axiDIO_io_axiIO_bready", false,-1);
        tracep->declBit(c+4023,"ysyx_041728 axiDIO_io_axiIO_bvalid", false,-1);
        tracep->declBit(c+4026,"ysyx_041728 axiDIO_io_axiIO_arready", false,-1);
        tracep->declBit(c+177,"ysyx_041728 axiDIO_io_axiIO_arvalid", false,-1);
        tracep->declBus(c+178,"ysyx_041728 axiDIO_io_axiIO_araddr", false,-1, 31,0);
        tracep->declBus(c+179,"ysyx_041728 axiDIO_io_axiIO_arlen", false,-1, 7,0);
        tracep->declBus(c+180,"ysyx_041728 axiDIO_io_axiIO_arsize", false,-1, 2,0);
        tracep->declBus(c+181,"ysyx_041728 axiDIO_io_axiIO_arburst", false,-1, 1,0);
        tracep->declBit(c+182,"ysyx_041728 axiDIO_io_axiIO_rready", false,-1);
        tracep->declBit(c+4034,"ysyx_041728 axiDIO_io_axiIO_rvalid", false,-1);
        tracep->declQuad(c+4037,"ysyx_041728 axiDIO_io_axiIO_rdata", false,-1, 63,0);
        tracep->declBit(c+4039,"ysyx_041728 axiDIO_io_axiIO_rlast", false,-1);
        tracep->declBit(c+148,"ysyx_041728 axiDIO_io_cache_ar_valid_o", false,-1);
        tracep->declBus(c+149,"ysyx_041728 axiDIO_io_cache_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+150,"ysyx_041728 axiDIO_io_cache_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4034,"ysyx_041728 axiDIO_io_cache_r_valid_i", false,-1);
        tracep->declQuad(c+4037,"ysyx_041728 axiDIO_io_cache_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4039,"ysyx_041728 axiDIO_io_cache_r_last_i", false,-1);
        tracep->declBit(c+151,"ysyx_041728 axiDIO_io_cache_w_valid_o", false,-1);
        tracep->declBit(c+5,"ysyx_041728 axiDIO_io_cache_w_ready_i", false,-1);
        tracep->declQuad(c+98,"ysyx_041728 axiDIO_io_cache_w_data_o", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_041728 axiDIO_io_cache_w_addr_o", false,-1, 31,0);
        tracep->declBus(c+103,"ysyx_041728 axiDIO_io_cache_w_mask_o", false,-1, 7,0);
        tracep->declBus(c+102,"ysyx_041728 axiDIO_io_cache_wsize", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_clock", false,-1);
        tracep->declBit(c+1,"ysyx_041728 mem_io_memIO_cen", false,-1);
        tracep->declBit(c+1,"ysyx_041728 mem_io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+111,"ysyx_041728 mem_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_1_clock", false,-1);
        tracep->declBit(c+66,"ysyx_041728 mem_1_io_memIO_cen", false,-1);
        tracep->declBit(c+67,"ysyx_041728 mem_1_io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_1_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_1_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+6,"ysyx_041728 mem_1_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+153,"ysyx_041728 mem_1_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_2_clock", false,-1);
        tracep->declBit(c+2,"ysyx_041728 mem_2_io_memIO_cen", false,-1);
        tracep->declBit(c+2,"ysyx_041728 mem_2_io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem_2_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem_2_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem_2_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+115,"ysyx_041728 mem_2_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_3_clock", false,-1);
        tracep->declBit(c+72,"ysyx_041728 mem_3_io_memIO_cen", false,-1);
        tracep->declBit(c+73,"ysyx_041728 mem_3_io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_3_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_3_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+10,"ysyx_041728 mem_3_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+157,"ysyx_041728 mem_3_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_4_clock", false,-1);
        tracep->declBit(c+3,"ysyx_041728 mem_4_io_memIO_cen", false,-1);
        tracep->declBit(c+3,"ysyx_041728 mem_4_io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem_4_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem_4_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem_4_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+119,"ysyx_041728 mem_4_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_5_clock", false,-1);
        tracep->declBit(c+74,"ysyx_041728 mem_5_io_memIO_cen", false,-1);
        tracep->declBit(c+75,"ysyx_041728 mem_5_io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_5_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_5_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+14,"ysyx_041728 mem_5_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+161,"ysyx_041728 mem_5_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_6_clock", false,-1);
        tracep->declBit(c+4,"ysyx_041728 mem_6_io_memIO_cen", false,-1);
        tracep->declBit(c+4,"ysyx_041728 mem_6_io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem_6_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem_6_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem_6_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+123,"ysyx_041728 mem_6_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_7_clock", false,-1);
        tracep->declBit(c+76,"ysyx_041728 mem_7_io_memIO_cen", false,-1);
        tracep->declBit(c+77,"ysyx_041728 mem_7_io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_7_io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_7_io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+18,"ysyx_041728 mem_7_io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+165,"ysyx_041728 mem_7_io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns reset", false,-1);
        tracep->declBit(c+90,"ysyx_041728 riscvIns io_instIO_valid", false,-1);
        tracep->declBit(c+91,"ysyx_041728 riscvIns io_instIO_ready", false,-1);
        tracep->declQuad(c+92,"ysyx_041728 riscvIns io_instIO_data_read", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_041728 riscvIns io_instIO_addr", false,-1, 31,0);
        tracep->declBit(c+95,"ysyx_041728 riscvIns io_dataIO_valid", false,-1);
        tracep->declBit(c+63,"ysyx_041728 riscvIns io_dataIO_ready", false,-1);
        tracep->declQuad(c+96,"ysyx_041728 riscvIns io_dataIO_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 riscvIns io_dataIO_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 riscvIns io_dataIO_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 riscvIns io_dataIO_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 riscvIns io_dataIO_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 riscvIns io_dataIO_mask", false,-1, 7,0);
        tracep->declBit(c+104,"ysyx_041728 riscvIns intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 riscvIns startTimeCnt", false,-1);
        tracep->declBit(c+106,"ysyx_041728 riscvIns block2_0", false,-1);
        tracep->declBit(c+64,"ysyx_041728 riscvIns fencei_0", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns ifu_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns ifu_reset", false,-1);
        tracep->declBus(c+183,"ysyx_041728 riscvIns ifu_io_instIn", false,-1, 31,0);
        tracep->declBus(c+183,"ysyx_041728 riscvIns ifu_io_instOut", false,-1, 31,0);
        tracep->declBus(c+94,"ysyx_041728 riscvIns ifu_io_pc", false,-1, 31,0);
        tracep->declBus(c+184,"ysyx_041728 riscvIns ifu_io_snpc", false,-1, 31,0);
        tracep->declBus(c+185,"ysyx_041728 riscvIns ifu_io_dnpc", false,-1, 31,0);
        tracep->declBit(c+186,"ysyx_041728 riscvIns ifu_io_jump", false,-1);
        tracep->declBit(c+104,"ysyx_041728 riscvIns ifu_intrTimeCnt_0", false,-1);
        tracep->declBit(c+187,"ysyx_041728 riscvIns ifu_hazardPCBlock_0", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns ifu_block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns ifu_block23_0", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns idu_clock", false,-1);
        tracep->declBus(c+189,"ysyx_041728 riscvIns idu_io_pc", false,-1, 31,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns idu_io_inst", false,-1, 31,0);
        tracep->declBit(c+191,"ysyx_041728 riscvIns idu_io_regEn", false,-1);
        tracep->declQuad(c+192,"ysyx_041728 riscvIns idu_io_dataEx_imme", false,-1, 63,0);
        tracep->declQuad(c+194,"ysyx_041728 riscvIns idu_io_dataEx_dOut1", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_041728 riscvIns idu_io_dataEx_dOut2", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_041728 riscvIns idu_io_dataEx_dIn", false,-1, 63,0);
        tracep->declBus(c+200,"ysyx_041728 riscvIns idu_io_rdOut", false,-1, 4,0);
        tracep->declBus(c+201,"ysyx_041728 riscvIns idu_io_rdIn", false,-1, 4,0);
        tracep->declBus(c+202,"ysyx_041728 riscvIns idu_io_rs1", false,-1, 4,0);
        tracep->declBus(c+203,"ysyx_041728 riscvIns idu_io_rs2", false,-1, 4,0);
        tracep->declBus(c+204,"ysyx_041728 riscvIns idu_io_rsWB", false,-1, 4,0);
        tracep->declQuad(c+205,"ysyx_041728 riscvIns idu_io_dOutWB", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_041728 riscvIns idu_block1", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns idu_block23", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu_reset", false,-1);
        tracep->declBus(c+207,"ysyx_041728 riscvIns exu_io_AluSrc1", false,-1, 1,0);
        tracep->declBus(c+208,"ysyx_041728 riscvIns exu_io_AluSrc2", false,-1, 1,0);
        tracep->declBus(c+209,"ysyx_041728 riscvIns exu_io_ALUCtrl", false,-1, 4,0);
        tracep->declBit(c+210,"ysyx_041728 riscvIns exu_io_dnpcSrc", false,-1);
        tracep->declBus(c+211,"ysyx_041728 riscvIns exu_io_ResultSrc", false,-1, 1,0);
        tracep->declBus(c+212,"ysyx_041728 riscvIns exu_io_memReadNum", false,-1, 2,0);
        tracep->declQuad(c+213,"ysyx_041728 riscvIns exu_io_dataId_imme", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_041728 riscvIns exu_io_dataId_dOut1", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_041728 riscvIns exu_io_dataId_dOut2", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_041728 riscvIns exu_io_dataId_dIn", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_041728 riscvIns exu_io_dataOut_ALUResOut", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_041728 riscvIns exu_io_dataOut_wdata", false,-1, 63,0);
        tracep->declQuad(c+223,"ysyx_041728 riscvIns exu_io_dataOut_rdata", false,-1, 63,0);
        tracep->declBit(c+225,"ysyx_041728 riscvIns exu_io_brTake", false,-1);
        tracep->declBus(c+226,"ysyx_041728 riscvIns exu_io_pc", false,-1, 31,0);
        tracep->declBus(c+227,"ysyx_041728 riscvIns exu_io_snpc", false,-1, 31,0);
        tracep->declBus(c+228,"ysyx_041728 riscvIns exu_io_dnpc", false,-1, 31,0);
        tracep->declBit(c+229,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_csrrwen", false,-1);
        tracep->declBit(c+230,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_csrswen", false,-1);
        tracep->declBit(c+231,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_csrrsien", false,-1);
        tracep->declBit(c+232,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_csrrcien", false,-1);
        tracep->declBit(c+233,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_csrrcen", false,-1);
        tracep->declBit(c+234,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_csrrwien", false,-1);
        tracep->declBit(c+235,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_ecall", false,-1);
        tracep->declBit(c+236,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_rfen", false,-1);
        tracep->declBit(c+237,"ysyx_041728 riscvIns exu_io_CSRCtrlIf_mepc2pc", false,-1);
        tracep->declBus(c+238,"ysyx_041728 riscvIns exu_io_uimm", false,-1, 4,0);
        tracep->declQuad(c+239,"ysyx_041728 riscvIns exu_io_aluResIn", false,-1, 63,0);
        tracep->declBus(c+241,"ysyx_041728 riscvIns exu_io_forwardA", false,-1, 1,0);
        tracep->declBus(c+242,"ysyx_041728 riscvIns exu_io_forwardB", false,-1, 1,0);
        tracep->declQuad(c+243,"ysyx_041728 riscvIns exu_io_aluRes1", false,-1, 63,0);
        tracep->declQuad(c+205,"ysyx_041728 riscvIns exu_io_aluRes3", false,-1, 63,0);
        tracep->declBit(c+104,"ysyx_041728 riscvIns exu_intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 riscvIns exu_startTimeCnt", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns exu_block1", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu_block23", false,-1);
        tracep->declBit(c+245,"ysyx_041728 riscvIns hazardu_io_regEnEXMEM", false,-1);
        tracep->declBus(c+246,"ysyx_041728 riscvIns hazardu_io_rdEXMEM", false,-1, 4,0);
        tracep->declBus(c+238,"ysyx_041728 riscvIns hazardu_io_rs1IDEX", false,-1, 4,0);
        tracep->declBus(c+247,"ysyx_041728 riscvIns hazardu_io_rs2IDEX", false,-1, 4,0);
        tracep->declBit(c+191,"ysyx_041728 riscvIns hazardu_io_regEnMEMWB", false,-1);
        tracep->declBus(c+201,"ysyx_041728 riscvIns hazardu_io_rdMEMWB", false,-1, 4,0);
        tracep->declBit(c+248,"ysyx_041728 riscvIns hazardu_io_regEnWBEND", false,-1);
        tracep->declBus(c+204,"ysyx_041728 riscvIns hazardu_io_rdWBEND", false,-1, 4,0);
        tracep->declBus(c+241,"ysyx_041728 riscvIns hazardu_io_forwardA", false,-1, 1,0);
        tracep->declBus(c+242,"ysyx_041728 riscvIns hazardu_io_forwardB", false,-1, 1,0);
        tracep->declBus(c+202,"ysyx_041728 riscvIns hazardu_io_rs1IFID", false,-1, 4,0);
        tracep->declBus(c+203,"ysyx_041728 riscvIns hazardu_io_rs2IFID", false,-1, 4,0);
        tracep->declBus(c+249,"ysyx_041728 riscvIns hazardu_io_rdIDEX", false,-1, 4,0);
        tracep->declBus(c+250,"ysyx_041728 riscvIns hazardu_io_resSrc", false,-1, 1,0);
        tracep->declBit(c+187,"ysyx_041728 riscvIns hazardu_io_loadHazard", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns_reset", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns_io_exjump", false,-1);
        tracep->declBus(c+94,"ysyx_041728 riscvIns preBranchIns_io_ifpc", false,-1, 31,0);
        tracep->declBus(c+226,"ysyx_041728 riscvIns preBranchIns_io_expc", false,-1, 31,0);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns_io_exdpc", false,-1, 31,0);
        tracep->declBus(c+252,"ysyx_041728 riscvIns preBranchIns_io_ifdnpc", false,-1, 31,0);
        tracep->declBit(c+253,"ysyx_041728 riscvIns preBranchIns_io_ifjump", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns preBranchIns_block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns preBranchIns_block23_0", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns memVGenInst_io_inst", false,-1, 31,0);
        tracep->declBit(c+254,"ysyx_041728 riscvIns memVGenInst_io_valid", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl_io_inst", false,-1, 31,0);
        tracep->declBus(c+255,"ysyx_041728 riscvIns ctrl_io_CtrlS_AluSrc1", false,-1, 1,0);
        tracep->declBus(c+256,"ysyx_041728 riscvIns ctrl_io_CtrlS_AluSrc2", false,-1, 1,0);
        tracep->declBus(c+257,"ysyx_041728 riscvIns ctrl_io_CtrlS_ALUCtrl", false,-1, 4,0);
        tracep->declBit(c+258,"ysyx_041728 riscvIns ctrl_io_CtrlS_memWriteM", false,-1);
        tracep->declBus(c+259,"ysyx_041728 riscvIns ctrl_io_CtrlS_memWriteMask", false,-1, 7,0);
        tracep->declBus(c+260,"ysyx_041728 riscvIns ctrl_io_CtrlS_memReadNum", false,-1, 2,0);
        tracep->declBit(c+261,"ysyx_041728 riscvIns ctrl_io_CtrlS_dnpcSrc", false,-1);
        tracep->declBit(c+262,"ysyx_041728 riscvIns ctrl_io_CtrlS_jump", false,-1);
        tracep->declBit(c+263,"ysyx_041728 riscvIns ctrl_io_CtrlS_branch", false,-1);
        tracep->declBit(c+264,"ysyx_041728 riscvIns ctrl_io_CtrlS_regEn", false,-1);
        tracep->declBus(c+265,"ysyx_041728 riscvIns ctrl_io_CtrlS_ResultSrc", false,-1, 1,0);
        tracep->declBit(c+266,"ysyx_041728 riscvIns ctrl_io_CtrlS_fencei", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns csrCtrl_io_inst", false,-1, 31,0);
        tracep->declBit(c+267,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_csrrwen", false,-1);
        tracep->declBit(c+268,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_csrswen", false,-1);
        tracep->declBit(c+269,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_csrrsien", false,-1);
        tracep->declBit(c+270,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_csrrcien", false,-1);
        tracep->declBit(c+271,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_csrrcen", false,-1);
        tracep->declBit(c+272,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_csrrwien", false,-1);
        tracep->declBit(c+273,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_ecall", false,-1);
        tracep->declBit(c+274,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_rfen", false,-1);
        tracep->declBit(c+275,"ysyx_041728 riscvIns csrCtrl_io_CSRCtrlIf_mepc2pc", false,-1);
        tracep->declBit(c+78,"ysyx_041728 riscvIns difftest_v", false,-1);
        tracep->declBit(c+79,"ysyx_041728 riscvIns intrins_intr", false,-1);
        tracep->declBit(c+80,"ysyx_041728 riscvIns Ebpro_block", false,-1);
        tracep->declBus(c+276,"ysyx_041728 riscvIns Ebpro_inst", false,-1, 31,0);
        tracep->declBit(c+277,"ysyx_041728 riscvIns skipinst_v", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns block1_0", false,-1);
        tracep->declBit(c+106,"ysyx_041728 riscvIns block2", false,-1);
        tracep->declArray(c+278,"ysyx_041728 riscvIns pipEX2MEMReg", false,-1, 247,0);
        tracep->declBit(c+286,"ysyx_041728 riscvIns pipEX2MEMWire_valid", false,-1);
        tracep->declBit(c+81,"ysyx_041728 riscvIns block3", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns block23", false,-1);
        tracep->declBit(c+23,"ysyx_041728 riscvIns pipBlock", false,-1);
        tracep->declBit(c+287,"ysyx_041728 riscvIns pipID2ExWire_branch", false,-1);
        tracep->declBit(c+288,"ysyx_041728 riscvIns pipID2ExWire_jump", false,-1);
        tracep->declBit(c+237,"ysyx_041728 riscvIns pipCSRRegWire_mepc2pc", false,-1);
        tracep->declBit(c+235,"ysyx_041728 riscvIns pipCSRRegWire_ecall", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns dnpcTakenWithoutPreB", false,-1);
        tracep->declBit(c+289,"ysyx_041728 riscvIns pipID2ExWire_ifjump", false,-1);
        tracep->declBit(c+290,"ysyx_041728 riscvIns jump1", false,-1);
        tracep->declBus(c+291,"ysyx_041728 riscvIns pipID2ExWire_ifdnpc", false,-1, 31,0);
        tracep->declBit(c+292,"ysyx_041728 riscvIns jump2", false,-1);
        tracep->declBus(c+226,"ysyx_041728 riscvIns pipID2ExWire_pc", false,-1, 31,0);
        tracep->declBit(c+293,"ysyx_041728 riscvIns pipID2ExWire_fencei", false,-1);
        tracep->declBit(c+294,"ysyx_041728 riscvIns pipFlashWire", false,-1);
        tracep->declBus(c+295,"ysyx_041728 riscvIns pipIF2IDWire_ifdnpc", false,-1, 31,0);
        tracep->declBit(c+296,"ysyx_041728 riscvIns pipIF2IDWire_ifjump", false,-1);
        tracep->declBus(c+297,"ysyx_041728 riscvIns pipIF2IDWire_snpc", false,-1, 31,0);
        tracep->declBus(c+298,"ysyx_041728 riscvIns pipIF2IDWire_pc", false,-1, 31,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns pipIF2IDWire_inst", false,-1, 31,0);
        tracep->declBit(c+299,"ysyx_041728 riscvIns pipIF2IDWire_cmd", false,-1);
        tracep->declBus(c+250,"ysyx_041728 riscvIns pipID2ExWire_resultSrc", false,-1, 1,0);
        tracep->declBit(c+300,"ysyx_041728 riscvIns pipID2ExWire_regEn", false,-1);
        tracep->declBit(c+301,"ysyx_041728 riscvIns pipID2ExWire_memWriteM", false,-1);
        tracep->declBus(c+302,"ysyx_041728 riscvIns pipID2ExWire_mask", false,-1, 7,0);
        tracep->declBit(c+303,"ysyx_041728 riscvIns pipID2ExWire_valid", false,-1);
        tracep->declBus(c+304,"ysyx_041728 riscvIns pipID2ExWire_memReadNum", false,-1, 2,0);
        tracep->declBus(c+249,"ysyx_041728 riscvIns pipID2ExWire_rd", false,-1, 4,0);
        tracep->declBus(c+305,"ysyx_041728 riscvIns pipID2ExWire_snpc", false,-1, 31,0);
        tracep->declBus(c+306,"ysyx_041728 riscvIns pipID2ExWire_inst", false,-1, 31,0);
        tracep->declBit(c+307,"ysyx_041728 riscvIns pipID2ExWire_cmd", false,-1);
        tracep->declBit(c+236,"ysyx_041728 riscvIns pipCSRRegWire_rfen", false,-1);
        tracep->declBit(c+308,"ysyx_041728 riscvIns pipEX2MEMWire_intr", false,-1);
        tracep->declBit(c+309,"ysyx_041728 riscvIns pipEX2MEMWire_fencei", false,-1);
        tracep->declBus(c+310,"ysyx_041728 riscvIns pipEX2MEMWire_pc", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_041728 riscvIns pipEX2MEMWire_ResultSrc", false,-1, 1,0);
        tracep->declBit(c+245,"ysyx_041728 riscvIns pipEX2MEMWire_regEn", false,-1);
        tracep->declBus(c+312,"ysyx_041728 riscvIns pipEX2MEMWire_mask", false,-1, 7,0);
        tracep->declBus(c+313,"ysyx_041728 riscvIns pipEX2MEMWire_memReadNum", false,-1, 2,0);
        tracep->declBus(c+246,"ysyx_041728 riscvIns pipEX2MEMWire_rd", false,-1, 4,0);
        tracep->declBus(c+314,"ysyx_041728 riscvIns pipEX2MEMWire_snpc", false,-1, 31,0);
        tracep->declQuad(c+315,"ysyx_041728 riscvIns pipEX2MEMWire_writeDataM", false,-1, 63,0);
        tracep->declQuad(c+317,"ysyx_041728 riscvIns pipEX2MEMWire_ALURes", false,-1, 63,0);
        tracep->declBus(c+319,"ysyx_041728 riscvIns pipEX2MEMWire_inst", false,-1, 31,0);
        tracep->declBit(c+320,"ysyx_041728 riscvIns pipEX2MEMWire_cmd", false,-1);
        tracep->declBit(c+321,"ysyx_041728 riscvIns skip", false,-1);
        tracep->declBit(c+322,"ysyx_041728 riscvIns jud", false,-1);
        tracep->declArray(c+323,"ysyx_041728 riscvIns pipMEM2WBReg", false,-1, 173,0);
        tracep->declBus(c+189,"ysyx_041728 riscvIns pipMEM2WBWire_pc", false,-1, 31,0);
        tracep->declBus(c+329,"ysyx_041728 riscvIns npcsend", false,-1, 31,0);
        tracep->declBit(c+330,"ysyx_041728 riscvIns pipMEM2WBWire_intr", false,-1);
        tracep->declBit(c+191,"ysyx_041728 riscvIns pipMEM2WBWire_regEn", false,-1);
        tracep->declBus(c+201,"ysyx_041728 riscvIns pipMEM2WBWire_rd", false,-1, 4,0);
        tracep->declQuad(c+239,"ysyx_041728 riscvIns pipMEM2WBWire_ALURes", false,-1, 63,0);
        tracep->declBus(c+276,"ysyx_041728 riscvIns pipMEM2WBWire_inst", false,-1, 31,0);
        tracep->declBit(c+331,"ysyx_041728 riscvIns pipMEM2WBWire_cmd", false,-1);
        tracep->declBit(c+187,"ysyx_041728 riscvIns hazardPCBlock", false,-1);
        tracep->declBit(c+64,"ysyx_041728 riscvIns fencei", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns ifu clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns ifu reset", false,-1);
        tracep->declBus(c+183,"ysyx_041728 riscvIns ifu io_instIn", false,-1, 31,0);
        tracep->declBus(c+183,"ysyx_041728 riscvIns ifu io_instOut", false,-1, 31,0);
        tracep->declBus(c+94,"ysyx_041728 riscvIns ifu io_pc", false,-1, 31,0);
        tracep->declBus(c+184,"ysyx_041728 riscvIns ifu io_snpc", false,-1, 31,0);
        tracep->declBus(c+185,"ysyx_041728 riscvIns ifu io_dnpc", false,-1, 31,0);
        tracep->declBit(c+186,"ysyx_041728 riscvIns ifu io_jump", false,-1);
        tracep->declBit(c+104,"ysyx_041728 riscvIns ifu intrTimeCnt_0", false,-1);
        tracep->declBit(c+187,"ysyx_041728 riscvIns ifu hazardPCBlock_0", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns ifu block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns ifu block23_0", false,-1);
        tracep->declBus(c+94,"ysyx_041728 riscvIns ifu pc", false,-1, 31,0);
        tracep->declBus(c+184,"ysyx_041728 riscvIns ifu snpc", false,-1, 31,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns idu clock", false,-1);
        tracep->declBus(c+189,"ysyx_041728 riscvIns idu io_pc", false,-1, 31,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns idu io_inst", false,-1, 31,0);
        tracep->declBit(c+191,"ysyx_041728 riscvIns idu io_regEn", false,-1);
        tracep->declQuad(c+192,"ysyx_041728 riscvIns idu io_dataEx_imme", false,-1, 63,0);
        tracep->declQuad(c+194,"ysyx_041728 riscvIns idu io_dataEx_dOut1", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_041728 riscvIns idu io_dataEx_dOut2", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_041728 riscvIns idu io_dataEx_dIn", false,-1, 63,0);
        tracep->declBus(c+200,"ysyx_041728 riscvIns idu io_rdOut", false,-1, 4,0);
        tracep->declBus(c+201,"ysyx_041728 riscvIns idu io_rdIn", false,-1, 4,0);
        tracep->declBus(c+202,"ysyx_041728 riscvIns idu io_rs1", false,-1, 4,0);
        tracep->declBus(c+203,"ysyx_041728 riscvIns idu io_rs2", false,-1, 4,0);
        tracep->declBus(c+204,"ysyx_041728 riscvIns idu io_rsWB", false,-1, 4,0);
        tracep->declQuad(c+205,"ysyx_041728 riscvIns idu io_dOutWB", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_041728 riscvIns idu block1", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns idu block23", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns idu imme_io_inst", false,-1, 31,0);
        tracep->declQuad(c+192,"ysyx_041728 riscvIns idu imme_io_imme", false,-1, 63,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns idu rf_clock", false,-1);
        tracep->declBus(c+189,"ysyx_041728 riscvIns idu rf_io_pc", false,-1, 31,0);
        tracep->declBit(c+191,"ysyx_041728 riscvIns idu rf_io_we", false,-1);
        tracep->declBus(c+202,"ysyx_041728 riscvIns idu rf_io_rs1", false,-1, 4,0);
        tracep->declBus(c+203,"ysyx_041728 riscvIns idu rf_io_rs2", false,-1, 4,0);
        tracep->declBus(c+201,"ysyx_041728 riscvIns idu rf_io_rd", false,-1, 4,0);
        tracep->declQuad(c+194,"ysyx_041728 riscvIns idu rf_io_dout1", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_041728 riscvIns idu rf_io_dout2", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_041728 riscvIns idu rf_io_din", false,-1, 63,0);
        tracep->declBus(c+204,"ysyx_041728 riscvIns idu rf_io_rsWB", false,-1, 4,0);
        tracep->declQuad(c+205,"ysyx_041728 riscvIns idu rf_io_doutWB", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_041728 riscvIns idu rf_block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns idu rf_block23_0", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns idu imme io_inst", false,-1, 31,0);
        tracep->declQuad(c+192,"ysyx_041728 riscvIns idu imme io_imme", false,-1, 63,0);
        tracep->declQuad(c+332,"ysyx_041728 riscvIns idu imme Iimm", false,-1, 63,0);
        tracep->declQuad(c+334,"ysyx_041728 riscvIns idu imme Simm", false,-1, 63,0);
        tracep->declQuad(c+336,"ysyx_041728 riscvIns idu imme Bimm", false,-1, 63,0);
        tracep->declQuad(c+338,"ysyx_041728 riscvIns idu imme Uimm", false,-1, 63,0);
        tracep->declQuad(c+340,"ysyx_041728 riscvIns idu imme Jimm", false,-1, 63,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns idu rf clock", false,-1);
        tracep->declBus(c+189,"ysyx_041728 riscvIns idu rf io_pc", false,-1, 31,0);
        tracep->declBit(c+191,"ysyx_041728 riscvIns idu rf io_we", false,-1);
        tracep->declBus(c+202,"ysyx_041728 riscvIns idu rf io_rs1", false,-1, 4,0);
        tracep->declBus(c+203,"ysyx_041728 riscvIns idu rf io_rs2", false,-1, 4,0);
        tracep->declBus(c+201,"ysyx_041728 riscvIns idu rf io_rd", false,-1, 4,0);
        tracep->declQuad(c+194,"ysyx_041728 riscvIns idu rf io_dout1", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_041728 riscvIns idu rf io_dout2", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_041728 riscvIns idu rf io_din", false,-1, 63,0);
        tracep->declBus(c+204,"ysyx_041728 riscvIns idu rf io_rsWB", false,-1, 4,0);
        tracep->declQuad(c+205,"ysyx_041728 riscvIns idu rf io_doutWB", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_041728 riscvIns idu rf block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns idu rf block23_0", false,-1);
        tracep->declQuad(c+4064,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_0", false,-1, 63,0);
        tracep->declQuad(c+342,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_1", false,-1, 63,0);
        tracep->declQuad(c+344,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_2", false,-1, 63,0);
        tracep->declQuad(c+346,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_3", false,-1, 63,0);
        tracep->declQuad(c+348,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_4", false,-1, 63,0);
        tracep->declQuad(c+350,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_5", false,-1, 63,0);
        tracep->declQuad(c+352,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_6", false,-1, 63,0);
        tracep->declQuad(c+354,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_7", false,-1, 63,0);
        tracep->declQuad(c+356,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_8", false,-1, 63,0);
        tracep->declQuad(c+358,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_9", false,-1, 63,0);
        tracep->declQuad(c+360,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_10", false,-1, 63,0);
        tracep->declQuad(c+362,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_11", false,-1, 63,0);
        tracep->declQuad(c+364,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_12", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_13", false,-1, 63,0);
        tracep->declQuad(c+368,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_14", false,-1, 63,0);
        tracep->declQuad(c+370,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_15", false,-1, 63,0);
        tracep->declQuad(c+372,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_16", false,-1, 63,0);
        tracep->declQuad(c+374,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_17", false,-1, 63,0);
        tracep->declQuad(c+376,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_18", false,-1, 63,0);
        tracep->declQuad(c+378,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_19", false,-1, 63,0);
        tracep->declQuad(c+380,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_20", false,-1, 63,0);
        tracep->declQuad(c+382,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_21", false,-1, 63,0);
        tracep->declQuad(c+384,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_22", false,-1, 63,0);
        tracep->declQuad(c+386,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_23", false,-1, 63,0);
        tracep->declQuad(c+388,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_24", false,-1, 63,0);
        tracep->declQuad(c+390,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_25", false,-1, 63,0);
        tracep->declQuad(c+392,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_26", false,-1, 63,0);
        tracep->declQuad(c+394,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_27", false,-1, 63,0);
        tracep->declQuad(c+396,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_28", false,-1, 63,0);
        tracep->declQuad(c+398,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_29", false,-1, 63,0);
        tracep->declQuad(c+400,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_30", false,-1, 63,0);
        tracep->declQuad(c+402,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_inst_31", false,-1, 63,0);
        tracep->declQuad(c+404,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins_pc", false,-1, 63,0);
        tracep->declQuad(c+4064,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_0", false,-1, 63,0);
        tracep->declQuad(c+342,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_1", false,-1, 63,0);
        tracep->declQuad(c+344,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_2", false,-1, 63,0);
        tracep->declQuad(c+346,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_3", false,-1, 63,0);
        tracep->declQuad(c+348,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_4", false,-1, 63,0);
        tracep->declQuad(c+350,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_5", false,-1, 63,0);
        tracep->declQuad(c+352,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_6", false,-1, 63,0);
        tracep->declQuad(c+354,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_7", false,-1, 63,0);
        tracep->declQuad(c+356,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_8", false,-1, 63,0);
        tracep->declQuad(c+358,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_9", false,-1, 63,0);
        tracep->declQuad(c+360,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_10", false,-1, 63,0);
        tracep->declQuad(c+362,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_11", false,-1, 63,0);
        tracep->declQuad(c+364,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_12", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_13", false,-1, 63,0);
        tracep->declQuad(c+368,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_14", false,-1, 63,0);
        tracep->declQuad(c+370,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_15", false,-1, 63,0);
        tracep->declQuad(c+372,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_16", false,-1, 63,0);
        tracep->declQuad(c+374,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_17", false,-1, 63,0);
        tracep->declQuad(c+376,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_18", false,-1, 63,0);
        tracep->declQuad(c+378,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_19", false,-1, 63,0);
        tracep->declQuad(c+380,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_20", false,-1, 63,0);
        tracep->declQuad(c+382,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_21", false,-1, 63,0);
        tracep->declQuad(c+384,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_22", false,-1, 63,0);
        tracep->declQuad(c+386,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_23", false,-1, 63,0);
        tracep->declQuad(c+388,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_24", false,-1, 63,0);
        tracep->declQuad(c+390,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_25", false,-1, 63,0);
        tracep->declQuad(c+392,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_26", false,-1, 63,0);
        tracep->declQuad(c+394,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_27", false,-1, 63,0);
        tracep->declQuad(c+396,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_28", false,-1, 63,0);
        tracep->declQuad(c+398,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_29", false,-1, 63,0);
        tracep->declQuad(c+400,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_30", false,-1, 63,0);
        tracep->declQuad(c+402,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins inst_31", false,-1, 63,0);
        tracep->declQuad(c+404,"ysyx_041728 riscvIns idu rf DPIC_RegRead_ins pc", false,-1, 63,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu reset", false,-1);
        tracep->declBus(c+207,"ysyx_041728 riscvIns exu io_AluSrc1", false,-1, 1,0);
        tracep->declBus(c+208,"ysyx_041728 riscvIns exu io_AluSrc2", false,-1, 1,0);
        tracep->declBus(c+209,"ysyx_041728 riscvIns exu io_ALUCtrl", false,-1, 4,0);
        tracep->declBit(c+210,"ysyx_041728 riscvIns exu io_dnpcSrc", false,-1);
        tracep->declBus(c+211,"ysyx_041728 riscvIns exu io_ResultSrc", false,-1, 1,0);
        tracep->declBus(c+212,"ysyx_041728 riscvIns exu io_memReadNum", false,-1, 2,0);
        tracep->declQuad(c+213,"ysyx_041728 riscvIns exu io_dataId_imme", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_041728 riscvIns exu io_dataId_dOut1", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_041728 riscvIns exu io_dataId_dOut2", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_041728 riscvIns exu io_dataId_dIn", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_041728 riscvIns exu io_dataOut_ALUResOut", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_041728 riscvIns exu io_dataOut_wdata", false,-1, 63,0);
        tracep->declQuad(c+223,"ysyx_041728 riscvIns exu io_dataOut_rdata", false,-1, 63,0);
        tracep->declBit(c+225,"ysyx_041728 riscvIns exu io_brTake", false,-1);
        tracep->declBus(c+226,"ysyx_041728 riscvIns exu io_pc", false,-1, 31,0);
        tracep->declBus(c+227,"ysyx_041728 riscvIns exu io_snpc", false,-1, 31,0);
        tracep->declBus(c+228,"ysyx_041728 riscvIns exu io_dnpc", false,-1, 31,0);
        tracep->declBit(c+229,"ysyx_041728 riscvIns exu io_CSRCtrlIf_csrrwen", false,-1);
        tracep->declBit(c+230,"ysyx_041728 riscvIns exu io_CSRCtrlIf_csrswen", false,-1);
        tracep->declBit(c+231,"ysyx_041728 riscvIns exu io_CSRCtrlIf_csrrsien", false,-1);
        tracep->declBit(c+232,"ysyx_041728 riscvIns exu io_CSRCtrlIf_csrrcien", false,-1);
        tracep->declBit(c+233,"ysyx_041728 riscvIns exu io_CSRCtrlIf_csrrcen", false,-1);
        tracep->declBit(c+234,"ysyx_041728 riscvIns exu io_CSRCtrlIf_csrrwien", false,-1);
        tracep->declBit(c+235,"ysyx_041728 riscvIns exu io_CSRCtrlIf_ecall", false,-1);
        tracep->declBit(c+236,"ysyx_041728 riscvIns exu io_CSRCtrlIf_rfen", false,-1);
        tracep->declBit(c+237,"ysyx_041728 riscvIns exu io_CSRCtrlIf_mepc2pc", false,-1);
        tracep->declBus(c+238,"ysyx_041728 riscvIns exu io_uimm", false,-1, 4,0);
        tracep->declQuad(c+239,"ysyx_041728 riscvIns exu io_aluResIn", false,-1, 63,0);
        tracep->declBus(c+241,"ysyx_041728 riscvIns exu io_forwardA", false,-1, 1,0);
        tracep->declBus(c+242,"ysyx_041728 riscvIns exu io_forwardB", false,-1, 1,0);
        tracep->declQuad(c+243,"ysyx_041728 riscvIns exu io_aluRes1", false,-1, 63,0);
        tracep->declQuad(c+205,"ysyx_041728 riscvIns exu io_aluRes3", false,-1, 63,0);
        tracep->declBit(c+104,"ysyx_041728 riscvIns exu intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 riscvIns exu startTimeCnt", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns exu block1", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu block23", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu ALU_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu ALU_reset", false,-1);
        tracep->declQuad(c+406,"ysyx_041728 riscvIns exu ALU_io_srcA", false,-1, 63,0);
        tracep->declQuad(c+408,"ysyx_041728 riscvIns exu ALU_io_srcB", false,-1, 63,0);
        tracep->declBus(c+209,"ysyx_041728 riscvIns exu ALU_io_ALUCtrl", false,-1, 4,0);
        tracep->declQuad(c+410,"ysyx_041728 riscvIns exu ALU_io_ALUResult", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_041728 riscvIns exu ALU_block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu ALU_block23_0", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu csr_ins_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu csr_ins_reset", false,-1);
        tracep->declBit(c+229,"ysyx_041728 riscvIns exu csr_ins_io_csrrwen", false,-1);
        tracep->declBit(c+230,"ysyx_041728 riscvIns exu csr_ins_io_csrswen", false,-1);
        tracep->declBit(c+231,"ysyx_041728 riscvIns exu csr_ins_io_csrrsien", false,-1);
        tracep->declBit(c+232,"ysyx_041728 riscvIns exu csr_ins_io_csrrcien", false,-1);
        tracep->declBit(c+233,"ysyx_041728 riscvIns exu csr_ins_io_csrrcen", false,-1);
        tracep->declBit(c+234,"ysyx_041728 riscvIns exu csr_ins_io_csrrwien", false,-1);
        tracep->declBit(c+235,"ysyx_041728 riscvIns exu csr_ins_io_ecall", false,-1);
        tracep->declQuad(c+412,"ysyx_041728 riscvIns exu csr_ins_io_rs1", false,-1, 63,0);
        tracep->declBus(c+414,"ysyx_041728 riscvIns exu csr_ins_io_imme", false,-1, 11,0);
        tracep->declQuad(c+415,"ysyx_041728 riscvIns exu csr_ins_io_pc", false,-1, 63,0);
        tracep->declBus(c+238,"ysyx_041728 riscvIns exu csr_ins_io_uimm", false,-1, 4,0);
        tracep->declQuad(c+417,"ysyx_041728 riscvIns exu csr_ins_io_rd", false,-1, 63,0);
        tracep->declQuad(c+419,"ysyx_041728 riscvIns exu csr_ins_io_mtvec", false,-1, 63,0);
        tracep->declQuad(c+421,"ysyx_041728 riscvIns exu csr_ins_io_mepc", false,-1, 63,0);
        tracep->declBit(c+237,"ysyx_041728 riscvIns exu csr_ins_io_mret", false,-1);
        tracep->declBit(c+104,"ysyx_041728 riscvIns exu csr_ins_intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 riscvIns exu csr_ins_startTimeCnt_0", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns exu csr_ins_block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu csr_ins_block23_0", false,-1);
        tracep->declBit(c+210,"ysyx_041728 riscvIns exu dnpcGenIns_io_npcSrc", false,-1);
        tracep->declBus(c+226,"ysyx_041728 riscvIns exu dnpcGenIns_io_pc", false,-1, 31,0);
        tracep->declBus(c+423,"ysyx_041728 riscvIns exu dnpcGenIns_io_imme", false,-1, 31,0);
        tracep->declBus(c+424,"ysyx_041728 riscvIns exu dnpcGenIns_io_rd", false,-1, 31,0);
        tracep->declBus(c+425,"ysyx_041728 riscvIns exu dnpcGenIns_io_dnpc", false,-1, 31,0);
        tracep->declQuad(c+223,"ysyx_041728 riscvIns exu memData_ins_io_rdata", false,-1, 63,0);
        tracep->declQuad(c+426,"ysyx_041728 riscvIns exu memData_ins_io_rdata_ext", false,-1, 63,0);
        tracep->declBus(c+212,"ysyx_041728 riscvIns exu memData_ins_io_memReadNum", false,-1, 2,0);
        tracep->declQuad(c+198,"ysyx_041728 riscvIns exu dinMux", false,-1, 63,0);
        tracep->declQuad(c+412,"ysyx_041728 riscvIns exu dOut1", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_041728 riscvIns exu dOut2", false,-1, 63,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu ALU clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu ALU reset", false,-1);
        tracep->declQuad(c+406,"ysyx_041728 riscvIns exu ALU io_srcA", false,-1, 63,0);
        tracep->declQuad(c+408,"ysyx_041728 riscvIns exu ALU io_srcB", false,-1, 63,0);
        tracep->declBus(c+209,"ysyx_041728 riscvIns exu ALU io_ALUCtrl", false,-1, 4,0);
        tracep->declQuad(c+410,"ysyx_041728 riscvIns exu ALU io_ALUResult", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_041728 riscvIns exu ALU block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu ALU block23_0", false,-1);
        tracep->declBit(c+428,"ysyx_041728 riscvIns exu ALU addIns_io_cin", false,-1);
        tracep->declQuad(c+406,"ysyx_041728 riscvIns exu ALU addIns_io_a", false,-1, 63,0);
        tracep->declQuad(c+429,"ysyx_041728 riscvIns exu ALU addIns_io_b", false,-1, 63,0);
        tracep->declQuad(c+431,"ysyx_041728 riscvIns exu ALU addIns_io_sum", false,-1, 63,0);
        tracep->declBit(c+433,"ysyx_041728 riscvIns exu ALU addIns_io_cout", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu ALU divR2Ins_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu ALU divR2Ins_reset", false,-1);
        tracep->declQuad(c+406,"ysyx_041728 riscvIns exu ALU divR2Ins_io_dividend", false,-1, 63,0);
        tracep->declQuad(c+408,"ysyx_041728 riscvIns exu ALU divR2Ins_io_divisor", false,-1, 63,0);
        tracep->declBit(c+434,"ysyx_041728 riscvIns exu ALU divR2Ins_io_div_valid", false,-1);
        tracep->declBit(c+435,"ysyx_041728 riscvIns exu ALU divR2Ins_io_divw", false,-1);
        tracep->declBit(c+436,"ysyx_041728 riscvIns exu ALU divR2Ins_io_div_signed", false,-1);
        tracep->declBit(c+437,"ysyx_041728 riscvIns exu ALU divR2Ins_io_out_valid", false,-1);
        tracep->declQuad(c+438,"ysyx_041728 riscvIns exu ALU divR2Ins_io_quotient", false,-1, 63,0);
        tracep->declQuad(c+440,"ysyx_041728 riscvIns exu ALU divR2Ins_io_remainder", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu ALU divR2Ins_io_block", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu ALU mulIns_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu ALU mulIns_reset", false,-1);
        tracep->declBit(c+442,"ysyx_041728 riscvIns exu ALU mulIns_io_mul_valid", false,-1);
        tracep->declQuad(c+443,"ysyx_041728 riscvIns exu ALU mulIns_io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+445,"ysyx_041728 riscvIns exu ALU mulIns_io_multiplier", false,-1, 63,0);
        tracep->declBit(c+447,"ysyx_041728 riscvIns exu ALU mulIns_io_out_valid", false,-1);
        tracep->declQuad(c+448,"ysyx_041728 riscvIns exu ALU mulIns_io_result_low", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu ALU mulIns_io_block", false,-1);
        tracep->declBit(c+428,"ysyx_041728 riscvIns exu ALU sub", false,-1);
        tracep->declQuad(c+450,"ysyx_041728 riscvIns exu ALU srcBInv", false,-1, 63,0);
        tracep->declQuad(c+452,"ysyx_041728 riscvIns exu ALU srcAUSignW", false,-1, 63,0);
        tracep->declQuad(c+454,"ysyx_041728 riscvIns exu ALU srcBUSignW", false,-1, 63,0);
        tracep->declBus(c+456,"ysyx_041728 riscvIns exu ALU shamt", false,-1, 5,0);
        tracep->declBit(c+188,"ysyx_041728 riscvIns exu ALU block1", false,-1);
        tracep->declBit(c+428,"ysyx_041728 riscvIns exu ALU addIns io_cin", false,-1);
        tracep->declQuad(c+406,"ysyx_041728 riscvIns exu ALU addIns io_a", false,-1, 63,0);
        tracep->declQuad(c+429,"ysyx_041728 riscvIns exu ALU addIns io_b", false,-1, 63,0);
        tracep->declQuad(c+431,"ysyx_041728 riscvIns exu ALU addIns io_sum", false,-1, 63,0);
        tracep->declBit(c+433,"ysyx_041728 riscvIns exu ALU addIns io_cout", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu ALU divR2Ins clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu ALU divR2Ins reset", false,-1);
        tracep->declQuad(c+406,"ysyx_041728 riscvIns exu ALU divR2Ins io_dividend", false,-1, 63,0);
        tracep->declQuad(c+408,"ysyx_041728 riscvIns exu ALU divR2Ins io_divisor", false,-1, 63,0);
        tracep->declBit(c+434,"ysyx_041728 riscvIns exu ALU divR2Ins io_div_valid", false,-1);
        tracep->declBit(c+435,"ysyx_041728 riscvIns exu ALU divR2Ins io_divw", false,-1);
        tracep->declBit(c+436,"ysyx_041728 riscvIns exu ALU divR2Ins io_div_signed", false,-1);
        tracep->declBit(c+437,"ysyx_041728 riscvIns exu ALU divR2Ins io_out_valid", false,-1);
        tracep->declQuad(c+438,"ysyx_041728 riscvIns exu ALU divR2Ins io_quotient", false,-1, 63,0);
        tracep->declQuad(c+440,"ysyx_041728 riscvIns exu ALU divR2Ins io_remainder", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu ALU divR2Ins io_block", false,-1);
        tracep->declQuad(c+457,"ysyx_041728 riscvIns exu ALU divR2Ins dividend64Real", false,-1, 63,0);
        tracep->declQuad(c+459,"ysyx_041728 riscvIns exu ALU divR2Ins divisor64Real", false,-1, 63,0);
        tracep->declBit(c+461,"ysyx_041728 riscvIns exu ALU divR2Ins quoSgn64", false,-1);
        tracep->declBus(c+462,"ysyx_041728 riscvIns exu ALU divR2Ins dividend32Real", false,-1, 31,0);
        tracep->declBus(c+463,"ysyx_041728 riscvIns exu ALU divR2Ins divisor32Real", false,-1, 31,0);
        tracep->declBit(c+464,"ysyx_041728 riscvIns exu ALU divR2Ins quoSgn32", false,-1);
        tracep->declBus(c+465,"ysyx_041728 riscvIns exu ALU divR2Ins stateReg", false,-1, 1,0);
        tracep->declBit(c+466,"ysyx_041728 riscvIns exu ALU divR2Ins isDiv32", false,-1);
        tracep->declBit(c+467,"ysyx_041728 riscvIns exu ALU divR2Ins isDiv64", false,-1);
        tracep->declBus(c+468,"ysyx_041728 riscvIns exu ALU divR2Ins cnt", false,-1, 5,0);
        tracep->declArray(c+469,"ysyx_041728 riscvIns exu ALU divR2Ins dividendReg", false,-1, 127,0);
        tracep->declQuad(c+473,"ysyx_041728 riscvIns exu ALU divR2Ins resReg", false,-1, 63,0);
        tracep->declQuad(c+475,"ysyx_041728 riscvIns exu ALU divR2Ins subed32", false,-1, 32,0);
        tracep->declQuad(c+477,"ysyx_041728 riscvIns exu ALU divR2Ins subRes32", false,-1, 32,0);
        tracep->declBus(c+479,"ysyx_041728 riscvIns exu ALU divR2Ins rem32M", false,-1, 31,0);
        tracep->declArray(c+480,"ysyx_041728 riscvIns exu ALU divR2Ins div32DividendMux", false,-1, 127,0);
        tracep->declArray(c+484,"ysyx_041728 riscvIns exu ALU divR2Ins subed64", false,-1, 64,0);
        tracep->declArray(c+487,"ysyx_041728 riscvIns exu ALU divR2Ins subRes64", false,-1, 64,0);
        tracep->declQuad(c+490,"ysyx_041728 riscvIns exu ALU divR2Ins rem64M", false,-1, 63,0);
        tracep->declArray(c+492,"ysyx_041728 riscvIns exu ALU divR2Ins div64DividendMux", false,-1, 127,0);
        tracep->declQuad(c+496,"ysyx_041728 riscvIns exu ALU divR2Ins res64Out", false,-1, 63,0);
        tracep->declQuad(c+498,"ysyx_041728 riscvIns exu ALU divR2Ins rem64Out", false,-1, 63,0);
        tracep->declQuad(c+500,"ysyx_041728 riscvIns exu ALU divR2Ins res32out", false,-1, 63,0);
        tracep->declQuad(c+502,"ysyx_041728 riscvIns exu ALU divR2Ins rem32Out", false,-1, 63,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu ALU mulIns clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu ALU mulIns reset", false,-1);
        tracep->declBit(c+442,"ysyx_041728 riscvIns exu ALU mulIns io_mul_valid", false,-1);
        tracep->declQuad(c+443,"ysyx_041728 riscvIns exu ALU mulIns io_multiplicand", false,-1, 63,0);
        tracep->declQuad(c+445,"ysyx_041728 riscvIns exu ALU mulIns io_multiplier", false,-1, 63,0);
        tracep->declBit(c+447,"ysyx_041728 riscvIns exu ALU mulIns io_out_valid", false,-1);
        tracep->declQuad(c+448,"ysyx_041728 riscvIns exu ALU mulIns io_result_low", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu ALU mulIns io_block", false,-1);
        tracep->declBus(c+504,"ysyx_041728 riscvIns exu ALU mulIns boothIns_io_y", false,-1, 2,0);
        tracep->declArray(c+505,"ysyx_041728 riscvIns exu ALU mulIns boothIns_io_x", false,-1, 131,0);
        tracep->declArray(c+510,"ysyx_041728 riscvIns exu ALU mulIns boothIns_io_p", false,-1, 131,0);
        tracep->declBit(c+515,"ysyx_041728 riscvIns exu ALU mulIns boothIns_io_c", false,-1);
        tracep->declBit(c+515,"ysyx_041728 riscvIns exu ALU mulIns addIns_io_cin", false,-1);
        tracep->declArray(c+510,"ysyx_041728 riscvIns exu ALU mulIns addIns_io_a", false,-1, 131,0);
        tracep->declArray(c+516,"ysyx_041728 riscvIns exu ALU mulIns addIns_io_b", false,-1, 131,0);
        tracep->declArray(c+521,"ysyx_041728 riscvIns exu ALU mulIns addIns_io_sum", false,-1, 131,0);
        tracep->declBus(c+526,"ysyx_041728 riscvIns exu ALU mulIns stateReg", false,-1, 1,0);
        tracep->declBit(c+527,"ysyx_041728 riscvIns exu ALU mulIns isIdle", false,-1);
        tracep->declBit(c+528,"ysyx_041728 riscvIns exu ALU mulIns isMul", false,-1);
        tracep->declBus(c+529,"ysyx_041728 riscvIns exu ALU mulIns cnt", false,-1, 5,0);
        tracep->declArray(c+530,"ysyx_041728 riscvIns exu ALU mulIns multiplierEx", false,-1, 66,0);
        tracep->declArray(c+533,"ysyx_041728 riscvIns exu ALU mulIns multiplierReg", false,-1, 66,0);
        tracep->declArray(c+505,"ysyx_041728 riscvIns exu ALU mulIns multiplicandReg", false,-1, 131,0);
        tracep->declArray(c+516,"ysyx_041728 riscvIns exu ALU mulIns resReg", false,-1, 131,0);
        tracep->declBus(c+504,"ysyx_041728 riscvIns exu ALU mulIns boothIns io_y", false,-1, 2,0);
        tracep->declArray(c+505,"ysyx_041728 riscvIns exu ALU mulIns boothIns io_x", false,-1, 131,0);
        tracep->declArray(c+510,"ysyx_041728 riscvIns exu ALU mulIns boothIns io_p", false,-1, 131,0);
        tracep->declBit(c+515,"ysyx_041728 riscvIns exu ALU mulIns boothIns io_c", false,-1);
        tracep->declBit(c+536,"ysyx_041728 riscvIns exu ALU mulIns boothIns selNegative", false,-1);
        tracep->declBit(c+537,"ysyx_041728 riscvIns exu ALU mulIns boothIns selPositive", false,-1);
        tracep->declBit(c+538,"ysyx_041728 riscvIns exu ALU mulIns boothIns selDoubleNegative", false,-1);
        tracep->declBit(c+539,"ysyx_041728 riscvIns exu ALU mulIns boothIns selDoublePositive", false,-1);
        tracep->declBit(c+515,"ysyx_041728 riscvIns exu ALU mulIns addIns io_cin", false,-1);
        tracep->declArray(c+510,"ysyx_041728 riscvIns exu ALU mulIns addIns io_a", false,-1, 131,0);
        tracep->declArray(c+516,"ysyx_041728 riscvIns exu ALU mulIns addIns io_b", false,-1, 131,0);
        tracep->declArray(c+521,"ysyx_041728 riscvIns exu ALU mulIns addIns io_sum", false,-1, 131,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns exu csr_ins clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns exu csr_ins reset", false,-1);
        tracep->declBit(c+229,"ysyx_041728 riscvIns exu csr_ins io_csrrwen", false,-1);
        tracep->declBit(c+230,"ysyx_041728 riscvIns exu csr_ins io_csrswen", false,-1);
        tracep->declBit(c+231,"ysyx_041728 riscvIns exu csr_ins io_csrrsien", false,-1);
        tracep->declBit(c+232,"ysyx_041728 riscvIns exu csr_ins io_csrrcien", false,-1);
        tracep->declBit(c+233,"ysyx_041728 riscvIns exu csr_ins io_csrrcen", false,-1);
        tracep->declBit(c+234,"ysyx_041728 riscvIns exu csr_ins io_csrrwien", false,-1);
        tracep->declBit(c+235,"ysyx_041728 riscvIns exu csr_ins io_ecall", false,-1);
        tracep->declQuad(c+412,"ysyx_041728 riscvIns exu csr_ins io_rs1", false,-1, 63,0);
        tracep->declBus(c+414,"ysyx_041728 riscvIns exu csr_ins io_imme", false,-1, 11,0);
        tracep->declQuad(c+415,"ysyx_041728 riscvIns exu csr_ins io_pc", false,-1, 63,0);
        tracep->declBus(c+238,"ysyx_041728 riscvIns exu csr_ins io_uimm", false,-1, 4,0);
        tracep->declQuad(c+417,"ysyx_041728 riscvIns exu csr_ins io_rd", false,-1, 63,0);
        tracep->declQuad(c+419,"ysyx_041728 riscvIns exu csr_ins io_mtvec", false,-1, 63,0);
        tracep->declQuad(c+421,"ysyx_041728 riscvIns exu csr_ins io_mepc", false,-1, 63,0);
        tracep->declBit(c+237,"ysyx_041728 riscvIns exu csr_ins io_mret", false,-1);
        tracep->declBit(c+104,"ysyx_041728 riscvIns exu csr_ins intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 riscvIns exu csr_ins startTimeCnt_0", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns exu csr_ins block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns exu csr_ins block23_0", false,-1);
        tracep->declBit(c+540,"ysyx_041728 riscvIns exu csr_ins intr", false,-1);
        tracep->declBit(c+541,"ysyx_041728 riscvIns exu csr_ins csren", false,-1);
        tracep->declBus(c+542,"ysyx_041728 riscvIns exu csr_ins sel1H", false,-1, 5,0);
        tracep->declQuad(c+543,"ysyx_041728 riscvIns exu csr_ins uimmext", false,-1, 63,0);
        tracep->declBit(c+545,"ysyx_041728 riscvIns exu csr_ins mepcen", false,-1);
        tracep->declQuad(c+421,"ysyx_041728 riscvIns exu csr_ins mepcins", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_041728 riscvIns exu csr_ins mcauseen", false,-1);
        tracep->declQuad(c+547,"ysyx_041728 riscvIns exu csr_ins mcauseins", false,-1, 63,0);
        tracep->declBit(c+549,"ysyx_041728 riscvIns exu csr_ins mtvecen", false,-1);
        tracep->declQuad(c+419,"ysyx_041728 riscvIns exu csr_ins mtvecins", false,-1, 63,0);
        tracep->declQuad(c+550,"ysyx_041728 riscvIns exu csr_ins mtvecval", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_041728 riscvIns exu csr_ins mstatusen", false,-1);
        tracep->declQuad(c+553,"ysyx_041728 riscvIns exu csr_ins mstatusins", false,-1, 63,0);
        tracep->declBit(c+555,"ysyx_041728 riscvIns exu csr_ins miecen", false,-1);
        tracep->declQuad(c+556,"ysyx_041728 riscvIns exu csr_ins mieins", false,-1, 63,0);
        tracep->declQuad(c+558,"ysyx_041728 riscvIns exu csr_ins mieval", false,-1, 63,0);
        tracep->declBit(c+560,"ysyx_041728 riscvIns exu csr_ins mipcen", false,-1);
        tracep->declQuad(c+561,"ysyx_041728 riscvIns exu csr_ins mipins", false,-1, 63,0);
        tracep->declBit(c+105,"ysyx_041728 riscvIns exu csr_ins startTimeCnt", false,-1);
        tracep->declBit(c+210,"ysyx_041728 riscvIns exu dnpcGenIns io_npcSrc", false,-1);
        tracep->declBus(c+226,"ysyx_041728 riscvIns exu dnpcGenIns io_pc", false,-1, 31,0);
        tracep->declBus(c+423,"ysyx_041728 riscvIns exu dnpcGenIns io_imme", false,-1, 31,0);
        tracep->declBus(c+424,"ysyx_041728 riscvIns exu dnpcGenIns io_rd", false,-1, 31,0);
        tracep->declBus(c+425,"ysyx_041728 riscvIns exu dnpcGenIns io_dnpc", false,-1, 31,0);
        tracep->declBus(c+563,"ysyx_041728 riscvIns exu dnpcGenIns src1", false,-1, 31,0);
        tracep->declQuad(c+223,"ysyx_041728 riscvIns exu memData_ins io_rdata", false,-1, 63,0);
        tracep->declQuad(c+426,"ysyx_041728 riscvIns exu memData_ins io_rdata_ext", false,-1, 63,0);
        tracep->declBus(c+212,"ysyx_041728 riscvIns exu memData_ins io_memReadNum", false,-1, 2,0);
        tracep->declBit(c+245,"ysyx_041728 riscvIns hazardu io_regEnEXMEM", false,-1);
        tracep->declBus(c+246,"ysyx_041728 riscvIns hazardu io_rdEXMEM", false,-1, 4,0);
        tracep->declBus(c+238,"ysyx_041728 riscvIns hazardu io_rs1IDEX", false,-1, 4,0);
        tracep->declBus(c+247,"ysyx_041728 riscvIns hazardu io_rs2IDEX", false,-1, 4,0);
        tracep->declBit(c+191,"ysyx_041728 riscvIns hazardu io_regEnMEMWB", false,-1);
        tracep->declBus(c+201,"ysyx_041728 riscvIns hazardu io_rdMEMWB", false,-1, 4,0);
        tracep->declBit(c+248,"ysyx_041728 riscvIns hazardu io_regEnWBEND", false,-1);
        tracep->declBus(c+204,"ysyx_041728 riscvIns hazardu io_rdWBEND", false,-1, 4,0);
        tracep->declBus(c+241,"ysyx_041728 riscvIns hazardu io_forwardA", false,-1, 1,0);
        tracep->declBus(c+242,"ysyx_041728 riscvIns hazardu io_forwardB", false,-1, 1,0);
        tracep->declBus(c+202,"ysyx_041728 riscvIns hazardu io_rs1IFID", false,-1, 4,0);
        tracep->declBus(c+203,"ysyx_041728 riscvIns hazardu io_rs2IFID", false,-1, 4,0);
        tracep->declBus(c+249,"ysyx_041728 riscvIns hazardu io_rdIDEX", false,-1, 4,0);
        tracep->declBus(c+250,"ysyx_041728 riscvIns hazardu io_resSrc", false,-1, 1,0);
        tracep->declBit(c+187,"ysyx_041728 riscvIns hazardu io_loadHazard", false,-1);
        tracep->declBit(c+564,"ysyx_041728 riscvIns hazardu forwardAOne", false,-1);
        tracep->declBit(c+565,"ysyx_041728 riscvIns hazardu forwardATwo", false,-1);
        tracep->declBit(c+566,"ysyx_041728 riscvIns hazardu forwardAThree", false,-1);
        tracep->declBit(c+567,"ysyx_041728 riscvIns hazardu forwardBOne", false,-1);
        tracep->declBit(c+568,"ysyx_041728 riscvIns hazardu forwardBTwo", false,-1);
        tracep->declBit(c+569,"ysyx_041728 riscvIns hazardu forwardBThree", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns reset", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns io_exjump", false,-1);
        tracep->declBus(c+94,"ysyx_041728 riscvIns preBranchIns io_ifpc", false,-1, 31,0);
        tracep->declBus(c+226,"ysyx_041728 riscvIns preBranchIns io_expc", false,-1, 31,0);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns io_exdpc", false,-1, 31,0);
        tracep->declBus(c+252,"ysyx_041728 riscvIns preBranchIns io_ifdnpc", false,-1, 31,0);
        tracep->declBit(c+253,"ysyx_041728 riscvIns preBranchIns io_ifjump", false,-1);
        tracep->declBit(c+188,"ysyx_041728 riscvIns preBranchIns block1_0", false,-1);
        tracep->declBit(c+22,"ysyx_041728 riscvIns preBranchIns block23_0", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_0_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_0_reset", false,-1);
        tracep->declBit(c+24,"ysyx_041728 riscvIns preBranchIns precelList_0_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_0_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_0_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+570,"ysyx_041728 riscvIns preBranchIns precelList_0_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+571,"ysyx_041728 riscvIns preBranchIns precelList_0_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_1_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_1_reset", false,-1);
        tracep->declBit(c+25,"ysyx_041728 riscvIns preBranchIns precelList_1_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_1_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_1_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+572,"ysyx_041728 riscvIns preBranchIns precelList_1_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+573,"ysyx_041728 riscvIns preBranchIns precelList_1_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_2_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_2_reset", false,-1);
        tracep->declBit(c+26,"ysyx_041728 riscvIns preBranchIns precelList_2_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_2_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_2_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+574,"ysyx_041728 riscvIns preBranchIns precelList_2_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+575,"ysyx_041728 riscvIns preBranchIns precelList_2_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_3_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_3_reset", false,-1);
        tracep->declBit(c+27,"ysyx_041728 riscvIns preBranchIns precelList_3_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_3_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_3_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+576,"ysyx_041728 riscvIns preBranchIns precelList_3_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+577,"ysyx_041728 riscvIns preBranchIns precelList_3_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_4_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_4_reset", false,-1);
        tracep->declBit(c+28,"ysyx_041728 riscvIns preBranchIns precelList_4_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_4_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_4_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+578,"ysyx_041728 riscvIns preBranchIns precelList_4_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+579,"ysyx_041728 riscvIns preBranchIns precelList_4_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_5_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_5_reset", false,-1);
        tracep->declBit(c+29,"ysyx_041728 riscvIns preBranchIns precelList_5_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_5_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_5_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+580,"ysyx_041728 riscvIns preBranchIns precelList_5_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+581,"ysyx_041728 riscvIns preBranchIns precelList_5_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_6_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_6_reset", false,-1);
        tracep->declBit(c+30,"ysyx_041728 riscvIns preBranchIns precelList_6_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_6_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_6_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+582,"ysyx_041728 riscvIns preBranchIns precelList_6_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+583,"ysyx_041728 riscvIns preBranchIns precelList_6_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_7_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_7_reset", false,-1);
        tracep->declBit(c+31,"ysyx_041728 riscvIns preBranchIns precelList_7_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_7_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_7_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+584,"ysyx_041728 riscvIns preBranchIns precelList_7_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+585,"ysyx_041728 riscvIns preBranchIns precelList_7_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_8_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_8_reset", false,-1);
        tracep->declBit(c+32,"ysyx_041728 riscvIns preBranchIns precelList_8_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_8_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_8_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+586,"ysyx_041728 riscvIns preBranchIns precelList_8_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+587,"ysyx_041728 riscvIns preBranchIns precelList_8_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_9_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_9_reset", false,-1);
        tracep->declBit(c+33,"ysyx_041728 riscvIns preBranchIns precelList_9_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_9_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_9_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+588,"ysyx_041728 riscvIns preBranchIns precelList_9_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+589,"ysyx_041728 riscvIns preBranchIns precelList_9_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_10_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_10_reset", false,-1);
        tracep->declBit(c+34,"ysyx_041728 riscvIns preBranchIns precelList_10_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_10_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_10_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+590,"ysyx_041728 riscvIns preBranchIns precelList_10_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+591,"ysyx_041728 riscvIns preBranchIns precelList_10_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_11_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_11_reset", false,-1);
        tracep->declBit(c+35,"ysyx_041728 riscvIns preBranchIns precelList_11_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_11_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_11_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+592,"ysyx_041728 riscvIns preBranchIns precelList_11_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+593,"ysyx_041728 riscvIns preBranchIns precelList_11_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_12_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_12_reset", false,-1);
        tracep->declBit(c+36,"ysyx_041728 riscvIns preBranchIns precelList_12_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_12_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_12_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+594,"ysyx_041728 riscvIns preBranchIns precelList_12_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+595,"ysyx_041728 riscvIns preBranchIns precelList_12_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_13_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_13_reset", false,-1);
        tracep->declBit(c+37,"ysyx_041728 riscvIns preBranchIns precelList_13_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_13_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_13_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+596,"ysyx_041728 riscvIns preBranchIns precelList_13_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+597,"ysyx_041728 riscvIns preBranchIns precelList_13_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_14_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_14_reset", false,-1);
        tracep->declBit(c+38,"ysyx_041728 riscvIns preBranchIns precelList_14_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_14_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_14_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+598,"ysyx_041728 riscvIns preBranchIns precelList_14_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+599,"ysyx_041728 riscvIns preBranchIns precelList_14_io_valid", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_15_clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_15_reset", false,-1);
        tracep->declBit(c+39,"ysyx_041728 riscvIns preBranchIns precelList_15_io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_15_io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_15_io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+600,"ysyx_041728 riscvIns preBranchIns precelList_15_io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+601,"ysyx_041728 riscvIns preBranchIns precelList_15_io_valid", false,-1);
        tracep->declBit(c+40,"ysyx_041728 riscvIns preBranchIns block", false,-1);
        tracep->declBus(c+602,"ysyx_041728 riscvIns preBranchIns pcList_0", false,-1, 31,0);
        tracep->declBit(c+603,"ysyx_041728 riscvIns preBranchIns vList_0", false,-1);
        tracep->declBit(c+604,"ysyx_041728 riscvIns preBranchIns hitList_0", false,-1);
        tracep->declBus(c+605,"ysyx_041728 riscvIns preBranchIns pcList_1", false,-1, 31,0);
        tracep->declBit(c+606,"ysyx_041728 riscvIns preBranchIns vList_1", false,-1);
        tracep->declBit(c+607,"ysyx_041728 riscvIns preBranchIns hitList_1", false,-1);
        tracep->declBus(c+608,"ysyx_041728 riscvIns preBranchIns pcList_2", false,-1, 31,0);
        tracep->declBit(c+609,"ysyx_041728 riscvIns preBranchIns vList_2", false,-1);
        tracep->declBit(c+610,"ysyx_041728 riscvIns preBranchIns hitList_2", false,-1);
        tracep->declBus(c+611,"ysyx_041728 riscvIns preBranchIns pcList_3", false,-1, 31,0);
        tracep->declBit(c+612,"ysyx_041728 riscvIns preBranchIns vList_3", false,-1);
        tracep->declBit(c+613,"ysyx_041728 riscvIns preBranchIns hitList_3", false,-1);
        tracep->declBus(c+614,"ysyx_041728 riscvIns preBranchIns pcList_4", false,-1, 31,0);
        tracep->declBit(c+615,"ysyx_041728 riscvIns preBranchIns vList_4", false,-1);
        tracep->declBit(c+616,"ysyx_041728 riscvIns preBranchIns hitList_4", false,-1);
        tracep->declBus(c+617,"ysyx_041728 riscvIns preBranchIns pcList_5", false,-1, 31,0);
        tracep->declBit(c+618,"ysyx_041728 riscvIns preBranchIns vList_5", false,-1);
        tracep->declBit(c+619,"ysyx_041728 riscvIns preBranchIns hitList_5", false,-1);
        tracep->declBus(c+620,"ysyx_041728 riscvIns preBranchIns pcList_6", false,-1, 31,0);
        tracep->declBit(c+621,"ysyx_041728 riscvIns preBranchIns vList_6", false,-1);
        tracep->declBit(c+622,"ysyx_041728 riscvIns preBranchIns hitList_6", false,-1);
        tracep->declBus(c+623,"ysyx_041728 riscvIns preBranchIns pcList_7", false,-1, 31,0);
        tracep->declBit(c+624,"ysyx_041728 riscvIns preBranchIns vList_7", false,-1);
        tracep->declBit(c+625,"ysyx_041728 riscvIns preBranchIns hitList_7", false,-1);
        tracep->declBus(c+626,"ysyx_041728 riscvIns preBranchIns pcList_8", false,-1, 31,0);
        tracep->declBit(c+627,"ysyx_041728 riscvIns preBranchIns vList_8", false,-1);
        tracep->declBit(c+628,"ysyx_041728 riscvIns preBranchIns hitList_8", false,-1);
        tracep->declBus(c+629,"ysyx_041728 riscvIns preBranchIns pcList_9", false,-1, 31,0);
        tracep->declBit(c+630,"ysyx_041728 riscvIns preBranchIns vList_9", false,-1);
        tracep->declBit(c+631,"ysyx_041728 riscvIns preBranchIns hitList_9", false,-1);
        tracep->declBus(c+632,"ysyx_041728 riscvIns preBranchIns pcList_10", false,-1, 31,0);
        tracep->declBit(c+633,"ysyx_041728 riscvIns preBranchIns vList_10", false,-1);
        tracep->declBit(c+634,"ysyx_041728 riscvIns preBranchIns hitList_10", false,-1);
        tracep->declBus(c+635,"ysyx_041728 riscvIns preBranchIns pcList_11", false,-1, 31,0);
        tracep->declBit(c+636,"ysyx_041728 riscvIns preBranchIns vList_11", false,-1);
        tracep->declBit(c+637,"ysyx_041728 riscvIns preBranchIns hitList_11", false,-1);
        tracep->declBus(c+638,"ysyx_041728 riscvIns preBranchIns pcList_12", false,-1, 31,0);
        tracep->declBit(c+639,"ysyx_041728 riscvIns preBranchIns vList_12", false,-1);
        tracep->declBit(c+640,"ysyx_041728 riscvIns preBranchIns hitList_12", false,-1);
        tracep->declBus(c+641,"ysyx_041728 riscvIns preBranchIns pcList_13", false,-1, 31,0);
        tracep->declBit(c+642,"ysyx_041728 riscvIns preBranchIns vList_13", false,-1);
        tracep->declBit(c+643,"ysyx_041728 riscvIns preBranchIns hitList_13", false,-1);
        tracep->declBus(c+644,"ysyx_041728 riscvIns preBranchIns pcList_14", false,-1, 31,0);
        tracep->declBit(c+645,"ysyx_041728 riscvIns preBranchIns vList_14", false,-1);
        tracep->declBit(c+646,"ysyx_041728 riscvIns preBranchIns hitList_14", false,-1);
        tracep->declBus(c+647,"ysyx_041728 riscvIns preBranchIns pcList_15", false,-1, 31,0);
        tracep->declBit(c+648,"ysyx_041728 riscvIns preBranchIns vList_15", false,-1);
        tracep->declBit(c+649,"ysyx_041728 riscvIns preBranchIns hitList_15", false,-1);
        tracep->declBit(c+650,"ysyx_041728 riscvIns preBranchIns hit", false,-1);
        tracep->declBus(c+651,"ysyx_041728 riscvIns preBranchIns cnt", false,-1, 3,0);
        tracep->declBit(c+652,"ysyx_041728 riscvIns preBranchIns hitIfList_0", false,-1);
        tracep->declBit(c+653,"ysyx_041728 riscvIns preBranchIns hitIfList_1", false,-1);
        tracep->declBit(c+654,"ysyx_041728 riscvIns preBranchIns hitIfList_2", false,-1);
        tracep->declBit(c+655,"ysyx_041728 riscvIns preBranchIns hitIfList_3", false,-1);
        tracep->declBit(c+656,"ysyx_041728 riscvIns preBranchIns hitIfList_4", false,-1);
        tracep->declBit(c+657,"ysyx_041728 riscvIns preBranchIns hitIfList_5", false,-1);
        tracep->declBit(c+658,"ysyx_041728 riscvIns preBranchIns hitIfList_6", false,-1);
        tracep->declBit(c+659,"ysyx_041728 riscvIns preBranchIns hitIfList_7", false,-1);
        tracep->declBit(c+660,"ysyx_041728 riscvIns preBranchIns hitIfList_8", false,-1);
        tracep->declBit(c+661,"ysyx_041728 riscvIns preBranchIns hitIfList_9", false,-1);
        tracep->declBit(c+662,"ysyx_041728 riscvIns preBranchIns hitIfList_10", false,-1);
        tracep->declBit(c+663,"ysyx_041728 riscvIns preBranchIns hitIfList_11", false,-1);
        tracep->declBit(c+664,"ysyx_041728 riscvIns preBranchIns hitIfList_12", false,-1);
        tracep->declBit(c+665,"ysyx_041728 riscvIns preBranchIns hitIfList_13", false,-1);
        tracep->declBit(c+666,"ysyx_041728 riscvIns preBranchIns hitIfList_14", false,-1);
        tracep->declBit(c+667,"ysyx_041728 riscvIns preBranchIns hitIfList_15", false,-1);
        tracep->declBit(c+668,"ysyx_041728 riscvIns preBranchIns hitif", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_0 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_0 reset", false,-1);
        tracep->declBit(c+24,"ysyx_041728 riscvIns preBranchIns precelList_0 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_0 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_0 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+570,"ysyx_041728 riscvIns preBranchIns precelList_0 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+571,"ysyx_041728 riscvIns preBranchIns precelList_0 io_valid", false,-1);
        tracep->declBus(c+570,"ysyx_041728 riscvIns preBranchIns precelList_0 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+669,"ysyx_041728 riscvIns preBranchIns precelList_0 takenV", false,-1);
        tracep->declBus(c+670,"ysyx_041728 riscvIns preBranchIns precelList_0 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_1 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_1 reset", false,-1);
        tracep->declBit(c+25,"ysyx_041728 riscvIns preBranchIns precelList_1 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_1 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_1 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+572,"ysyx_041728 riscvIns preBranchIns precelList_1 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+573,"ysyx_041728 riscvIns preBranchIns precelList_1 io_valid", false,-1);
        tracep->declBus(c+572,"ysyx_041728 riscvIns preBranchIns precelList_1 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+671,"ysyx_041728 riscvIns preBranchIns precelList_1 takenV", false,-1);
        tracep->declBus(c+672,"ysyx_041728 riscvIns preBranchIns precelList_1 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_2 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_2 reset", false,-1);
        tracep->declBit(c+26,"ysyx_041728 riscvIns preBranchIns precelList_2 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_2 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_2 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+574,"ysyx_041728 riscvIns preBranchIns precelList_2 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+575,"ysyx_041728 riscvIns preBranchIns precelList_2 io_valid", false,-1);
        tracep->declBus(c+574,"ysyx_041728 riscvIns preBranchIns precelList_2 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+673,"ysyx_041728 riscvIns preBranchIns precelList_2 takenV", false,-1);
        tracep->declBus(c+674,"ysyx_041728 riscvIns preBranchIns precelList_2 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_3 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_3 reset", false,-1);
        tracep->declBit(c+27,"ysyx_041728 riscvIns preBranchIns precelList_3 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_3 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_3 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+576,"ysyx_041728 riscvIns preBranchIns precelList_3 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+577,"ysyx_041728 riscvIns preBranchIns precelList_3 io_valid", false,-1);
        tracep->declBus(c+576,"ysyx_041728 riscvIns preBranchIns precelList_3 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+675,"ysyx_041728 riscvIns preBranchIns precelList_3 takenV", false,-1);
        tracep->declBus(c+676,"ysyx_041728 riscvIns preBranchIns precelList_3 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_4 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_4 reset", false,-1);
        tracep->declBit(c+28,"ysyx_041728 riscvIns preBranchIns precelList_4 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_4 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_4 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+578,"ysyx_041728 riscvIns preBranchIns precelList_4 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+579,"ysyx_041728 riscvIns preBranchIns precelList_4 io_valid", false,-1);
        tracep->declBus(c+578,"ysyx_041728 riscvIns preBranchIns precelList_4 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+677,"ysyx_041728 riscvIns preBranchIns precelList_4 takenV", false,-1);
        tracep->declBus(c+678,"ysyx_041728 riscvIns preBranchIns precelList_4 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_5 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_5 reset", false,-1);
        tracep->declBit(c+29,"ysyx_041728 riscvIns preBranchIns precelList_5 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_5 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_5 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+580,"ysyx_041728 riscvIns preBranchIns precelList_5 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+581,"ysyx_041728 riscvIns preBranchIns precelList_5 io_valid", false,-1);
        tracep->declBus(c+580,"ysyx_041728 riscvIns preBranchIns precelList_5 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+679,"ysyx_041728 riscvIns preBranchIns precelList_5 takenV", false,-1);
        tracep->declBus(c+680,"ysyx_041728 riscvIns preBranchIns precelList_5 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_6 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_6 reset", false,-1);
        tracep->declBit(c+30,"ysyx_041728 riscvIns preBranchIns precelList_6 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_6 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_6 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+582,"ysyx_041728 riscvIns preBranchIns precelList_6 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+583,"ysyx_041728 riscvIns preBranchIns precelList_6 io_valid", false,-1);
        tracep->declBus(c+582,"ysyx_041728 riscvIns preBranchIns precelList_6 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+681,"ysyx_041728 riscvIns preBranchIns precelList_6 takenV", false,-1);
        tracep->declBus(c+682,"ysyx_041728 riscvIns preBranchIns precelList_6 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_7 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_7 reset", false,-1);
        tracep->declBit(c+31,"ysyx_041728 riscvIns preBranchIns precelList_7 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_7 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_7 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+584,"ysyx_041728 riscvIns preBranchIns precelList_7 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+585,"ysyx_041728 riscvIns preBranchIns precelList_7 io_valid", false,-1);
        tracep->declBus(c+584,"ysyx_041728 riscvIns preBranchIns precelList_7 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+683,"ysyx_041728 riscvIns preBranchIns precelList_7 takenV", false,-1);
        tracep->declBus(c+684,"ysyx_041728 riscvIns preBranchIns precelList_7 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_8 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_8 reset", false,-1);
        tracep->declBit(c+32,"ysyx_041728 riscvIns preBranchIns precelList_8 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_8 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_8 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+586,"ysyx_041728 riscvIns preBranchIns precelList_8 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+587,"ysyx_041728 riscvIns preBranchIns precelList_8 io_valid", false,-1);
        tracep->declBus(c+586,"ysyx_041728 riscvIns preBranchIns precelList_8 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+685,"ysyx_041728 riscvIns preBranchIns precelList_8 takenV", false,-1);
        tracep->declBus(c+686,"ysyx_041728 riscvIns preBranchIns precelList_8 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_9 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_9 reset", false,-1);
        tracep->declBit(c+33,"ysyx_041728 riscvIns preBranchIns precelList_9 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_9 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_9 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+588,"ysyx_041728 riscvIns preBranchIns precelList_9 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+589,"ysyx_041728 riscvIns preBranchIns precelList_9 io_valid", false,-1);
        tracep->declBus(c+588,"ysyx_041728 riscvIns preBranchIns precelList_9 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+687,"ysyx_041728 riscvIns preBranchIns precelList_9 takenV", false,-1);
        tracep->declBus(c+688,"ysyx_041728 riscvIns preBranchIns precelList_9 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_10 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_10 reset", false,-1);
        tracep->declBit(c+34,"ysyx_041728 riscvIns preBranchIns precelList_10 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_10 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_10 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+590,"ysyx_041728 riscvIns preBranchIns precelList_10 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+591,"ysyx_041728 riscvIns preBranchIns precelList_10 io_valid", false,-1);
        tracep->declBus(c+590,"ysyx_041728 riscvIns preBranchIns precelList_10 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+689,"ysyx_041728 riscvIns preBranchIns precelList_10 takenV", false,-1);
        tracep->declBus(c+690,"ysyx_041728 riscvIns preBranchIns precelList_10 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_11 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_11 reset", false,-1);
        tracep->declBit(c+35,"ysyx_041728 riscvIns preBranchIns precelList_11 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_11 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_11 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+592,"ysyx_041728 riscvIns preBranchIns precelList_11 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+593,"ysyx_041728 riscvIns preBranchIns precelList_11 io_valid", false,-1);
        tracep->declBus(c+592,"ysyx_041728 riscvIns preBranchIns precelList_11 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+691,"ysyx_041728 riscvIns preBranchIns precelList_11 takenV", false,-1);
        tracep->declBus(c+692,"ysyx_041728 riscvIns preBranchIns precelList_11 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_12 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_12 reset", false,-1);
        tracep->declBit(c+36,"ysyx_041728 riscvIns preBranchIns precelList_12 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_12 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_12 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+594,"ysyx_041728 riscvIns preBranchIns precelList_12 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+595,"ysyx_041728 riscvIns preBranchIns precelList_12 io_valid", false,-1);
        tracep->declBus(c+594,"ysyx_041728 riscvIns preBranchIns precelList_12 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+693,"ysyx_041728 riscvIns preBranchIns precelList_12 takenV", false,-1);
        tracep->declBus(c+694,"ysyx_041728 riscvIns preBranchIns precelList_12 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_13 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_13 reset", false,-1);
        tracep->declBit(c+37,"ysyx_041728 riscvIns preBranchIns precelList_13 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_13 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_13 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+596,"ysyx_041728 riscvIns preBranchIns precelList_13 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+597,"ysyx_041728 riscvIns preBranchIns precelList_13 io_valid", false,-1);
        tracep->declBus(c+596,"ysyx_041728 riscvIns preBranchIns precelList_13 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+695,"ysyx_041728 riscvIns preBranchIns precelList_13 takenV", false,-1);
        tracep->declBus(c+696,"ysyx_041728 riscvIns preBranchIns precelList_13 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_14 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_14 reset", false,-1);
        tracep->declBit(c+38,"ysyx_041728 riscvIns preBranchIns precelList_14 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_14 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_14 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+598,"ysyx_041728 riscvIns preBranchIns precelList_14 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+599,"ysyx_041728 riscvIns preBranchIns precelList_14 io_valid", false,-1);
        tracep->declBus(c+598,"ysyx_041728 riscvIns preBranchIns precelList_14 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+697,"ysyx_041728 riscvIns preBranchIns precelList_14 takenV", false,-1);
        tracep->declBus(c+698,"ysyx_041728 riscvIns preBranchIns precelList_14 stateWire", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 riscvIns preBranchIns precelList_15 clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 riscvIns preBranchIns precelList_15 reset", false,-1);
        tracep->declBit(c+39,"ysyx_041728 riscvIns preBranchIns precelList_15 io_cen", false,-1);
        tracep->declBit(c+251,"ysyx_041728 riscvIns preBranchIns precelList_15 io_jump", false,-1);
        tracep->declBus(c+228,"ysyx_041728 riscvIns preBranchIns precelList_15 io_dnpcIn", false,-1, 31,0);
        tracep->declBus(c+600,"ysyx_041728 riscvIns preBranchIns precelList_15 io_dnpcOut", false,-1, 31,0);
        tracep->declBit(c+601,"ysyx_041728 riscvIns preBranchIns precelList_15 io_valid", false,-1);
        tracep->declBus(c+600,"ysyx_041728 riscvIns preBranchIns precelList_15 dnpcReg", false,-1, 31,0);
        tracep->declBit(c+699,"ysyx_041728 riscvIns preBranchIns precelList_15 takenV", false,-1);
        tracep->declBus(c+700,"ysyx_041728 riscvIns preBranchIns precelList_15 stateWire", false,-1, 1,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns memVGenInst io_inst", false,-1, 31,0);
        tracep->declBit(c+254,"ysyx_041728 riscvIns memVGenInst io_valid", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl io_inst", false,-1, 31,0);
        tracep->declBus(c+255,"ysyx_041728 riscvIns ctrl io_CtrlS_AluSrc1", false,-1, 1,0);
        tracep->declBus(c+256,"ysyx_041728 riscvIns ctrl io_CtrlS_AluSrc2", false,-1, 1,0);
        tracep->declBus(c+257,"ysyx_041728 riscvIns ctrl io_CtrlS_ALUCtrl", false,-1, 4,0);
        tracep->declBit(c+258,"ysyx_041728 riscvIns ctrl io_CtrlS_memWriteM", false,-1);
        tracep->declBus(c+259,"ysyx_041728 riscvIns ctrl io_CtrlS_memWriteMask", false,-1, 7,0);
        tracep->declBus(c+260,"ysyx_041728 riscvIns ctrl io_CtrlS_memReadNum", false,-1, 2,0);
        tracep->declBit(c+261,"ysyx_041728 riscvIns ctrl io_CtrlS_dnpcSrc", false,-1);
        tracep->declBit(c+262,"ysyx_041728 riscvIns ctrl io_CtrlS_jump", false,-1);
        tracep->declBit(c+263,"ysyx_041728 riscvIns ctrl io_CtrlS_branch", false,-1);
        tracep->declBit(c+264,"ysyx_041728 riscvIns ctrl io_CtrlS_regEn", false,-1);
        tracep->declBus(c+265,"ysyx_041728 riscvIns ctrl io_CtrlS_ResultSrc", false,-1, 1,0);
        tracep->declBit(c+266,"ysyx_041728 riscvIns ctrl io_CtrlS_fencei", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl ALUCtrl_ins_io_inst", false,-1, 31,0);
        tracep->declBus(c+257,"ysyx_041728 riscvIns ctrl ALUCtrl_ins_io_ALUCtrl", false,-1, 4,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl ALUSrcGen_ins_io_inst", false,-1, 31,0);
        tracep->declBus(c+255,"ysyx_041728 riscvIns ctrl ALUSrcGen_ins_io_AluSrc1", false,-1, 1,0);
        tracep->declBus(c+256,"ysyx_041728 riscvIns ctrl ALUSrcGen_ins_io_AluSrc2", false,-1, 1,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl memWriteMGen_ins_io_inst", false,-1, 31,0);
        tracep->declBit(c+258,"ysyx_041728 riscvIns ctrl memWriteMGen_ins_io_memWriteM", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl memWriteMaskGen_ins_io_inst", false,-1, 31,0);
        tracep->declBus(c+259,"ysyx_041728 riscvIns ctrl memWriteMaskGen_ins_io_mask", false,-1, 7,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl memReadNumGen_ins_io_inst", false,-1, 31,0);
        tracep->declBus(c+260,"ysyx_041728 riscvIns ctrl memReadNumGen_ins_io_memReadNum", false,-1, 2,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl dnpcSrcGen_ins_io_inst", false,-1, 31,0);
        tracep->declBit(c+261,"ysyx_041728 riscvIns ctrl dnpcSrcGen_ins_io_dnpcSrc", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl jumpGen_ins_io_inst", false,-1, 31,0);
        tracep->declBit(c+262,"ysyx_041728 riscvIns ctrl jumpGen_ins_io_jump", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl branchGen_ins_io_inst", false,-1, 31,0);
        tracep->declBit(c+263,"ysyx_041728 riscvIns ctrl branchGen_ins_io_branch", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl regEnGen_ins_io_inst", false,-1, 31,0);
        tracep->declBit(c+264,"ysyx_041728 riscvIns ctrl regEnGen_ins_io_regEn", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl ResultSrcGen_ins_io_inst", false,-1, 31,0);
        tracep->declBus(c+265,"ysyx_041728 riscvIns ctrl ResultSrcGen_ins_io_ResultSrc", false,-1, 1,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl ALUCtrl_ins io_inst", false,-1, 31,0);
        tracep->declBus(c+257,"ysyx_041728 riscvIns ctrl ALUCtrl_ins io_ALUCtrl", false,-1, 4,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl ALUSrcGen_ins io_inst", false,-1, 31,0);
        tracep->declBus(c+255,"ysyx_041728 riscvIns ctrl ALUSrcGen_ins io_AluSrc1", false,-1, 1,0);
        tracep->declBus(c+256,"ysyx_041728 riscvIns ctrl ALUSrcGen_ins io_AluSrc2", false,-1, 1,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl memWriteMGen_ins io_inst", false,-1, 31,0);
        tracep->declBit(c+258,"ysyx_041728 riscvIns ctrl memWriteMGen_ins io_memWriteM", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl memWriteMaskGen_ins io_inst", false,-1, 31,0);
        tracep->declBus(c+259,"ysyx_041728 riscvIns ctrl memWriteMaskGen_ins io_mask", false,-1, 7,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl memReadNumGen_ins io_inst", false,-1, 31,0);
        tracep->declBus(c+260,"ysyx_041728 riscvIns ctrl memReadNumGen_ins io_memReadNum", false,-1, 2,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl dnpcSrcGen_ins io_inst", false,-1, 31,0);
        tracep->declBit(c+261,"ysyx_041728 riscvIns ctrl dnpcSrcGen_ins io_dnpcSrc", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl jumpGen_ins io_inst", false,-1, 31,0);
        tracep->declBit(c+262,"ysyx_041728 riscvIns ctrl jumpGen_ins io_jump", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl branchGen_ins io_inst", false,-1, 31,0);
        tracep->declBit(c+263,"ysyx_041728 riscvIns ctrl branchGen_ins io_branch", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl regEnGen_ins io_inst", false,-1, 31,0);
        tracep->declBit(c+264,"ysyx_041728 riscvIns ctrl regEnGen_ins io_regEn", false,-1);
        tracep->declBus(c+190,"ysyx_041728 riscvIns ctrl ResultSrcGen_ins io_inst", false,-1, 31,0);
        tracep->declBus(c+265,"ysyx_041728 riscvIns ctrl ResultSrcGen_ins io_ResultSrc", false,-1, 1,0);
        tracep->declBus(c+190,"ysyx_041728 riscvIns csrCtrl io_inst", false,-1, 31,0);
        tracep->declBit(c+267,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_csrrwen", false,-1);
        tracep->declBit(c+268,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_csrswen", false,-1);
        tracep->declBit(c+269,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_csrrsien", false,-1);
        tracep->declBit(c+270,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_csrrcien", false,-1);
        tracep->declBit(c+271,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_csrrcen", false,-1);
        tracep->declBit(c+272,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_csrrwien", false,-1);
        tracep->declBit(c+273,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_ecall", false,-1);
        tracep->declBit(c+274,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_rfen", false,-1);
        tracep->declBit(c+275,"ysyx_041728 riscvIns csrCtrl io_CSRCtrlIf_mepc2pc", false,-1);
        tracep->declBit(c+78,"ysyx_041728 riscvIns difftest v", false,-1);
        tracep->declBit(c+79,"ysyx_041728 riscvIns intrins intr", false,-1);
        tracep->declBit(c+80,"ysyx_041728 riscvIns Ebpro block", false,-1);
        tracep->declBus(c+276,"ysyx_041728 riscvIns Ebpro inst", false,-1, 31,0);
        tracep->declBit(c+701,"ysyx_041728 riscvIns Ebpro inst_wire", false,-1);
        tracep->declBit(c+277,"ysyx_041728 riscvIns skipinst v", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 iCache clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 iCache reset", false,-1);
        tracep->declBit(c+107,"ysyx_041728 iCache io_cacheOut_ar_valid_o", false,-1);
        tracep->declBus(c+108,"ysyx_041728 iCache io_cacheOut_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_041728 iCache io_cacheOut_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4003,"ysyx_041728 iCache io_cacheOut_r_valid_i", false,-1);
        tracep->declQuad(c+4006,"ysyx_041728 iCache io_cacheOut_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4008,"ysyx_041728 iCache io_cacheOut_r_last_i", false,-1);
        tracep->declBus(c+94,"ysyx_041728 iCache io_cacheOut_w_addr_o", false,-1, 31,0);
        tracep->declBit(c+90,"ysyx_041728 iCache io_cacheIn_valid", false,-1);
        tracep->declBit(c+91,"ysyx_041728 iCache io_cacheIn_ready", false,-1);
        tracep->declQuad(c+92,"ysyx_041728 iCache io_cacheIn_data_read", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_041728 iCache io_cacheIn_addr", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_041728 iCache io_SRAMIO_0_cen", false,-1);
        tracep->declBit(c+1,"ysyx_041728 iCache io_SRAMIO_0_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache io_SRAMIO_0_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache io_SRAMIO_0_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache io_SRAMIO_0_wmask", false,-1, 127,0);
        tracep->declArray(c+111,"ysyx_041728 iCache io_SRAMIO_0_rdata", false,-1, 127,0);
        tracep->declBit(c+2,"ysyx_041728 iCache io_SRAMIO_1_cen", false,-1);
        tracep->declBit(c+2,"ysyx_041728 iCache io_SRAMIO_1_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache io_SRAMIO_1_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache io_SRAMIO_1_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache io_SRAMIO_1_wmask", false,-1, 127,0);
        tracep->declArray(c+115,"ysyx_041728 iCache io_SRAMIO_1_rdata", false,-1, 127,0);
        tracep->declBit(c+3,"ysyx_041728 iCache io_SRAMIO_2_cen", false,-1);
        tracep->declBit(c+3,"ysyx_041728 iCache io_SRAMIO_2_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache io_SRAMIO_2_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache io_SRAMIO_2_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache io_SRAMIO_2_wmask", false,-1, 127,0);
        tracep->declArray(c+119,"ysyx_041728 iCache io_SRAMIO_2_rdata", false,-1, 127,0);
        tracep->declBit(c+4,"ysyx_041728 iCache io_SRAMIO_3_cen", false,-1);
        tracep->declBit(c+4,"ysyx_041728 iCache io_SRAMIO_3_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 iCache io_SRAMIO_3_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 iCache io_SRAMIO_3_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 iCache io_SRAMIO_3_wmask", false,-1, 127,0);
        tracep->declArray(c+123,"ysyx_041728 iCache io_SRAMIO_3_rdata", false,-1, 127,0);
        tracep->declBit(c+64,"ysyx_041728 iCache updataICache_0", false,-1);
        tracep->declBus(c+702,"ysyx_041728 iCache offset", false,-1, 3,0);
        tracep->declBus(c+110,"ysyx_041728 iCache index", false,-1, 5,0);
        tracep->declBus(c+703,"ysyx_041728 iCache tag", false,-1, 21,0);
        tracep->declBit(c+107,"ysyx_041728 iCache cacheState", false,-1);
        tracep->declBit(c+704,"ysyx_041728 iCache vArrayWire_63_0", false,-1);
        tracep->declBit(c+705,"ysyx_041728 iCache vArrayWire_62_0", false,-1);
        tracep->declBit(c+706,"ysyx_041728 iCache vArrayWire_61_0", false,-1);
        tracep->declBit(c+707,"ysyx_041728 iCache vArrayWire_60_0", false,-1);
        tracep->declBit(c+708,"ysyx_041728 iCache vArrayWire_59_0", false,-1);
        tracep->declBit(c+709,"ysyx_041728 iCache vArrayWire_58_0", false,-1);
        tracep->declBit(c+710,"ysyx_041728 iCache vArrayWire_57_0", false,-1);
        tracep->declBit(c+711,"ysyx_041728 iCache vArrayWire_56_0", false,-1);
        tracep->declBit(c+712,"ysyx_041728 iCache vArrayWire_55_0", false,-1);
        tracep->declBit(c+713,"ysyx_041728 iCache vArrayWire_54_0", false,-1);
        tracep->declBit(c+714,"ysyx_041728 iCache vArrayWire_53_0", false,-1);
        tracep->declBit(c+715,"ysyx_041728 iCache vArrayWire_52_0", false,-1);
        tracep->declBit(c+716,"ysyx_041728 iCache vArrayWire_51_0", false,-1);
        tracep->declBit(c+717,"ysyx_041728 iCache vArrayWire_50_0", false,-1);
        tracep->declBit(c+718,"ysyx_041728 iCache vArrayWire_49_0", false,-1);
        tracep->declBit(c+719,"ysyx_041728 iCache vArrayWire_48_0", false,-1);
        tracep->declBit(c+720,"ysyx_041728 iCache vArrayWire_47_0", false,-1);
        tracep->declBit(c+721,"ysyx_041728 iCache vArrayWire_46_0", false,-1);
        tracep->declBit(c+722,"ysyx_041728 iCache vArrayWire_45_0", false,-1);
        tracep->declBit(c+723,"ysyx_041728 iCache vArrayWire_44_0", false,-1);
        tracep->declBit(c+724,"ysyx_041728 iCache vArrayWire_43_0", false,-1);
        tracep->declBit(c+725,"ysyx_041728 iCache vArrayWire_42_0", false,-1);
        tracep->declBit(c+726,"ysyx_041728 iCache vArrayWire_41_0", false,-1);
        tracep->declBit(c+727,"ysyx_041728 iCache vArrayWire_40_0", false,-1);
        tracep->declBit(c+728,"ysyx_041728 iCache vArrayWire_39_0", false,-1);
        tracep->declBit(c+729,"ysyx_041728 iCache vArrayWire_38_0", false,-1);
        tracep->declBit(c+730,"ysyx_041728 iCache vArrayWire_37_0", false,-1);
        tracep->declBit(c+731,"ysyx_041728 iCache vArrayWire_36_0", false,-1);
        tracep->declBit(c+732,"ysyx_041728 iCache vArrayWire_35_0", false,-1);
        tracep->declBit(c+733,"ysyx_041728 iCache vArrayWire_34_0", false,-1);
        tracep->declBit(c+734,"ysyx_041728 iCache vArrayWire_33_0", false,-1);
        tracep->declBit(c+735,"ysyx_041728 iCache vArrayWire_32_0", false,-1);
        tracep->declBit(c+736,"ysyx_041728 iCache vArrayWire_31_0", false,-1);
        tracep->declBit(c+737,"ysyx_041728 iCache vArrayWire_30_0", false,-1);
        tracep->declBit(c+738,"ysyx_041728 iCache vArrayWire_29_0", false,-1);
        tracep->declBit(c+739,"ysyx_041728 iCache vArrayWire_28_0", false,-1);
        tracep->declBit(c+740,"ysyx_041728 iCache vArrayWire_27_0", false,-1);
        tracep->declBit(c+741,"ysyx_041728 iCache vArrayWire_26_0", false,-1);
        tracep->declBit(c+742,"ysyx_041728 iCache vArrayWire_25_0", false,-1);
        tracep->declBit(c+743,"ysyx_041728 iCache vArrayWire_24_0", false,-1);
        tracep->declBit(c+744,"ysyx_041728 iCache vArrayWire_23_0", false,-1);
        tracep->declBit(c+745,"ysyx_041728 iCache vArrayWire_22_0", false,-1);
        tracep->declBit(c+746,"ysyx_041728 iCache vArrayWire_21_0", false,-1);
        tracep->declBit(c+747,"ysyx_041728 iCache vArrayWire_20_0", false,-1);
        tracep->declBit(c+748,"ysyx_041728 iCache vArrayWire_19_0", false,-1);
        tracep->declBit(c+749,"ysyx_041728 iCache vArrayWire_18_0", false,-1);
        tracep->declBit(c+750,"ysyx_041728 iCache vArrayWire_17_0", false,-1);
        tracep->declBit(c+751,"ysyx_041728 iCache vArrayWire_16_0", false,-1);
        tracep->declBit(c+752,"ysyx_041728 iCache vArrayWire_15_0", false,-1);
        tracep->declBit(c+753,"ysyx_041728 iCache vArrayWire_14_0", false,-1);
        tracep->declBit(c+754,"ysyx_041728 iCache vArrayWire_13_0", false,-1);
        tracep->declBit(c+755,"ysyx_041728 iCache vArrayWire_12_0", false,-1);
        tracep->declBit(c+756,"ysyx_041728 iCache vArrayWire_11_0", false,-1);
        tracep->declBit(c+757,"ysyx_041728 iCache vArrayWire_10_0", false,-1);
        tracep->declBit(c+758,"ysyx_041728 iCache vArrayWire_9_0", false,-1);
        tracep->declBit(c+759,"ysyx_041728 iCache vArrayWire_8_0", false,-1);
        tracep->declBit(c+760,"ysyx_041728 iCache vArrayWire_7_0", false,-1);
        tracep->declBit(c+761,"ysyx_041728 iCache vArrayWire_6_0", false,-1);
        tracep->declBit(c+762,"ysyx_041728 iCache vArrayWire_5_0", false,-1);
        tracep->declBit(c+763,"ysyx_041728 iCache vArrayWire_4_0", false,-1);
        tracep->declBit(c+764,"ysyx_041728 iCache vArrayWire_3_0", false,-1);
        tracep->declBit(c+765,"ysyx_041728 iCache vArrayWire_2_0", false,-1);
        tracep->declBit(c+766,"ysyx_041728 iCache vArrayWire_1_0", false,-1);
        tracep->declBit(c+767,"ysyx_041728 iCache vArrayWire_0_0", false,-1);
        tracep->declBit(c+768,"ysyx_041728 iCache vMuxOut_0", false,-1);
        tracep->declBus(c+769,"ysyx_041728 iCache tagArrayWire_63_0", false,-1, 21,0);
        tracep->declBus(c+770,"ysyx_041728 iCache tagArrayWire_62_0", false,-1, 21,0);
        tracep->declBus(c+771,"ysyx_041728 iCache tagArrayWire_61_0", false,-1, 21,0);
        tracep->declBus(c+772,"ysyx_041728 iCache tagArrayWire_60_0", false,-1, 21,0);
        tracep->declBus(c+773,"ysyx_041728 iCache tagArrayWire_59_0", false,-1, 21,0);
        tracep->declBus(c+774,"ysyx_041728 iCache tagArrayWire_58_0", false,-1, 21,0);
        tracep->declBus(c+775,"ysyx_041728 iCache tagArrayWire_57_0", false,-1, 21,0);
        tracep->declBus(c+776,"ysyx_041728 iCache tagArrayWire_56_0", false,-1, 21,0);
        tracep->declBus(c+777,"ysyx_041728 iCache tagArrayWire_55_0", false,-1, 21,0);
        tracep->declBus(c+778,"ysyx_041728 iCache tagArrayWire_54_0", false,-1, 21,0);
        tracep->declBus(c+779,"ysyx_041728 iCache tagArrayWire_53_0", false,-1, 21,0);
        tracep->declBus(c+780,"ysyx_041728 iCache tagArrayWire_52_0", false,-1, 21,0);
        tracep->declBus(c+781,"ysyx_041728 iCache tagArrayWire_51_0", false,-1, 21,0);
        tracep->declBus(c+782,"ysyx_041728 iCache tagArrayWire_50_0", false,-1, 21,0);
        tracep->declBus(c+783,"ysyx_041728 iCache tagArrayWire_49_0", false,-1, 21,0);
        tracep->declBus(c+784,"ysyx_041728 iCache tagArrayWire_48_0", false,-1, 21,0);
        tracep->declBus(c+785,"ysyx_041728 iCache tagArrayWire_47_0", false,-1, 21,0);
        tracep->declBus(c+786,"ysyx_041728 iCache tagArrayWire_46_0", false,-1, 21,0);
        tracep->declBus(c+787,"ysyx_041728 iCache tagArrayWire_45_0", false,-1, 21,0);
        tracep->declBus(c+788,"ysyx_041728 iCache tagArrayWire_44_0", false,-1, 21,0);
        tracep->declBus(c+789,"ysyx_041728 iCache tagArrayWire_43_0", false,-1, 21,0);
        tracep->declBus(c+790,"ysyx_041728 iCache tagArrayWire_42_0", false,-1, 21,0);
        tracep->declBus(c+791,"ysyx_041728 iCache tagArrayWire_41_0", false,-1, 21,0);
        tracep->declBus(c+792,"ysyx_041728 iCache tagArrayWire_40_0", false,-1, 21,0);
        tracep->declBus(c+793,"ysyx_041728 iCache tagArrayWire_39_0", false,-1, 21,0);
        tracep->declBus(c+794,"ysyx_041728 iCache tagArrayWire_38_0", false,-1, 21,0);
        tracep->declBus(c+795,"ysyx_041728 iCache tagArrayWire_37_0", false,-1, 21,0);
        tracep->declBus(c+796,"ysyx_041728 iCache tagArrayWire_36_0", false,-1, 21,0);
        tracep->declBus(c+797,"ysyx_041728 iCache tagArrayWire_35_0", false,-1, 21,0);
        tracep->declBus(c+798,"ysyx_041728 iCache tagArrayWire_34_0", false,-1, 21,0);
        tracep->declBus(c+799,"ysyx_041728 iCache tagArrayWire_33_0", false,-1, 21,0);
        tracep->declBus(c+800,"ysyx_041728 iCache tagArrayWire_32_0", false,-1, 21,0);
        tracep->declBus(c+801,"ysyx_041728 iCache tagArrayWire_31_0", false,-1, 21,0);
        tracep->declBus(c+802,"ysyx_041728 iCache tagArrayWire_30_0", false,-1, 21,0);
        tracep->declBus(c+803,"ysyx_041728 iCache tagArrayWire_29_0", false,-1, 21,0);
        tracep->declBus(c+804,"ysyx_041728 iCache tagArrayWire_28_0", false,-1, 21,0);
        tracep->declBus(c+805,"ysyx_041728 iCache tagArrayWire_27_0", false,-1, 21,0);
        tracep->declBus(c+806,"ysyx_041728 iCache tagArrayWire_26_0", false,-1, 21,0);
        tracep->declBus(c+807,"ysyx_041728 iCache tagArrayWire_25_0", false,-1, 21,0);
        tracep->declBus(c+808,"ysyx_041728 iCache tagArrayWire_24_0", false,-1, 21,0);
        tracep->declBus(c+809,"ysyx_041728 iCache tagArrayWire_23_0", false,-1, 21,0);
        tracep->declBus(c+810,"ysyx_041728 iCache tagArrayWire_22_0", false,-1, 21,0);
        tracep->declBus(c+811,"ysyx_041728 iCache tagArrayWire_21_0", false,-1, 21,0);
        tracep->declBus(c+812,"ysyx_041728 iCache tagArrayWire_20_0", false,-1, 21,0);
        tracep->declBus(c+813,"ysyx_041728 iCache tagArrayWire_19_0", false,-1, 21,0);
        tracep->declBus(c+814,"ysyx_041728 iCache tagArrayWire_18_0", false,-1, 21,0);
        tracep->declBus(c+815,"ysyx_041728 iCache tagArrayWire_17_0", false,-1, 21,0);
        tracep->declBus(c+816,"ysyx_041728 iCache tagArrayWire_16_0", false,-1, 21,0);
        tracep->declBus(c+817,"ysyx_041728 iCache tagArrayWire_15_0", false,-1, 21,0);
        tracep->declBus(c+818,"ysyx_041728 iCache tagArrayWire_14_0", false,-1, 21,0);
        tracep->declBus(c+819,"ysyx_041728 iCache tagArrayWire_13_0", false,-1, 21,0);
        tracep->declBus(c+820,"ysyx_041728 iCache tagArrayWire_12_0", false,-1, 21,0);
        tracep->declBus(c+821,"ysyx_041728 iCache tagArrayWire_11_0", false,-1, 21,0);
        tracep->declBus(c+822,"ysyx_041728 iCache tagArrayWire_10_0", false,-1, 21,0);
        tracep->declBus(c+823,"ysyx_041728 iCache tagArrayWire_9_0", false,-1, 21,0);
        tracep->declBus(c+824,"ysyx_041728 iCache tagArrayWire_8_0", false,-1, 21,0);
        tracep->declBus(c+825,"ysyx_041728 iCache tagArrayWire_7_0", false,-1, 21,0);
        tracep->declBus(c+826,"ysyx_041728 iCache tagArrayWire_6_0", false,-1, 21,0);
        tracep->declBus(c+827,"ysyx_041728 iCache tagArrayWire_5_0", false,-1, 21,0);
        tracep->declBus(c+828,"ysyx_041728 iCache tagArrayWire_4_0", false,-1, 21,0);
        tracep->declBus(c+829,"ysyx_041728 iCache tagArrayWire_3_0", false,-1, 21,0);
        tracep->declBus(c+830,"ysyx_041728 iCache tagArrayWire_2_0", false,-1, 21,0);
        tracep->declBus(c+831,"ysyx_041728 iCache tagArrayWire_1_0", false,-1, 21,0);
        tracep->declBus(c+832,"ysyx_041728 iCache tagArrayWire_0_0", false,-1, 21,0);
        tracep->declBus(c+833,"ysyx_041728 iCache tagMuxOut_0", false,-1, 21,0);
        tracep->declBit(c+834,"ysyx_041728 iCache hitArray_0", false,-1);
        tracep->declBit(c+835,"ysyx_041728 iCache vArrayWire_63_1", false,-1);
        tracep->declBit(c+836,"ysyx_041728 iCache vArrayWire_62_1", false,-1);
        tracep->declBit(c+837,"ysyx_041728 iCache vArrayWire_61_1", false,-1);
        tracep->declBit(c+838,"ysyx_041728 iCache vArrayWire_60_1", false,-1);
        tracep->declBit(c+839,"ysyx_041728 iCache vArrayWire_59_1", false,-1);
        tracep->declBit(c+840,"ysyx_041728 iCache vArrayWire_58_1", false,-1);
        tracep->declBit(c+841,"ysyx_041728 iCache vArrayWire_57_1", false,-1);
        tracep->declBit(c+842,"ysyx_041728 iCache vArrayWire_56_1", false,-1);
        tracep->declBit(c+843,"ysyx_041728 iCache vArrayWire_55_1", false,-1);
        tracep->declBit(c+844,"ysyx_041728 iCache vArrayWire_54_1", false,-1);
        tracep->declBit(c+845,"ysyx_041728 iCache vArrayWire_53_1", false,-1);
        tracep->declBit(c+846,"ysyx_041728 iCache vArrayWire_52_1", false,-1);
        tracep->declBit(c+847,"ysyx_041728 iCache vArrayWire_51_1", false,-1);
        tracep->declBit(c+848,"ysyx_041728 iCache vArrayWire_50_1", false,-1);
        tracep->declBit(c+849,"ysyx_041728 iCache vArrayWire_49_1", false,-1);
        tracep->declBit(c+850,"ysyx_041728 iCache vArrayWire_48_1", false,-1);
        tracep->declBit(c+851,"ysyx_041728 iCache vArrayWire_47_1", false,-1);
        tracep->declBit(c+852,"ysyx_041728 iCache vArrayWire_46_1", false,-1);
        tracep->declBit(c+853,"ysyx_041728 iCache vArrayWire_45_1", false,-1);
        tracep->declBit(c+854,"ysyx_041728 iCache vArrayWire_44_1", false,-1);
        tracep->declBit(c+855,"ysyx_041728 iCache vArrayWire_43_1", false,-1);
        tracep->declBit(c+856,"ysyx_041728 iCache vArrayWire_42_1", false,-1);
        tracep->declBit(c+857,"ysyx_041728 iCache vArrayWire_41_1", false,-1);
        tracep->declBit(c+858,"ysyx_041728 iCache vArrayWire_40_1", false,-1);
        tracep->declBit(c+859,"ysyx_041728 iCache vArrayWire_39_1", false,-1);
        tracep->declBit(c+860,"ysyx_041728 iCache vArrayWire_38_1", false,-1);
        tracep->declBit(c+861,"ysyx_041728 iCache vArrayWire_37_1", false,-1);
        tracep->declBit(c+862,"ysyx_041728 iCache vArrayWire_36_1", false,-1);
        tracep->declBit(c+863,"ysyx_041728 iCache vArrayWire_35_1", false,-1);
        tracep->declBit(c+864,"ysyx_041728 iCache vArrayWire_34_1", false,-1);
        tracep->declBit(c+865,"ysyx_041728 iCache vArrayWire_33_1", false,-1);
        tracep->declBit(c+866,"ysyx_041728 iCache vArrayWire_32_1", false,-1);
        tracep->declBit(c+867,"ysyx_041728 iCache vArrayWire_31_1", false,-1);
        tracep->declBit(c+868,"ysyx_041728 iCache vArrayWire_30_1", false,-1);
        tracep->declBit(c+869,"ysyx_041728 iCache vArrayWire_29_1", false,-1);
        tracep->declBit(c+870,"ysyx_041728 iCache vArrayWire_28_1", false,-1);
        tracep->declBit(c+871,"ysyx_041728 iCache vArrayWire_27_1", false,-1);
        tracep->declBit(c+872,"ysyx_041728 iCache vArrayWire_26_1", false,-1);
        tracep->declBit(c+873,"ysyx_041728 iCache vArrayWire_25_1", false,-1);
        tracep->declBit(c+874,"ysyx_041728 iCache vArrayWire_24_1", false,-1);
        tracep->declBit(c+875,"ysyx_041728 iCache vArrayWire_23_1", false,-1);
        tracep->declBit(c+876,"ysyx_041728 iCache vArrayWire_22_1", false,-1);
        tracep->declBit(c+877,"ysyx_041728 iCache vArrayWire_21_1", false,-1);
        tracep->declBit(c+878,"ysyx_041728 iCache vArrayWire_20_1", false,-1);
        tracep->declBit(c+879,"ysyx_041728 iCache vArrayWire_19_1", false,-1);
        tracep->declBit(c+880,"ysyx_041728 iCache vArrayWire_18_1", false,-1);
        tracep->declBit(c+881,"ysyx_041728 iCache vArrayWire_17_1", false,-1);
        tracep->declBit(c+882,"ysyx_041728 iCache vArrayWire_16_1", false,-1);
        tracep->declBit(c+883,"ysyx_041728 iCache vArrayWire_15_1", false,-1);
        tracep->declBit(c+884,"ysyx_041728 iCache vArrayWire_14_1", false,-1);
        tracep->declBit(c+885,"ysyx_041728 iCache vArrayWire_13_1", false,-1);
        tracep->declBit(c+886,"ysyx_041728 iCache vArrayWire_12_1", false,-1);
        tracep->declBit(c+887,"ysyx_041728 iCache vArrayWire_11_1", false,-1);
        tracep->declBit(c+888,"ysyx_041728 iCache vArrayWire_10_1", false,-1);
        tracep->declBit(c+889,"ysyx_041728 iCache vArrayWire_9_1", false,-1);
        tracep->declBit(c+890,"ysyx_041728 iCache vArrayWire_8_1", false,-1);
        tracep->declBit(c+891,"ysyx_041728 iCache vArrayWire_7_1", false,-1);
        tracep->declBit(c+892,"ysyx_041728 iCache vArrayWire_6_1", false,-1);
        tracep->declBit(c+893,"ysyx_041728 iCache vArrayWire_5_1", false,-1);
        tracep->declBit(c+894,"ysyx_041728 iCache vArrayWire_4_1", false,-1);
        tracep->declBit(c+895,"ysyx_041728 iCache vArrayWire_3_1", false,-1);
        tracep->declBit(c+896,"ysyx_041728 iCache vArrayWire_2_1", false,-1);
        tracep->declBit(c+897,"ysyx_041728 iCache vArrayWire_1_1", false,-1);
        tracep->declBit(c+898,"ysyx_041728 iCache vArrayWire_0_1", false,-1);
        tracep->declBit(c+899,"ysyx_041728 iCache vMuxOut_1", false,-1);
        tracep->declBus(c+900,"ysyx_041728 iCache tagArrayWire_63_1", false,-1, 21,0);
        tracep->declBus(c+901,"ysyx_041728 iCache tagArrayWire_62_1", false,-1, 21,0);
        tracep->declBus(c+902,"ysyx_041728 iCache tagArrayWire_61_1", false,-1, 21,0);
        tracep->declBus(c+903,"ysyx_041728 iCache tagArrayWire_60_1", false,-1, 21,0);
        tracep->declBus(c+904,"ysyx_041728 iCache tagArrayWire_59_1", false,-1, 21,0);
        tracep->declBus(c+905,"ysyx_041728 iCache tagArrayWire_58_1", false,-1, 21,0);
        tracep->declBus(c+906,"ysyx_041728 iCache tagArrayWire_57_1", false,-1, 21,0);
        tracep->declBus(c+907,"ysyx_041728 iCache tagArrayWire_56_1", false,-1, 21,0);
        tracep->declBus(c+908,"ysyx_041728 iCache tagArrayWire_55_1", false,-1, 21,0);
        tracep->declBus(c+909,"ysyx_041728 iCache tagArrayWire_54_1", false,-1, 21,0);
        tracep->declBus(c+910,"ysyx_041728 iCache tagArrayWire_53_1", false,-1, 21,0);
        tracep->declBus(c+911,"ysyx_041728 iCache tagArrayWire_52_1", false,-1, 21,0);
        tracep->declBus(c+912,"ysyx_041728 iCache tagArrayWire_51_1", false,-1, 21,0);
        tracep->declBus(c+913,"ysyx_041728 iCache tagArrayWire_50_1", false,-1, 21,0);
        tracep->declBus(c+914,"ysyx_041728 iCache tagArrayWire_49_1", false,-1, 21,0);
        tracep->declBus(c+915,"ysyx_041728 iCache tagArrayWire_48_1", false,-1, 21,0);
        tracep->declBus(c+916,"ysyx_041728 iCache tagArrayWire_47_1", false,-1, 21,0);
        tracep->declBus(c+917,"ysyx_041728 iCache tagArrayWire_46_1", false,-1, 21,0);
        tracep->declBus(c+918,"ysyx_041728 iCache tagArrayWire_45_1", false,-1, 21,0);
        tracep->declBus(c+919,"ysyx_041728 iCache tagArrayWire_44_1", false,-1, 21,0);
        tracep->declBus(c+920,"ysyx_041728 iCache tagArrayWire_43_1", false,-1, 21,0);
        tracep->declBus(c+921,"ysyx_041728 iCache tagArrayWire_42_1", false,-1, 21,0);
        tracep->declBus(c+922,"ysyx_041728 iCache tagArrayWire_41_1", false,-1, 21,0);
        tracep->declBus(c+923,"ysyx_041728 iCache tagArrayWire_40_1", false,-1, 21,0);
        tracep->declBus(c+924,"ysyx_041728 iCache tagArrayWire_39_1", false,-1, 21,0);
        tracep->declBus(c+925,"ysyx_041728 iCache tagArrayWire_38_1", false,-1, 21,0);
        tracep->declBus(c+926,"ysyx_041728 iCache tagArrayWire_37_1", false,-1, 21,0);
        tracep->declBus(c+927,"ysyx_041728 iCache tagArrayWire_36_1", false,-1, 21,0);
        tracep->declBus(c+928,"ysyx_041728 iCache tagArrayWire_35_1", false,-1, 21,0);
        tracep->declBus(c+929,"ysyx_041728 iCache tagArrayWire_34_1", false,-1, 21,0);
        tracep->declBus(c+930,"ysyx_041728 iCache tagArrayWire_33_1", false,-1, 21,0);
        tracep->declBus(c+931,"ysyx_041728 iCache tagArrayWire_32_1", false,-1, 21,0);
        tracep->declBus(c+932,"ysyx_041728 iCache tagArrayWire_31_1", false,-1, 21,0);
        tracep->declBus(c+933,"ysyx_041728 iCache tagArrayWire_30_1", false,-1, 21,0);
        tracep->declBus(c+934,"ysyx_041728 iCache tagArrayWire_29_1", false,-1, 21,0);
        tracep->declBus(c+935,"ysyx_041728 iCache tagArrayWire_28_1", false,-1, 21,0);
        tracep->declBus(c+936,"ysyx_041728 iCache tagArrayWire_27_1", false,-1, 21,0);
        tracep->declBus(c+937,"ysyx_041728 iCache tagArrayWire_26_1", false,-1, 21,0);
        tracep->declBus(c+938,"ysyx_041728 iCache tagArrayWire_25_1", false,-1, 21,0);
        tracep->declBus(c+939,"ysyx_041728 iCache tagArrayWire_24_1", false,-1, 21,0);
        tracep->declBus(c+940,"ysyx_041728 iCache tagArrayWire_23_1", false,-1, 21,0);
        tracep->declBus(c+941,"ysyx_041728 iCache tagArrayWire_22_1", false,-1, 21,0);
        tracep->declBus(c+942,"ysyx_041728 iCache tagArrayWire_21_1", false,-1, 21,0);
        tracep->declBus(c+943,"ysyx_041728 iCache tagArrayWire_20_1", false,-1, 21,0);
        tracep->declBus(c+944,"ysyx_041728 iCache tagArrayWire_19_1", false,-1, 21,0);
        tracep->declBus(c+945,"ysyx_041728 iCache tagArrayWire_18_1", false,-1, 21,0);
        tracep->declBus(c+946,"ysyx_041728 iCache tagArrayWire_17_1", false,-1, 21,0);
        tracep->declBus(c+947,"ysyx_041728 iCache tagArrayWire_16_1", false,-1, 21,0);
        tracep->declBus(c+948,"ysyx_041728 iCache tagArrayWire_15_1", false,-1, 21,0);
        tracep->declBus(c+949,"ysyx_041728 iCache tagArrayWire_14_1", false,-1, 21,0);
        tracep->declBus(c+950,"ysyx_041728 iCache tagArrayWire_13_1", false,-1, 21,0);
        tracep->declBus(c+951,"ysyx_041728 iCache tagArrayWire_12_1", false,-1, 21,0);
        tracep->declBus(c+952,"ysyx_041728 iCache tagArrayWire_11_1", false,-1, 21,0);
        tracep->declBus(c+953,"ysyx_041728 iCache tagArrayWire_10_1", false,-1, 21,0);
        tracep->declBus(c+954,"ysyx_041728 iCache tagArrayWire_9_1", false,-1, 21,0);
        tracep->declBus(c+955,"ysyx_041728 iCache tagArrayWire_8_1", false,-1, 21,0);
        tracep->declBus(c+956,"ysyx_041728 iCache tagArrayWire_7_1", false,-1, 21,0);
        tracep->declBus(c+957,"ysyx_041728 iCache tagArrayWire_6_1", false,-1, 21,0);
        tracep->declBus(c+958,"ysyx_041728 iCache tagArrayWire_5_1", false,-1, 21,0);
        tracep->declBus(c+959,"ysyx_041728 iCache tagArrayWire_4_1", false,-1, 21,0);
        tracep->declBus(c+960,"ysyx_041728 iCache tagArrayWire_3_1", false,-1, 21,0);
        tracep->declBus(c+961,"ysyx_041728 iCache tagArrayWire_2_1", false,-1, 21,0);
        tracep->declBus(c+962,"ysyx_041728 iCache tagArrayWire_1_1", false,-1, 21,0);
        tracep->declBus(c+963,"ysyx_041728 iCache tagArrayWire_0_1", false,-1, 21,0);
        tracep->declBus(c+964,"ysyx_041728 iCache tagMuxOut_1", false,-1, 21,0);
        tracep->declBit(c+965,"ysyx_041728 iCache hitArray_1", false,-1);
        tracep->declBit(c+966,"ysyx_041728 iCache vArrayWire_63_2", false,-1);
        tracep->declBit(c+967,"ysyx_041728 iCache vArrayWire_62_2", false,-1);
        tracep->declBit(c+968,"ysyx_041728 iCache vArrayWire_61_2", false,-1);
        tracep->declBit(c+969,"ysyx_041728 iCache vArrayWire_60_2", false,-1);
        tracep->declBit(c+970,"ysyx_041728 iCache vArrayWire_59_2", false,-1);
        tracep->declBit(c+971,"ysyx_041728 iCache vArrayWire_58_2", false,-1);
        tracep->declBit(c+972,"ysyx_041728 iCache vArrayWire_57_2", false,-1);
        tracep->declBit(c+973,"ysyx_041728 iCache vArrayWire_56_2", false,-1);
        tracep->declBit(c+974,"ysyx_041728 iCache vArrayWire_55_2", false,-1);
        tracep->declBit(c+975,"ysyx_041728 iCache vArrayWire_54_2", false,-1);
        tracep->declBit(c+976,"ysyx_041728 iCache vArrayWire_53_2", false,-1);
        tracep->declBit(c+977,"ysyx_041728 iCache vArrayWire_52_2", false,-1);
        tracep->declBit(c+978,"ysyx_041728 iCache vArrayWire_51_2", false,-1);
        tracep->declBit(c+979,"ysyx_041728 iCache vArrayWire_50_2", false,-1);
        tracep->declBit(c+980,"ysyx_041728 iCache vArrayWire_49_2", false,-1);
        tracep->declBit(c+981,"ysyx_041728 iCache vArrayWire_48_2", false,-1);
        tracep->declBit(c+982,"ysyx_041728 iCache vArrayWire_47_2", false,-1);
        tracep->declBit(c+983,"ysyx_041728 iCache vArrayWire_46_2", false,-1);
        tracep->declBit(c+984,"ysyx_041728 iCache vArrayWire_45_2", false,-1);
        tracep->declBit(c+985,"ysyx_041728 iCache vArrayWire_44_2", false,-1);
        tracep->declBit(c+986,"ysyx_041728 iCache vArrayWire_43_2", false,-1);
        tracep->declBit(c+987,"ysyx_041728 iCache vArrayWire_42_2", false,-1);
        tracep->declBit(c+988,"ysyx_041728 iCache vArrayWire_41_2", false,-1);
        tracep->declBit(c+989,"ysyx_041728 iCache vArrayWire_40_2", false,-1);
        tracep->declBit(c+990,"ysyx_041728 iCache vArrayWire_39_2", false,-1);
        tracep->declBit(c+991,"ysyx_041728 iCache vArrayWire_38_2", false,-1);
        tracep->declBit(c+992,"ysyx_041728 iCache vArrayWire_37_2", false,-1);
        tracep->declBit(c+993,"ysyx_041728 iCache vArrayWire_36_2", false,-1);
        tracep->declBit(c+994,"ysyx_041728 iCache vArrayWire_35_2", false,-1);
        tracep->declBit(c+995,"ysyx_041728 iCache vArrayWire_34_2", false,-1);
        tracep->declBit(c+996,"ysyx_041728 iCache vArrayWire_33_2", false,-1);
        tracep->declBit(c+997,"ysyx_041728 iCache vArrayWire_32_2", false,-1);
        tracep->declBit(c+998,"ysyx_041728 iCache vArrayWire_31_2", false,-1);
        tracep->declBit(c+999,"ysyx_041728 iCache vArrayWire_30_2", false,-1);
        tracep->declBit(c+1000,"ysyx_041728 iCache vArrayWire_29_2", false,-1);
        tracep->declBit(c+1001,"ysyx_041728 iCache vArrayWire_28_2", false,-1);
        tracep->declBit(c+1002,"ysyx_041728 iCache vArrayWire_27_2", false,-1);
        tracep->declBit(c+1003,"ysyx_041728 iCache vArrayWire_26_2", false,-1);
        tracep->declBit(c+1004,"ysyx_041728 iCache vArrayWire_25_2", false,-1);
        tracep->declBit(c+1005,"ysyx_041728 iCache vArrayWire_24_2", false,-1);
        tracep->declBit(c+1006,"ysyx_041728 iCache vArrayWire_23_2", false,-1);
        tracep->declBit(c+1007,"ysyx_041728 iCache vArrayWire_22_2", false,-1);
        tracep->declBit(c+1008,"ysyx_041728 iCache vArrayWire_21_2", false,-1);
        tracep->declBit(c+1009,"ysyx_041728 iCache vArrayWire_20_2", false,-1);
        tracep->declBit(c+1010,"ysyx_041728 iCache vArrayWire_19_2", false,-1);
        tracep->declBit(c+1011,"ysyx_041728 iCache vArrayWire_18_2", false,-1);
        tracep->declBit(c+1012,"ysyx_041728 iCache vArrayWire_17_2", false,-1);
        tracep->declBit(c+1013,"ysyx_041728 iCache vArrayWire_16_2", false,-1);
        tracep->declBit(c+1014,"ysyx_041728 iCache vArrayWire_15_2", false,-1);
        tracep->declBit(c+1015,"ysyx_041728 iCache vArrayWire_14_2", false,-1);
        tracep->declBit(c+1016,"ysyx_041728 iCache vArrayWire_13_2", false,-1);
        tracep->declBit(c+1017,"ysyx_041728 iCache vArrayWire_12_2", false,-1);
        tracep->declBit(c+1018,"ysyx_041728 iCache vArrayWire_11_2", false,-1);
        tracep->declBit(c+1019,"ysyx_041728 iCache vArrayWire_10_2", false,-1);
        tracep->declBit(c+1020,"ysyx_041728 iCache vArrayWire_9_2", false,-1);
        tracep->declBit(c+1021,"ysyx_041728 iCache vArrayWire_8_2", false,-1);
        tracep->declBit(c+1022,"ysyx_041728 iCache vArrayWire_7_2", false,-1);
        tracep->declBit(c+1023,"ysyx_041728 iCache vArrayWire_6_2", false,-1);
        tracep->declBit(c+1024,"ysyx_041728 iCache vArrayWire_5_2", false,-1);
        tracep->declBit(c+1025,"ysyx_041728 iCache vArrayWire_4_2", false,-1);
        tracep->declBit(c+1026,"ysyx_041728 iCache vArrayWire_3_2", false,-1);
        tracep->declBit(c+1027,"ysyx_041728 iCache vArrayWire_2_2", false,-1);
        tracep->declBit(c+1028,"ysyx_041728 iCache vArrayWire_1_2", false,-1);
        tracep->declBit(c+1029,"ysyx_041728 iCache vArrayWire_0_2", false,-1);
        tracep->declBit(c+1030,"ysyx_041728 iCache vMuxOut_2", false,-1);
        tracep->declBus(c+1031,"ysyx_041728 iCache tagArrayWire_63_2", false,-1, 21,0);
        tracep->declBus(c+1032,"ysyx_041728 iCache tagArrayWire_62_2", false,-1, 21,0);
        tracep->declBus(c+1033,"ysyx_041728 iCache tagArrayWire_61_2", false,-1, 21,0);
        tracep->declBus(c+1034,"ysyx_041728 iCache tagArrayWire_60_2", false,-1, 21,0);
        tracep->declBus(c+1035,"ysyx_041728 iCache tagArrayWire_59_2", false,-1, 21,0);
        tracep->declBus(c+1036,"ysyx_041728 iCache tagArrayWire_58_2", false,-1, 21,0);
        tracep->declBus(c+1037,"ysyx_041728 iCache tagArrayWire_57_2", false,-1, 21,0);
        tracep->declBus(c+1038,"ysyx_041728 iCache tagArrayWire_56_2", false,-1, 21,0);
        tracep->declBus(c+1039,"ysyx_041728 iCache tagArrayWire_55_2", false,-1, 21,0);
        tracep->declBus(c+1040,"ysyx_041728 iCache tagArrayWire_54_2", false,-1, 21,0);
        tracep->declBus(c+1041,"ysyx_041728 iCache tagArrayWire_53_2", false,-1, 21,0);
        tracep->declBus(c+1042,"ysyx_041728 iCache tagArrayWire_52_2", false,-1, 21,0);
        tracep->declBus(c+1043,"ysyx_041728 iCache tagArrayWire_51_2", false,-1, 21,0);
        tracep->declBus(c+1044,"ysyx_041728 iCache tagArrayWire_50_2", false,-1, 21,0);
        tracep->declBus(c+1045,"ysyx_041728 iCache tagArrayWire_49_2", false,-1, 21,0);
        tracep->declBus(c+1046,"ysyx_041728 iCache tagArrayWire_48_2", false,-1, 21,0);
        tracep->declBus(c+1047,"ysyx_041728 iCache tagArrayWire_47_2", false,-1, 21,0);
        tracep->declBus(c+1048,"ysyx_041728 iCache tagArrayWire_46_2", false,-1, 21,0);
        tracep->declBus(c+1049,"ysyx_041728 iCache tagArrayWire_45_2", false,-1, 21,0);
        tracep->declBus(c+1050,"ysyx_041728 iCache tagArrayWire_44_2", false,-1, 21,0);
        tracep->declBus(c+1051,"ysyx_041728 iCache tagArrayWire_43_2", false,-1, 21,0);
        tracep->declBus(c+1052,"ysyx_041728 iCache tagArrayWire_42_2", false,-1, 21,0);
        tracep->declBus(c+1053,"ysyx_041728 iCache tagArrayWire_41_2", false,-1, 21,0);
        tracep->declBus(c+1054,"ysyx_041728 iCache tagArrayWire_40_2", false,-1, 21,0);
        tracep->declBus(c+1055,"ysyx_041728 iCache tagArrayWire_39_2", false,-1, 21,0);
        tracep->declBus(c+1056,"ysyx_041728 iCache tagArrayWire_38_2", false,-1, 21,0);
        tracep->declBus(c+1057,"ysyx_041728 iCache tagArrayWire_37_2", false,-1, 21,0);
        tracep->declBus(c+1058,"ysyx_041728 iCache tagArrayWire_36_2", false,-1, 21,0);
        tracep->declBus(c+1059,"ysyx_041728 iCache tagArrayWire_35_2", false,-1, 21,0);
        tracep->declBus(c+1060,"ysyx_041728 iCache tagArrayWire_34_2", false,-1, 21,0);
        tracep->declBus(c+1061,"ysyx_041728 iCache tagArrayWire_33_2", false,-1, 21,0);
        tracep->declBus(c+1062,"ysyx_041728 iCache tagArrayWire_32_2", false,-1, 21,0);
        tracep->declBus(c+1063,"ysyx_041728 iCache tagArrayWire_31_2", false,-1, 21,0);
        tracep->declBus(c+1064,"ysyx_041728 iCache tagArrayWire_30_2", false,-1, 21,0);
        tracep->declBus(c+1065,"ysyx_041728 iCache tagArrayWire_29_2", false,-1, 21,0);
        tracep->declBus(c+1066,"ysyx_041728 iCache tagArrayWire_28_2", false,-1, 21,0);
        tracep->declBus(c+1067,"ysyx_041728 iCache tagArrayWire_27_2", false,-1, 21,0);
        tracep->declBus(c+1068,"ysyx_041728 iCache tagArrayWire_26_2", false,-1, 21,0);
        tracep->declBus(c+1069,"ysyx_041728 iCache tagArrayWire_25_2", false,-1, 21,0);
        tracep->declBus(c+1070,"ysyx_041728 iCache tagArrayWire_24_2", false,-1, 21,0);
        tracep->declBus(c+1071,"ysyx_041728 iCache tagArrayWire_23_2", false,-1, 21,0);
        tracep->declBus(c+1072,"ysyx_041728 iCache tagArrayWire_22_2", false,-1, 21,0);
        tracep->declBus(c+1073,"ysyx_041728 iCache tagArrayWire_21_2", false,-1, 21,0);
        tracep->declBus(c+1074,"ysyx_041728 iCache tagArrayWire_20_2", false,-1, 21,0);
        tracep->declBus(c+1075,"ysyx_041728 iCache tagArrayWire_19_2", false,-1, 21,0);
        tracep->declBus(c+1076,"ysyx_041728 iCache tagArrayWire_18_2", false,-1, 21,0);
        tracep->declBus(c+1077,"ysyx_041728 iCache tagArrayWire_17_2", false,-1, 21,0);
        tracep->declBus(c+1078,"ysyx_041728 iCache tagArrayWire_16_2", false,-1, 21,0);
        tracep->declBus(c+1079,"ysyx_041728 iCache tagArrayWire_15_2", false,-1, 21,0);
        tracep->declBus(c+1080,"ysyx_041728 iCache tagArrayWire_14_2", false,-1, 21,0);
        tracep->declBus(c+1081,"ysyx_041728 iCache tagArrayWire_13_2", false,-1, 21,0);
        tracep->declBus(c+1082,"ysyx_041728 iCache tagArrayWire_12_2", false,-1, 21,0);
        tracep->declBus(c+1083,"ysyx_041728 iCache tagArrayWire_11_2", false,-1, 21,0);
        tracep->declBus(c+1084,"ysyx_041728 iCache tagArrayWire_10_2", false,-1, 21,0);
        tracep->declBus(c+1085,"ysyx_041728 iCache tagArrayWire_9_2", false,-1, 21,0);
        tracep->declBus(c+1086,"ysyx_041728 iCache tagArrayWire_8_2", false,-1, 21,0);
        tracep->declBus(c+1087,"ysyx_041728 iCache tagArrayWire_7_2", false,-1, 21,0);
        tracep->declBus(c+1088,"ysyx_041728 iCache tagArrayWire_6_2", false,-1, 21,0);
        tracep->declBus(c+1089,"ysyx_041728 iCache tagArrayWire_5_2", false,-1, 21,0);
        tracep->declBus(c+1090,"ysyx_041728 iCache tagArrayWire_4_2", false,-1, 21,0);
        tracep->declBus(c+1091,"ysyx_041728 iCache tagArrayWire_3_2", false,-1, 21,0);
        tracep->declBus(c+1092,"ysyx_041728 iCache tagArrayWire_2_2", false,-1, 21,0);
        tracep->declBus(c+1093,"ysyx_041728 iCache tagArrayWire_1_2", false,-1, 21,0);
        tracep->declBus(c+1094,"ysyx_041728 iCache tagArrayWire_0_2", false,-1, 21,0);
        tracep->declBus(c+1095,"ysyx_041728 iCache tagMuxOut_2", false,-1, 21,0);
        tracep->declBit(c+1096,"ysyx_041728 iCache hitArray_2", false,-1);
        tracep->declBit(c+1097,"ysyx_041728 iCache vArrayWire_63_3", false,-1);
        tracep->declBit(c+1098,"ysyx_041728 iCache vArrayWire_62_3", false,-1);
        tracep->declBit(c+1099,"ysyx_041728 iCache vArrayWire_61_3", false,-1);
        tracep->declBit(c+1100,"ysyx_041728 iCache vArrayWire_60_3", false,-1);
        tracep->declBit(c+1101,"ysyx_041728 iCache vArrayWire_59_3", false,-1);
        tracep->declBit(c+1102,"ysyx_041728 iCache vArrayWire_58_3", false,-1);
        tracep->declBit(c+1103,"ysyx_041728 iCache vArrayWire_57_3", false,-1);
        tracep->declBit(c+1104,"ysyx_041728 iCache vArrayWire_56_3", false,-1);
        tracep->declBit(c+1105,"ysyx_041728 iCache vArrayWire_55_3", false,-1);
        tracep->declBit(c+1106,"ysyx_041728 iCache vArrayWire_54_3", false,-1);
        tracep->declBit(c+1107,"ysyx_041728 iCache vArrayWire_53_3", false,-1);
        tracep->declBit(c+1108,"ysyx_041728 iCache vArrayWire_52_3", false,-1);
        tracep->declBit(c+1109,"ysyx_041728 iCache vArrayWire_51_3", false,-1);
        tracep->declBit(c+1110,"ysyx_041728 iCache vArrayWire_50_3", false,-1);
        tracep->declBit(c+1111,"ysyx_041728 iCache vArrayWire_49_3", false,-1);
        tracep->declBit(c+1112,"ysyx_041728 iCache vArrayWire_48_3", false,-1);
        tracep->declBit(c+1113,"ysyx_041728 iCache vArrayWire_47_3", false,-1);
        tracep->declBit(c+1114,"ysyx_041728 iCache vArrayWire_46_3", false,-1);
        tracep->declBit(c+1115,"ysyx_041728 iCache vArrayWire_45_3", false,-1);
        tracep->declBit(c+1116,"ysyx_041728 iCache vArrayWire_44_3", false,-1);
        tracep->declBit(c+1117,"ysyx_041728 iCache vArrayWire_43_3", false,-1);
        tracep->declBit(c+1118,"ysyx_041728 iCache vArrayWire_42_3", false,-1);
        tracep->declBit(c+1119,"ysyx_041728 iCache vArrayWire_41_3", false,-1);
        tracep->declBit(c+1120,"ysyx_041728 iCache vArrayWire_40_3", false,-1);
        tracep->declBit(c+1121,"ysyx_041728 iCache vArrayWire_39_3", false,-1);
        tracep->declBit(c+1122,"ysyx_041728 iCache vArrayWire_38_3", false,-1);
        tracep->declBit(c+1123,"ysyx_041728 iCache vArrayWire_37_3", false,-1);
        tracep->declBit(c+1124,"ysyx_041728 iCache vArrayWire_36_3", false,-1);
        tracep->declBit(c+1125,"ysyx_041728 iCache vArrayWire_35_3", false,-1);
        tracep->declBit(c+1126,"ysyx_041728 iCache vArrayWire_34_3", false,-1);
        tracep->declBit(c+1127,"ysyx_041728 iCache vArrayWire_33_3", false,-1);
        tracep->declBit(c+1128,"ysyx_041728 iCache vArrayWire_32_3", false,-1);
        tracep->declBit(c+1129,"ysyx_041728 iCache vArrayWire_31_3", false,-1);
        tracep->declBit(c+1130,"ysyx_041728 iCache vArrayWire_30_3", false,-1);
        tracep->declBit(c+1131,"ysyx_041728 iCache vArrayWire_29_3", false,-1);
        tracep->declBit(c+1132,"ysyx_041728 iCache vArrayWire_28_3", false,-1);
        tracep->declBit(c+1133,"ysyx_041728 iCache vArrayWire_27_3", false,-1);
        tracep->declBit(c+1134,"ysyx_041728 iCache vArrayWire_26_3", false,-1);
        tracep->declBit(c+1135,"ysyx_041728 iCache vArrayWire_25_3", false,-1);
        tracep->declBit(c+1136,"ysyx_041728 iCache vArrayWire_24_3", false,-1);
        tracep->declBit(c+1137,"ysyx_041728 iCache vArrayWire_23_3", false,-1);
        tracep->declBit(c+1138,"ysyx_041728 iCache vArrayWire_22_3", false,-1);
        tracep->declBit(c+1139,"ysyx_041728 iCache vArrayWire_21_3", false,-1);
        tracep->declBit(c+1140,"ysyx_041728 iCache vArrayWire_20_3", false,-1);
        tracep->declBit(c+1141,"ysyx_041728 iCache vArrayWire_19_3", false,-1);
        tracep->declBit(c+1142,"ysyx_041728 iCache vArrayWire_18_3", false,-1);
        tracep->declBit(c+1143,"ysyx_041728 iCache vArrayWire_17_3", false,-1);
        tracep->declBit(c+1144,"ysyx_041728 iCache vArrayWire_16_3", false,-1);
        tracep->declBit(c+1145,"ysyx_041728 iCache vArrayWire_15_3", false,-1);
        tracep->declBit(c+1146,"ysyx_041728 iCache vArrayWire_14_3", false,-1);
        tracep->declBit(c+1147,"ysyx_041728 iCache vArrayWire_13_3", false,-1);
        tracep->declBit(c+1148,"ysyx_041728 iCache vArrayWire_12_3", false,-1);
        tracep->declBit(c+1149,"ysyx_041728 iCache vArrayWire_11_3", false,-1);
        tracep->declBit(c+1150,"ysyx_041728 iCache vArrayWire_10_3", false,-1);
        tracep->declBit(c+1151,"ysyx_041728 iCache vArrayWire_9_3", false,-1);
        tracep->declBit(c+1152,"ysyx_041728 iCache vArrayWire_8_3", false,-1);
        tracep->declBit(c+1153,"ysyx_041728 iCache vArrayWire_7_3", false,-1);
        tracep->declBit(c+1154,"ysyx_041728 iCache vArrayWire_6_3", false,-1);
        tracep->declBit(c+1155,"ysyx_041728 iCache vArrayWire_5_3", false,-1);
        tracep->declBit(c+1156,"ysyx_041728 iCache vArrayWire_4_3", false,-1);
        tracep->declBit(c+1157,"ysyx_041728 iCache vArrayWire_3_3", false,-1);
        tracep->declBit(c+1158,"ysyx_041728 iCache vArrayWire_2_3", false,-1);
        tracep->declBit(c+1159,"ysyx_041728 iCache vArrayWire_1_3", false,-1);
        tracep->declBit(c+1160,"ysyx_041728 iCache vArrayWire_0_3", false,-1);
        tracep->declBit(c+1161,"ysyx_041728 iCache vMuxOut_3", false,-1);
        tracep->declBus(c+1162,"ysyx_041728 iCache tagArrayWire_63_3", false,-1, 21,0);
        tracep->declBus(c+1163,"ysyx_041728 iCache tagArrayWire_62_3", false,-1, 21,0);
        tracep->declBus(c+1164,"ysyx_041728 iCache tagArrayWire_61_3", false,-1, 21,0);
        tracep->declBus(c+1165,"ysyx_041728 iCache tagArrayWire_60_3", false,-1, 21,0);
        tracep->declBus(c+1166,"ysyx_041728 iCache tagArrayWire_59_3", false,-1, 21,0);
        tracep->declBus(c+1167,"ysyx_041728 iCache tagArrayWire_58_3", false,-1, 21,0);
        tracep->declBus(c+1168,"ysyx_041728 iCache tagArrayWire_57_3", false,-1, 21,0);
        tracep->declBus(c+1169,"ysyx_041728 iCache tagArrayWire_56_3", false,-1, 21,0);
        tracep->declBus(c+1170,"ysyx_041728 iCache tagArrayWire_55_3", false,-1, 21,0);
        tracep->declBus(c+1171,"ysyx_041728 iCache tagArrayWire_54_3", false,-1, 21,0);
        tracep->declBus(c+1172,"ysyx_041728 iCache tagArrayWire_53_3", false,-1, 21,0);
        tracep->declBus(c+1173,"ysyx_041728 iCache tagArrayWire_52_3", false,-1, 21,0);
        tracep->declBus(c+1174,"ysyx_041728 iCache tagArrayWire_51_3", false,-1, 21,0);
        tracep->declBus(c+1175,"ysyx_041728 iCache tagArrayWire_50_3", false,-1, 21,0);
        tracep->declBus(c+1176,"ysyx_041728 iCache tagArrayWire_49_3", false,-1, 21,0);
        tracep->declBus(c+1177,"ysyx_041728 iCache tagArrayWire_48_3", false,-1, 21,0);
        tracep->declBus(c+1178,"ysyx_041728 iCache tagArrayWire_47_3", false,-1, 21,0);
        tracep->declBus(c+1179,"ysyx_041728 iCache tagArrayWire_46_3", false,-1, 21,0);
        tracep->declBus(c+1180,"ysyx_041728 iCache tagArrayWire_45_3", false,-1, 21,0);
        tracep->declBus(c+1181,"ysyx_041728 iCache tagArrayWire_44_3", false,-1, 21,0);
        tracep->declBus(c+1182,"ysyx_041728 iCache tagArrayWire_43_3", false,-1, 21,0);
        tracep->declBus(c+1183,"ysyx_041728 iCache tagArrayWire_42_3", false,-1, 21,0);
        tracep->declBus(c+1184,"ysyx_041728 iCache tagArrayWire_41_3", false,-1, 21,0);
        tracep->declBus(c+1185,"ysyx_041728 iCache tagArrayWire_40_3", false,-1, 21,0);
        tracep->declBus(c+1186,"ysyx_041728 iCache tagArrayWire_39_3", false,-1, 21,0);
        tracep->declBus(c+1187,"ysyx_041728 iCache tagArrayWire_38_3", false,-1, 21,0);
        tracep->declBus(c+1188,"ysyx_041728 iCache tagArrayWire_37_3", false,-1, 21,0);
        tracep->declBus(c+1189,"ysyx_041728 iCache tagArrayWire_36_3", false,-1, 21,0);
        tracep->declBus(c+1190,"ysyx_041728 iCache tagArrayWire_35_3", false,-1, 21,0);
        tracep->declBus(c+1191,"ysyx_041728 iCache tagArrayWire_34_3", false,-1, 21,0);
        tracep->declBus(c+1192,"ysyx_041728 iCache tagArrayWire_33_3", false,-1, 21,0);
        tracep->declBus(c+1193,"ysyx_041728 iCache tagArrayWire_32_3", false,-1, 21,0);
        tracep->declBus(c+1194,"ysyx_041728 iCache tagArrayWire_31_3", false,-1, 21,0);
        tracep->declBus(c+1195,"ysyx_041728 iCache tagArrayWire_30_3", false,-1, 21,0);
        tracep->declBus(c+1196,"ysyx_041728 iCache tagArrayWire_29_3", false,-1, 21,0);
        tracep->declBus(c+1197,"ysyx_041728 iCache tagArrayWire_28_3", false,-1, 21,0);
        tracep->declBus(c+1198,"ysyx_041728 iCache tagArrayWire_27_3", false,-1, 21,0);
        tracep->declBus(c+1199,"ysyx_041728 iCache tagArrayWire_26_3", false,-1, 21,0);
        tracep->declBus(c+1200,"ysyx_041728 iCache tagArrayWire_25_3", false,-1, 21,0);
        tracep->declBus(c+1201,"ysyx_041728 iCache tagArrayWire_24_3", false,-1, 21,0);
        tracep->declBus(c+1202,"ysyx_041728 iCache tagArrayWire_23_3", false,-1, 21,0);
        tracep->declBus(c+1203,"ysyx_041728 iCache tagArrayWire_22_3", false,-1, 21,0);
        tracep->declBus(c+1204,"ysyx_041728 iCache tagArrayWire_21_3", false,-1, 21,0);
        tracep->declBus(c+1205,"ysyx_041728 iCache tagArrayWire_20_3", false,-1, 21,0);
        tracep->declBus(c+1206,"ysyx_041728 iCache tagArrayWire_19_3", false,-1, 21,0);
        tracep->declBus(c+1207,"ysyx_041728 iCache tagArrayWire_18_3", false,-1, 21,0);
        tracep->declBus(c+1208,"ysyx_041728 iCache tagArrayWire_17_3", false,-1, 21,0);
        tracep->declBus(c+1209,"ysyx_041728 iCache tagArrayWire_16_3", false,-1, 21,0);
        tracep->declBus(c+1210,"ysyx_041728 iCache tagArrayWire_15_3", false,-1, 21,0);
        tracep->declBus(c+1211,"ysyx_041728 iCache tagArrayWire_14_3", false,-1, 21,0);
        tracep->declBus(c+1212,"ysyx_041728 iCache tagArrayWire_13_3", false,-1, 21,0);
        tracep->declBus(c+1213,"ysyx_041728 iCache tagArrayWire_12_3", false,-1, 21,0);
        tracep->declBus(c+1214,"ysyx_041728 iCache tagArrayWire_11_3", false,-1, 21,0);
        tracep->declBus(c+1215,"ysyx_041728 iCache tagArrayWire_10_3", false,-1, 21,0);
        tracep->declBus(c+1216,"ysyx_041728 iCache tagArrayWire_9_3", false,-1, 21,0);
        tracep->declBus(c+1217,"ysyx_041728 iCache tagArrayWire_8_3", false,-1, 21,0);
        tracep->declBus(c+1218,"ysyx_041728 iCache tagArrayWire_7_3", false,-1, 21,0);
        tracep->declBus(c+1219,"ysyx_041728 iCache tagArrayWire_6_3", false,-1, 21,0);
        tracep->declBus(c+1220,"ysyx_041728 iCache tagArrayWire_5_3", false,-1, 21,0);
        tracep->declBus(c+1221,"ysyx_041728 iCache tagArrayWire_4_3", false,-1, 21,0);
        tracep->declBus(c+1222,"ysyx_041728 iCache tagArrayWire_3_3", false,-1, 21,0);
        tracep->declBus(c+1223,"ysyx_041728 iCache tagArrayWire_2_3", false,-1, 21,0);
        tracep->declBus(c+1224,"ysyx_041728 iCache tagArrayWire_1_3", false,-1, 21,0);
        tracep->declBus(c+1225,"ysyx_041728 iCache tagArrayWire_0_3", false,-1, 21,0);
        tracep->declBus(c+1226,"ysyx_041728 iCache tagMuxOut_3", false,-1, 21,0);
        tracep->declBit(c+1227,"ysyx_041728 iCache hitArray_3", false,-1);
        tracep->declBit(c+1228,"ysyx_041728 iCache hit", false,-1);
        tracep->declBit(c+1229,"ysyx_041728 iCache IdleMux", false,-1);
        tracep->declBit(c+1230,"ysyx_041728 iCache isIdle", false,-1);
        tracep->declArray(c+1231,"ysyx_041728 iCache waysel", false,-1, 127,0);
        tracep->declBus(c+1235,"ysyx_041728 iCache selArrayWire_1", false,-1, 1,0);
        tracep->declBus(c+1236,"ysyx_041728 iCache selArrayWire_0", false,-1, 1,0);
        tracep->declBus(c+1237,"ysyx_041728 iCache selArrayWire_2", false,-1, 1,0);
        tracep->declBus(c+1238,"ysyx_041728 iCache selArrayWire_3", false,-1, 1,0);
        tracep->declBus(c+1239,"ysyx_041728 iCache selArrayWire_4", false,-1, 1,0);
        tracep->declBus(c+1240,"ysyx_041728 iCache selArrayWire_5", false,-1, 1,0);
        tracep->declBus(c+1241,"ysyx_041728 iCache selArrayWire_6", false,-1, 1,0);
        tracep->declBus(c+1242,"ysyx_041728 iCache selArrayWire_7", false,-1, 1,0);
        tracep->declBus(c+1243,"ysyx_041728 iCache selArrayWire_8", false,-1, 1,0);
        tracep->declBus(c+1244,"ysyx_041728 iCache selArrayWire_9", false,-1, 1,0);
        tracep->declBus(c+1245,"ysyx_041728 iCache selArrayWire_10", false,-1, 1,0);
        tracep->declBus(c+1246,"ysyx_041728 iCache selArrayWire_11", false,-1, 1,0);
        tracep->declBus(c+1247,"ysyx_041728 iCache selArrayWire_12", false,-1, 1,0);
        tracep->declBus(c+1248,"ysyx_041728 iCache selArrayWire_13", false,-1, 1,0);
        tracep->declBus(c+1249,"ysyx_041728 iCache selArrayWire_14", false,-1, 1,0);
        tracep->declBus(c+1250,"ysyx_041728 iCache selArrayWire_15", false,-1, 1,0);
        tracep->declBus(c+1251,"ysyx_041728 iCache selArrayWire_16", false,-1, 1,0);
        tracep->declBus(c+1252,"ysyx_041728 iCache selArrayWire_17", false,-1, 1,0);
        tracep->declBus(c+1253,"ysyx_041728 iCache selArrayWire_18", false,-1, 1,0);
        tracep->declBus(c+1254,"ysyx_041728 iCache selArrayWire_19", false,-1, 1,0);
        tracep->declBus(c+1255,"ysyx_041728 iCache selArrayWire_20", false,-1, 1,0);
        tracep->declBus(c+1256,"ysyx_041728 iCache selArrayWire_21", false,-1, 1,0);
        tracep->declBus(c+1257,"ysyx_041728 iCache selArrayWire_22", false,-1, 1,0);
        tracep->declBus(c+1258,"ysyx_041728 iCache selArrayWire_23", false,-1, 1,0);
        tracep->declBus(c+1259,"ysyx_041728 iCache selArrayWire_24", false,-1, 1,0);
        tracep->declBus(c+1260,"ysyx_041728 iCache selArrayWire_25", false,-1, 1,0);
        tracep->declBus(c+1261,"ysyx_041728 iCache selArrayWire_26", false,-1, 1,0);
        tracep->declBus(c+1262,"ysyx_041728 iCache selArrayWire_27", false,-1, 1,0);
        tracep->declBus(c+1263,"ysyx_041728 iCache selArrayWire_28", false,-1, 1,0);
        tracep->declBus(c+1264,"ysyx_041728 iCache selArrayWire_29", false,-1, 1,0);
        tracep->declBus(c+1265,"ysyx_041728 iCache selArrayWire_30", false,-1, 1,0);
        tracep->declBus(c+1266,"ysyx_041728 iCache selArrayWire_31", false,-1, 1,0);
        tracep->declBus(c+1267,"ysyx_041728 iCache selArrayWire_32", false,-1, 1,0);
        tracep->declBus(c+1268,"ysyx_041728 iCache selArrayWire_33", false,-1, 1,0);
        tracep->declBus(c+1269,"ysyx_041728 iCache selArrayWire_34", false,-1, 1,0);
        tracep->declBus(c+1270,"ysyx_041728 iCache selArrayWire_35", false,-1, 1,0);
        tracep->declBus(c+1271,"ysyx_041728 iCache selArrayWire_36", false,-1, 1,0);
        tracep->declBus(c+1272,"ysyx_041728 iCache selArrayWire_37", false,-1, 1,0);
        tracep->declBus(c+1273,"ysyx_041728 iCache selArrayWire_38", false,-1, 1,0);
        tracep->declBus(c+1274,"ysyx_041728 iCache selArrayWire_39", false,-1, 1,0);
        tracep->declBus(c+1275,"ysyx_041728 iCache selArrayWire_40", false,-1, 1,0);
        tracep->declBus(c+1276,"ysyx_041728 iCache selArrayWire_41", false,-1, 1,0);
        tracep->declBus(c+1277,"ysyx_041728 iCache selArrayWire_42", false,-1, 1,0);
        tracep->declBus(c+1278,"ysyx_041728 iCache selArrayWire_43", false,-1, 1,0);
        tracep->declBus(c+1279,"ysyx_041728 iCache selArrayWire_44", false,-1, 1,0);
        tracep->declBus(c+1280,"ysyx_041728 iCache selArrayWire_45", false,-1, 1,0);
        tracep->declBus(c+1281,"ysyx_041728 iCache selArrayWire_46", false,-1, 1,0);
        tracep->declBus(c+1282,"ysyx_041728 iCache selArrayWire_47", false,-1, 1,0);
        tracep->declBus(c+1283,"ysyx_041728 iCache selArrayWire_48", false,-1, 1,0);
        tracep->declBus(c+1284,"ysyx_041728 iCache selArrayWire_49", false,-1, 1,0);
        tracep->declBus(c+1285,"ysyx_041728 iCache selArrayWire_50", false,-1, 1,0);
        tracep->declBus(c+1286,"ysyx_041728 iCache selArrayWire_51", false,-1, 1,0);
        tracep->declBus(c+1287,"ysyx_041728 iCache selArrayWire_52", false,-1, 1,0);
        tracep->declBus(c+1288,"ysyx_041728 iCache selArrayWire_53", false,-1, 1,0);
        tracep->declBus(c+1289,"ysyx_041728 iCache selArrayWire_54", false,-1, 1,0);
        tracep->declBus(c+1290,"ysyx_041728 iCache selArrayWire_55", false,-1, 1,0);
        tracep->declBus(c+1291,"ysyx_041728 iCache selArrayWire_56", false,-1, 1,0);
        tracep->declBus(c+1292,"ysyx_041728 iCache selArrayWire_57", false,-1, 1,0);
        tracep->declBus(c+1293,"ysyx_041728 iCache selArrayWire_58", false,-1, 1,0);
        tracep->declBus(c+1294,"ysyx_041728 iCache selArrayWire_59", false,-1, 1,0);
        tracep->declBus(c+1295,"ysyx_041728 iCache selArrayWire_60", false,-1, 1,0);
        tracep->declBus(c+1296,"ysyx_041728 iCache selArrayWire_61", false,-1, 1,0);
        tracep->declBus(c+1297,"ysyx_041728 iCache selArrayWire_62", false,-1, 1,0);
        tracep->declBus(c+1298,"ysyx_041728 iCache selArrayWire_63", false,-1, 1,0);
        tracep->declBus(c+1299,"ysyx_041728 iCache sramSel", false,-1, 1,0);
        tracep->declBit(c+3976,"ysyx_041728 axiIIO clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 axiIIO reset", false,-1);
        tracep->declBit(c+3978,"ysyx_041728 axiIIO io_axiIO_awready", false,-1);
        tracep->declBit(c+127,"ysyx_041728 axiIIO io_axiIO_awvalid", false,-1);
        tracep->declBus(c+128,"ysyx_041728 axiIIO io_axiIO_awaddr", false,-1, 31,0);
        tracep->declBus(c+4063,"ysyx_041728 axiIIO io_axiIO_awsize", false,-1, 2,0);
        tracep->declBit(c+3985,"ysyx_041728 axiIIO io_axiIO_wready", false,-1);
        tracep->declBit(c+129,"ysyx_041728 axiIIO io_axiIO_wvalid", false,-1);
        tracep->declQuad(c+4064,"ysyx_041728 axiIIO io_axiIO_wdata", false,-1, 63,0);
        tracep->declBus(c+4066,"ysyx_041728 axiIIO io_axiIO_wstrb", false,-1, 7,0);
        tracep->declBit(c+129,"ysyx_041728 axiIIO io_axiIO_wlast", false,-1);
        tracep->declBit(c+130,"ysyx_041728 axiIIO io_axiIO_bready", false,-1);
        tracep->declBit(c+3992,"ysyx_041728 axiIIO io_axiIO_bvalid", false,-1);
        tracep->declBit(c+3995,"ysyx_041728 axiIIO io_axiIO_arready", false,-1);
        tracep->declBit(c+131,"ysyx_041728 axiIIO io_axiIO_arvalid", false,-1);
        tracep->declBus(c+132,"ysyx_041728 axiIIO io_axiIO_araddr", false,-1, 31,0);
        tracep->declBus(c+133,"ysyx_041728 axiIIO io_axiIO_arlen", false,-1, 7,0);
        tracep->declBus(c+134,"ysyx_041728 axiIIO io_axiIO_arsize", false,-1, 2,0);
        tracep->declBus(c+135,"ysyx_041728 axiIIO io_axiIO_arburst", false,-1, 1,0);
        tracep->declBit(c+136,"ysyx_041728 axiIIO io_axiIO_rready", false,-1);
        tracep->declBit(c+4003,"ysyx_041728 axiIIO io_axiIO_rvalid", false,-1);
        tracep->declQuad(c+4006,"ysyx_041728 axiIIO io_axiIO_rdata", false,-1, 63,0);
        tracep->declBit(c+4008,"ysyx_041728 axiIIO io_axiIO_rlast", false,-1);
        tracep->declBit(c+107,"ysyx_041728 axiIIO io_cache_ar_valid_o", false,-1);
        tracep->declBus(c+108,"ysyx_041728 axiIIO io_cache_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+109,"ysyx_041728 axiIIO io_cache_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4003,"ysyx_041728 axiIIO io_cache_r_valid_i", false,-1);
        tracep->declQuad(c+4006,"ysyx_041728 axiIIO io_cache_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4008,"ysyx_041728 axiIIO io_cache_r_last_i", false,-1);
        tracep->declBit(c+4067,"ysyx_041728 axiIIO io_cache_w_valid_o", false,-1);
        tracep->declBit(c+4058,"ysyx_041728 axiIIO io_cache_w_ready_i", false,-1);
        tracep->declQuad(c+4064,"ysyx_041728 axiIIO io_cache_w_data_o", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_041728 axiIIO io_cache_w_addr_o", false,-1, 31,0);
        tracep->declBus(c+4066,"ysyx_041728 axiIIO io_cache_w_mask_o", false,-1, 7,0);
        tracep->declBus(c+4068,"ysyx_041728 axiIIO io_cache_wsize", false,-1, 1,0);
        tracep->declBus(c+1300,"ysyx_041728 axiIIO rd_state", false,-1, 1,0);
        tracep->declBit(c+131,"ysyx_041728 axiIIO isReq", false,-1);
        tracep->declBit(c+1301,"ysyx_041728 axiIIO isData", false,-1);
        tracep->declBus(c+41,"ysyx_041728 axiIIO valid_c", false,-1, 1,0);
        tracep->declBus(c+1302,"ysyx_041728 axiIIO w_state", false,-1, 1,0);
        tracep->declBit(c+127,"ysyx_041728 axiIIO isWReq", false,-1);
        tracep->declBit(c+1303,"ysyx_041728 axiIIO isWData", false,-1);
        tracep->declBit(c+130,"ysyx_041728 axiIIO isWB", false,-1);
        tracep->declBit(c+95,"ysyx_041728 dArbIns io_arbIn_valid", false,-1);
        tracep->declBit(c+63,"ysyx_041728 dArbIns io_arbIn_ready", false,-1);
        tracep->declQuad(c+96,"ysyx_041728 dArbIns io_arbIn_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns io_arbIn_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns io_arbIn_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns io_arbIn_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dArbIns io_arbIn_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dArbIns io_arbIn_mask", false,-1, 7,0);
        tracep->declBit(c+137,"ysyx_041728 dArbIns io_arbMMIO_valid", false,-1);
        tracep->declBit(c+138,"ysyx_041728 dArbIns io_arbMMIO_ready", false,-1);
        tracep->declQuad(c+139,"ysyx_041728 dArbIns io_arbMMIO_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns io_arbMMIO_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns io_arbMMIO_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns io_arbMMIO_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dArbIns io_arbMMIO_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dArbIns io_arbMMIO_mask", false,-1, 7,0);
        tracep->declBit(c+141,"ysyx_041728 dArbIns io_arbClint_valid", false,-1);
        tracep->declQuad(c+142,"ysyx_041728 dArbIns io_arbClint_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns io_arbClint_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns io_arbClint_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns io_arbClint_addr", false,-1, 31,0);
        tracep->declBit(c+144,"ysyx_041728 dArbIns io_arbDCache_valid", false,-1);
        tracep->declBit(c+65,"ysyx_041728 dArbIns io_arbDCache_ready", false,-1);
        tracep->declQuad(c+145,"ysyx_041728 dArbIns io_arbDCache_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dArbIns io_arbDCache_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dArbIns io_arbDCache_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dArbIns io_arbDCache_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dArbIns io_arbDCache_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dArbIns io_arbDCache_mask", false,-1, 7,0);
        tracep->declBit(c+1304,"ysyx_041728 dArbIns clinitV", false,-1);
        tracep->declBit(c+1305,"ysyx_041728 dArbIns dCacheV", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 mmioDCache clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 mmioDCache reset", false,-1);
        tracep->declBit(c+106,"ysyx_041728 mmioDCache io_block", false,-1);
        tracep->declBit(c+137,"ysyx_041728 mmioDCache io_mmioIn_valid", false,-1);
        tracep->declBit(c+138,"ysyx_041728 mmioDCache io_mmioIn_ready", false,-1);
        tracep->declQuad(c+139,"ysyx_041728 mmioDCache io_mmioIn_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 mmioDCache io_mmioIn_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 mmioDCache io_mmioIn_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 mmioDCache io_mmioIn_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 mmioDCache io_mmioIn_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 mmioDCache io_mmioIn_mask", false,-1, 7,0);
        tracep->declBit(c+147,"ysyx_041728 mmioDCache io_mmioOut_valid", false,-1);
        tracep->declBit(c+4041,"ysyx_041728 mmioDCache io_mmioOut_ready", false,-1);
        tracep->declQuad(c+4042,"ysyx_041728 mmioDCache io_mmioOut_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 mmioDCache io_mmioOut_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 mmioDCache io_mmioOut_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 mmioDCache io_mmioOut_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 mmioDCache io_mmioOut_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 mmioDCache io_mmioOut_mask", false,-1, 7,0);
        tracep->declBus(c+1306,"ysyx_041728 mmioDCache state", false,-1, 1,0);
        tracep->declBit(c+1307,"ysyx_041728 mmioDCache isIdle", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 dCache clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 dCache reset", false,-1);
        tracep->declBit(c+148,"ysyx_041728 dCache io_cacheOut_ar_valid_o", false,-1);
        tracep->declBus(c+149,"ysyx_041728 dCache io_cacheOut_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+150,"ysyx_041728 dCache io_cacheOut_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4034,"ysyx_041728 dCache io_cacheOut_r_valid_i", false,-1);
        tracep->declQuad(c+4037,"ysyx_041728 dCache io_cacheOut_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4039,"ysyx_041728 dCache io_cacheOut_r_last_i", false,-1);
        tracep->declBit(c+151,"ysyx_041728 dCache io_cacheOut_w_valid_o", false,-1);
        tracep->declBit(c+5,"ysyx_041728 dCache io_cacheOut_w_ready_i", false,-1);
        tracep->declQuad(c+98,"ysyx_041728 dCache io_cacheOut_w_data_o", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_041728 dCache io_cacheOut_w_addr_o", false,-1, 31,0);
        tracep->declBus(c+103,"ysyx_041728 dCache io_cacheOut_w_mask_o", false,-1, 7,0);
        tracep->declBus(c+102,"ysyx_041728 dCache io_cacheOut_wsize", false,-1, 1,0);
        tracep->declBit(c+144,"ysyx_041728 dCache io_cacheIn_valid", false,-1);
        tracep->declBit(c+65,"ysyx_041728 dCache io_cacheIn_ready", false,-1);
        tracep->declQuad(c+145,"ysyx_041728 dCache io_cacheIn_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 dCache io_cacheIn_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 dCache io_cacheIn_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 dCache io_cacheIn_addr", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_041728 dCache io_cacheIn_rsize", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_041728 dCache io_cacheIn_mask", false,-1, 7,0);
        tracep->declBit(c+66,"ysyx_041728 dCache io_SRAMIO_0_cen", false,-1);
        tracep->declBit(c+67,"ysyx_041728 dCache io_SRAMIO_0_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache io_SRAMIO_0_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache io_SRAMIO_0_addr", false,-1, 5,0);
        tracep->declArray(c+6,"ysyx_041728 dCache io_SRAMIO_0_wmask", false,-1, 127,0);
        tracep->declArray(c+153,"ysyx_041728 dCache io_SRAMIO_0_rdata", false,-1, 127,0);
        tracep->declBit(c+72,"ysyx_041728 dCache io_SRAMIO_1_cen", false,-1);
        tracep->declBit(c+73,"ysyx_041728 dCache io_SRAMIO_1_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache io_SRAMIO_1_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache io_SRAMIO_1_addr", false,-1, 5,0);
        tracep->declArray(c+10,"ysyx_041728 dCache io_SRAMIO_1_wmask", false,-1, 127,0);
        tracep->declArray(c+157,"ysyx_041728 dCache io_SRAMIO_1_rdata", false,-1, 127,0);
        tracep->declBit(c+74,"ysyx_041728 dCache io_SRAMIO_2_cen", false,-1);
        tracep->declBit(c+75,"ysyx_041728 dCache io_SRAMIO_2_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache io_SRAMIO_2_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache io_SRAMIO_2_addr", false,-1, 5,0);
        tracep->declArray(c+14,"ysyx_041728 dCache io_SRAMIO_2_wmask", false,-1, 127,0);
        tracep->declArray(c+161,"ysyx_041728 dCache io_SRAMIO_2_rdata", false,-1, 127,0);
        tracep->declBit(c+76,"ysyx_041728 dCache io_SRAMIO_3_cen", false,-1);
        tracep->declBit(c+77,"ysyx_041728 dCache io_SRAMIO_3_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 dCache io_SRAMIO_3_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 dCache io_SRAMIO_3_addr", false,-1, 5,0);
        tracep->declArray(c+18,"ysyx_041728 dCache io_SRAMIO_3_wmask", false,-1, 127,0);
        tracep->declArray(c+165,"ysyx_041728 dCache io_SRAMIO_3_rdata", false,-1, 127,0);
        tracep->declBit(c+106,"ysyx_041728 dCache io_block", false,-1);
        tracep->declBus(c+1308,"ysyx_041728 dCache offset", false,-1, 3,0);
        tracep->declBus(c+152,"ysyx_041728 dCache index", false,-1, 5,0);
        tracep->declBus(c+1309,"ysyx_041728 dCache tag", false,-1, 21,0);
        tracep->declBus(c+1310,"ysyx_041728 dCache cacheState", false,-1, 1,0);
        tracep->declBit(c+1311,"ysyx_041728 dCache vArrayWire_63_0", false,-1);
        tracep->declBit(c+1312,"ysyx_041728 dCache vArrayWire_62_0", false,-1);
        tracep->declBit(c+1313,"ysyx_041728 dCache vArrayWire_61_0", false,-1);
        tracep->declBit(c+1314,"ysyx_041728 dCache vArrayWire_60_0", false,-1);
        tracep->declBit(c+1315,"ysyx_041728 dCache vArrayWire_59_0", false,-1);
        tracep->declBit(c+1316,"ysyx_041728 dCache vArrayWire_58_0", false,-1);
        tracep->declBit(c+1317,"ysyx_041728 dCache vArrayWire_57_0", false,-1);
        tracep->declBit(c+1318,"ysyx_041728 dCache vArrayWire_56_0", false,-1);
        tracep->declBit(c+1319,"ysyx_041728 dCache vArrayWire_55_0", false,-1);
        tracep->declBit(c+1320,"ysyx_041728 dCache vArrayWire_54_0", false,-1);
        tracep->declBit(c+1321,"ysyx_041728 dCache vArrayWire_53_0", false,-1);
        tracep->declBit(c+1322,"ysyx_041728 dCache vArrayWire_52_0", false,-1);
        tracep->declBit(c+1323,"ysyx_041728 dCache vArrayWire_51_0", false,-1);
        tracep->declBit(c+1324,"ysyx_041728 dCache vArrayWire_50_0", false,-1);
        tracep->declBit(c+1325,"ysyx_041728 dCache vArrayWire_49_0", false,-1);
        tracep->declBit(c+1326,"ysyx_041728 dCache vArrayWire_48_0", false,-1);
        tracep->declBit(c+1327,"ysyx_041728 dCache vArrayWire_47_0", false,-1);
        tracep->declBit(c+1328,"ysyx_041728 dCache vArrayWire_46_0", false,-1);
        tracep->declBit(c+1329,"ysyx_041728 dCache vArrayWire_45_0", false,-1);
        tracep->declBit(c+1330,"ysyx_041728 dCache vArrayWire_44_0", false,-1);
        tracep->declBit(c+1331,"ysyx_041728 dCache vArrayWire_43_0", false,-1);
        tracep->declBit(c+1332,"ysyx_041728 dCache vArrayWire_42_0", false,-1);
        tracep->declBit(c+1333,"ysyx_041728 dCache vArrayWire_41_0", false,-1);
        tracep->declBit(c+1334,"ysyx_041728 dCache vArrayWire_40_0", false,-1);
        tracep->declBit(c+1335,"ysyx_041728 dCache vArrayWire_39_0", false,-1);
        tracep->declBit(c+1336,"ysyx_041728 dCache vArrayWire_38_0", false,-1);
        tracep->declBit(c+1337,"ysyx_041728 dCache vArrayWire_37_0", false,-1);
        tracep->declBit(c+1338,"ysyx_041728 dCache vArrayWire_36_0", false,-1);
        tracep->declBit(c+1339,"ysyx_041728 dCache vArrayWire_35_0", false,-1);
        tracep->declBit(c+1340,"ysyx_041728 dCache vArrayWire_34_0", false,-1);
        tracep->declBit(c+1341,"ysyx_041728 dCache vArrayWire_33_0", false,-1);
        tracep->declBit(c+1342,"ysyx_041728 dCache vArrayWire_32_0", false,-1);
        tracep->declBit(c+1343,"ysyx_041728 dCache vArrayWire_31_0", false,-1);
        tracep->declBit(c+1344,"ysyx_041728 dCache vArrayWire_30_0", false,-1);
        tracep->declBit(c+1345,"ysyx_041728 dCache vArrayWire_29_0", false,-1);
        tracep->declBit(c+1346,"ysyx_041728 dCache vArrayWire_28_0", false,-1);
        tracep->declBit(c+1347,"ysyx_041728 dCache vArrayWire_27_0", false,-1);
        tracep->declBit(c+1348,"ysyx_041728 dCache vArrayWire_26_0", false,-1);
        tracep->declBit(c+1349,"ysyx_041728 dCache vArrayWire_25_0", false,-1);
        tracep->declBit(c+1350,"ysyx_041728 dCache vArrayWire_24_0", false,-1);
        tracep->declBit(c+1351,"ysyx_041728 dCache vArrayWire_23_0", false,-1);
        tracep->declBit(c+1352,"ysyx_041728 dCache vArrayWire_22_0", false,-1);
        tracep->declBit(c+1353,"ysyx_041728 dCache vArrayWire_21_0", false,-1);
        tracep->declBit(c+1354,"ysyx_041728 dCache vArrayWire_20_0", false,-1);
        tracep->declBit(c+1355,"ysyx_041728 dCache vArrayWire_19_0", false,-1);
        tracep->declBit(c+1356,"ysyx_041728 dCache vArrayWire_18_0", false,-1);
        tracep->declBit(c+1357,"ysyx_041728 dCache vArrayWire_17_0", false,-1);
        tracep->declBit(c+1358,"ysyx_041728 dCache vArrayWire_16_0", false,-1);
        tracep->declBit(c+1359,"ysyx_041728 dCache vArrayWire_15_0", false,-1);
        tracep->declBit(c+1360,"ysyx_041728 dCache vArrayWire_14_0", false,-1);
        tracep->declBit(c+1361,"ysyx_041728 dCache vArrayWire_13_0", false,-1);
        tracep->declBit(c+1362,"ysyx_041728 dCache vArrayWire_12_0", false,-1);
        tracep->declBit(c+1363,"ysyx_041728 dCache vArrayWire_11_0", false,-1);
        tracep->declBit(c+1364,"ysyx_041728 dCache vArrayWire_10_0", false,-1);
        tracep->declBit(c+1365,"ysyx_041728 dCache vArrayWire_9_0", false,-1);
        tracep->declBit(c+1366,"ysyx_041728 dCache vArrayWire_8_0", false,-1);
        tracep->declBit(c+1367,"ysyx_041728 dCache vArrayWire_7_0", false,-1);
        tracep->declBit(c+1368,"ysyx_041728 dCache vArrayWire_6_0", false,-1);
        tracep->declBit(c+1369,"ysyx_041728 dCache vArrayWire_5_0", false,-1);
        tracep->declBit(c+1370,"ysyx_041728 dCache vArrayWire_4_0", false,-1);
        tracep->declBit(c+1371,"ysyx_041728 dCache vArrayWire_3_0", false,-1);
        tracep->declBit(c+1372,"ysyx_041728 dCache vArrayWire_2_0", false,-1);
        tracep->declBit(c+1373,"ysyx_041728 dCache vArrayWire_1_0", false,-1);
        tracep->declBit(c+1374,"ysyx_041728 dCache vArrayWire_0_0", false,-1);
        tracep->declBit(c+1375,"ysyx_041728 dCache vMuxOut_0", false,-1);
        tracep->declBus(c+1376,"ysyx_041728 dCache tagArrayWire_63_0", false,-1, 21,0);
        tracep->declBus(c+1377,"ysyx_041728 dCache tagArrayWire_62_0", false,-1, 21,0);
        tracep->declBus(c+1378,"ysyx_041728 dCache tagArrayWire_61_0", false,-1, 21,0);
        tracep->declBus(c+1379,"ysyx_041728 dCache tagArrayWire_60_0", false,-1, 21,0);
        tracep->declBus(c+1380,"ysyx_041728 dCache tagArrayWire_59_0", false,-1, 21,0);
        tracep->declBus(c+1381,"ysyx_041728 dCache tagArrayWire_58_0", false,-1, 21,0);
        tracep->declBus(c+1382,"ysyx_041728 dCache tagArrayWire_57_0", false,-1, 21,0);
        tracep->declBus(c+1383,"ysyx_041728 dCache tagArrayWire_56_0", false,-1, 21,0);
        tracep->declBus(c+1384,"ysyx_041728 dCache tagArrayWire_55_0", false,-1, 21,0);
        tracep->declBus(c+1385,"ysyx_041728 dCache tagArrayWire_54_0", false,-1, 21,0);
        tracep->declBus(c+1386,"ysyx_041728 dCache tagArrayWire_53_0", false,-1, 21,0);
        tracep->declBus(c+1387,"ysyx_041728 dCache tagArrayWire_52_0", false,-1, 21,0);
        tracep->declBus(c+1388,"ysyx_041728 dCache tagArrayWire_51_0", false,-1, 21,0);
        tracep->declBus(c+1389,"ysyx_041728 dCache tagArrayWire_50_0", false,-1, 21,0);
        tracep->declBus(c+1390,"ysyx_041728 dCache tagArrayWire_49_0", false,-1, 21,0);
        tracep->declBus(c+1391,"ysyx_041728 dCache tagArrayWire_48_0", false,-1, 21,0);
        tracep->declBus(c+1392,"ysyx_041728 dCache tagArrayWire_47_0", false,-1, 21,0);
        tracep->declBus(c+1393,"ysyx_041728 dCache tagArrayWire_46_0", false,-1, 21,0);
        tracep->declBus(c+1394,"ysyx_041728 dCache tagArrayWire_45_0", false,-1, 21,0);
        tracep->declBus(c+1395,"ysyx_041728 dCache tagArrayWire_44_0", false,-1, 21,0);
        tracep->declBus(c+1396,"ysyx_041728 dCache tagArrayWire_43_0", false,-1, 21,0);
        tracep->declBus(c+1397,"ysyx_041728 dCache tagArrayWire_42_0", false,-1, 21,0);
        tracep->declBus(c+1398,"ysyx_041728 dCache tagArrayWire_41_0", false,-1, 21,0);
        tracep->declBus(c+1399,"ysyx_041728 dCache tagArrayWire_40_0", false,-1, 21,0);
        tracep->declBus(c+1400,"ysyx_041728 dCache tagArrayWire_39_0", false,-1, 21,0);
        tracep->declBus(c+1401,"ysyx_041728 dCache tagArrayWire_38_0", false,-1, 21,0);
        tracep->declBus(c+1402,"ysyx_041728 dCache tagArrayWire_37_0", false,-1, 21,0);
        tracep->declBus(c+1403,"ysyx_041728 dCache tagArrayWire_36_0", false,-1, 21,0);
        tracep->declBus(c+1404,"ysyx_041728 dCache tagArrayWire_35_0", false,-1, 21,0);
        tracep->declBus(c+1405,"ysyx_041728 dCache tagArrayWire_34_0", false,-1, 21,0);
        tracep->declBus(c+1406,"ysyx_041728 dCache tagArrayWire_33_0", false,-1, 21,0);
        tracep->declBus(c+1407,"ysyx_041728 dCache tagArrayWire_32_0", false,-1, 21,0);
        tracep->declBus(c+1408,"ysyx_041728 dCache tagArrayWire_31_0", false,-1, 21,0);
        tracep->declBus(c+1409,"ysyx_041728 dCache tagArrayWire_30_0", false,-1, 21,0);
        tracep->declBus(c+1410,"ysyx_041728 dCache tagArrayWire_29_0", false,-1, 21,0);
        tracep->declBus(c+1411,"ysyx_041728 dCache tagArrayWire_28_0", false,-1, 21,0);
        tracep->declBus(c+1412,"ysyx_041728 dCache tagArrayWire_27_0", false,-1, 21,0);
        tracep->declBus(c+1413,"ysyx_041728 dCache tagArrayWire_26_0", false,-1, 21,0);
        tracep->declBus(c+1414,"ysyx_041728 dCache tagArrayWire_25_0", false,-1, 21,0);
        tracep->declBus(c+1415,"ysyx_041728 dCache tagArrayWire_24_0", false,-1, 21,0);
        tracep->declBus(c+1416,"ysyx_041728 dCache tagArrayWire_23_0", false,-1, 21,0);
        tracep->declBus(c+1417,"ysyx_041728 dCache tagArrayWire_22_0", false,-1, 21,0);
        tracep->declBus(c+1418,"ysyx_041728 dCache tagArrayWire_21_0", false,-1, 21,0);
        tracep->declBus(c+1419,"ysyx_041728 dCache tagArrayWire_20_0", false,-1, 21,0);
        tracep->declBus(c+1420,"ysyx_041728 dCache tagArrayWire_19_0", false,-1, 21,0);
        tracep->declBus(c+1421,"ysyx_041728 dCache tagArrayWire_18_0", false,-1, 21,0);
        tracep->declBus(c+1422,"ysyx_041728 dCache tagArrayWire_17_0", false,-1, 21,0);
        tracep->declBus(c+1423,"ysyx_041728 dCache tagArrayWire_16_0", false,-1, 21,0);
        tracep->declBus(c+1424,"ysyx_041728 dCache tagArrayWire_15_0", false,-1, 21,0);
        tracep->declBus(c+1425,"ysyx_041728 dCache tagArrayWire_14_0", false,-1, 21,0);
        tracep->declBus(c+1426,"ysyx_041728 dCache tagArrayWire_13_0", false,-1, 21,0);
        tracep->declBus(c+1427,"ysyx_041728 dCache tagArrayWire_12_0", false,-1, 21,0);
        tracep->declBus(c+1428,"ysyx_041728 dCache tagArrayWire_11_0", false,-1, 21,0);
        tracep->declBus(c+1429,"ysyx_041728 dCache tagArrayWire_10_0", false,-1, 21,0);
        tracep->declBus(c+1430,"ysyx_041728 dCache tagArrayWire_9_0", false,-1, 21,0);
        tracep->declBus(c+1431,"ysyx_041728 dCache tagArrayWire_8_0", false,-1, 21,0);
        tracep->declBus(c+1432,"ysyx_041728 dCache tagArrayWire_7_0", false,-1, 21,0);
        tracep->declBus(c+1433,"ysyx_041728 dCache tagArrayWire_6_0", false,-1, 21,0);
        tracep->declBus(c+1434,"ysyx_041728 dCache tagArrayWire_5_0", false,-1, 21,0);
        tracep->declBus(c+1435,"ysyx_041728 dCache tagArrayWire_4_0", false,-1, 21,0);
        tracep->declBus(c+1436,"ysyx_041728 dCache tagArrayWire_3_0", false,-1, 21,0);
        tracep->declBus(c+1437,"ysyx_041728 dCache tagArrayWire_2_0", false,-1, 21,0);
        tracep->declBus(c+1438,"ysyx_041728 dCache tagArrayWire_1_0", false,-1, 21,0);
        tracep->declBus(c+1439,"ysyx_041728 dCache tagArrayWire_0_0", false,-1, 21,0);
        tracep->declBus(c+1440,"ysyx_041728 dCache tagMuxOut_0", false,-1, 21,0);
        tracep->declBit(c+1441,"ysyx_041728 dCache hitArray_0", false,-1);
        tracep->declBit(c+1442,"ysyx_041728 dCache vArrayWire_63_1", false,-1);
        tracep->declBit(c+1443,"ysyx_041728 dCache vArrayWire_62_1", false,-1);
        tracep->declBit(c+1444,"ysyx_041728 dCache vArrayWire_61_1", false,-1);
        tracep->declBit(c+1445,"ysyx_041728 dCache vArrayWire_60_1", false,-1);
        tracep->declBit(c+1446,"ysyx_041728 dCache vArrayWire_59_1", false,-1);
        tracep->declBit(c+1447,"ysyx_041728 dCache vArrayWire_58_1", false,-1);
        tracep->declBit(c+1448,"ysyx_041728 dCache vArrayWire_57_1", false,-1);
        tracep->declBit(c+1449,"ysyx_041728 dCache vArrayWire_56_1", false,-1);
        tracep->declBit(c+1450,"ysyx_041728 dCache vArrayWire_55_1", false,-1);
        tracep->declBit(c+1451,"ysyx_041728 dCache vArrayWire_54_1", false,-1);
        tracep->declBit(c+1452,"ysyx_041728 dCache vArrayWire_53_1", false,-1);
        tracep->declBit(c+1453,"ysyx_041728 dCache vArrayWire_52_1", false,-1);
        tracep->declBit(c+1454,"ysyx_041728 dCache vArrayWire_51_1", false,-1);
        tracep->declBit(c+1455,"ysyx_041728 dCache vArrayWire_50_1", false,-1);
        tracep->declBit(c+1456,"ysyx_041728 dCache vArrayWire_49_1", false,-1);
        tracep->declBit(c+1457,"ysyx_041728 dCache vArrayWire_48_1", false,-1);
        tracep->declBit(c+1458,"ysyx_041728 dCache vArrayWire_47_1", false,-1);
        tracep->declBit(c+1459,"ysyx_041728 dCache vArrayWire_46_1", false,-1);
        tracep->declBit(c+1460,"ysyx_041728 dCache vArrayWire_45_1", false,-1);
        tracep->declBit(c+1461,"ysyx_041728 dCache vArrayWire_44_1", false,-1);
        tracep->declBit(c+1462,"ysyx_041728 dCache vArrayWire_43_1", false,-1);
        tracep->declBit(c+1463,"ysyx_041728 dCache vArrayWire_42_1", false,-1);
        tracep->declBit(c+1464,"ysyx_041728 dCache vArrayWire_41_1", false,-1);
        tracep->declBit(c+1465,"ysyx_041728 dCache vArrayWire_40_1", false,-1);
        tracep->declBit(c+1466,"ysyx_041728 dCache vArrayWire_39_1", false,-1);
        tracep->declBit(c+1467,"ysyx_041728 dCache vArrayWire_38_1", false,-1);
        tracep->declBit(c+1468,"ysyx_041728 dCache vArrayWire_37_1", false,-1);
        tracep->declBit(c+1469,"ysyx_041728 dCache vArrayWire_36_1", false,-1);
        tracep->declBit(c+1470,"ysyx_041728 dCache vArrayWire_35_1", false,-1);
        tracep->declBit(c+1471,"ysyx_041728 dCache vArrayWire_34_1", false,-1);
        tracep->declBit(c+1472,"ysyx_041728 dCache vArrayWire_33_1", false,-1);
        tracep->declBit(c+1473,"ysyx_041728 dCache vArrayWire_32_1", false,-1);
        tracep->declBit(c+1474,"ysyx_041728 dCache vArrayWire_31_1", false,-1);
        tracep->declBit(c+1475,"ysyx_041728 dCache vArrayWire_30_1", false,-1);
        tracep->declBit(c+1476,"ysyx_041728 dCache vArrayWire_29_1", false,-1);
        tracep->declBit(c+1477,"ysyx_041728 dCache vArrayWire_28_1", false,-1);
        tracep->declBit(c+1478,"ysyx_041728 dCache vArrayWire_27_1", false,-1);
        tracep->declBit(c+1479,"ysyx_041728 dCache vArrayWire_26_1", false,-1);
        tracep->declBit(c+1480,"ysyx_041728 dCache vArrayWire_25_1", false,-1);
        tracep->declBit(c+1481,"ysyx_041728 dCache vArrayWire_24_1", false,-1);
        tracep->declBit(c+1482,"ysyx_041728 dCache vArrayWire_23_1", false,-1);
        tracep->declBit(c+1483,"ysyx_041728 dCache vArrayWire_22_1", false,-1);
        tracep->declBit(c+1484,"ysyx_041728 dCache vArrayWire_21_1", false,-1);
        tracep->declBit(c+1485,"ysyx_041728 dCache vArrayWire_20_1", false,-1);
        tracep->declBit(c+1486,"ysyx_041728 dCache vArrayWire_19_1", false,-1);
        tracep->declBit(c+1487,"ysyx_041728 dCache vArrayWire_18_1", false,-1);
        tracep->declBit(c+1488,"ysyx_041728 dCache vArrayWire_17_1", false,-1);
        tracep->declBit(c+1489,"ysyx_041728 dCache vArrayWire_16_1", false,-1);
        tracep->declBit(c+1490,"ysyx_041728 dCache vArrayWire_15_1", false,-1);
        tracep->declBit(c+1491,"ysyx_041728 dCache vArrayWire_14_1", false,-1);
        tracep->declBit(c+1492,"ysyx_041728 dCache vArrayWire_13_1", false,-1);
        tracep->declBit(c+1493,"ysyx_041728 dCache vArrayWire_12_1", false,-1);
        tracep->declBit(c+1494,"ysyx_041728 dCache vArrayWire_11_1", false,-1);
        tracep->declBit(c+1495,"ysyx_041728 dCache vArrayWire_10_1", false,-1);
        tracep->declBit(c+1496,"ysyx_041728 dCache vArrayWire_9_1", false,-1);
        tracep->declBit(c+1497,"ysyx_041728 dCache vArrayWire_8_1", false,-1);
        tracep->declBit(c+1498,"ysyx_041728 dCache vArrayWire_7_1", false,-1);
        tracep->declBit(c+1499,"ysyx_041728 dCache vArrayWire_6_1", false,-1);
        tracep->declBit(c+1500,"ysyx_041728 dCache vArrayWire_5_1", false,-1);
        tracep->declBit(c+1501,"ysyx_041728 dCache vArrayWire_4_1", false,-1);
        tracep->declBit(c+1502,"ysyx_041728 dCache vArrayWire_3_1", false,-1);
        tracep->declBit(c+1503,"ysyx_041728 dCache vArrayWire_2_1", false,-1);
        tracep->declBit(c+1504,"ysyx_041728 dCache vArrayWire_1_1", false,-1);
        tracep->declBit(c+1505,"ysyx_041728 dCache vArrayWire_0_1", false,-1);
        tracep->declBit(c+1506,"ysyx_041728 dCache vMuxOut_1", false,-1);
        tracep->declBus(c+1507,"ysyx_041728 dCache tagArrayWire_63_1", false,-1, 21,0);
        tracep->declBus(c+1508,"ysyx_041728 dCache tagArrayWire_62_1", false,-1, 21,0);
        tracep->declBus(c+1509,"ysyx_041728 dCache tagArrayWire_61_1", false,-1, 21,0);
        tracep->declBus(c+1510,"ysyx_041728 dCache tagArrayWire_60_1", false,-1, 21,0);
        tracep->declBus(c+1511,"ysyx_041728 dCache tagArrayWire_59_1", false,-1, 21,0);
        tracep->declBus(c+1512,"ysyx_041728 dCache tagArrayWire_58_1", false,-1, 21,0);
        tracep->declBus(c+1513,"ysyx_041728 dCache tagArrayWire_57_1", false,-1, 21,0);
        tracep->declBus(c+1514,"ysyx_041728 dCache tagArrayWire_56_1", false,-1, 21,0);
        tracep->declBus(c+1515,"ysyx_041728 dCache tagArrayWire_55_1", false,-1, 21,0);
        tracep->declBus(c+1516,"ysyx_041728 dCache tagArrayWire_54_1", false,-1, 21,0);
        tracep->declBus(c+1517,"ysyx_041728 dCache tagArrayWire_53_1", false,-1, 21,0);
        tracep->declBus(c+1518,"ysyx_041728 dCache tagArrayWire_52_1", false,-1, 21,0);
        tracep->declBus(c+1519,"ysyx_041728 dCache tagArrayWire_51_1", false,-1, 21,0);
        tracep->declBus(c+1520,"ysyx_041728 dCache tagArrayWire_50_1", false,-1, 21,0);
        tracep->declBus(c+1521,"ysyx_041728 dCache tagArrayWire_49_1", false,-1, 21,0);
        tracep->declBus(c+1522,"ysyx_041728 dCache tagArrayWire_48_1", false,-1, 21,0);
        tracep->declBus(c+1523,"ysyx_041728 dCache tagArrayWire_47_1", false,-1, 21,0);
        tracep->declBus(c+1524,"ysyx_041728 dCache tagArrayWire_46_1", false,-1, 21,0);
        tracep->declBus(c+1525,"ysyx_041728 dCache tagArrayWire_45_1", false,-1, 21,0);
        tracep->declBus(c+1526,"ysyx_041728 dCache tagArrayWire_44_1", false,-1, 21,0);
        tracep->declBus(c+1527,"ysyx_041728 dCache tagArrayWire_43_1", false,-1, 21,0);
        tracep->declBus(c+1528,"ysyx_041728 dCache tagArrayWire_42_1", false,-1, 21,0);
        tracep->declBus(c+1529,"ysyx_041728 dCache tagArrayWire_41_1", false,-1, 21,0);
        tracep->declBus(c+1530,"ysyx_041728 dCache tagArrayWire_40_1", false,-1, 21,0);
        tracep->declBus(c+1531,"ysyx_041728 dCache tagArrayWire_39_1", false,-1, 21,0);
        tracep->declBus(c+1532,"ysyx_041728 dCache tagArrayWire_38_1", false,-1, 21,0);
        tracep->declBus(c+1533,"ysyx_041728 dCache tagArrayWire_37_1", false,-1, 21,0);
        tracep->declBus(c+1534,"ysyx_041728 dCache tagArrayWire_36_1", false,-1, 21,0);
        tracep->declBus(c+1535,"ysyx_041728 dCache tagArrayWire_35_1", false,-1, 21,0);
        tracep->declBus(c+1536,"ysyx_041728 dCache tagArrayWire_34_1", false,-1, 21,0);
        tracep->declBus(c+1537,"ysyx_041728 dCache tagArrayWire_33_1", false,-1, 21,0);
        tracep->declBus(c+1538,"ysyx_041728 dCache tagArrayWire_32_1", false,-1, 21,0);
        tracep->declBus(c+1539,"ysyx_041728 dCache tagArrayWire_31_1", false,-1, 21,0);
        tracep->declBus(c+1540,"ysyx_041728 dCache tagArrayWire_30_1", false,-1, 21,0);
        tracep->declBus(c+1541,"ysyx_041728 dCache tagArrayWire_29_1", false,-1, 21,0);
        tracep->declBus(c+1542,"ysyx_041728 dCache tagArrayWire_28_1", false,-1, 21,0);
        tracep->declBus(c+1543,"ysyx_041728 dCache tagArrayWire_27_1", false,-1, 21,0);
        tracep->declBus(c+1544,"ysyx_041728 dCache tagArrayWire_26_1", false,-1, 21,0);
        tracep->declBus(c+1545,"ysyx_041728 dCache tagArrayWire_25_1", false,-1, 21,0);
        tracep->declBus(c+1546,"ysyx_041728 dCache tagArrayWire_24_1", false,-1, 21,0);
        tracep->declBus(c+1547,"ysyx_041728 dCache tagArrayWire_23_1", false,-1, 21,0);
        tracep->declBus(c+1548,"ysyx_041728 dCache tagArrayWire_22_1", false,-1, 21,0);
        tracep->declBus(c+1549,"ysyx_041728 dCache tagArrayWire_21_1", false,-1, 21,0);
        tracep->declBus(c+1550,"ysyx_041728 dCache tagArrayWire_20_1", false,-1, 21,0);
        tracep->declBus(c+1551,"ysyx_041728 dCache tagArrayWire_19_1", false,-1, 21,0);
        tracep->declBus(c+1552,"ysyx_041728 dCache tagArrayWire_18_1", false,-1, 21,0);
        tracep->declBus(c+1553,"ysyx_041728 dCache tagArrayWire_17_1", false,-1, 21,0);
        tracep->declBus(c+1554,"ysyx_041728 dCache tagArrayWire_16_1", false,-1, 21,0);
        tracep->declBus(c+1555,"ysyx_041728 dCache tagArrayWire_15_1", false,-1, 21,0);
        tracep->declBus(c+1556,"ysyx_041728 dCache tagArrayWire_14_1", false,-1, 21,0);
        tracep->declBus(c+1557,"ysyx_041728 dCache tagArrayWire_13_1", false,-1, 21,0);
        tracep->declBus(c+1558,"ysyx_041728 dCache tagArrayWire_12_1", false,-1, 21,0);
        tracep->declBus(c+1559,"ysyx_041728 dCache tagArrayWire_11_1", false,-1, 21,0);
        tracep->declBus(c+1560,"ysyx_041728 dCache tagArrayWire_10_1", false,-1, 21,0);
        tracep->declBus(c+1561,"ysyx_041728 dCache tagArrayWire_9_1", false,-1, 21,0);
        tracep->declBus(c+1562,"ysyx_041728 dCache tagArrayWire_8_1", false,-1, 21,0);
        tracep->declBus(c+1563,"ysyx_041728 dCache tagArrayWire_7_1", false,-1, 21,0);
        tracep->declBus(c+1564,"ysyx_041728 dCache tagArrayWire_6_1", false,-1, 21,0);
        tracep->declBus(c+1565,"ysyx_041728 dCache tagArrayWire_5_1", false,-1, 21,0);
        tracep->declBus(c+1566,"ysyx_041728 dCache tagArrayWire_4_1", false,-1, 21,0);
        tracep->declBus(c+1567,"ysyx_041728 dCache tagArrayWire_3_1", false,-1, 21,0);
        tracep->declBus(c+1568,"ysyx_041728 dCache tagArrayWire_2_1", false,-1, 21,0);
        tracep->declBus(c+1569,"ysyx_041728 dCache tagArrayWire_1_1", false,-1, 21,0);
        tracep->declBus(c+1570,"ysyx_041728 dCache tagArrayWire_0_1", false,-1, 21,0);
        tracep->declBus(c+1571,"ysyx_041728 dCache tagMuxOut_1", false,-1, 21,0);
        tracep->declBit(c+1572,"ysyx_041728 dCache hitArray_1", false,-1);
        tracep->declBit(c+1573,"ysyx_041728 dCache vArrayWire_63_2", false,-1);
        tracep->declBit(c+1574,"ysyx_041728 dCache vArrayWire_62_2", false,-1);
        tracep->declBit(c+1575,"ysyx_041728 dCache vArrayWire_61_2", false,-1);
        tracep->declBit(c+1576,"ysyx_041728 dCache vArrayWire_60_2", false,-1);
        tracep->declBit(c+1577,"ysyx_041728 dCache vArrayWire_59_2", false,-1);
        tracep->declBit(c+1578,"ysyx_041728 dCache vArrayWire_58_2", false,-1);
        tracep->declBit(c+1579,"ysyx_041728 dCache vArrayWire_57_2", false,-1);
        tracep->declBit(c+1580,"ysyx_041728 dCache vArrayWire_56_2", false,-1);
        tracep->declBit(c+1581,"ysyx_041728 dCache vArrayWire_55_2", false,-1);
        tracep->declBit(c+1582,"ysyx_041728 dCache vArrayWire_54_2", false,-1);
        tracep->declBit(c+1583,"ysyx_041728 dCache vArrayWire_53_2", false,-1);
        tracep->declBit(c+1584,"ysyx_041728 dCache vArrayWire_52_2", false,-1);
        tracep->declBit(c+1585,"ysyx_041728 dCache vArrayWire_51_2", false,-1);
        tracep->declBit(c+1586,"ysyx_041728 dCache vArrayWire_50_2", false,-1);
        tracep->declBit(c+1587,"ysyx_041728 dCache vArrayWire_49_2", false,-1);
        tracep->declBit(c+1588,"ysyx_041728 dCache vArrayWire_48_2", false,-1);
        tracep->declBit(c+1589,"ysyx_041728 dCache vArrayWire_47_2", false,-1);
        tracep->declBit(c+1590,"ysyx_041728 dCache vArrayWire_46_2", false,-1);
        tracep->declBit(c+1591,"ysyx_041728 dCache vArrayWire_45_2", false,-1);
        tracep->declBit(c+1592,"ysyx_041728 dCache vArrayWire_44_2", false,-1);
        tracep->declBit(c+1593,"ysyx_041728 dCache vArrayWire_43_2", false,-1);
        tracep->declBit(c+1594,"ysyx_041728 dCache vArrayWire_42_2", false,-1);
        tracep->declBit(c+1595,"ysyx_041728 dCache vArrayWire_41_2", false,-1);
        tracep->declBit(c+1596,"ysyx_041728 dCache vArrayWire_40_2", false,-1);
        tracep->declBit(c+1597,"ysyx_041728 dCache vArrayWire_39_2", false,-1);
        tracep->declBit(c+1598,"ysyx_041728 dCache vArrayWire_38_2", false,-1);
        tracep->declBit(c+1599,"ysyx_041728 dCache vArrayWire_37_2", false,-1);
        tracep->declBit(c+1600,"ysyx_041728 dCache vArrayWire_36_2", false,-1);
        tracep->declBit(c+1601,"ysyx_041728 dCache vArrayWire_35_2", false,-1);
        tracep->declBit(c+1602,"ysyx_041728 dCache vArrayWire_34_2", false,-1);
        tracep->declBit(c+1603,"ysyx_041728 dCache vArrayWire_33_2", false,-1);
        tracep->declBit(c+1604,"ysyx_041728 dCache vArrayWire_32_2", false,-1);
        tracep->declBit(c+1605,"ysyx_041728 dCache vArrayWire_31_2", false,-1);
        tracep->declBit(c+1606,"ysyx_041728 dCache vArrayWire_30_2", false,-1);
        tracep->declBit(c+1607,"ysyx_041728 dCache vArrayWire_29_2", false,-1);
        tracep->declBit(c+1608,"ysyx_041728 dCache vArrayWire_28_2", false,-1);
        tracep->declBit(c+1609,"ysyx_041728 dCache vArrayWire_27_2", false,-1);
        tracep->declBit(c+1610,"ysyx_041728 dCache vArrayWire_26_2", false,-1);
        tracep->declBit(c+1611,"ysyx_041728 dCache vArrayWire_25_2", false,-1);
        tracep->declBit(c+1612,"ysyx_041728 dCache vArrayWire_24_2", false,-1);
        tracep->declBit(c+1613,"ysyx_041728 dCache vArrayWire_23_2", false,-1);
        tracep->declBit(c+1614,"ysyx_041728 dCache vArrayWire_22_2", false,-1);
        tracep->declBit(c+1615,"ysyx_041728 dCache vArrayWire_21_2", false,-1);
        tracep->declBit(c+1616,"ysyx_041728 dCache vArrayWire_20_2", false,-1);
        tracep->declBit(c+1617,"ysyx_041728 dCache vArrayWire_19_2", false,-1);
        tracep->declBit(c+1618,"ysyx_041728 dCache vArrayWire_18_2", false,-1);
        tracep->declBit(c+1619,"ysyx_041728 dCache vArrayWire_17_2", false,-1);
        tracep->declBit(c+1620,"ysyx_041728 dCache vArrayWire_16_2", false,-1);
        tracep->declBit(c+1621,"ysyx_041728 dCache vArrayWire_15_2", false,-1);
        tracep->declBit(c+1622,"ysyx_041728 dCache vArrayWire_14_2", false,-1);
        tracep->declBit(c+1623,"ysyx_041728 dCache vArrayWire_13_2", false,-1);
        tracep->declBit(c+1624,"ysyx_041728 dCache vArrayWire_12_2", false,-1);
        tracep->declBit(c+1625,"ysyx_041728 dCache vArrayWire_11_2", false,-1);
        tracep->declBit(c+1626,"ysyx_041728 dCache vArrayWire_10_2", false,-1);
        tracep->declBit(c+1627,"ysyx_041728 dCache vArrayWire_9_2", false,-1);
        tracep->declBit(c+1628,"ysyx_041728 dCache vArrayWire_8_2", false,-1);
        tracep->declBit(c+1629,"ysyx_041728 dCache vArrayWire_7_2", false,-1);
        tracep->declBit(c+1630,"ysyx_041728 dCache vArrayWire_6_2", false,-1);
        tracep->declBit(c+1631,"ysyx_041728 dCache vArrayWire_5_2", false,-1);
        tracep->declBit(c+1632,"ysyx_041728 dCache vArrayWire_4_2", false,-1);
        tracep->declBit(c+1633,"ysyx_041728 dCache vArrayWire_3_2", false,-1);
        tracep->declBit(c+1634,"ysyx_041728 dCache vArrayWire_2_2", false,-1);
        tracep->declBit(c+1635,"ysyx_041728 dCache vArrayWire_1_2", false,-1);
        tracep->declBit(c+1636,"ysyx_041728 dCache vArrayWire_0_2", false,-1);
        tracep->declBit(c+1637,"ysyx_041728 dCache vMuxOut_2", false,-1);
        tracep->declBus(c+1638,"ysyx_041728 dCache tagArrayWire_63_2", false,-1, 21,0);
        tracep->declBus(c+1639,"ysyx_041728 dCache tagArrayWire_62_2", false,-1, 21,0);
        tracep->declBus(c+1640,"ysyx_041728 dCache tagArrayWire_61_2", false,-1, 21,0);
        tracep->declBus(c+1641,"ysyx_041728 dCache tagArrayWire_60_2", false,-1, 21,0);
        tracep->declBus(c+1642,"ysyx_041728 dCache tagArrayWire_59_2", false,-1, 21,0);
        tracep->declBus(c+1643,"ysyx_041728 dCache tagArrayWire_58_2", false,-1, 21,0);
        tracep->declBus(c+1644,"ysyx_041728 dCache tagArrayWire_57_2", false,-1, 21,0);
        tracep->declBus(c+1645,"ysyx_041728 dCache tagArrayWire_56_2", false,-1, 21,0);
        tracep->declBus(c+1646,"ysyx_041728 dCache tagArrayWire_55_2", false,-1, 21,0);
        tracep->declBus(c+1647,"ysyx_041728 dCache tagArrayWire_54_2", false,-1, 21,0);
        tracep->declBus(c+1648,"ysyx_041728 dCache tagArrayWire_53_2", false,-1, 21,0);
        tracep->declBus(c+1649,"ysyx_041728 dCache tagArrayWire_52_2", false,-1, 21,0);
        tracep->declBus(c+1650,"ysyx_041728 dCache tagArrayWire_51_2", false,-1, 21,0);
        tracep->declBus(c+1651,"ysyx_041728 dCache tagArrayWire_50_2", false,-1, 21,0);
        tracep->declBus(c+1652,"ysyx_041728 dCache tagArrayWire_49_2", false,-1, 21,0);
        tracep->declBus(c+1653,"ysyx_041728 dCache tagArrayWire_48_2", false,-1, 21,0);
        tracep->declBus(c+1654,"ysyx_041728 dCache tagArrayWire_47_2", false,-1, 21,0);
        tracep->declBus(c+1655,"ysyx_041728 dCache tagArrayWire_46_2", false,-1, 21,0);
        tracep->declBus(c+1656,"ysyx_041728 dCache tagArrayWire_45_2", false,-1, 21,0);
        tracep->declBus(c+1657,"ysyx_041728 dCache tagArrayWire_44_2", false,-1, 21,0);
        tracep->declBus(c+1658,"ysyx_041728 dCache tagArrayWire_43_2", false,-1, 21,0);
        tracep->declBus(c+1659,"ysyx_041728 dCache tagArrayWire_42_2", false,-1, 21,0);
        tracep->declBus(c+1660,"ysyx_041728 dCache tagArrayWire_41_2", false,-1, 21,0);
        tracep->declBus(c+1661,"ysyx_041728 dCache tagArrayWire_40_2", false,-1, 21,0);
        tracep->declBus(c+1662,"ysyx_041728 dCache tagArrayWire_39_2", false,-1, 21,0);
        tracep->declBus(c+1663,"ysyx_041728 dCache tagArrayWire_38_2", false,-1, 21,0);
        tracep->declBus(c+1664,"ysyx_041728 dCache tagArrayWire_37_2", false,-1, 21,0);
        tracep->declBus(c+1665,"ysyx_041728 dCache tagArrayWire_36_2", false,-1, 21,0);
        tracep->declBus(c+1666,"ysyx_041728 dCache tagArrayWire_35_2", false,-1, 21,0);
        tracep->declBus(c+1667,"ysyx_041728 dCache tagArrayWire_34_2", false,-1, 21,0);
        tracep->declBus(c+1668,"ysyx_041728 dCache tagArrayWire_33_2", false,-1, 21,0);
        tracep->declBus(c+1669,"ysyx_041728 dCache tagArrayWire_32_2", false,-1, 21,0);
        tracep->declBus(c+1670,"ysyx_041728 dCache tagArrayWire_31_2", false,-1, 21,0);
        tracep->declBus(c+1671,"ysyx_041728 dCache tagArrayWire_30_2", false,-1, 21,0);
        tracep->declBus(c+1672,"ysyx_041728 dCache tagArrayWire_29_2", false,-1, 21,0);
        tracep->declBus(c+1673,"ysyx_041728 dCache tagArrayWire_28_2", false,-1, 21,0);
        tracep->declBus(c+1674,"ysyx_041728 dCache tagArrayWire_27_2", false,-1, 21,0);
        tracep->declBus(c+1675,"ysyx_041728 dCache tagArrayWire_26_2", false,-1, 21,0);
        tracep->declBus(c+1676,"ysyx_041728 dCache tagArrayWire_25_2", false,-1, 21,0);
        tracep->declBus(c+1677,"ysyx_041728 dCache tagArrayWire_24_2", false,-1, 21,0);
        tracep->declBus(c+1678,"ysyx_041728 dCache tagArrayWire_23_2", false,-1, 21,0);
        tracep->declBus(c+1679,"ysyx_041728 dCache tagArrayWire_22_2", false,-1, 21,0);
        tracep->declBus(c+1680,"ysyx_041728 dCache tagArrayWire_21_2", false,-1, 21,0);
        tracep->declBus(c+1681,"ysyx_041728 dCache tagArrayWire_20_2", false,-1, 21,0);
        tracep->declBus(c+1682,"ysyx_041728 dCache tagArrayWire_19_2", false,-1, 21,0);
        tracep->declBus(c+1683,"ysyx_041728 dCache tagArrayWire_18_2", false,-1, 21,0);
        tracep->declBus(c+1684,"ysyx_041728 dCache tagArrayWire_17_2", false,-1, 21,0);
        tracep->declBus(c+1685,"ysyx_041728 dCache tagArrayWire_16_2", false,-1, 21,0);
        tracep->declBus(c+1686,"ysyx_041728 dCache tagArrayWire_15_2", false,-1, 21,0);
        tracep->declBus(c+1687,"ysyx_041728 dCache tagArrayWire_14_2", false,-1, 21,0);
        tracep->declBus(c+1688,"ysyx_041728 dCache tagArrayWire_13_2", false,-1, 21,0);
        tracep->declBus(c+1689,"ysyx_041728 dCache tagArrayWire_12_2", false,-1, 21,0);
        tracep->declBus(c+1690,"ysyx_041728 dCache tagArrayWire_11_2", false,-1, 21,0);
        tracep->declBus(c+1691,"ysyx_041728 dCache tagArrayWire_10_2", false,-1, 21,0);
        tracep->declBus(c+1692,"ysyx_041728 dCache tagArrayWire_9_2", false,-1, 21,0);
        tracep->declBus(c+1693,"ysyx_041728 dCache tagArrayWire_8_2", false,-1, 21,0);
        tracep->declBus(c+1694,"ysyx_041728 dCache tagArrayWire_7_2", false,-1, 21,0);
        tracep->declBus(c+1695,"ysyx_041728 dCache tagArrayWire_6_2", false,-1, 21,0);
        tracep->declBus(c+1696,"ysyx_041728 dCache tagArrayWire_5_2", false,-1, 21,0);
        tracep->declBus(c+1697,"ysyx_041728 dCache tagArrayWire_4_2", false,-1, 21,0);
        tracep->declBus(c+1698,"ysyx_041728 dCache tagArrayWire_3_2", false,-1, 21,0);
        tracep->declBus(c+1699,"ysyx_041728 dCache tagArrayWire_2_2", false,-1, 21,0);
        tracep->declBus(c+1700,"ysyx_041728 dCache tagArrayWire_1_2", false,-1, 21,0);
        tracep->declBus(c+1701,"ysyx_041728 dCache tagArrayWire_0_2", false,-1, 21,0);
        tracep->declBus(c+1702,"ysyx_041728 dCache tagMuxOut_2", false,-1, 21,0);
        tracep->declBit(c+1703,"ysyx_041728 dCache hitArray_2", false,-1);
        tracep->declBit(c+1704,"ysyx_041728 dCache vArrayWire_63_3", false,-1);
        tracep->declBit(c+1705,"ysyx_041728 dCache vArrayWire_62_3", false,-1);
        tracep->declBit(c+1706,"ysyx_041728 dCache vArrayWire_61_3", false,-1);
        tracep->declBit(c+1707,"ysyx_041728 dCache vArrayWire_60_3", false,-1);
        tracep->declBit(c+1708,"ysyx_041728 dCache vArrayWire_59_3", false,-1);
        tracep->declBit(c+1709,"ysyx_041728 dCache vArrayWire_58_3", false,-1);
        tracep->declBit(c+1710,"ysyx_041728 dCache vArrayWire_57_3", false,-1);
        tracep->declBit(c+1711,"ysyx_041728 dCache vArrayWire_56_3", false,-1);
        tracep->declBit(c+1712,"ysyx_041728 dCache vArrayWire_55_3", false,-1);
        tracep->declBit(c+1713,"ysyx_041728 dCache vArrayWire_54_3", false,-1);
        tracep->declBit(c+1714,"ysyx_041728 dCache vArrayWire_53_3", false,-1);
        tracep->declBit(c+1715,"ysyx_041728 dCache vArrayWire_52_3", false,-1);
        tracep->declBit(c+1716,"ysyx_041728 dCache vArrayWire_51_3", false,-1);
        tracep->declBit(c+1717,"ysyx_041728 dCache vArrayWire_50_3", false,-1);
        tracep->declBit(c+1718,"ysyx_041728 dCache vArrayWire_49_3", false,-1);
        tracep->declBit(c+1719,"ysyx_041728 dCache vArrayWire_48_3", false,-1);
        tracep->declBit(c+1720,"ysyx_041728 dCache vArrayWire_47_3", false,-1);
        tracep->declBit(c+1721,"ysyx_041728 dCache vArrayWire_46_3", false,-1);
        tracep->declBit(c+1722,"ysyx_041728 dCache vArrayWire_45_3", false,-1);
        tracep->declBit(c+1723,"ysyx_041728 dCache vArrayWire_44_3", false,-1);
        tracep->declBit(c+1724,"ysyx_041728 dCache vArrayWire_43_3", false,-1);
        tracep->declBit(c+1725,"ysyx_041728 dCache vArrayWire_42_3", false,-1);
        tracep->declBit(c+1726,"ysyx_041728 dCache vArrayWire_41_3", false,-1);
        tracep->declBit(c+1727,"ysyx_041728 dCache vArrayWire_40_3", false,-1);
        tracep->declBit(c+1728,"ysyx_041728 dCache vArrayWire_39_3", false,-1);
        tracep->declBit(c+1729,"ysyx_041728 dCache vArrayWire_38_3", false,-1);
        tracep->declBit(c+1730,"ysyx_041728 dCache vArrayWire_37_3", false,-1);
        tracep->declBit(c+1731,"ysyx_041728 dCache vArrayWire_36_3", false,-1);
        tracep->declBit(c+1732,"ysyx_041728 dCache vArrayWire_35_3", false,-1);
        tracep->declBit(c+1733,"ysyx_041728 dCache vArrayWire_34_3", false,-1);
        tracep->declBit(c+1734,"ysyx_041728 dCache vArrayWire_33_3", false,-1);
        tracep->declBit(c+1735,"ysyx_041728 dCache vArrayWire_32_3", false,-1);
        tracep->declBit(c+1736,"ysyx_041728 dCache vArrayWire_31_3", false,-1);
        tracep->declBit(c+1737,"ysyx_041728 dCache vArrayWire_30_3", false,-1);
        tracep->declBit(c+1738,"ysyx_041728 dCache vArrayWire_29_3", false,-1);
        tracep->declBit(c+1739,"ysyx_041728 dCache vArrayWire_28_3", false,-1);
        tracep->declBit(c+1740,"ysyx_041728 dCache vArrayWire_27_3", false,-1);
        tracep->declBit(c+1741,"ysyx_041728 dCache vArrayWire_26_3", false,-1);
        tracep->declBit(c+1742,"ysyx_041728 dCache vArrayWire_25_3", false,-1);
        tracep->declBit(c+1743,"ysyx_041728 dCache vArrayWire_24_3", false,-1);
        tracep->declBit(c+1744,"ysyx_041728 dCache vArrayWire_23_3", false,-1);
        tracep->declBit(c+1745,"ysyx_041728 dCache vArrayWire_22_3", false,-1);
        tracep->declBit(c+1746,"ysyx_041728 dCache vArrayWire_21_3", false,-1);
        tracep->declBit(c+1747,"ysyx_041728 dCache vArrayWire_20_3", false,-1);
        tracep->declBit(c+1748,"ysyx_041728 dCache vArrayWire_19_3", false,-1);
        tracep->declBit(c+1749,"ysyx_041728 dCache vArrayWire_18_3", false,-1);
        tracep->declBit(c+1750,"ysyx_041728 dCache vArrayWire_17_3", false,-1);
        tracep->declBit(c+1751,"ysyx_041728 dCache vArrayWire_16_3", false,-1);
        tracep->declBit(c+1752,"ysyx_041728 dCache vArrayWire_15_3", false,-1);
        tracep->declBit(c+1753,"ysyx_041728 dCache vArrayWire_14_3", false,-1);
        tracep->declBit(c+1754,"ysyx_041728 dCache vArrayWire_13_3", false,-1);
        tracep->declBit(c+1755,"ysyx_041728 dCache vArrayWire_12_3", false,-1);
        tracep->declBit(c+1756,"ysyx_041728 dCache vArrayWire_11_3", false,-1);
        tracep->declBit(c+1757,"ysyx_041728 dCache vArrayWire_10_3", false,-1);
        tracep->declBit(c+1758,"ysyx_041728 dCache vArrayWire_9_3", false,-1);
        tracep->declBit(c+1759,"ysyx_041728 dCache vArrayWire_8_3", false,-1);
        tracep->declBit(c+1760,"ysyx_041728 dCache vArrayWire_7_3", false,-1);
        tracep->declBit(c+1761,"ysyx_041728 dCache vArrayWire_6_3", false,-1);
        tracep->declBit(c+1762,"ysyx_041728 dCache vArrayWire_5_3", false,-1);
        tracep->declBit(c+1763,"ysyx_041728 dCache vArrayWire_4_3", false,-1);
        tracep->declBit(c+1764,"ysyx_041728 dCache vArrayWire_3_3", false,-1);
        tracep->declBit(c+1765,"ysyx_041728 dCache vArrayWire_2_3", false,-1);
        tracep->declBit(c+1766,"ysyx_041728 dCache vArrayWire_1_3", false,-1);
        tracep->declBit(c+1767,"ysyx_041728 dCache vArrayWire_0_3", false,-1);
        tracep->declBit(c+1768,"ysyx_041728 dCache vMuxOut_3", false,-1);
        tracep->declBus(c+1769,"ysyx_041728 dCache tagArrayWire_63_3", false,-1, 21,0);
        tracep->declBus(c+1770,"ysyx_041728 dCache tagArrayWire_62_3", false,-1, 21,0);
        tracep->declBus(c+1771,"ysyx_041728 dCache tagArrayWire_61_3", false,-1, 21,0);
        tracep->declBus(c+1772,"ysyx_041728 dCache tagArrayWire_60_3", false,-1, 21,0);
        tracep->declBus(c+1773,"ysyx_041728 dCache tagArrayWire_59_3", false,-1, 21,0);
        tracep->declBus(c+1774,"ysyx_041728 dCache tagArrayWire_58_3", false,-1, 21,0);
        tracep->declBus(c+1775,"ysyx_041728 dCache tagArrayWire_57_3", false,-1, 21,0);
        tracep->declBus(c+1776,"ysyx_041728 dCache tagArrayWire_56_3", false,-1, 21,0);
        tracep->declBus(c+1777,"ysyx_041728 dCache tagArrayWire_55_3", false,-1, 21,0);
        tracep->declBus(c+1778,"ysyx_041728 dCache tagArrayWire_54_3", false,-1, 21,0);
        tracep->declBus(c+1779,"ysyx_041728 dCache tagArrayWire_53_3", false,-1, 21,0);
        tracep->declBus(c+1780,"ysyx_041728 dCache tagArrayWire_52_3", false,-1, 21,0);
        tracep->declBus(c+1781,"ysyx_041728 dCache tagArrayWire_51_3", false,-1, 21,0);
        tracep->declBus(c+1782,"ysyx_041728 dCache tagArrayWire_50_3", false,-1, 21,0);
        tracep->declBus(c+1783,"ysyx_041728 dCache tagArrayWire_49_3", false,-1, 21,0);
        tracep->declBus(c+1784,"ysyx_041728 dCache tagArrayWire_48_3", false,-1, 21,0);
        tracep->declBus(c+1785,"ysyx_041728 dCache tagArrayWire_47_3", false,-1, 21,0);
        tracep->declBus(c+1786,"ysyx_041728 dCache tagArrayWire_46_3", false,-1, 21,0);
        tracep->declBus(c+1787,"ysyx_041728 dCache tagArrayWire_45_3", false,-1, 21,0);
        tracep->declBus(c+1788,"ysyx_041728 dCache tagArrayWire_44_3", false,-1, 21,0);
        tracep->declBus(c+1789,"ysyx_041728 dCache tagArrayWire_43_3", false,-1, 21,0);
        tracep->declBus(c+1790,"ysyx_041728 dCache tagArrayWire_42_3", false,-1, 21,0);
        tracep->declBus(c+1791,"ysyx_041728 dCache tagArrayWire_41_3", false,-1, 21,0);
        tracep->declBus(c+1792,"ysyx_041728 dCache tagArrayWire_40_3", false,-1, 21,0);
        tracep->declBus(c+1793,"ysyx_041728 dCache tagArrayWire_39_3", false,-1, 21,0);
        tracep->declBus(c+1794,"ysyx_041728 dCache tagArrayWire_38_3", false,-1, 21,0);
        tracep->declBus(c+1795,"ysyx_041728 dCache tagArrayWire_37_3", false,-1, 21,0);
        tracep->declBus(c+1796,"ysyx_041728 dCache tagArrayWire_36_3", false,-1, 21,0);
        tracep->declBus(c+1797,"ysyx_041728 dCache tagArrayWire_35_3", false,-1, 21,0);
        tracep->declBus(c+1798,"ysyx_041728 dCache tagArrayWire_34_3", false,-1, 21,0);
        tracep->declBus(c+1799,"ysyx_041728 dCache tagArrayWire_33_3", false,-1, 21,0);
        tracep->declBus(c+1800,"ysyx_041728 dCache tagArrayWire_32_3", false,-1, 21,0);
        tracep->declBus(c+1801,"ysyx_041728 dCache tagArrayWire_31_3", false,-1, 21,0);
        tracep->declBus(c+1802,"ysyx_041728 dCache tagArrayWire_30_3", false,-1, 21,0);
        tracep->declBus(c+1803,"ysyx_041728 dCache tagArrayWire_29_3", false,-1, 21,0);
        tracep->declBus(c+1804,"ysyx_041728 dCache tagArrayWire_28_3", false,-1, 21,0);
        tracep->declBus(c+1805,"ysyx_041728 dCache tagArrayWire_27_3", false,-1, 21,0);
        tracep->declBus(c+1806,"ysyx_041728 dCache tagArrayWire_26_3", false,-1, 21,0);
        tracep->declBus(c+1807,"ysyx_041728 dCache tagArrayWire_25_3", false,-1, 21,0);
        tracep->declBus(c+1808,"ysyx_041728 dCache tagArrayWire_24_3", false,-1, 21,0);
        tracep->declBus(c+1809,"ysyx_041728 dCache tagArrayWire_23_3", false,-1, 21,0);
        tracep->declBus(c+1810,"ysyx_041728 dCache tagArrayWire_22_3", false,-1, 21,0);
        tracep->declBus(c+1811,"ysyx_041728 dCache tagArrayWire_21_3", false,-1, 21,0);
        tracep->declBus(c+1812,"ysyx_041728 dCache tagArrayWire_20_3", false,-1, 21,0);
        tracep->declBus(c+1813,"ysyx_041728 dCache tagArrayWire_19_3", false,-1, 21,0);
        tracep->declBus(c+1814,"ysyx_041728 dCache tagArrayWire_18_3", false,-1, 21,0);
        tracep->declBus(c+1815,"ysyx_041728 dCache tagArrayWire_17_3", false,-1, 21,0);
        tracep->declBus(c+1816,"ysyx_041728 dCache tagArrayWire_16_3", false,-1, 21,0);
        tracep->declBus(c+1817,"ysyx_041728 dCache tagArrayWire_15_3", false,-1, 21,0);
        tracep->declBus(c+1818,"ysyx_041728 dCache tagArrayWire_14_3", false,-1, 21,0);
        tracep->declBus(c+1819,"ysyx_041728 dCache tagArrayWire_13_3", false,-1, 21,0);
        tracep->declBus(c+1820,"ysyx_041728 dCache tagArrayWire_12_3", false,-1, 21,0);
        tracep->declBus(c+1821,"ysyx_041728 dCache tagArrayWire_11_3", false,-1, 21,0);
        tracep->declBus(c+1822,"ysyx_041728 dCache tagArrayWire_10_3", false,-1, 21,0);
        tracep->declBus(c+1823,"ysyx_041728 dCache tagArrayWire_9_3", false,-1, 21,0);
        tracep->declBus(c+1824,"ysyx_041728 dCache tagArrayWire_8_3", false,-1, 21,0);
        tracep->declBus(c+1825,"ysyx_041728 dCache tagArrayWire_7_3", false,-1, 21,0);
        tracep->declBus(c+1826,"ysyx_041728 dCache tagArrayWire_6_3", false,-1, 21,0);
        tracep->declBus(c+1827,"ysyx_041728 dCache tagArrayWire_5_3", false,-1, 21,0);
        tracep->declBus(c+1828,"ysyx_041728 dCache tagArrayWire_4_3", false,-1, 21,0);
        tracep->declBus(c+1829,"ysyx_041728 dCache tagArrayWire_3_3", false,-1, 21,0);
        tracep->declBus(c+1830,"ysyx_041728 dCache tagArrayWire_2_3", false,-1, 21,0);
        tracep->declBus(c+1831,"ysyx_041728 dCache tagArrayWire_1_3", false,-1, 21,0);
        tracep->declBus(c+1832,"ysyx_041728 dCache tagArrayWire_0_3", false,-1, 21,0);
        tracep->declBus(c+1833,"ysyx_041728 dCache tagMuxOut_3", false,-1, 21,0);
        tracep->declBit(c+1834,"ysyx_041728 dCache hitArray_3", false,-1);
        tracep->declBit(c+1835,"ysyx_041728 dCache hit", false,-1);
        tracep->declBit(c+1836,"ysyx_041728 dCache isIdle", false,-1);
        tracep->declBit(c+148,"ysyx_041728 dCache isMiss", false,-1);
        tracep->declBit(c+1837,"ysyx_041728 dCache isWrite", false,-1);
        tracep->declBit(c+1838,"ysyx_041728 dCache isBlock", false,-1);
        tracep->declArray(c+1839,"ysyx_041728 dCache waysel", false,-1, 127,0);
        tracep->declBus(c+1843,"ysyx_041728 dCache selArrayWire_1", false,-1, 1,0);
        tracep->declBus(c+1844,"ysyx_041728 dCache selArrayWire_0", false,-1, 1,0);
        tracep->declBus(c+1845,"ysyx_041728 dCache selArrayWire_2", false,-1, 1,0);
        tracep->declBus(c+1846,"ysyx_041728 dCache selArrayWire_3", false,-1, 1,0);
        tracep->declBus(c+1847,"ysyx_041728 dCache selArrayWire_4", false,-1, 1,0);
        tracep->declBus(c+1848,"ysyx_041728 dCache selArrayWire_5", false,-1, 1,0);
        tracep->declBus(c+1849,"ysyx_041728 dCache selArrayWire_6", false,-1, 1,0);
        tracep->declBus(c+1850,"ysyx_041728 dCache selArrayWire_7", false,-1, 1,0);
        tracep->declBus(c+1851,"ysyx_041728 dCache selArrayWire_8", false,-1, 1,0);
        tracep->declBus(c+1852,"ysyx_041728 dCache selArrayWire_9", false,-1, 1,0);
        tracep->declBus(c+1853,"ysyx_041728 dCache selArrayWire_10", false,-1, 1,0);
        tracep->declBus(c+1854,"ysyx_041728 dCache selArrayWire_11", false,-1, 1,0);
        tracep->declBus(c+1855,"ysyx_041728 dCache selArrayWire_12", false,-1, 1,0);
        tracep->declBus(c+1856,"ysyx_041728 dCache selArrayWire_13", false,-1, 1,0);
        tracep->declBus(c+1857,"ysyx_041728 dCache selArrayWire_14", false,-1, 1,0);
        tracep->declBus(c+1858,"ysyx_041728 dCache selArrayWire_15", false,-1, 1,0);
        tracep->declBus(c+1859,"ysyx_041728 dCache selArrayWire_16", false,-1, 1,0);
        tracep->declBus(c+1860,"ysyx_041728 dCache selArrayWire_17", false,-1, 1,0);
        tracep->declBus(c+1861,"ysyx_041728 dCache selArrayWire_18", false,-1, 1,0);
        tracep->declBus(c+1862,"ysyx_041728 dCache selArrayWire_19", false,-1, 1,0);
        tracep->declBus(c+1863,"ysyx_041728 dCache selArrayWire_20", false,-1, 1,0);
        tracep->declBus(c+1864,"ysyx_041728 dCache selArrayWire_21", false,-1, 1,0);
        tracep->declBus(c+1865,"ysyx_041728 dCache selArrayWire_22", false,-1, 1,0);
        tracep->declBus(c+1866,"ysyx_041728 dCache selArrayWire_23", false,-1, 1,0);
        tracep->declBus(c+1867,"ysyx_041728 dCache selArrayWire_24", false,-1, 1,0);
        tracep->declBus(c+1868,"ysyx_041728 dCache selArrayWire_25", false,-1, 1,0);
        tracep->declBus(c+1869,"ysyx_041728 dCache selArrayWire_26", false,-1, 1,0);
        tracep->declBus(c+1870,"ysyx_041728 dCache selArrayWire_27", false,-1, 1,0);
        tracep->declBus(c+1871,"ysyx_041728 dCache selArrayWire_28", false,-1, 1,0);
        tracep->declBus(c+1872,"ysyx_041728 dCache selArrayWire_29", false,-1, 1,0);
        tracep->declBus(c+1873,"ysyx_041728 dCache selArrayWire_30", false,-1, 1,0);
        tracep->declBus(c+1874,"ysyx_041728 dCache selArrayWire_31", false,-1, 1,0);
        tracep->declBus(c+1875,"ysyx_041728 dCache selArrayWire_32", false,-1, 1,0);
        tracep->declBus(c+1876,"ysyx_041728 dCache selArrayWire_33", false,-1, 1,0);
        tracep->declBus(c+1877,"ysyx_041728 dCache selArrayWire_34", false,-1, 1,0);
        tracep->declBus(c+1878,"ysyx_041728 dCache selArrayWire_35", false,-1, 1,0);
        tracep->declBus(c+1879,"ysyx_041728 dCache selArrayWire_36", false,-1, 1,0);
        tracep->declBus(c+1880,"ysyx_041728 dCache selArrayWire_37", false,-1, 1,0);
        tracep->declBus(c+1881,"ysyx_041728 dCache selArrayWire_38", false,-1, 1,0);
        tracep->declBus(c+1882,"ysyx_041728 dCache selArrayWire_39", false,-1, 1,0);
        tracep->declBus(c+1883,"ysyx_041728 dCache selArrayWire_40", false,-1, 1,0);
        tracep->declBus(c+1884,"ysyx_041728 dCache selArrayWire_41", false,-1, 1,0);
        tracep->declBus(c+1885,"ysyx_041728 dCache selArrayWire_42", false,-1, 1,0);
        tracep->declBus(c+1886,"ysyx_041728 dCache selArrayWire_43", false,-1, 1,0);
        tracep->declBus(c+1887,"ysyx_041728 dCache selArrayWire_44", false,-1, 1,0);
        tracep->declBus(c+1888,"ysyx_041728 dCache selArrayWire_45", false,-1, 1,0);
        tracep->declBus(c+1889,"ysyx_041728 dCache selArrayWire_46", false,-1, 1,0);
        tracep->declBus(c+1890,"ysyx_041728 dCache selArrayWire_47", false,-1, 1,0);
        tracep->declBus(c+1891,"ysyx_041728 dCache selArrayWire_48", false,-1, 1,0);
        tracep->declBus(c+1892,"ysyx_041728 dCache selArrayWire_49", false,-1, 1,0);
        tracep->declBus(c+1893,"ysyx_041728 dCache selArrayWire_50", false,-1, 1,0);
        tracep->declBus(c+1894,"ysyx_041728 dCache selArrayWire_51", false,-1, 1,0);
        tracep->declBus(c+1895,"ysyx_041728 dCache selArrayWire_52", false,-1, 1,0);
        tracep->declBus(c+1896,"ysyx_041728 dCache selArrayWire_53", false,-1, 1,0);
        tracep->declBus(c+1897,"ysyx_041728 dCache selArrayWire_54", false,-1, 1,0);
        tracep->declBus(c+1898,"ysyx_041728 dCache selArrayWire_55", false,-1, 1,0);
        tracep->declBus(c+1899,"ysyx_041728 dCache selArrayWire_56", false,-1, 1,0);
        tracep->declBus(c+1900,"ysyx_041728 dCache selArrayWire_57", false,-1, 1,0);
        tracep->declBus(c+1901,"ysyx_041728 dCache selArrayWire_58", false,-1, 1,0);
        tracep->declBus(c+1902,"ysyx_041728 dCache selArrayWire_59", false,-1, 1,0);
        tracep->declBus(c+1903,"ysyx_041728 dCache selArrayWire_60", false,-1, 1,0);
        tracep->declBus(c+1904,"ysyx_041728 dCache selArrayWire_61", false,-1, 1,0);
        tracep->declBus(c+1905,"ysyx_041728 dCache selArrayWire_62", false,-1, 1,0);
        tracep->declBus(c+1906,"ysyx_041728 dCache selArrayWire_63", false,-1, 1,0);
        tracep->declBus(c+1907,"ysyx_041728 dCache sramSel", false,-1, 1,0);
        tracep->declBus(c+1908,"ysyx_041728 dCache maskWrite_0", false,-1, 7,0);
        tracep->declBus(c+1909,"ysyx_041728 dCache maskWrite_1", false,-1, 7,0);
        tracep->declBus(c+1910,"ysyx_041728 dCache maskWrite_2", false,-1, 7,0);
        tracep->declBus(c+1911,"ysyx_041728 dCache maskWrite_3", false,-1, 7,0);
        tracep->declBus(c+1912,"ysyx_041728 dCache maskWrite_4", false,-1, 7,0);
        tracep->declBus(c+1913,"ysyx_041728 dCache maskWrite_5", false,-1, 7,0);
        tracep->declBus(c+1914,"ysyx_041728 dCache maskWrite_6", false,-1, 7,0);
        tracep->declBus(c+1915,"ysyx_041728 dCache maskWrite_7", false,-1, 7,0);
        tracep->declArray(c+1916,"ysyx_041728 dCache ramMaskWrite", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 clintIns clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 clintIns reset", false,-1);
        tracep->declBit(c+141,"ysyx_041728 clintIns io_clintIO_valid", false,-1);
        tracep->declQuad(c+142,"ysyx_041728 clintIns io_clintIO_data_read", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_041728 clintIns io_clintIO_data_write", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_041728 clintIns io_clintIO_wen", false,-1);
        tracep->declBus(c+101,"ysyx_041728 clintIns io_clintIO_addr", false,-1, 31,0);
        tracep->declBit(c+104,"ysyx_041728 clintIns intrTimeCnt_0", false,-1);
        tracep->declBit(c+105,"ysyx_041728 clintIns startTimeCnt_0", false,-1);
        tracep->declQuad(c+1920,"ysyx_041728 clintIns mtime", false,-1, 63,0);
        tracep->declQuad(c+1922,"ysyx_041728 clintIns mtimecmp", false,-1, 63,0);
        tracep->declBit(c+104,"ysyx_041728 clintIns intrTimeCnt", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 axiDIO clock", false,-1);
        tracep->declBit(c+3977,"ysyx_041728 axiDIO reset", false,-1);
        tracep->declBit(c+4009,"ysyx_041728 axiDIO io_axiIO_awready", false,-1);
        tracep->declBit(c+169,"ysyx_041728 axiDIO io_axiIO_awvalid", false,-1);
        tracep->declBus(c+170,"ysyx_041728 axiDIO io_axiIO_awaddr", false,-1, 31,0);
        tracep->declBus(c+171,"ysyx_041728 axiDIO io_axiIO_awsize", false,-1, 2,0);
        tracep->declBit(c+4016,"ysyx_041728 axiDIO io_axiIO_wready", false,-1);
        tracep->declBit(c+172,"ysyx_041728 axiDIO io_axiIO_wvalid", false,-1);
        tracep->declQuad(c+173,"ysyx_041728 axiDIO io_axiIO_wdata", false,-1, 63,0);
        tracep->declBus(c+175,"ysyx_041728 axiDIO io_axiIO_wstrb", false,-1, 7,0);
        tracep->declBit(c+172,"ysyx_041728 axiDIO io_axiIO_wlast", false,-1);
        tracep->declBit(c+176,"ysyx_041728 axiDIO io_axiIO_bready", false,-1);
        tracep->declBit(c+4023,"ysyx_041728 axiDIO io_axiIO_bvalid", false,-1);
        tracep->declBit(c+4026,"ysyx_041728 axiDIO io_axiIO_arready", false,-1);
        tracep->declBit(c+177,"ysyx_041728 axiDIO io_axiIO_arvalid", false,-1);
        tracep->declBus(c+178,"ysyx_041728 axiDIO io_axiIO_araddr", false,-1, 31,0);
        tracep->declBus(c+179,"ysyx_041728 axiDIO io_axiIO_arlen", false,-1, 7,0);
        tracep->declBus(c+180,"ysyx_041728 axiDIO io_axiIO_arsize", false,-1, 2,0);
        tracep->declBus(c+181,"ysyx_041728 axiDIO io_axiIO_arburst", false,-1, 1,0);
        tracep->declBit(c+182,"ysyx_041728 axiDIO io_axiIO_rready", false,-1);
        tracep->declBit(c+4034,"ysyx_041728 axiDIO io_axiIO_rvalid", false,-1);
        tracep->declQuad(c+4037,"ysyx_041728 axiDIO io_axiIO_rdata", false,-1, 63,0);
        tracep->declBit(c+4039,"ysyx_041728 axiDIO io_axiIO_rlast", false,-1);
        tracep->declBit(c+148,"ysyx_041728 axiDIO io_cache_ar_valid_o", false,-1);
        tracep->declBus(c+149,"ysyx_041728 axiDIO io_cache_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+150,"ysyx_041728 axiDIO io_cache_ar_len_o", false,-1, 7,0);
        tracep->declBit(c+4034,"ysyx_041728 axiDIO io_cache_r_valid_i", false,-1);
        tracep->declQuad(c+4037,"ysyx_041728 axiDIO io_cache_r_data_i", false,-1, 63,0);
        tracep->declBit(c+4039,"ysyx_041728 axiDIO io_cache_r_last_i", false,-1);
        tracep->declBit(c+151,"ysyx_041728 axiDIO io_cache_w_valid_o", false,-1);
        tracep->declBit(c+5,"ysyx_041728 axiDIO io_cache_w_ready_i", false,-1);
        tracep->declQuad(c+98,"ysyx_041728 axiDIO io_cache_w_data_o", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_041728 axiDIO io_cache_w_addr_o", false,-1, 31,0);
        tracep->declBus(c+103,"ysyx_041728 axiDIO io_cache_w_mask_o", false,-1, 7,0);
        tracep->declBus(c+102,"ysyx_041728 axiDIO io_cache_wsize", false,-1, 1,0);
        tracep->declBus(c+1924,"ysyx_041728 axiDIO rd_state", false,-1, 1,0);
        tracep->declBit(c+177,"ysyx_041728 axiDIO isReq", false,-1);
        tracep->declBit(c+1925,"ysyx_041728 axiDIO isData", false,-1);
        tracep->declBus(c+42,"ysyx_041728 axiDIO valid_c", false,-1, 1,0);
        tracep->declBus(c+1926,"ysyx_041728 axiDIO w_state", false,-1, 1,0);
        tracep->declBit(c+169,"ysyx_041728 axiDIO isWReq", false,-1);
        tracep->declBit(c+1927,"ysyx_041728 axiDIO isWData", false,-1);
        tracep->declBit(c+176,"ysyx_041728 axiDIO isWB", false,-1);
        tracep->declBit(c+3976,"ysyx_041728 mem clock", false,-1);
        tracep->declBit(c+1,"ysyx_041728 mem io_memIO_cen", false,-1);
        tracep->declBit(c+1,"ysyx_041728 mem io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+111,"ysyx_041728 mem io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+43,"ysyx_041728 mem cen", false,-1);
        tracep->declArray(c+4059,"ysyx_041728 mem bwen", false,-1, 127,0);
        tracep->declBit(c+43,"ysyx_041728 mem wen", false,-1);
        tracep->declArray(c+1928,"ysyx_041728 mem ramWire_0", false,-1, 127,0);
        tracep->declArray(c+1932,"ysyx_041728 mem ramWire_1", false,-1, 127,0);
        tracep->declArray(c+1936,"ysyx_041728 mem ramWire_2", false,-1, 127,0);
        tracep->declArray(c+1940,"ysyx_041728 mem ramWire_3", false,-1, 127,0);
        tracep->declArray(c+1944,"ysyx_041728 mem ramWire_4", false,-1, 127,0);
        tracep->declArray(c+1948,"ysyx_041728 mem ramWire_5", false,-1, 127,0);
        tracep->declArray(c+1952,"ysyx_041728 mem ramWire_6", false,-1, 127,0);
        tracep->declArray(c+1956,"ysyx_041728 mem ramWire_7", false,-1, 127,0);
        tracep->declArray(c+1960,"ysyx_041728 mem ramWire_8", false,-1, 127,0);
        tracep->declArray(c+1964,"ysyx_041728 mem ramWire_9", false,-1, 127,0);
        tracep->declArray(c+1968,"ysyx_041728 mem ramWire_10", false,-1, 127,0);
        tracep->declArray(c+1972,"ysyx_041728 mem ramWire_11", false,-1, 127,0);
        tracep->declArray(c+1976,"ysyx_041728 mem ramWire_12", false,-1, 127,0);
        tracep->declArray(c+1980,"ysyx_041728 mem ramWire_13", false,-1, 127,0);
        tracep->declArray(c+1984,"ysyx_041728 mem ramWire_14", false,-1, 127,0);
        tracep->declArray(c+1988,"ysyx_041728 mem ramWire_15", false,-1, 127,0);
        tracep->declArray(c+1992,"ysyx_041728 mem ramWire_16", false,-1, 127,0);
        tracep->declArray(c+1996,"ysyx_041728 mem ramWire_17", false,-1, 127,0);
        tracep->declArray(c+2000,"ysyx_041728 mem ramWire_18", false,-1, 127,0);
        tracep->declArray(c+2004,"ysyx_041728 mem ramWire_19", false,-1, 127,0);
        tracep->declArray(c+2008,"ysyx_041728 mem ramWire_20", false,-1, 127,0);
        tracep->declArray(c+2012,"ysyx_041728 mem ramWire_21", false,-1, 127,0);
        tracep->declArray(c+2016,"ysyx_041728 mem ramWire_22", false,-1, 127,0);
        tracep->declArray(c+2020,"ysyx_041728 mem ramWire_23", false,-1, 127,0);
        tracep->declArray(c+2024,"ysyx_041728 mem ramWire_24", false,-1, 127,0);
        tracep->declArray(c+2028,"ysyx_041728 mem ramWire_25", false,-1, 127,0);
        tracep->declArray(c+2032,"ysyx_041728 mem ramWire_26", false,-1, 127,0);
        tracep->declArray(c+2036,"ysyx_041728 mem ramWire_27", false,-1, 127,0);
        tracep->declArray(c+2040,"ysyx_041728 mem ramWire_28", false,-1, 127,0);
        tracep->declArray(c+2044,"ysyx_041728 mem ramWire_29", false,-1, 127,0);
        tracep->declArray(c+2048,"ysyx_041728 mem ramWire_30", false,-1, 127,0);
        tracep->declArray(c+2052,"ysyx_041728 mem ramWire_31", false,-1, 127,0);
        tracep->declArray(c+2056,"ysyx_041728 mem ramWire_32", false,-1, 127,0);
        tracep->declArray(c+2060,"ysyx_041728 mem ramWire_33", false,-1, 127,0);
        tracep->declArray(c+2064,"ysyx_041728 mem ramWire_34", false,-1, 127,0);
        tracep->declArray(c+2068,"ysyx_041728 mem ramWire_35", false,-1, 127,0);
        tracep->declArray(c+2072,"ysyx_041728 mem ramWire_36", false,-1, 127,0);
        tracep->declArray(c+2076,"ysyx_041728 mem ramWire_37", false,-1, 127,0);
        tracep->declArray(c+2080,"ysyx_041728 mem ramWire_38", false,-1, 127,0);
        tracep->declArray(c+2084,"ysyx_041728 mem ramWire_39", false,-1, 127,0);
        tracep->declArray(c+2088,"ysyx_041728 mem ramWire_40", false,-1, 127,0);
        tracep->declArray(c+2092,"ysyx_041728 mem ramWire_41", false,-1, 127,0);
        tracep->declArray(c+2096,"ysyx_041728 mem ramWire_42", false,-1, 127,0);
        tracep->declArray(c+2100,"ysyx_041728 mem ramWire_43", false,-1, 127,0);
        tracep->declArray(c+2104,"ysyx_041728 mem ramWire_44", false,-1, 127,0);
        tracep->declArray(c+2108,"ysyx_041728 mem ramWire_45", false,-1, 127,0);
        tracep->declArray(c+2112,"ysyx_041728 mem ramWire_46", false,-1, 127,0);
        tracep->declArray(c+2116,"ysyx_041728 mem ramWire_47", false,-1, 127,0);
        tracep->declArray(c+2120,"ysyx_041728 mem ramWire_48", false,-1, 127,0);
        tracep->declArray(c+2124,"ysyx_041728 mem ramWire_49", false,-1, 127,0);
        tracep->declArray(c+2128,"ysyx_041728 mem ramWire_50", false,-1, 127,0);
        tracep->declArray(c+2132,"ysyx_041728 mem ramWire_51", false,-1, 127,0);
        tracep->declArray(c+2136,"ysyx_041728 mem ramWire_52", false,-1, 127,0);
        tracep->declArray(c+2140,"ysyx_041728 mem ramWire_53", false,-1, 127,0);
        tracep->declArray(c+2144,"ysyx_041728 mem ramWire_54", false,-1, 127,0);
        tracep->declArray(c+2148,"ysyx_041728 mem ramWire_55", false,-1, 127,0);
        tracep->declArray(c+2152,"ysyx_041728 mem ramWire_56", false,-1, 127,0);
        tracep->declArray(c+2156,"ysyx_041728 mem ramWire_57", false,-1, 127,0);
        tracep->declArray(c+2160,"ysyx_041728 mem ramWire_58", false,-1, 127,0);
        tracep->declArray(c+2164,"ysyx_041728 mem ramWire_59", false,-1, 127,0);
        tracep->declArray(c+2168,"ysyx_041728 mem ramWire_60", false,-1, 127,0);
        tracep->declArray(c+2172,"ysyx_041728 mem ramWire_61", false,-1, 127,0);
        tracep->declArray(c+2176,"ysyx_041728 mem ramWire_62", false,-1, 127,0);
        tracep->declArray(c+2180,"ysyx_041728 mem ramWire_63", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_1 clock", false,-1);
        tracep->declBit(c+66,"ysyx_041728 mem_1 io_memIO_cen", false,-1);
        tracep->declBit(c+67,"ysyx_041728 mem_1 io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_1 io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_1 io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+6,"ysyx_041728 mem_1 io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+153,"ysyx_041728 mem_1 io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+82,"ysyx_041728 mem_1 cen", false,-1);
        tracep->declArray(c+44,"ysyx_041728 mem_1 bwen", false,-1, 127,0);
        tracep->declBit(c+83,"ysyx_041728 mem_1 wen", false,-1);
        tracep->declArray(c+2184,"ysyx_041728 mem_1 ramWire_0", false,-1, 127,0);
        tracep->declArray(c+2188,"ysyx_041728 mem_1 ramWire_1", false,-1, 127,0);
        tracep->declArray(c+2192,"ysyx_041728 mem_1 ramWire_2", false,-1, 127,0);
        tracep->declArray(c+2196,"ysyx_041728 mem_1 ramWire_3", false,-1, 127,0);
        tracep->declArray(c+2200,"ysyx_041728 mem_1 ramWire_4", false,-1, 127,0);
        tracep->declArray(c+2204,"ysyx_041728 mem_1 ramWire_5", false,-1, 127,0);
        tracep->declArray(c+2208,"ysyx_041728 mem_1 ramWire_6", false,-1, 127,0);
        tracep->declArray(c+2212,"ysyx_041728 mem_1 ramWire_7", false,-1, 127,0);
        tracep->declArray(c+2216,"ysyx_041728 mem_1 ramWire_8", false,-1, 127,0);
        tracep->declArray(c+2220,"ysyx_041728 mem_1 ramWire_9", false,-1, 127,0);
        tracep->declArray(c+2224,"ysyx_041728 mem_1 ramWire_10", false,-1, 127,0);
        tracep->declArray(c+2228,"ysyx_041728 mem_1 ramWire_11", false,-1, 127,0);
        tracep->declArray(c+2232,"ysyx_041728 mem_1 ramWire_12", false,-1, 127,0);
        tracep->declArray(c+2236,"ysyx_041728 mem_1 ramWire_13", false,-1, 127,0);
        tracep->declArray(c+2240,"ysyx_041728 mem_1 ramWire_14", false,-1, 127,0);
        tracep->declArray(c+2244,"ysyx_041728 mem_1 ramWire_15", false,-1, 127,0);
        tracep->declArray(c+2248,"ysyx_041728 mem_1 ramWire_16", false,-1, 127,0);
        tracep->declArray(c+2252,"ysyx_041728 mem_1 ramWire_17", false,-1, 127,0);
        tracep->declArray(c+2256,"ysyx_041728 mem_1 ramWire_18", false,-1, 127,0);
        tracep->declArray(c+2260,"ysyx_041728 mem_1 ramWire_19", false,-1, 127,0);
        tracep->declArray(c+2264,"ysyx_041728 mem_1 ramWire_20", false,-1, 127,0);
        tracep->declArray(c+2268,"ysyx_041728 mem_1 ramWire_21", false,-1, 127,0);
        tracep->declArray(c+2272,"ysyx_041728 mem_1 ramWire_22", false,-1, 127,0);
        tracep->declArray(c+2276,"ysyx_041728 mem_1 ramWire_23", false,-1, 127,0);
        tracep->declArray(c+2280,"ysyx_041728 mem_1 ramWire_24", false,-1, 127,0);
        tracep->declArray(c+2284,"ysyx_041728 mem_1 ramWire_25", false,-1, 127,0);
        tracep->declArray(c+2288,"ysyx_041728 mem_1 ramWire_26", false,-1, 127,0);
        tracep->declArray(c+2292,"ysyx_041728 mem_1 ramWire_27", false,-1, 127,0);
        tracep->declArray(c+2296,"ysyx_041728 mem_1 ramWire_28", false,-1, 127,0);
        tracep->declArray(c+2300,"ysyx_041728 mem_1 ramWire_29", false,-1, 127,0);
        tracep->declArray(c+2304,"ysyx_041728 mem_1 ramWire_30", false,-1, 127,0);
        tracep->declArray(c+2308,"ysyx_041728 mem_1 ramWire_31", false,-1, 127,0);
        tracep->declArray(c+2312,"ysyx_041728 mem_1 ramWire_32", false,-1, 127,0);
        tracep->declArray(c+2316,"ysyx_041728 mem_1 ramWire_33", false,-1, 127,0);
        tracep->declArray(c+2320,"ysyx_041728 mem_1 ramWire_34", false,-1, 127,0);
        tracep->declArray(c+2324,"ysyx_041728 mem_1 ramWire_35", false,-1, 127,0);
        tracep->declArray(c+2328,"ysyx_041728 mem_1 ramWire_36", false,-1, 127,0);
        tracep->declArray(c+2332,"ysyx_041728 mem_1 ramWire_37", false,-1, 127,0);
        tracep->declArray(c+2336,"ysyx_041728 mem_1 ramWire_38", false,-1, 127,0);
        tracep->declArray(c+2340,"ysyx_041728 mem_1 ramWire_39", false,-1, 127,0);
        tracep->declArray(c+2344,"ysyx_041728 mem_1 ramWire_40", false,-1, 127,0);
        tracep->declArray(c+2348,"ysyx_041728 mem_1 ramWire_41", false,-1, 127,0);
        tracep->declArray(c+2352,"ysyx_041728 mem_1 ramWire_42", false,-1, 127,0);
        tracep->declArray(c+2356,"ysyx_041728 mem_1 ramWire_43", false,-1, 127,0);
        tracep->declArray(c+2360,"ysyx_041728 mem_1 ramWire_44", false,-1, 127,0);
        tracep->declArray(c+2364,"ysyx_041728 mem_1 ramWire_45", false,-1, 127,0);
        tracep->declArray(c+2368,"ysyx_041728 mem_1 ramWire_46", false,-1, 127,0);
        tracep->declArray(c+2372,"ysyx_041728 mem_1 ramWire_47", false,-1, 127,0);
        tracep->declArray(c+2376,"ysyx_041728 mem_1 ramWire_48", false,-1, 127,0);
        tracep->declArray(c+2380,"ysyx_041728 mem_1 ramWire_49", false,-1, 127,0);
        tracep->declArray(c+2384,"ysyx_041728 mem_1 ramWire_50", false,-1, 127,0);
        tracep->declArray(c+2388,"ysyx_041728 mem_1 ramWire_51", false,-1, 127,0);
        tracep->declArray(c+2392,"ysyx_041728 mem_1 ramWire_52", false,-1, 127,0);
        tracep->declArray(c+2396,"ysyx_041728 mem_1 ramWire_53", false,-1, 127,0);
        tracep->declArray(c+2400,"ysyx_041728 mem_1 ramWire_54", false,-1, 127,0);
        tracep->declArray(c+2404,"ysyx_041728 mem_1 ramWire_55", false,-1, 127,0);
        tracep->declArray(c+2408,"ysyx_041728 mem_1 ramWire_56", false,-1, 127,0);
        tracep->declArray(c+2412,"ysyx_041728 mem_1 ramWire_57", false,-1, 127,0);
        tracep->declArray(c+2416,"ysyx_041728 mem_1 ramWire_58", false,-1, 127,0);
        tracep->declArray(c+2420,"ysyx_041728 mem_1 ramWire_59", false,-1, 127,0);
        tracep->declArray(c+2424,"ysyx_041728 mem_1 ramWire_60", false,-1, 127,0);
        tracep->declArray(c+2428,"ysyx_041728 mem_1 ramWire_61", false,-1, 127,0);
        tracep->declArray(c+2432,"ysyx_041728 mem_1 ramWire_62", false,-1, 127,0);
        tracep->declArray(c+2436,"ysyx_041728 mem_1 ramWire_63", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_2 clock", false,-1);
        tracep->declBit(c+2,"ysyx_041728 mem_2 io_memIO_cen", false,-1);
        tracep->declBit(c+2,"ysyx_041728 mem_2 io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem_2 io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem_2 io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem_2 io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+115,"ysyx_041728 mem_2 io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+48,"ysyx_041728 mem_2 cen", false,-1);
        tracep->declArray(c+4059,"ysyx_041728 mem_2 bwen", false,-1, 127,0);
        tracep->declBit(c+48,"ysyx_041728 mem_2 wen", false,-1);
        tracep->declArray(c+2440,"ysyx_041728 mem_2 ramWire_0", false,-1, 127,0);
        tracep->declArray(c+2444,"ysyx_041728 mem_2 ramWire_1", false,-1, 127,0);
        tracep->declArray(c+2448,"ysyx_041728 mem_2 ramWire_2", false,-1, 127,0);
        tracep->declArray(c+2452,"ysyx_041728 mem_2 ramWire_3", false,-1, 127,0);
        tracep->declArray(c+2456,"ysyx_041728 mem_2 ramWire_4", false,-1, 127,0);
        tracep->declArray(c+2460,"ysyx_041728 mem_2 ramWire_5", false,-1, 127,0);
        tracep->declArray(c+2464,"ysyx_041728 mem_2 ramWire_6", false,-1, 127,0);
        tracep->declArray(c+2468,"ysyx_041728 mem_2 ramWire_7", false,-1, 127,0);
        tracep->declArray(c+2472,"ysyx_041728 mem_2 ramWire_8", false,-1, 127,0);
        tracep->declArray(c+2476,"ysyx_041728 mem_2 ramWire_9", false,-1, 127,0);
        tracep->declArray(c+2480,"ysyx_041728 mem_2 ramWire_10", false,-1, 127,0);
        tracep->declArray(c+2484,"ysyx_041728 mem_2 ramWire_11", false,-1, 127,0);
        tracep->declArray(c+2488,"ysyx_041728 mem_2 ramWire_12", false,-1, 127,0);
        tracep->declArray(c+2492,"ysyx_041728 mem_2 ramWire_13", false,-1, 127,0);
        tracep->declArray(c+2496,"ysyx_041728 mem_2 ramWire_14", false,-1, 127,0);
        tracep->declArray(c+2500,"ysyx_041728 mem_2 ramWire_15", false,-1, 127,0);
        tracep->declArray(c+2504,"ysyx_041728 mem_2 ramWire_16", false,-1, 127,0);
        tracep->declArray(c+2508,"ysyx_041728 mem_2 ramWire_17", false,-1, 127,0);
        tracep->declArray(c+2512,"ysyx_041728 mem_2 ramWire_18", false,-1, 127,0);
        tracep->declArray(c+2516,"ysyx_041728 mem_2 ramWire_19", false,-1, 127,0);
        tracep->declArray(c+2520,"ysyx_041728 mem_2 ramWire_20", false,-1, 127,0);
        tracep->declArray(c+2524,"ysyx_041728 mem_2 ramWire_21", false,-1, 127,0);
        tracep->declArray(c+2528,"ysyx_041728 mem_2 ramWire_22", false,-1, 127,0);
        tracep->declArray(c+2532,"ysyx_041728 mem_2 ramWire_23", false,-1, 127,0);
        tracep->declArray(c+2536,"ysyx_041728 mem_2 ramWire_24", false,-1, 127,0);
        tracep->declArray(c+2540,"ysyx_041728 mem_2 ramWire_25", false,-1, 127,0);
        tracep->declArray(c+2544,"ysyx_041728 mem_2 ramWire_26", false,-1, 127,0);
        tracep->declArray(c+2548,"ysyx_041728 mem_2 ramWire_27", false,-1, 127,0);
        tracep->declArray(c+2552,"ysyx_041728 mem_2 ramWire_28", false,-1, 127,0);
        tracep->declArray(c+2556,"ysyx_041728 mem_2 ramWire_29", false,-1, 127,0);
        tracep->declArray(c+2560,"ysyx_041728 mem_2 ramWire_30", false,-1, 127,0);
        tracep->declArray(c+2564,"ysyx_041728 mem_2 ramWire_31", false,-1, 127,0);
        tracep->declArray(c+2568,"ysyx_041728 mem_2 ramWire_32", false,-1, 127,0);
        tracep->declArray(c+2572,"ysyx_041728 mem_2 ramWire_33", false,-1, 127,0);
        tracep->declArray(c+2576,"ysyx_041728 mem_2 ramWire_34", false,-1, 127,0);
        tracep->declArray(c+2580,"ysyx_041728 mem_2 ramWire_35", false,-1, 127,0);
        tracep->declArray(c+2584,"ysyx_041728 mem_2 ramWire_36", false,-1, 127,0);
        tracep->declArray(c+2588,"ysyx_041728 mem_2 ramWire_37", false,-1, 127,0);
        tracep->declArray(c+2592,"ysyx_041728 mem_2 ramWire_38", false,-1, 127,0);
        tracep->declArray(c+2596,"ysyx_041728 mem_2 ramWire_39", false,-1, 127,0);
        tracep->declArray(c+2600,"ysyx_041728 mem_2 ramWire_40", false,-1, 127,0);
        tracep->declArray(c+2604,"ysyx_041728 mem_2 ramWire_41", false,-1, 127,0);
        tracep->declArray(c+2608,"ysyx_041728 mem_2 ramWire_42", false,-1, 127,0);
        tracep->declArray(c+2612,"ysyx_041728 mem_2 ramWire_43", false,-1, 127,0);
        tracep->declArray(c+2616,"ysyx_041728 mem_2 ramWire_44", false,-1, 127,0);
        tracep->declArray(c+2620,"ysyx_041728 mem_2 ramWire_45", false,-1, 127,0);
        tracep->declArray(c+2624,"ysyx_041728 mem_2 ramWire_46", false,-1, 127,0);
        tracep->declArray(c+2628,"ysyx_041728 mem_2 ramWire_47", false,-1, 127,0);
        tracep->declArray(c+2632,"ysyx_041728 mem_2 ramWire_48", false,-1, 127,0);
        tracep->declArray(c+2636,"ysyx_041728 mem_2 ramWire_49", false,-1, 127,0);
        tracep->declArray(c+2640,"ysyx_041728 mem_2 ramWire_50", false,-1, 127,0);
        tracep->declArray(c+2644,"ysyx_041728 mem_2 ramWire_51", false,-1, 127,0);
        tracep->declArray(c+2648,"ysyx_041728 mem_2 ramWire_52", false,-1, 127,0);
        tracep->declArray(c+2652,"ysyx_041728 mem_2 ramWire_53", false,-1, 127,0);
        tracep->declArray(c+2656,"ysyx_041728 mem_2 ramWire_54", false,-1, 127,0);
        tracep->declArray(c+2660,"ysyx_041728 mem_2 ramWire_55", false,-1, 127,0);
        tracep->declArray(c+2664,"ysyx_041728 mem_2 ramWire_56", false,-1, 127,0);
        tracep->declArray(c+2668,"ysyx_041728 mem_2 ramWire_57", false,-1, 127,0);
        tracep->declArray(c+2672,"ysyx_041728 mem_2 ramWire_58", false,-1, 127,0);
        tracep->declArray(c+2676,"ysyx_041728 mem_2 ramWire_59", false,-1, 127,0);
        tracep->declArray(c+2680,"ysyx_041728 mem_2 ramWire_60", false,-1, 127,0);
        tracep->declArray(c+2684,"ysyx_041728 mem_2 ramWire_61", false,-1, 127,0);
        tracep->declArray(c+2688,"ysyx_041728 mem_2 ramWire_62", false,-1, 127,0);
        tracep->declArray(c+2692,"ysyx_041728 mem_2 ramWire_63", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_3 clock", false,-1);
        tracep->declBit(c+72,"ysyx_041728 mem_3 io_memIO_cen", false,-1);
        tracep->declBit(c+73,"ysyx_041728 mem_3 io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_3 io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_3 io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+10,"ysyx_041728 mem_3 io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+157,"ysyx_041728 mem_3 io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+84,"ysyx_041728 mem_3 cen", false,-1);
        tracep->declArray(c+49,"ysyx_041728 mem_3 bwen", false,-1, 127,0);
        tracep->declBit(c+85,"ysyx_041728 mem_3 wen", false,-1);
        tracep->declArray(c+2696,"ysyx_041728 mem_3 ramWire_0", false,-1, 127,0);
        tracep->declArray(c+2700,"ysyx_041728 mem_3 ramWire_1", false,-1, 127,0);
        tracep->declArray(c+2704,"ysyx_041728 mem_3 ramWire_2", false,-1, 127,0);
        tracep->declArray(c+2708,"ysyx_041728 mem_3 ramWire_3", false,-1, 127,0);
        tracep->declArray(c+2712,"ysyx_041728 mem_3 ramWire_4", false,-1, 127,0);
        tracep->declArray(c+2716,"ysyx_041728 mem_3 ramWire_5", false,-1, 127,0);
        tracep->declArray(c+2720,"ysyx_041728 mem_3 ramWire_6", false,-1, 127,0);
        tracep->declArray(c+2724,"ysyx_041728 mem_3 ramWire_7", false,-1, 127,0);
        tracep->declArray(c+2728,"ysyx_041728 mem_3 ramWire_8", false,-1, 127,0);
        tracep->declArray(c+2732,"ysyx_041728 mem_3 ramWire_9", false,-1, 127,0);
        tracep->declArray(c+2736,"ysyx_041728 mem_3 ramWire_10", false,-1, 127,0);
        tracep->declArray(c+2740,"ysyx_041728 mem_3 ramWire_11", false,-1, 127,0);
        tracep->declArray(c+2744,"ysyx_041728 mem_3 ramWire_12", false,-1, 127,0);
        tracep->declArray(c+2748,"ysyx_041728 mem_3 ramWire_13", false,-1, 127,0);
        tracep->declArray(c+2752,"ysyx_041728 mem_3 ramWire_14", false,-1, 127,0);
        tracep->declArray(c+2756,"ysyx_041728 mem_3 ramWire_15", false,-1, 127,0);
        tracep->declArray(c+2760,"ysyx_041728 mem_3 ramWire_16", false,-1, 127,0);
        tracep->declArray(c+2764,"ysyx_041728 mem_3 ramWire_17", false,-1, 127,0);
        tracep->declArray(c+2768,"ysyx_041728 mem_3 ramWire_18", false,-1, 127,0);
        tracep->declArray(c+2772,"ysyx_041728 mem_3 ramWire_19", false,-1, 127,0);
        tracep->declArray(c+2776,"ysyx_041728 mem_3 ramWire_20", false,-1, 127,0);
        tracep->declArray(c+2780,"ysyx_041728 mem_3 ramWire_21", false,-1, 127,0);
        tracep->declArray(c+2784,"ysyx_041728 mem_3 ramWire_22", false,-1, 127,0);
        tracep->declArray(c+2788,"ysyx_041728 mem_3 ramWire_23", false,-1, 127,0);
        tracep->declArray(c+2792,"ysyx_041728 mem_3 ramWire_24", false,-1, 127,0);
        tracep->declArray(c+2796,"ysyx_041728 mem_3 ramWire_25", false,-1, 127,0);
        tracep->declArray(c+2800,"ysyx_041728 mem_3 ramWire_26", false,-1, 127,0);
        tracep->declArray(c+2804,"ysyx_041728 mem_3 ramWire_27", false,-1, 127,0);
        tracep->declArray(c+2808,"ysyx_041728 mem_3 ramWire_28", false,-1, 127,0);
        tracep->declArray(c+2812,"ysyx_041728 mem_3 ramWire_29", false,-1, 127,0);
        tracep->declArray(c+2816,"ysyx_041728 mem_3 ramWire_30", false,-1, 127,0);
        tracep->declArray(c+2820,"ysyx_041728 mem_3 ramWire_31", false,-1, 127,0);
        tracep->declArray(c+2824,"ysyx_041728 mem_3 ramWire_32", false,-1, 127,0);
        tracep->declArray(c+2828,"ysyx_041728 mem_3 ramWire_33", false,-1, 127,0);
        tracep->declArray(c+2832,"ysyx_041728 mem_3 ramWire_34", false,-1, 127,0);
        tracep->declArray(c+2836,"ysyx_041728 mem_3 ramWire_35", false,-1, 127,0);
        tracep->declArray(c+2840,"ysyx_041728 mem_3 ramWire_36", false,-1, 127,0);
        tracep->declArray(c+2844,"ysyx_041728 mem_3 ramWire_37", false,-1, 127,0);
        tracep->declArray(c+2848,"ysyx_041728 mem_3 ramWire_38", false,-1, 127,0);
        tracep->declArray(c+2852,"ysyx_041728 mem_3 ramWire_39", false,-1, 127,0);
        tracep->declArray(c+2856,"ysyx_041728 mem_3 ramWire_40", false,-1, 127,0);
        tracep->declArray(c+2860,"ysyx_041728 mem_3 ramWire_41", false,-1, 127,0);
        tracep->declArray(c+2864,"ysyx_041728 mem_3 ramWire_42", false,-1, 127,0);
        tracep->declArray(c+2868,"ysyx_041728 mem_3 ramWire_43", false,-1, 127,0);
        tracep->declArray(c+2872,"ysyx_041728 mem_3 ramWire_44", false,-1, 127,0);
        tracep->declArray(c+2876,"ysyx_041728 mem_3 ramWire_45", false,-1, 127,0);
        tracep->declArray(c+2880,"ysyx_041728 mem_3 ramWire_46", false,-1, 127,0);
        tracep->declArray(c+2884,"ysyx_041728 mem_3 ramWire_47", false,-1, 127,0);
        tracep->declArray(c+2888,"ysyx_041728 mem_3 ramWire_48", false,-1, 127,0);
        tracep->declArray(c+2892,"ysyx_041728 mem_3 ramWire_49", false,-1, 127,0);
        tracep->declArray(c+2896,"ysyx_041728 mem_3 ramWire_50", false,-1, 127,0);
        tracep->declArray(c+2900,"ysyx_041728 mem_3 ramWire_51", false,-1, 127,0);
        tracep->declArray(c+2904,"ysyx_041728 mem_3 ramWire_52", false,-1, 127,0);
        tracep->declArray(c+2908,"ysyx_041728 mem_3 ramWire_53", false,-1, 127,0);
        tracep->declArray(c+2912,"ysyx_041728 mem_3 ramWire_54", false,-1, 127,0);
        tracep->declArray(c+2916,"ysyx_041728 mem_3 ramWire_55", false,-1, 127,0);
        tracep->declArray(c+2920,"ysyx_041728 mem_3 ramWire_56", false,-1, 127,0);
        tracep->declArray(c+2924,"ysyx_041728 mem_3 ramWire_57", false,-1, 127,0);
        tracep->declArray(c+2928,"ysyx_041728 mem_3 ramWire_58", false,-1, 127,0);
        tracep->declArray(c+2932,"ysyx_041728 mem_3 ramWire_59", false,-1, 127,0);
        tracep->declArray(c+2936,"ysyx_041728 mem_3 ramWire_60", false,-1, 127,0);
        tracep->declArray(c+2940,"ysyx_041728 mem_3 ramWire_61", false,-1, 127,0);
        tracep->declArray(c+2944,"ysyx_041728 mem_3 ramWire_62", false,-1, 127,0);
        tracep->declArray(c+2948,"ysyx_041728 mem_3 ramWire_63", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_4 clock", false,-1);
        tracep->declBit(c+3,"ysyx_041728 mem_4 io_memIO_cen", false,-1);
        tracep->declBit(c+3,"ysyx_041728 mem_4 io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem_4 io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem_4 io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem_4 io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+119,"ysyx_041728 mem_4 io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+53,"ysyx_041728 mem_4 cen", false,-1);
        tracep->declArray(c+4059,"ysyx_041728 mem_4 bwen", false,-1, 127,0);
        tracep->declBit(c+53,"ysyx_041728 mem_4 wen", false,-1);
        tracep->declArray(c+2952,"ysyx_041728 mem_4 ramWire_0", false,-1, 127,0);
        tracep->declArray(c+2956,"ysyx_041728 mem_4 ramWire_1", false,-1, 127,0);
        tracep->declArray(c+2960,"ysyx_041728 mem_4 ramWire_2", false,-1, 127,0);
        tracep->declArray(c+2964,"ysyx_041728 mem_4 ramWire_3", false,-1, 127,0);
        tracep->declArray(c+2968,"ysyx_041728 mem_4 ramWire_4", false,-1, 127,0);
        tracep->declArray(c+2972,"ysyx_041728 mem_4 ramWire_5", false,-1, 127,0);
        tracep->declArray(c+2976,"ysyx_041728 mem_4 ramWire_6", false,-1, 127,0);
        tracep->declArray(c+2980,"ysyx_041728 mem_4 ramWire_7", false,-1, 127,0);
        tracep->declArray(c+2984,"ysyx_041728 mem_4 ramWire_8", false,-1, 127,0);
        tracep->declArray(c+2988,"ysyx_041728 mem_4 ramWire_9", false,-1, 127,0);
        tracep->declArray(c+2992,"ysyx_041728 mem_4 ramWire_10", false,-1, 127,0);
        tracep->declArray(c+2996,"ysyx_041728 mem_4 ramWire_11", false,-1, 127,0);
        tracep->declArray(c+3000,"ysyx_041728 mem_4 ramWire_12", false,-1, 127,0);
        tracep->declArray(c+3004,"ysyx_041728 mem_4 ramWire_13", false,-1, 127,0);
        tracep->declArray(c+3008,"ysyx_041728 mem_4 ramWire_14", false,-1, 127,0);
        tracep->declArray(c+3012,"ysyx_041728 mem_4 ramWire_15", false,-1, 127,0);
        tracep->declArray(c+3016,"ysyx_041728 mem_4 ramWire_16", false,-1, 127,0);
        tracep->declArray(c+3020,"ysyx_041728 mem_4 ramWire_17", false,-1, 127,0);
        tracep->declArray(c+3024,"ysyx_041728 mem_4 ramWire_18", false,-1, 127,0);
        tracep->declArray(c+3028,"ysyx_041728 mem_4 ramWire_19", false,-1, 127,0);
        tracep->declArray(c+3032,"ysyx_041728 mem_4 ramWire_20", false,-1, 127,0);
        tracep->declArray(c+3036,"ysyx_041728 mem_4 ramWire_21", false,-1, 127,0);
        tracep->declArray(c+3040,"ysyx_041728 mem_4 ramWire_22", false,-1, 127,0);
        tracep->declArray(c+3044,"ysyx_041728 mem_4 ramWire_23", false,-1, 127,0);
        tracep->declArray(c+3048,"ysyx_041728 mem_4 ramWire_24", false,-1, 127,0);
        tracep->declArray(c+3052,"ysyx_041728 mem_4 ramWire_25", false,-1, 127,0);
        tracep->declArray(c+3056,"ysyx_041728 mem_4 ramWire_26", false,-1, 127,0);
        tracep->declArray(c+3060,"ysyx_041728 mem_4 ramWire_27", false,-1, 127,0);
        tracep->declArray(c+3064,"ysyx_041728 mem_4 ramWire_28", false,-1, 127,0);
        tracep->declArray(c+3068,"ysyx_041728 mem_4 ramWire_29", false,-1, 127,0);
        tracep->declArray(c+3072,"ysyx_041728 mem_4 ramWire_30", false,-1, 127,0);
        tracep->declArray(c+3076,"ysyx_041728 mem_4 ramWire_31", false,-1, 127,0);
        tracep->declArray(c+3080,"ysyx_041728 mem_4 ramWire_32", false,-1, 127,0);
        tracep->declArray(c+3084,"ysyx_041728 mem_4 ramWire_33", false,-1, 127,0);
        tracep->declArray(c+3088,"ysyx_041728 mem_4 ramWire_34", false,-1, 127,0);
        tracep->declArray(c+3092,"ysyx_041728 mem_4 ramWire_35", false,-1, 127,0);
        tracep->declArray(c+3096,"ysyx_041728 mem_4 ramWire_36", false,-1, 127,0);
        tracep->declArray(c+3100,"ysyx_041728 mem_4 ramWire_37", false,-1, 127,0);
        tracep->declArray(c+3104,"ysyx_041728 mem_4 ramWire_38", false,-1, 127,0);
        tracep->declArray(c+3108,"ysyx_041728 mem_4 ramWire_39", false,-1, 127,0);
        tracep->declArray(c+3112,"ysyx_041728 mem_4 ramWire_40", false,-1, 127,0);
        tracep->declArray(c+3116,"ysyx_041728 mem_4 ramWire_41", false,-1, 127,0);
        tracep->declArray(c+3120,"ysyx_041728 mem_4 ramWire_42", false,-1, 127,0);
        tracep->declArray(c+3124,"ysyx_041728 mem_4 ramWire_43", false,-1, 127,0);
        tracep->declArray(c+3128,"ysyx_041728 mem_4 ramWire_44", false,-1, 127,0);
        tracep->declArray(c+3132,"ysyx_041728 mem_4 ramWire_45", false,-1, 127,0);
        tracep->declArray(c+3136,"ysyx_041728 mem_4 ramWire_46", false,-1, 127,0);
        tracep->declArray(c+3140,"ysyx_041728 mem_4 ramWire_47", false,-1, 127,0);
        tracep->declArray(c+3144,"ysyx_041728 mem_4 ramWire_48", false,-1, 127,0);
        tracep->declArray(c+3148,"ysyx_041728 mem_4 ramWire_49", false,-1, 127,0);
        tracep->declArray(c+3152,"ysyx_041728 mem_4 ramWire_50", false,-1, 127,0);
        tracep->declArray(c+3156,"ysyx_041728 mem_4 ramWire_51", false,-1, 127,0);
        tracep->declArray(c+3160,"ysyx_041728 mem_4 ramWire_52", false,-1, 127,0);
        tracep->declArray(c+3164,"ysyx_041728 mem_4 ramWire_53", false,-1, 127,0);
        tracep->declArray(c+3168,"ysyx_041728 mem_4 ramWire_54", false,-1, 127,0);
        tracep->declArray(c+3172,"ysyx_041728 mem_4 ramWire_55", false,-1, 127,0);
        tracep->declArray(c+3176,"ysyx_041728 mem_4 ramWire_56", false,-1, 127,0);
        tracep->declArray(c+3180,"ysyx_041728 mem_4 ramWire_57", false,-1, 127,0);
        tracep->declArray(c+3184,"ysyx_041728 mem_4 ramWire_58", false,-1, 127,0);
        tracep->declArray(c+3188,"ysyx_041728 mem_4 ramWire_59", false,-1, 127,0);
        tracep->declArray(c+3192,"ysyx_041728 mem_4 ramWire_60", false,-1, 127,0);
        tracep->declArray(c+3196,"ysyx_041728 mem_4 ramWire_61", false,-1, 127,0);
        tracep->declArray(c+3200,"ysyx_041728 mem_4 ramWire_62", false,-1, 127,0);
        tracep->declArray(c+3204,"ysyx_041728 mem_4 ramWire_63", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_5 clock", false,-1);
        tracep->declBit(c+74,"ysyx_041728 mem_5 io_memIO_cen", false,-1);
        tracep->declBit(c+75,"ysyx_041728 mem_5 io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_5 io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_5 io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+14,"ysyx_041728 mem_5 io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+161,"ysyx_041728 mem_5 io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+86,"ysyx_041728 mem_5 cen", false,-1);
        tracep->declArray(c+54,"ysyx_041728 mem_5 bwen", false,-1, 127,0);
        tracep->declBit(c+87,"ysyx_041728 mem_5 wen", false,-1);
        tracep->declArray(c+3208,"ysyx_041728 mem_5 ramWire_0", false,-1, 127,0);
        tracep->declArray(c+3212,"ysyx_041728 mem_5 ramWire_1", false,-1, 127,0);
        tracep->declArray(c+3216,"ysyx_041728 mem_5 ramWire_2", false,-1, 127,0);
        tracep->declArray(c+3220,"ysyx_041728 mem_5 ramWire_3", false,-1, 127,0);
        tracep->declArray(c+3224,"ysyx_041728 mem_5 ramWire_4", false,-1, 127,0);
        tracep->declArray(c+3228,"ysyx_041728 mem_5 ramWire_5", false,-1, 127,0);
        tracep->declArray(c+3232,"ysyx_041728 mem_5 ramWire_6", false,-1, 127,0);
        tracep->declArray(c+3236,"ysyx_041728 mem_5 ramWire_7", false,-1, 127,0);
        tracep->declArray(c+3240,"ysyx_041728 mem_5 ramWire_8", false,-1, 127,0);
        tracep->declArray(c+3244,"ysyx_041728 mem_5 ramWire_9", false,-1, 127,0);
        tracep->declArray(c+3248,"ysyx_041728 mem_5 ramWire_10", false,-1, 127,0);
        tracep->declArray(c+3252,"ysyx_041728 mem_5 ramWire_11", false,-1, 127,0);
        tracep->declArray(c+3256,"ysyx_041728 mem_5 ramWire_12", false,-1, 127,0);
        tracep->declArray(c+3260,"ysyx_041728 mem_5 ramWire_13", false,-1, 127,0);
        tracep->declArray(c+3264,"ysyx_041728 mem_5 ramWire_14", false,-1, 127,0);
        tracep->declArray(c+3268,"ysyx_041728 mem_5 ramWire_15", false,-1, 127,0);
        tracep->declArray(c+3272,"ysyx_041728 mem_5 ramWire_16", false,-1, 127,0);
        tracep->declArray(c+3276,"ysyx_041728 mem_5 ramWire_17", false,-1, 127,0);
        tracep->declArray(c+3280,"ysyx_041728 mem_5 ramWire_18", false,-1, 127,0);
        tracep->declArray(c+3284,"ysyx_041728 mem_5 ramWire_19", false,-1, 127,0);
        tracep->declArray(c+3288,"ysyx_041728 mem_5 ramWire_20", false,-1, 127,0);
        tracep->declArray(c+3292,"ysyx_041728 mem_5 ramWire_21", false,-1, 127,0);
        tracep->declArray(c+3296,"ysyx_041728 mem_5 ramWire_22", false,-1, 127,0);
        tracep->declArray(c+3300,"ysyx_041728 mem_5 ramWire_23", false,-1, 127,0);
        tracep->declArray(c+3304,"ysyx_041728 mem_5 ramWire_24", false,-1, 127,0);
        tracep->declArray(c+3308,"ysyx_041728 mem_5 ramWire_25", false,-1, 127,0);
        tracep->declArray(c+3312,"ysyx_041728 mem_5 ramWire_26", false,-1, 127,0);
        tracep->declArray(c+3316,"ysyx_041728 mem_5 ramWire_27", false,-1, 127,0);
        tracep->declArray(c+3320,"ysyx_041728 mem_5 ramWire_28", false,-1, 127,0);
        tracep->declArray(c+3324,"ysyx_041728 mem_5 ramWire_29", false,-1, 127,0);
        tracep->declArray(c+3328,"ysyx_041728 mem_5 ramWire_30", false,-1, 127,0);
        tracep->declArray(c+3332,"ysyx_041728 mem_5 ramWire_31", false,-1, 127,0);
        tracep->declArray(c+3336,"ysyx_041728 mem_5 ramWire_32", false,-1, 127,0);
        tracep->declArray(c+3340,"ysyx_041728 mem_5 ramWire_33", false,-1, 127,0);
        tracep->declArray(c+3344,"ysyx_041728 mem_5 ramWire_34", false,-1, 127,0);
        tracep->declArray(c+3348,"ysyx_041728 mem_5 ramWire_35", false,-1, 127,0);
        tracep->declArray(c+3352,"ysyx_041728 mem_5 ramWire_36", false,-1, 127,0);
        tracep->declArray(c+3356,"ysyx_041728 mem_5 ramWire_37", false,-1, 127,0);
        tracep->declArray(c+3360,"ysyx_041728 mem_5 ramWire_38", false,-1, 127,0);
        tracep->declArray(c+3364,"ysyx_041728 mem_5 ramWire_39", false,-1, 127,0);
        tracep->declArray(c+3368,"ysyx_041728 mem_5 ramWire_40", false,-1, 127,0);
        tracep->declArray(c+3372,"ysyx_041728 mem_5 ramWire_41", false,-1, 127,0);
        tracep->declArray(c+3376,"ysyx_041728 mem_5 ramWire_42", false,-1, 127,0);
        tracep->declArray(c+3380,"ysyx_041728 mem_5 ramWire_43", false,-1, 127,0);
        tracep->declArray(c+3384,"ysyx_041728 mem_5 ramWire_44", false,-1, 127,0);
        tracep->declArray(c+3388,"ysyx_041728 mem_5 ramWire_45", false,-1, 127,0);
        tracep->declArray(c+3392,"ysyx_041728 mem_5 ramWire_46", false,-1, 127,0);
        tracep->declArray(c+3396,"ysyx_041728 mem_5 ramWire_47", false,-1, 127,0);
        tracep->declArray(c+3400,"ysyx_041728 mem_5 ramWire_48", false,-1, 127,0);
        tracep->declArray(c+3404,"ysyx_041728 mem_5 ramWire_49", false,-1, 127,0);
        tracep->declArray(c+3408,"ysyx_041728 mem_5 ramWire_50", false,-1, 127,0);
        tracep->declArray(c+3412,"ysyx_041728 mem_5 ramWire_51", false,-1, 127,0);
        tracep->declArray(c+3416,"ysyx_041728 mem_5 ramWire_52", false,-1, 127,0);
        tracep->declArray(c+3420,"ysyx_041728 mem_5 ramWire_53", false,-1, 127,0);
        tracep->declArray(c+3424,"ysyx_041728 mem_5 ramWire_54", false,-1, 127,0);
        tracep->declArray(c+3428,"ysyx_041728 mem_5 ramWire_55", false,-1, 127,0);
        tracep->declArray(c+3432,"ysyx_041728 mem_5 ramWire_56", false,-1, 127,0);
        tracep->declArray(c+3436,"ysyx_041728 mem_5 ramWire_57", false,-1, 127,0);
        tracep->declArray(c+3440,"ysyx_041728 mem_5 ramWire_58", false,-1, 127,0);
        tracep->declArray(c+3444,"ysyx_041728 mem_5 ramWire_59", false,-1, 127,0);
        tracep->declArray(c+3448,"ysyx_041728 mem_5 ramWire_60", false,-1, 127,0);
        tracep->declArray(c+3452,"ysyx_041728 mem_5 ramWire_61", false,-1, 127,0);
        tracep->declArray(c+3456,"ysyx_041728 mem_5 ramWire_62", false,-1, 127,0);
        tracep->declArray(c+3460,"ysyx_041728 mem_5 ramWire_63", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_6 clock", false,-1);
        tracep->declBit(c+4,"ysyx_041728 mem_6 io_memIO_cen", false,-1);
        tracep->declBit(c+4,"ysyx_041728 mem_6 io_memIO_wen", false,-1);
        tracep->declArray(c+4050,"ysyx_041728 mem_6 io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+110,"ysyx_041728 mem_6 io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+4054,"ysyx_041728 mem_6 io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+123,"ysyx_041728 mem_6 io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+58,"ysyx_041728 mem_6 cen", false,-1);
        tracep->declArray(c+4059,"ysyx_041728 mem_6 bwen", false,-1, 127,0);
        tracep->declBit(c+58,"ysyx_041728 mem_6 wen", false,-1);
        tracep->declArray(c+3464,"ysyx_041728 mem_6 ramWire_0", false,-1, 127,0);
        tracep->declArray(c+3468,"ysyx_041728 mem_6 ramWire_1", false,-1, 127,0);
        tracep->declArray(c+3472,"ysyx_041728 mem_6 ramWire_2", false,-1, 127,0);
        tracep->declArray(c+3476,"ysyx_041728 mem_6 ramWire_3", false,-1, 127,0);
        tracep->declArray(c+3480,"ysyx_041728 mem_6 ramWire_4", false,-1, 127,0);
        tracep->declArray(c+3484,"ysyx_041728 mem_6 ramWire_5", false,-1, 127,0);
        tracep->declArray(c+3488,"ysyx_041728 mem_6 ramWire_6", false,-1, 127,0);
        tracep->declArray(c+3492,"ysyx_041728 mem_6 ramWire_7", false,-1, 127,0);
        tracep->declArray(c+3496,"ysyx_041728 mem_6 ramWire_8", false,-1, 127,0);
        tracep->declArray(c+3500,"ysyx_041728 mem_6 ramWire_9", false,-1, 127,0);
        tracep->declArray(c+3504,"ysyx_041728 mem_6 ramWire_10", false,-1, 127,0);
        tracep->declArray(c+3508,"ysyx_041728 mem_6 ramWire_11", false,-1, 127,0);
        tracep->declArray(c+3512,"ysyx_041728 mem_6 ramWire_12", false,-1, 127,0);
        tracep->declArray(c+3516,"ysyx_041728 mem_6 ramWire_13", false,-1, 127,0);
        tracep->declArray(c+3520,"ysyx_041728 mem_6 ramWire_14", false,-1, 127,0);
        tracep->declArray(c+3524,"ysyx_041728 mem_6 ramWire_15", false,-1, 127,0);
        tracep->declArray(c+3528,"ysyx_041728 mem_6 ramWire_16", false,-1, 127,0);
        tracep->declArray(c+3532,"ysyx_041728 mem_6 ramWire_17", false,-1, 127,0);
        tracep->declArray(c+3536,"ysyx_041728 mem_6 ramWire_18", false,-1, 127,0);
        tracep->declArray(c+3540,"ysyx_041728 mem_6 ramWire_19", false,-1, 127,0);
        tracep->declArray(c+3544,"ysyx_041728 mem_6 ramWire_20", false,-1, 127,0);
        tracep->declArray(c+3548,"ysyx_041728 mem_6 ramWire_21", false,-1, 127,0);
        tracep->declArray(c+3552,"ysyx_041728 mem_6 ramWire_22", false,-1, 127,0);
        tracep->declArray(c+3556,"ysyx_041728 mem_6 ramWire_23", false,-1, 127,0);
        tracep->declArray(c+3560,"ysyx_041728 mem_6 ramWire_24", false,-1, 127,0);
        tracep->declArray(c+3564,"ysyx_041728 mem_6 ramWire_25", false,-1, 127,0);
        tracep->declArray(c+3568,"ysyx_041728 mem_6 ramWire_26", false,-1, 127,0);
        tracep->declArray(c+3572,"ysyx_041728 mem_6 ramWire_27", false,-1, 127,0);
        tracep->declArray(c+3576,"ysyx_041728 mem_6 ramWire_28", false,-1, 127,0);
        tracep->declArray(c+3580,"ysyx_041728 mem_6 ramWire_29", false,-1, 127,0);
        tracep->declArray(c+3584,"ysyx_041728 mem_6 ramWire_30", false,-1, 127,0);
        tracep->declArray(c+3588,"ysyx_041728 mem_6 ramWire_31", false,-1, 127,0);
        tracep->declArray(c+3592,"ysyx_041728 mem_6 ramWire_32", false,-1, 127,0);
        tracep->declArray(c+3596,"ysyx_041728 mem_6 ramWire_33", false,-1, 127,0);
        tracep->declArray(c+3600,"ysyx_041728 mem_6 ramWire_34", false,-1, 127,0);
        tracep->declArray(c+3604,"ysyx_041728 mem_6 ramWire_35", false,-1, 127,0);
        tracep->declArray(c+3608,"ysyx_041728 mem_6 ramWire_36", false,-1, 127,0);
        tracep->declArray(c+3612,"ysyx_041728 mem_6 ramWire_37", false,-1, 127,0);
        tracep->declArray(c+3616,"ysyx_041728 mem_6 ramWire_38", false,-1, 127,0);
        tracep->declArray(c+3620,"ysyx_041728 mem_6 ramWire_39", false,-1, 127,0);
        tracep->declArray(c+3624,"ysyx_041728 mem_6 ramWire_40", false,-1, 127,0);
        tracep->declArray(c+3628,"ysyx_041728 mem_6 ramWire_41", false,-1, 127,0);
        tracep->declArray(c+3632,"ysyx_041728 mem_6 ramWire_42", false,-1, 127,0);
        tracep->declArray(c+3636,"ysyx_041728 mem_6 ramWire_43", false,-1, 127,0);
        tracep->declArray(c+3640,"ysyx_041728 mem_6 ramWire_44", false,-1, 127,0);
        tracep->declArray(c+3644,"ysyx_041728 mem_6 ramWire_45", false,-1, 127,0);
        tracep->declArray(c+3648,"ysyx_041728 mem_6 ramWire_46", false,-1, 127,0);
        tracep->declArray(c+3652,"ysyx_041728 mem_6 ramWire_47", false,-1, 127,0);
        tracep->declArray(c+3656,"ysyx_041728 mem_6 ramWire_48", false,-1, 127,0);
        tracep->declArray(c+3660,"ysyx_041728 mem_6 ramWire_49", false,-1, 127,0);
        tracep->declArray(c+3664,"ysyx_041728 mem_6 ramWire_50", false,-1, 127,0);
        tracep->declArray(c+3668,"ysyx_041728 mem_6 ramWire_51", false,-1, 127,0);
        tracep->declArray(c+3672,"ysyx_041728 mem_6 ramWire_52", false,-1, 127,0);
        tracep->declArray(c+3676,"ysyx_041728 mem_6 ramWire_53", false,-1, 127,0);
        tracep->declArray(c+3680,"ysyx_041728 mem_6 ramWire_54", false,-1, 127,0);
        tracep->declArray(c+3684,"ysyx_041728 mem_6 ramWire_55", false,-1, 127,0);
        tracep->declArray(c+3688,"ysyx_041728 mem_6 ramWire_56", false,-1, 127,0);
        tracep->declArray(c+3692,"ysyx_041728 mem_6 ramWire_57", false,-1, 127,0);
        tracep->declArray(c+3696,"ysyx_041728 mem_6 ramWire_58", false,-1, 127,0);
        tracep->declArray(c+3700,"ysyx_041728 mem_6 ramWire_59", false,-1, 127,0);
        tracep->declArray(c+3704,"ysyx_041728 mem_6 ramWire_60", false,-1, 127,0);
        tracep->declArray(c+3708,"ysyx_041728 mem_6 ramWire_61", false,-1, 127,0);
        tracep->declArray(c+3712,"ysyx_041728 mem_6 ramWire_62", false,-1, 127,0);
        tracep->declArray(c+3716,"ysyx_041728 mem_6 ramWire_63", false,-1, 127,0);
        tracep->declBit(c+3976,"ysyx_041728 mem_7 clock", false,-1);
        tracep->declBit(c+76,"ysyx_041728 mem_7 io_memIO_cen", false,-1);
        tracep->declBit(c+77,"ysyx_041728 mem_7 io_memIO_wen", false,-1);
        tracep->declArray(c+68,"ysyx_041728 mem_7 io_memIO_wdata", false,-1, 127,0);
        tracep->declBus(c+152,"ysyx_041728 mem_7 io_memIO_addr", false,-1, 5,0);
        tracep->declArray(c+18,"ysyx_041728 mem_7 io_memIO_wmask", false,-1, 127,0);
        tracep->declArray(c+165,"ysyx_041728 mem_7 io_memIO_rdata", false,-1, 127,0);
        tracep->declBit(c+88,"ysyx_041728 mem_7 cen", false,-1);
        tracep->declArray(c+59,"ysyx_041728 mem_7 bwen", false,-1, 127,0);
        tracep->declBit(c+89,"ysyx_041728 mem_7 wen", false,-1);
        tracep->declArray(c+3720,"ysyx_041728 mem_7 ramWire_0", false,-1, 127,0);
        tracep->declArray(c+3724,"ysyx_041728 mem_7 ramWire_1", false,-1, 127,0);
        tracep->declArray(c+3728,"ysyx_041728 mem_7 ramWire_2", false,-1, 127,0);
        tracep->declArray(c+3732,"ysyx_041728 mem_7 ramWire_3", false,-1, 127,0);
        tracep->declArray(c+3736,"ysyx_041728 mem_7 ramWire_4", false,-1, 127,0);
        tracep->declArray(c+3740,"ysyx_041728 mem_7 ramWire_5", false,-1, 127,0);
        tracep->declArray(c+3744,"ysyx_041728 mem_7 ramWire_6", false,-1, 127,0);
        tracep->declArray(c+3748,"ysyx_041728 mem_7 ramWire_7", false,-1, 127,0);
        tracep->declArray(c+3752,"ysyx_041728 mem_7 ramWire_8", false,-1, 127,0);
        tracep->declArray(c+3756,"ysyx_041728 mem_7 ramWire_9", false,-1, 127,0);
        tracep->declArray(c+3760,"ysyx_041728 mem_7 ramWire_10", false,-1, 127,0);
        tracep->declArray(c+3764,"ysyx_041728 mem_7 ramWire_11", false,-1, 127,0);
        tracep->declArray(c+3768,"ysyx_041728 mem_7 ramWire_12", false,-1, 127,0);
        tracep->declArray(c+3772,"ysyx_041728 mem_7 ramWire_13", false,-1, 127,0);
        tracep->declArray(c+3776,"ysyx_041728 mem_7 ramWire_14", false,-1, 127,0);
        tracep->declArray(c+3780,"ysyx_041728 mem_7 ramWire_15", false,-1, 127,0);
        tracep->declArray(c+3784,"ysyx_041728 mem_7 ramWire_16", false,-1, 127,0);
        tracep->declArray(c+3788,"ysyx_041728 mem_7 ramWire_17", false,-1, 127,0);
        tracep->declArray(c+3792,"ysyx_041728 mem_7 ramWire_18", false,-1, 127,0);
        tracep->declArray(c+3796,"ysyx_041728 mem_7 ramWire_19", false,-1, 127,0);
        tracep->declArray(c+3800,"ysyx_041728 mem_7 ramWire_20", false,-1, 127,0);
        tracep->declArray(c+3804,"ysyx_041728 mem_7 ramWire_21", false,-1, 127,0);
        tracep->declArray(c+3808,"ysyx_041728 mem_7 ramWire_22", false,-1, 127,0);
        tracep->declArray(c+3812,"ysyx_041728 mem_7 ramWire_23", false,-1, 127,0);
        tracep->declArray(c+3816,"ysyx_041728 mem_7 ramWire_24", false,-1, 127,0);
        tracep->declArray(c+3820,"ysyx_041728 mem_7 ramWire_25", false,-1, 127,0);
        tracep->declArray(c+3824,"ysyx_041728 mem_7 ramWire_26", false,-1, 127,0);
        tracep->declArray(c+3828,"ysyx_041728 mem_7 ramWire_27", false,-1, 127,0);
        tracep->declArray(c+3832,"ysyx_041728 mem_7 ramWire_28", false,-1, 127,0);
        tracep->declArray(c+3836,"ysyx_041728 mem_7 ramWire_29", false,-1, 127,0);
        tracep->declArray(c+3840,"ysyx_041728 mem_7 ramWire_30", false,-1, 127,0);
        tracep->declArray(c+3844,"ysyx_041728 mem_7 ramWire_31", false,-1, 127,0);
        tracep->declArray(c+3848,"ysyx_041728 mem_7 ramWire_32", false,-1, 127,0);
        tracep->declArray(c+3852,"ysyx_041728 mem_7 ramWire_33", false,-1, 127,0);
        tracep->declArray(c+3856,"ysyx_041728 mem_7 ramWire_34", false,-1, 127,0);
        tracep->declArray(c+3860,"ysyx_041728 mem_7 ramWire_35", false,-1, 127,0);
        tracep->declArray(c+3864,"ysyx_041728 mem_7 ramWire_36", false,-1, 127,0);
        tracep->declArray(c+3868,"ysyx_041728 mem_7 ramWire_37", false,-1, 127,0);
        tracep->declArray(c+3872,"ysyx_041728 mem_7 ramWire_38", false,-1, 127,0);
        tracep->declArray(c+3876,"ysyx_041728 mem_7 ramWire_39", false,-1, 127,0);
        tracep->declArray(c+3880,"ysyx_041728 mem_7 ramWire_40", false,-1, 127,0);
        tracep->declArray(c+3884,"ysyx_041728 mem_7 ramWire_41", false,-1, 127,0);
        tracep->declArray(c+3888,"ysyx_041728 mem_7 ramWire_42", false,-1, 127,0);
        tracep->declArray(c+3892,"ysyx_041728 mem_7 ramWire_43", false,-1, 127,0);
        tracep->declArray(c+3896,"ysyx_041728 mem_7 ramWire_44", false,-1, 127,0);
        tracep->declArray(c+3900,"ysyx_041728 mem_7 ramWire_45", false,-1, 127,0);
        tracep->declArray(c+3904,"ysyx_041728 mem_7 ramWire_46", false,-1, 127,0);
        tracep->declArray(c+3908,"ysyx_041728 mem_7 ramWire_47", false,-1, 127,0);
        tracep->declArray(c+3912,"ysyx_041728 mem_7 ramWire_48", false,-1, 127,0);
        tracep->declArray(c+3916,"ysyx_041728 mem_7 ramWire_49", false,-1, 127,0);
        tracep->declArray(c+3920,"ysyx_041728 mem_7 ramWire_50", false,-1, 127,0);
        tracep->declArray(c+3924,"ysyx_041728 mem_7 ramWire_51", false,-1, 127,0);
        tracep->declArray(c+3928,"ysyx_041728 mem_7 ramWire_52", false,-1, 127,0);
        tracep->declArray(c+3932,"ysyx_041728 mem_7 ramWire_53", false,-1, 127,0);
        tracep->declArray(c+3936,"ysyx_041728 mem_7 ramWire_54", false,-1, 127,0);
        tracep->declArray(c+3940,"ysyx_041728 mem_7 ramWire_55", false,-1, 127,0);
        tracep->declArray(c+3944,"ysyx_041728 mem_7 ramWire_56", false,-1, 127,0);
        tracep->declArray(c+3948,"ysyx_041728 mem_7 ramWire_57", false,-1, 127,0);
        tracep->declArray(c+3952,"ysyx_041728 mem_7 ramWire_58", false,-1, 127,0);
        tracep->declArray(c+3956,"ysyx_041728 mem_7 ramWire_59", false,-1, 127,0);
        tracep->declArray(c+3960,"ysyx_041728 mem_7 ramWire_60", false,-1, 127,0);
        tracep->declArray(c+3964,"ysyx_041728 mem_7 ramWire_61", false,-1, 127,0);
        tracep->declArray(c+3968,"ysyx_041728 mem_7 ramWire_62", false,-1, 127,0);
        tracep->declArray(c+3972,"ysyx_041728 mem_7 ramWire_63", false,-1, 127,0);
    }
}

void Vysyx_041728___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_041728___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_041728___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_041728___024root__traceRegister(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_041728___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_041728___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_041728___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_041728___024root__traceFullSub0(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_041728___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_041728___024root* const __restrict vlSelf = static_cast<Vysyx_041728___024root*>(voidSelf);
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_041728___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_041728___024root__traceFullSub0(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp810;
    VlWide<4>/*127:0*/ __Vtemp811;
    VlWide<4>/*127:0*/ __Vtemp812;
    VlWide<4>/*127:0*/ __Vtemp813;
    VlWide<4>/*127:0*/ __Vtemp815;
    VlWide<4>/*127:0*/ __Vtemp831;
    VlWide<4>/*127:0*/ __Vtemp837;
    VlWide<4>/*127:0*/ __Vtemp853;
    VlWide<4>/*127:0*/ __Vtemp859;
    VlWide<4>/*127:0*/ __Vtemp875;
    VlWide<4>/*127:0*/ __Vtemp881;
    VlWide<4>/*127:0*/ __Vtemp897;
    VlWide<4>/*127:0*/ __Vtemp903;
    VlWide<4>/*127:0*/ __Vtemp915;
    VlWide<4>/*127:0*/ __Vtemp925;
    VlWide<4>/*127:0*/ __Vtemp937;
    VlWide<4>/*127:0*/ __Vtemp947;
    VlWide<4>/*127:0*/ __Vtemp959;
    VlWide<4>/*127:0*/ __Vtemp969;
    VlWide<4>/*127:0*/ __Vtemp981;
    VlWide<4>/*127:0*/ __Vtemp991;
    VlWide<3>/*95:0*/ __Vtemp992;
    VlWide<4>/*127:0*/ __Vtemp993;
    VlWide<3>/*95:0*/ __Vtemp996;
    VlWide<4>/*127:0*/ __Vtemp997;
    VlWide<5>/*159:0*/ __Vtemp1028;
    VlWide<5>/*159:0*/ __Vtemp1060;
    VlWide<5>/*159:0*/ __Vtemp1061;
    VlWide<5>/*159:0*/ __Vtemp1062;
    VlWide<5>/*159:0*/ __Vtemp1063;
    VlWide<5>/*159:0*/ __Vtemp1064;
    VlWide<5>/*159:0*/ __Vtemp1065;
    VlWide<3>/*95:0*/ __Vtemp1066;
    VlWide<3>/*95:0*/ __Vtemp1067;
    VlWide<4>/*127:0*/ __Vtemp1069;
    VlWide<4>/*127:0*/ __Vtemp1070;
    VlWide<4>/*127:0*/ __Vtemp1073;
    VlWide<4>/*127:0*/ __Vtemp1077;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4359)))));
        tracep->fullBit(oldp+2,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4377)))));
        tracep->fullBit(oldp+3,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4395)))));
        tracep->fullBit(oldp+4,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4413)))));
        tracep->fullBit(oldp+5,(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i));
        tracep->fullWData(oldp+6,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask),128);
        tracep->fullWData(oldp+10,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask),128);
        tracep->fullWData(oldp+14,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask),128);
        tracep->fullWData(oldp+18,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask),128);
        tracep->fullBit(oldp+22,(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_161));
        tracep->fullBit(oldp+23,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37));
        tracep->fullBit(oldp+24,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0_io_cen));
        tracep->fullBit(oldp+25,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1_io_cen));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2_io_cen));
        tracep->fullBit(oldp+27,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3_io_cen));
        tracep->fullBit(oldp+28,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4_io_cen));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5_io_cen));
        tracep->fullBit(oldp+30,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6_io_cen));
        tracep->fullBit(oldp+31,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7_io_cen));
        tracep->fullBit(oldp+32,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8_io_cen));
        tracep->fullBit(oldp+33,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9_io_cen));
        tracep->fullBit(oldp+34,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10_io_cen));
        tracep->fullBit(oldp+35,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11_io_cen));
        tracep->fullBit(oldp+36,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12_io_cen));
        tracep->fullBit(oldp+37,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13_io_cen));
        tracep->fullBit(oldp+38,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14_io_cen));
        tracep->fullBit(oldp+39,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15_io_cen));
        tracep->fullBit(oldp+40,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__block));
        tracep->fullCData(oldp+41,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__valid_c),2);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__valid_c),2);
        tracep->fullBit(oldp+43,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4359));
        __Vtemp810[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[0U]);
        __Vtemp810[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[1U]);
        __Vtemp810[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[2U]);
        __Vtemp810[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[3U]);
        tracep->fullWData(oldp+44,(__Vtemp810),128);
        tracep->fullBit(oldp+48,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4377));
        __Vtemp811[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[0U]);
        __Vtemp811[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[1U]);
        __Vtemp811[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[2U]);
        __Vtemp811[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[3U]);
        tracep->fullWData(oldp+49,(__Vtemp811),128);
        tracep->fullBit(oldp+53,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4395));
        __Vtemp812[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[0U]);
        __Vtemp812[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[1U]);
        __Vtemp812[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[2U]);
        __Vtemp812[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[3U]);
        tracep->fullWData(oldp+54,(__Vtemp812),128);
        tracep->fullBit(oldp+58,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4413));
        __Vtemp813[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]);
        __Vtemp813[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]);
        __Vtemp813[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]);
        __Vtemp813[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]);
        tracep->fullWData(oldp+59,(__Vtemp813),128);
        tracep->fullBit(oldp+63,((((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
                                   | ((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV) 
                                      & ((((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                           & (IData)(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i)) 
                                          | (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                         | (((0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                             & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hit)) 
                                            & (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                  >> 5U)))))) 
                                  | ((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT___T_8) 
                                     & (2U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))))));
        tracep->fullBit(oldp+64,((1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                          >> 1U) & 
                                         (~ (IData)(vlSelf->ysyx_041728__DOT__clintIns__DOT___T_18))) 
                                        & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37))))));
        tracep->fullBit(oldp+65,(((((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                    & (IData)(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                  | (((0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hit)) 
                                     & (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           >> 5U))))));
        tracep->fullBit(oldp+66,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                             & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_0)) 
                                            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))))));
        tracep->fullBit(oldp+67,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))))));
        if ((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) {
            __Vtemp815[0U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[0U];
            __Vtemp815[1U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[1U];
            __Vtemp815[2U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[2U];
            __Vtemp815[3U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[3U];
        } else {
            __Vtemp815[0U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[0U];
            __Vtemp815[1U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[1U];
            __Vtemp815[2U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[2U];
            __Vtemp815[3U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[3U];
        }
        tracep->fullWData(oldp+68,(__Vtemp815),128);
        tracep->fullBit(oldp+72,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                             & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_1)) 
                                            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))))));
        tracep->fullBit(oldp+73,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))))));
        tracep->fullBit(oldp+74,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                             & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_2)) 
                                            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))))));
        tracep->fullBit(oldp+75,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))))));
        tracep->fullBit(oldp+76,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                             & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_3)) 
                                            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))))));
        tracep->fullBit(oldp+77,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))))));
        tracep->fullBit(oldp+78,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                         >> 0xdU) & 
                                        (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37))))));
        tracep->fullBit(oldp+79,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                         >> 1U) & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37))))));
        tracep->fullBit(oldp+80,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_161))));
        tracep->fullBit(oldp+81,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                         >> 0xeU) & 
                                        (~ (((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
                                             | ((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV) 
                                                & ((((2U 
                                                      == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                                     & (IData)(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i)) 
                                                    | (3U 
                                                       == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                                   | (((0U 
                                                        == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                                       & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hit)) 
                                                      & (~ 
                                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                          >> 5U)))))) 
                                            | ((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT___T_8) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state)))))))));
        tracep->fullBit(oldp+82,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                    & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_0)) 
                                   & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))));
        tracep->fullBit(oldp+83,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))));
        tracep->fullBit(oldp+84,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                    & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_1)) 
                                   & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))));
        tracep->fullBit(oldp+85,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))));
        tracep->fullBit(oldp+86,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                    & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_2)) 
                                   & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))));
        tracep->fullBit(oldp+87,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))));
        tracep->fullBit(oldp+88,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                    & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_3)) 
                                   & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))));
        tracep->fullBit(oldp+89,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                  | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))));
        tracep->fullBit(oldp+90,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186)))));
        tracep->fullBit(oldp+91,(vlSelf->ysyx_041728__DOT__iCache_io_cacheIn_ready));
        tracep->fullQData(oldp+92,(((8U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                     ? (((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[0U]))))),64);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc),32);
        tracep->fullBit(oldp+95,(vlSelf->ysyx_041728__DOT__riscvIns_io_dataIO_valid));
        tracep->fullQData(oldp+96,(((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV)
                                     ? ((0x4000000U 
                                         & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[0U]))))
                                     : ((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV)
                                         ? ((0x200bff8U 
                                             == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 9U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x17U)))
                                             ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime
                                             : ((0x2004000U 
                                                 == 
                                                 ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 9U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x17U)))
                                                 ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp
                                                 : 0ULL))
                                         : vlSelf->ysyx_041728__DOT__mmioDCache__DOT___T_7))),64);
        tracep->fullQData(oldp+98,((((QData)((IData)(
                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[0U])))),64);
        tracep->fullBit(oldp+100,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                         >> 5U))));
        tracep->fullIData(oldp+101,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                      << 9U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x17U))),32);
        tracep->fullCData(oldp+102,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           >> 0xfU))),2);
        tracep->fullCData(oldp+103,((0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))),8);
        tracep->fullBit(oldp+104,(vlSelf->ysyx_041728__DOT__clintIns__DOT___T_18));
        tracep->fullBit(oldp+105,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_229));
        tracep->fullBit(oldp+106,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache_io_cacheIn_ready)))));
        tracep->fullBit(oldp+107,(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
        tracep->fullIData(oldp+108,((0xfffffff0U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),32);
        tracep->fullCData(oldp+109,(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState),8);
        tracep->fullCData(oldp+110,((0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                              >> 4U))),6);
        if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp831[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[0U];
            __Vtemp831[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[1U];
            __Vtemp831[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[2U];
            __Vtemp831[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[3U];
        } else {
            __Vtemp831[0U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[0U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[0U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[0U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[0U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[0U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_54[0U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT___T_553[0U])))))));
            __Vtemp831[1U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[1U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[1U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[1U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[1U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[1U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_54[1U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT___T_553[1U])))))));
            __Vtemp831[2U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[2U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[2U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[2U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[2U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[2U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_54[2U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT___T_553[2U])))))));
            __Vtemp831[3U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[3U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[3U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[3U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[3U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[3U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_54[3U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT___T_553[3U])))))));
        }
        if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp837[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[0U];
            __Vtemp837[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[1U];
            __Vtemp837[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[2U];
            __Vtemp837[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[3U];
        } else {
            __Vtemp837[0U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[0U]
                                   : __Vtemp831[0U]));
            __Vtemp837[1U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[1U]
                                   : __Vtemp831[1U]));
            __Vtemp837[2U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[2U]
                                   : __Vtemp831[2U]));
            __Vtemp837[3U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[3U]
                                   : __Vtemp831[3U]));
        }
        tracep->fullWData(oldp+111,(__Vtemp837),128);
        if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp853[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[0U];
            __Vtemp853[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[1U];
            __Vtemp853[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[2U];
            __Vtemp853[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[3U];
        } else {
            __Vtemp853[0U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[0U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[0U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[0U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[0U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[0U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_54[0U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT___T_553[0U])))))));
            __Vtemp853[1U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[1U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[1U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[1U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[1U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[1U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_54[1U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT___T_553[1U])))))));
            __Vtemp853[2U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[2U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[2U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[2U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[2U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[2U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_54[2U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT___T_553[2U])))))));
            __Vtemp853[3U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[3U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[3U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[3U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[3U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[3U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_54[3U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT___T_553[3U])))))));
        }
        if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp859[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[0U];
            __Vtemp859[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[1U];
            __Vtemp859[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[2U];
            __Vtemp859[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[3U];
        } else {
            __Vtemp859[0U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[0U]
                                   : __Vtemp853[0U]));
            __Vtemp859[1U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[1U]
                                   : __Vtemp853[1U]));
            __Vtemp859[2U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[2U]
                                   : __Vtemp853[2U]));
            __Vtemp859[3U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[3U]
                                   : __Vtemp853[3U]));
        }
        tracep->fullWData(oldp+115,(__Vtemp859),128);
        if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp875[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[0U];
            __Vtemp875[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[1U];
            __Vtemp875[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[2U];
            __Vtemp875[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[3U];
        } else {
            __Vtemp875[0U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[0U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[0U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[0U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[0U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[0U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_54[0U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT___T_553[0U])))))));
            __Vtemp875[1U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[1U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[1U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[1U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[1U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[1U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_54[1U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT___T_553[1U])))))));
            __Vtemp875[2U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[2U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[2U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[2U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[2U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[2U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_54[2U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT___T_553[2U])))))));
            __Vtemp875[3U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[3U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[3U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[3U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[3U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[3U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_54[3U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT___T_553[3U])))))));
        }
        if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp881[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[0U];
            __Vtemp881[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[1U];
            __Vtemp881[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[2U];
            __Vtemp881[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[3U];
        } else {
            __Vtemp881[0U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[0U]
                                   : __Vtemp875[0U]));
            __Vtemp881[1U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[1U]
                                   : __Vtemp875[1U]));
            __Vtemp881[2U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[2U]
                                   : __Vtemp875[2U]));
            __Vtemp881[3U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[3U]
                                   : __Vtemp875[3U]));
        }
        tracep->fullWData(oldp+119,(__Vtemp881),128);
        if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp897[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[0U];
            __Vtemp897[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[1U];
            __Vtemp897[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[2U];
            __Vtemp897[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[3U];
        } else {
            __Vtemp897[0U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[0U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[0U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[0U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[0U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[0U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_54[0U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT___T_553[0U])))))));
            __Vtemp897[1U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[1U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[1U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[1U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[1U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[1U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_54[1U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT___T_553[1U])))))));
            __Vtemp897[2U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[2U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[2U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[2U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[2U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[2U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_54[2U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT___T_553[2U])))))));
            __Vtemp897[3U] = ((0x3bU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[3U]
                               : ((0x3aU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[3U]
                                   : ((0x39U == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[3U]
                                       : ((0x38U == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[3U]
                                           : ((0x37U 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[3U]
                                               : ((0x36U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_54[3U]
                                                   : 
                                                  ((0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT___T_553[3U])))))));
        }
        if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp903[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[0U];
            __Vtemp903[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[1U];
            __Vtemp903[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[2U];
            __Vtemp903[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[3U];
        } else {
            __Vtemp903[0U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[0U]
                                   : __Vtemp897[0U]));
            __Vtemp903[1U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[1U]
                                   : __Vtemp897[1U]));
            __Vtemp903[2U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[2U]
                                   : __Vtemp897[2U]));
            __Vtemp903[3U] = ((0x3eU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[3U]
                                   : __Vtemp897[3U]));
        }
        tracep->fullWData(oldp+123,(__Vtemp903),128);
        tracep->fullBit(oldp+127,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
        tracep->fullIData(oldp+128,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))
                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc
                                      : 0U)),32);
        tracep->fullBit(oldp+129,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)) 
                                   | (2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)))));
        tracep->fullBit(oldp+130,((3U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
        tracep->fullBit(oldp+131,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))));
        tracep->fullIData(oldp+132,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                      ? (0xfffffff0U 
                                         & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                      : 0U)),32);
        tracep->fullCData(oldp+133,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState)
                                      : 0U)),8);
        tracep->fullCData(oldp+134,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                      ? 3U : 0U)),3);
        tracep->fullCData(oldp+135,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                      ? 1U : 0U)),2);
        tracep->fullBit(oldp+136,(((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state)) 
                                   | (1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state)))));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_041728__DOT__dArbIns_io_arbMMIO_valid));
        tracep->fullBit(oldp+138,((2U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))));
        tracep->fullQData(oldp+139,(vlSelf->ysyx_041728__DOT__mmioDCache__DOT___T_7),64);
        tracep->fullBit(oldp+141,(((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
                                   & (IData)(vlSelf->ysyx_041728__DOT__riscvIns_io_dataIO_valid))));
        tracep->fullQData(oldp+142,(((0x200bff8U == 
                                      ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 9U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x17U)))
                                      ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime
                                      : ((0x2004000U 
                                          == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                               << 9U) 
                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x17U)))
                                          ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp
                                          : 0ULL))),64);
        tracep->fullBit(oldp+144,(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid));
        tracep->fullQData(oldp+145,(((0x4000000U & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[2U])))
                                      : (((QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[0U]))))),64);
        tracep->fullBit(oldp+147,(((0U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state)) 
                                   & (IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbMMIO_valid))));
        tracep->fullBit(oldp+148,((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
        tracep->fullIData(oldp+149,((0xfffffff0U & 
                                     ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 9U) | (0x1f0U 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x17U))))),32);
        tracep->fullCData(oldp+150,((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))),8);
        tracep->fullBit(oldp+151,((((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_1) 
                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                       >> 5U)) & (0U 
                                                  == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)))));
        tracep->fullCData(oldp+152,((0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                               << 5U) 
                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1bU)))),6);
        if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp915[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[0U];
            __Vtemp915[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[1U];
            __Vtemp915[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[2U];
            __Vtemp915[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[3U];
        } else {
            __Vtemp915[0U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_57[0U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_56[0U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[0U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[0U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[0U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[0U])))));
            __Vtemp915[1U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_57[1U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_56[1U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[1U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[1U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[1U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[1U])))));
            __Vtemp915[2U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_57[2U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_56[2U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[2U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[2U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[2U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[2U])))));
            __Vtemp915[3U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_57[3U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_56[3U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[3U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[3U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[3U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[3U])))));
        }
        if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp925[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[0U];
            __Vtemp925[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[1U];
            __Vtemp925[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[2U];
            __Vtemp925[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[3U];
        } else {
            __Vtemp925[0U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_61[0U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[0U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[0U]
                                           : __Vtemp915[0U]))));
            __Vtemp925[1U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_61[1U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[1U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[1U]
                                           : __Vtemp915[1U]))));
            __Vtemp925[2U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_61[2U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[2U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[2U]
                                           : __Vtemp915[2U]))));
            __Vtemp925[3U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_61[3U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[3U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[3U]
                                           : __Vtemp915[3U]))));
        }
        tracep->fullWData(oldp+153,(__Vtemp925),128);
        if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp937[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[0U];
            __Vtemp937[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[1U];
            __Vtemp937[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[2U];
            __Vtemp937[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[3U];
        } else {
            __Vtemp937[0U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_57[0U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_56[0U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[0U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[0U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[0U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[0U])))));
            __Vtemp937[1U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_57[1U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_56[1U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[1U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[1U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[1U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[1U])))));
            __Vtemp937[2U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_57[2U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_56[2U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[2U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[2U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[2U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[2U])))));
            __Vtemp937[3U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_57[3U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_56[3U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[3U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[3U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[3U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[3U])))));
        }
        if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp947[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[0U];
            __Vtemp947[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[1U];
            __Vtemp947[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[2U];
            __Vtemp947[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[3U];
        } else {
            __Vtemp947[0U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_61[0U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[0U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[0U]
                                           : __Vtemp937[0U]))));
            __Vtemp947[1U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_61[1U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[1U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[1U]
                                           : __Vtemp937[1U]))));
            __Vtemp947[2U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_61[2U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[2U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[2U]
                                           : __Vtemp937[2U]))));
            __Vtemp947[3U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_61[3U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[3U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[3U]
                                           : __Vtemp937[3U]))));
        }
        tracep->fullWData(oldp+157,(__Vtemp947),128);
        if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp959[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[0U];
            __Vtemp959[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[1U];
            __Vtemp959[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[2U];
            __Vtemp959[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[3U];
        } else {
            __Vtemp959[0U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_57[0U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_56[0U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[0U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[0U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[0U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[0U])))));
            __Vtemp959[1U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_57[1U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_56[1U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[1U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[1U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[1U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[1U])))));
            __Vtemp959[2U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_57[2U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_56[2U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[2U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[2U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[2U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[2U])))));
            __Vtemp959[3U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_57[3U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_56[3U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[3U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[3U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[3U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[3U])))));
        }
        if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp969[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[0U];
            __Vtemp969[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[1U];
            __Vtemp969[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[2U];
            __Vtemp969[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[3U];
        } else {
            __Vtemp969[0U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_61[0U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[0U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[0U]
                                           : __Vtemp959[0U]))));
            __Vtemp969[1U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_61[1U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[1U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[1U]
                                           : __Vtemp959[1U]))));
            __Vtemp969[2U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_61[2U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[2U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[2U]
                                           : __Vtemp959[2U]))));
            __Vtemp969[3U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_61[3U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[3U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[3U]
                                           : __Vtemp959[3U]))));
        }
        tracep->fullWData(oldp+161,(__Vtemp969),128);
        if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp981[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[0U];
            __Vtemp981[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[1U];
            __Vtemp981[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[2U];
            __Vtemp981[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[3U];
        } else {
            __Vtemp981[0U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_57[0U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_56[0U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[0U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[0U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[0U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[0U])))));
            __Vtemp981[1U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_57[1U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_56[1U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[1U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[1U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[1U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[1U])))));
            __Vtemp981[2U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_57[2U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_56[2U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[2U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[2U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[2U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[2U])))));
            __Vtemp981[3U] = ((0x39U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_57[3U]
                               : ((0x38U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_56[3U]
                                   : ((0x37U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[3U]
                                       : ((0x36U == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[3U]
                                           : ((0x35U 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[3U]
                                               : vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[3U])))));
        }
        if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp991[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[0U];
            __Vtemp991[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[1U];
            __Vtemp991[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[2U];
            __Vtemp991[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[3U];
        } else {
            __Vtemp991[0U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_62[0U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_61[0U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[0U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[0U]
                                           : __Vtemp981[0U]))));
            __Vtemp991[1U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_62[1U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_61[1U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[1U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[1U]
                                           : __Vtemp981[1U]))));
            __Vtemp991[2U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_62[2U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_61[2U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[2U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[2U]
                                           : __Vtemp981[2U]))));
            __Vtemp991[3U] = ((0x3eU == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                               ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_62[3U]
                               : ((0x3dU == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                   ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_61[3U]
                                   : ((0x3cU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[3U]
                                       : ((0x3bU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[3U]
                                           : __Vtemp981[3U]))));
        }
        tracep->fullWData(oldp+165,(__Vtemp991),128);
        tracep->fullBit(oldp+169,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
        tracep->fullIData(oldp+170,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))
                                      ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                          << 9U) | 
                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x17U))
                                      : 0U)),32);
        tracep->fullCData(oldp+171,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           >> 0xfU))),3);
        tracep->fullBit(oldp+172,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)) 
                                   | (2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)))));
        tracep->fullQData(oldp+173,(((IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT___T_27)
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[0U])))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+175,(((IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT___T_27)
                                      ? (0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                      : 0U)),8);
        tracep->fullBit(oldp+176,((3U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
        tracep->fullBit(oldp+177,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))));
        tracep->fullIData(oldp+178,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                      ? (0xfffffff0U 
                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 9U) 
                                            | (0x1f0U 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x17U))))
                                      : 0U)),32);
        tracep->fullCData(oldp+179,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                      ? (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))
                                      : 0U)),8);
        tracep->fullCData(oldp+180,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                      ? 3U : 0U)),3);
        tracep->fullCData(oldp+181,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                      ? 1U : 0U)),2);
        tracep->fullBit(oldp+182,(((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state)) 
                                   | (1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state)))));
        tracep->fullIData(oldp+183,(((4U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                      ? (IData)((((8U 
                                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[2U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[0U])))) 
                                                 >> 0x20U))
                                      : (IData)(((8U 
                                                  & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__iCache__DOT__waysel[0U]))))))),32);
        tracep->fullIData(oldp+184,(((IData)(4U) + vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),32);
        tracep->fullIData(oldp+185,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)
                                      ? (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_23)
                                      : ((2U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])
                                          ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                              << 0x13U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                >> 0xdU))
                                          : ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump1)
                                              ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                                  << 0x13U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                    >> 0xdU))
                                              : ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump2)
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_23)
                                                  : vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifdnpc))))),32);
        tracep->fullBit(oldp+186,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipFlashWire) 
                                   | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifjump))));
        tracep->fullBit(oldp+187,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_loadHazard));
        tracep->fullBit(oldp+188,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186));
        tracep->fullIData(oldp+189,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                      << 0x1eU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                                   >> 2U))),32);
        tracep->fullIData(oldp+190,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                      << 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+191,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         >> 4U))));
        tracep->fullQData(oldp+192,(((0x1063U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))
                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                                      : ((0x23U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U)))
                                          ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm
                                          : ((0x6003U 
                                              == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))
                                              ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                              : ((0x1013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                         >> 1U))))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                  : 
                                                 ((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 1U)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                        >> 1U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Uimm
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                         >> 1U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                          >> 1U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                           >> 1U)))
                                                       ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                                                       : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT___T_141)))))))))),64);
        tracep->fullQData(oldp+194,(((0x1fU == (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 0x10U)))
                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_221
                                      : ((0x1eU == 
                                          (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                            >> 0x10U)))
                                          ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_214
                                          : ((0x1dU 
                                              == (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 0x10U)))
                                              ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_207
                                              : ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 0x10U)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_200
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 0x10U)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_193
                                                   : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_273)))))),64);
        tracep->fullQData(oldp+196,(((0x1fU == (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 0x15U)))
                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_221
                                      : ((0x1eU == 
                                          (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                            >> 0x15U)))
                                          ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_214
                                          : ((0x1dU 
                                              == (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 0x15U)))
                                              ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_207
                                              : ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 0x15U)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_200
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 0x15U)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_193
                                                   : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_335)))))),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dinMux),64);
        tracep->fullCData(oldp+200,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 8U))),5);
        tracep->fullCData(oldp+201,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                              >> 8U))),5);
        tracep->fullCData(oldp+202,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 0x10U))),5);
        tracep->fullCData(oldp+203,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 0x15U))),5);
        tracep->fullCData(oldp+204,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB),64);
        tracep->fullCData(oldp+207,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                           >> 1U))),2);
        tracep->fullCData(oldp+208,((3U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                            << 1U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                              >> 0x1fU)))),2);
        tracep->fullCData(oldp+209,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                              >> 3U))),5);
        tracep->fullBit(oldp+210,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+211,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                           >> 2U))),2);
        tracep->fullCData(oldp+212,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                           >> 5U))),3);
        tracep->fullQData(oldp+213,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xaU])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[9U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+215,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[7U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[6U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+217,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[6U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[5U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+219,(((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96))
                                      ? ((0x344U == 
                                          (0xfffU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                            >> 0xdU)))
                                          ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins
                                          : ((0x304U 
                                              == (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                     >> 0xdU)))
                                              ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins
                                              : ((0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                      >> 0xdU)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                       >> 0xdU)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                        >> 0xdU)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mcauseins
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                         >> 0xdU)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mepcins
                                                     : 0ULL))))))
                                      : (((QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[0U]))))),64);
        tracep->fullQData(oldp+221,(((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardB))
                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_13)),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata),64);
        tracep->fullBit(oldp+225,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[0U])));
        tracep->fullIData(oldp+226,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                      << 0x13U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                                   >> 0xdU))),32);
        tracep->fullIData(oldp+227,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                      << 0x18U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                   >> 8U))),32);
        tracep->fullIData(oldp+228,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_23)),32);
        tracep->fullBit(oldp+229,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 8U))));
        tracep->fullBit(oldp+230,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 7U))));
        tracep->fullBit(oldp+231,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 6U))));
        tracep->fullBit(oldp+232,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 5U))));
        tracep->fullBit(oldp+233,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 4U))));
        tracep->fullBit(oldp+234,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 3U))));
        tracep->fullBit(oldp+235,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 2U))));
        tracep->fullBit(oldp+236,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                         >> 1U))));
        tracep->fullBit(oldp+237,((1U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96))));
        tracep->fullCData(oldp+238,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                              >> 7U))),5);
        tracep->fullQData(oldp+239,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[3U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U])) 
                                                      >> 0xdU)))),64);
        tracep->fullCData(oldp+241,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardA),2);
        tracep->fullCData(oldp+242,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardB),2);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_aluRes1),64);
        tracep->fullBit(oldp+245,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                         >> 4U))));
        tracep->fullCData(oldp+246,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0x12U))),5);
        tracep->fullCData(oldp+247,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                              >> 2U))),5);
        tracep->fullBit(oldp+248,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U])));
        tracep->fullCData(oldp+249,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                              >> 8U))),5);
        tracep->fullCData(oldp+250,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+251,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_exjump));
        tracep->fullIData(oldp+252,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifdnpc),32);
        tracep->fullBit(oldp+253,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifjump));
        tracep->fullBit(oldp+254,(((0x23U == (0x707fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                 >> 1U))) 
                                   | ((0x2023U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      | ((0x3023U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | ((0x1023U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                               | ((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 1U))) 
                                                  | ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                          >> 1U))) 
                                                     | ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                             >> 1U))) 
                                                        | ((0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                                >> 1U))) 
                                                           | ((0x5003U 
                                                               == 
                                                               (0x707fU 
                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                                   >> 1U))) 
                                                              | ((3U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                                      >> 1U))) 
                                                                 | (0x6003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                                        >> 1U))))))))))))))));
        tracep->fullCData(oldp+255,(((0x2007033U != 
                                      (0xfe00707fU 
                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                             >> 1U)))) 
                                     & ((0x1063U != 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                           >> 1U))) 
                                        & ((0x23U != 
                                            (0x707fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                >> 1U))) 
                                           & ((0x6003U 
                                               != (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                              & ((0x1013U 
                                                  != 
                                                  (0xfc00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                         >> 1U)))) 
                                                 & ((0x3033U 
                                                     != 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                            >> 1U)))) 
                                                    & ((0x200003bU 
                                                        != 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                             << 0x1fU) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                               >> 1U)))) 
                                                       & ((0x5003U 
                                                           != 
                                                           (0x707fU 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                               >> 1U))) 
                                                          & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___T_271)))))))))),2);
        tracep->fullCData(oldp+256,(((0x2007033U == 
                                      (0xfe00707fU 
                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                             >> 1U))))
                                      ? 0U : ((0x1063U 
                                               == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U)))
                                               ? 0U
                                               : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___T_333)))),2);
        tracep->fullCData(oldp+257,(((0x23U == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U)))
                                      ? 0U : ((0x2023U 
                                               == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U)))
                                               ? 0U
                                               : ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 1U)))
                                                   ? 0U
                                                   : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___T_167))))),5);
        tracep->fullBit(oldp+258,(((0x23U == (0x707fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                 >> 1U))) 
                                   | ((0x2023U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      | ((0x3023U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | (0x1023U 
                                            == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))))))));
        tracep->fullCData(oldp+259,(((3U == (7U & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 0xdU)))
                                      ? 0xffU : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 0xdU)))
                                                  ? 0xfU
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 0xdU)))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                        >> 0xdU)))
                                                    ? 1U
                                                    : 0U))))),8);
        tracep->fullCData(oldp+260,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                           >> 0xdU))),3);
        tracep->fullBit(oldp+261,(((0x1063U == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))) 
                                   | ((0x5063U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      | ((0x6063U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | ((0x4063U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                               | ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 1U))) 
                                                  | (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                         >> 1U)))))))))));
        tracep->fullBit(oldp+262,(((0x6fU == (0x7fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                 >> 1U))) 
                                   | (0x67U == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))))));
        tracep->fullBit(oldp+263,(((0x1063U == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))) 
                                   | ((0x5063U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      | ((0x6063U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | ((0x4063U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                               | (0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))))))))));
        tracep->fullBit(oldp+264,(((0x2007033U == (0xfe00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                         >> 1U)))) 
                                   | ((0x1063U != (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      & ((0x23U != 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         & ((0x6003U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | ((0x1013U 
                                                == 
                                                (0xfc00707fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 1U)))) 
                                               | ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                        << 0x1fU) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                          >> 1U)))) 
                                                  | ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                             >> 1U)))) 
                                                     | ((0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                             >> 1U))) 
                                                        | ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                                >> 1U))) 
                                                           | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___T_161))))))))))));
        tracep->fullCData(oldp+265,(((0x2007033U == 
                                      (0xfe00707fU 
                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                             >> 1U))))
                                      ? 0U : ((0x3033U 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                         >> 1U))))
                                               ? 0U
                                               : ((0x200003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                        << 0x1fU) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                          >> 1U))))
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                            >> 1U))))
                                                     ? 0U
                                                     : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___T_144))))))),2);
        tracep->fullBit(oldp+266,((0x100fU == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+267,((0x1073U == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+268,((0x2073U == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+269,((0x6073U == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+270,((0x7073U == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+271,((0x3073U == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+272,((0x5073U == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+273,((0x73U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                              << 0x1fU) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                >> 1U)))));
        tracep->fullBit(oldp+274,((((((0x1073U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      | (0x2073U == 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                           >> 1U)))) 
                                     | (0x6073U == 
                                        (0x707fU & 
                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                          >> 1U)))) 
                                    | (0x7073U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U)))) 
                                   | (0x3073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U))))));
        tracep->fullBit(oldp+275,((0x30200073U == (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U)))));
        tracep->fullIData(oldp+276,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                      << 0x13U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U] 
                                                   >> 0xdU))),32);
        tracep->fullBit(oldp+277,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U])));
        tracep->fullWData(oldp+278,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg),248);
        tracep->fullBit(oldp+286,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+287,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+288,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+289,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])));
        tracep->fullBit(oldp+290,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump1));
        tracep->fullIData(oldp+291,(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0U]),32);
        tracep->fullBit(oldp+292,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump2));
        tracep->fullBit(oldp+293,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                         >> 1U))));
        tracep->fullBit(oldp+294,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipFlashWire));
        tracep->fullIData(oldp+295,(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[0U]),32);
        tracep->fullBit(oldp+296,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[1U])));
        tracep->fullIData(oldp+297,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[2U] 
                                      << 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[1U] 
                                                   >> 1U))),32);
        tracep->fullIData(oldp+298,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                      << 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[2U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+299,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                         >> 1U))));
        tracep->fullBit(oldp+300,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+301,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+302,((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                              >> 0x13U))),8);
        tracep->fullBit(oldp+303,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+304,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                           >> 0x1cU))),3);
        tracep->fullIData(oldp+305,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                      << 0x13U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                   >> 0xdU))),32);
        tracep->fullIData(oldp+306,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xbU] 
                                      << 0x13U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xaU] 
                                                   >> 0xdU))),32);
        tracep->fullBit(oldp+307,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xbU] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+308,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U])));
        tracep->fullBit(oldp+309,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                         >> 1U))));
        tracep->fullIData(oldp+310,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                      << 0x1eU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                   >> 2U))),32);
        tracep->fullCData(oldp+311,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           >> 2U))),2);
        tracep->fullCData(oldp+312,((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 6U))),8);
        tracep->fullCData(oldp+313,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           >> 0xfU))),3);
        tracep->fullIData(oldp+314,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U] 
                                      << 9U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                >> 0x17U))),32);
        tracep->fullQData(oldp+315,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[3U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U])) 
                                                      >> 0x17U)))),64);
        tracep->fullQData(oldp+317,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                      >> 0x17U)))),64);
        tracep->fullIData(oldp+319,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                      << 9U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U] 
                                                >> 0x17U))),32);
        tracep->fullBit(oldp+320,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                         >> 0x17U))));
        tracep->fullBit(oldp+321,((1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           >> 0xeU) 
                                          & ((0x80000000ULL 
                                              > (((QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                       >> 0x17U)))) 
                                             | (0x8fffffffULL 
                                                < (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                                    << 0x29U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                         >> 0x17U)))))) 
                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                            >> 1U)))));
        tracep->fullBit(oldp+322,((0U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           << 0x1eU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                             >> 2U)))));
        tracep->fullWData(oldp+323,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg),174);
        tracep->fullIData(oldp+329,(((0U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              << 0x1eU) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                >> 2U)))
                                      ? ((IData)(4U) 
                                         + ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                             << 0x1eU) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                               >> 2U)))
                                      : ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                          << 0x1eU) 
                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                            >> 2U)))),32);
        tracep->fullBit(oldp+330,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+331,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                         >> 0xdU))));
        tracep->fullQData(oldp+332,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Uimm),64);
        tracep->fullQData(oldp+340,(((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U])
                                        ? 0x7ffffffffffULL
                                        : 0ULL) << 0x15U) 
                                     | (QData)((IData)(
                                                       ((0x100000U 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                            << 0x14U)) 
                                                        | ((0xff000U 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                               >> 1U)) 
                                                           | ((0x800U 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                                  >> 0xaU)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                                    >> 0x15U))))))))),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_11),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_18),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_25),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_32),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_39),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_46),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_53),64);
        tracep->fullQData(oldp+356,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_60),64);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_67),64);
        tracep->fullQData(oldp+360,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_74),64);
        tracep->fullQData(oldp+362,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_81),64);
        tracep->fullQData(oldp+364,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_88),64);
        tracep->fullQData(oldp+366,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_95),64);
        tracep->fullQData(oldp+368,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_102),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_109),64);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_116),64);
        tracep->fullQData(oldp+374,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_123),64);
        tracep->fullQData(oldp+376,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_130),64);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_137),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_144),64);
        tracep->fullQData(oldp+382,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_151),64);
        tracep->fullQData(oldp+384,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_158),64);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_165),64);
        tracep->fullQData(oldp+388,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_172),64);
        tracep->fullQData(oldp+390,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_179),64);
        tracep->fullQData(oldp+392,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_186),64);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_193),64);
        tracep->fullQData(oldp+396,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_200),64);
        tracep->fullQData(oldp+398,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_207),64);
        tracep->fullQData(oldp+400,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_214),64);
        tracep->fullQData(oldp+402,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_221),64);
        tracep->fullQData(oldp+404,((QData)((IData)(
                                                    ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                                        >> 2U))))),64);
        tracep->fullQData(oldp+406,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA),64);
        tracep->fullQData(oldp+408,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB),64);
        tracep->fullQData(oldp+410,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[0U])))),64);
        tracep->fullQData(oldp+412,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1),64);
        tracep->fullSData(oldp+414,((0xfffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                               >> 0xdU))),12);
        tracep->fullQData(oldp+415,((QData)((IData)(
                                                    ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                                      << 0x13U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                                        >> 0xdU))))),64);
        tracep->fullQData(oldp+417,(((0x344U == (0xfffU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                    >> 0xdU)))
                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins
                                      : ((0x304U == 
                                          (0xfffU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                            >> 0xdU)))
                                          ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins
                                          : ((0x300U 
                                              == (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                     >> 0xdU)))
                                              ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins
                                              : ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                      >> 0xdU)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                       >> 0xdU)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mcauseins
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                        >> 0xdU)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mepcins
                                                    : 0ULL))))))),64);
        tracep->fullQData(oldp+419,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins),64);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mepcins),64);
        tracep->fullIData(oldp+423,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[9U] 
                                      << 0x13U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                   >> 0xdU))),32);
        tracep->fullIData(oldp+424,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1)),32);
        tracep->fullIData(oldp+425,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[9U] 
                                       << 0x13U) | 
                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                       >> 0xdU)) + 
                                     ((0x20000U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])
                                       ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                           << 0x13U) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                             >> 0xdU))
                                       : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1)))),32);
        tracep->fullQData(oldp+426,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__memData_ins_io_rdata_ext),64);
        tracep->fullBit(oldp+428,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_11) 
                                   | (0x1cU == (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                   >> 3U))))));
        tracep->fullQData(oldp+429,((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_11) 
                                      | (0x1cU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                      >> 3U))))
                                      ? (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
        tracep->fullQData(oldp+431,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT___T_6[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT___T_6[0U])))),64);
        tracep->fullBit(oldp+433,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT___T_6[2U])));
        tracep->fullBit(oldp+434,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_valid));
        tracep->fullBit(oldp+435,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_divw));
        tracep->fullBit(oldp+436,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed));
        tracep->fullBit(oldp+437,((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
        tracep->fullQData(oldp+438,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_quotient),64);
        tracep->fullQData(oldp+440,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_remainder),64);
        tracep->fullBit(oldp+442,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns_io_mul_valid));
        tracep->fullQData(oldp+443,(((0x13U == (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                   >> 3U)))
                                      ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)),64);
        tracep->fullQData(oldp+445,(((0x13U == (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                   >> 3U)))
                                      ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
        tracep->fullBit(oldp+447,((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
        tracep->fullQData(oldp+448,((((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[0U])))),64);
        tracep->fullQData(oldp+450,((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
        tracep->fullQData(oldp+452,((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))),64);
        tracep->fullQData(oldp+454,((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),64);
        tracep->fullCData(oldp+456,((0x3fU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),6);
        tracep->fullQData(oldp+457,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_1)
                                      ? (1ULL + (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)),64);
        tracep->fullQData(oldp+459,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                               >> 0x3fU)) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                      ? (1ULL + (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
        tracep->fullBit(oldp+461,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                             >> 0x3fU)) 
                                    ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                               >> 0x3fU))) 
                                   & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))));
        tracep->fullIData(oldp+462,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_15)
                                      ? ((IData)(1U) 
                                         + (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)))
                                      : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))),32);
        tracep->fullIData(oldp+463,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                               >> 0x1fU)) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                      ? ((IData)(1U) 
                                         + (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)))
                                      : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),32);
        tracep->fullBit(oldp+464,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                             >> 0x1fU)) 
                                    ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                               >> 0x1fU))) 
                                   & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))));
        tracep->fullCData(oldp+465,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg),2);
        tracep->fullBit(oldp+466,((1U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
        tracep->fullBit(oldp+467,((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
        tracep->fullCData(oldp+468,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__cnt),6);
        tracep->fullWData(oldp+469,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg),128);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg),64);
        tracep->fullQData(oldp+475,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                         << 1U) | ((QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                                   >> 0x1fU)))),33);
        tracep->fullQData(oldp+477,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32),33);
        tracep->fullIData(oldp+479,(((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32 
                                                    >> 0x20U)))
                                      ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                          << 1U) | 
                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                                          >> 0x1fU))
                                      : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32))),32);
        VL_EXTEND_WI(96,32, __Vtemp992, ((1U & (IData)(
                                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32 
                                                        >> 0x20U)))
                                          ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                              << 1U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                                                >> 0x1fU))
                                          : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32)));
        __Vtemp993[0U] = (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                          << 1U);
        __Vtemp993[1U] = __Vtemp992[0U];
        __Vtemp993[2U] = __Vtemp992[1U];
        __Vtemp993[3U] = __Vtemp992[2U];
        tracep->fullWData(oldp+480,(__Vtemp993),128);
        __Vtemp996[0U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U] 
                           << 1U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                     >> 0x1fU));
        __Vtemp996[1U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U] 
                           << 1U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U] 
                                     >> 0x1fU));
        __Vtemp996[2U] = (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U] 
                          >> 0x1fU);
        tracep->fullWData(oldp+484,(__Vtemp996),65);
        tracep->fullWData(oldp+487,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64),65);
        tracep->fullQData(oldp+490,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                               >> 0x1fU)))
                                      : (((QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[0U]))))),64);
        __Vtemp997[0U] = (IData)((0xfffffffffffffffeULL 
                                  & (((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                      << 0x21U) | ((QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                                   << 1U))));
        __Vtemp997[1U] = (IData)(((0xfffffffffffffffeULL 
                                   & (((QData)((IData)(
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                       << 0x21U) | 
                                      ((QData)((IData)(
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                       << 1U))) >> 0x20U));
        __Vtemp997[2U] = (IData)(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U])) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U])) 
                                        << 1U) | ((QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                                  >> 0x1fU)))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[0U])))));
        __Vtemp997[3U] = (IData)((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
                                    ? (((QData)((IData)(
                                                        vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U])) 
                                         << 1U) | ((QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                                   >> 0x1fU)))
                                    : (((QData)((IData)(
                                                        vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[0U])))) 
                                  >> 0x20U));
        tracep->fullWData(oldp+492,(__Vtemp997),128);
        tracep->fullQData(oldp+496,(((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x3fU))) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                      ? (1ULL + (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg))
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg)),64);
        tracep->fullQData(oldp+498,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_1)
                                      ? (1ULL + (~ 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U])))))
                                      : (((QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U]))))),64);
        tracep->fullQData(oldp+500,(((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                      ? (0xffffffff00000000ULL 
                                         | (QData)((IData)(
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg))))))
                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg)),64);
        tracep->fullQData(oldp+502,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_15)
                                      ? (0xffffffff00000000ULL 
                                         | (QData)((IData)(
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ 
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])))))
                                      : (QData)((IData)(
                                                        vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])))),64);
        tracep->fullCData(oldp+504,((7U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])),3);
        tracep->fullWData(oldp+505,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg),132);
        __Vtemp1028[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (1U | ((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                         << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                 << 1U)));
        __Vtemp1028[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                 << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                  >> 0x1fU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                               << 1U))));
        __Vtemp1028[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                 << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                  >> 0x1fU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                               << 1U))));
        __Vtemp1028[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                                 << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                  >> 0x1fU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                               << 1U))));
        __Vtemp1028[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xfU : 0U) & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xfU : 0U) & ((
                                                   (~ 
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                                   >> 0x1fU) 
                                                  | (0xeU 
                                                     & ((~ 
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                        << 1U))))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xfU : 0U) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xfU : 0U) & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                                 >> 0x1fU) 
                                                | (0xeU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U] 
                                                      << 1U)))));
        tracep->fullWData(oldp+510,(__Vtemp1028),132);
        tracep->fullBit(oldp+515,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                   | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative))));
        tracep->fullWData(oldp+516,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg),132);
        __Vtemp1060[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (1U | ((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                         << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                 << 1U)));
        __Vtemp1060[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                 << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                  >> 0x1fU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                               << 1U))));
        __Vtemp1060[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                 << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                  >> 0x1fU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                               << 1U))));
        __Vtemp1060[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xffffffffU : 0U) 
                              & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xffffffffU : 0U) 
                                & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                    >> 0x1fU) | ((~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                                 << 1U)))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xffffffffU : 0U) 
                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xffffffffU : 0U) 
                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                  >> 0x1fU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                               << 1U))));
        __Vtemp1060[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                ? 0xfU : 0U) & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                             | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                  ? 0xfU : 0U) & ((
                                                   (~ 
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                                   >> 0x1fU) 
                                                  | (0xeU 
                                                     & ((~ 
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                        << 1U))))) 
                            | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                 ? 0xfU : 0U) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                           | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                           >> 2U)) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 1U)) & 
                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                ? 0xfU : 0U) & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                                 >> 0x1fU) 
                                                | (0xeU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U] 
                                                      << 1U)))));
        VL_ADD_W(5, __Vtemp1061, __Vtemp1060, vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg);
        VL_EXTEND_WI(133,1, __Vtemp1062, ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                          | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)));
        __Vtemp1063[0U] = __Vtemp1062[0U];
        __Vtemp1063[1U] = __Vtemp1062[1U];
        __Vtemp1063[2U] = __Vtemp1062[2U];
        __Vtemp1063[3U] = __Vtemp1062[3U];
        __Vtemp1063[4U] = __Vtemp1062[4U];
        VL_ADD_W(5, __Vtemp1064, __Vtemp1061, __Vtemp1063);
        __Vtemp1065[0U] = __Vtemp1064[0U];
        __Vtemp1065[1U] = __Vtemp1064[1U];
        __Vtemp1065[2U] = __Vtemp1064[2U];
        __Vtemp1065[3U] = __Vtemp1064[3U];
        __Vtemp1065[4U] = (0xfU & __Vtemp1064[4U]);
        tracep->fullWData(oldp+521,(__Vtemp1065),132);
        tracep->fullCData(oldp+526,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg),2);
        tracep->fullBit(oldp+527,((0U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
        tracep->fullBit(oldp+528,((1U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
        tracep->fullCData(oldp+529,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__cnt),6);
        VL_EXTEND_WQ(66,64, __Vtemp1066, ((0x13U == 
                                           (0x1fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                             >> 3U)))
                                           ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                           : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB));
        __Vtemp1067[0U] = (__Vtemp1066[0U] << 1U);
        __Vtemp1067[1U] = ((__Vtemp1066[0U] >> 0x1fU) 
                           | (__Vtemp1066[1U] << 1U));
        __Vtemp1067[2U] = ((__Vtemp1066[1U] >> 0x1fU) 
                           | (__Vtemp1066[2U] << 1U));
        tracep->fullWData(oldp+530,(__Vtemp1067),67);
        tracep->fullWData(oldp+533,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg),67);
        tracep->fullBit(oldp+536,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative));
        tracep->fullBit(oldp+537,(((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                       >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))));
        tracep->fullBit(oldp+538,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative));
        tracep->fullBit(oldp+539,((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))));
        tracep->fullBit(oldp+540,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr));
        tracep->fullBit(oldp+541,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren));
        tracep->fullCData(oldp+542,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H),6);
        tracep->fullQData(oldp+543,((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                        >> 7U))))),64);
        tracep->fullBit(oldp+545,((1U & ((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                           >> 2U) | 
                                          ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                           & (0x341U 
                                              == (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                     >> 0xdU))))) 
                                         | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)))));
        tracep->fullBit(oldp+546,((1U & ((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                           >> 2U) | 
                                          ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                           & (0x342U 
                                              == (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                     >> 0xdU))))) 
                                         | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)))));
        tracep->fullQData(oldp+547,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mcauseins),64);
        tracep->fullBit(oldp+549,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                   & (0x305U == (0xfffU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                    >> 0xdU))))));
        tracep->fullQData(oldp+550,((((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_25 
                                         | ((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                             ? (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1 
                                                | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins)
                                             : 0ULL)) 
                                        | ((4U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                            ? ((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1) 
                                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins)
                                            : 0ULL)) 
                                       | ((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                           ? ((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                                  >> 7U)))) 
                                              | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins)
                                           : 0ULL)) 
                                      | ((0x10U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                          ? ((~ (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                                    >> 7U))))) 
                                             & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins)
                                          : 0ULL)) 
                                     | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_30)),64);
        tracep->fullBit(oldp+552,((1U & (((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                            & (0x300U 
                                               == (0xfffU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                      >> 0xdU)))) 
                                           | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                              >> 2U)) 
                                          | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)) 
                                         | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96)))));
        tracep->fullQData(oldp+553,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins),64);
        tracep->fullBit(oldp+555,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                   & (0x304U == (0xfffU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                    >> 0xdU))))));
        tracep->fullQData(oldp+556,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins),64);
        tracep->fullQData(oldp+558,((((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_25 
                                         | ((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                             ? (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1 
                                                | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins)
                                             : 0ULL)) 
                                        | ((4U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                            ? ((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1) 
                                               & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins)
                                            : 0ULL)) 
                                       | ((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                           ? ((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                                  >> 7U)))) 
                                              | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins)
                                           : 0ULL)) 
                                      | ((0x10U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                          ? ((~ (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                                    >> 7U))))) 
                                             & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins)
                                          : 0ULL)) 
                                     | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_30)),64);
        tracep->fullBit(oldp+560,((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                    & (0x344U == (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                     >> 0xdU)))) 
                                   | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr))));
        tracep->fullQData(oldp+561,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins),64);
        tracep->fullIData(oldp+563,(((0x20000U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])
                                      ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                          << 0x13U) 
                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                            >> 0xdU))
                                      : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1))),32);
        tracep->fullBit(oldp+564,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                     >> 4U) & ((0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                      >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                >> 7U))))));
        tracep->fullBit(oldp+565,(((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                      >> 4U) & ((0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                    >> 8U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                    >> 7U)))) 
                                    & (0U != (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 7U)))) 
                                   & (((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                 >> 0x12U)) 
                                       != (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 7U))) 
                                      | (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 4U))))));
        tracep->fullBit(oldp+566,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                    & ((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                                 >> 1U)) 
                                       == (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                >> 7U))))));
        tracep->fullBit(oldp+567,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                     >> 4U) & ((0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                   >> 0x12U)) 
                                               == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                      >> 2U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                >> 2U))))));
        tracep->fullBit(oldp+568,(((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                      >> 4U) & ((0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                    >> 8U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                    >> 2U)))) 
                                    & (0U != (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 2U)))) 
                                   & (((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                 >> 0x12U)) 
                                       != (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 2U))) 
                                      | (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 4U))))));
        tracep->fullBit(oldp+569,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                    & ((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                                 >> 1U)) 
                                       == (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 2U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                >> 2U))))));
        tracep->fullIData(oldp+570,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__dnpcReg),32);
        tracep->fullBit(oldp+571,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire)))));
        tracep->fullIData(oldp+572,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__dnpcReg),32);
        tracep->fullBit(oldp+573,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire)))));
        tracep->fullIData(oldp+574,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__dnpcReg),32);
        tracep->fullBit(oldp+575,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire)))));
        tracep->fullIData(oldp+576,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__dnpcReg),32);
        tracep->fullBit(oldp+577,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire)))));
        tracep->fullIData(oldp+578,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__dnpcReg),32);
        tracep->fullBit(oldp+579,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire)))));
        tracep->fullIData(oldp+580,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__dnpcReg),32);
        tracep->fullBit(oldp+581,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire)))));
        tracep->fullIData(oldp+582,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__dnpcReg),32);
        tracep->fullBit(oldp+583,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire)))));
        tracep->fullIData(oldp+584,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__dnpcReg),32);
        tracep->fullBit(oldp+585,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire)))));
        tracep->fullIData(oldp+586,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__dnpcReg),32);
        tracep->fullBit(oldp+587,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire)))));
        tracep->fullIData(oldp+588,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__dnpcReg),32);
        tracep->fullBit(oldp+589,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire)))));
        tracep->fullIData(oldp+590,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__dnpcReg),32);
        tracep->fullBit(oldp+591,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire)))));
        tracep->fullIData(oldp+592,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__dnpcReg),32);
        tracep->fullBit(oldp+593,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire)))));
        tracep->fullIData(oldp+594,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__dnpcReg),32);
        tracep->fullBit(oldp+595,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire)))));
        tracep->fullIData(oldp+596,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__dnpcReg),32);
        tracep->fullBit(oldp+597,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire)))));
        tracep->fullIData(oldp+598,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__dnpcReg),32);
        tracep->fullBit(oldp+599,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire)))));
        tracep->fullIData(oldp+600,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__dnpcReg),32);
        tracep->fullBit(oldp+601,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire)) 
                                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire)))));
        tracep->fullIData(oldp+602,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_0),32);
        tracep->fullBit(oldp+603,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_0));
        tracep->fullBit(oldp+604,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_0));
        tracep->fullIData(oldp+605,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_1),32);
        tracep->fullBit(oldp+606,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_1));
        tracep->fullBit(oldp+607,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_1));
        tracep->fullIData(oldp+608,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_2),32);
        tracep->fullBit(oldp+609,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_2));
        tracep->fullBit(oldp+610,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_2));
        tracep->fullIData(oldp+611,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_3),32);
        tracep->fullBit(oldp+612,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_3));
        tracep->fullBit(oldp+613,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_3));
        tracep->fullIData(oldp+614,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_4),32);
        tracep->fullBit(oldp+615,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_4));
        tracep->fullBit(oldp+616,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_4));
        tracep->fullIData(oldp+617,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_5),32);
        tracep->fullBit(oldp+618,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_5));
        tracep->fullBit(oldp+619,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_5));
        tracep->fullIData(oldp+620,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_6),32);
        tracep->fullBit(oldp+621,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_6));
        tracep->fullBit(oldp+622,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_6));
        tracep->fullIData(oldp+623,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_7),32);
        tracep->fullBit(oldp+624,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_7));
        tracep->fullBit(oldp+625,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_7));
        tracep->fullIData(oldp+626,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_8),32);
        tracep->fullBit(oldp+627,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_8));
        tracep->fullBit(oldp+628,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_8));
        tracep->fullIData(oldp+629,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_9),32);
        tracep->fullBit(oldp+630,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_9));
        tracep->fullBit(oldp+631,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_9));
        tracep->fullIData(oldp+632,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_10),32);
        tracep->fullBit(oldp+633,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_10));
        tracep->fullBit(oldp+634,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_10));
        tracep->fullIData(oldp+635,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_11),32);
        tracep->fullBit(oldp+636,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_11));
        tracep->fullBit(oldp+637,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_11));
        tracep->fullIData(oldp+638,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_12),32);
        tracep->fullBit(oldp+639,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_12));
        tracep->fullBit(oldp+640,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_12));
        tracep->fullIData(oldp+641,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_13),32);
        tracep->fullBit(oldp+642,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_13));
        tracep->fullBit(oldp+643,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_13));
        tracep->fullIData(oldp+644,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_14),32);
        tracep->fullBit(oldp+645,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_14));
        tracep->fullBit(oldp+646,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_14));
        tracep->fullIData(oldp+647,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_15),32);
        tracep->fullBit(oldp+648,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_15));
        tracep->fullBit(oldp+649,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_15));
        tracep->fullBit(oldp+650,(((((((((((((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_0) 
                                                 | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_1)) 
                                                | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_2)) 
                                               | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_3)) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_4)) 
                                             | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_5)) 
                                            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_6)) 
                                           | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_7)) 
                                          | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_8)) 
                                         | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_9)) 
                                        | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_10)) 
                                       | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_11)) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_12)) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_13)) 
                                    | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_14)) 
                                   | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_15))));
        tracep->fullCData(oldp+651,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__cnt),4);
        tracep->fullBit(oldp+652,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_0));
        tracep->fullBit(oldp+653,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_1));
        tracep->fullBit(oldp+654,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_2));
        tracep->fullBit(oldp+655,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_3));
        tracep->fullBit(oldp+656,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_4));
        tracep->fullBit(oldp+657,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_5));
        tracep->fullBit(oldp+658,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_6));
        tracep->fullBit(oldp+659,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_7));
        tracep->fullBit(oldp+660,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_8));
        tracep->fullBit(oldp+661,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_9));
        tracep->fullBit(oldp+662,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_10));
        tracep->fullBit(oldp+663,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_11));
        tracep->fullBit(oldp+664,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_12));
        tracep->fullBit(oldp+665,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_13));
        tracep->fullBit(oldp+666,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_14));
        tracep->fullBit(oldp+667,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_15));
        tracep->fullBit(oldp+668,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitif));
        tracep->fullBit(oldp+669,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__takenV));
        tracep->fullCData(oldp+670,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire),2);
        tracep->fullBit(oldp+671,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__takenV));
        tracep->fullCData(oldp+672,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire),2);
        tracep->fullBit(oldp+673,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__takenV));
        tracep->fullCData(oldp+674,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire),2);
        tracep->fullBit(oldp+675,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__takenV));
        tracep->fullCData(oldp+676,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire),2);
        tracep->fullBit(oldp+677,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__takenV));
        tracep->fullCData(oldp+678,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire),2);
        tracep->fullBit(oldp+679,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__takenV));
        tracep->fullCData(oldp+680,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire),2);
        tracep->fullBit(oldp+681,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__takenV));
        tracep->fullCData(oldp+682,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire),2);
        tracep->fullBit(oldp+683,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__takenV));
        tracep->fullCData(oldp+684,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire),2);
        tracep->fullBit(oldp+685,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__takenV));
        tracep->fullCData(oldp+686,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire),2);
        tracep->fullBit(oldp+687,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__takenV));
        tracep->fullCData(oldp+688,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire),2);
        tracep->fullBit(oldp+689,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__takenV));
        tracep->fullCData(oldp+690,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire),2);
        tracep->fullBit(oldp+691,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__takenV));
        tracep->fullCData(oldp+692,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire),2);
        tracep->fullBit(oldp+693,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__takenV));
        tracep->fullCData(oldp+694,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire),2);
        tracep->fullBit(oldp+695,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__takenV));
        tracep->fullCData(oldp+696,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire),2);
        tracep->fullBit(oldp+697,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__takenV));
        tracep->fullCData(oldp+698,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire),2);
        tracep->fullBit(oldp+699,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__takenV));
        tracep->fullCData(oldp+700,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire),2);
        tracep->fullBit(oldp+701,((0x100073U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                                  << 0x13U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U] 
                                                    >> 0xdU)))));
        tracep->fullCData(oldp+702,((0xfU & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),4);
        tracep->fullIData(oldp+703,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                     >> 0xaU)),22);
        tracep->fullBit(oldp+704,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_0));
        tracep->fullBit(oldp+705,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_0));
        tracep->fullBit(oldp+706,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_0));
        tracep->fullBit(oldp+707,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_0));
        tracep->fullBit(oldp+708,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_0));
        tracep->fullBit(oldp+709,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_0));
        tracep->fullBit(oldp+710,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_0));
        tracep->fullBit(oldp+711,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_0));
        tracep->fullBit(oldp+712,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_0));
        tracep->fullBit(oldp+713,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_0));
        tracep->fullBit(oldp+714,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_0));
        tracep->fullBit(oldp+715,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_0));
        tracep->fullBit(oldp+716,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_0));
        tracep->fullBit(oldp+717,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_0));
        tracep->fullBit(oldp+718,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_0));
        tracep->fullBit(oldp+719,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_0));
        tracep->fullBit(oldp+720,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_0));
        tracep->fullBit(oldp+721,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_0));
        tracep->fullBit(oldp+722,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_0));
        tracep->fullBit(oldp+723,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_0));
        tracep->fullBit(oldp+724,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_0));
        tracep->fullBit(oldp+725,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_0));
        tracep->fullBit(oldp+726,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_0));
        tracep->fullBit(oldp+727,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_0));
        tracep->fullBit(oldp+728,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_0));
        tracep->fullBit(oldp+729,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_0));
        tracep->fullBit(oldp+730,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_0));
        tracep->fullBit(oldp+731,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_0));
        tracep->fullBit(oldp+732,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_0));
        tracep->fullBit(oldp+733,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_0));
        tracep->fullBit(oldp+734,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_0));
        tracep->fullBit(oldp+735,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_0));
        tracep->fullBit(oldp+736,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_0));
        tracep->fullBit(oldp+737,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_0));
        tracep->fullBit(oldp+738,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_0));
        tracep->fullBit(oldp+739,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_0));
        tracep->fullBit(oldp+740,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_0));
        tracep->fullBit(oldp+741,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_0));
        tracep->fullBit(oldp+742,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_0));
        tracep->fullBit(oldp+743,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_0));
        tracep->fullBit(oldp+744,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_0));
        tracep->fullBit(oldp+745,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_0));
        tracep->fullBit(oldp+746,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_0));
        tracep->fullBit(oldp+747,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_0));
        tracep->fullBit(oldp+748,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_0));
        tracep->fullBit(oldp+749,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_0));
        tracep->fullBit(oldp+750,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_0));
        tracep->fullBit(oldp+751,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_0));
        tracep->fullBit(oldp+752,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_0));
        tracep->fullBit(oldp+753,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_0));
        tracep->fullBit(oldp+754,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_0));
        tracep->fullBit(oldp+755,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_0));
        tracep->fullBit(oldp+756,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_0));
        tracep->fullBit(oldp+757,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_0));
        tracep->fullBit(oldp+758,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_0));
        tracep->fullBit(oldp+759,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_0));
        tracep->fullBit(oldp+760,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_0));
        tracep->fullBit(oldp+761,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_0));
        tracep->fullBit(oldp+762,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_0));
        tracep->fullBit(oldp+763,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_0));
        tracep->fullBit(oldp+764,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_0));
        tracep->fullBit(oldp+765,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_0));
        tracep->fullBit(oldp+766,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_0));
        tracep->fullBit(oldp+767,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_0));
        tracep->fullBit(oldp+768,(((0x3fU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_0)
                                    : ((0x3eU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_0)
                                        : ((0x3dU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_0)
                                            : ((0x3cU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_0)
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_0)
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_0)
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_0)
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_0)
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_0)
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_0)
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_0)
                                                          : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_232_0))))))))))))));
        tracep->fullIData(oldp+769,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_0),22);
        tracep->fullIData(oldp+770,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_0),22);
        tracep->fullIData(oldp+771,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_0),22);
        tracep->fullIData(oldp+772,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_0),22);
        tracep->fullIData(oldp+773,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_0),22);
        tracep->fullIData(oldp+774,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_0),22);
        tracep->fullIData(oldp+775,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_0),22);
        tracep->fullIData(oldp+776,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_0),22);
        tracep->fullIData(oldp+777,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_0),22);
        tracep->fullIData(oldp+778,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_0),22);
        tracep->fullIData(oldp+779,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_0),22);
        tracep->fullIData(oldp+780,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_0),22);
        tracep->fullIData(oldp+781,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_0),22);
        tracep->fullIData(oldp+782,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_0),22);
        tracep->fullIData(oldp+783,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_0),22);
        tracep->fullIData(oldp+784,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_0),22);
        tracep->fullIData(oldp+785,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_0),22);
        tracep->fullIData(oldp+786,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_0),22);
        tracep->fullIData(oldp+787,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_0),22);
        tracep->fullIData(oldp+788,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_0),22);
        tracep->fullIData(oldp+789,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_0),22);
        tracep->fullIData(oldp+790,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_0),22);
        tracep->fullIData(oldp+791,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_0),22);
        tracep->fullIData(oldp+792,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_0),22);
        tracep->fullIData(oldp+793,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_0),22);
        tracep->fullIData(oldp+794,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_0),22);
        tracep->fullIData(oldp+795,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_0),22);
        tracep->fullIData(oldp+796,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_0),22);
        tracep->fullIData(oldp+797,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_0),22);
        tracep->fullIData(oldp+798,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_0),22);
        tracep->fullIData(oldp+799,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_0),22);
        tracep->fullIData(oldp+800,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_0),22);
        tracep->fullIData(oldp+801,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_0),22);
        tracep->fullIData(oldp+802,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_0),22);
        tracep->fullIData(oldp+803,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_0),22);
        tracep->fullIData(oldp+804,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_0),22);
        tracep->fullIData(oldp+805,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_0),22);
        tracep->fullIData(oldp+806,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_0),22);
        tracep->fullIData(oldp+807,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_0),22);
        tracep->fullIData(oldp+808,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_0),22);
        tracep->fullIData(oldp+809,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_0),22);
        tracep->fullIData(oldp+810,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_0),22);
        tracep->fullIData(oldp+811,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_0),22);
        tracep->fullIData(oldp+812,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_0),22);
        tracep->fullIData(oldp+813,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_0),22);
        tracep->fullIData(oldp+814,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_0),22);
        tracep->fullIData(oldp+815,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_0),22);
        tracep->fullIData(oldp+816,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_0),22);
        tracep->fullIData(oldp+817,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_0),22);
        tracep->fullIData(oldp+818,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_0),22);
        tracep->fullIData(oldp+819,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_0),22);
        tracep->fullIData(oldp+820,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_0),22);
        tracep->fullIData(oldp+821,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_0),22);
        tracep->fullIData(oldp+822,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_0),22);
        tracep->fullIData(oldp+823,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_0),22);
        tracep->fullIData(oldp+824,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_0),22);
        tracep->fullIData(oldp+825,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_0),22);
        tracep->fullIData(oldp+826,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_0),22);
        tracep->fullIData(oldp+827,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_0),22);
        tracep->fullIData(oldp+828,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_0),22);
        tracep->fullIData(oldp+829,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_0),22);
        tracep->fullIData(oldp+830,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_0),22);
        tracep->fullIData(oldp+831,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_0),22);
        tracep->fullIData(oldp+832,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_0),22);
        tracep->fullIData(oldp+833,(((0x3fU == (0x3fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_0
                                      : ((0x3eU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_0
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_0
                                              : ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_0
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_0
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_0
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_0
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_0
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_0
                                                       : 
                                                      ((0x36U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_0
                                                        : 
                                                       ((0x35U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_0
                                                         : vlSelf->ysyx_041728__DOT__iCache__DOT___T_107_0)))))))))))),22);
        tracep->fullBit(oldp+834,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_0));
        tracep->fullBit(oldp+835,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_1));
        tracep->fullBit(oldp+836,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_1));
        tracep->fullBit(oldp+837,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_1));
        tracep->fullBit(oldp+838,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_1));
        tracep->fullBit(oldp+839,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_1));
        tracep->fullBit(oldp+840,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_1));
        tracep->fullBit(oldp+841,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_1));
        tracep->fullBit(oldp+842,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_1));
        tracep->fullBit(oldp+843,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_1));
        tracep->fullBit(oldp+844,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_1));
        tracep->fullBit(oldp+845,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_1));
        tracep->fullBit(oldp+846,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_1));
        tracep->fullBit(oldp+847,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_1));
        tracep->fullBit(oldp+848,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_1));
        tracep->fullBit(oldp+849,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_1));
        tracep->fullBit(oldp+850,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_1));
        tracep->fullBit(oldp+851,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_1));
        tracep->fullBit(oldp+852,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_1));
        tracep->fullBit(oldp+853,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_1));
        tracep->fullBit(oldp+854,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_1));
        tracep->fullBit(oldp+855,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_1));
        tracep->fullBit(oldp+856,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_1));
        tracep->fullBit(oldp+857,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_1));
        tracep->fullBit(oldp+858,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_1));
        tracep->fullBit(oldp+859,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_1));
        tracep->fullBit(oldp+860,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_1));
        tracep->fullBit(oldp+861,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_1));
        tracep->fullBit(oldp+862,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_1));
        tracep->fullBit(oldp+863,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_1));
        tracep->fullBit(oldp+864,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_1));
        tracep->fullBit(oldp+865,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_1));
        tracep->fullBit(oldp+866,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_1));
        tracep->fullBit(oldp+867,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_1));
        tracep->fullBit(oldp+868,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_1));
        tracep->fullBit(oldp+869,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_1));
        tracep->fullBit(oldp+870,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_1));
        tracep->fullBit(oldp+871,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_1));
        tracep->fullBit(oldp+872,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_1));
        tracep->fullBit(oldp+873,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_1));
        tracep->fullBit(oldp+874,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_1));
        tracep->fullBit(oldp+875,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_1));
        tracep->fullBit(oldp+876,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_1));
        tracep->fullBit(oldp+877,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_1));
        tracep->fullBit(oldp+878,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_1));
        tracep->fullBit(oldp+879,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_1));
        tracep->fullBit(oldp+880,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_1));
        tracep->fullBit(oldp+881,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_1));
        tracep->fullBit(oldp+882,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_1));
        tracep->fullBit(oldp+883,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_1));
        tracep->fullBit(oldp+884,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_1));
        tracep->fullBit(oldp+885,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_1));
        tracep->fullBit(oldp+886,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_1));
        tracep->fullBit(oldp+887,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_1));
        tracep->fullBit(oldp+888,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_1));
        tracep->fullBit(oldp+889,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_1));
        tracep->fullBit(oldp+890,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_1));
        tracep->fullBit(oldp+891,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_1));
        tracep->fullBit(oldp+892,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_1));
        tracep->fullBit(oldp+893,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_1));
        tracep->fullBit(oldp+894,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_1));
        tracep->fullBit(oldp+895,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_1));
        tracep->fullBit(oldp+896,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_1));
        tracep->fullBit(oldp+897,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_1));
        tracep->fullBit(oldp+898,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_1));
        tracep->fullBit(oldp+899,(((0x3fU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_1)
                                    : ((0x3eU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_1)
                                        : ((0x3dU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_1)
                                            : ((0x3cU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_1)
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_1)
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_1)
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_1)
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_1)
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_1)
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_1)
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_1)
                                                          : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_232_1))))))))))))));
        tracep->fullIData(oldp+900,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_1),22);
        tracep->fullIData(oldp+901,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_1),22);
        tracep->fullIData(oldp+902,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_1),22);
        tracep->fullIData(oldp+903,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_1),22);
        tracep->fullIData(oldp+904,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_1),22);
        tracep->fullIData(oldp+905,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_1),22);
        tracep->fullIData(oldp+906,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_1),22);
        tracep->fullIData(oldp+907,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_1),22);
        tracep->fullIData(oldp+908,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_1),22);
        tracep->fullIData(oldp+909,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_1),22);
        tracep->fullIData(oldp+910,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_1),22);
        tracep->fullIData(oldp+911,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_1),22);
        tracep->fullIData(oldp+912,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_1),22);
        tracep->fullIData(oldp+913,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_1),22);
        tracep->fullIData(oldp+914,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_1),22);
        tracep->fullIData(oldp+915,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_1),22);
        tracep->fullIData(oldp+916,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_1),22);
        tracep->fullIData(oldp+917,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_1),22);
        tracep->fullIData(oldp+918,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_1),22);
        tracep->fullIData(oldp+919,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_1),22);
        tracep->fullIData(oldp+920,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_1),22);
        tracep->fullIData(oldp+921,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_1),22);
        tracep->fullIData(oldp+922,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_1),22);
        tracep->fullIData(oldp+923,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_1),22);
        tracep->fullIData(oldp+924,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_1),22);
        tracep->fullIData(oldp+925,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_1),22);
        tracep->fullIData(oldp+926,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_1),22);
        tracep->fullIData(oldp+927,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_1),22);
        tracep->fullIData(oldp+928,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_1),22);
        tracep->fullIData(oldp+929,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_1),22);
        tracep->fullIData(oldp+930,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_1),22);
        tracep->fullIData(oldp+931,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_1),22);
        tracep->fullIData(oldp+932,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_1),22);
        tracep->fullIData(oldp+933,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_1),22);
        tracep->fullIData(oldp+934,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_1),22);
        tracep->fullIData(oldp+935,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_1),22);
        tracep->fullIData(oldp+936,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_1),22);
        tracep->fullIData(oldp+937,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_1),22);
        tracep->fullIData(oldp+938,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_1),22);
        tracep->fullIData(oldp+939,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_1),22);
        tracep->fullIData(oldp+940,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_1),22);
        tracep->fullIData(oldp+941,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_1),22);
        tracep->fullIData(oldp+942,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_1),22);
        tracep->fullIData(oldp+943,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_1),22);
        tracep->fullIData(oldp+944,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_1),22);
        tracep->fullIData(oldp+945,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_1),22);
        tracep->fullIData(oldp+946,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_1),22);
        tracep->fullIData(oldp+947,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_1),22);
        tracep->fullIData(oldp+948,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_1),22);
        tracep->fullIData(oldp+949,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_1),22);
        tracep->fullIData(oldp+950,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_1),22);
        tracep->fullIData(oldp+951,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_1),22);
        tracep->fullIData(oldp+952,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_1),22);
        tracep->fullIData(oldp+953,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_1),22);
        tracep->fullIData(oldp+954,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_1),22);
        tracep->fullIData(oldp+955,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_1),22);
        tracep->fullIData(oldp+956,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_1),22);
        tracep->fullIData(oldp+957,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_1),22);
        tracep->fullIData(oldp+958,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_1),22);
        tracep->fullIData(oldp+959,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_1),22);
        tracep->fullIData(oldp+960,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_1),22);
        tracep->fullIData(oldp+961,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_1),22);
        tracep->fullIData(oldp+962,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_1),22);
        tracep->fullIData(oldp+963,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_1),22);
        tracep->fullIData(oldp+964,(((0x3fU == (0x3fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_1
                                      : ((0x3eU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_1
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_1
                                              : ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_1
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_1
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_1
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_1
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_1
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_1
                                                       : 
                                                      ((0x36U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_1
                                                        : 
                                                       ((0x35U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_1
                                                         : vlSelf->ysyx_041728__DOT__iCache__DOT___T_107_1)))))))))))),22);
        tracep->fullBit(oldp+965,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_1));
        tracep->fullBit(oldp+966,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_2));
        tracep->fullBit(oldp+967,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_2));
        tracep->fullBit(oldp+968,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_2));
        tracep->fullBit(oldp+969,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_2));
        tracep->fullBit(oldp+970,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_2));
        tracep->fullBit(oldp+971,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_2));
        tracep->fullBit(oldp+972,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_2));
        tracep->fullBit(oldp+973,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_2));
        tracep->fullBit(oldp+974,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_2));
        tracep->fullBit(oldp+975,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_2));
        tracep->fullBit(oldp+976,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_2));
        tracep->fullBit(oldp+977,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_2));
        tracep->fullBit(oldp+978,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_2));
        tracep->fullBit(oldp+979,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_2));
        tracep->fullBit(oldp+980,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_2));
        tracep->fullBit(oldp+981,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_2));
        tracep->fullBit(oldp+982,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_2));
        tracep->fullBit(oldp+983,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_2));
        tracep->fullBit(oldp+984,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_2));
        tracep->fullBit(oldp+985,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_2));
        tracep->fullBit(oldp+986,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_2));
        tracep->fullBit(oldp+987,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_2));
        tracep->fullBit(oldp+988,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_2));
        tracep->fullBit(oldp+989,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_2));
        tracep->fullBit(oldp+990,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_2));
        tracep->fullBit(oldp+991,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_2));
        tracep->fullBit(oldp+992,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_2));
        tracep->fullBit(oldp+993,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_2));
        tracep->fullBit(oldp+994,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_2));
        tracep->fullBit(oldp+995,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_2));
        tracep->fullBit(oldp+996,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_2));
        tracep->fullBit(oldp+997,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_2));
        tracep->fullBit(oldp+998,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_2));
        tracep->fullBit(oldp+999,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_2));
        tracep->fullBit(oldp+1000,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_2));
        tracep->fullBit(oldp+1001,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_2));
        tracep->fullBit(oldp+1002,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_2));
        tracep->fullBit(oldp+1003,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_2));
        tracep->fullBit(oldp+1004,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_2));
        tracep->fullBit(oldp+1005,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_2));
        tracep->fullBit(oldp+1006,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_2));
        tracep->fullBit(oldp+1007,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_2));
        tracep->fullBit(oldp+1008,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_2));
        tracep->fullBit(oldp+1009,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_2));
        tracep->fullBit(oldp+1010,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_2));
        tracep->fullBit(oldp+1011,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_2));
        tracep->fullBit(oldp+1012,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_2));
        tracep->fullBit(oldp+1013,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_2));
        tracep->fullBit(oldp+1014,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_2));
        tracep->fullBit(oldp+1015,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_2));
        tracep->fullBit(oldp+1016,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_2));
        tracep->fullBit(oldp+1017,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_2));
        tracep->fullBit(oldp+1018,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_2));
        tracep->fullBit(oldp+1019,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_2));
        tracep->fullBit(oldp+1020,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_2));
        tracep->fullBit(oldp+1021,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_2));
        tracep->fullBit(oldp+1022,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_2));
        tracep->fullBit(oldp+1023,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_2));
        tracep->fullBit(oldp+1024,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_2));
        tracep->fullBit(oldp+1025,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_2));
        tracep->fullBit(oldp+1026,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_2));
        tracep->fullBit(oldp+1027,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_2));
        tracep->fullBit(oldp+1028,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_2));
        tracep->fullBit(oldp+1029,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_2));
        tracep->fullBit(oldp+1030,(((0x3fU == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_2)
                                     : ((0x3eU == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_2)
                                         : ((0x3dU 
                                             == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                             ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_2)
                                             : ((0x3cU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_2)
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_2)
                                                  : 
                                                 ((0x3aU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_2)
                                                   : 
                                                  ((0x39U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_2)
                                                    : 
                                                   ((0x38U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_2)
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_2)
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_2)
                                                       : 
                                                      ((0x35U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_2)
                                                        : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_232_2))))))))))))));
        tracep->fullIData(oldp+1031,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_2),22);
        tracep->fullIData(oldp+1032,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_2),22);
        tracep->fullIData(oldp+1033,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_2),22);
        tracep->fullIData(oldp+1034,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_2),22);
        tracep->fullIData(oldp+1035,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_2),22);
        tracep->fullIData(oldp+1036,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_2),22);
        tracep->fullIData(oldp+1037,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_2),22);
        tracep->fullIData(oldp+1038,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_2),22);
        tracep->fullIData(oldp+1039,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_2),22);
        tracep->fullIData(oldp+1040,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_2),22);
        tracep->fullIData(oldp+1041,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_2),22);
        tracep->fullIData(oldp+1042,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_2),22);
        tracep->fullIData(oldp+1043,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_2),22);
        tracep->fullIData(oldp+1044,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_2),22);
        tracep->fullIData(oldp+1045,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_2),22);
        tracep->fullIData(oldp+1046,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_2),22);
        tracep->fullIData(oldp+1047,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_2),22);
        tracep->fullIData(oldp+1048,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_2),22);
        tracep->fullIData(oldp+1049,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_2),22);
        tracep->fullIData(oldp+1050,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_2),22);
        tracep->fullIData(oldp+1051,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_2),22);
        tracep->fullIData(oldp+1052,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_2),22);
        tracep->fullIData(oldp+1053,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_2),22);
        tracep->fullIData(oldp+1054,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_2),22);
        tracep->fullIData(oldp+1055,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_2),22);
        tracep->fullIData(oldp+1056,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_2),22);
        tracep->fullIData(oldp+1057,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_2),22);
        tracep->fullIData(oldp+1058,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_2),22);
        tracep->fullIData(oldp+1059,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_2),22);
        tracep->fullIData(oldp+1060,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_2),22);
        tracep->fullIData(oldp+1061,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_2),22);
        tracep->fullIData(oldp+1062,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_2),22);
        tracep->fullIData(oldp+1063,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_2),22);
        tracep->fullIData(oldp+1064,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_2),22);
        tracep->fullIData(oldp+1065,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_2),22);
        tracep->fullIData(oldp+1066,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_2),22);
        tracep->fullIData(oldp+1067,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_2),22);
        tracep->fullIData(oldp+1068,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_2),22);
        tracep->fullIData(oldp+1069,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_2),22);
        tracep->fullIData(oldp+1070,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_2),22);
        tracep->fullIData(oldp+1071,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_2),22);
        tracep->fullIData(oldp+1072,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_2),22);
        tracep->fullIData(oldp+1073,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_2),22);
        tracep->fullIData(oldp+1074,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_2),22);
        tracep->fullIData(oldp+1075,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_2),22);
        tracep->fullIData(oldp+1076,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_2),22);
        tracep->fullIData(oldp+1077,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_2),22);
        tracep->fullIData(oldp+1078,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_2),22);
        tracep->fullIData(oldp+1079,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_2),22);
        tracep->fullIData(oldp+1080,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_2),22);
        tracep->fullIData(oldp+1081,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_2),22);
        tracep->fullIData(oldp+1082,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_2),22);
        tracep->fullIData(oldp+1083,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_2),22);
        tracep->fullIData(oldp+1084,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_2),22);
        tracep->fullIData(oldp+1085,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_2),22);
        tracep->fullIData(oldp+1086,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_2),22);
        tracep->fullIData(oldp+1087,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_2),22);
        tracep->fullIData(oldp+1088,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_2),22);
        tracep->fullIData(oldp+1089,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_2),22);
        tracep->fullIData(oldp+1090,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_2),22);
        tracep->fullIData(oldp+1091,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_2),22);
        tracep->fullIData(oldp+1092,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_2),22);
        tracep->fullIData(oldp+1093,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_2),22);
        tracep->fullIData(oldp+1094,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_2),22);
        tracep->fullIData(oldp+1095,(((0x3fU == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_2
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_2
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_2
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_2
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_2
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_2
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_2
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_2
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_2
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_2
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_2
                                                          : vlSelf->ysyx_041728__DOT__iCache__DOT___T_107_2)))))))))))),22);
        tracep->fullBit(oldp+1096,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_2));
        tracep->fullBit(oldp+1097,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_3));
        tracep->fullBit(oldp+1098,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_3));
        tracep->fullBit(oldp+1099,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_3));
        tracep->fullBit(oldp+1100,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_3));
        tracep->fullBit(oldp+1101,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_3));
        tracep->fullBit(oldp+1102,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_3));
        tracep->fullBit(oldp+1103,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_3));
        tracep->fullBit(oldp+1104,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_3));
        tracep->fullBit(oldp+1105,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_3));
        tracep->fullBit(oldp+1106,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_3));
        tracep->fullBit(oldp+1107,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_3));
        tracep->fullBit(oldp+1108,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_3));
        tracep->fullBit(oldp+1109,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_3));
        tracep->fullBit(oldp+1110,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_3));
        tracep->fullBit(oldp+1111,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_3));
        tracep->fullBit(oldp+1112,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_3));
        tracep->fullBit(oldp+1113,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_3));
        tracep->fullBit(oldp+1114,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_3));
        tracep->fullBit(oldp+1115,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_3));
        tracep->fullBit(oldp+1116,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_3));
        tracep->fullBit(oldp+1117,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_3));
        tracep->fullBit(oldp+1118,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_3));
        tracep->fullBit(oldp+1119,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_3));
        tracep->fullBit(oldp+1120,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_3));
        tracep->fullBit(oldp+1121,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_3));
        tracep->fullBit(oldp+1122,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_3));
        tracep->fullBit(oldp+1123,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_3));
        tracep->fullBit(oldp+1124,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_3));
        tracep->fullBit(oldp+1125,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_3));
        tracep->fullBit(oldp+1126,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_3));
        tracep->fullBit(oldp+1127,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_3));
        tracep->fullBit(oldp+1128,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_3));
        tracep->fullBit(oldp+1129,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_3));
        tracep->fullBit(oldp+1130,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_3));
        tracep->fullBit(oldp+1131,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_3));
        tracep->fullBit(oldp+1132,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_3));
        tracep->fullBit(oldp+1133,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_3));
        tracep->fullBit(oldp+1134,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_3));
        tracep->fullBit(oldp+1135,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_3));
        tracep->fullBit(oldp+1136,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_3));
        tracep->fullBit(oldp+1137,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_3));
        tracep->fullBit(oldp+1138,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_3));
        tracep->fullBit(oldp+1139,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_3));
        tracep->fullBit(oldp+1140,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_3));
        tracep->fullBit(oldp+1141,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_3));
        tracep->fullBit(oldp+1142,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_3));
        tracep->fullBit(oldp+1143,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_3));
        tracep->fullBit(oldp+1144,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_3));
        tracep->fullBit(oldp+1145,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_3));
        tracep->fullBit(oldp+1146,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_3));
        tracep->fullBit(oldp+1147,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_3));
        tracep->fullBit(oldp+1148,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_3));
        tracep->fullBit(oldp+1149,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_3));
        tracep->fullBit(oldp+1150,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_3));
        tracep->fullBit(oldp+1151,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_3));
        tracep->fullBit(oldp+1152,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_3));
        tracep->fullBit(oldp+1153,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_3));
        tracep->fullBit(oldp+1154,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_3));
        tracep->fullBit(oldp+1155,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_3));
        tracep->fullBit(oldp+1156,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_3));
        tracep->fullBit(oldp+1157,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_3));
        tracep->fullBit(oldp+1158,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_3));
        tracep->fullBit(oldp+1159,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_3));
        tracep->fullBit(oldp+1160,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_3));
        tracep->fullBit(oldp+1161,(((0x3fU == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_3)
                                     : ((0x3eU == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_3)
                                         : ((0x3dU 
                                             == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                             ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_3)
                                             : ((0x3cU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_3)
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_3)
                                                  : 
                                                 ((0x3aU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_3)
                                                   : 
                                                  ((0x39U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_3)
                                                    : 
                                                   ((0x38U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_3)
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_3)
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_3)
                                                       : 
                                                      ((0x35U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_3)
                                                        : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_232_3))))))))))))));
        tracep->fullIData(oldp+1162,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_3),22);
        tracep->fullIData(oldp+1163,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_3),22);
        tracep->fullIData(oldp+1164,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_3),22);
        tracep->fullIData(oldp+1165,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_3),22);
        tracep->fullIData(oldp+1166,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_3),22);
        tracep->fullIData(oldp+1167,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_3),22);
        tracep->fullIData(oldp+1168,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_3),22);
        tracep->fullIData(oldp+1169,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_3),22);
        tracep->fullIData(oldp+1170,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_3),22);
        tracep->fullIData(oldp+1171,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_3),22);
        tracep->fullIData(oldp+1172,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_3),22);
        tracep->fullIData(oldp+1173,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_3),22);
        tracep->fullIData(oldp+1174,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_3),22);
        tracep->fullIData(oldp+1175,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_3),22);
        tracep->fullIData(oldp+1176,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_3),22);
        tracep->fullIData(oldp+1177,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_3),22);
        tracep->fullIData(oldp+1178,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_3),22);
        tracep->fullIData(oldp+1179,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_3),22);
        tracep->fullIData(oldp+1180,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_3),22);
        tracep->fullIData(oldp+1181,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_3),22);
        tracep->fullIData(oldp+1182,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_3),22);
        tracep->fullIData(oldp+1183,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_3),22);
        tracep->fullIData(oldp+1184,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_3),22);
        tracep->fullIData(oldp+1185,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_3),22);
        tracep->fullIData(oldp+1186,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_3),22);
        tracep->fullIData(oldp+1187,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_3),22);
        tracep->fullIData(oldp+1188,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_3),22);
        tracep->fullIData(oldp+1189,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_3),22);
        tracep->fullIData(oldp+1190,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_3),22);
        tracep->fullIData(oldp+1191,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_3),22);
        tracep->fullIData(oldp+1192,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_3),22);
        tracep->fullIData(oldp+1193,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_3),22);
        tracep->fullIData(oldp+1194,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_3),22);
        tracep->fullIData(oldp+1195,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_3),22);
        tracep->fullIData(oldp+1196,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_3),22);
        tracep->fullIData(oldp+1197,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_3),22);
        tracep->fullIData(oldp+1198,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_3),22);
        tracep->fullIData(oldp+1199,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_3),22);
        tracep->fullIData(oldp+1200,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_3),22);
        tracep->fullIData(oldp+1201,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_3),22);
        tracep->fullIData(oldp+1202,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_3),22);
        tracep->fullIData(oldp+1203,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_3),22);
        tracep->fullIData(oldp+1204,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_3),22);
        tracep->fullIData(oldp+1205,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_3),22);
        tracep->fullIData(oldp+1206,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_3),22);
        tracep->fullIData(oldp+1207,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_3),22);
        tracep->fullIData(oldp+1208,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_3),22);
        tracep->fullIData(oldp+1209,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_3),22);
        tracep->fullIData(oldp+1210,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_3),22);
        tracep->fullIData(oldp+1211,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_3),22);
        tracep->fullIData(oldp+1212,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_3),22);
        tracep->fullIData(oldp+1213,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_3),22);
        tracep->fullIData(oldp+1214,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_3),22);
        tracep->fullIData(oldp+1215,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_3),22);
        tracep->fullIData(oldp+1216,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_3),22);
        tracep->fullIData(oldp+1217,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_3),22);
        tracep->fullIData(oldp+1218,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_3),22);
        tracep->fullIData(oldp+1219,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_3),22);
        tracep->fullIData(oldp+1220,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_3),22);
        tracep->fullIData(oldp+1221,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_3),22);
        tracep->fullIData(oldp+1222,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_3),22);
        tracep->fullIData(oldp+1223,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_3),22);
        tracep->fullIData(oldp+1224,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_3),22);
        tracep->fullIData(oldp+1225,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_3),22);
        tracep->fullIData(oldp+1226,(((0x3fU == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_3
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_3
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_3
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_3
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_3
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_3
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_3
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_3
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_3
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_3
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_3
                                                          : vlSelf->ysyx_041728__DOT__iCache__DOT___T_107_3)))))))))))),22);
        tracep->fullBit(oldp+1227,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_3));
        tracep->fullBit(oldp+1228,(vlSelf->ysyx_041728__DOT__iCache__DOT__hit));
        tracep->fullBit(oldp+1229,((1U & ((~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186)) 
                                          & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__hit))))));
        tracep->fullBit(oldp+1230,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState)))));
        tracep->fullWData(oldp+1231,(vlSelf->ysyx_041728__DOT__iCache__DOT__waysel),128);
        tracep->fullCData(oldp+1235,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1),2);
        tracep->fullCData(oldp+1236,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0),2);
        tracep->fullCData(oldp+1237,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2),2);
        tracep->fullCData(oldp+1238,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3),2);
        tracep->fullCData(oldp+1239,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4),2);
        tracep->fullCData(oldp+1240,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5),2);
        tracep->fullCData(oldp+1241,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6),2);
        tracep->fullCData(oldp+1242,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7),2);
        tracep->fullCData(oldp+1243,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8),2);
        tracep->fullCData(oldp+1244,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9),2);
        tracep->fullCData(oldp+1245,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10),2);
        tracep->fullCData(oldp+1246,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11),2);
        tracep->fullCData(oldp+1247,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12),2);
        tracep->fullCData(oldp+1248,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13),2);
        tracep->fullCData(oldp+1249,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14),2);
        tracep->fullCData(oldp+1250,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15),2);
        tracep->fullCData(oldp+1251,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16),2);
        tracep->fullCData(oldp+1252,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17),2);
        tracep->fullCData(oldp+1253,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18),2);
        tracep->fullCData(oldp+1254,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19),2);
        tracep->fullCData(oldp+1255,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20),2);
        tracep->fullCData(oldp+1256,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21),2);
        tracep->fullCData(oldp+1257,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22),2);
        tracep->fullCData(oldp+1258,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23),2);
        tracep->fullCData(oldp+1259,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24),2);
        tracep->fullCData(oldp+1260,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25),2);
        tracep->fullCData(oldp+1261,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26),2);
        tracep->fullCData(oldp+1262,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27),2);
        tracep->fullCData(oldp+1263,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28),2);
        tracep->fullCData(oldp+1264,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29),2);
        tracep->fullCData(oldp+1265,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30),2);
        tracep->fullCData(oldp+1266,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31),2);
        tracep->fullCData(oldp+1267,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32),2);
        tracep->fullCData(oldp+1268,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33),2);
        tracep->fullCData(oldp+1269,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34),2);
        tracep->fullCData(oldp+1270,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35),2);
        tracep->fullCData(oldp+1271,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36),2);
        tracep->fullCData(oldp+1272,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37),2);
        tracep->fullCData(oldp+1273,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38),2);
        tracep->fullCData(oldp+1274,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39),2);
        tracep->fullCData(oldp+1275,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40),2);
        tracep->fullCData(oldp+1276,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41),2);
        tracep->fullCData(oldp+1277,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42),2);
        tracep->fullCData(oldp+1278,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43),2);
        tracep->fullCData(oldp+1279,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44),2);
        tracep->fullCData(oldp+1280,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45),2);
        tracep->fullCData(oldp+1281,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46),2);
        tracep->fullCData(oldp+1282,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47),2);
        tracep->fullCData(oldp+1283,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48),2);
        tracep->fullCData(oldp+1284,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49),2);
        tracep->fullCData(oldp+1285,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50),2);
        tracep->fullCData(oldp+1286,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51),2);
        tracep->fullCData(oldp+1287,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52),2);
        tracep->fullCData(oldp+1288,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53),2);
        tracep->fullCData(oldp+1289,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54),2);
        tracep->fullCData(oldp+1290,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55),2);
        tracep->fullCData(oldp+1291,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56),2);
        tracep->fullCData(oldp+1292,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57),2);
        tracep->fullCData(oldp+1293,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58),2);
        tracep->fullCData(oldp+1294,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59),2);
        tracep->fullCData(oldp+1295,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60),2);
        tracep->fullCData(oldp+1296,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61),2);
        tracep->fullCData(oldp+1297,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62),2);
        tracep->fullCData(oldp+1298,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63),2);
        tracep->fullCData(oldp+1299,(vlSelf->ysyx_041728__DOT__iCache__DOT__sramSel),2);
        tracep->fullCData(oldp+1300,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state),2);
        tracep->fullBit(oldp+1301,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))));
        tracep->fullCData(oldp+1302,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state),2);
        tracep->fullBit(oldp+1303,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
        tracep->fullBit(oldp+1304,(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV));
        tracep->fullBit(oldp+1305,(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV));
        tracep->fullCData(oldp+1306,(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state),2);
        tracep->fullBit(oldp+1307,((0U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))));
        tracep->fullCData(oldp+1308,((0xfU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x17U))),4);
        tracep->fullIData(oldp+1309,((0x3fffffU & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   >> 1U))),22);
        tracep->fullCData(oldp+1310,(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState),2);
        tracep->fullBit(oldp+1311,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_0));
        tracep->fullBit(oldp+1312,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_0));
        tracep->fullBit(oldp+1313,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_0));
        tracep->fullBit(oldp+1314,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_0));
        tracep->fullBit(oldp+1315,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_0));
        tracep->fullBit(oldp+1316,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_0));
        tracep->fullBit(oldp+1317,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_0));
        tracep->fullBit(oldp+1318,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_0));
        tracep->fullBit(oldp+1319,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_0));
        tracep->fullBit(oldp+1320,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_0));
        tracep->fullBit(oldp+1321,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_0));
        tracep->fullBit(oldp+1322,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_0));
        tracep->fullBit(oldp+1323,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_0));
        tracep->fullBit(oldp+1324,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_0));
        tracep->fullBit(oldp+1325,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_0));
        tracep->fullBit(oldp+1326,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_0));
        tracep->fullBit(oldp+1327,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_0));
        tracep->fullBit(oldp+1328,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_0));
        tracep->fullBit(oldp+1329,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_0));
        tracep->fullBit(oldp+1330,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_0));
        tracep->fullBit(oldp+1331,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_0));
        tracep->fullBit(oldp+1332,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_0));
        tracep->fullBit(oldp+1333,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_0));
        tracep->fullBit(oldp+1334,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_0));
        tracep->fullBit(oldp+1335,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_0));
        tracep->fullBit(oldp+1336,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_0));
        tracep->fullBit(oldp+1337,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_0));
        tracep->fullBit(oldp+1338,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_0));
        tracep->fullBit(oldp+1339,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_0));
        tracep->fullBit(oldp+1340,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_0));
        tracep->fullBit(oldp+1341,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_0));
        tracep->fullBit(oldp+1342,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_0));
        tracep->fullBit(oldp+1343,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_0));
        tracep->fullBit(oldp+1344,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_0));
        tracep->fullBit(oldp+1345,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_0));
        tracep->fullBit(oldp+1346,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_0));
        tracep->fullBit(oldp+1347,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_0));
        tracep->fullBit(oldp+1348,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_0));
        tracep->fullBit(oldp+1349,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_0));
        tracep->fullBit(oldp+1350,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_0));
        tracep->fullBit(oldp+1351,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_0));
        tracep->fullBit(oldp+1352,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_0));
        tracep->fullBit(oldp+1353,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_0));
        tracep->fullBit(oldp+1354,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_0));
        tracep->fullBit(oldp+1355,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_0));
        tracep->fullBit(oldp+1356,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_0));
        tracep->fullBit(oldp+1357,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_0));
        tracep->fullBit(oldp+1358,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_0));
        tracep->fullBit(oldp+1359,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_0));
        tracep->fullBit(oldp+1360,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_0));
        tracep->fullBit(oldp+1361,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_0));
        tracep->fullBit(oldp+1362,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_0));
        tracep->fullBit(oldp+1363,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_0));
        tracep->fullBit(oldp+1364,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_0));
        tracep->fullBit(oldp+1365,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_0));
        tracep->fullBit(oldp+1366,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_0));
        tracep->fullBit(oldp+1367,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_0));
        tracep->fullBit(oldp+1368,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_0));
        tracep->fullBit(oldp+1369,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_0));
        tracep->fullBit(oldp+1370,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_0));
        tracep->fullBit(oldp+1371,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_0));
        tracep->fullBit(oldp+1372,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_0));
        tracep->fullBit(oldp+1373,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_0));
        tracep->fullBit(oldp+1374,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_0));
        tracep->fullBit(oldp+1375,(((0x3fU == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_0)
                                     : ((0x3eU == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_0)
                                         : ((0x3dU 
                                             == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                             ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_0)
                                             : ((0x3cU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                                 ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_0)
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_0)
                                                  : 
                                                 ((0x3aU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_0)
                                                   : 
                                                  ((0x39U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_0)
                                                    : 
                                                   ((0x38U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_0)
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_0)
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_0)
                                                       : 
                                                      ((0x35U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_0)
                                                        : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_239_0))))))))))))));
        tracep->fullIData(oldp+1376,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_0),22);
        tracep->fullIData(oldp+1377,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_0),22);
        tracep->fullIData(oldp+1378,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_0),22);
        tracep->fullIData(oldp+1379,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_0),22);
        tracep->fullIData(oldp+1380,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_0),22);
        tracep->fullIData(oldp+1381,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_0),22);
        tracep->fullIData(oldp+1382,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_0),22);
        tracep->fullIData(oldp+1383,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_0),22);
        tracep->fullIData(oldp+1384,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_0),22);
        tracep->fullIData(oldp+1385,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_0),22);
        tracep->fullIData(oldp+1386,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_0),22);
        tracep->fullIData(oldp+1387,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_0),22);
        tracep->fullIData(oldp+1388,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_0),22);
        tracep->fullIData(oldp+1389,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_0),22);
        tracep->fullIData(oldp+1390,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_0),22);
        tracep->fullIData(oldp+1391,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_0),22);
        tracep->fullIData(oldp+1392,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_0),22);
        tracep->fullIData(oldp+1393,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_0),22);
        tracep->fullIData(oldp+1394,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_0),22);
        tracep->fullIData(oldp+1395,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_0),22);
        tracep->fullIData(oldp+1396,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_0),22);
        tracep->fullIData(oldp+1397,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_0),22);
        tracep->fullIData(oldp+1398,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_0),22);
        tracep->fullIData(oldp+1399,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_0),22);
        tracep->fullIData(oldp+1400,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_0),22);
        tracep->fullIData(oldp+1401,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_0),22);
        tracep->fullIData(oldp+1402,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_0),22);
        tracep->fullIData(oldp+1403,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_0),22);
        tracep->fullIData(oldp+1404,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_0),22);
        tracep->fullIData(oldp+1405,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_0),22);
        tracep->fullIData(oldp+1406,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_0),22);
        tracep->fullIData(oldp+1407,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_0),22);
        tracep->fullIData(oldp+1408,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_0),22);
        tracep->fullIData(oldp+1409,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_0),22);
        tracep->fullIData(oldp+1410,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_0),22);
        tracep->fullIData(oldp+1411,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_0),22);
        tracep->fullIData(oldp+1412,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_0),22);
        tracep->fullIData(oldp+1413,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_0),22);
        tracep->fullIData(oldp+1414,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_0),22);
        tracep->fullIData(oldp+1415,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_0),22);
        tracep->fullIData(oldp+1416,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_0),22);
        tracep->fullIData(oldp+1417,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_0),22);
        tracep->fullIData(oldp+1418,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_0),22);
        tracep->fullIData(oldp+1419,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_0),22);
        tracep->fullIData(oldp+1420,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_0),22);
        tracep->fullIData(oldp+1421,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_0),22);
        tracep->fullIData(oldp+1422,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_0),22);
        tracep->fullIData(oldp+1423,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_0),22);
        tracep->fullIData(oldp+1424,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_0),22);
        tracep->fullIData(oldp+1425,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_0),22);
        tracep->fullIData(oldp+1426,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_0),22);
        tracep->fullIData(oldp+1427,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_0),22);
        tracep->fullIData(oldp+1428,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_0),22);
        tracep->fullIData(oldp+1429,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_0),22);
        tracep->fullIData(oldp+1430,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_0),22);
        tracep->fullIData(oldp+1431,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_0),22);
        tracep->fullIData(oldp+1432,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_0),22);
        tracep->fullIData(oldp+1433,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_0),22);
        tracep->fullIData(oldp+1434,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_0),22);
        tracep->fullIData(oldp+1435,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_0),22);
        tracep->fullIData(oldp+1436,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_0),22);
        tracep->fullIData(oldp+1437,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_0),22);
        tracep->fullIData(oldp+1438,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_0),22);
        tracep->fullIData(oldp+1439,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_0),22);
        tracep->fullIData(oldp+1440,(((0x3fU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_0
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_0
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_0
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_0
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_0
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_0
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_0
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_0
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_0
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 5U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1bU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_0
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 5U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1bU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_0
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___T_114_0)))))))))))),22);
        tracep->fullBit(oldp+1441,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_0));
        tracep->fullBit(oldp+1442,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_1));
        tracep->fullBit(oldp+1443,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_1));
        tracep->fullBit(oldp+1444,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_1));
        tracep->fullBit(oldp+1445,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_1));
        tracep->fullBit(oldp+1446,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_1));
        tracep->fullBit(oldp+1447,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_1));
        tracep->fullBit(oldp+1448,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_1));
        tracep->fullBit(oldp+1449,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_1));
        tracep->fullBit(oldp+1450,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_1));
        tracep->fullBit(oldp+1451,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_1));
        tracep->fullBit(oldp+1452,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_1));
        tracep->fullBit(oldp+1453,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_1));
        tracep->fullBit(oldp+1454,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_1));
        tracep->fullBit(oldp+1455,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_1));
        tracep->fullBit(oldp+1456,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_1));
        tracep->fullBit(oldp+1457,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_1));
        tracep->fullBit(oldp+1458,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_1));
        tracep->fullBit(oldp+1459,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_1));
        tracep->fullBit(oldp+1460,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_1));
        tracep->fullBit(oldp+1461,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_1));
        tracep->fullBit(oldp+1462,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_1));
        tracep->fullBit(oldp+1463,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_1));
        tracep->fullBit(oldp+1464,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_1));
        tracep->fullBit(oldp+1465,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_1));
        tracep->fullBit(oldp+1466,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_1));
        tracep->fullBit(oldp+1467,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_1));
        tracep->fullBit(oldp+1468,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_1));
        tracep->fullBit(oldp+1469,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_1));
        tracep->fullBit(oldp+1470,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_1));
        tracep->fullBit(oldp+1471,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_1));
        tracep->fullBit(oldp+1472,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_1));
        tracep->fullBit(oldp+1473,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_1));
        tracep->fullBit(oldp+1474,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_1));
        tracep->fullBit(oldp+1475,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_1));
        tracep->fullBit(oldp+1476,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_1));
        tracep->fullBit(oldp+1477,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_1));
        tracep->fullBit(oldp+1478,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_1));
        tracep->fullBit(oldp+1479,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_1));
        tracep->fullBit(oldp+1480,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_1));
        tracep->fullBit(oldp+1481,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_1));
        tracep->fullBit(oldp+1482,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_1));
        tracep->fullBit(oldp+1483,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_1));
        tracep->fullBit(oldp+1484,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_1));
        tracep->fullBit(oldp+1485,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_1));
        tracep->fullBit(oldp+1486,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_1));
        tracep->fullBit(oldp+1487,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_1));
        tracep->fullBit(oldp+1488,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_1));
        tracep->fullBit(oldp+1489,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_1));
        tracep->fullBit(oldp+1490,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_1));
        tracep->fullBit(oldp+1491,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_1));
        tracep->fullBit(oldp+1492,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_1));
        tracep->fullBit(oldp+1493,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_1));
        tracep->fullBit(oldp+1494,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_1));
        tracep->fullBit(oldp+1495,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_1));
        tracep->fullBit(oldp+1496,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_1));
        tracep->fullBit(oldp+1497,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_1));
        tracep->fullBit(oldp+1498,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_1));
        tracep->fullBit(oldp+1499,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_1));
        tracep->fullBit(oldp+1500,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_1));
        tracep->fullBit(oldp+1501,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_1));
        tracep->fullBit(oldp+1502,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_1));
        tracep->fullBit(oldp+1503,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_1));
        tracep->fullBit(oldp+1504,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_1));
        tracep->fullBit(oldp+1505,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_1));
        tracep->fullBit(oldp+1506,(((0x3fU == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_1)
                                     : ((0x3eU == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_1)
                                         : ((0x3dU 
                                             == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                             ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_1)
                                             : ((0x3cU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                                 ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_1)
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_1)
                                                  : 
                                                 ((0x3aU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_1)
                                                   : 
                                                  ((0x39U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_1)
                                                    : 
                                                   ((0x38U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_1)
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_1)
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_1)
                                                       : 
                                                      ((0x35U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_1)
                                                        : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_239_1))))))))))))));
        tracep->fullIData(oldp+1507,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_1),22);
        tracep->fullIData(oldp+1508,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_1),22);
        tracep->fullIData(oldp+1509,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_1),22);
        tracep->fullIData(oldp+1510,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_1),22);
        tracep->fullIData(oldp+1511,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_1),22);
        tracep->fullIData(oldp+1512,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_1),22);
        tracep->fullIData(oldp+1513,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_1),22);
        tracep->fullIData(oldp+1514,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_1),22);
        tracep->fullIData(oldp+1515,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_1),22);
        tracep->fullIData(oldp+1516,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_1),22);
        tracep->fullIData(oldp+1517,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_1),22);
        tracep->fullIData(oldp+1518,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_1),22);
        tracep->fullIData(oldp+1519,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_1),22);
        tracep->fullIData(oldp+1520,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_1),22);
        tracep->fullIData(oldp+1521,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_1),22);
        tracep->fullIData(oldp+1522,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_1),22);
        tracep->fullIData(oldp+1523,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_1),22);
        tracep->fullIData(oldp+1524,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_1),22);
        tracep->fullIData(oldp+1525,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_1),22);
        tracep->fullIData(oldp+1526,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_1),22);
        tracep->fullIData(oldp+1527,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_1),22);
        tracep->fullIData(oldp+1528,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_1),22);
        tracep->fullIData(oldp+1529,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_1),22);
        tracep->fullIData(oldp+1530,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_1),22);
        tracep->fullIData(oldp+1531,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_1),22);
        tracep->fullIData(oldp+1532,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_1),22);
        tracep->fullIData(oldp+1533,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_1),22);
        tracep->fullIData(oldp+1534,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_1),22);
        tracep->fullIData(oldp+1535,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_1),22);
        tracep->fullIData(oldp+1536,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_1),22);
        tracep->fullIData(oldp+1537,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_1),22);
        tracep->fullIData(oldp+1538,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_1),22);
        tracep->fullIData(oldp+1539,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_1),22);
        tracep->fullIData(oldp+1540,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_1),22);
        tracep->fullIData(oldp+1541,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_1),22);
        tracep->fullIData(oldp+1542,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_1),22);
        tracep->fullIData(oldp+1543,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_1),22);
        tracep->fullIData(oldp+1544,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_1),22);
        tracep->fullIData(oldp+1545,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_1),22);
        tracep->fullIData(oldp+1546,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_1),22);
        tracep->fullIData(oldp+1547,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_1),22);
        tracep->fullIData(oldp+1548,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_1),22);
        tracep->fullIData(oldp+1549,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_1),22);
        tracep->fullIData(oldp+1550,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_1),22);
        tracep->fullIData(oldp+1551,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_1),22);
        tracep->fullIData(oldp+1552,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_1),22);
        tracep->fullIData(oldp+1553,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_1),22);
        tracep->fullIData(oldp+1554,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_1),22);
        tracep->fullIData(oldp+1555,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_1),22);
        tracep->fullIData(oldp+1556,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_1),22);
        tracep->fullIData(oldp+1557,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_1),22);
        tracep->fullIData(oldp+1558,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_1),22);
        tracep->fullIData(oldp+1559,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_1),22);
        tracep->fullIData(oldp+1560,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_1),22);
        tracep->fullIData(oldp+1561,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_1),22);
        tracep->fullIData(oldp+1562,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_1),22);
        tracep->fullIData(oldp+1563,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_1),22);
        tracep->fullIData(oldp+1564,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_1),22);
        tracep->fullIData(oldp+1565,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_1),22);
        tracep->fullIData(oldp+1566,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_1),22);
        tracep->fullIData(oldp+1567,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_1),22);
        tracep->fullIData(oldp+1568,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_1),22);
        tracep->fullIData(oldp+1569,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_1),22);
        tracep->fullIData(oldp+1570,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_1),22);
        tracep->fullIData(oldp+1571,(((0x3fU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_1
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_1
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_1
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_1
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_1
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_1
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_1
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_1
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_1
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 5U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1bU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_1
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 5U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1bU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_1
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___T_114_1)))))))))))),22);
        tracep->fullBit(oldp+1572,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_1));
        tracep->fullBit(oldp+1573,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_2));
        tracep->fullBit(oldp+1574,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_2));
        tracep->fullBit(oldp+1575,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_2));
        tracep->fullBit(oldp+1576,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_2));
        tracep->fullBit(oldp+1577,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_2));
        tracep->fullBit(oldp+1578,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_2));
        tracep->fullBit(oldp+1579,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_2));
        tracep->fullBit(oldp+1580,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_2));
        tracep->fullBit(oldp+1581,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_2));
        tracep->fullBit(oldp+1582,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_2));
        tracep->fullBit(oldp+1583,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_2));
        tracep->fullBit(oldp+1584,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_2));
        tracep->fullBit(oldp+1585,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_2));
        tracep->fullBit(oldp+1586,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_2));
        tracep->fullBit(oldp+1587,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_2));
        tracep->fullBit(oldp+1588,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_2));
        tracep->fullBit(oldp+1589,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_2));
        tracep->fullBit(oldp+1590,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_2));
        tracep->fullBit(oldp+1591,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_2));
        tracep->fullBit(oldp+1592,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_2));
        tracep->fullBit(oldp+1593,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_2));
        tracep->fullBit(oldp+1594,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_2));
        tracep->fullBit(oldp+1595,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_2));
        tracep->fullBit(oldp+1596,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_2));
        tracep->fullBit(oldp+1597,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_2));
        tracep->fullBit(oldp+1598,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_2));
        tracep->fullBit(oldp+1599,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_2));
        tracep->fullBit(oldp+1600,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_2));
        tracep->fullBit(oldp+1601,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_2));
        tracep->fullBit(oldp+1602,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_2));
        tracep->fullBit(oldp+1603,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_2));
        tracep->fullBit(oldp+1604,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_2));
        tracep->fullBit(oldp+1605,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_2));
        tracep->fullBit(oldp+1606,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_2));
        tracep->fullBit(oldp+1607,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_2));
        tracep->fullBit(oldp+1608,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_2));
        tracep->fullBit(oldp+1609,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_2));
        tracep->fullBit(oldp+1610,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_2));
        tracep->fullBit(oldp+1611,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_2));
        tracep->fullBit(oldp+1612,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_2));
        tracep->fullBit(oldp+1613,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_2));
        tracep->fullBit(oldp+1614,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_2));
        tracep->fullBit(oldp+1615,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_2));
        tracep->fullBit(oldp+1616,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_2));
        tracep->fullBit(oldp+1617,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_2));
        tracep->fullBit(oldp+1618,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_2));
        tracep->fullBit(oldp+1619,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_2));
        tracep->fullBit(oldp+1620,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_2));
        tracep->fullBit(oldp+1621,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_2));
        tracep->fullBit(oldp+1622,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_2));
        tracep->fullBit(oldp+1623,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_2));
        tracep->fullBit(oldp+1624,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_2));
        tracep->fullBit(oldp+1625,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_2));
        tracep->fullBit(oldp+1626,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_2));
        tracep->fullBit(oldp+1627,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_2));
        tracep->fullBit(oldp+1628,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_2));
        tracep->fullBit(oldp+1629,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_2));
        tracep->fullBit(oldp+1630,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_2));
        tracep->fullBit(oldp+1631,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_2));
        tracep->fullBit(oldp+1632,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_2));
        tracep->fullBit(oldp+1633,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_2));
        tracep->fullBit(oldp+1634,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_2));
        tracep->fullBit(oldp+1635,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_2));
        tracep->fullBit(oldp+1636,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_2));
        tracep->fullBit(oldp+1637,(((0x3fU == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_2)
                                     : ((0x3eU == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_2)
                                         : ((0x3dU 
                                             == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                             ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_2)
                                             : ((0x3cU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                                 ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_2)
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_2)
                                                  : 
                                                 ((0x3aU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_2)
                                                   : 
                                                  ((0x39U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_2)
                                                    : 
                                                   ((0x38U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_2)
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_2)
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_2)
                                                       : 
                                                      ((0x35U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_2)
                                                        : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_239_2))))))))))))));
        tracep->fullIData(oldp+1638,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_2),22);
        tracep->fullIData(oldp+1639,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_2),22);
        tracep->fullIData(oldp+1640,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_2),22);
        tracep->fullIData(oldp+1641,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_2),22);
        tracep->fullIData(oldp+1642,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_2),22);
        tracep->fullIData(oldp+1643,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_2),22);
        tracep->fullIData(oldp+1644,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_2),22);
        tracep->fullIData(oldp+1645,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_2),22);
        tracep->fullIData(oldp+1646,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_2),22);
        tracep->fullIData(oldp+1647,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_2),22);
        tracep->fullIData(oldp+1648,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_2),22);
        tracep->fullIData(oldp+1649,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_2),22);
        tracep->fullIData(oldp+1650,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_2),22);
        tracep->fullIData(oldp+1651,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_2),22);
        tracep->fullIData(oldp+1652,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_2),22);
        tracep->fullIData(oldp+1653,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_2),22);
        tracep->fullIData(oldp+1654,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_2),22);
        tracep->fullIData(oldp+1655,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_2),22);
        tracep->fullIData(oldp+1656,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_2),22);
        tracep->fullIData(oldp+1657,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_2),22);
        tracep->fullIData(oldp+1658,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_2),22);
        tracep->fullIData(oldp+1659,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_2),22);
        tracep->fullIData(oldp+1660,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_2),22);
        tracep->fullIData(oldp+1661,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_2),22);
        tracep->fullIData(oldp+1662,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_2),22);
        tracep->fullIData(oldp+1663,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_2),22);
        tracep->fullIData(oldp+1664,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_2),22);
        tracep->fullIData(oldp+1665,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_2),22);
        tracep->fullIData(oldp+1666,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_2),22);
        tracep->fullIData(oldp+1667,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_2),22);
        tracep->fullIData(oldp+1668,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_2),22);
        tracep->fullIData(oldp+1669,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_2),22);
        tracep->fullIData(oldp+1670,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_2),22);
        tracep->fullIData(oldp+1671,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_2),22);
        tracep->fullIData(oldp+1672,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_2),22);
        tracep->fullIData(oldp+1673,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_2),22);
        tracep->fullIData(oldp+1674,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_2),22);
        tracep->fullIData(oldp+1675,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_2),22);
        tracep->fullIData(oldp+1676,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_2),22);
        tracep->fullIData(oldp+1677,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_2),22);
        tracep->fullIData(oldp+1678,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_2),22);
        tracep->fullIData(oldp+1679,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_2),22);
        tracep->fullIData(oldp+1680,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_2),22);
        tracep->fullIData(oldp+1681,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_2),22);
        tracep->fullIData(oldp+1682,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_2),22);
        tracep->fullIData(oldp+1683,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_2),22);
        tracep->fullIData(oldp+1684,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_2),22);
        tracep->fullIData(oldp+1685,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_2),22);
        tracep->fullIData(oldp+1686,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_2),22);
        tracep->fullIData(oldp+1687,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_2),22);
        tracep->fullIData(oldp+1688,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_2),22);
        tracep->fullIData(oldp+1689,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_2),22);
        tracep->fullIData(oldp+1690,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_2),22);
        tracep->fullIData(oldp+1691,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_2),22);
        tracep->fullIData(oldp+1692,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_2),22);
        tracep->fullIData(oldp+1693,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_2),22);
        tracep->fullIData(oldp+1694,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_2),22);
        tracep->fullIData(oldp+1695,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_2),22);
        tracep->fullIData(oldp+1696,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_2),22);
        tracep->fullIData(oldp+1697,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_2),22);
        tracep->fullIData(oldp+1698,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_2),22);
        tracep->fullIData(oldp+1699,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_2),22);
        tracep->fullIData(oldp+1700,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_2),22);
        tracep->fullIData(oldp+1701,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_2),22);
        tracep->fullIData(oldp+1702,(((0x3fU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_2
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_2
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_2
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_2
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_2
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_2
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_2
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_2
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_2
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 5U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1bU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_2
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 5U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1bU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_2
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___T_114_2)))))))))))),22);
        tracep->fullBit(oldp+1703,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_2));
        tracep->fullBit(oldp+1704,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_3));
        tracep->fullBit(oldp+1705,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_3));
        tracep->fullBit(oldp+1706,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_3));
        tracep->fullBit(oldp+1707,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_3));
        tracep->fullBit(oldp+1708,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_3));
        tracep->fullBit(oldp+1709,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_3));
        tracep->fullBit(oldp+1710,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_3));
        tracep->fullBit(oldp+1711,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_3));
        tracep->fullBit(oldp+1712,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_3));
        tracep->fullBit(oldp+1713,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_3));
        tracep->fullBit(oldp+1714,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_3));
        tracep->fullBit(oldp+1715,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_3));
        tracep->fullBit(oldp+1716,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_3));
        tracep->fullBit(oldp+1717,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_3));
        tracep->fullBit(oldp+1718,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_3));
        tracep->fullBit(oldp+1719,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_3));
        tracep->fullBit(oldp+1720,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_3));
        tracep->fullBit(oldp+1721,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_3));
        tracep->fullBit(oldp+1722,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_3));
        tracep->fullBit(oldp+1723,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_3));
        tracep->fullBit(oldp+1724,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_3));
        tracep->fullBit(oldp+1725,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_3));
        tracep->fullBit(oldp+1726,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_3));
        tracep->fullBit(oldp+1727,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_3));
        tracep->fullBit(oldp+1728,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_3));
        tracep->fullBit(oldp+1729,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_3));
        tracep->fullBit(oldp+1730,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_3));
        tracep->fullBit(oldp+1731,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_3));
        tracep->fullBit(oldp+1732,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_3));
        tracep->fullBit(oldp+1733,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_3));
        tracep->fullBit(oldp+1734,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_3));
        tracep->fullBit(oldp+1735,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_3));
        tracep->fullBit(oldp+1736,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_3));
        tracep->fullBit(oldp+1737,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_3));
        tracep->fullBit(oldp+1738,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_3));
        tracep->fullBit(oldp+1739,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_3));
        tracep->fullBit(oldp+1740,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_3));
        tracep->fullBit(oldp+1741,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_3));
        tracep->fullBit(oldp+1742,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_3));
        tracep->fullBit(oldp+1743,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_3));
        tracep->fullBit(oldp+1744,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_3));
        tracep->fullBit(oldp+1745,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_3));
        tracep->fullBit(oldp+1746,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_3));
        tracep->fullBit(oldp+1747,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_3));
        tracep->fullBit(oldp+1748,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_3));
        tracep->fullBit(oldp+1749,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_3));
        tracep->fullBit(oldp+1750,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_3));
        tracep->fullBit(oldp+1751,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_3));
        tracep->fullBit(oldp+1752,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_3));
        tracep->fullBit(oldp+1753,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_3));
        tracep->fullBit(oldp+1754,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_3));
        tracep->fullBit(oldp+1755,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_3));
        tracep->fullBit(oldp+1756,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_3));
        tracep->fullBit(oldp+1757,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_3));
        tracep->fullBit(oldp+1758,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_3));
        tracep->fullBit(oldp+1759,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_3));
        tracep->fullBit(oldp+1760,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_3));
        tracep->fullBit(oldp+1761,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_3));
        tracep->fullBit(oldp+1762,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_3));
        tracep->fullBit(oldp+1763,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_3));
        tracep->fullBit(oldp+1764,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_3));
        tracep->fullBit(oldp+1765,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_3));
        tracep->fullBit(oldp+1766,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_3));
        tracep->fullBit(oldp+1767,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_3));
        tracep->fullBit(oldp+1768,(((0x3fU == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_3)
                                     : ((0x3eU == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_3)
                                         : ((0x3dU 
                                             == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                             ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_3)
                                             : ((0x3cU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                                 ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_3)
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_3)
                                                  : 
                                                 ((0x3aU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_3)
                                                   : 
                                                  ((0x39U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_3)
                                                    : 
                                                   ((0x38U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_3)
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_3)
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_3)
                                                       : 
                                                      ((0x35U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_3)
                                                        : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_239_3))))))))))))));
        tracep->fullIData(oldp+1769,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_3),22);
        tracep->fullIData(oldp+1770,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_3),22);
        tracep->fullIData(oldp+1771,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_3),22);
        tracep->fullIData(oldp+1772,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_3),22);
        tracep->fullIData(oldp+1773,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_3),22);
        tracep->fullIData(oldp+1774,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_3),22);
        tracep->fullIData(oldp+1775,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_3),22);
        tracep->fullIData(oldp+1776,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_3),22);
        tracep->fullIData(oldp+1777,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_3),22);
        tracep->fullIData(oldp+1778,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_3),22);
        tracep->fullIData(oldp+1779,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_3),22);
        tracep->fullIData(oldp+1780,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_3),22);
        tracep->fullIData(oldp+1781,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_3),22);
        tracep->fullIData(oldp+1782,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_3),22);
        tracep->fullIData(oldp+1783,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_3),22);
        tracep->fullIData(oldp+1784,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_3),22);
        tracep->fullIData(oldp+1785,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_3),22);
        tracep->fullIData(oldp+1786,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_3),22);
        tracep->fullIData(oldp+1787,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_3),22);
        tracep->fullIData(oldp+1788,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_3),22);
        tracep->fullIData(oldp+1789,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_3),22);
        tracep->fullIData(oldp+1790,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_3),22);
        tracep->fullIData(oldp+1791,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_3),22);
        tracep->fullIData(oldp+1792,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_3),22);
        tracep->fullIData(oldp+1793,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_3),22);
        tracep->fullIData(oldp+1794,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_3),22);
        tracep->fullIData(oldp+1795,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_3),22);
        tracep->fullIData(oldp+1796,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_3),22);
        tracep->fullIData(oldp+1797,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_3),22);
        tracep->fullIData(oldp+1798,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_3),22);
        tracep->fullIData(oldp+1799,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_3),22);
        tracep->fullIData(oldp+1800,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_3),22);
        tracep->fullIData(oldp+1801,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_3),22);
        tracep->fullIData(oldp+1802,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_3),22);
        tracep->fullIData(oldp+1803,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_3),22);
        tracep->fullIData(oldp+1804,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_3),22);
        tracep->fullIData(oldp+1805,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_3),22);
        tracep->fullIData(oldp+1806,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_3),22);
        tracep->fullIData(oldp+1807,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_3),22);
        tracep->fullIData(oldp+1808,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_3),22);
        tracep->fullIData(oldp+1809,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_3),22);
        tracep->fullIData(oldp+1810,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_3),22);
        tracep->fullIData(oldp+1811,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_3),22);
        tracep->fullIData(oldp+1812,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_3),22);
        tracep->fullIData(oldp+1813,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_3),22);
        tracep->fullIData(oldp+1814,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_3),22);
        tracep->fullIData(oldp+1815,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_3),22);
        tracep->fullIData(oldp+1816,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_3),22);
        tracep->fullIData(oldp+1817,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_3),22);
        tracep->fullIData(oldp+1818,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_3),22);
        tracep->fullIData(oldp+1819,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_3),22);
        tracep->fullIData(oldp+1820,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_3),22);
        tracep->fullIData(oldp+1821,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_3),22);
        tracep->fullIData(oldp+1822,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_3),22);
        tracep->fullIData(oldp+1823,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_3),22);
        tracep->fullIData(oldp+1824,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_3),22);
        tracep->fullIData(oldp+1825,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_3),22);
        tracep->fullIData(oldp+1826,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_3),22);
        tracep->fullIData(oldp+1827,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_3),22);
        tracep->fullIData(oldp+1828,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_3),22);
        tracep->fullIData(oldp+1829,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_3),22);
        tracep->fullIData(oldp+1830,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_3),22);
        tracep->fullIData(oldp+1831,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_3),22);
        tracep->fullIData(oldp+1832,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_3),22);
        tracep->fullIData(oldp+1833,(((0x3fU == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_3
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 5U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1bU))))
                                           ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_3
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                               ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_3
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 5U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1bU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_3
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_3
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 5U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1bU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_3
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 5U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1bU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_3
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 5U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1bU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_3
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 5U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1bU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_3
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 5U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1bU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_3
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 5U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1bU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_3
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___T_114_3)))))))))))),22);
        tracep->fullBit(oldp+1834,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_3));
        tracep->fullBit(oldp+1835,(vlSelf->ysyx_041728__DOT__dCache__DOT__hit));
        tracep->fullBit(oldp+1836,((0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
        tracep->fullBit(oldp+1837,((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
        tracep->fullBit(oldp+1838,((3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
        tracep->fullWData(oldp+1839,(vlSelf->ysyx_041728__DOT__dCache__DOT__waysel),128);
        tracep->fullCData(oldp+1843,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1),2);
        tracep->fullCData(oldp+1844,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0),2);
        tracep->fullCData(oldp+1845,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2),2);
        tracep->fullCData(oldp+1846,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3),2);
        tracep->fullCData(oldp+1847,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4),2);
        tracep->fullCData(oldp+1848,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5),2);
        tracep->fullCData(oldp+1849,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6),2);
        tracep->fullCData(oldp+1850,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7),2);
        tracep->fullCData(oldp+1851,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8),2);
        tracep->fullCData(oldp+1852,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9),2);
        tracep->fullCData(oldp+1853,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10),2);
        tracep->fullCData(oldp+1854,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11),2);
        tracep->fullCData(oldp+1855,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12),2);
        tracep->fullCData(oldp+1856,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13),2);
        tracep->fullCData(oldp+1857,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14),2);
        tracep->fullCData(oldp+1858,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15),2);
        tracep->fullCData(oldp+1859,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16),2);
        tracep->fullCData(oldp+1860,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17),2);
        tracep->fullCData(oldp+1861,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18),2);
        tracep->fullCData(oldp+1862,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19),2);
        tracep->fullCData(oldp+1863,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20),2);
        tracep->fullCData(oldp+1864,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21),2);
        tracep->fullCData(oldp+1865,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22),2);
        tracep->fullCData(oldp+1866,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23),2);
        tracep->fullCData(oldp+1867,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24),2);
        tracep->fullCData(oldp+1868,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25),2);
        tracep->fullCData(oldp+1869,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26),2);
        tracep->fullCData(oldp+1870,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27),2);
        tracep->fullCData(oldp+1871,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28),2);
        tracep->fullCData(oldp+1872,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29),2);
        tracep->fullCData(oldp+1873,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30),2);
        tracep->fullCData(oldp+1874,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31),2);
        tracep->fullCData(oldp+1875,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32),2);
        tracep->fullCData(oldp+1876,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33),2);
        tracep->fullCData(oldp+1877,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34),2);
        tracep->fullCData(oldp+1878,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35),2);
        tracep->fullCData(oldp+1879,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36),2);
        tracep->fullCData(oldp+1880,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37),2);
        tracep->fullCData(oldp+1881,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38),2);
        tracep->fullCData(oldp+1882,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39),2);
        tracep->fullCData(oldp+1883,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40),2);
        tracep->fullCData(oldp+1884,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41),2);
        tracep->fullCData(oldp+1885,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42),2);
        tracep->fullCData(oldp+1886,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43),2);
        tracep->fullCData(oldp+1887,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44),2);
        tracep->fullCData(oldp+1888,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45),2);
        tracep->fullCData(oldp+1889,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46),2);
        tracep->fullCData(oldp+1890,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47),2);
        tracep->fullCData(oldp+1891,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48),2);
        tracep->fullCData(oldp+1892,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49),2);
        tracep->fullCData(oldp+1893,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50),2);
        tracep->fullCData(oldp+1894,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51),2);
        tracep->fullCData(oldp+1895,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52),2);
        tracep->fullCData(oldp+1896,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53),2);
        tracep->fullCData(oldp+1897,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54),2);
        tracep->fullCData(oldp+1898,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55),2);
        tracep->fullCData(oldp+1899,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56),2);
        tracep->fullCData(oldp+1900,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57),2);
        tracep->fullCData(oldp+1901,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58),2);
        tracep->fullCData(oldp+1902,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59),2);
        tracep->fullCData(oldp+1903,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60),2);
        tracep->fullCData(oldp+1904,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61),2);
        tracep->fullCData(oldp+1905,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62),2);
        tracep->fullCData(oldp+1906,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63),2);
        tracep->fullCData(oldp+1907,(vlSelf->ysyx_041728__DOT__dCache__DOT__sramSel),2);
        tracep->fullCData(oldp+1908,(((1U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullCData(oldp+1909,(((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullCData(oldp+1910,(((4U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullCData(oldp+1911,(((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullCData(oldp+1912,(((0x10U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullCData(oldp+1913,(((0x20U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullCData(oldp+1914,(((0x40U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullCData(oldp+1915,(((0x80U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                       ? 0U : 0xffU)),8);
        tracep->fullWData(oldp+1916,(vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite),128);
        tracep->fullQData(oldp+1920,(vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime),64);
        tracep->fullQData(oldp+1922,(vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp),64);
        tracep->fullCData(oldp+1924,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state),2);
        tracep->fullBit(oldp+1925,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))));
        tracep->fullCData(oldp+1926,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state),2);
        tracep->fullBit(oldp+1927,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
        tracep->fullWData(oldp+1928,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+1932,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+1936,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+1940,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+1944,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+1948,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+1952,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+1956,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+1960,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+1964,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+1968,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+1972,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+1976,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+1980,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+1984,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+1988,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+1992,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+1996,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+2000,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+2004,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+2008,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+2012,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+2016,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+2020,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+2024,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+2028,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+2032,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+2036,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+2040,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+2044,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+2048,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+2052,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+2056,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+2060,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+2064,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+2068,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+2072,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+2076,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+2080,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+2084,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+2088,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+2092,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+2096,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+2100,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+2104,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+2108,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+2112,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+2116,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+2120,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+2124,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+2128,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+2132,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+2136,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+2140,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+2144,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+2148,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+2152,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+2156,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+2160,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+2164,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+2168,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+2172,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+2176,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+2180,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63),128);
        tracep->fullWData(oldp+2184,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+2188,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+2192,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+2196,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+2200,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+2204,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+2208,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+2212,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+2216,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+2220,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+2224,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+2228,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+2232,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+2236,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+2240,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+2244,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+2248,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+2252,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+2256,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+2260,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+2264,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+2268,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+2272,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+2276,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+2280,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+2284,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+2288,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+2292,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+2296,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+2300,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+2304,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+2308,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+2312,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+2316,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+2320,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+2324,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+2328,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+2332,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+2336,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+2340,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+2344,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+2348,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+2352,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+2356,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+2360,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+2364,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+2368,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+2372,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+2376,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+2380,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+2384,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+2388,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+2392,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+2396,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+2400,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+2404,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+2408,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+2412,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+2416,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+2420,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+2424,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+2428,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+2432,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+2436,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63),128);
        tracep->fullWData(oldp+2440,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+2444,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+2448,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+2452,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+2456,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+2460,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+2464,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+2468,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+2472,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+2476,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+2480,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+2484,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+2488,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+2492,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+2496,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+2500,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+2504,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+2508,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+2512,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+2516,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+2520,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+2524,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+2528,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+2532,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+2536,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+2540,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+2544,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+2548,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+2552,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+2556,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+2560,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+2564,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+2568,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+2572,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+2576,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+2580,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+2584,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+2588,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+2592,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+2596,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+2600,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+2604,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+2608,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+2612,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+2616,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+2620,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+2624,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+2628,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+2632,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+2636,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+2640,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+2644,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+2648,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+2652,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+2656,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+2660,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+2664,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+2668,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+2672,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+2676,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+2680,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+2684,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+2688,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+2692,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63),128);
        tracep->fullWData(oldp+2696,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+2700,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+2704,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+2708,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+2712,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+2716,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+2720,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+2724,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+2728,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+2732,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+2736,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+2740,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+2744,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+2748,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+2752,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+2756,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+2760,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+2764,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+2768,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+2772,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+2776,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+2780,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+2784,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+2788,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+2792,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+2796,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+2800,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+2804,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+2808,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+2812,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+2816,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+2820,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+2824,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+2828,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+2832,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+2836,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+2840,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+2844,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+2848,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+2852,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+2856,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+2860,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+2864,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+2868,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+2872,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+2876,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+2880,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+2884,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+2888,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+2892,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+2896,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+2900,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+2904,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+2908,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+2912,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+2916,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+2920,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+2924,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+2928,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+2932,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+2936,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+2940,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+2944,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+2948,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63),128);
        tracep->fullWData(oldp+2952,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+2956,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+2960,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+2964,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+2968,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+2972,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+2976,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+2980,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+2984,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+2988,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+2992,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+2996,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+3000,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+3004,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+3008,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+3012,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+3016,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+3020,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+3024,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+3028,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+3032,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+3036,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+3040,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+3044,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+3048,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+3052,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+3056,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+3060,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+3064,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+3068,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+3072,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+3076,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+3080,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+3084,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+3088,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+3092,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+3096,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+3100,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+3104,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+3108,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+3112,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+3116,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+3120,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+3124,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+3128,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+3132,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+3136,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+3140,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+3144,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+3148,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+3152,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+3156,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+3160,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+3164,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+3168,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+3172,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+3176,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+3180,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+3184,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+3188,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+3192,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+3196,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+3200,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+3204,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63),128);
        tracep->fullWData(oldp+3208,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+3212,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+3216,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+3220,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+3224,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+3228,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+3232,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+3236,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+3240,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+3244,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+3248,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+3252,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+3256,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+3260,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+3264,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+3268,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+3272,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+3276,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+3280,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+3284,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+3288,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+3292,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+3296,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+3300,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+3304,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+3308,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+3312,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+3316,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+3320,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+3324,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+3328,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+3332,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+3336,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+3340,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+3344,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+3348,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+3352,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+3356,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+3360,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+3364,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+3368,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+3372,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+3376,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+3380,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+3384,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+3388,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+3392,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+3396,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+3400,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+3404,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+3408,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+3412,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+3416,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+3420,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+3424,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+3428,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+3432,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+3436,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+3440,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+3444,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+3448,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+3452,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+3456,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+3460,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63),128);
        tracep->fullWData(oldp+3464,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+3468,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+3472,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+3476,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+3480,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+3484,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+3488,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+3492,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+3496,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+3500,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+3504,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+3508,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+3512,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+3516,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+3520,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+3524,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+3528,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+3532,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+3536,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+3540,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+3544,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+3548,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+3552,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+3556,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+3560,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+3564,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+3568,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+3572,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+3576,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+3580,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+3584,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+3588,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+3592,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+3596,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+3600,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+3604,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+3608,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+3612,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+3616,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+3620,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+3624,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+3628,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+3632,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+3636,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+3640,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+3644,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+3648,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+3652,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+3656,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+3660,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+3664,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+3668,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+3672,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+3676,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+3680,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+3684,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+3688,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+3692,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+3696,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+3700,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+3704,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+3708,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+3712,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+3716,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63),128);
        tracep->fullWData(oldp+3720,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_0),128);
        tracep->fullWData(oldp+3724,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_1),128);
        tracep->fullWData(oldp+3728,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_2),128);
        tracep->fullWData(oldp+3732,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_3),128);
        tracep->fullWData(oldp+3736,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_4),128);
        tracep->fullWData(oldp+3740,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_5),128);
        tracep->fullWData(oldp+3744,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_6),128);
        tracep->fullWData(oldp+3748,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_7),128);
        tracep->fullWData(oldp+3752,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_8),128);
        tracep->fullWData(oldp+3756,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_9),128);
        tracep->fullWData(oldp+3760,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_10),128);
        tracep->fullWData(oldp+3764,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_11),128);
        tracep->fullWData(oldp+3768,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_12),128);
        tracep->fullWData(oldp+3772,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_13),128);
        tracep->fullWData(oldp+3776,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_14),128);
        tracep->fullWData(oldp+3780,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_15),128);
        tracep->fullWData(oldp+3784,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_16),128);
        tracep->fullWData(oldp+3788,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_17),128);
        tracep->fullWData(oldp+3792,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_18),128);
        tracep->fullWData(oldp+3796,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_19),128);
        tracep->fullWData(oldp+3800,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_20),128);
        tracep->fullWData(oldp+3804,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_21),128);
        tracep->fullWData(oldp+3808,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_22),128);
        tracep->fullWData(oldp+3812,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_23),128);
        tracep->fullWData(oldp+3816,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_24),128);
        tracep->fullWData(oldp+3820,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_25),128);
        tracep->fullWData(oldp+3824,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_26),128);
        tracep->fullWData(oldp+3828,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_27),128);
        tracep->fullWData(oldp+3832,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_28),128);
        tracep->fullWData(oldp+3836,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_29),128);
        tracep->fullWData(oldp+3840,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_30),128);
        tracep->fullWData(oldp+3844,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_31),128);
        tracep->fullWData(oldp+3848,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_32),128);
        tracep->fullWData(oldp+3852,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_33),128);
        tracep->fullWData(oldp+3856,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_34),128);
        tracep->fullWData(oldp+3860,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_35),128);
        tracep->fullWData(oldp+3864,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_36),128);
        tracep->fullWData(oldp+3868,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_37),128);
        tracep->fullWData(oldp+3872,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_38),128);
        tracep->fullWData(oldp+3876,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_39),128);
        tracep->fullWData(oldp+3880,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_40),128);
        tracep->fullWData(oldp+3884,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_41),128);
        tracep->fullWData(oldp+3888,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_42),128);
        tracep->fullWData(oldp+3892,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_43),128);
        tracep->fullWData(oldp+3896,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_44),128);
        tracep->fullWData(oldp+3900,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_45),128);
        tracep->fullWData(oldp+3904,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_46),128);
        tracep->fullWData(oldp+3908,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_47),128);
        tracep->fullWData(oldp+3912,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_48),128);
        tracep->fullWData(oldp+3916,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_49),128);
        tracep->fullWData(oldp+3920,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_50),128);
        tracep->fullWData(oldp+3924,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_51),128);
        tracep->fullWData(oldp+3928,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_52),128);
        tracep->fullWData(oldp+3932,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53),128);
        tracep->fullWData(oldp+3936,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54),128);
        tracep->fullWData(oldp+3940,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55),128);
        tracep->fullWData(oldp+3944,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_56),128);
        tracep->fullWData(oldp+3948,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_57),128);
        tracep->fullWData(oldp+3952,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58),128);
        tracep->fullWData(oldp+3956,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59),128);
        tracep->fullWData(oldp+3960,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60),128);
        tracep->fullWData(oldp+3964,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_61),128);
        tracep->fullWData(oldp+3968,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_62),128);
        tracep->fullWData(oldp+3972,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63),128);
        tracep->fullBit(oldp+3976,(vlSelf->clock));
        tracep->fullBit(oldp+3977,(vlSelf->reset));
        tracep->fullBit(oldp+3978,(vlSelf->io_imaster_awready));
        tracep->fullBit(oldp+3979,(vlSelf->io_imaster_awvalid));
        tracep->fullCData(oldp+3980,(vlSelf->io_imaster_awid),4);
        tracep->fullIData(oldp+3981,(vlSelf->io_imaster_awaddr),32);
        tracep->fullCData(oldp+3982,(vlSelf->io_imaster_awlen),8);
        tracep->fullCData(oldp+3983,(vlSelf->io_imaster_awsize),3);
        tracep->fullCData(oldp+3984,(vlSelf->io_imaster_awburst),2);
        tracep->fullBit(oldp+3985,(vlSelf->io_imaster_wready));
        tracep->fullBit(oldp+3986,(vlSelf->io_imaster_wvalid));
        tracep->fullQData(oldp+3987,(vlSelf->io_imaster_wdata),64);
        tracep->fullCData(oldp+3989,(vlSelf->io_imaster_wstrb),8);
        tracep->fullBit(oldp+3990,(vlSelf->io_imaster_wlast));
        tracep->fullBit(oldp+3991,(vlSelf->io_imaster_bready));
        tracep->fullBit(oldp+3992,(vlSelf->io_imaster_bvalid));
        tracep->fullCData(oldp+3993,(vlSelf->io_imaster_bid),4);
        tracep->fullCData(oldp+3994,(vlSelf->io_imaster_bresp),2);
        tracep->fullBit(oldp+3995,(vlSelf->io_imaster_arready));
        tracep->fullBit(oldp+3996,(vlSelf->io_imaster_arvalid));
        tracep->fullCData(oldp+3997,(vlSelf->io_imaster_arid),4);
        tracep->fullIData(oldp+3998,(vlSelf->io_imaster_araddr),32);
        tracep->fullCData(oldp+3999,(vlSelf->io_imaster_arlen),8);
        tracep->fullCData(oldp+4000,(vlSelf->io_imaster_arsize),3);
        tracep->fullCData(oldp+4001,(vlSelf->io_imaster_arburst),2);
        tracep->fullBit(oldp+4002,(vlSelf->io_imaster_rready));
        tracep->fullBit(oldp+4003,(vlSelf->io_imaster_rvalid));
        tracep->fullCData(oldp+4004,(vlSelf->io_imaster_rid),4);
        tracep->fullCData(oldp+4005,(vlSelf->io_imaster_rresp),2);
        tracep->fullQData(oldp+4006,(vlSelf->io_imaster_rdata),64);
        tracep->fullBit(oldp+4008,(vlSelf->io_imaster_rlast));
        tracep->fullBit(oldp+4009,(vlSelf->io_dmaster_awready));
        tracep->fullBit(oldp+4010,(vlSelf->io_dmaster_awvalid));
        tracep->fullCData(oldp+4011,(vlSelf->io_dmaster_awid),4);
        tracep->fullIData(oldp+4012,(vlSelf->io_dmaster_awaddr),32);
        tracep->fullCData(oldp+4013,(vlSelf->io_dmaster_awlen),8);
        tracep->fullCData(oldp+4014,(vlSelf->io_dmaster_awsize),3);
        tracep->fullCData(oldp+4015,(vlSelf->io_dmaster_awburst),2);
        tracep->fullBit(oldp+4016,(vlSelf->io_dmaster_wready));
        tracep->fullBit(oldp+4017,(vlSelf->io_dmaster_wvalid));
        tracep->fullQData(oldp+4018,(vlSelf->io_dmaster_wdata),64);
        tracep->fullCData(oldp+4020,(vlSelf->io_dmaster_wstrb),8);
        tracep->fullBit(oldp+4021,(vlSelf->io_dmaster_wlast));
        tracep->fullBit(oldp+4022,(vlSelf->io_dmaster_bready));
        tracep->fullBit(oldp+4023,(vlSelf->io_dmaster_bvalid));
        tracep->fullCData(oldp+4024,(vlSelf->io_dmaster_bid),4);
        tracep->fullCData(oldp+4025,(vlSelf->io_dmaster_bresp),2);
        tracep->fullBit(oldp+4026,(vlSelf->io_dmaster_arready));
        tracep->fullBit(oldp+4027,(vlSelf->io_dmaster_arvalid));
        tracep->fullCData(oldp+4028,(vlSelf->io_dmaster_arid),4);
        tracep->fullIData(oldp+4029,(vlSelf->io_dmaster_araddr),32);
        tracep->fullCData(oldp+4030,(vlSelf->io_dmaster_arlen),8);
        tracep->fullCData(oldp+4031,(vlSelf->io_dmaster_arsize),3);
        tracep->fullCData(oldp+4032,(vlSelf->io_dmaster_arburst),2);
        tracep->fullBit(oldp+4033,(vlSelf->io_dmaster_rready));
        tracep->fullBit(oldp+4034,(vlSelf->io_dmaster_rvalid));
        tracep->fullCData(oldp+4035,(vlSelf->io_dmaster_rid),4);
        tracep->fullCData(oldp+4036,(vlSelf->io_dmaster_rresp),2);
        tracep->fullQData(oldp+4037,(vlSelf->io_dmaster_rdata),64);
        tracep->fullBit(oldp+4039,(vlSelf->io_dmaster_rlast));
        tracep->fullBit(oldp+4040,(vlSelf->io_mmio_valid));
        tracep->fullBit(oldp+4041,(vlSelf->io_mmio_ready));
        tracep->fullQData(oldp+4042,(vlSelf->io_mmio_data_read),64);
        tracep->fullQData(oldp+4044,(vlSelf->io_mmio_data_write),64);
        tracep->fullBit(oldp+4046,(vlSelf->io_mmio_wen));
        tracep->fullIData(oldp+4047,(vlSelf->io_mmio_addr),32);
        tracep->fullCData(oldp+4048,(vlSelf->io_mmio_rsize),2);
        tracep->fullCData(oldp+4049,(vlSelf->io_mmio_mask),8);
        VL_EXTEND_WQ(128,64, __Vtemp1069, vlSelf->io_imaster_rdata);
        if (vlSelf->io_imaster_rlast) {
            __Vtemp1070[0U] = 0U;
            __Vtemp1070[1U] = 0U;
            __Vtemp1070[2U] = (IData)(vlSelf->io_imaster_rdata);
            __Vtemp1070[3U] = (IData)((vlSelf->io_imaster_rdata 
                                       >> 0x20U));
        } else {
            __Vtemp1070[0U] = __Vtemp1069[0U];
            __Vtemp1070[1U] = __Vtemp1069[1U];
            __Vtemp1070[2U] = __Vtemp1069[2U];
            __Vtemp1070[3U] = __Vtemp1069[3U];
        }
        tracep->fullWData(oldp+4050,(__Vtemp1070),128);
        if (vlSelf->io_imaster_rlast) {
            __Vtemp1073[0U] = 0xffffffffU;
            __Vtemp1073[1U] = 0xffffffffU;
            __Vtemp1073[2U] = 0U;
            __Vtemp1073[3U] = 0U;
        } else {
            __Vtemp1073[0U] = 0U;
            __Vtemp1073[1U] = 0U;
            __Vtemp1073[2U] = 0xffffffffU;
            __Vtemp1073[3U] = 0xffffffffU;
        }
        tracep->fullWData(oldp+4054,(__Vtemp1073),128);
        tracep->fullBit(oldp+4058,(((IData)(vlSelf->io_imaster_bvalid) 
                                    & (3U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)))));
        __Vtemp1077[0U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0xffffffffU : 0U));
        __Vtemp1077[1U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0xffffffffU : 0U));
        __Vtemp1077[2U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0U : 0xffffffffU));
        __Vtemp1077[3U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0U : 0xffffffffU));
        tracep->fullWData(oldp+4059,(__Vtemp1077),128);
        tracep->fullCData(oldp+4063,(2U),3);
        tracep->fullQData(oldp+4064,(0ULL),64);
        tracep->fullCData(oldp+4066,(0U),8);
        tracep->fullBit(oldp+4067,(0U));
        tracep->fullCData(oldp+4068,(2U),2);
    }
}
