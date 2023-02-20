// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041728.h for the primary calling header

#include "Vysyx_041728_mem.h"
#include "Vysyx_041728__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_041728_mem___settle__TOP__ysyx_041728__DOT__mem_6__4(Vysyx_041728_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_041728_mem___settle__TOP__ysyx_041728__DOT__mem_6__4\n"); );
    // Variables
    VlWide<4>/*127:0*/ __PVT___T_2;
    // Body
    __PVT___T_2[0U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4383[0U]
                         : 0U) & (~ vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    __PVT___T_2[1U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4383[1U]
                         : 0U) & (~ vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    __PVT___T_2[2U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4383[2U]
                         : 0U) & (~ vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    __PVT___T_2[3U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4383[3U]
                         : 0U) & (~ vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_5 = ((IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4460) 
                           & (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4459));
    vlSelf->__PVT___T_4[0U] = (__PVT___T_2[0U] | (vlSelf->__PVT__ramWire_0[0U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_4[1U] = (__PVT___T_2[1U] | (vlSelf->__PVT__ramWire_0[1U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_4[2U] = (__PVT___T_2[2U] | (vlSelf->__PVT__ramWire_0[2U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_4[3U] = (__PVT___T_2[3U] | (vlSelf->__PVT__ramWire_0[3U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_11[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_1[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_11[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_1[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_11[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_1[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_11[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_1[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_18[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_2[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_18[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_2[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_18[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_2[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_18[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_2[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_25[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_3[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_25[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_3[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_25[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_3[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_25[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_3[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_32[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_4[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_32[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_4[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_32[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_4[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_32[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_4[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_39[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_5[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_39[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_5[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_39[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_5[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_39[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_5[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_46[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_6[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_46[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_6[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_46[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_6[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_46[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_6[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_53[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_7[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_53[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_7[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_53[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_7[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_53[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_7[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_60[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_8[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_60[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_8[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_60[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_8[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_60[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_8[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_67[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_9[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_67[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_9[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_67[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_9[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_67[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_9[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_74[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_10[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_74[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_10[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_74[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_10[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_74[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_10[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_81[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_11[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_81[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_11[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_81[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_11[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_81[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_11[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_88[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_12[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_88[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_12[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_88[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_12[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_88[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_12[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_95[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_13[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_95[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_13[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_95[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_13[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_95[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_13[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_102[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_14[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_102[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_14[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_102[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_14[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_102[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_14[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_109[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_15[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_109[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_15[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_109[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_15[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_109[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_15[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_116[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_16[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_116[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_16[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_116[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_16[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_116[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_16[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_123[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_17[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_123[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_17[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_123[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_17[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_123[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_17[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_130[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_18[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_130[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_18[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_130[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_18[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_130[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_18[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_137[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_19[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_137[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_19[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_137[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_19[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_137[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_19[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_144[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_20[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_144[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_20[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_144[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_20[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_144[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_20[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_151[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_21[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_151[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_21[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_151[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_21[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_151[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_21[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_158[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_22[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_158[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_22[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_158[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_22[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_158[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_22[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_165[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_23[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_165[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_23[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_165[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_23[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_165[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_23[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_172[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_24[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_172[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_24[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_172[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_24[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_172[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_24[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_179[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_25[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_179[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_25[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_179[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_25[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_179[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_25[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_186[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_26[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_186[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_26[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_186[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_26[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_186[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_26[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_193[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_27[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_193[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_27[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_193[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_27[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_193[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_27[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_200[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_28[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_200[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_28[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_200[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_28[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_200[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_28[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_207[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_29[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_207[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_29[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_207[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_29[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_207[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_29[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_214[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_30[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_214[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_30[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_214[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_30[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_214[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_30[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_221[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_31[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_221[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_31[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_221[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_31[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_221[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_31[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_228[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_32[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_228[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_32[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_228[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_32[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_228[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_32[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_235[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_33[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_235[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_33[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_235[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_33[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_235[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_33[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_242[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_34[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_242[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_34[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_242[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_34[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_242[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_34[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_249[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_35[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_249[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_35[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_249[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_35[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_249[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_35[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_256[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_36[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_256[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_36[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_256[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_36[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_256[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_36[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_263[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_37[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_263[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_37[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_263[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_37[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_263[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_37[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_270[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_38[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_270[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_38[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_270[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_38[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_270[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_38[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_277[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_39[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_277[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_39[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_277[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_39[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_277[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_39[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_284[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_40[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_284[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_40[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_284[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_40[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_284[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_40[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_291[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_41[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_291[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_41[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_291[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_41[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_291[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_41[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_298[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_42[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_298[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_42[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_298[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_42[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_298[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_42[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_305[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_43[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_305[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_43[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_305[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_43[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_305[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_43[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_312[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_44[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_312[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_44[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_312[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_44[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_312[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_44[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_319[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_45[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_319[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_45[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_319[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_45[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_319[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_45[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_326[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_46[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_326[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_46[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_326[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_46[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_326[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_46[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_333[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_47[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_333[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_47[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_333[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_47[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_333[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_47[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_340[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_48[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_340[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_48[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_340[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_48[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_340[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_48[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_347[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_49[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_347[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_49[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_347[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_49[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_347[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_49[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_354[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_50[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_354[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_50[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_354[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_50[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_354[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_50[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_361[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_51[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_361[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_51[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_361[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_51[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_361[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_51[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_368[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_52[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_368[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_52[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_368[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_52[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_368[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_52[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_375[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_53[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_375[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_53[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_375[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_53[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_375[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_53[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_382[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_54[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_382[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_54[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_382[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_54[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_382[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_54[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_389[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_55[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_389[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_55[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_389[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_55[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_389[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_55[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_396[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_56[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_396[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_56[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_396[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_56[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_396[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_56[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_403[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_57[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_403[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_57[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_403[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_57[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_403[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_57[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_410[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_58[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_410[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_58[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_410[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_58[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_410[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_58[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_417[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_59[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_417[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_59[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_417[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_59[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_417[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_59[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_424[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_60[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_424[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_60[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_424[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_60[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_424[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_60[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_431[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_61[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_431[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_61[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_431[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_61[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_431[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_61[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_438[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_62[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_438[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_62[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_438[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_62[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_438[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_62[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_445[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_63[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_445[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_63[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_445[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_63[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_445[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_63[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__iCache_io_SRAMIO_3_wmask[3U]));
}

VL_INLINE_OPT void Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__mem_6__12(Vysyx_041728_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__mem_6__12\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1700;
    VlWide<4>/*127:0*/ __Vtemp1716;
    VlWide<4>/*127:0*/ __Vtemp1732;
    VlWide<4>/*127:0*/ __Vtemp1748;
    VlWide<4>/*127:0*/ __Vtemp1764;
    VlWide<4>/*127:0*/ __Vtemp1780;
    VlWide<4>/*127:0*/ __Vtemp1796;
    // Body
    if (((IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4460) 
         & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__iCache__DOT___T_4459)))) {
        if ((8U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                             >> 4U)))) {
            __Vtemp1700[0U] = vlSelf->__PVT__ramWire_8[0U];
            __Vtemp1700[1U] = vlSelf->__PVT__ramWire_8[1U];
            __Vtemp1700[2U] = vlSelf->__PVT__ramWire_8[2U];
            __Vtemp1700[3U] = vlSelf->__PVT__ramWire_8[3U];
        } else {
            __Vtemp1700[0U] = ((7U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->__PVT__ramWire_7[0U]
                                : ((6U == (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->__PVT__ramWire_6[0U]
                                    : ((5U == (0x3fU 
                                               & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->__PVT__ramWire_5[0U]
                                        : ((4U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->__PVT__ramWire_4[0U]
                                            : ((3U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_3[0U]
                                                : (
                                                   (2U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_2[0U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_1[0U]
                                                     : 
                                                    vlSelf->__PVT__ramWire_0[0U])))))));
            __Vtemp1700[1U] = ((7U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->__PVT__ramWire_7[1U]
                                : ((6U == (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->__PVT__ramWire_6[1U]
                                    : ((5U == (0x3fU 
                                               & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->__PVT__ramWire_5[1U]
                                        : ((4U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->__PVT__ramWire_4[1U]
                                            : ((3U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_3[1U]
                                                : (
                                                   (2U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_2[1U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_1[1U]
                                                     : 
                                                    vlSelf->__PVT__ramWire_0[1U])))))));
            __Vtemp1700[2U] = ((7U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->__PVT__ramWire_7[2U]
                                : ((6U == (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->__PVT__ramWire_6[2U]
                                    : ((5U == (0x3fU 
                                               & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->__PVT__ramWire_5[2U]
                                        : ((4U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->__PVT__ramWire_4[2U]
                                            : ((3U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_3[2U]
                                                : (
                                                   (2U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_2[2U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_1[2U]
                                                     : 
                                                    vlSelf->__PVT__ramWire_0[2U])))))));
            __Vtemp1700[3U] = ((7U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->__PVT__ramWire_7[3U]
                                : ((6U == (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->__PVT__ramWire_6[3U]
                                    : ((5U == (0x3fU 
                                               & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->__PVT__ramWire_5[3U]
                                        : ((4U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->__PVT__ramWire_4[3U]
                                            : ((3U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_3[3U]
                                                : (
                                                   (2U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_2[3U]
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_1[3U]
                                                     : 
                                                    vlSelf->__PVT__ramWire_0[3U])))))));
        }
        if ((0x10U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp1716[0U] = vlSelf->__PVT__ramWire_16[0U];
            __Vtemp1716[1U] = vlSelf->__PVT__ramWire_16[1U];
            __Vtemp1716[2U] = vlSelf->__PVT__ramWire_16[2U];
            __Vtemp1716[3U] = vlSelf->__PVT__ramWire_16[3U];
        } else {
            __Vtemp1716[0U] = ((0xfU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                ? vlSelf->__PVT__ramWire_15[0U]
                                : ((0xeU == (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                    ? vlSelf->__PVT__ramWire_14[0U]
                                    : ((0xdU == (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                        ? vlSelf->__PVT__ramWire_13[0U]
                                        : ((0xcU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_12[0U]
                                            : ((0xbU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_11[0U]
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_10[0U]
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_9[0U]
                                                     : 
                                                    __Vtemp1700[0U])))))));
            __Vtemp1716[1U] = ((0xfU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                ? vlSelf->__PVT__ramWire_15[1U]
                                : ((0xeU == (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                    ? vlSelf->__PVT__ramWire_14[1U]
                                    : ((0xdU == (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                        ? vlSelf->__PVT__ramWire_13[1U]
                                        : ((0xcU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_12[1U]
                                            : ((0xbU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_11[1U]
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_10[1U]
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_9[1U]
                                                     : 
                                                    __Vtemp1700[1U])))))));
            __Vtemp1716[2U] = ((0xfU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                ? vlSelf->__PVT__ramWire_15[2U]
                                : ((0xeU == (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                    ? vlSelf->__PVT__ramWire_14[2U]
                                    : ((0xdU == (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                        ? vlSelf->__PVT__ramWire_13[2U]
                                        : ((0xcU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_12[2U]
                                            : ((0xbU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_11[2U]
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_10[2U]
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_9[2U]
                                                     : 
                                                    __Vtemp1700[2U])))))));
            __Vtemp1716[3U] = ((0xfU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                ? vlSelf->__PVT__ramWire_15[3U]
                                : ((0xeU == (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                    ? vlSelf->__PVT__ramWire_14[3U]
                                    : ((0xdU == (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                        ? vlSelf->__PVT__ramWire_13[3U]
                                        : ((0xcU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_12[3U]
                                            : ((0xbU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_11[3U]
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_10[3U]
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_9[3U]
                                                     : 
                                                    __Vtemp1700[3U])))))));
        }
        if ((0x18U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp1732[0U] = vlSelf->__PVT__ramWire_24[0U];
            __Vtemp1732[1U] = vlSelf->__PVT__ramWire_24[1U];
            __Vtemp1732[2U] = vlSelf->__PVT__ramWire_24[2U];
            __Vtemp1732[3U] = vlSelf->__PVT__ramWire_24[3U];
        } else {
            __Vtemp1732[0U] = ((0x17U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_23[0U]
                                : ((0x16U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_22[0U]
                                    : ((0x15U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_21[0U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_20[0U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_19[0U]
                                                : (
                                                   (0x12U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_18[0U]
                                                    : 
                                                   ((0x11U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_17[0U]
                                                     : 
                                                    __Vtemp1716[0U])))))));
            __Vtemp1732[1U] = ((0x17U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_23[1U]
                                : ((0x16U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_22[1U]
                                    : ((0x15U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_21[1U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_20[1U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_19[1U]
                                                : (
                                                   (0x12U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_18[1U]
                                                    : 
                                                   ((0x11U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_17[1U]
                                                     : 
                                                    __Vtemp1716[1U])))))));
            __Vtemp1732[2U] = ((0x17U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_23[2U]
                                : ((0x16U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_22[2U]
                                    : ((0x15U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_21[2U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_20[2U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_19[2U]
                                                : (
                                                   (0x12U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_18[2U]
                                                    : 
                                                   ((0x11U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_17[2U]
                                                     : 
                                                    __Vtemp1716[2U])))))));
            __Vtemp1732[3U] = ((0x17U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_23[3U]
                                : ((0x16U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_22[3U]
                                    : ((0x15U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_21[3U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_20[3U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_19[3U]
                                                : (
                                                   (0x12U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_18[3U]
                                                    : 
                                                   ((0x11U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_17[3U]
                                                     : 
                                                    __Vtemp1716[3U])))))));
        }
        if ((0x20U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp1748[0U] = vlSelf->__PVT__ramWire_32[0U];
            __Vtemp1748[1U] = vlSelf->__PVT__ramWire_32[1U];
            __Vtemp1748[2U] = vlSelf->__PVT__ramWire_32[2U];
            __Vtemp1748[3U] = vlSelf->__PVT__ramWire_32[3U];
        } else {
            __Vtemp1748[0U] = ((0x1fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_31[0U]
                                : ((0x1eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_30[0U]
                                    : ((0x1dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_29[0U]
                                        : ((0x1cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_28[0U]
                                            : ((0x1bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_27[0U]
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_26[0U]
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_25[0U]
                                                     : 
                                                    __Vtemp1732[0U])))))));
            __Vtemp1748[1U] = ((0x1fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_31[1U]
                                : ((0x1eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_30[1U]
                                    : ((0x1dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_29[1U]
                                        : ((0x1cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_28[1U]
                                            : ((0x1bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_27[1U]
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_26[1U]
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_25[1U]
                                                     : 
                                                    __Vtemp1732[1U])))))));
            __Vtemp1748[2U] = ((0x1fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_31[2U]
                                : ((0x1eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_30[2U]
                                    : ((0x1dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_29[2U]
                                        : ((0x1cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_28[2U]
                                            : ((0x1bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_27[2U]
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_26[2U]
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_25[2U]
                                                     : 
                                                    __Vtemp1732[2U])))))));
            __Vtemp1748[3U] = ((0x1fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_31[3U]
                                : ((0x1eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_30[3U]
                                    : ((0x1dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_29[3U]
                                        : ((0x1cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_28[3U]
                                            : ((0x1bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_27[3U]
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_26[3U]
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_25[3U]
                                                     : 
                                                    __Vtemp1732[3U])))))));
        }
        if ((0x28U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp1764[0U] = vlSelf->__PVT__ramWire_40[0U];
            __Vtemp1764[1U] = vlSelf->__PVT__ramWire_40[1U];
            __Vtemp1764[2U] = vlSelf->__PVT__ramWire_40[2U];
            __Vtemp1764[3U] = vlSelf->__PVT__ramWire_40[3U];
        } else {
            __Vtemp1764[0U] = ((0x27U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_39[0U]
                                : ((0x26U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_38[0U]
                                    : ((0x25U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_37[0U]
                                        : ((0x24U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_36[0U]
                                            : ((0x23U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_35[0U]
                                                : (
                                                   (0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_34[0U]
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_33[0U]
                                                     : 
                                                    __Vtemp1748[0U])))))));
            __Vtemp1764[1U] = ((0x27U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_39[1U]
                                : ((0x26U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_38[1U]
                                    : ((0x25U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_37[1U]
                                        : ((0x24U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_36[1U]
                                            : ((0x23U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_35[1U]
                                                : (
                                                   (0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_34[1U]
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_33[1U]
                                                     : 
                                                    __Vtemp1748[1U])))))));
            __Vtemp1764[2U] = ((0x27U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_39[2U]
                                : ((0x26U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_38[2U]
                                    : ((0x25U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_37[2U]
                                        : ((0x24U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_36[2U]
                                            : ((0x23U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_35[2U]
                                                : (
                                                   (0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_34[2U]
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_33[2U]
                                                     : 
                                                    __Vtemp1748[2U])))))));
            __Vtemp1764[3U] = ((0x27U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_39[3U]
                                : ((0x26U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_38[3U]
                                    : ((0x25U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_37[3U]
                                        : ((0x24U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_36[3U]
                                            : ((0x23U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_35[3U]
                                                : (
                                                   (0x22U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_34[3U]
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_33[3U]
                                                     : 
                                                    __Vtemp1748[3U])))))));
        }
        if ((0x30U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp1780[0U] = vlSelf->__PVT__ramWire_48[0U];
            __Vtemp1780[1U] = vlSelf->__PVT__ramWire_48[1U];
            __Vtemp1780[2U] = vlSelf->__PVT__ramWire_48[2U];
            __Vtemp1780[3U] = vlSelf->__PVT__ramWire_48[3U];
        } else {
            __Vtemp1780[0U] = ((0x2fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_47[0U]
                                : ((0x2eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_46[0U]
                                    : ((0x2dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_45[0U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_44[0U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_43[0U]
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_42[0U]
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_41[0U]
                                                     : 
                                                    __Vtemp1764[0U])))))));
            __Vtemp1780[1U] = ((0x2fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_47[1U]
                                : ((0x2eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_46[1U]
                                    : ((0x2dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_45[1U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_44[1U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_43[1U]
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_42[1U]
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_41[1U]
                                                     : 
                                                    __Vtemp1764[1U])))))));
            __Vtemp1780[2U] = ((0x2fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_47[2U]
                                : ((0x2eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_46[2U]
                                    : ((0x2dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_45[2U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_44[2U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_43[2U]
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_42[2U]
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_41[2U]
                                                     : 
                                                    __Vtemp1764[2U])))))));
            __Vtemp1780[3U] = ((0x2fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_47[3U]
                                : ((0x2eU == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_46[3U]
                                    : ((0x2dU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_45[3U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_44[3U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_43[3U]
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_42[3U]
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_41[3U]
                                                     : 
                                                    __Vtemp1764[3U])))))));
        }
        if ((0x38U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            __Vtemp1796[0U] = vlSelf->__PVT__ramWire_56[0U];
            __Vtemp1796[1U] = vlSelf->__PVT__ramWire_56[1U];
            __Vtemp1796[2U] = vlSelf->__PVT__ramWire_56[2U];
            __Vtemp1796[3U] = vlSelf->__PVT__ramWire_56[3U];
        } else {
            __Vtemp1796[0U] = ((0x37U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_55[0U]
                                : ((0x36U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_54[0U]
                                    : ((0x35U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_53[0U]
                                        : ((0x34U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_52[0U]
                                            : ((0x33U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_51[0U]
                                                : (
                                                   (0x32U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_50[0U]
                                                    : 
                                                   ((0x31U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_49[0U]
                                                     : 
                                                    __Vtemp1780[0U])))))));
            __Vtemp1796[1U] = ((0x37U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_55[1U]
                                : ((0x36U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_54[1U]
                                    : ((0x35U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_53[1U]
                                        : ((0x34U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_52[1U]
                                            : ((0x33U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_51[1U]
                                                : (
                                                   (0x32U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_50[1U]
                                                    : 
                                                   ((0x31U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_49[1U]
                                                     : 
                                                    __Vtemp1780[1U])))))));
            __Vtemp1796[2U] = ((0x37U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_55[2U]
                                : ((0x36U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_54[2U]
                                    : ((0x35U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_53[2U]
                                        : ((0x34U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_52[2U]
                                            : ((0x33U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_51[2U]
                                                : (
                                                   (0x32U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_50[2U]
                                                    : 
                                                   ((0x31U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_49[2U]
                                                     : 
                                                    __Vtemp1780[2U])))))));
            __Vtemp1796[3U] = ((0x37U == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->__PVT__ramWire_55[3U]
                                : ((0x36U == (0x3fU 
                                              & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->__PVT__ramWire_54[3U]
                                    : ((0x35U == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->__PVT__ramWire_53[3U]
                                        : ((0x34U == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->__PVT__ramWire_52[3U]
                                            : ((0x33U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->__PVT__ramWire_51[3U]
                                                : (
                                                   (0x32U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_50[3U]
                                                    : 
                                                   ((0x31U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_49[3U]
                                                     : 
                                                    __Vtemp1780[3U])))))));
        }
        if ((0x3fU == (0x3fU & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                >> 4U)))) {
            vlSelf->__PVT___T_577[0U] = vlSelf->__PVT__ramWire_63[0U];
            vlSelf->__PVT___T_577[1U] = vlSelf->__PVT__ramWire_63[1U];
            vlSelf->__PVT___T_577[2U] = vlSelf->__PVT__ramWire_63[2U];
            vlSelf->__PVT___T_577[3U] = vlSelf->__PVT__ramWire_63[3U];
        } else {
            vlSelf->__PVT___T_577[0U] = ((0x3eU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->__PVT__ramWire_62[0U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->__PVT__ramWire_61[0U]
                                              : ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? 
                                                 vlSelf->__PVT__ramWire_60[0U]
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSelf->__PVT__ramWire_59[0U]
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_58[0U]
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_57[0U]
                                                     : 
                                                    __Vtemp1796[0U]))))));
            vlSelf->__PVT___T_577[1U] = ((0x3eU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->__PVT__ramWire_62[1U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->__PVT__ramWire_61[1U]
                                              : ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? 
                                                 vlSelf->__PVT__ramWire_60[1U]
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSelf->__PVT__ramWire_59[1U]
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_58[1U]
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_57[1U]
                                                     : 
                                                    __Vtemp1796[1U]))))));
            vlSelf->__PVT___T_577[2U] = ((0x3eU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->__PVT__ramWire_62[2U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->__PVT__ramWire_61[2U]
                                              : ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? 
                                                 vlSelf->__PVT__ramWire_60[2U]
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSelf->__PVT__ramWire_59[2U]
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_58[2U]
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_57[2U]
                                                     : 
                                                    __Vtemp1796[2U]))))));
            vlSelf->__PVT___T_577[3U] = ((0x3eU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->__PVT__ramWire_62[3U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->__PVT__ramWire_61[3U]
                                              : ((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? 
                                                 vlSelf->__PVT__ramWire_60[3U]
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? 
                                                  vlSelf->__PVT__ramWire_59[3U]
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->__PVT__ramWire_58[3U]
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSelf->__PVT__ramWire_57[3U]
                                                     : 
                                                    __Vtemp1796[3U]))))));
        }
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3fU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_63[0U] = vlSelf->__PVT___T_445[0U];
        vlSelf->__PVT__ramWire_63[1U] = vlSelf->__PVT___T_445[1U];
        vlSelf->__PVT__ramWire_63[2U] = vlSelf->__PVT___T_445[2U];
        vlSelf->__PVT__ramWire_63[3U] = vlSelf->__PVT___T_445[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3eU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_62[0U] = vlSelf->__PVT___T_438[0U];
        vlSelf->__PVT__ramWire_62[1U] = vlSelf->__PVT___T_438[1U];
        vlSelf->__PVT__ramWire_62[2U] = vlSelf->__PVT___T_438[2U];
        vlSelf->__PVT__ramWire_62[3U] = vlSelf->__PVT___T_438[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3dU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_61[0U] = vlSelf->__PVT___T_431[0U];
        vlSelf->__PVT__ramWire_61[1U] = vlSelf->__PVT___T_431[1U];
        vlSelf->__PVT__ramWire_61[2U] = vlSelf->__PVT___T_431[2U];
        vlSelf->__PVT__ramWire_61[3U] = vlSelf->__PVT___T_431[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3cU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_60[0U] = vlSelf->__PVT___T_424[0U];
        vlSelf->__PVT__ramWire_60[1U] = vlSelf->__PVT___T_424[1U];
        vlSelf->__PVT__ramWire_60[2U] = vlSelf->__PVT___T_424[2U];
        vlSelf->__PVT__ramWire_60[3U] = vlSelf->__PVT___T_424[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3bU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_59[0U] = vlSelf->__PVT___T_417[0U];
        vlSelf->__PVT__ramWire_59[1U] = vlSelf->__PVT___T_417[1U];
        vlSelf->__PVT__ramWire_59[2U] = vlSelf->__PVT___T_417[2U];
        vlSelf->__PVT__ramWire_59[3U] = vlSelf->__PVT___T_417[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3aU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_58[0U] = vlSelf->__PVT___T_410[0U];
        vlSelf->__PVT__ramWire_58[1U] = vlSelf->__PVT___T_410[1U];
        vlSelf->__PVT__ramWire_58[2U] = vlSelf->__PVT___T_410[2U];
        vlSelf->__PVT__ramWire_58[3U] = vlSelf->__PVT___T_410[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x39U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_57[0U] = vlSelf->__PVT___T_403[0U];
        vlSelf->__PVT__ramWire_57[1U] = vlSelf->__PVT___T_403[1U];
        vlSelf->__PVT__ramWire_57[2U] = vlSelf->__PVT___T_403[2U];
        vlSelf->__PVT__ramWire_57[3U] = vlSelf->__PVT___T_403[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x38U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_56[0U] = vlSelf->__PVT___T_396[0U];
        vlSelf->__PVT__ramWire_56[1U] = vlSelf->__PVT___T_396[1U];
        vlSelf->__PVT__ramWire_56[2U] = vlSelf->__PVT___T_396[2U];
        vlSelf->__PVT__ramWire_56[3U] = vlSelf->__PVT___T_396[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x37U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_55[0U] = vlSelf->__PVT___T_389[0U];
        vlSelf->__PVT__ramWire_55[1U] = vlSelf->__PVT___T_389[1U];
        vlSelf->__PVT__ramWire_55[2U] = vlSelf->__PVT___T_389[2U];
        vlSelf->__PVT__ramWire_55[3U] = vlSelf->__PVT___T_389[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x36U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_54[0U] = vlSelf->__PVT___T_382[0U];
        vlSelf->__PVT__ramWire_54[1U] = vlSelf->__PVT___T_382[1U];
        vlSelf->__PVT__ramWire_54[2U] = vlSelf->__PVT___T_382[2U];
        vlSelf->__PVT__ramWire_54[3U] = vlSelf->__PVT___T_382[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x35U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_53[0U] = vlSelf->__PVT___T_375[0U];
        vlSelf->__PVT__ramWire_53[1U] = vlSelf->__PVT___T_375[1U];
        vlSelf->__PVT__ramWire_53[2U] = vlSelf->__PVT___T_375[2U];
        vlSelf->__PVT__ramWire_53[3U] = vlSelf->__PVT___T_375[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x34U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_52[0U] = vlSelf->__PVT___T_368[0U];
        vlSelf->__PVT__ramWire_52[1U] = vlSelf->__PVT___T_368[1U];
        vlSelf->__PVT__ramWire_52[2U] = vlSelf->__PVT___T_368[2U];
        vlSelf->__PVT__ramWire_52[3U] = vlSelf->__PVT___T_368[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x33U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_51[0U] = vlSelf->__PVT___T_361[0U];
        vlSelf->__PVT__ramWire_51[1U] = vlSelf->__PVT___T_361[1U];
        vlSelf->__PVT__ramWire_51[2U] = vlSelf->__PVT___T_361[2U];
        vlSelf->__PVT__ramWire_51[3U] = vlSelf->__PVT___T_361[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x32U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_50[0U] = vlSelf->__PVT___T_354[0U];
        vlSelf->__PVT__ramWire_50[1U] = vlSelf->__PVT___T_354[1U];
        vlSelf->__PVT__ramWire_50[2U] = vlSelf->__PVT___T_354[2U];
        vlSelf->__PVT__ramWire_50[3U] = vlSelf->__PVT___T_354[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x31U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_49[0U] = vlSelf->__PVT___T_347[0U];
        vlSelf->__PVT__ramWire_49[1U] = vlSelf->__PVT___T_347[1U];
        vlSelf->__PVT__ramWire_49[2U] = vlSelf->__PVT___T_347[2U];
        vlSelf->__PVT__ramWire_49[3U] = vlSelf->__PVT___T_347[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x30U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_48[0U] = vlSelf->__PVT___T_340[0U];
        vlSelf->__PVT__ramWire_48[1U] = vlSelf->__PVT___T_340[1U];
        vlSelf->__PVT__ramWire_48[2U] = vlSelf->__PVT___T_340[2U];
        vlSelf->__PVT__ramWire_48[3U] = vlSelf->__PVT___T_340[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2fU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_47[0U] = vlSelf->__PVT___T_333[0U];
        vlSelf->__PVT__ramWire_47[1U] = vlSelf->__PVT___T_333[1U];
        vlSelf->__PVT__ramWire_47[2U] = vlSelf->__PVT___T_333[2U];
        vlSelf->__PVT__ramWire_47[3U] = vlSelf->__PVT___T_333[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2eU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_46[0U] = vlSelf->__PVT___T_326[0U];
        vlSelf->__PVT__ramWire_46[1U] = vlSelf->__PVT___T_326[1U];
        vlSelf->__PVT__ramWire_46[2U] = vlSelf->__PVT___T_326[2U];
        vlSelf->__PVT__ramWire_46[3U] = vlSelf->__PVT___T_326[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2dU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_45[0U] = vlSelf->__PVT___T_319[0U];
        vlSelf->__PVT__ramWire_45[1U] = vlSelf->__PVT___T_319[1U];
        vlSelf->__PVT__ramWire_45[2U] = vlSelf->__PVT___T_319[2U];
        vlSelf->__PVT__ramWire_45[3U] = vlSelf->__PVT___T_319[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2cU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_44[0U] = vlSelf->__PVT___T_312[0U];
        vlSelf->__PVT__ramWire_44[1U] = vlSelf->__PVT___T_312[1U];
        vlSelf->__PVT__ramWire_44[2U] = vlSelf->__PVT___T_312[2U];
        vlSelf->__PVT__ramWire_44[3U] = vlSelf->__PVT___T_312[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2bU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_43[0U] = vlSelf->__PVT___T_305[0U];
        vlSelf->__PVT__ramWire_43[1U] = vlSelf->__PVT___T_305[1U];
        vlSelf->__PVT__ramWire_43[2U] = vlSelf->__PVT___T_305[2U];
        vlSelf->__PVT__ramWire_43[3U] = vlSelf->__PVT___T_305[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2aU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_42[0U] = vlSelf->__PVT___T_298[0U];
        vlSelf->__PVT__ramWire_42[1U] = vlSelf->__PVT___T_298[1U];
        vlSelf->__PVT__ramWire_42[2U] = vlSelf->__PVT___T_298[2U];
        vlSelf->__PVT__ramWire_42[3U] = vlSelf->__PVT___T_298[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x29U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_41[0U] = vlSelf->__PVT___T_291[0U];
        vlSelf->__PVT__ramWire_41[1U] = vlSelf->__PVT___T_291[1U];
        vlSelf->__PVT__ramWire_41[2U] = vlSelf->__PVT___T_291[2U];
        vlSelf->__PVT__ramWire_41[3U] = vlSelf->__PVT___T_291[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x28U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_40[0U] = vlSelf->__PVT___T_284[0U];
        vlSelf->__PVT__ramWire_40[1U] = vlSelf->__PVT___T_284[1U];
        vlSelf->__PVT__ramWire_40[2U] = vlSelf->__PVT___T_284[2U];
        vlSelf->__PVT__ramWire_40[3U] = vlSelf->__PVT___T_284[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x27U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_39[0U] = vlSelf->__PVT___T_277[0U];
        vlSelf->__PVT__ramWire_39[1U] = vlSelf->__PVT___T_277[1U];
        vlSelf->__PVT__ramWire_39[2U] = vlSelf->__PVT___T_277[2U];
        vlSelf->__PVT__ramWire_39[3U] = vlSelf->__PVT___T_277[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x26U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_38[0U] = vlSelf->__PVT___T_270[0U];
        vlSelf->__PVT__ramWire_38[1U] = vlSelf->__PVT___T_270[1U];
        vlSelf->__PVT__ramWire_38[2U] = vlSelf->__PVT___T_270[2U];
        vlSelf->__PVT__ramWire_38[3U] = vlSelf->__PVT___T_270[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x25U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_37[0U] = vlSelf->__PVT___T_263[0U];
        vlSelf->__PVT__ramWire_37[1U] = vlSelf->__PVT___T_263[1U];
        vlSelf->__PVT__ramWire_37[2U] = vlSelf->__PVT___T_263[2U];
        vlSelf->__PVT__ramWire_37[3U] = vlSelf->__PVT___T_263[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x24U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_36[0U] = vlSelf->__PVT___T_256[0U];
        vlSelf->__PVT__ramWire_36[1U] = vlSelf->__PVT___T_256[1U];
        vlSelf->__PVT__ramWire_36[2U] = vlSelf->__PVT___T_256[2U];
        vlSelf->__PVT__ramWire_36[3U] = vlSelf->__PVT___T_256[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x23U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_35[0U] = vlSelf->__PVT___T_249[0U];
        vlSelf->__PVT__ramWire_35[1U] = vlSelf->__PVT___T_249[1U];
        vlSelf->__PVT__ramWire_35[2U] = vlSelf->__PVT___T_249[2U];
        vlSelf->__PVT__ramWire_35[3U] = vlSelf->__PVT___T_249[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x22U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_34[0U] = vlSelf->__PVT___T_242[0U];
        vlSelf->__PVT__ramWire_34[1U] = vlSelf->__PVT___T_242[1U];
        vlSelf->__PVT__ramWire_34[2U] = vlSelf->__PVT___T_242[2U];
        vlSelf->__PVT__ramWire_34[3U] = vlSelf->__PVT___T_242[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x21U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_33[0U] = vlSelf->__PVT___T_235[0U];
        vlSelf->__PVT__ramWire_33[1U] = vlSelf->__PVT___T_235[1U];
        vlSelf->__PVT__ramWire_33[2U] = vlSelf->__PVT___T_235[2U];
        vlSelf->__PVT__ramWire_33[3U] = vlSelf->__PVT___T_235[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x20U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_32[0U] = vlSelf->__PVT___T_228[0U];
        vlSelf->__PVT__ramWire_32[1U] = vlSelf->__PVT___T_228[1U];
        vlSelf->__PVT__ramWire_32[2U] = vlSelf->__PVT___T_228[2U];
        vlSelf->__PVT__ramWire_32[3U] = vlSelf->__PVT___T_228[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1fU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_31[0U] = vlSelf->__PVT___T_221[0U];
        vlSelf->__PVT__ramWire_31[1U] = vlSelf->__PVT___T_221[1U];
        vlSelf->__PVT__ramWire_31[2U] = vlSelf->__PVT___T_221[2U];
        vlSelf->__PVT__ramWire_31[3U] = vlSelf->__PVT___T_221[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1eU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_30[0U] = vlSelf->__PVT___T_214[0U];
        vlSelf->__PVT__ramWire_30[1U] = vlSelf->__PVT___T_214[1U];
        vlSelf->__PVT__ramWire_30[2U] = vlSelf->__PVT___T_214[2U];
        vlSelf->__PVT__ramWire_30[3U] = vlSelf->__PVT___T_214[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1dU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_29[0U] = vlSelf->__PVT___T_207[0U];
        vlSelf->__PVT__ramWire_29[1U] = vlSelf->__PVT___T_207[1U];
        vlSelf->__PVT__ramWire_29[2U] = vlSelf->__PVT___T_207[2U];
        vlSelf->__PVT__ramWire_29[3U] = vlSelf->__PVT___T_207[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1cU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_28[0U] = vlSelf->__PVT___T_200[0U];
        vlSelf->__PVT__ramWire_28[1U] = vlSelf->__PVT___T_200[1U];
        vlSelf->__PVT__ramWire_28[2U] = vlSelf->__PVT___T_200[2U];
        vlSelf->__PVT__ramWire_28[3U] = vlSelf->__PVT___T_200[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1bU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_27[0U] = vlSelf->__PVT___T_193[0U];
        vlSelf->__PVT__ramWire_27[1U] = vlSelf->__PVT___T_193[1U];
        vlSelf->__PVT__ramWire_27[2U] = vlSelf->__PVT___T_193[2U];
        vlSelf->__PVT__ramWire_27[3U] = vlSelf->__PVT___T_193[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1aU == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_26[0U] = vlSelf->__PVT___T_186[0U];
        vlSelf->__PVT__ramWire_26[1U] = vlSelf->__PVT___T_186[1U];
        vlSelf->__PVT__ramWire_26[2U] = vlSelf->__PVT___T_186[2U];
        vlSelf->__PVT__ramWire_26[3U] = vlSelf->__PVT___T_186[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x19U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_25[0U] = vlSelf->__PVT___T_179[0U];
        vlSelf->__PVT__ramWire_25[1U] = vlSelf->__PVT___T_179[1U];
        vlSelf->__PVT__ramWire_25[2U] = vlSelf->__PVT___T_179[2U];
        vlSelf->__PVT__ramWire_25[3U] = vlSelf->__PVT___T_179[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x18U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_24[0U] = vlSelf->__PVT___T_172[0U];
        vlSelf->__PVT__ramWire_24[1U] = vlSelf->__PVT___T_172[1U];
        vlSelf->__PVT__ramWire_24[2U] = vlSelf->__PVT___T_172[2U];
        vlSelf->__PVT__ramWire_24[3U] = vlSelf->__PVT___T_172[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x17U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_23[0U] = vlSelf->__PVT___T_165[0U];
        vlSelf->__PVT__ramWire_23[1U] = vlSelf->__PVT___T_165[1U];
        vlSelf->__PVT__ramWire_23[2U] = vlSelf->__PVT___T_165[2U];
        vlSelf->__PVT__ramWire_23[3U] = vlSelf->__PVT___T_165[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x16U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_22[0U] = vlSelf->__PVT___T_158[0U];
        vlSelf->__PVT__ramWire_22[1U] = vlSelf->__PVT___T_158[1U];
        vlSelf->__PVT__ramWire_22[2U] = vlSelf->__PVT___T_158[2U];
        vlSelf->__PVT__ramWire_22[3U] = vlSelf->__PVT___T_158[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x15U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_21[0U] = vlSelf->__PVT___T_151[0U];
        vlSelf->__PVT__ramWire_21[1U] = vlSelf->__PVT___T_151[1U];
        vlSelf->__PVT__ramWire_21[2U] = vlSelf->__PVT___T_151[2U];
        vlSelf->__PVT__ramWire_21[3U] = vlSelf->__PVT___T_151[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x14U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_20[0U] = vlSelf->__PVT___T_144[0U];
        vlSelf->__PVT__ramWire_20[1U] = vlSelf->__PVT___T_144[1U];
        vlSelf->__PVT__ramWire_20[2U] = vlSelf->__PVT___T_144[2U];
        vlSelf->__PVT__ramWire_20[3U] = vlSelf->__PVT___T_144[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x13U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_19[0U] = vlSelf->__PVT___T_137[0U];
        vlSelf->__PVT__ramWire_19[1U] = vlSelf->__PVT___T_137[1U];
        vlSelf->__PVT__ramWire_19[2U] = vlSelf->__PVT___T_137[2U];
        vlSelf->__PVT__ramWire_19[3U] = vlSelf->__PVT___T_137[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x12U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_18[0U] = vlSelf->__PVT___T_130[0U];
        vlSelf->__PVT__ramWire_18[1U] = vlSelf->__PVT___T_130[1U];
        vlSelf->__PVT__ramWire_18[2U] = vlSelf->__PVT___T_130[2U];
        vlSelf->__PVT__ramWire_18[3U] = vlSelf->__PVT___T_130[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x11U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_17[0U] = vlSelf->__PVT___T_123[0U];
        vlSelf->__PVT__ramWire_17[1U] = vlSelf->__PVT___T_123[1U];
        vlSelf->__PVT__ramWire_17[2U] = vlSelf->__PVT___T_123[2U];
        vlSelf->__PVT__ramWire_17[3U] = vlSelf->__PVT___T_123[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x10U == (0x3fU 
                                                   & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U))))) {
        vlSelf->__PVT__ramWire_16[0U] = vlSelf->__PVT___T_116[0U];
        vlSelf->__PVT__ramWire_16[1U] = vlSelf->__PVT___T_116[1U];
        vlSelf->__PVT__ramWire_16[2U] = vlSelf->__PVT___T_116[2U];
        vlSelf->__PVT__ramWire_16[3U] = vlSelf->__PVT___T_116[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xfU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U))))) {
        vlSelf->__PVT__ramWire_15[0U] = vlSelf->__PVT___T_109[0U];
        vlSelf->__PVT__ramWire_15[1U] = vlSelf->__PVT___T_109[1U];
        vlSelf->__PVT__ramWire_15[2U] = vlSelf->__PVT___T_109[2U];
        vlSelf->__PVT__ramWire_15[3U] = vlSelf->__PVT___T_109[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xeU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U))))) {
        vlSelf->__PVT__ramWire_14[0U] = vlSelf->__PVT___T_102[0U];
        vlSelf->__PVT__ramWire_14[1U] = vlSelf->__PVT___T_102[1U];
        vlSelf->__PVT__ramWire_14[2U] = vlSelf->__PVT___T_102[2U];
        vlSelf->__PVT__ramWire_14[3U] = vlSelf->__PVT___T_102[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xdU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U))))) {
        vlSelf->__PVT__ramWire_13[0U] = vlSelf->__PVT___T_95[0U];
        vlSelf->__PVT__ramWire_13[1U] = vlSelf->__PVT___T_95[1U];
        vlSelf->__PVT__ramWire_13[2U] = vlSelf->__PVT___T_95[2U];
        vlSelf->__PVT__ramWire_13[3U] = vlSelf->__PVT___T_95[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xcU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U))))) {
        vlSelf->__PVT__ramWire_12[0U] = vlSelf->__PVT___T_88[0U];
        vlSelf->__PVT__ramWire_12[1U] = vlSelf->__PVT___T_88[1U];
        vlSelf->__PVT__ramWire_12[2U] = vlSelf->__PVT___T_88[2U];
        vlSelf->__PVT__ramWire_12[3U] = vlSelf->__PVT___T_88[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xbU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U))))) {
        vlSelf->__PVT__ramWire_11[0U] = vlSelf->__PVT___T_81[0U];
        vlSelf->__PVT__ramWire_11[1U] = vlSelf->__PVT___T_81[1U];
        vlSelf->__PVT__ramWire_11[2U] = vlSelf->__PVT___T_81[2U];
        vlSelf->__PVT__ramWire_11[3U] = vlSelf->__PVT___T_81[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xaU == (0x3fU 
                                                  & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U))))) {
        vlSelf->__PVT__ramWire_10[0U] = vlSelf->__PVT___T_74[0U];
        vlSelf->__PVT__ramWire_10[1U] = vlSelf->__PVT___T_74[1U];
        vlSelf->__PVT__ramWire_10[2U] = vlSelf->__PVT___T_74[2U];
        vlSelf->__PVT__ramWire_10[3U] = vlSelf->__PVT___T_74[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (9U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_9[0U] = vlSelf->__PVT___T_67[0U];
        vlSelf->__PVT__ramWire_9[1U] = vlSelf->__PVT___T_67[1U];
        vlSelf->__PVT__ramWire_9[2U] = vlSelf->__PVT___T_67[2U];
        vlSelf->__PVT__ramWire_9[3U] = vlSelf->__PVT___T_67[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (8U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_8[0U] = vlSelf->__PVT___T_60[0U];
        vlSelf->__PVT__ramWire_8[1U] = vlSelf->__PVT___T_60[1U];
        vlSelf->__PVT__ramWire_8[2U] = vlSelf->__PVT___T_60[2U];
        vlSelf->__PVT__ramWire_8[3U] = vlSelf->__PVT___T_60[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (7U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_7[0U] = vlSelf->__PVT___T_53[0U];
        vlSelf->__PVT__ramWire_7[1U] = vlSelf->__PVT___T_53[1U];
        vlSelf->__PVT__ramWire_7[2U] = vlSelf->__PVT___T_53[2U];
        vlSelf->__PVT__ramWire_7[3U] = vlSelf->__PVT___T_53[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (6U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_6[0U] = vlSelf->__PVT___T_46[0U];
        vlSelf->__PVT__ramWire_6[1U] = vlSelf->__PVT___T_46[1U];
        vlSelf->__PVT__ramWire_6[2U] = vlSelf->__PVT___T_46[2U];
        vlSelf->__PVT__ramWire_6[3U] = vlSelf->__PVT___T_46[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (5U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_5[0U] = vlSelf->__PVT___T_39[0U];
        vlSelf->__PVT__ramWire_5[1U] = vlSelf->__PVT___T_39[1U];
        vlSelf->__PVT__ramWire_5[2U] = vlSelf->__PVT___T_39[2U];
        vlSelf->__PVT__ramWire_5[3U] = vlSelf->__PVT___T_39[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (4U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_4[0U] = vlSelf->__PVT___T_32[0U];
        vlSelf->__PVT__ramWire_4[1U] = vlSelf->__PVT___T_32[1U];
        vlSelf->__PVT__ramWire_4[2U] = vlSelf->__PVT___T_32[2U];
        vlSelf->__PVT__ramWire_4[3U] = vlSelf->__PVT___T_32[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (3U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_3[0U] = vlSelf->__PVT___T_25[0U];
        vlSelf->__PVT__ramWire_3[1U] = vlSelf->__PVT___T_25[1U];
        vlSelf->__PVT__ramWire_3[2U] = vlSelf->__PVT___T_25[2U];
        vlSelf->__PVT__ramWire_3[3U] = vlSelf->__PVT___T_25[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (2U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_2[0U] = vlSelf->__PVT___T_18[0U];
        vlSelf->__PVT__ramWire_2[1U] = vlSelf->__PVT___T_18[1U];
        vlSelf->__PVT__ramWire_2[2U] = vlSelf->__PVT___T_18[2U];
        vlSelf->__PVT__ramWire_2[3U] = vlSelf->__PVT___T_18[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (1U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_1[0U] = vlSelf->__PVT___T_11[0U];
        vlSelf->__PVT__ramWire_1[1U] = vlSelf->__PVT___T_11[1U];
        vlSelf->__PVT__ramWire_1[2U] = vlSelf->__PVT___T_11[2U];
        vlSelf->__PVT__ramWire_1[3U] = vlSelf->__PVT___T_11[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0U == (0x3fU 
                                                & (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U))))) {
        vlSelf->__PVT__ramWire_0[0U] = vlSelf->__PVT___T_4[0U];
        vlSelf->__PVT__ramWire_0[1U] = vlSelf->__PVT___T_4[1U];
        vlSelf->__PVT__ramWire_0[2U] = vlSelf->__PVT___T_4[2U];
        vlSelf->__PVT__ramWire_0[3U] = vlSelf->__PVT___T_4[3U];
    }
}

VL_INLINE_OPT void Vysyx_041728_mem___settle__TOP__ysyx_041728__DOT__mem_7__8(Vysyx_041728_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_041728_mem___settle__TOP__ysyx_041728__DOT__mem_7__8\n"); );
    // Variables
    VlWide<4>/*127:0*/ __PVT___T_2;
    // Body
    __PVT___T_2[0U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3871[0U]
                         : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3875[0U]) 
                       & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    __PVT___T_2[1U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3871[1U]
                         : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3875[1U]) 
                       & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    __PVT___T_2[2U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3871[2U]
                         : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3875[2U]) 
                       & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    __PVT___T_2[3U] = (((1U == (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT__cacheState))
                         ? vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3871[3U]
                         : vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3875[3U]) 
                       & (~ vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_5 = ((IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3948) 
                           & (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3954));
    vlSelf->__PVT___T_4[0U] = (__PVT___T_2[0U] | (vlSelf->__PVT__ramWire_0[0U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_4[1U] = (__PVT___T_2[1U] | (vlSelf->__PVT__ramWire_0[1U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_4[2U] = (__PVT___T_2[2U] | (vlSelf->__PVT__ramWire_0[2U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_4[3U] = (__PVT___T_2[3U] | (vlSelf->__PVT__ramWire_0[3U] 
                                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_11[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_1[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_11[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_1[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_11[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_1[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_11[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_1[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_18[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_2[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_18[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_2[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_18[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_2[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_18[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_2[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_25[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_3[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_25[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_3[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_25[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_3[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_25[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_3[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_32[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_4[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_32[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_4[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_32[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_4[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_32[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_4[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_39[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_5[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_39[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_5[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_39[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_5[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_39[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_5[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_46[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_6[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_46[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_6[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_46[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_6[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_46[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_6[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_53[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_7[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_53[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_7[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_53[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_7[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_53[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_7[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_60[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_8[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_60[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_8[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_60[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_8[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_60[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_8[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_67[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_9[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_67[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_9[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_67[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_9[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_67[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_9[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_74[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_10[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_74[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_10[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_74[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_10[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_74[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_10[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_81[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_11[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_81[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_11[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_81[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_11[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_81[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_11[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_88[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_12[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_88[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_12[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_88[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_12[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_88[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_12[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_95[0U] = (__PVT___T_2[0U] | (
                                                   vlSelf->__PVT__ramWire_13[0U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_95[1U] = (__PVT___T_2[1U] | (
                                                   vlSelf->__PVT__ramWire_13[1U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_95[2U] = (__PVT___T_2[2U] | (
                                                   vlSelf->__PVT__ramWire_13[2U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_95[3U] = (__PVT___T_2[3U] | (
                                                   vlSelf->__PVT__ramWire_13[3U] 
                                                   & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_102[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_14[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_102[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_14[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_102[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_14[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_102[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_14[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_109[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_15[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_109[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_15[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_109[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_15[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_109[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_15[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_116[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_16[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_116[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_16[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_116[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_16[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_116[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_16[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_123[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_17[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_123[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_17[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_123[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_17[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_123[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_17[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_130[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_18[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_130[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_18[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_130[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_18[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_130[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_18[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_137[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_19[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_137[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_19[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_137[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_19[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_137[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_19[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_144[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_20[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_144[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_20[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_144[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_20[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_144[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_20[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_151[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_21[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_151[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_21[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_151[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_21[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_151[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_21[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_158[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_22[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_158[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_22[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_158[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_22[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_158[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_22[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_165[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_23[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_165[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_23[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_165[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_23[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_165[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_23[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_172[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_24[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_172[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_24[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_172[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_24[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_172[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_24[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_179[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_25[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_179[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_25[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_179[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_25[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_179[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_25[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_186[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_26[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_186[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_26[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_186[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_26[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_186[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_26[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_193[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_27[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_193[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_27[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_193[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_27[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_193[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_27[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_200[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_28[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_200[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_28[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_200[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_28[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_200[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_28[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_207[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_29[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_207[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_29[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_207[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_29[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_207[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_29[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_214[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_30[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_214[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_30[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_214[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_30[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_214[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_30[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_221[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_31[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_221[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_31[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_221[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_31[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_221[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_31[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_228[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_32[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_228[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_32[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_228[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_32[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_228[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_32[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_235[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_33[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_235[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_33[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_235[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_33[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_235[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_33[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_242[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_34[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_242[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_34[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_242[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_34[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_242[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_34[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_249[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_35[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_249[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_35[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_249[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_35[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_249[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_35[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_256[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_36[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_256[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_36[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_256[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_36[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_256[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_36[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_263[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_37[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_263[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_37[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_263[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_37[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_263[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_37[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_270[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_38[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_270[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_38[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_270[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_38[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_270[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_38[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_277[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_39[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_277[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_39[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_277[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_39[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_277[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_39[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_284[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_40[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_284[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_40[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_284[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_40[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_284[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_40[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_291[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_41[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_291[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_41[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_291[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_41[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_291[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_41[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_298[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_42[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_298[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_42[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_298[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_42[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_298[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_42[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_305[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_43[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_305[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_43[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_305[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_43[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_305[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_43[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_312[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_44[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_312[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_44[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_312[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_44[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_312[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_44[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_319[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_45[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_319[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_45[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_319[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_45[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_319[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_45[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_326[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_46[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_326[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_46[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_326[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_46[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_326[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_46[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_333[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_47[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_333[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_47[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_333[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_47[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_333[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_47[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_340[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_48[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_340[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_48[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_340[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_48[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_340[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_48[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_347[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_49[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_347[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_49[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_347[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_49[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_347[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_49[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_354[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_50[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_354[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_50[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_354[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_50[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_354[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_50[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_361[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_51[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_361[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_51[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_361[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_51[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_361[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_51[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_368[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_52[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_368[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_52[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_368[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_52[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_368[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_52[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_375[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_53[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_375[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_53[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_375[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_53[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_375[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_53[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_382[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_54[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_382[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_54[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_382[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_54[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_382[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_54[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_389[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_55[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_389[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_55[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_389[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_55[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_389[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_55[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_396[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_56[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_396[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_56[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_396[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_56[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_396[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_56[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_403[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_57[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_403[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_57[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_403[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_57[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_403[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_57[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_410[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_58[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_410[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_58[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_410[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_58[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_410[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_58[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_417[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_59[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_417[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_59[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_417[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_59[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_417[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_59[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_424[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_60[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_424[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_60[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_424[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_60[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_424[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_60[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_431[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_61[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_431[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_61[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_431[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_61[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_431[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_61[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_438[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_62[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_438[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_62[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_438[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_62[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_438[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_62[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
    vlSelf->__PVT___T_445[0U] = (__PVT___T_2[0U] | 
                                 (vlSelf->__PVT__ramWire_63[0U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]));
    vlSelf->__PVT___T_445[1U] = (__PVT___T_2[1U] | 
                                 (vlSelf->__PVT__ramWire_63[1U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]));
    vlSelf->__PVT___T_445[2U] = (__PVT___T_2[2U] | 
                                 (vlSelf->__PVT__ramWire_63[2U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]));
    vlSelf->__PVT___T_445[3U] = (__PVT___T_2[3U] | 
                                 (vlSelf->__PVT__ramWire_63[3U] 
                                  & vlSymsp->TOP.ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]));
}

VL_INLINE_OPT void Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__mem_7__16(Vysyx_041728_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_041728_mem___sequent__TOP__ysyx_041728__DOT__mem_7__16\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1954;
    VlWide<4>/*127:0*/ __Vtemp1966;
    VlWide<4>/*127:0*/ __Vtemp1978;
    VlWide<4>/*127:0*/ __Vtemp1990;
    VlWide<4>/*127:0*/ __Vtemp2002;
    VlWide<4>/*127:0*/ __Vtemp2014;
    VlWide<4>/*127:0*/ __Vtemp2026;
    VlWide<4>/*127:0*/ __Vtemp2038;
    VlWide<4>/*127:0*/ __Vtemp2050;
    VlWide<4>/*127:0*/ __Vtemp2062;
    // Body
    if (((IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3948) 
         & (~ (IData)(vlSymsp->TOP.ysyx_041728__DOT__dCache__DOT___T_3954)))) {
        if ((6U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                              << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                        >> 0x1bU))))) {
            __Vtemp1954[0U] = vlSelf->__PVT__ramWire_6[0U];
            __Vtemp1954[1U] = vlSelf->__PVT__ramWire_6[1U];
            __Vtemp1954[2U] = vlSelf->__PVT__ramWire_6[2U];
            __Vtemp1954[3U] = vlSelf->__PVT__ramWire_6[3U];
        } else {
            __Vtemp1954[0U] = ((5U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_5[0U]
                                : ((4U == (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_4[0U]
                                    : ((3U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_3[0U]
                                        : ((2U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_2[0U]
                                            : ((1U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_1[0U]
                                                : vlSelf->__PVT__ramWire_0[0U])))));
            __Vtemp1954[1U] = ((5U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_5[1U]
                                : ((4U == (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_4[1U]
                                    : ((3U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_3[1U]
                                        : ((2U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_2[1U]
                                            : ((1U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_1[1U]
                                                : vlSelf->__PVT__ramWire_0[1U])))));
            __Vtemp1954[2U] = ((5U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_5[2U]
                                : ((4U == (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_4[2U]
                                    : ((3U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_3[2U]
                                        : ((2U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_2[2U]
                                            : ((1U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_1[2U]
                                                : vlSelf->__PVT__ramWire_0[2U])))));
            __Vtemp1954[3U] = ((5U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_5[3U]
                                : ((4U == (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_4[3U]
                                    : ((3U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_3[3U]
                                        : ((2U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_2[3U]
                                            : ((1U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_1[3U]
                                                : vlSelf->__PVT__ramWire_0[3U])))));
        }
        if ((0xcU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1bU))))) {
            __Vtemp1966[0U] = vlSelf->__PVT__ramWire_12[0U];
            __Vtemp1966[1U] = vlSelf->__PVT__ramWire_12[1U];
            __Vtemp1966[2U] = vlSelf->__PVT__ramWire_12[2U];
            __Vtemp1966[3U] = vlSelf->__PVT__ramWire_12[3U];
        } else {
            __Vtemp1966[0U] = ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_11[0U]
                                : ((0xaU == (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_10[0U]
                                    : ((9U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_9[0U]
                                        : ((8U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_8[0U]
                                            : ((7U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_7[0U]
                                                : __Vtemp1954[0U])))));
            __Vtemp1966[1U] = ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_11[1U]
                                : ((0xaU == (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_10[1U]
                                    : ((9U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_9[1U]
                                        : ((8U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_8[1U]
                                            : ((7U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_7[1U]
                                                : __Vtemp1954[1U])))));
            __Vtemp1966[2U] = ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_11[2U]
                                : ((0xaU == (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_10[2U]
                                    : ((9U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_9[2U]
                                        : ((8U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_8[2U]
                                            : ((7U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_7[2U]
                                                : __Vtemp1954[2U])))));
            __Vtemp1966[3U] = ((0xbU == (0x3fU & ((
                                                   vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_11[3U]
                                : ((0xaU == (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_10[3U]
                                    : ((9U == (0x3fU 
                                               & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_9[3U]
                                        : ((8U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_8[3U]
                                            : ((7U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_7[3U]
                                                : __Vtemp1954[3U])))));
        }
        if ((0x12U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp1978[0U] = vlSelf->__PVT__ramWire_18[0U];
            __Vtemp1978[1U] = vlSelf->__PVT__ramWire_18[1U];
            __Vtemp1978[2U] = vlSelf->__PVT__ramWire_18[2U];
            __Vtemp1978[3U] = vlSelf->__PVT__ramWire_18[3U];
        } else {
            __Vtemp1978[0U] = ((0x11U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_17[0U]
                                : ((0x10U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_16[0U]
                                    : ((0xfU == (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_15[0U]
                                        : ((0xeU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_14[0U]
                                            : ((0xdU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_13[0U]
                                                : __Vtemp1966[0U])))));
            __Vtemp1978[1U] = ((0x11U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_17[1U]
                                : ((0x10U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_16[1U]
                                    : ((0xfU == (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_15[1U]
                                        : ((0xeU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_14[1U]
                                            : ((0xdU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_13[1U]
                                                : __Vtemp1966[1U])))));
            __Vtemp1978[2U] = ((0x11U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_17[2U]
                                : ((0x10U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_16[2U]
                                    : ((0xfU == (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_15[2U]
                                        : ((0xeU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_14[2U]
                                            : ((0xdU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_13[2U]
                                                : __Vtemp1966[2U])))));
            __Vtemp1978[3U] = ((0x11U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_17[3U]
                                : ((0x10U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_16[3U]
                                    : ((0xfU == (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_15[3U]
                                        : ((0xeU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_14[3U]
                                            : ((0xdU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_13[3U]
                                                : __Vtemp1966[3U])))));
        }
        if ((0x18U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp1990[0U] = vlSelf->__PVT__ramWire_24[0U];
            __Vtemp1990[1U] = vlSelf->__PVT__ramWire_24[1U];
            __Vtemp1990[2U] = vlSelf->__PVT__ramWire_24[2U];
            __Vtemp1990[3U] = vlSelf->__PVT__ramWire_24[3U];
        } else {
            __Vtemp1990[0U] = ((0x17U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_23[0U]
                                : ((0x16U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_22[0U]
                                    : ((0x15U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_21[0U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_20[0U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_19[0U]
                                                : __Vtemp1978[0U])))));
            __Vtemp1990[1U] = ((0x17U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_23[1U]
                                : ((0x16U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_22[1U]
                                    : ((0x15U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_21[1U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_20[1U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_19[1U]
                                                : __Vtemp1978[1U])))));
            __Vtemp1990[2U] = ((0x17U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_23[2U]
                                : ((0x16U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_22[2U]
                                    : ((0x15U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_21[2U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_20[2U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_19[2U]
                                                : __Vtemp1978[2U])))));
            __Vtemp1990[3U] = ((0x17U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_23[3U]
                                : ((0x16U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_22[3U]
                                    : ((0x15U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_21[3U]
                                        : ((0x14U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_20[3U]
                                            : ((0x13U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_19[3U]
                                                : __Vtemp1978[3U])))));
        }
        if ((0x1eU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp2002[0U] = vlSelf->__PVT__ramWire_30[0U];
            __Vtemp2002[1U] = vlSelf->__PVT__ramWire_30[1U];
            __Vtemp2002[2U] = vlSelf->__PVT__ramWire_30[2U];
            __Vtemp2002[3U] = vlSelf->__PVT__ramWire_30[3U];
        } else {
            __Vtemp2002[0U] = ((0x1dU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_29[0U]
                                : ((0x1cU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_28[0U]
                                    : ((0x1bU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_27[0U]
                                        : ((0x1aU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_26[0U]
                                            : ((0x19U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_25[0U]
                                                : __Vtemp1990[0U])))));
            __Vtemp2002[1U] = ((0x1dU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_29[1U]
                                : ((0x1cU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_28[1U]
                                    : ((0x1bU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_27[1U]
                                        : ((0x1aU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_26[1U]
                                            : ((0x19U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_25[1U]
                                                : __Vtemp1990[1U])))));
            __Vtemp2002[2U] = ((0x1dU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_29[2U]
                                : ((0x1cU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_28[2U]
                                    : ((0x1bU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_27[2U]
                                        : ((0x1aU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_26[2U]
                                            : ((0x19U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_25[2U]
                                                : __Vtemp1990[2U])))));
            __Vtemp2002[3U] = ((0x1dU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_29[3U]
                                : ((0x1cU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_28[3U]
                                    : ((0x1bU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_27[3U]
                                        : ((0x1aU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_26[3U]
                                            : ((0x19U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_25[3U]
                                                : __Vtemp1990[3U])))));
        }
        if ((0x24U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp2014[0U] = vlSelf->__PVT__ramWire_36[0U];
            __Vtemp2014[1U] = vlSelf->__PVT__ramWire_36[1U];
            __Vtemp2014[2U] = vlSelf->__PVT__ramWire_36[2U];
            __Vtemp2014[3U] = vlSelf->__PVT__ramWire_36[3U];
        } else {
            __Vtemp2014[0U] = ((0x23U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_35[0U]
                                : ((0x22U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_34[0U]
                                    : ((0x21U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_33[0U]
                                        : ((0x20U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_32[0U]
                                            : ((0x1fU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_31[0U]
                                                : __Vtemp2002[0U])))));
            __Vtemp2014[1U] = ((0x23U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_35[1U]
                                : ((0x22U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_34[1U]
                                    : ((0x21U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_33[1U]
                                        : ((0x20U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_32[1U]
                                            : ((0x1fU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_31[1U]
                                                : __Vtemp2002[1U])))));
            __Vtemp2014[2U] = ((0x23U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_35[2U]
                                : ((0x22U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_34[2U]
                                    : ((0x21U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_33[2U]
                                        : ((0x20U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_32[2U]
                                            : ((0x1fU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_31[2U]
                                                : __Vtemp2002[2U])))));
            __Vtemp2014[3U] = ((0x23U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_35[3U]
                                : ((0x22U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_34[3U]
                                    : ((0x21U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_33[3U]
                                        : ((0x20U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_32[3U]
                                            : ((0x1fU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_31[3U]
                                                : __Vtemp2002[3U])))));
        }
        if ((0x2aU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp2026[0U] = vlSelf->__PVT__ramWire_42[0U];
            __Vtemp2026[1U] = vlSelf->__PVT__ramWire_42[1U];
            __Vtemp2026[2U] = vlSelf->__PVT__ramWire_42[2U];
            __Vtemp2026[3U] = vlSelf->__PVT__ramWire_42[3U];
        } else {
            __Vtemp2026[0U] = ((0x29U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_41[0U]
                                : ((0x28U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_40[0U]
                                    : ((0x27U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_39[0U]
                                        : ((0x26U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_38[0U]
                                            : ((0x25U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_37[0U]
                                                : __Vtemp2014[0U])))));
            __Vtemp2026[1U] = ((0x29U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_41[1U]
                                : ((0x28U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_40[1U]
                                    : ((0x27U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_39[1U]
                                        : ((0x26U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_38[1U]
                                            : ((0x25U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_37[1U]
                                                : __Vtemp2014[1U])))));
            __Vtemp2026[2U] = ((0x29U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_41[2U]
                                : ((0x28U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_40[2U]
                                    : ((0x27U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_39[2U]
                                        : ((0x26U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_38[2U]
                                            : ((0x25U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_37[2U]
                                                : __Vtemp2014[2U])))));
            __Vtemp2026[3U] = ((0x29U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_41[3U]
                                : ((0x28U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_40[3U]
                                    : ((0x27U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_39[3U]
                                        : ((0x26U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_38[3U]
                                            : ((0x25U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_37[3U]
                                                : __Vtemp2014[3U])))));
        }
        if ((0x30U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp2038[0U] = vlSelf->__PVT__ramWire_48[0U];
            __Vtemp2038[1U] = vlSelf->__PVT__ramWire_48[1U];
            __Vtemp2038[2U] = vlSelf->__PVT__ramWire_48[2U];
            __Vtemp2038[3U] = vlSelf->__PVT__ramWire_48[3U];
        } else {
            __Vtemp2038[0U] = ((0x2fU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_47[0U]
                                : ((0x2eU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_46[0U]
                                    : ((0x2dU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_45[0U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_44[0U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_43[0U]
                                                : __Vtemp2026[0U])))));
            __Vtemp2038[1U] = ((0x2fU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_47[1U]
                                : ((0x2eU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_46[1U]
                                    : ((0x2dU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_45[1U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_44[1U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_43[1U]
                                                : __Vtemp2026[1U])))));
            __Vtemp2038[2U] = ((0x2fU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_47[2U]
                                : ((0x2eU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_46[2U]
                                    : ((0x2dU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_45[2U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_44[2U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_43[2U]
                                                : __Vtemp2026[2U])))));
            __Vtemp2038[3U] = ((0x2fU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_47[3U]
                                : ((0x2eU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_46[3U]
                                    : ((0x2dU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_45[3U]
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_44[3U]
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_43[3U]
                                                : __Vtemp2026[3U])))));
        }
        if ((0x36U == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp2050[0U] = vlSelf->__PVT__ramWire_54[0U];
            __Vtemp2050[1U] = vlSelf->__PVT__ramWire_54[1U];
            __Vtemp2050[2U] = vlSelf->__PVT__ramWire_54[2U];
            __Vtemp2050[3U] = vlSelf->__PVT__ramWire_54[3U];
        } else {
            __Vtemp2050[0U] = ((0x35U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_53[0U]
                                : ((0x34U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_52[0U]
                                    : ((0x33U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_51[0U]
                                        : ((0x32U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_50[0U]
                                            : ((0x31U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_49[0U]
                                                : __Vtemp2038[0U])))));
            __Vtemp2050[1U] = ((0x35U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_53[1U]
                                : ((0x34U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_52[1U]
                                    : ((0x33U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_51[1U]
                                        : ((0x32U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_50[1U]
                                            : ((0x31U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_49[1U]
                                                : __Vtemp2038[1U])))));
            __Vtemp2050[2U] = ((0x35U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_53[2U]
                                : ((0x34U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_52[2U]
                                    : ((0x33U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_51[2U]
                                        : ((0x32U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_50[2U]
                                            : ((0x31U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_49[2U]
                                                : __Vtemp2038[2U])))));
            __Vtemp2050[3U] = ((0x35U == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_53[3U]
                                : ((0x34U == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_52[3U]
                                    : ((0x33U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_51[3U]
                                        : ((0x32U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_50[3U]
                                            : ((0x31U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_49[3U]
                                                : __Vtemp2038[3U])))));
        }
        if ((0x3cU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            __Vtemp2062[0U] = vlSelf->__PVT__ramWire_60[0U];
            __Vtemp2062[1U] = vlSelf->__PVT__ramWire_60[1U];
            __Vtemp2062[2U] = vlSelf->__PVT__ramWire_60[2U];
            __Vtemp2062[3U] = vlSelf->__PVT__ramWire_60[3U];
        } else {
            __Vtemp2062[0U] = ((0x3bU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_59[0U]
                                : ((0x3aU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_58[0U]
                                    : ((0x39U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_57[0U]
                                        : ((0x38U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_56[0U]
                                            : ((0x37U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_55[0U]
                                                : __Vtemp2050[0U])))));
            __Vtemp2062[1U] = ((0x3bU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_59[1U]
                                : ((0x3aU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_58[1U]
                                    : ((0x39U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_57[1U]
                                        : ((0x38U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_56[1U]
                                            : ((0x37U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_55[1U]
                                                : __Vtemp2050[1U])))));
            __Vtemp2062[2U] = ((0x3bU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_59[2U]
                                : ((0x3aU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_58[2U]
                                    : ((0x39U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_57[2U]
                                        : ((0x38U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_56[2U]
                                            : ((0x37U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_55[2U]
                                                : __Vtemp2050[2U])))));
            __Vtemp2062[3U] = ((0x3bU == (0x3fU & (
                                                   (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU))))
                                ? vlSelf->__PVT__ramWire_59[3U]
                                : ((0x3aU == (0x3fU 
                                              & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU))))
                                    ? vlSelf->__PVT__ramWire_58[3U]
                                    : ((0x39U == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? vlSelf->__PVT__ramWire_57[3U]
                                        : ((0x38U == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSelf->__PVT__ramWire_56[3U]
                                            : ((0x37U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSelf->__PVT__ramWire_55[3U]
                                                : __Vtemp2050[3U])))));
        }
        if ((0x3fU == (0x3fU & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 5U) | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1bU))))) {
            vlSelf->__PVT___T_577[0U] = vlSelf->__PVT__ramWire_63[0U];
            vlSelf->__PVT___T_577[1U] = vlSelf->__PVT__ramWire_63[1U];
            vlSelf->__PVT___T_577[2U] = vlSelf->__PVT__ramWire_63[2U];
            vlSelf->__PVT___T_577[3U] = vlSelf->__PVT__ramWire_63[3U];
        } else {
            vlSelf->__PVT___T_577[0U] = ((0x3eU == 
                                          (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->__PVT__ramWire_62[0U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->__PVT__ramWire_61[0U]
                                              : __Vtemp2062[0U]));
            vlSelf->__PVT___T_577[1U] = ((0x3eU == 
                                          (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->__PVT__ramWire_62[1U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->__PVT__ramWire_61[1U]
                                              : __Vtemp2062[1U]));
            vlSelf->__PVT___T_577[2U] = ((0x3eU == 
                                          (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->__PVT__ramWire_62[2U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->__PVT__ramWire_61[2U]
                                              : __Vtemp2062[2U]));
            vlSelf->__PVT___T_577[3U] = ((0x3eU == 
                                          (0x3fU & 
                                           ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->__PVT__ramWire_62[3U]
                                          : ((0x3dU 
                                              == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->__PVT__ramWire_61[3U]
                                              : __Vtemp2062[3U]));
        }
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3fU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_63[0U] = vlSelf->__PVT___T_445[0U];
        vlSelf->__PVT__ramWire_63[1U] = vlSelf->__PVT___T_445[1U];
        vlSelf->__PVT__ramWire_63[2U] = vlSelf->__PVT___T_445[2U];
        vlSelf->__PVT__ramWire_63[3U] = vlSelf->__PVT___T_445[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3eU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_62[0U] = vlSelf->__PVT___T_438[0U];
        vlSelf->__PVT__ramWire_62[1U] = vlSelf->__PVT___T_438[1U];
        vlSelf->__PVT__ramWire_62[2U] = vlSelf->__PVT___T_438[2U];
        vlSelf->__PVT__ramWire_62[3U] = vlSelf->__PVT___T_438[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3dU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_61[0U] = vlSelf->__PVT___T_431[0U];
        vlSelf->__PVT__ramWire_61[1U] = vlSelf->__PVT___T_431[1U];
        vlSelf->__PVT__ramWire_61[2U] = vlSelf->__PVT___T_431[2U];
        vlSelf->__PVT__ramWire_61[3U] = vlSelf->__PVT___T_431[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3cU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_60[0U] = vlSelf->__PVT___T_424[0U];
        vlSelf->__PVT__ramWire_60[1U] = vlSelf->__PVT___T_424[1U];
        vlSelf->__PVT__ramWire_60[2U] = vlSelf->__PVT___T_424[2U];
        vlSelf->__PVT__ramWire_60[3U] = vlSelf->__PVT___T_424[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3bU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_59[0U] = vlSelf->__PVT___T_417[0U];
        vlSelf->__PVT__ramWire_59[1U] = vlSelf->__PVT___T_417[1U];
        vlSelf->__PVT__ramWire_59[2U] = vlSelf->__PVT___T_417[2U];
        vlSelf->__PVT__ramWire_59[3U] = vlSelf->__PVT___T_417[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x3aU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_58[0U] = vlSelf->__PVT___T_410[0U];
        vlSelf->__PVT__ramWire_58[1U] = vlSelf->__PVT___T_410[1U];
        vlSelf->__PVT__ramWire_58[2U] = vlSelf->__PVT___T_410[2U];
        vlSelf->__PVT__ramWire_58[3U] = vlSelf->__PVT___T_410[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x39U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_57[0U] = vlSelf->__PVT___T_403[0U];
        vlSelf->__PVT__ramWire_57[1U] = vlSelf->__PVT___T_403[1U];
        vlSelf->__PVT__ramWire_57[2U] = vlSelf->__PVT___T_403[2U];
        vlSelf->__PVT__ramWire_57[3U] = vlSelf->__PVT___T_403[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x38U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_56[0U] = vlSelf->__PVT___T_396[0U];
        vlSelf->__PVT__ramWire_56[1U] = vlSelf->__PVT___T_396[1U];
        vlSelf->__PVT__ramWire_56[2U] = vlSelf->__PVT___T_396[2U];
        vlSelf->__PVT__ramWire_56[3U] = vlSelf->__PVT___T_396[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x37U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_55[0U] = vlSelf->__PVT___T_389[0U];
        vlSelf->__PVT__ramWire_55[1U] = vlSelf->__PVT___T_389[1U];
        vlSelf->__PVT__ramWire_55[2U] = vlSelf->__PVT___T_389[2U];
        vlSelf->__PVT__ramWire_55[3U] = vlSelf->__PVT___T_389[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x36U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_54[0U] = vlSelf->__PVT___T_382[0U];
        vlSelf->__PVT__ramWire_54[1U] = vlSelf->__PVT___T_382[1U];
        vlSelf->__PVT__ramWire_54[2U] = vlSelf->__PVT___T_382[2U];
        vlSelf->__PVT__ramWire_54[3U] = vlSelf->__PVT___T_382[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x35U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_53[0U] = vlSelf->__PVT___T_375[0U];
        vlSelf->__PVT__ramWire_53[1U] = vlSelf->__PVT___T_375[1U];
        vlSelf->__PVT__ramWire_53[2U] = vlSelf->__PVT___T_375[2U];
        vlSelf->__PVT__ramWire_53[3U] = vlSelf->__PVT___T_375[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x34U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_52[0U] = vlSelf->__PVT___T_368[0U];
        vlSelf->__PVT__ramWire_52[1U] = vlSelf->__PVT___T_368[1U];
        vlSelf->__PVT__ramWire_52[2U] = vlSelf->__PVT___T_368[2U];
        vlSelf->__PVT__ramWire_52[3U] = vlSelf->__PVT___T_368[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x33U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_51[0U] = vlSelf->__PVT___T_361[0U];
        vlSelf->__PVT__ramWire_51[1U] = vlSelf->__PVT___T_361[1U];
        vlSelf->__PVT__ramWire_51[2U] = vlSelf->__PVT___T_361[2U];
        vlSelf->__PVT__ramWire_51[3U] = vlSelf->__PVT___T_361[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x32U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_50[0U] = vlSelf->__PVT___T_354[0U];
        vlSelf->__PVT__ramWire_50[1U] = vlSelf->__PVT___T_354[1U];
        vlSelf->__PVT__ramWire_50[2U] = vlSelf->__PVT___T_354[2U];
        vlSelf->__PVT__ramWire_50[3U] = vlSelf->__PVT___T_354[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x31U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_49[0U] = vlSelf->__PVT___T_347[0U];
        vlSelf->__PVT__ramWire_49[1U] = vlSelf->__PVT___T_347[1U];
        vlSelf->__PVT__ramWire_49[2U] = vlSelf->__PVT___T_347[2U];
        vlSelf->__PVT__ramWire_49[3U] = vlSelf->__PVT___T_347[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x30U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_48[0U] = vlSelf->__PVT___T_340[0U];
        vlSelf->__PVT__ramWire_48[1U] = vlSelf->__PVT___T_340[1U];
        vlSelf->__PVT__ramWire_48[2U] = vlSelf->__PVT___T_340[2U];
        vlSelf->__PVT__ramWire_48[3U] = vlSelf->__PVT___T_340[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2fU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_47[0U] = vlSelf->__PVT___T_333[0U];
        vlSelf->__PVT__ramWire_47[1U] = vlSelf->__PVT___T_333[1U];
        vlSelf->__PVT__ramWire_47[2U] = vlSelf->__PVT___T_333[2U];
        vlSelf->__PVT__ramWire_47[3U] = vlSelf->__PVT___T_333[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2eU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_46[0U] = vlSelf->__PVT___T_326[0U];
        vlSelf->__PVT__ramWire_46[1U] = vlSelf->__PVT___T_326[1U];
        vlSelf->__PVT__ramWire_46[2U] = vlSelf->__PVT___T_326[2U];
        vlSelf->__PVT__ramWire_46[3U] = vlSelf->__PVT___T_326[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2dU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_45[0U] = vlSelf->__PVT___T_319[0U];
        vlSelf->__PVT__ramWire_45[1U] = vlSelf->__PVT___T_319[1U];
        vlSelf->__PVT__ramWire_45[2U] = vlSelf->__PVT___T_319[2U];
        vlSelf->__PVT__ramWire_45[3U] = vlSelf->__PVT___T_319[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2cU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_44[0U] = vlSelf->__PVT___T_312[0U];
        vlSelf->__PVT__ramWire_44[1U] = vlSelf->__PVT___T_312[1U];
        vlSelf->__PVT__ramWire_44[2U] = vlSelf->__PVT___T_312[2U];
        vlSelf->__PVT__ramWire_44[3U] = vlSelf->__PVT___T_312[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2bU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_43[0U] = vlSelf->__PVT___T_305[0U];
        vlSelf->__PVT__ramWire_43[1U] = vlSelf->__PVT___T_305[1U];
        vlSelf->__PVT__ramWire_43[2U] = vlSelf->__PVT___T_305[2U];
        vlSelf->__PVT__ramWire_43[3U] = vlSelf->__PVT___T_305[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x2aU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_42[0U] = vlSelf->__PVT___T_298[0U];
        vlSelf->__PVT__ramWire_42[1U] = vlSelf->__PVT___T_298[1U];
        vlSelf->__PVT__ramWire_42[2U] = vlSelf->__PVT___T_298[2U];
        vlSelf->__PVT__ramWire_42[3U] = vlSelf->__PVT___T_298[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x29U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_41[0U] = vlSelf->__PVT___T_291[0U];
        vlSelf->__PVT__ramWire_41[1U] = vlSelf->__PVT___T_291[1U];
        vlSelf->__PVT__ramWire_41[2U] = vlSelf->__PVT___T_291[2U];
        vlSelf->__PVT__ramWire_41[3U] = vlSelf->__PVT___T_291[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x28U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_40[0U] = vlSelf->__PVT___T_284[0U];
        vlSelf->__PVT__ramWire_40[1U] = vlSelf->__PVT___T_284[1U];
        vlSelf->__PVT__ramWire_40[2U] = vlSelf->__PVT___T_284[2U];
        vlSelf->__PVT__ramWire_40[3U] = vlSelf->__PVT___T_284[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x27U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_39[0U] = vlSelf->__PVT___T_277[0U];
        vlSelf->__PVT__ramWire_39[1U] = vlSelf->__PVT___T_277[1U];
        vlSelf->__PVT__ramWire_39[2U] = vlSelf->__PVT___T_277[2U];
        vlSelf->__PVT__ramWire_39[3U] = vlSelf->__PVT___T_277[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x26U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_38[0U] = vlSelf->__PVT___T_270[0U];
        vlSelf->__PVT__ramWire_38[1U] = vlSelf->__PVT___T_270[1U];
        vlSelf->__PVT__ramWire_38[2U] = vlSelf->__PVT___T_270[2U];
        vlSelf->__PVT__ramWire_38[3U] = vlSelf->__PVT___T_270[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x25U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_37[0U] = vlSelf->__PVT___T_263[0U];
        vlSelf->__PVT__ramWire_37[1U] = vlSelf->__PVT___T_263[1U];
        vlSelf->__PVT__ramWire_37[2U] = vlSelf->__PVT___T_263[2U];
        vlSelf->__PVT__ramWire_37[3U] = vlSelf->__PVT___T_263[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x24U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_36[0U] = vlSelf->__PVT___T_256[0U];
        vlSelf->__PVT__ramWire_36[1U] = vlSelf->__PVT___T_256[1U];
        vlSelf->__PVT__ramWire_36[2U] = vlSelf->__PVT___T_256[2U];
        vlSelf->__PVT__ramWire_36[3U] = vlSelf->__PVT___T_256[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x23U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_35[0U] = vlSelf->__PVT___T_249[0U];
        vlSelf->__PVT__ramWire_35[1U] = vlSelf->__PVT___T_249[1U];
        vlSelf->__PVT__ramWire_35[2U] = vlSelf->__PVT___T_249[2U];
        vlSelf->__PVT__ramWire_35[3U] = vlSelf->__PVT___T_249[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x22U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_34[0U] = vlSelf->__PVT___T_242[0U];
        vlSelf->__PVT__ramWire_34[1U] = vlSelf->__PVT___T_242[1U];
        vlSelf->__PVT__ramWire_34[2U] = vlSelf->__PVT___T_242[2U];
        vlSelf->__PVT__ramWire_34[3U] = vlSelf->__PVT___T_242[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x21U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_33[0U] = vlSelf->__PVT___T_235[0U];
        vlSelf->__PVT__ramWire_33[1U] = vlSelf->__PVT___T_235[1U];
        vlSelf->__PVT__ramWire_33[2U] = vlSelf->__PVT___T_235[2U];
        vlSelf->__PVT__ramWire_33[3U] = vlSelf->__PVT___T_235[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x20U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_32[0U] = vlSelf->__PVT___T_228[0U];
        vlSelf->__PVT__ramWire_32[1U] = vlSelf->__PVT___T_228[1U];
        vlSelf->__PVT__ramWire_32[2U] = vlSelf->__PVT___T_228[2U];
        vlSelf->__PVT__ramWire_32[3U] = vlSelf->__PVT___T_228[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1fU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_31[0U] = vlSelf->__PVT___T_221[0U];
        vlSelf->__PVT__ramWire_31[1U] = vlSelf->__PVT___T_221[1U];
        vlSelf->__PVT__ramWire_31[2U] = vlSelf->__PVT___T_221[2U];
        vlSelf->__PVT__ramWire_31[3U] = vlSelf->__PVT___T_221[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1eU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_30[0U] = vlSelf->__PVT___T_214[0U];
        vlSelf->__PVT__ramWire_30[1U] = vlSelf->__PVT___T_214[1U];
        vlSelf->__PVT__ramWire_30[2U] = vlSelf->__PVT___T_214[2U];
        vlSelf->__PVT__ramWire_30[3U] = vlSelf->__PVT___T_214[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1dU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_29[0U] = vlSelf->__PVT___T_207[0U];
        vlSelf->__PVT__ramWire_29[1U] = vlSelf->__PVT___T_207[1U];
        vlSelf->__PVT__ramWire_29[2U] = vlSelf->__PVT___T_207[2U];
        vlSelf->__PVT__ramWire_29[3U] = vlSelf->__PVT___T_207[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1cU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_28[0U] = vlSelf->__PVT___T_200[0U];
        vlSelf->__PVT__ramWire_28[1U] = vlSelf->__PVT___T_200[1U];
        vlSelf->__PVT__ramWire_28[2U] = vlSelf->__PVT___T_200[2U];
        vlSelf->__PVT__ramWire_28[3U] = vlSelf->__PVT___T_200[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1bU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_27[0U] = vlSelf->__PVT___T_193[0U];
        vlSelf->__PVT__ramWire_27[1U] = vlSelf->__PVT___T_193[1U];
        vlSelf->__PVT__ramWire_27[2U] = vlSelf->__PVT___T_193[2U];
        vlSelf->__PVT__ramWire_27[3U] = vlSelf->__PVT___T_193[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x1aU == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_26[0U] = vlSelf->__PVT___T_186[0U];
        vlSelf->__PVT__ramWire_26[1U] = vlSelf->__PVT___T_186[1U];
        vlSelf->__PVT__ramWire_26[2U] = vlSelf->__PVT___T_186[2U];
        vlSelf->__PVT__ramWire_26[3U] = vlSelf->__PVT___T_186[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x19U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_25[0U] = vlSelf->__PVT___T_179[0U];
        vlSelf->__PVT__ramWire_25[1U] = vlSelf->__PVT___T_179[1U];
        vlSelf->__PVT__ramWire_25[2U] = vlSelf->__PVT___T_179[2U];
        vlSelf->__PVT__ramWire_25[3U] = vlSelf->__PVT___T_179[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x18U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_24[0U] = vlSelf->__PVT___T_172[0U];
        vlSelf->__PVT__ramWire_24[1U] = vlSelf->__PVT___T_172[1U];
        vlSelf->__PVT__ramWire_24[2U] = vlSelf->__PVT___T_172[2U];
        vlSelf->__PVT__ramWire_24[3U] = vlSelf->__PVT___T_172[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x17U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_23[0U] = vlSelf->__PVT___T_165[0U];
        vlSelf->__PVT__ramWire_23[1U] = vlSelf->__PVT___T_165[1U];
        vlSelf->__PVT__ramWire_23[2U] = vlSelf->__PVT___T_165[2U];
        vlSelf->__PVT__ramWire_23[3U] = vlSelf->__PVT___T_165[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x16U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_22[0U] = vlSelf->__PVT___T_158[0U];
        vlSelf->__PVT__ramWire_22[1U] = vlSelf->__PVT___T_158[1U];
        vlSelf->__PVT__ramWire_22[2U] = vlSelf->__PVT___T_158[2U];
        vlSelf->__PVT__ramWire_22[3U] = vlSelf->__PVT___T_158[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x15U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_21[0U] = vlSelf->__PVT___T_151[0U];
        vlSelf->__PVT__ramWire_21[1U] = vlSelf->__PVT___T_151[1U];
        vlSelf->__PVT__ramWire_21[2U] = vlSelf->__PVT___T_151[2U];
        vlSelf->__PVT__ramWire_21[3U] = vlSelf->__PVT___T_151[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x14U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_20[0U] = vlSelf->__PVT___T_144[0U];
        vlSelf->__PVT__ramWire_20[1U] = vlSelf->__PVT___T_144[1U];
        vlSelf->__PVT__ramWire_20[2U] = vlSelf->__PVT___T_144[2U];
        vlSelf->__PVT__ramWire_20[3U] = vlSelf->__PVT___T_144[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x13U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_19[0U] = vlSelf->__PVT___T_137[0U];
        vlSelf->__PVT__ramWire_19[1U] = vlSelf->__PVT___T_137[1U];
        vlSelf->__PVT__ramWire_19[2U] = vlSelf->__PVT___T_137[2U];
        vlSelf->__PVT__ramWire_19[3U] = vlSelf->__PVT___T_137[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x12U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_18[0U] = vlSelf->__PVT___T_130[0U];
        vlSelf->__PVT__ramWire_18[1U] = vlSelf->__PVT___T_130[1U];
        vlSelf->__PVT__ramWire_18[2U] = vlSelf->__PVT___T_130[2U];
        vlSelf->__PVT__ramWire_18[3U] = vlSelf->__PVT___T_130[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x11U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_17[0U] = vlSelf->__PVT___T_123[0U];
        vlSelf->__PVT__ramWire_17[1U] = vlSelf->__PVT___T_123[1U];
        vlSelf->__PVT__ramWire_17[2U] = vlSelf->__PVT___T_123[2U];
        vlSelf->__PVT__ramWire_17[3U] = vlSelf->__PVT___T_123[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0x10U == (0x3fU 
                                                   & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_16[0U] = vlSelf->__PVT___T_116[0U];
        vlSelf->__PVT__ramWire_16[1U] = vlSelf->__PVT___T_116[1U];
        vlSelf->__PVT__ramWire_16[2U] = vlSelf->__PVT___T_116[2U];
        vlSelf->__PVT__ramWire_16[3U] = vlSelf->__PVT___T_116[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xfU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_15[0U] = vlSelf->__PVT___T_109[0U];
        vlSelf->__PVT__ramWire_15[1U] = vlSelf->__PVT___T_109[1U];
        vlSelf->__PVT__ramWire_15[2U] = vlSelf->__PVT___T_109[2U];
        vlSelf->__PVT__ramWire_15[3U] = vlSelf->__PVT___T_109[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xeU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_14[0U] = vlSelf->__PVT___T_102[0U];
        vlSelf->__PVT__ramWire_14[1U] = vlSelf->__PVT___T_102[1U];
        vlSelf->__PVT__ramWire_14[2U] = vlSelf->__PVT___T_102[2U];
        vlSelf->__PVT__ramWire_14[3U] = vlSelf->__PVT___T_102[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xdU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_13[0U] = vlSelf->__PVT___T_95[0U];
        vlSelf->__PVT__ramWire_13[1U] = vlSelf->__PVT___T_95[1U];
        vlSelf->__PVT__ramWire_13[2U] = vlSelf->__PVT___T_95[2U];
        vlSelf->__PVT__ramWire_13[3U] = vlSelf->__PVT___T_95[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xcU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_12[0U] = vlSelf->__PVT___T_88[0U];
        vlSelf->__PVT__ramWire_12[1U] = vlSelf->__PVT___T_88[1U];
        vlSelf->__PVT__ramWire_12[2U] = vlSelf->__PVT___T_88[2U];
        vlSelf->__PVT__ramWire_12[3U] = vlSelf->__PVT___T_88[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xbU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_11[0U] = vlSelf->__PVT___T_81[0U];
        vlSelf->__PVT__ramWire_11[1U] = vlSelf->__PVT___T_81[1U];
        vlSelf->__PVT__ramWire_11[2U] = vlSelf->__PVT___T_81[2U];
        vlSelf->__PVT__ramWire_11[3U] = vlSelf->__PVT___T_81[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0xaU == (0x3fU 
                                                  & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_10[0U] = vlSelf->__PVT___T_74[0U];
        vlSelf->__PVT__ramWire_10[1U] = vlSelf->__PVT___T_74[1U];
        vlSelf->__PVT__ramWire_10[2U] = vlSelf->__PVT___T_74[2U];
        vlSelf->__PVT__ramWire_10[3U] = vlSelf->__PVT___T_74[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (9U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_9[0U] = vlSelf->__PVT___T_67[0U];
        vlSelf->__PVT__ramWire_9[1U] = vlSelf->__PVT___T_67[1U];
        vlSelf->__PVT__ramWire_9[2U] = vlSelf->__PVT___T_67[2U];
        vlSelf->__PVT__ramWire_9[3U] = vlSelf->__PVT___T_67[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (8U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_8[0U] = vlSelf->__PVT___T_60[0U];
        vlSelf->__PVT__ramWire_8[1U] = vlSelf->__PVT___T_60[1U];
        vlSelf->__PVT__ramWire_8[2U] = vlSelf->__PVT___T_60[2U];
        vlSelf->__PVT__ramWire_8[3U] = vlSelf->__PVT___T_60[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (7U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_7[0U] = vlSelf->__PVT___T_53[0U];
        vlSelf->__PVT__ramWire_7[1U] = vlSelf->__PVT___T_53[1U];
        vlSelf->__PVT__ramWire_7[2U] = vlSelf->__PVT___T_53[2U];
        vlSelf->__PVT__ramWire_7[3U] = vlSelf->__PVT___T_53[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (6U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_6[0U] = vlSelf->__PVT___T_46[0U];
        vlSelf->__PVT__ramWire_6[1U] = vlSelf->__PVT___T_46[1U];
        vlSelf->__PVT__ramWire_6[2U] = vlSelf->__PVT___T_46[2U];
        vlSelf->__PVT__ramWire_6[3U] = vlSelf->__PVT___T_46[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (5U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_5[0U] = vlSelf->__PVT___T_39[0U];
        vlSelf->__PVT__ramWire_5[1U] = vlSelf->__PVT___T_39[1U];
        vlSelf->__PVT__ramWire_5[2U] = vlSelf->__PVT___T_39[2U];
        vlSelf->__PVT__ramWire_5[3U] = vlSelf->__PVT___T_39[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (4U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_4[0U] = vlSelf->__PVT___T_32[0U];
        vlSelf->__PVT__ramWire_4[1U] = vlSelf->__PVT___T_32[1U];
        vlSelf->__PVT__ramWire_4[2U] = vlSelf->__PVT___T_32[2U];
        vlSelf->__PVT__ramWire_4[3U] = vlSelf->__PVT___T_32[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (3U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_3[0U] = vlSelf->__PVT___T_25[0U];
        vlSelf->__PVT__ramWire_3[1U] = vlSelf->__PVT___T_25[1U];
        vlSelf->__PVT__ramWire_3[2U] = vlSelf->__PVT___T_25[2U];
        vlSelf->__PVT__ramWire_3[3U] = vlSelf->__PVT___T_25[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (2U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_2[0U] = vlSelf->__PVT___T_18[0U];
        vlSelf->__PVT__ramWire_2[1U] = vlSelf->__PVT___T_18[1U];
        vlSelf->__PVT__ramWire_2[2U] = vlSelf->__PVT___T_18[2U];
        vlSelf->__PVT__ramWire_2[3U] = vlSelf->__PVT___T_18[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (1U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_1[0U] = vlSelf->__PVT___T_11[0U];
        vlSelf->__PVT__ramWire_1[1U] = vlSelf->__PVT___T_11[1U];
        vlSelf->__PVT__ramWire_1[2U] = vlSelf->__PVT___T_11[2U];
        vlSelf->__PVT__ramWire_1[3U] = vlSelf->__PVT___T_11[3U];
    }
    if (((IData)(vlSelf->__PVT___T_5) & (0U == (0x3fU 
                                                & ((vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP.ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1bU)))))) {
        vlSelf->__PVT__ramWire_0[0U] = vlSelf->__PVT___T_4[0U];
        vlSelf->__PVT__ramWire_0[1U] = vlSelf->__PVT___T_4[1U];
        vlSelf->__PVT__ramWire_0[2U] = vlSelf->__PVT___T_4[2U];
        vlSelf->__PVT__ramWire_0[3U] = vlSelf->__PVT___T_4[3U];
    }
}
