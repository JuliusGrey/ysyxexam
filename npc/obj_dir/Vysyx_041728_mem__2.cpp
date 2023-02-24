// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041728.h for the primary calling header

#include "Vysyx_041728_mem.h"
#include "Vysyx_041728__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__imem_3__16(Vysyx_041728_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__imem_3__16\n"); );
    // Body
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x3fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_63_r[0U] = vlSelf->__PVT___ramWire_63_T_2[0U];
        vlSelf->__PVT__ramWire_63_r[1U] = vlSelf->__PVT___ramWire_63_T_2[1U];
        vlSelf->__PVT__ramWire_63_r[2U] = vlSelf->__PVT___ramWire_63_T_2[2U];
        vlSelf->__PVT__ramWire_63_r[3U] = vlSelf->__PVT___ramWire_63_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x3eU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_62_r[0U] = vlSelf->__PVT___ramWire_62_T_2[0U];
        vlSelf->__PVT__ramWire_62_r[1U] = vlSelf->__PVT___ramWire_62_T_2[1U];
        vlSelf->__PVT__ramWire_62_r[2U] = vlSelf->__PVT___ramWire_62_T_2[2U];
        vlSelf->__PVT__ramWire_62_r[3U] = vlSelf->__PVT___ramWire_62_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x3dU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_61_r[0U] = vlSelf->__PVT___ramWire_61_T_2[0U];
        vlSelf->__PVT__ramWire_61_r[1U] = vlSelf->__PVT___ramWire_61_T_2[1U];
        vlSelf->__PVT__ramWire_61_r[2U] = vlSelf->__PVT___ramWire_61_T_2[2U];
        vlSelf->__PVT__ramWire_61_r[3U] = vlSelf->__PVT___ramWire_61_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x3cU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_60_r[0U] = vlSelf->__PVT___ramWire_60_T_2[0U];
        vlSelf->__PVT__ramWire_60_r[1U] = vlSelf->__PVT___ramWire_60_T_2[1U];
        vlSelf->__PVT__ramWire_60_r[2U] = vlSelf->__PVT___ramWire_60_T_2[2U];
        vlSelf->__PVT__ramWire_60_r[3U] = vlSelf->__PVT___ramWire_60_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x3bU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_59_r[0U] = vlSelf->__PVT___ramWire_59_T_2[0U];
        vlSelf->__PVT__ramWire_59_r[1U] = vlSelf->__PVT___ramWire_59_T_2[1U];
        vlSelf->__PVT__ramWire_59_r[2U] = vlSelf->__PVT___ramWire_59_T_2[2U];
        vlSelf->__PVT__ramWire_59_r[3U] = vlSelf->__PVT___ramWire_59_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x3aU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_58_r[0U] = vlSelf->__PVT___ramWire_58_T_2[0U];
        vlSelf->__PVT__ramWire_58_r[1U] = vlSelf->__PVT___ramWire_58_T_2[1U];
        vlSelf->__PVT__ramWire_58_r[2U] = vlSelf->__PVT___ramWire_58_T_2[2U];
        vlSelf->__PVT__ramWire_58_r[3U] = vlSelf->__PVT___ramWire_58_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x39U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_57_r[0U] = vlSelf->__PVT___ramWire_57_T_2[0U];
        vlSelf->__PVT__ramWire_57_r[1U] = vlSelf->__PVT___ramWire_57_T_2[1U];
        vlSelf->__PVT__ramWire_57_r[2U] = vlSelf->__PVT___ramWire_57_T_2[2U];
        vlSelf->__PVT__ramWire_57_r[3U] = vlSelf->__PVT___ramWire_57_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x38U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_56_r[0U] = vlSelf->__PVT___ramWire_56_T_2[0U];
        vlSelf->__PVT__ramWire_56_r[1U] = vlSelf->__PVT___ramWire_56_T_2[1U];
        vlSelf->__PVT__ramWire_56_r[2U] = vlSelf->__PVT___ramWire_56_T_2[2U];
        vlSelf->__PVT__ramWire_56_r[3U] = vlSelf->__PVT___ramWire_56_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x37U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_55_r[0U] = vlSelf->__PVT___ramWire_55_T_2[0U];
        vlSelf->__PVT__ramWire_55_r[1U] = vlSelf->__PVT___ramWire_55_T_2[1U];
        vlSelf->__PVT__ramWire_55_r[2U] = vlSelf->__PVT___ramWire_55_T_2[2U];
        vlSelf->__PVT__ramWire_55_r[3U] = vlSelf->__PVT___ramWire_55_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x36U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_54_r[0U] = vlSelf->__PVT___ramWire_54_T_2[0U];
        vlSelf->__PVT__ramWire_54_r[1U] = vlSelf->__PVT___ramWire_54_T_2[1U];
        vlSelf->__PVT__ramWire_54_r[2U] = vlSelf->__PVT___ramWire_54_T_2[2U];
        vlSelf->__PVT__ramWire_54_r[3U] = vlSelf->__PVT___ramWire_54_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x35U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_53_r[0U] = vlSelf->__PVT___ramWire_53_T_2[0U];
        vlSelf->__PVT__ramWire_53_r[1U] = vlSelf->__PVT___ramWire_53_T_2[1U];
        vlSelf->__PVT__ramWire_53_r[2U] = vlSelf->__PVT___ramWire_53_T_2[2U];
        vlSelf->__PVT__ramWire_53_r[3U] = vlSelf->__PVT___ramWire_53_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x34U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_52_r[0U] = vlSelf->__PVT___ramWire_52_T_2[0U];
        vlSelf->__PVT__ramWire_52_r[1U] = vlSelf->__PVT___ramWire_52_T_2[1U];
        vlSelf->__PVT__ramWire_52_r[2U] = vlSelf->__PVT___ramWire_52_T_2[2U];
        vlSelf->__PVT__ramWire_52_r[3U] = vlSelf->__PVT___ramWire_52_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x33U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_51_r[0U] = vlSelf->__PVT___ramWire_51_T_2[0U];
        vlSelf->__PVT__ramWire_51_r[1U] = vlSelf->__PVT___ramWire_51_T_2[1U];
        vlSelf->__PVT__ramWire_51_r[2U] = vlSelf->__PVT___ramWire_51_T_2[2U];
        vlSelf->__PVT__ramWire_51_r[3U] = vlSelf->__PVT___ramWire_51_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x32U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_50_r[0U] = vlSelf->__PVT___ramWire_50_T_2[0U];
        vlSelf->__PVT__ramWire_50_r[1U] = vlSelf->__PVT___ramWire_50_T_2[1U];
        vlSelf->__PVT__ramWire_50_r[2U] = vlSelf->__PVT___ramWire_50_T_2[2U];
        vlSelf->__PVT__ramWire_50_r[3U] = vlSelf->__PVT___ramWire_50_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x31U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_49_r[0U] = vlSelf->__PVT___ramWire_49_T_2[0U];
        vlSelf->__PVT__ramWire_49_r[1U] = vlSelf->__PVT___ramWire_49_T_2[1U];
        vlSelf->__PVT__ramWire_49_r[2U] = vlSelf->__PVT___ramWire_49_T_2[2U];
        vlSelf->__PVT__ramWire_49_r[3U] = vlSelf->__PVT___ramWire_49_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x30U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_48_r[0U] = vlSelf->__PVT___ramWire_48_T_2[0U];
        vlSelf->__PVT__ramWire_48_r[1U] = vlSelf->__PVT___ramWire_48_T_2[1U];
        vlSelf->__PVT__ramWire_48_r[2U] = vlSelf->__PVT___ramWire_48_T_2[2U];
        vlSelf->__PVT__ramWire_48_r[3U] = vlSelf->__PVT___ramWire_48_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x2fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_47_r[0U] = vlSelf->__PVT___ramWire_47_T_2[0U];
        vlSelf->__PVT__ramWire_47_r[1U] = vlSelf->__PVT___ramWire_47_T_2[1U];
        vlSelf->__PVT__ramWire_47_r[2U] = vlSelf->__PVT___ramWire_47_T_2[2U];
        vlSelf->__PVT__ramWire_47_r[3U] = vlSelf->__PVT___ramWire_47_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x2eU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_46_r[0U] = vlSelf->__PVT___ramWire_46_T_2[0U];
        vlSelf->__PVT__ramWire_46_r[1U] = vlSelf->__PVT___ramWire_46_T_2[1U];
        vlSelf->__PVT__ramWire_46_r[2U] = vlSelf->__PVT___ramWire_46_T_2[2U];
        vlSelf->__PVT__ramWire_46_r[3U] = vlSelf->__PVT___ramWire_46_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x2dU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_45_r[0U] = vlSelf->__PVT___ramWire_45_T_2[0U];
        vlSelf->__PVT__ramWire_45_r[1U] = vlSelf->__PVT___ramWire_45_T_2[1U];
        vlSelf->__PVT__ramWire_45_r[2U] = vlSelf->__PVT___ramWire_45_T_2[2U];
        vlSelf->__PVT__ramWire_45_r[3U] = vlSelf->__PVT___ramWire_45_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x2cU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_44_r[0U] = vlSelf->__PVT___ramWire_44_T_2[0U];
        vlSelf->__PVT__ramWire_44_r[1U] = vlSelf->__PVT___ramWire_44_T_2[1U];
        vlSelf->__PVT__ramWire_44_r[2U] = vlSelf->__PVT___ramWire_44_T_2[2U];
        vlSelf->__PVT__ramWire_44_r[3U] = vlSelf->__PVT___ramWire_44_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x2bU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_43_r[0U] = vlSelf->__PVT___ramWire_43_T_2[0U];
        vlSelf->__PVT__ramWire_43_r[1U] = vlSelf->__PVT___ramWire_43_T_2[1U];
        vlSelf->__PVT__ramWire_43_r[2U] = vlSelf->__PVT___ramWire_43_T_2[2U];
        vlSelf->__PVT__ramWire_43_r[3U] = vlSelf->__PVT___ramWire_43_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x2aU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_42_r[0U] = vlSelf->__PVT___ramWire_42_T_2[0U];
        vlSelf->__PVT__ramWire_42_r[1U] = vlSelf->__PVT___ramWire_42_T_2[1U];
        vlSelf->__PVT__ramWire_42_r[2U] = vlSelf->__PVT___ramWire_42_T_2[2U];
        vlSelf->__PVT__ramWire_42_r[3U] = vlSelf->__PVT___ramWire_42_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x28U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_40_r[0U] = vlSelf->__PVT___ramWire_40_T_2[0U];
        vlSelf->__PVT__ramWire_40_r[1U] = vlSelf->__PVT___ramWire_40_T_2[1U];
        vlSelf->__PVT__ramWire_40_r[2U] = vlSelf->__PVT___ramWire_40_T_2[2U];
        vlSelf->__PVT__ramWire_40_r[3U] = vlSelf->__PVT___ramWire_40_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x29U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_41_r[0U] = vlSelf->__PVT___ramWire_41_T_2[0U];
        vlSelf->__PVT__ramWire_41_r[1U] = vlSelf->__PVT___ramWire_41_T_2[1U];
        vlSelf->__PVT__ramWire_41_r[2U] = vlSelf->__PVT___ramWire_41_T_2[2U];
        vlSelf->__PVT__ramWire_41_r[3U] = vlSelf->__PVT___ramWire_41_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x23U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_35_r[0U] = vlSelf->__PVT___ramWire_35_T_2[0U];
        vlSelf->__PVT__ramWire_35_r[1U] = vlSelf->__PVT___ramWire_35_T_2[1U];
        vlSelf->__PVT__ramWire_35_r[2U] = vlSelf->__PVT___ramWire_35_T_2[2U];
        vlSelf->__PVT__ramWire_35_r[3U] = vlSelf->__PVT___ramWire_35_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x24U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_36_r[0U] = vlSelf->__PVT___ramWire_36_T_2[0U];
        vlSelf->__PVT__ramWire_36_r[1U] = vlSelf->__PVT___ramWire_36_T_2[1U];
        vlSelf->__PVT__ramWire_36_r[2U] = vlSelf->__PVT___ramWire_36_T_2[2U];
        vlSelf->__PVT__ramWire_36_r[3U] = vlSelf->__PVT___ramWire_36_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x22U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_34_r[0U] = vlSelf->__PVT___ramWire_34_T_2[0U];
        vlSelf->__PVT__ramWire_34_r[1U] = vlSelf->__PVT___ramWire_34_T_2[1U];
        vlSelf->__PVT__ramWire_34_r[2U] = vlSelf->__PVT___ramWire_34_T_2[2U];
        vlSelf->__PVT__ramWire_34_r[3U] = vlSelf->__PVT___ramWire_34_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x20U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_32_r[0U] = vlSelf->__PVT___ramWire_32_T_2[0U];
        vlSelf->__PVT__ramWire_32_r[1U] = vlSelf->__PVT___ramWire_32_T_2[1U];
        vlSelf->__PVT__ramWire_32_r[2U] = vlSelf->__PVT___ramWire_32_T_2[2U];
        vlSelf->__PVT__ramWire_32_r[3U] = vlSelf->__PVT___ramWire_32_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x21U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_33_r[0U] = vlSelf->__PVT___ramWire_33_T_2[0U];
        vlSelf->__PVT__ramWire_33_r[1U] = vlSelf->__PVT___ramWire_33_T_2[1U];
        vlSelf->__PVT__ramWire_33_r[2U] = vlSelf->__PVT___ramWire_33_T_2[2U];
        vlSelf->__PVT__ramWire_33_r[3U] = vlSelf->__PVT___ramWire_33_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x25U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_37_r[0U] = vlSelf->__PVT___ramWire_37_T_2[0U];
        vlSelf->__PVT__ramWire_37_r[1U] = vlSelf->__PVT___ramWire_37_T_2[1U];
        vlSelf->__PVT__ramWire_37_r[2U] = vlSelf->__PVT___ramWire_37_T_2[2U];
        vlSelf->__PVT__ramWire_37_r[3U] = vlSelf->__PVT___ramWire_37_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x26U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_38_r[0U] = vlSelf->__PVT___ramWire_38_T_2[0U];
        vlSelf->__PVT__ramWire_38_r[1U] = vlSelf->__PVT___ramWire_38_T_2[1U];
        vlSelf->__PVT__ramWire_38_r[2U] = vlSelf->__PVT___ramWire_38_T_2[2U];
        vlSelf->__PVT__ramWire_38_r[3U] = vlSelf->__PVT___ramWire_38_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x27U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_39_r[0U] = vlSelf->__PVT___ramWire_39_T_2[0U];
        vlSelf->__PVT__ramWire_39_r[1U] = vlSelf->__PVT___ramWire_39_T_2[1U];
        vlSelf->__PVT__ramWire_39_r[2U] = vlSelf->__PVT___ramWire_39_T_2[2U];
        vlSelf->__PVT__ramWire_39_r[3U] = vlSelf->__PVT___ramWire_39_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x1bU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_27_r[0U] = vlSelf->__PVT___ramWire_27_T_2[0U];
        vlSelf->__PVT__ramWire_27_r[1U] = vlSelf->__PVT___ramWire_27_T_2[1U];
        vlSelf->__PVT__ramWire_27_r[2U] = vlSelf->__PVT___ramWire_27_T_2[2U];
        vlSelf->__PVT__ramWire_27_r[3U] = vlSelf->__PVT___ramWire_27_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x1cU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_28_r[0U] = vlSelf->__PVT___ramWire_28_T_2[0U];
        vlSelf->__PVT__ramWire_28_r[1U] = vlSelf->__PVT___ramWire_28_T_2[1U];
        vlSelf->__PVT__ramWire_28_r[2U] = vlSelf->__PVT___ramWire_28_T_2[2U];
        vlSelf->__PVT__ramWire_28_r[3U] = vlSelf->__PVT___ramWire_28_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x1dU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_29_r[0U] = vlSelf->__PVT___ramWire_29_T_2[0U];
        vlSelf->__PVT__ramWire_29_r[1U] = vlSelf->__PVT___ramWire_29_T_2[1U];
        vlSelf->__PVT__ramWire_29_r[2U] = vlSelf->__PVT___ramWire_29_T_2[2U];
        vlSelf->__PVT__ramWire_29_r[3U] = vlSelf->__PVT___ramWire_29_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x1eU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_30_r[0U] = vlSelf->__PVT___ramWire_30_T_2[0U];
        vlSelf->__PVT__ramWire_30_r[1U] = vlSelf->__PVT___ramWire_30_T_2[1U];
        vlSelf->__PVT__ramWire_30_r[2U] = vlSelf->__PVT___ramWire_30_T_2[2U];
        vlSelf->__PVT__ramWire_30_r[3U] = vlSelf->__PVT___ramWire_30_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x1fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_31_r[0U] = vlSelf->__PVT___ramWire_31_T_2[0U];
        vlSelf->__PVT__ramWire_31_r[1U] = vlSelf->__PVT___ramWire_31_T_2[1U];
        vlSelf->__PVT__ramWire_31_r[2U] = vlSelf->__PVT___ramWire_31_T_2[2U];
        vlSelf->__PVT__ramWire_31_r[3U] = vlSelf->__PVT___ramWire_31_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x16U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_22_r[0U] = vlSelf->__PVT___ramWire_22_T_2[0U];
        vlSelf->__PVT__ramWire_22_r[1U] = vlSelf->__PVT___ramWire_22_T_2[1U];
        vlSelf->__PVT__ramWire_22_r[2U] = vlSelf->__PVT___ramWire_22_T_2[2U];
        vlSelf->__PVT__ramWire_22_r[3U] = vlSelf->__PVT___ramWire_22_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x15U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_21_r[0U] = vlSelf->__PVT___ramWire_21_T_2[0U];
        vlSelf->__PVT__ramWire_21_r[1U] = vlSelf->__PVT___ramWire_21_T_2[1U];
        vlSelf->__PVT__ramWire_21_r[2U] = vlSelf->__PVT___ramWire_21_T_2[2U];
        vlSelf->__PVT__ramWire_21_r[3U] = vlSelf->__PVT___ramWire_21_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x14U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_20_r[0U] = vlSelf->__PVT___ramWire_20_T_2[0U];
        vlSelf->__PVT__ramWire_20_r[1U] = vlSelf->__PVT___ramWire_20_T_2[1U];
        vlSelf->__PVT__ramWire_20_r[2U] = vlSelf->__PVT___ramWire_20_T_2[2U];
        vlSelf->__PVT__ramWire_20_r[3U] = vlSelf->__PVT___ramWire_20_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x13U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_19_r[0U] = vlSelf->__PVT___ramWire_19_T_2[0U];
        vlSelf->__PVT__ramWire_19_r[1U] = vlSelf->__PVT___ramWire_19_T_2[1U];
        vlSelf->__PVT__ramWire_19_r[2U] = vlSelf->__PVT___ramWire_19_T_2[2U];
        vlSelf->__PVT__ramWire_19_r[3U] = vlSelf->__PVT___ramWire_19_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x12U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_18_r[0U] = vlSelf->__PVT___ramWire_18_T_2[0U];
        vlSelf->__PVT__ramWire_18_r[1U] = vlSelf->__PVT___ramWire_18_T_2[1U];
        vlSelf->__PVT__ramWire_18_r[2U] = vlSelf->__PVT___ramWire_18_T_2[2U];
        vlSelf->__PVT__ramWire_18_r[3U] = vlSelf->__PVT___ramWire_18_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x11U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_17_r[0U] = vlSelf->__PVT___ramWire_17_T_2[0U];
        vlSelf->__PVT__ramWire_17_r[1U] = vlSelf->__PVT___ramWire_17_T_2[1U];
        vlSelf->__PVT__ramWire_17_r[2U] = vlSelf->__PVT___ramWire_17_T_2[2U];
        vlSelf->__PVT__ramWire_17_r[3U] = vlSelf->__PVT___ramWire_17_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x10U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_16_r[0U] = vlSelf->__PVT___ramWire_16_T_2[0U];
        vlSelf->__PVT__ramWire_16_r[1U] = vlSelf->__PVT___ramWire_16_T_2[1U];
        vlSelf->__PVT__ramWire_16_r[2U] = vlSelf->__PVT___ramWire_16_T_2[2U];
        vlSelf->__PVT__ramWire_16_r[3U] = vlSelf->__PVT___ramWire_16_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0xfU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                              >> 4U))))) {
        vlSelf->__PVT__ramWire_15_r[0U] = vlSelf->__PVT___ramWire_15_T_2[0U];
        vlSelf->__PVT__ramWire_15_r[1U] = vlSelf->__PVT___ramWire_15_T_2[1U];
        vlSelf->__PVT__ramWire_15_r[2U] = vlSelf->__PVT___ramWire_15_T_2[2U];
        vlSelf->__PVT__ramWire_15_r[3U] = vlSelf->__PVT___ramWire_15_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0xeU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                              >> 4U))))) {
        vlSelf->__PVT__ramWire_14_r[0U] = vlSelf->__PVT___ramWire_14_T_2[0U];
        vlSelf->__PVT__ramWire_14_r[1U] = vlSelf->__PVT___ramWire_14_T_2[1U];
        vlSelf->__PVT__ramWire_14_r[2U] = vlSelf->__PVT___ramWire_14_T_2[2U];
        vlSelf->__PVT__ramWire_14_r[3U] = vlSelf->__PVT___ramWire_14_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x17U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_23_r[0U] = vlSelf->__PVT___ramWire_23_T_2[0U];
        vlSelf->__PVT__ramWire_23_r[1U] = vlSelf->__PVT___ramWire_23_T_2[1U];
        vlSelf->__PVT__ramWire_23_r[2U] = vlSelf->__PVT___ramWire_23_T_2[2U];
        vlSelf->__PVT__ramWire_23_r[3U] = vlSelf->__PVT___ramWire_23_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x18U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_24_r[0U] = vlSelf->__PVT___ramWire_24_T_2[0U];
        vlSelf->__PVT__ramWire_24_r[1U] = vlSelf->__PVT___ramWire_24_T_2[1U];
        vlSelf->__PVT__ramWire_24_r[2U] = vlSelf->__PVT___ramWire_24_T_2[2U];
        vlSelf->__PVT__ramWire_24_r[3U] = vlSelf->__PVT___ramWire_24_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x19U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_25_r[0U] = vlSelf->__PVT___ramWire_25_T_2[0U];
        vlSelf->__PVT__ramWire_25_r[1U] = vlSelf->__PVT___ramWire_25_T_2[1U];
        vlSelf->__PVT__ramWire_25_r[2U] = vlSelf->__PVT___ramWire_25_T_2[2U];
        vlSelf->__PVT__ramWire_25_r[3U] = vlSelf->__PVT___ramWire_25_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0x1aU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                               >> 4U))))) {
        vlSelf->__PVT__ramWire_26_r[0U] = vlSelf->__PVT___ramWire_26_T_2[0U];
        vlSelf->__PVT__ramWire_26_r[1U] = vlSelf->__PVT___ramWire_26_T_2[1U];
        vlSelf->__PVT__ramWire_26_r[2U] = vlSelf->__PVT___ramWire_26_T_2[2U];
        vlSelf->__PVT__ramWire_26_r[3U] = vlSelf->__PVT___ramWire_26_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0xdU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                              >> 4U))))) {
        vlSelf->__PVT__ramWire_13_r[0U] = vlSelf->__PVT___ramWire_13_T_2[0U];
        vlSelf->__PVT__ramWire_13_r[1U] = vlSelf->__PVT___ramWire_13_T_2[1U];
        vlSelf->__PVT__ramWire_13_r[2U] = vlSelf->__PVT___ramWire_13_T_2[2U];
        vlSelf->__PVT__ramWire_13_r[3U] = vlSelf->__PVT___ramWire_13_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0xcU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                              >> 4U))))) {
        vlSelf->__PVT__ramWire_12_r[0U] = vlSelf->__PVT___ramWire_12_T_2[0U];
        vlSelf->__PVT__ramWire_12_r[1U] = vlSelf->__PVT___ramWire_12_T_2[1U];
        vlSelf->__PVT__ramWire_12_r[2U] = vlSelf->__PVT___ramWire_12_T_2[2U];
        vlSelf->__PVT__ramWire_12_r[3U] = vlSelf->__PVT___ramWire_12_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0xbU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                              >> 4U))))) {
        vlSelf->__PVT__ramWire_11_r[0U] = vlSelf->__PVT___ramWire_11_T_2[0U];
        vlSelf->__PVT__ramWire_11_r[1U] = vlSelf->__PVT___ramWire_11_T_2[1U];
        vlSelf->__PVT__ramWire_11_r[2U] = vlSelf->__PVT___ramWire_11_T_2[2U];
        vlSelf->__PVT__ramWire_11_r[3U] = vlSelf->__PVT___ramWire_11_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (4U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_4_r[0U] = vlSelf->__PVT___ramWire_4_T_2[0U];
        vlSelf->__PVT__ramWire_4_r[1U] = vlSelf->__PVT___ramWire_4_T_2[1U];
        vlSelf->__PVT__ramWire_4_r[2U] = vlSelf->__PVT___ramWire_4_T_2[2U];
        vlSelf->__PVT__ramWire_4_r[3U] = vlSelf->__PVT___ramWire_4_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (3U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_3_r[0U] = vlSelf->__PVT___ramWire_3_T_2[0U];
        vlSelf->__PVT__ramWire_3_r[1U] = vlSelf->__PVT___ramWire_3_T_2[1U];
        vlSelf->__PVT__ramWire_3_r[2U] = vlSelf->__PVT___ramWire_3_T_2[2U];
        vlSelf->__PVT__ramWire_3_r[3U] = vlSelf->__PVT___ramWire_3_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (2U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_2_r[0U] = vlSelf->__PVT___ramWire_2_T_2[0U];
        vlSelf->__PVT__ramWire_2_r[1U] = vlSelf->__PVT___ramWire_2_T_2[1U];
        vlSelf->__PVT__ramWire_2_r[2U] = vlSelf->__PVT___ramWire_2_T_2[2U];
        vlSelf->__PVT__ramWire_2_r[3U] = vlSelf->__PVT___ramWire_2_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_0_r[0U] = vlSelf->__PVT___ramWire_0_T_2[0U];
        vlSelf->__PVT__ramWire_0_r[1U] = vlSelf->__PVT___ramWire_0_T_2[1U];
        vlSelf->__PVT__ramWire_0_r[2U] = vlSelf->__PVT___ramWire_0_T_2[2U];
        vlSelf->__PVT__ramWire_0_r[3U] = vlSelf->__PVT___ramWire_0_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (1U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_1_r[0U] = vlSelf->__PVT___ramWire_1_T_2[0U];
        vlSelf->__PVT__ramWire_1_r[1U] = vlSelf->__PVT___ramWire_1_T_2[1U];
        vlSelf->__PVT__ramWire_1_r[2U] = vlSelf->__PVT___ramWire_1_T_2[2U];
        vlSelf->__PVT__ramWire_1_r[3U] = vlSelf->__PVT___ramWire_1_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (5U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_5_r[0U] = vlSelf->__PVT___ramWire_5_T_2[0U];
        vlSelf->__PVT__ramWire_5_r[1U] = vlSelf->__PVT___ramWire_5_T_2[1U];
        vlSelf->__PVT__ramWire_5_r[2U] = vlSelf->__PVT___ramWire_5_T_2[2U];
        vlSelf->__PVT__ramWire_5_r[3U] = vlSelf->__PVT___ramWire_5_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (6U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_6_r[0U] = vlSelf->__PVT___ramWire_6_T_2[0U];
        vlSelf->__PVT__ramWire_6_r[1U] = vlSelf->__PVT___ramWire_6_T_2[1U];
        vlSelf->__PVT__ramWire_6_r[2U] = vlSelf->__PVT___ramWire_6_T_2[2U];
        vlSelf->__PVT__ramWire_6_r[3U] = vlSelf->__PVT___ramWire_6_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (7U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_7_r[0U] = vlSelf->__PVT___ramWire_7_T_2[0U];
        vlSelf->__PVT__ramWire_7_r[1U] = vlSelf->__PVT___ramWire_7_T_2[1U];
        vlSelf->__PVT__ramWire_7_r[2U] = vlSelf->__PVT___ramWire_7_T_2[2U];
        vlSelf->__PVT__ramWire_7_r[3U] = vlSelf->__PVT___ramWire_7_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (8U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_8_r[0U] = vlSelf->__PVT___ramWire_8_T_2[0U];
        vlSelf->__PVT__ramWire_8_r[1U] = vlSelf->__PVT___ramWire_8_T_2[1U];
        vlSelf->__PVT__ramWire_8_r[2U] = vlSelf->__PVT___ramWire_8_T_2[2U];
        vlSelf->__PVT__ramWire_8_r[3U] = vlSelf->__PVT___ramWire_8_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (9U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U))))) {
        vlSelf->__PVT__ramWire_9_r[0U] = vlSelf->__PVT___ramWire_9_T_2[0U];
        vlSelf->__PVT__ramWire_9_r[1U] = vlSelf->__PVT___ramWire_9_T_2[1U];
        vlSelf->__PVT__ramWire_9_r[2U] = vlSelf->__PVT___ramWire_9_T_2[2U];
        vlSelf->__PVT__ramWire_9_r[3U] = vlSelf->__PVT___ramWire_9_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)) 
          & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)) 
         & (0xaU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                              >> 4U))))) {
        vlSelf->__PVT__ramWire_10_r[0U] = vlSelf->__PVT___ramWire_10_T_2[0U];
        vlSelf->__PVT__ramWire_10_r[1U] = vlSelf->__PVT___ramWire_10_T_2[1U];
        vlSelf->__PVT__ramWire_10_r[2U] = vlSelf->__PVT___ramWire_10_T_2[2U];
        vlSelf->__PVT__ramWire_10_r[3U] = vlSelf->__PVT___ramWire_10_T_2[3U];
    }
}

