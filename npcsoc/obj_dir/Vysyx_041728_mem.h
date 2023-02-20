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
        CData/*0:0*/ __PVT___T_5;
        VlWide<4>/*127:0*/ __PVT___T_2;
        VlWide<4>/*127:0*/ __PVT__ramWire_0;
        VlWide<4>/*127:0*/ __PVT___T_4;
        VlWide<4>/*127:0*/ __PVT__ramWire_1;
        VlWide<4>/*127:0*/ __PVT___T_11;
        VlWide<4>/*127:0*/ __PVT__ramWire_2;
        VlWide<4>/*127:0*/ __PVT___T_18;
        VlWide<4>/*127:0*/ __PVT__ramWire_3;
        VlWide<4>/*127:0*/ __PVT___T_25;
        VlWide<4>/*127:0*/ __PVT__ramWire_4;
        VlWide<4>/*127:0*/ __PVT___T_32;
        VlWide<4>/*127:0*/ __PVT__ramWire_5;
        VlWide<4>/*127:0*/ __PVT___T_39;
        VlWide<4>/*127:0*/ __PVT__ramWire_6;
        VlWide<4>/*127:0*/ __PVT___T_46;
        VlWide<4>/*127:0*/ __PVT__ramWire_7;
        VlWide<4>/*127:0*/ __PVT___T_53;
        VlWide<4>/*127:0*/ __PVT__ramWire_8;
        VlWide<4>/*127:0*/ __PVT___T_60;
        VlWide<4>/*127:0*/ __PVT__ramWire_9;
        VlWide<4>/*127:0*/ __PVT___T_67;
        VlWide<4>/*127:0*/ __PVT__ramWire_10;
        VlWide<4>/*127:0*/ __PVT___T_74;
        VlWide<4>/*127:0*/ __PVT__ramWire_11;
        VlWide<4>/*127:0*/ __PVT___T_81;
        VlWide<4>/*127:0*/ __PVT__ramWire_12;
        VlWide<4>/*127:0*/ __PVT___T_88;
        VlWide<4>/*127:0*/ __PVT__ramWire_13;
        VlWide<4>/*127:0*/ __PVT___T_95;
        VlWide<4>/*127:0*/ __PVT__ramWire_14;
        VlWide<4>/*127:0*/ __PVT___T_102;
        VlWide<4>/*127:0*/ __PVT__ramWire_15;
        VlWide<4>/*127:0*/ __PVT___T_109;
        VlWide<4>/*127:0*/ __PVT__ramWire_16;
        VlWide<4>/*127:0*/ __PVT___T_116;
        VlWide<4>/*127:0*/ __PVT__ramWire_17;
        VlWide<4>/*127:0*/ __PVT___T_123;
        VlWide<4>/*127:0*/ __PVT__ramWire_18;
        VlWide<4>/*127:0*/ __PVT___T_130;
        VlWide<4>/*127:0*/ __PVT__ramWire_19;
        VlWide<4>/*127:0*/ __PVT___T_137;
        VlWide<4>/*127:0*/ __PVT__ramWire_20;
        VlWide<4>/*127:0*/ __PVT___T_144;
        VlWide<4>/*127:0*/ __PVT__ramWire_21;
        VlWide<4>/*127:0*/ __PVT___T_151;
        VlWide<4>/*127:0*/ __PVT__ramWire_22;
        VlWide<4>/*127:0*/ __PVT___T_158;
        VlWide<4>/*127:0*/ __PVT__ramWire_23;
        VlWide<4>/*127:0*/ __PVT___T_165;
        VlWide<4>/*127:0*/ __PVT__ramWire_24;
        VlWide<4>/*127:0*/ __PVT___T_172;
        VlWide<4>/*127:0*/ __PVT__ramWire_25;
        VlWide<4>/*127:0*/ __PVT___T_179;
        VlWide<4>/*127:0*/ __PVT__ramWire_26;
        VlWide<4>/*127:0*/ __PVT___T_186;
        VlWide<4>/*127:0*/ __PVT__ramWire_27;
        VlWide<4>/*127:0*/ __PVT___T_193;
        VlWide<4>/*127:0*/ __PVT__ramWire_28;
        VlWide<4>/*127:0*/ __PVT___T_200;
        VlWide<4>/*127:0*/ __PVT__ramWire_29;
        VlWide<4>/*127:0*/ __PVT___T_207;
        VlWide<4>/*127:0*/ __PVT__ramWire_30;
        VlWide<4>/*127:0*/ __PVT___T_214;
    };
    struct {
        VlWide<4>/*127:0*/ __PVT__ramWire_31;
        VlWide<4>/*127:0*/ __PVT___T_221;
        VlWide<4>/*127:0*/ __PVT__ramWire_32;
        VlWide<4>/*127:0*/ __PVT___T_228;
        VlWide<4>/*127:0*/ __PVT__ramWire_33;
        VlWide<4>/*127:0*/ __PVT___T_235;
        VlWide<4>/*127:0*/ __PVT__ramWire_34;
        VlWide<4>/*127:0*/ __PVT___T_242;
        VlWide<4>/*127:0*/ __PVT__ramWire_35;
        VlWide<4>/*127:0*/ __PVT___T_249;
        VlWide<4>/*127:0*/ __PVT__ramWire_36;
        VlWide<4>/*127:0*/ __PVT___T_256;
        VlWide<4>/*127:0*/ __PVT__ramWire_37;
        VlWide<4>/*127:0*/ __PVT___T_263;
        VlWide<4>/*127:0*/ __PVT__ramWire_38;
        VlWide<4>/*127:0*/ __PVT___T_270;
        VlWide<4>/*127:0*/ __PVT__ramWire_39;
        VlWide<4>/*127:0*/ __PVT___T_277;
        VlWide<4>/*127:0*/ __PVT__ramWire_40;
        VlWide<4>/*127:0*/ __PVT___T_284;
        VlWide<4>/*127:0*/ __PVT__ramWire_41;
        VlWide<4>/*127:0*/ __PVT___T_291;
        VlWide<4>/*127:0*/ __PVT__ramWire_42;
        VlWide<4>/*127:0*/ __PVT___T_298;
        VlWide<4>/*127:0*/ __PVT__ramWire_43;
        VlWide<4>/*127:0*/ __PVT___T_305;
        VlWide<4>/*127:0*/ __PVT__ramWire_44;
        VlWide<4>/*127:0*/ __PVT___T_312;
        VlWide<4>/*127:0*/ __PVT__ramWire_45;
        VlWide<4>/*127:0*/ __PVT___T_319;
        VlWide<4>/*127:0*/ __PVT__ramWire_46;
        VlWide<4>/*127:0*/ __PVT___T_326;
        VlWide<4>/*127:0*/ __PVT__ramWire_47;
        VlWide<4>/*127:0*/ __PVT___T_333;
        VlWide<4>/*127:0*/ __PVT__ramWire_48;
        VlWide<4>/*127:0*/ __PVT___T_340;
        VlWide<4>/*127:0*/ __PVT__ramWire_49;
        VlWide<4>/*127:0*/ __PVT___T_347;
        VlWide<4>/*127:0*/ __PVT__ramWire_50;
        VlWide<4>/*127:0*/ __PVT___T_354;
        VlWide<4>/*127:0*/ __PVT__ramWire_51;
        VlWide<4>/*127:0*/ __PVT___T_361;
        VlWide<4>/*127:0*/ __PVT__ramWire_52;
        VlWide<4>/*127:0*/ __PVT___T_368;
        VlWide<4>/*127:0*/ __PVT__ramWire_53;
        VlWide<4>/*127:0*/ __PVT___T_375;
        VlWide<4>/*127:0*/ __PVT__ramWire_54;
        VlWide<4>/*127:0*/ __PVT___T_382;
        VlWide<4>/*127:0*/ __PVT__ramWire_55;
        VlWide<4>/*127:0*/ __PVT___T_389;
        VlWide<4>/*127:0*/ __PVT__ramWire_56;
        VlWide<4>/*127:0*/ __PVT___T_396;
        VlWide<4>/*127:0*/ __PVT__ramWire_57;
        VlWide<4>/*127:0*/ __PVT___T_403;
        VlWide<4>/*127:0*/ __PVT__ramWire_58;
        VlWide<4>/*127:0*/ __PVT___T_410;
        VlWide<4>/*127:0*/ __PVT__ramWire_59;
        VlWide<4>/*127:0*/ __PVT___T_417;
        VlWide<4>/*127:0*/ __PVT__ramWire_60;
        VlWide<4>/*127:0*/ __PVT___T_424;
        VlWide<4>/*127:0*/ __PVT__ramWire_61;
        VlWide<4>/*127:0*/ __PVT___T_431;
        VlWide<4>/*127:0*/ __PVT__ramWire_62;
        VlWide<4>/*127:0*/ __PVT___T_438;
    };
    struct {
        VlWide<4>/*127:0*/ __PVT__ramWire_63;
        VlWide<4>/*127:0*/ __PVT___T_445;
        VlWide<4>/*127:0*/ __PVT___T_553;
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
