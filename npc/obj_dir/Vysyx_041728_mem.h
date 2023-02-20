// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_041728.h for the primary calling header

#ifndef VERILATED_VYSYX_041728_MEM_H_
#define VERILATED_VYSYX_041728_MEM_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_041728__Syms;
class Vysyx_041728_VerilatedVcd;


//----------

VL_MODULE(Vysyx_041728_mem) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(io_memIO_cen,0,0);
    VL_IN8(io_memIO_wen,0,0);
    VL_IN8(io_memIO_addr,5,0);
    VL_INW(io_memIO_wdata,127,0,4);
    VL_INW(io_memIO_wmask,127,0,4);
    VL_OUTW(io_memIO_rdata,127,0,4);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VlWide<4>/*127:0*/ __PVT___ramWire_0_T;
        VlWide<4>/*127:0*/ __PVT__ramWire_0_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_0_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_1_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_1_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_2_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_2_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_3_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_3_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_4_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_4_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_5_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_5_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_6_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_6_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_7_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_7_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_8_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_8_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_9_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_9_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_10_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_10_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_11_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_11_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_12_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_12_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_13_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_13_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_14_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_14_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_15_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_15_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_16_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_16_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_17_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_17_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_18_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_18_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_19_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_19_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_20_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_20_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_21_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_21_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_22_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_22_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_23_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_23_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_24_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_24_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_25_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_25_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_26_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_26_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_27_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_27_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_28_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_28_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_29_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_29_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_30_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_30_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_31_r;
    };
    struct {
        VlWide<4>/*127:0*/ __PVT___ramWire_31_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_32_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_32_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_33_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_33_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_34_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_34_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_35_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_35_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_36_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_36_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_37_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_37_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_38_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_38_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_39_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_39_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_40_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_40_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_41_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_41_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_42_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_42_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_43_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_43_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_44_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_44_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_45_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_45_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_46_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_46_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_47_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_47_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_48_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_48_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_49_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_49_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_50_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_50_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_51_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_51_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_52_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_52_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_53_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_53_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_54_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_54_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_55_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_55_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_56_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_56_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_57_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_57_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_58_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_58_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_59_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_59_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_60_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_60_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_61_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_61_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_62_r;
        VlWide<4>/*127:0*/ __PVT___ramWire_62_T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_63_r;
    };
    struct {
        VlWide<4>/*127:0*/ __PVT___ramWire_63_T_2;
        VlWide<4>/*127:0*/ __PVT___io_memIO_rdata_T_103;
    };

    // INTERNAL VARIABLES
    Vysyx_041728__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_041728_mem);  ///< Copying not allowed
  public:
    Vysyx_041728_mem(const char* name);
    ~Vysyx_041728_mem();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_041728__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