VL_INLINE_OPT void Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__dmem_3__20(Vysyx_041728_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__dmem_3__20\n"); );
    // Body
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x3fU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_63_r[0U] = vlSelf->__PVT___ramWire_63_T_2[0U];
        vlSelf->__PVT__ramWire_63_r[1U] = vlSelf->__PVT___ramWire_63_T_2[1U];
        vlSelf->__PVT__ramWire_63_r[2U] = vlSelf->__PVT___ramWire_63_T_2[2U];
        vlSelf->__PVT__ramWire_63_r[3U] = vlSelf->__PVT___ramWire_63_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x3eU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_62_r[0U] = vlSelf->__PVT___ramWire_62_T_2[0U];
        vlSelf->__PVT__ramWire_62_r[1U] = vlSelf->__PVT___ramWire_62_T_2[1U];
        vlSelf->__PVT__ramWire_62_r[2U] = vlSelf->__PVT___ramWire_62_T_2[2U];
        vlSelf->__PVT__ramWire_62_r[3U] = vlSelf->__PVT___ramWire_62_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x3dU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_61_r[0U] = vlSelf->__PVT___ramWire_61_T_2[0U];
        vlSelf->__PVT__ramWire_61_r[1U] = vlSelf->__PVT___ramWire_61_T_2[1U];
        vlSelf->__PVT__ramWire_61_r[2U] = vlSelf->__PVT___ramWire_61_T_2[2U];
        vlSelf->__PVT__ramWire_61_r[3U] = vlSelf->__PVT___ramWire_61_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x3cU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_60_r[0U] = vlSelf->__PVT___ramWire_60_T_2[0U];
        vlSelf->__PVT__ramWire_60_r[1U] = vlSelf->__PVT___ramWire_60_T_2[1U];
        vlSelf->__PVT__ramWire_60_r[2U] = vlSelf->__PVT___ramWire_60_T_2[2U];
        vlSelf->__PVT__ramWire_60_r[3U] = vlSelf->__PVT___ramWire_60_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x3bU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_59_r[0U] = vlSelf->__PVT___ramWire_59_T_2[0U];
        vlSelf->__PVT__ramWire_59_r[1U] = vlSelf->__PVT___ramWire_59_T_2[1U];
        vlSelf->__PVT__ramWire_59_r[2U] = vlSelf->__PVT___ramWire_59_T_2[2U];
        vlSelf->__PVT__ramWire_59_r[3U] = vlSelf->__PVT___ramWire_59_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x3aU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_58_r[0U] = vlSelf->__PVT___ramWire_58_T_2[0U];
        vlSelf->__PVT__ramWire_58_r[1U] = vlSelf->__PVT___ramWire_58_T_2[1U];
        vlSelf->__PVT__ramWire_58_r[2U] = vlSelf->__PVT___ramWire_58_T_2[2U];
        vlSelf->__PVT__ramWire_58_r[3U] = vlSelf->__PVT___ramWire_58_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x39U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_57_r[0U] = vlSelf->__PVT___ramWire_57_T_2[0U];
        vlSelf->__PVT__ramWire_57_r[1U] = vlSelf->__PVT___ramWire_57_T_2[1U];
        vlSelf->__PVT__ramWire_57_r[2U] = vlSelf->__PVT___ramWire_57_T_2[2U];
        vlSelf->__PVT__ramWire_57_r[3U] = vlSelf->__PVT___ramWire_57_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x38U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_56_r[0U] = vlSelf->__PVT___ramWire_56_T_2[0U];
        vlSelf->__PVT__ramWire_56_r[1U] = vlSelf->__PVT___ramWire_56_T_2[1U];
        vlSelf->__PVT__ramWire_56_r[2U] = vlSelf->__PVT___ramWire_56_T_2[2U];
        vlSelf->__PVT__ramWire_56_r[3U] = vlSelf->__PVT___ramWire_56_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x37U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_55_r[0U] = vlSelf->__PVT___ramWire_55_T_2[0U];
        vlSelf->__PVT__ramWire_55_r[1U] = vlSelf->__PVT___ramWire_55_T_2[1U];
        vlSelf->__PVT__ramWire_55_r[2U] = vlSelf->__PVT___ramWire_55_T_2[2U];
        vlSelf->__PVT__ramWire_55_r[3U] = vlSelf->__PVT___ramWire_55_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x36U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_54_r[0U] = vlSelf->__PVT___ramWire_54_T_2[0U];
        vlSelf->__PVT__ramWire_54_r[1U] = vlSelf->__PVT___ramWire_54_T_2[1U];
        vlSelf->__PVT__ramWire_54_r[2U] = vlSelf->__PVT___ramWire_54_T_2[2U];
        vlSelf->__PVT__ramWire_54_r[3U] = vlSelf->__PVT___ramWire_54_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x35U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_53_r[0U] = vlSelf->__PVT___ramWire_53_T_2[0U];
        vlSelf->__PVT__ramWire_53_r[1U] = vlSelf->__PVT___ramWire_53_T_2[1U];
        vlSelf->__PVT__ramWire_53_r[2U] = vlSelf->__PVT___ramWire_53_T_2[2U];
        vlSelf->__PVT__ramWire_53_r[3U] = vlSelf->__PVT___ramWire_53_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x34U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_52_r[0U] = vlSelf->__PVT___ramWire_52_T_2[0U];
        vlSelf->__PVT__ramWire_52_r[1U] = vlSelf->__PVT___ramWire_52_T_2[1U];
        vlSelf->__PVT__ramWire_52_r[2U] = vlSelf->__PVT___ramWire_52_T_2[2U];
        vlSelf->__PVT__ramWire_52_r[3U] = vlSelf->__PVT___ramWire_52_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x33U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_51_r[0U] = vlSelf->__PVT___ramWire_51_T_2[0U];
        vlSelf->__PVT__ramWire_51_r[1U] = vlSelf->__PVT___ramWire_51_T_2[1U];
        vlSelf->__PVT__ramWire_51_r[2U] = vlSelf->__PVT___ramWire_51_T_2[2U];
        vlSelf->__PVT__ramWire_51_r[3U] = vlSelf->__PVT___ramWire_51_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x32U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_50_r[0U] = vlSelf->__PVT___ramWire_50_T_2[0U];
        vlSelf->__PVT__ramWire_50_r[1U] = vlSelf->__PVT___ramWire_50_T_2[1U];
        vlSelf->__PVT__ramWire_50_r[2U] = vlSelf->__PVT___ramWire_50_T_2[2U];
        vlSelf->__PVT__ramWire_50_r[3U] = vlSelf->__PVT___ramWire_50_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x31U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_49_r[0U] = vlSelf->__PVT___ramWire_49_T_2[0U];
        vlSelf->__PVT__ramWire_49_r[1U] = vlSelf->__PVT___ramWire_49_T_2[1U];
        vlSelf->__PVT__ramWire_49_r[2U] = vlSelf->__PVT___ramWire_49_T_2[2U];
        vlSelf->__PVT__ramWire_49_r[3U] = vlSelf->__PVT___ramWire_49_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x30U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_48_r[0U] = vlSelf->__PVT___ramWire_48_T_2[0U];
        vlSelf->__PVT__ramWire_48_r[1U] = vlSelf->__PVT___ramWire_48_T_2[1U];
        vlSelf->__PVT__ramWire_48_r[2U] = vlSelf->__PVT___ramWire_48_T_2[2U];
        vlSelf->__PVT__ramWire_48_r[3U] = vlSelf->__PVT___ramWire_48_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x2fU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_47_r[0U] = vlSelf->__PVT___ramWire_47_T_2[0U];
        vlSelf->__PVT__ramWire_47_r[1U] = vlSelf->__PVT___ramWire_47_T_2[1U];
        vlSelf->__PVT__ramWire_47_r[2U] = vlSelf->__PVT___ramWire_47_T_2[2U];
        vlSelf->__PVT__ramWire_47_r[3U] = vlSelf->__PVT___ramWire_47_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x2eU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_46_r[0U] = vlSelf->__PVT___ramWire_46_T_2[0U];
        vlSelf->__PVT__ramWire_46_r[1U] = vlSelf->__PVT___ramWire_46_T_2[1U];
        vlSelf->__PVT__ramWire_46_r[2U] = vlSelf->__PVT___ramWire_46_T_2[2U];
        vlSelf->__PVT__ramWire_46_r[3U] = vlSelf->__PVT___ramWire_46_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x2dU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_45_r[0U] = vlSelf->__PVT___ramWire_45_T_2[0U];
        vlSelf->__PVT__ramWire_45_r[1U] = vlSelf->__PVT___ramWire_45_T_2[1U];
        vlSelf->__PVT__ramWire_45_r[2U] = vlSelf->__PVT___ramWire_45_T_2[2U];
        vlSelf->__PVT__ramWire_45_r[3U] = vlSelf->__PVT___ramWire_45_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x2cU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_44_r[0U] = vlSelf->__PVT___ramWire_44_T_2[0U];
        vlSelf->__PVT__ramWire_44_r[1U] = vlSelf->__PVT___ramWire_44_T_2[1U];
        vlSelf->__PVT__ramWire_44_r[2U] = vlSelf->__PVT___ramWire_44_T_2[2U];
        vlSelf->__PVT__ramWire_44_r[3U] = vlSelf->__PVT___ramWire_44_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x2bU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_43_r[0U] = vlSelf->__PVT___ramWire_43_T_2[0U];
        vlSelf->__PVT__ramWire_43_r[1U] = vlSelf->__PVT___ramWire_43_T_2[1U];
        vlSelf->__PVT__ramWire_43_r[2U] = vlSelf->__PVT___ramWire_43_T_2[2U];
        vlSelf->__PVT__ramWire_43_r[3U] = vlSelf->__PVT___ramWire_43_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x2aU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_42_r[0U] = vlSelf->__PVT___ramWire_42_T_2[0U];
        vlSelf->__PVT__ramWire_42_r[1U] = vlSelf->__PVT___ramWire_42_T_2[1U];
        vlSelf->__PVT__ramWire_42_r[2U] = vlSelf->__PVT___ramWire_42_T_2[2U];
        vlSelf->__PVT__ramWire_42_r[3U] = vlSelf->__PVT___ramWire_42_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x28U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_40_r[0U] = vlSelf->__PVT___ramWire_40_T_2[0U];
        vlSelf->__PVT__ramWire_40_r[1U] = vlSelf->__PVT___ramWire_40_T_2[1U];
        vlSelf->__PVT__ramWire_40_r[2U] = vlSelf->__PVT___ramWire_40_T_2[2U];
        vlSelf->__PVT__ramWire_40_r[3U] = vlSelf->__PVT___ramWire_40_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x29U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_41_r[0U] = vlSelf->__PVT___ramWire_41_T_2[0U];
        vlSelf->__PVT__ramWire_41_r[1U] = vlSelf->__PVT___ramWire_41_T_2[1U];
        vlSelf->__PVT__ramWire_41_r[2U] = vlSelf->__PVT___ramWire_41_T_2[2U];
        vlSelf->__PVT__ramWire_41_r[3U] = vlSelf->__PVT___ramWire_41_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x23U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_35_r[0U] = vlSelf->__PVT___ramWire_35_T_2[0U];
        vlSelf->__PVT__ramWire_35_r[1U] = vlSelf->__PVT___ramWire_35_T_2[1U];
        vlSelf->__PVT__ramWire_35_r[2U] = vlSelf->__PVT___ramWire_35_T_2[2U];
        vlSelf->__PVT__ramWire_35_r[3U] = vlSelf->__PVT___ramWire_35_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x24U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_36_r[0U] = vlSelf->__PVT___ramWire_36_T_2[0U];
        vlSelf->__PVT__ramWire_36_r[1U] = vlSelf->__PVT___ramWire_36_T_2[1U];
        vlSelf->__PVT__ramWire_36_r[2U] = vlSelf->__PVT___ramWire_36_T_2[2U];
        vlSelf->__PVT__ramWire_36_r[3U] = vlSelf->__PVT___ramWire_36_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x22U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_34_r[0U] = vlSelf->__PVT___ramWire_34_T_2[0U];
        vlSelf->__PVT__ramWire_34_r[1U] = vlSelf->__PVT___ramWire_34_T_2[1U];
        vlSelf->__PVT__ramWire_34_r[2U] = vlSelf->__PVT___ramWire_34_T_2[2U];
        vlSelf->__PVT__ramWire_34_r[3U] = vlSelf->__PVT___ramWire_34_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x20U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_32_r[0U] = vlSelf->__PVT___ramWire_32_T_2[0U];
        vlSelf->__PVT__ramWire_32_r[1U] = vlSelf->__PVT___ramWire_32_T_2[1U];
        vlSelf->__PVT__ramWire_32_r[2U] = vlSelf->__PVT___ramWire_32_T_2[2U];
        vlSelf->__PVT__ramWire_32_r[3U] = vlSelf->__PVT___ramWire_32_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x21U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_33_r[0U] = vlSelf->__PVT___ramWire_33_T_2[0U];
        vlSelf->__PVT__ramWire_33_r[1U] = vlSelf->__PVT___ramWire_33_T_2[1U];
        vlSelf->__PVT__ramWire_33_r[2U] = vlSelf->__PVT___ramWire_33_T_2[2U];
        vlSelf->__PVT__ramWire_33_r[3U] = vlSelf->__PVT___ramWire_33_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x25U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_37_r[0U] = vlSelf->__PVT___ramWire_37_T_2[0U];
        vlSelf->__PVT__ramWire_37_r[1U] = vlSelf->__PVT___ramWire_37_T_2[1U];
        vlSelf->__PVT__ramWire_37_r[2U] = vlSelf->__PVT___ramWire_37_T_2[2U];
        vlSelf->__PVT__ramWire_37_r[3U] = vlSelf->__PVT___ramWire_37_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x26U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_38_r[0U] = vlSelf->__PVT___ramWire_38_T_2[0U];
        vlSelf->__PVT__ramWire_38_r[1U] = vlSelf->__PVT___ramWire_38_T_2[1U];
        vlSelf->__PVT__ramWire_38_r[2U] = vlSelf->__PVT___ramWire_38_T_2[2U];
        vlSelf->__PVT__ramWire_38_r[3U] = vlSelf->__PVT___ramWire_38_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x27U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_39_r[0U] = vlSelf->__PVT___ramWire_39_T_2[0U];
        vlSelf->__PVT__ramWire_39_r[1U] = vlSelf->__PVT___ramWire_39_T_2[1U];
        vlSelf->__PVT__ramWire_39_r[2U] = vlSelf->__PVT___ramWire_39_T_2[2U];
        vlSelf->__PVT__ramWire_39_r[3U] = vlSelf->__PVT___ramWire_39_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x1bU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_27_r[0U] = vlSelf->__PVT___ramWire_27_T_2[0U];
        vlSelf->__PVT__ramWire_27_r[1U] = vlSelf->__PVT___ramWire_27_T_2[1U];
        vlSelf->__PVT__ramWire_27_r[2U] = vlSelf->__PVT___ramWire_27_T_2[2U];
        vlSelf->__PVT__ramWire_27_r[3U] = vlSelf->__PVT___ramWire_27_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x1cU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_28_r[0U] = vlSelf->__PVT___ramWire_28_T_2[0U];
        vlSelf->__PVT__ramWire_28_r[1U] = vlSelf->__PVT___ramWire_28_T_2[1U];
        vlSelf->__PVT__ramWire_28_r[2U] = vlSelf->__PVT___ramWire_28_T_2[2U];
        vlSelf->__PVT__ramWire_28_r[3U] = vlSelf->__PVT___ramWire_28_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x1dU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_29_r[0U] = vlSelf->__PVT___ramWire_29_T_2[0U];
        vlSelf->__PVT__ramWire_29_r[1U] = vlSelf->__PVT___ramWire_29_T_2[1U];
        vlSelf->__PVT__ramWire_29_r[2U] = vlSelf->__PVT___ramWire_29_T_2[2U];
        vlSelf->__PVT__ramWire_29_r[3U] = vlSelf->__PVT___ramWire_29_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x1eU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_30_r[0U] = vlSelf->__PVT___ramWire_30_T_2[0U];
        vlSelf->__PVT__ramWire_30_r[1U] = vlSelf->__PVT___ramWire_30_T_2[1U];
        vlSelf->__PVT__ramWire_30_r[2U] = vlSelf->__PVT___ramWire_30_T_2[2U];
        vlSelf->__PVT__ramWire_30_r[3U] = vlSelf->__PVT___ramWire_30_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x1fU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_31_r[0U] = vlSelf->__PVT___ramWire_31_T_2[0U];
        vlSelf->__PVT__ramWire_31_r[1U] = vlSelf->__PVT___ramWire_31_T_2[1U];
        vlSelf->__PVT__ramWire_31_r[2U] = vlSelf->__PVT___ramWire_31_T_2[2U];
        vlSelf->__PVT__ramWire_31_r[3U] = vlSelf->__PVT___ramWire_31_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x16U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_22_r[0U] = vlSelf->__PVT___ramWire_22_T_2[0U];
        vlSelf->__PVT__ramWire_22_r[1U] = vlSelf->__PVT___ramWire_22_T_2[1U];
        vlSelf->__PVT__ramWire_22_r[2U] = vlSelf->__PVT___ramWire_22_T_2[2U];
        vlSelf->__PVT__ramWire_22_r[3U] = vlSelf->__PVT___ramWire_22_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x15U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_21_r[0U] = vlSelf->__PVT___ramWire_21_T_2[0U];
        vlSelf->__PVT__ramWire_21_r[1U] = vlSelf->__PVT___ramWire_21_T_2[1U];
        vlSelf->__PVT__ramWire_21_r[2U] = vlSelf->__PVT___ramWire_21_T_2[2U];
        vlSelf->__PVT__ramWire_21_r[3U] = vlSelf->__PVT___ramWire_21_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x14U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_20_r[0U] = vlSelf->__PVT___ramWire_20_T_2[0U];
        vlSelf->__PVT__ramWire_20_r[1U] = vlSelf->__PVT___ramWire_20_T_2[1U];
        vlSelf->__PVT__ramWire_20_r[2U] = vlSelf->__PVT___ramWire_20_T_2[2U];
        vlSelf->__PVT__ramWire_20_r[3U] = vlSelf->__PVT___ramWire_20_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x13U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_19_r[0U] = vlSelf->__PVT___ramWire_19_T_2[0U];
        vlSelf->__PVT__ramWire_19_r[1U] = vlSelf->__PVT___ramWire_19_T_2[1U];
        vlSelf->__PVT__ramWire_19_r[2U] = vlSelf->__PVT___ramWire_19_T_2[2U];
        vlSelf->__PVT__ramWire_19_r[3U] = vlSelf->__PVT___ramWire_19_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x12U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_18_r[0U] = vlSelf->__PVT___ramWire_18_T_2[0U];
        vlSelf->__PVT__ramWire_18_r[1U] = vlSelf->__PVT___ramWire_18_T_2[1U];
        vlSelf->__PVT__ramWire_18_r[2U] = vlSelf->__PVT___ramWire_18_T_2[2U];
        vlSelf->__PVT__ramWire_18_r[3U] = vlSelf->__PVT___ramWire_18_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x11U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_17_r[0U] = vlSelf->__PVT___ramWire_17_T_2[0U];
        vlSelf->__PVT__ramWire_17_r[1U] = vlSelf->__PVT___ramWire_17_T_2[1U];
        vlSelf->__PVT__ramWire_17_r[2U] = vlSelf->__PVT___ramWire_17_T_2[2U];
        vlSelf->__PVT__ramWire_17_r[3U] = vlSelf->__PVT___ramWire_17_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x10U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_16_r[0U] = vlSelf->__PVT___ramWire_16_T_2[0U];
        vlSelf->__PVT__ramWire_16_r[1U] = vlSelf->__PVT___ramWire_16_T_2[1U];
        vlSelf->__PVT__ramWire_16_r[2U] = vlSelf->__PVT___ramWire_16_T_2[2U];
        vlSelf->__PVT__ramWire_16_r[3U] = vlSelf->__PVT___ramWire_16_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0xfU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                               << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                         >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_15_r[0U] = vlSelf->__PVT___ramWire_15_T_2[0U];
        vlSelf->__PVT__ramWire_15_r[1U] = vlSelf->__PVT___ramWire_15_T_2[1U];
        vlSelf->__PVT__ramWire_15_r[2U] = vlSelf->__PVT___ramWire_15_T_2[2U];
        vlSelf->__PVT__ramWire_15_r[3U] = vlSelf->__PVT___ramWire_15_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0xeU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                               << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                         >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_14_r[0U] = vlSelf->__PVT___ramWire_14_T_2[0U];
        vlSelf->__PVT__ramWire_14_r[1U] = vlSelf->__PVT___ramWire_14_T_2[1U];
        vlSelf->__PVT__ramWire_14_r[2U] = vlSelf->__PVT___ramWire_14_T_2[2U];
        vlSelf->__PVT__ramWire_14_r[3U] = vlSelf->__PVT___ramWire_14_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x17U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_23_r[0U] = vlSelf->__PVT___ramWire_23_T_2[0U];
        vlSelf->__PVT__ramWire_23_r[1U] = vlSelf->__PVT___ramWire_23_T_2[1U];
        vlSelf->__PVT__ramWire_23_r[2U] = vlSelf->__PVT___ramWire_23_T_2[2U];
        vlSelf->__PVT__ramWire_23_r[3U] = vlSelf->__PVT___ramWire_23_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x18U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_24_r[0U] = vlSelf->__PVT___ramWire_24_T_2[0U];
        vlSelf->__PVT__ramWire_24_r[1U] = vlSelf->__PVT___ramWire_24_T_2[1U];
        vlSelf->__PVT__ramWire_24_r[2U] = vlSelf->__PVT___ramWire_24_T_2[2U];
        vlSelf->__PVT__ramWire_24_r[3U] = vlSelf->__PVT___ramWire_24_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x19U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_25_r[0U] = vlSelf->__PVT___ramWire_25_T_2[0U];
        vlSelf->__PVT__ramWire_25_r[1U] = vlSelf->__PVT___ramWire_25_T_2[1U];
        vlSelf->__PVT__ramWire_25_r[2U] = vlSelf->__PVT___ramWire_25_T_2[2U];
        vlSelf->__PVT__ramWire_25_r[3U] = vlSelf->__PVT___ramWire_25_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0x1aU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_26_r[0U] = vlSelf->__PVT___ramWire_26_T_2[0U];
        vlSelf->__PVT__ramWire_26_r[1U] = vlSelf->__PVT___ramWire_26_T_2[1U];
        vlSelf->__PVT__ramWire_26_r[2U] = vlSelf->__PVT___ramWire_26_T_2[2U];
        vlSelf->__PVT__ramWire_26_r[3U] = vlSelf->__PVT___ramWire_26_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0xdU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                               << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                         >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_13_r[0U] = vlSelf->__PVT___ramWire_13_T_2[0U];
        vlSelf->__PVT__ramWire_13_r[1U] = vlSelf->__PVT___ramWire_13_T_2[1U];
        vlSelf->__PVT__ramWire_13_r[2U] = vlSelf->__PVT___ramWire_13_T_2[2U];
        vlSelf->__PVT__ramWire_13_r[3U] = vlSelf->__PVT___ramWire_13_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0xcU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                               << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                         >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_12_r[0U] = vlSelf->__PVT___ramWire_12_T_2[0U];
        vlSelf->__PVT__ramWire_12_r[1U] = vlSelf->__PVT___ramWire_12_T_2[1U];
        vlSelf->__PVT__ramWire_12_r[2U] = vlSelf->__PVT___ramWire_12_T_2[2U];
        vlSelf->__PVT__ramWire_12_r[3U] = vlSelf->__PVT___ramWire_12_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0xbU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                               << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                         >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_11_r[0U] = vlSelf->__PVT___ramWire_11_T_2[0U];
        vlSelf->__PVT__ramWire_11_r[1U] = vlSelf->__PVT___ramWire_11_T_2[1U];
        vlSelf->__PVT__ramWire_11_r[2U] = vlSelf->__PVT___ramWire_11_T_2[2U];
        vlSelf->__PVT__ramWire_11_r[3U] = vlSelf->__PVT___ramWire_11_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (4U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_4_r[0U] = vlSelf->__PVT___ramWire_4_T_2[0U];
        vlSelf->__PVT__ramWire_4_r[1U] = vlSelf->__PVT___ramWire_4_T_2[1U];
        vlSelf->__PVT__ramWire_4_r[2U] = vlSelf->__PVT___ramWire_4_T_2[2U];
        vlSelf->__PVT__ramWire_4_r[3U] = vlSelf->__PVT___ramWire_4_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (3U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_3_r[0U] = vlSelf->__PVT___ramWire_3_T_2[0U];
        vlSelf->__PVT__ramWire_3_r[1U] = vlSelf->__PVT___ramWire_3_T_2[1U];
        vlSelf->__PVT__ramWire_3_r[2U] = vlSelf->__PVT___ramWire_3_T_2[2U];
        vlSelf->__PVT__ramWire_3_r[3U] = vlSelf->__PVT___ramWire_3_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (2U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_2_r[0U] = vlSelf->__PVT___ramWire_2_T_2[0U];
        vlSelf->__PVT__ramWire_2_r[1U] = vlSelf->__PVT___ramWire_2_T_2[1U];
        vlSelf->__PVT__ramWire_2_r[2U] = vlSelf->__PVT___ramWire_2_T_2[2U];
        vlSelf->__PVT__ramWire_2_r[3U] = vlSelf->__PVT___ramWire_2_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_0_r[0U] = vlSelf->__PVT___ramWire_0_T_2[0U];
        vlSelf->__PVT__ramWire_0_r[1U] = vlSelf->__PVT___ramWire_0_T_2[1U];
        vlSelf->__PVT__ramWire_0_r[2U] = vlSelf->__PVT___ramWire_0_T_2[2U];
        vlSelf->__PVT__ramWire_0_r[3U] = vlSelf->__PVT___ramWire_0_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (1U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_1_r[0U] = vlSelf->__PVT___ramWire_1_T_2[0U];
        vlSelf->__PVT__ramWire_1_r[1U] = vlSelf->__PVT___ramWire_1_T_2[1U];
        vlSelf->__PVT__ramWire_1_r[2U] = vlSelf->__PVT___ramWire_1_T_2[2U];
        vlSelf->__PVT__ramWire_1_r[3U] = vlSelf->__PVT___ramWire_1_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (5U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_5_r[0U] = vlSelf->__PVT___ramWire_5_T_2[0U];
        vlSelf->__PVT__ramWire_5_r[1U] = vlSelf->__PVT___ramWire_5_T_2[1U];
        vlSelf->__PVT__ramWire_5_r[2U] = vlSelf->__PVT___ramWire_5_T_2[2U];
        vlSelf->__PVT__ramWire_5_r[3U] = vlSelf->__PVT___ramWire_5_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (6U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_6_r[0U] = vlSelf->__PVT___ramWire_6_T_2[0U];
        vlSelf->__PVT__ramWire_6_r[1U] = vlSelf->__PVT___ramWire_6_T_2[1U];
        vlSelf->__PVT__ramWire_6_r[2U] = vlSelf->__PVT___ramWire_6_T_2[2U];
        vlSelf->__PVT__ramWire_6_r[3U] = vlSelf->__PVT___ramWire_6_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (7U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_7_r[0U] = vlSelf->__PVT___ramWire_7_T_2[0U];
        vlSelf->__PVT__ramWire_7_r[1U] = vlSelf->__PVT___ramWire_7_T_2[1U];
        vlSelf->__PVT__ramWire_7_r[2U] = vlSelf->__PVT___ramWire_7_T_2[2U];
        vlSelf->__PVT__ramWire_7_r[3U] = vlSelf->__PVT___ramWire_7_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (8U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_8_r[0U] = vlSelf->__PVT___ramWire_8_T_2[0U];
        vlSelf->__PVT__ramWire_8_r[1U] = vlSelf->__PVT___ramWire_8_T_2[1U];
        vlSelf->__PVT__ramWire_8_r[2U] = vlSelf->__PVT___ramWire_8_T_2[2U];
        vlSelf->__PVT__ramWire_8_r[3U] = vlSelf->__PVT___ramWire_8_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (9U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_9_r[0U] = vlSelf->__PVT___ramWire_9_T_2[0U];
        vlSelf->__PVT__ramWire_9_r[1U] = vlSelf->__PVT___ramWire_9_T_2[1U];
        vlSelf->__PVT__ramWire_9_r[2U] = vlSelf->__PVT___ramWire_9_T_2[2U];
        vlSelf->__PVT__ramWire_9_r[3U] = vlSelf->__PVT___ramWire_9_T_2[3U];
    }
    if ((((~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)) 
          & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wen))) 
         & (0xaU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                               << 4U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                         >> 0x1cU)))))) {
        vlSelf->__PVT__ramWire_10_r[0U] = vlSelf->__PVT___ramWire_10_T_2[0U];
        vlSelf->__PVT__ramWire_10_r[1U] = vlSelf->__PVT___ramWire_10_T_2[1U];
        vlSelf->__PVT__ramWire_10_r[2U] = vlSelf->__PVT___ramWire_10_T_2[2U];
        vlSelf->__PVT__ramWire_10_r[3U] = vlSelf->__PVT___ramWire_10_T_2[3U];
    }
}

VL_INLINE_OPT void Vysyx_041728_mem___combo__TOP__ysyx_041728__DOT__dmem_3__36(Vysyx_041728_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_041728_mem___combo__TOP__ysyx_041728__DOT__dmem_3__36\n"); );
    // Variables
    VlWide<4>/*127:0*/ __PVT___ramWire_0_T;
    // Body
    __PVT___ramWire_0_T[0U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                                 ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[0U]
                                 : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[0U]) 
                               & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    __PVT___ramWire_0_T[1U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                                 ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[1U]
                                 : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[1U]) 
                               & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    __PVT___ramWire_0_T[2U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                                 ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[2U]
                                 : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[2U]) 
                               & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    __PVT___ramWire_0_T[3U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                                 ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[3U]
                                 : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[3U]) 
                               & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_0_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_0_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_0_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_0_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_0_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_0_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_0_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_0_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_1_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_1_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_1_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_1_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_1_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_1_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_1_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_1_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_2_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_2_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_2_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_2_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_2_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_2_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_2_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_2_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_3_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_3_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_3_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_3_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_3_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_3_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_3_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_3_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_4_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_4_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_4_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_4_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_4_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_4_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_4_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_4_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_5_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_5_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_5_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_5_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_5_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_5_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_5_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_5_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_6_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_6_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_6_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_6_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_6_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_6_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_6_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_6_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_7_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_7_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_7_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_7_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_7_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_7_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_7_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_7_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_8_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_8_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_8_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_8_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_8_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_8_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_8_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_8_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_9_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                         | (vlSelf->__PVT__ramWire_9_r[0U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_9_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                         | (vlSelf->__PVT__ramWire_9_r[1U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_9_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                         | (vlSelf->__PVT__ramWire_9_r[2U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_9_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                         | (vlSelf->__PVT__ramWire_9_r[3U] 
                                            & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_10_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_10_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_10_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_10_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_10_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_10_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_10_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_10_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_11_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_11_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_11_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_11_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_11_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_11_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_11_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_11_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_12_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_12_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_12_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_12_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_12_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_12_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_12_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_12_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_13_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_13_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_13_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_13_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_13_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_13_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_13_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_13_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_14_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_14_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_14_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_14_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_14_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_14_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_14_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_14_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_15_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_15_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_15_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_15_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_15_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_15_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_15_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_15_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_16_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_16_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_16_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_16_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_16_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_16_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_16_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_16_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_17_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_17_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_17_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_17_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_17_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_17_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_17_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_17_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_18_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_18_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_18_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_18_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_18_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_18_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_18_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_18_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_19_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_19_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_19_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_19_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_19_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_19_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_19_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_19_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_20_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_20_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_20_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_20_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_20_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_20_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_20_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_20_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_21_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_21_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_21_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_21_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_21_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_21_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_21_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_21_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_22_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_22_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_22_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_22_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_22_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_22_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_22_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_22_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_23_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_23_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_23_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_23_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_23_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_23_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_23_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_23_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_24_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_24_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_24_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_24_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_24_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_24_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_24_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_24_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_25_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_25_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_25_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_25_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_25_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_25_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_25_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_25_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_26_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_26_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_26_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_26_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_26_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_26_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_26_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_26_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_27_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_27_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_27_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_27_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_27_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_27_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_27_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_27_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_28_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_28_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_28_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_28_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_28_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_28_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_28_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_28_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_29_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_29_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_29_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_29_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_29_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_29_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_29_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_29_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_30_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_30_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_30_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_30_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_30_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_30_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_30_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_30_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_31_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_31_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_31_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_31_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_31_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_31_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_31_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_31_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_32_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_32_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_32_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_32_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_32_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_32_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_32_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_32_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_33_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_33_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_33_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_33_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_33_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_33_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_33_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_33_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_34_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_34_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_34_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_34_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_34_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_34_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_34_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_34_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_35_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_35_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_35_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_35_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_35_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_35_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_35_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_35_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_36_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_36_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_36_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_36_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_36_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_36_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_36_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_36_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_37_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_37_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_37_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_37_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_37_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_37_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_37_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_37_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_38_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_38_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_38_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_38_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_38_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_38_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_38_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_38_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_39_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_39_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_39_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_39_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_39_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_39_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_39_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_39_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_40_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_40_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_40_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_40_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_40_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_40_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_40_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_40_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_41_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_41_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_41_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_41_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_41_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_41_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_41_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_41_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_42_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_42_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_42_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_42_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_42_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_42_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_42_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_42_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_43_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_43_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_43_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_43_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_43_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_43_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_43_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_43_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_44_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_44_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_44_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_44_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_44_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_44_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_44_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_44_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_45_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_45_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_45_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_45_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_45_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_45_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_45_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_45_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_46_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_46_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_46_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_46_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_46_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_46_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_46_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_46_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_47_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_47_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_47_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_47_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_47_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_47_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_47_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_47_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_48_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_48_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_48_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_48_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_48_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_48_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_48_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_48_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_49_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_49_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_49_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_49_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_49_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_49_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_49_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_49_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_50_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_50_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_50_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_50_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_50_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_50_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_50_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_50_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_51_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_51_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_51_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_51_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_51_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_51_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_51_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_51_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_52_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_52_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_52_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_52_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_52_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_52_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_52_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_52_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_53_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_53_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_53_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_53_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_53_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_53_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_53_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_53_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_54_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_54_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_54_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_54_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_54_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_54_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_54_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_54_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_55_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_55_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_55_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_55_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_55_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_55_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_55_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_55_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_56_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_56_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_56_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_56_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_56_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_56_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_56_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_56_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_57_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_57_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_57_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_57_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_57_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_57_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_57_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_57_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_58_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_58_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_58_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_58_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_58_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_58_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_58_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_58_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_59_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_59_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_59_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_59_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_59_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_59_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_59_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_59_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_60_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_60_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_60_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_60_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_60_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_60_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_60_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_60_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_61_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_61_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_61_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_61_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_61_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_61_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_61_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_61_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_62_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_62_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_62_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_62_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_62_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_62_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_62_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_62_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___ramWire_63_T_2[0U] = (__PVT___ramWire_0_T[0U] 
                                          | (vlSelf->__PVT__ramWire_63_r[0U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___ramWire_63_T_2[1U] = (__PVT___ramWire_0_T[1U] 
                                          | (vlSelf->__PVT__ramWire_63_r[1U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___ramWire_63_T_2[2U] = (__PVT___ramWire_0_T[2U] 
                                          | (vlSelf->__PVT__ramWire_63_r[2U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___ramWire_63_T_2[3U] = (__PVT___ramWire_0_T[3U] 
                                          | (vlSelf->__PVT__ramWire_63_r[3U] 
                                             & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
}
