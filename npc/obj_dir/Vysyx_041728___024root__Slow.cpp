// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041728.h for the primary calling header

#include "Vysyx_041728___024root.h"
#include "Vysyx_041728__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_041728___024root___ctor_var_reset(Vysyx_041728___024root* vlSelf);

Vysyx_041728___024root::Vysyx_041728___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_041728___024root___ctor_var_reset(this);
}

void Vysyx_041728___024root::__Vconfigure(Vysyx_041728__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_041728___024root::~Vysyx_041728___024root() {
}

void Vysyx_041728___024root___initial__TOP__1(Vysyx_041728___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_dmaster_awid = 0U;
    vlSelf->io_dmaster_awlen = 0U;
    vlSelf->io_dmaster_arid = 0U;
}

void Vysyx_041728___024root___settle__TOP__2(Vysyx_041728___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT___io_ifjump_T_31;
    CData/*4:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_9;
    CData/*4:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_20;
    CData/*0:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_11;
    CData/*0:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_23;
    CData/*1:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_9;
    CData/*1:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_20;
    CData/*0:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_11;
    CData/*0:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_28;
    CData/*1:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_11;
    CData/*1:0*/ ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_22;
    CData/*0:0*/ ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_0;
    CData/*0:0*/ ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_0;
    CData/*0:0*/ ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_1;
    CData/*0:0*/ ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_2;
    CData/*0:0*/ ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_3;
    CData/*1:0*/ ysyx_041728__DOT__iCache__DOT___sramSel_T_25;
    CData/*1:0*/ ysyx_041728__DOT__iCache__DOT___sramSel_T_51;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_0;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_0;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_1;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_1;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_2;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_2;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_3;
    CData/*0:0*/ ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_3;
    CData/*1:0*/ ysyx_041728__DOT__dCache__DOT___sramSel_T_25;
    CData/*1:0*/ ysyx_041728__DOT__dCache__DOT___sramSel_T_51;
    IData/*21:0*/ ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_0;
    IData/*21:0*/ ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_0;
    IData/*21:0*/ ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_1;
    IData/*21:0*/ ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_2;
    IData/*21:0*/ ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_3;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_0;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_0;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_1;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_1;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_2;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_2;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_3;
    IData/*21:0*/ ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_3;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<6>/*191:0*/ __Vtemp13;
    VlWide<6>/*191:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<5>/*159:0*/ __Vtemp52;
    VlWide<5>/*159:0*/ __Vtemp53;
    VlWide<5>/*159:0*/ __Vtemp54;
    VlWide<5>/*159:0*/ __Vtemp55;
    VlWide<5>/*159:0*/ __Vtemp56;
    VlWide<5>/*159:0*/ __Vtemp57;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<4>/*127:0*/ __Vtemp63;
    QData/*63:0*/ ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT___io_imme_T_7;
    QData/*63:0*/ ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout1_T_25;
    QData/*63:0*/ ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout2_T_25;
    QData/*63:0*/ ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_rdDout_T_25;
    QData/*63:0*/ ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_doutWB_T_25;
    // Body
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0U] = 0ULL;
    VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->io_dmaster_rdata);
    if (vlSelf->io_dmaster_rlast) {
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[0U] = 0U;
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[1U] = 0U;
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[2U] 
            = (IData)(vlSelf->io_dmaster_rdata);
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[3U] 
            = (IData)((vlSelf->io_dmaster_rdata >> 0x20U));
    } else {
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[0U] 
            = __Vtemp2[0U];
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[1U] 
            = __Vtemp2[1U];
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[2U] 
            = __Vtemp2[2U];
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[3U] 
            = __Vtemp2[3U];
    }
    vlSelf->ysyx_041728__DOT__axiIIO__DOT__valid_c 
        = (((IData)(vlSelf->io_dmaster_awready) << 1U) 
           | (IData)(vlSelf->io_dmaster_wready));
    __Vtemp6[0U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[1U] 
                     << 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                  >> 2U));
    __Vtemp6[1U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[2U] 
                     << 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[1U] 
                                  >> 2U));
    __Vtemp6[2U] = (1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[2U] 
                          >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp7, __Vtemp6);
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplierReg_T_1[0U] 
        = __Vtemp7[0U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplierReg_T_1[1U] 
        = __Vtemp7[1U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplierReg_T_1[2U] 
        = __Vtemp7[2U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplicandReg_T_2[0U] 
        = (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
           << 2U);
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplicandReg_T_2[1U] 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
            >> 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                         << 2U));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplicandReg_T_2[2U] 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
            >> 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                         << 2U));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplicandReg_T_2[3U] 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
            >> 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                         << 2U));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplicandReg_T_2[4U] 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
            >> 0x1eU) | (0xcU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U] 
                                 << 2U)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT___cnt_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__cnt_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_0_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_1_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_2_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_3_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_4_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_5_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_6_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_7_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_8_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_9_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_10_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_11_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_12_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_13_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_14_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_15_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_16_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_17_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_18_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_19_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_20_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_21_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_22_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_23_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_24_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_25_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_26_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_27_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_28_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_29_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_30_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_31_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_32_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_33_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_34_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_35_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_36_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_37_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_38_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_39_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_40_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_41_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_42_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_43_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_44_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_45_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_46_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_47_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_48_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_49_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_50_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_51_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_52_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_53_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_54_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_55_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_56_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_57_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_58_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_59_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_60_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_61_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_62_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62_r)));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_63_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_0_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_1_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_2_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_3_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_4_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_5_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_6_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_7_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_8_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_9_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_10_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_11_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_12_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_13_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_14_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_15_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_16_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_17_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_18_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_19_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_20_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_21_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_22_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_23_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_24_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_25_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_26_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_27_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_28_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_29_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_30_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_31_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_32_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_33_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_34_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_35_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_36_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_37_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_38_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_39_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_40_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_41_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_42_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_43_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_44_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_45_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_46_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_47_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_48_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_49_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_50_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_51_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_52_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_53_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_54_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_55_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_56_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_57_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_58_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_59_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_60_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_61_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_62_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62_r)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_63_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63_r)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative 
        = (1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                  >> 2U) & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                              >> 1U) & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                            | ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                   >> 1U)) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative 
        = (1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                   >> 2U) & (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                >> 1U))) & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])));
    vlSelf->ysyx_041728__DOT__axiDIO__DOT___io_axiIO_wvalid_T 
        = ((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)) 
           | (2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[1U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_1;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[2U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_2;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[3U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_3;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[4U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_4;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[5U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_5;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[6U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_6;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[7U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_7;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[8U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_8;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[9U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_9;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0xaU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_10;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0xbU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_11;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0xcU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_12;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0xdU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_13;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0xeU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_14;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0xfU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_15;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x10U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_16;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x11U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_17;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x12U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_18;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x13U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_19;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x13U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_19;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x14U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_20;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x15U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_21;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x16U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_22;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x17U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_23;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x18U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_24;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x19U] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_25;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x1aU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_26;
    vlSelf->ysyx_041728__DOT__dmaIns__DOT__DMABuzy 
        = ((1U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState)) 
           | (2U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState)));
    vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i 
        = ((IData)(vlSelf->io_dmaster_bvalid) & (3U 
                                                 == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)));
    ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_doutWB_T_25 
        = ((0xdU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                              >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_13
            : ((0xcU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                  >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_12
                : ((0xbU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                      >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_11
                    : ((0xaU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                          >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_10
                        : ((9U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                            >> 1U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_9
                            : ((8U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                >> 1U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                            >> 1U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                  >> 1U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                      >> 1U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                    >> 1U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                        >> 1U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                         >> 1U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                          >> 1U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_1
                                                      : 0ULL)))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___cnt_T_2 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__cnt)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___cnt_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__cnt)));
    vlSelf->ysyx_041728__DOT__clintIns__DOT___mtime_T_1 
        = (1ULL + vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime_r);
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_0_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_1_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (1U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_2_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (2U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_3_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (3U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_4_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_5_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (5U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_6_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (6U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_7_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (7U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_8_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (8U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_9_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (9U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_10_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xaU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_11_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xbU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_12_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xcU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_13_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xdU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_14_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xeU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_15_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xfU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_16_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x10U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_17_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_18_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x12U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_19_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x13U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_20_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x14U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_21_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x15U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_22_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x16U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_23_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x17U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_24_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x18U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_25_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x19U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_26_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1aU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_27_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_28_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1cU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_29_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_30_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_31_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1fU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_32_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x20U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_33_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x21U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_34_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x22U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_35_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x23U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_36_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x24U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_37_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x25U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_38_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x26U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_39_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x27U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_40_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x28U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_41_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x29U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_42_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2aU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_43_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_44_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2cU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_45_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_46_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_47_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2fU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_48_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x30U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_49_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x31U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_50_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x32U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_51_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x33U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_52_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x34U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_53_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x35U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_54_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_55_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x37U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_56_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x38U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_57_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x39U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_58_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3aU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_59_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_60_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3cU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_61_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_62_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_63_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3fU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU)))));
    ysyx_041728__DOT__dCache__DOT___sramSel_T_25 = 
        ((0xdU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU))))
          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13_r)
          : ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
              ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12_r)
              : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11_r)
                  : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                         << 4U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10_r)
                      : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9_r)
                          : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                               << 4U) 
                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                              ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8_r)
                              : ((7U == (0x3fU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7_r)
                                  : ((6U == (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6_r)
                                      : ((5U == (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5_r)
                                          : ((4U == 
                                              (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                              ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4_r)
                                              : ((3U 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3_r)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 4U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1cU))))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2_r)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1_r)
                                                    : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0_r))))))))))))));
    vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV 
        = ((0x2000000U <= ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                            << 8U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                      >> 0x18U))) & 
           (0x200bfffU > ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                           << 8U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                     >> 0x18U))));
    vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV 
        = ((0x80000000U <= ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 8U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x18U))) 
           & (0x8fffffffU > ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                              << 8U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                        >> 0x18U))));
    VL_EXTEND_WQ(191,64, __Vtemp13, (((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[3U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U])) 
                                                      >> 0x18U))));
    VL_SHIFTL_WWI(191,191,7, __Vtemp14, __Vtemp13, 
                  (0x38U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                            >> 0x15U)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[0U] 
        = __Vtemp14[0U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[1U] 
        = __Vtemp14[1U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[2U] 
        = __Vtemp14[2U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[3U] 
        = __Vtemp14[3U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[4U] 
        = __Vtemp14[4U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[5U] 
        = (0x7fffffffU & __Vtemp14[5U]);
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1 
        = (0x7fffU & ((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                >> 7U)) << (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x18U))));
    if ((0xdU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                            << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                      >> 0x1cU))))) {
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_0 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_0_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_0 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_0_r;
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_1 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_1_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_1 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_1_r;
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_2 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_2_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_2 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_2_r;
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_3 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_3_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_3 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_3_r;
    } else {
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_0 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_0_r)
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_0_r)
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_0_r)
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_0_r)
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_0_r)
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_0_r)
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_0_r)
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_0_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_0_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_0_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_0_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_0_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_0_r)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_0 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_0_r
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_0_r
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_0_r
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_0_r
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_0_r
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_0_r
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_0_r
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_0_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_0_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_0_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_0_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_0_r
                                                      : vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_0_r))))))))))));
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_1 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_1_r)
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_1_r)
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_1_r)
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_1_r)
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_1_r)
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_1_r)
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_1_r)
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_1_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_1_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_1_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_1_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_1_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_1_r)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_1 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_1_r
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_1_r
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_1_r
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_1_r
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_1_r
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_1_r
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_1_r
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_1_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_1_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_1_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_1_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_1_r
                                                      : vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_1_r))))))))))));
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_2 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_2_r)
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_2_r)
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_2_r)
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_2_r)
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_2_r)
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_2_r)
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_2_r)
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_2_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_2_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_2_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_2_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_2_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_2_r)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_2 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_2_r
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_2_r
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_2_r
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_2_r
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_2_r
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_2_r
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_2_r
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_2_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_2_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_2_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_2_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_2_r
                                                      : vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_2_r))))))))))));
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_3 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_3_r)
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_3_r)
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_3_r)
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_3_r)
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_3_r)
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_3_r)
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_3_r)
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_3_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_3_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_3_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_3_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_3_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_3_r)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_3 
            = ((0xcU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                   << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                             >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_3_r
                : ((0xbU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                       << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_3_r
                    : ((0xaU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                           << 4U) | 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_3_r
                        : ((9U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_3_r
                            : ((8U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_3_r
                                : ((7U == (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_3_r
                                    : ((6U == (0x3fU 
                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_3_r
                                        : ((5U == (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_3_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_3_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_3_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_3_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_3_r
                                                      : vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_3_r))))))))))));
    }
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_aluRes1 
        = ((0U == (3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                         >> 3U))) ? (((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                      >> 0x18U)))
            : (QData)((IData)(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U] 
                                << 8U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                          >> 0x18U)))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mstatusval_T_1 
        = ((0xffffffffffffff00ULL & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r) 
           | (QData)((IData)(((0x80U & ((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                                 >> 3U)) 
                                        << 7U)) | (
                                                   (0x70U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                                                >> 4U)) 
                                                       << 4U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r)))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mstatusval_T_2 
        = ((0xffffffffffffff00ULL & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r) 
           | (QData)((IData)((0x80U | ((0x70U & ((IData)(
                                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                                          >> 4U)) 
                                                 << 4U)) 
                                       | ((8U & ((IData)(
                                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                                          >> 7U)) 
                                                 << 3U)) 
                                          | (7U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mipval_T 
        = ((0xffffffffffffff00ULL & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins_r) 
           | (QData)((IData)((0x80U | (0x7fU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins_r))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__startTimeCnt 
        = (1U & ((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r 
                          >> 7U)) & (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                             >> 3U))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren 
        = (IData)((0U != (0x1f8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_0 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_0_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_0_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_1 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_1_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_1_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_2 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_2_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_2_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_3 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_3_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_3_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_4 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_4_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_4_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_5 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_5_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_5_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_6 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_6_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_6_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_7 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_7_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_7_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_8 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_8_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_8_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_9 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_9_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_9_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_10 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_10_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_10_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_11 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_11_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_11_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_12 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_12_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_12_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_13 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_13_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_13_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_14 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_14_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_14_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_15 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
              << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                           >> 0xeU)) == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_15_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_15_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H 
        = ((0x20U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                     << 2U)) | ((0x10U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                          >> 1U)) | 
                                ((8U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                        >> 3U)) | (
                                                   (4U 
                                                    & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                                       >> 2U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                                            >> 8U)))))));
    vlSelf->ysyx_041728__DOT__dmaIns__DOT__blockDMA 
        = (1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0U] 
                 & (~ (IData)(vlSelf->io_dmaster_rlast))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_valid 
        = ((((((((0x11U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                     >> 4U))) | (0x12U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                     >> 4U)))) 
                | (0x14U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                      >> 4U)))) | (0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                       >> 4U)))) 
              | (0x17U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                    >> 4U)))) | (0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                     >> 4U)))) 
            | (0x19U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                  >> 4U)))) | (0x1dU 
                                               == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns_io_mul_valid 
        = ((0x13U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                               >> 4U))) | (0x16U == 
                                           (0x1fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                             >> 4U))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_divw 
        = ((((0x11U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                 >> 4U))) | (0x12U 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 4U)))) 
            | (0x14U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                  >> 4U)))) | (0x15U 
                                               == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed 
        = ((((0x14U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                 >> 4U))) | (0x15U 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 4U)))) 
            | (0x18U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                  >> 4U)))) | (0x19U 
                                               == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___pipCSRReg_T 
        = (((0x1073U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                    >> 1U))) << 8U) 
           | (((0x2073U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 1U))) << 7U) 
              | (((0x6073U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                          >> 1U))) 
                  << 6U) | (((0x7073U == (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U))) 
                             << 5U) | (((0x3073U == 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U))) 
                                        << 4U) | ((
                                                   (0x5073U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U))) 
                                                   << 3U) 
                                                  | (((0x73U 
                                                       == 
                                                       ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U))) 
                                                      << 2U) 
                                                     | (((((((0x1073U 
                                                              == 
                                                              (0x707fU 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                  >> 1U))) 
                                                             | (0x2073U 
                                                                == 
                                                                (0x707fU 
                                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                    >> 1U)))) 
                                                            | (0x6073U 
                                                               == 
                                                               (0x707fU 
                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                   >> 1U)))) 
                                                           | (0x7073U 
                                                              == 
                                                              (0x707fU 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                  >> 1U)))) 
                                                          | (0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                 >> 1U)))) 
                                                         << 1U) 
                                                        | (0x30200073U 
                                                           == 
                                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                             << 0x1fU) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 1U)))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__snpc 
        = ((IData)(4U) + vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc);
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__memVGenInst_io_valid 
        = ((0x3023U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 1U))) | ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U))) 
                                               | ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U))) 
                                                  | ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))) 
                                                     | ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))) 
                                                        | ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 1U))) 
                                                           | ((0x1003U 
                                                               == 
                                                               (0x707fU 
                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                   >> 1U))) 
                                                              | ((0x2003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                      >> 1U))) 
                                                                 | ((0x3003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                         >> 1U))) 
                                                                    | ((0x5003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                            >> 1U))) 
                                                                       | ((3U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                               >> 1U))) 
                                                                          | (0x6003U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_loadHazard 
        = ((((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                       >> 0x10U)) == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                               >> 9U))) 
            | ((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                         >> 0x15U)) == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                 >> 9U)))) 
           & (2U == (3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                           >> 0xdU))));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_11 
        = ((0x63U != (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                 >> 1U))) & ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))) 
                                             | ((0x5033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))) 
                                                | ((0x5063U 
                                                    != 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U))) 
                                                   & ((0x200703bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                            << 0x1fU) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U)))) 
                                                      | ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U))) 
                                                         | ((0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                 >> 1U))) 
                                                            | ((0x200003bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                     << 0x1fU) 
                                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                       >> 1U)))) 
                                                               | ((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                       >> 1U))) 
                                                                  | ((0x2006033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                           << 0x1fU) 
                                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                             >> 1U)))) 
                                                                     | ((0x1023U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                             >> 1U))) 
                                                                        & (0x6fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                               >> 1U))))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout1_T_25 
        = ((0xdU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                              >> 0x10U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_13
            : ((0xcU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                  >> 0x10U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_12
                : ((0xbU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                      >> 0x10U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_11
                    : ((0xaU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                          >> 0x10U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_10
                        : ((9U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 0x10U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_9
                            : ((8U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 0x10U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 0x10U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 0x10U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 0x10U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0x10U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 0x10U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 0x10U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 0x10U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_1
                                                      : 0ULL)))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout2_T_25 
        = ((0xdU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                              >> 0x15U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_13
            : ((0xcU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                  >> 0x15U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_12
                : ((0xbU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                      >> 0x15U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_11
                    : ((0xaU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                          >> 0x15U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_10
                        : ((9U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 0x15U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_9
                            : ((8U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 0x15U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 0x15U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 0x15U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 0x15U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0x15U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 0x15U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 0x15U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 0x15U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_1
                                                      : 0ULL)))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_rdDout_T_25 
        = ((0xdU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                              >> 8U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_13
            : ((0xcU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                  >> 8U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_12
                : ((0xbU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                      >> 8U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_11
                    : ((0xaU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                          >> 8U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_10
                        : ((9U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 8U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_9
                            : ((8U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 8U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 8U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 8U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 8U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 8U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 8U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 8U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 8U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_1
                                                      : 0ULL)))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm 
        = ((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
              ? 0x7ffffffffffffULL : 0ULL) << 0xdU) 
           | (QData)((IData)(((0x1000U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                          << 0xcU)) 
                              | ((0x800U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            << 3U)) 
                                 | ((0x7e0U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 0x15U)) 
                                    | (0x1eU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 8U))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x1bU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_27;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x1cU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_28;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x1dU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_29;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x1eU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_30;
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x1fU] 
        = vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_31;
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_11 
        = ((0x40005013U != (0xfc00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                            << 0x1fU) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U)))) 
           & ((0x63U != (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                    >> 1U))) & ((0x40000033U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))) 
                                                & ((0x5033U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U)))) 
                                                   & ((0x5063U 
                                                       != 
                                                       (0x707fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U))) 
                                                      & ((0x200703bU 
                                                          != 
                                                          (0xfe00707fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                               << 0x1fU) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                 >> 1U)))) 
                                                         & ((0x6003U 
                                                             != 
                                                             (0x707fU 
                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                 >> 1U))) 
                                                            & ((0x200003bU 
                                                                != 
                                                                (0xfe00707fU 
                                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                     << 0x1fU) 
                                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                       >> 1U)))) 
                                                               & ((0x2006033U 
                                                                   != 
                                                                   (0xfe00707fU 
                                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                        << 0x1fU) 
                                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                          >> 1U)))) 
                                                                  & ((0x1023U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                          >> 1U))) 
                                                                     & ((0x17U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                             >> 1U))) 
                                                                        | (0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                               >> 1U))))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_11 
        = ((0x5013U == (0xfc00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                        << 0x1fU) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                        >> 1U)))) ? 0U
            : ((0x101bU == (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                            << 0x1fU) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))))
                ? 0U : ((0x4000501bU == (0xfe00707fU 
                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                             << 0x1fU) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 1U))))
                         ? 0U : ((0x40005013U == (0xfc00707fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U))))
                                  ? 0U : ((0x6013U 
                                           == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 1U)))
                                           ? 0U : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))
                                                    ? 2U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))
                                                     ? 2U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U)))
                                                      ? 2U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U)))
                                                       ? 2U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U)))
                                                        ? 2U
                                                        : 0U))))))))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_0_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_1_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (1U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_2_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (2U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_3_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (3U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_4_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_5_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (5U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_6_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (6U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_7_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (7U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_8_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (8U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_9_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (9U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_10_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xaU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_11_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xbU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_12_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xcU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_13_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xdU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_14_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xeU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_15_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0xfU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_16_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x10U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_17_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_18_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x12U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_19_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x13U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_20_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x14U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_21_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x15U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_22_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x16U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_23_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x17U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_24_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x18U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_25_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x19U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_26_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1aU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_27_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_28_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1cU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_29_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_30_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_31_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x1fU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_32_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x20U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_33_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x21U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_34_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x22U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_35_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x23U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_36_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x24U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_37_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x25U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_38_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x26U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_39_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x27U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_40_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x28U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_41_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x29U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_42_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2aU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_43_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_44_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2cU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_45_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_46_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2eU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_47_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x2fU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_48_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x30U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_49_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x31U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_50_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x32U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_51_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x33U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_52_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x34U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_53_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x35U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_54_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x36U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_55_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x37U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_56_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_57_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x39U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_58_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3aU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_59_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_60_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3cU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_61_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_62_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3eU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_63_T_3 
        = ((IData)(vlSelf->io_dmaster_rlast) & (0x3fU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U))));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_9 
        = ((0x2004033U == (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                             >> 1U))))
            ? 0x19U : ((0x1033U == (0xfe00707fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U))))
                        ? 6U : ((0x63U == (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U)))
                                 ? 0x1aU : ((0x6063U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U)))
                                             ? 7U : 
                                            ((0x7063U 
                                              == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))
                                              ? 0x1bU
                                              : ((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U)))
                                                  ? 5U
                                                  : 
                                                 ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))
                                                   ? 0x1cU
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))
                                                    ? 0xbU
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U))))
                                                     ? 0x1dU
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))))
                                                      ? 8U
                                                      : 0x1fU))))))))));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_9 
        = ((0x40000033U == (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                            << 0x1fU) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))))
            ? 0U : ((0x5033U == (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U))))
                     ? 0U : ((0x5063U == (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U)))
                              ? 0U : ((0x200703bU == 
                                       (0xfe00707fU 
                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                            << 0x1fU) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))))
                                       ? 0U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U)))
                                                ? 1U
                                                : (
                                                   (0x200003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U))))
                                                    ? 0U
                                                    : 
                                                   ((0x2006033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U))))
                                                     ? 0U
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U)))
                                                      ? 1U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U)))
                                                       ? 2U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U)))
                                                        ? 3U
                                                        : 0U))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Uimm 
        = (((QData)((IData)(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                             << 0x1fU) 
                                            | (0x7ffff000U 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 1U)))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm 
        = ((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
              ? 0xfffffffffffffULL : 0ULL) << 0xcU) 
           | (QData)((IData)((0xfffU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                         << 0xbU) | 
                                        (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                         >> 0x15U))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm 
        = ((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
              ? 0xfffffffffffffULL : 0ULL) << 0xcU) 
           | (QData)((IData)(((0xfe0U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 0x15U)))) 
                              | (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                          >> 8U))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_0 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_0_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_0_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_1 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_1_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_1_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_2 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_2_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_2_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_3 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_3_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_3_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_4 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_4_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_4_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_5 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_5_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_5_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_6 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_6_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_6_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_7 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_7_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_7_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_8 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_8_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_8_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_9 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_9_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_9_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_10 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_10_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_10_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_11 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_11_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_11_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_12 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_12_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_12_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_13 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_13_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_13_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_14 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_14_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_14_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_15 
        = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
            == vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_15_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_15_r));
    if ((0xdU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                           >> 4U)))) {
        ysyx_041728__DOT__iCache__DOT___sramSel_T_25 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13_r;
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_0 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_0_r;
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_0 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_0_r;
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_1 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_1_r;
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_1 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_1_r;
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_2 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_2_r;
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_2 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_2_r;
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_3 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_3_r;
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_3 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_3_r;
    } else {
        ysyx_041728__DOT__iCache__DOT___sramSel_T_25 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12_r)
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11_r)
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10_r)
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9_r)
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8_r)
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7_r)
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6_r)
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0_r)))))))))))));
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_0 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_0_r)
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_0_r)
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_0_r)
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_0_r)
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_0_r)
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_0_r)
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_0_r)
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_0_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_0_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_0_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_0_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_0_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_0_r)))))))))))));
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_0 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_0_r
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_0_r
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_0_r
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_0_r
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_0_r
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_0_r
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_0_r
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_0_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_0_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_0_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_0_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_0_r
                                                      : vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_0_r))))))))))));
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_1 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_1_r)
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_1_r)
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_1_r)
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_1_r)
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_1_r)
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_1_r)
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_1_r)
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_1_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_1_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_1_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_1_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_1_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_1_r)))))))))))));
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_1 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_1_r
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_1_r
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_1_r
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_1_r
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_1_r
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_1_r
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_1_r
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_1_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_1_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_1_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_1_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_1_r
                                                      : vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_1_r))))))))))));
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_2 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_2_r)
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_2_r)
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_2_r)
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_2_r)
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_2_r)
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_2_r)
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_2_r)
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_2_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_2_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_2_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_2_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_2_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_2_r)))))))))))));
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_2 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_2_r
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_2_r
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_2_r
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_2_r
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_2_r
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_2_r
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_2_r
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_2_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_2_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_2_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_2_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_2_r
                                                      : vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_2_r))))))))))));
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_3 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_3_r)
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_3_r)
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_3_r)
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_3_r)
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_3_r)
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_3_r)
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_3_r)
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_3_r)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_3_r)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_3_r)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_3_r)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_3_r)
                                                      : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_3_r)))))))))))));
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_3 
            = ((0xcU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                  >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_3_r
                : ((0xbU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                      >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_3_r
                    : ((0xaU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                          >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_3_r
                        : ((9U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_3_r
                            : ((8U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_3_r
                                : ((7U == (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_3_r
                                    : ((6U == (0x3fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                  >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_3_r
                                        : ((5U == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_3_r
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_3_r
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_3_r
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_3_r
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_3_r
                                                      : vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_3_r))))))))))));
    }
    __Vtemp17[0U] = (IData)((((QData)((IData)((7U & 
                                               (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                >> 0x10U)))) 
                              << 0x25U) | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                >> 5U)))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                   >> 3U)))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                      << 0x1dU) 
                                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                                        >> 3U)))
                                                                    ? 
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                                      << 0x1eU) 
                                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                                                        >> 2U)))
                                                                    : 
                                                                   ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                     << 0x1dU) 
                                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                                       >> 3U))))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U]) 
                                                                    | (1U 
                                                                       & ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                             >> 0xfU) 
                                                                            & ((0x80000000ULL 
                                                                                > 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                                                << 8U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                                                >> 0x18U)))) 
                                                                               | (0x8fffffffULL 
                                                                                < 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                                                << 8U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                                                >> 0x18U)))))) 
                                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                                              >> 2U)) 
                                                                          | vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U]))))))))));
    __Vtemp17[1U] = ((0xffffff00U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U] 
                                      << 0x10U) | (0xff00U 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                      >> 0x10U)))) 
                     | (IData)(((((QData)((IData)((7U 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                      >> 0x10U)))) 
                                  << 0x25U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                    >> 5U)))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                       >> 3U)))) 
                                                   << 0x22U) 
                                                  | (((QData)((IData)(
                                                                      ((0U 
                                                                        == 
                                                                        ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                          << 0x1dU) 
                                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                                            >> 3U)))
                                                                        ? 
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                                          << 0x1eU) 
                                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                                                            >> 2U)))
                                                                        : 
                                                                       ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                         << 0x1dU) 
                                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                                           >> 3U))))) 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((2U 
                                                                         & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U]) 
                                                                        | (1U 
                                                                           & ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                                                >> 0xfU) 
                                                                                & ((0x80000000ULL 
                                                                                > 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                                                << 8U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                                                >> 0x18U)))) 
                                                                                | (0x8fffffffULL 
                                                                                < 
                                                                                (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                                                << 8U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                                                >> 0x18U)))))) 
                                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                                                >> 2U)) 
                                                                              | vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U]))))))))) 
                                >> 0x20U)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___pipMEM2WBReg_T[0U] 
        = __Vtemp17[0U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___pipMEM2WBReg_T[1U] 
        = __Vtemp17[1U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___pipMEM2WBReg_T[2U] 
        = (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
             << 0x15U) | (0x1fe000U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0xbU))) | 
           ((0x1f00U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                        >> 0xbU)) | (0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U] 
                                              >> 0x10U))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___pipMEM2WBReg_T[3U] 
        = ((0x1fffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                       >> 0xbU)) | ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U] 
                                     << 0x15U) | (0x1fe000U 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     >> 0xbU))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___pipMEM2WBReg_T[4U] 
        = ((0x1fffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U] 
                       >> 0xbU)) | ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                     << 0x15U) | (0x1fe000U 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U] 
                                                     >> 0xbU))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT___pipMEM2WBReg_T[5U] 
        = ((0x2000U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                       >> 0xbU)) | (0x1fffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                               >> 0xbU)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__DPIC_RegRead_ins__DOT__regfile[0x20U] 
        = (QData)((IData)(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                            << 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                         >> 2U))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardC 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
              >> 5U) & ((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                  >> 0x13U)) == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 9U)))) 
            & (0U != (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                               >> 9U)))) ? 2U : (((
                                                   ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                     >> 4U) 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                           >> 8U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                           >> 9U)))) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                          >> 9U)))) 
                                                  & (((0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                          >> 0x13U)) 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                          >> 9U))) 
                                                     | (~ 
                                                        (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                         >> 5U))))
                                                  ? 1U
                                                  : 
                                                 (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                           >> 1U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                           >> 9U)))) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                          >> 9U))))
                                                   ? 3U
                                                   : 0U)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardB 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
              >> 5U) & ((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                  >> 0x13U)) == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                    >> 3U)))) 
            & (0U != (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                               >> 3U)))) ? 2U : (((
                                                   ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                     >> 4U) 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                           >> 8U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                           >> 3U)))) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                          >> 3U)))) 
                                                  & (((0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                          >> 0x13U)) 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                          >> 3U))) 
                                                     | (~ 
                                                        (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                         >> 5U))))
                                                  ? 1U
                                                  : 
                                                 (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                           >> 1U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                           >> 3U)))) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                          >> 3U))))
                                                   ? 3U
                                                   : 0U)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardA 
        = ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
              >> 5U) & ((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                  >> 0x13U)) == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                    >> 8U)))) 
            & (0U != (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                               >> 8U)))) ? 2U : (((
                                                   ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                     >> 4U) 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                           >> 8U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                           >> 8U)))) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                          >> 8U)))) 
                                                  & (((0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                          >> 0x13U)) 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                          >> 8U))) 
                                                     | (~ 
                                                        (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                         >> 5U))))
                                                  ? 1U
                                                  : 
                                                 (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                           >> 1U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                           >> 8U)))) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                          >> 8U))))
                                                   ? 3U
                                                   : 0U)));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___dinMux_T_3 
        = ((1U == (3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                         >> 2U))) ? (QData)((IData)(
                                                    ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                      << 0x18U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                        >> 8U))))
            : (((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U])) 
                << 0x33U) | (((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[3U])) 
                              << 0x13U) | ((QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U])) 
                                           >> 0xdU))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
        = ((0x3fU >= (0x38U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                               >> 0xaU))) ? (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata_r 
                                             >> (0x38U 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                    >> 0xaU)))
            : 0ULL);
    __Vtemp52[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                          ? 0xffffffffU : 0U) & (~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                       | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                            ? 0xffffffffU : 0U) & (1U 
                                                   | ((~ 
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                      << 1U)))) 
                      | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
                           ? 0xffffffffU : 0U) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                     | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                          ? 0xffffffffU : 0U) & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                                 << 1U)));
    __Vtemp52[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                          ? 0xffffffffU : 0U) & (~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                       | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                            ? 0xffffffffU : 0U) & (
                                                   ((~ 
                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                    >> 0x1fU) 
                                                   | ((~ 
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                      << 1U)))) 
                      | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
                           ? 0xffffffffU : 0U) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                     | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                          ? 0xffffffffU : 0U) & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                                    << 1U))));
    __Vtemp52[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                          ? 0xffffffffU : 0U) & (~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                       | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                            ? 0xffffffffU : 0U) & (
                                                   ((~ 
                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                    >> 0x1fU) 
                                                   | ((~ 
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                      << 1U)))) 
                      | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
                           ? 0xffffffffU : 0U) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                     | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                          ? 0xffffffffU : 0U) & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                                    << 1U))));
    __Vtemp52[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                          ? 0xffffffffU : 0U) & (~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                       | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                            ? 0xffffffffU : 0U) & (
                                                   ((~ 
                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                    >> 0x1fU) 
                                                   | ((~ 
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                                      << 1U)))) 
                      | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
                           ? 0xffffffffU : 0U) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                     | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                          ? 0xffffffffU : 0U) & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                                    << 1U))));
    __Vtemp52[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                          ? 0xfU : 0U) & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                       | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                            ? 0xfU : 0U) & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                             >> 0x1fU) 
                                            | (0xeU 
                                               & ((~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                  << 1U))))) 
                      | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
                           ? 0xfU : 0U) & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                     | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                     >> 2U)) & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                          ? 0xfU : 0U) & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                           >> 0x1fU) 
                                          | (0xeU & 
                                             (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U] 
                                              << 1U)))));
    VL_EXTEND_WW(133,132, __Vtemp53, __Vtemp52);
    VL_EXTEND_WW(133,132, __Vtemp54, vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg);
    VL_ADD_W(5, __Vtemp55, __Vtemp53, __Vtemp54);
    VL_EXTEND_WI(133,1, __Vtemp56, ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                    | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)));
    VL_ADD_W(5, __Vtemp57, __Vtemp55, __Vtemp56);
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__addIns__DOT__res[0U] 
        = __Vtemp57[0U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__addIns__DOT__res[1U] 
        = __Vtemp57[1U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__addIns__DOT__res[2U] 
        = __Vtemp57[2U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__addIns__DOT__res[3U] 
        = __Vtemp57[3U];
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__addIns__DOT__res[4U] 
        = (0x1fU & __Vtemp57[4U]);
    if (vlSelf->ysyx_041728__DOT__dmaIns__DOT__DMABuzy) {
        vlSelf->io_dmaster_awburst = 0U;
        vlSelf->io_mmio_rsize = 3U;
        vlSelf->io_mmio_addr = vlSelf->ysyx_041728__DOT__dmaIns__DOT__addrCnt;
        vlSelf->io_mmio_wen = (1U & ((2U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState)) 
                                     & (IData)(vlSelf->io_dmaster_rvalid)));
    } else {
        vlSelf->io_dmaster_awburst = 1U;
        vlSelf->io_mmio_rsize = (3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                       >> 0x10U));
        vlSelf->io_mmio_addr = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                 << 8U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                           >> 0x18U));
        vlSelf->io_mmio_wen = (1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                     >> 6U));
    }
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_doutWB_T_51 
        = ((0x1aU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                               >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_26
            : ((0x19U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                   >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_25
                : ((0x18U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                       >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_24
                    : ((0x17U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                           >> 1U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_23
                        : ((0x16U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                               >> 1U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_22
                            : ((0x15U == (0x1fU & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                   >> 1U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                 >> 1U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                     >> 1U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                >> 1U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                    >> 1U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                        >> 1U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                         >> 1U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                          >> 1U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_14
                                                      : ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_doutWB_T_25)))))))))))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_0_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_0_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_0_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_0_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_1_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_1_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_1_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_1_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_2_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_2_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_2_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_2_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_3_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_3_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_3_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_3_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_4_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_4_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_4_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_4_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_5_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_5_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_5_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_5_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_6_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_6_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_6_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_6_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_7_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_7_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_7_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_7_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_8_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_8_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_8_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_8_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_9_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_9_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_9_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_9_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_10_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_10_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_10_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_10_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_11_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_11_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_11_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_11_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_12_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_12_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_12_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_12_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_13_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_13_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_13_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_13_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_14_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_14_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_14_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_14_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_15_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_15_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_15_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_15_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_16_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_16_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_16_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_16_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_17_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_17_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_17_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_17_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_18_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_18_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_18_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_18_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_19_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_19_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_19_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_19_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_20_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_20_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_20_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_20_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_21_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_21_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_21_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_21_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_22_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_22_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_22_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_22_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_23_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_23_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_23_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_23_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_24_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_24_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_24_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_24_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_25_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_25_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_25_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_25_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_26_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_26_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_26_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_26_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_27_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_27_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_27_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_27_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_28_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_28_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_28_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_28_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_29_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_29_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_29_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_29_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_30_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_30_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_30_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_30_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_31_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_31_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_31_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_31_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_32_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_32_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_32_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_32_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_33_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_33_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_33_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_33_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_34_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_34_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_34_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_34_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_35_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_35_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_35_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_35_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_36_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_36_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_36_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_36_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_37_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_37_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_37_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_37_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_38_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_38_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_38_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_38_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_39_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_39_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_39_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_39_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_40_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_40_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_40_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_40_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_41_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_41_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_41_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_41_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_42_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_42_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_42_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_42_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_43_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_43_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_43_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_43_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_44_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_44_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_44_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_44_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_45_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_45_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_45_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_45_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_46_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_46_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_46_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_46_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_47_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_47_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_47_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_47_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_48_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_48_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_48_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_48_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_49_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_49_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_49_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_49_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_50_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_50_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_50_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_50_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_51_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_51_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_51_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_51_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_52_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_52_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_52_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_52_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_53_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_53_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_53_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_53_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_54_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_54_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_54_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_54_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_55_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_55_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_55_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_55_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_56_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_56_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_56_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_56_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_57_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_57_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_57_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_57_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_58_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_58_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_58_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_58_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_59_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_59_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_59_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_59_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_60_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_60_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_60_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_60_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_61_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_61_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_61_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_61_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_62_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_62_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_62_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_62_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_63_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_63_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_63_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___selArrayWire_63_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63_r))) 
           & (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)));
    ysyx_041728__DOT__dCache__DOT___sramSel_T_51 = 
        ((0x1aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                              << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                        >> 0x1cU))))
          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26_r)
          : ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                  << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                            >> 0x1cU))))
              ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25_r)
              : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                      << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1cU))))
                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24_r)
                  : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                          << 4U) | 
                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU))))
                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23_r)
                      : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 4U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1cU))))
                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22_r)
                          : ((0x15U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                              ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21_r)
                              : ((0x14U == (0x3fU & 
                                            ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 4U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x1cU))))
                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20_r)
                                  : ((0x13U == (0x3fU 
                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19_r)
                                      : ((0x12U == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18_r)
                                          : ((0x11U 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                              ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17_r)
                                              : ((0x10U 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16_r)
                                                  : 
                                                 ((0xfU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 4U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1cU))))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15_r)
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14_r)
                                                    : (IData)(ysyx_041728__DOT__dCache__DOT___sramSel_T_25))))))))))))));
    vlSelf->io_mmio_data_write = ((IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__DMABuzy)
                                   ? vlSelf->io_dmaster_rdata
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[0U]))));
    VL_EXTEND_WQ(128,64, __Vtemp60, (((QData)((IData)(
                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[0U]))));
    if ((0x8000000U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) {
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[0U] = 0U;
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[1U] = 0U;
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[2U] 
            = (IData)((((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[0U]))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[3U] 
            = (IData)(((((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[0U]))) 
                       >> 0x20U));
    } else {
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[0U] 
            = __Vtemp60[0U];
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[1U] 
            = __Vtemp60[1U];
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[2U] 
            = __Vtemp60[2U];
        vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[3U] 
            = __Vtemp60[3U];
    }
    vlSelf->io_mmio_mask = ((IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__DMABuzy)
                             ? 0xffU : (0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1)));
    __Vtemp63[2U] = (IData)((((QData)((IData)(((((0x80U 
                                                  & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                  ? 0U
                                                  : 0xffU) 
                                                << 0x18U) 
                                               | ((((0x40U 
                                                     & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                     ? 0U
                                                     : 0xffU) 
                                                   << 0x10U) 
                                                  | ((((0x20U 
                                                        & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                        ? 0U
                                                        : 0xffU) 
                                                      << 8U) 
                                                     | ((0x10U 
                                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                         ? 0U
                                                         : 0xffU)))))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((((8U 
                                                              & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                              ? 0U
                                                              : 0xffU) 
                                                            << 0x18U) 
                                                           | ((((4U 
                                                                 & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                                 ? 0U
                                                                 : 0xffU) 
                                                               << 0x10U) 
                                                              | ((((2U 
                                                                    & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                                    ? 0U
                                                                    : 0xffU) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                                     ? 0U
                                                                     : 0xffU))))))));
    __Vtemp63[3U] = (IData)(((((QData)((IData)(((((0x80U 
                                                   & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                   ? 0U
                                                   : 0xffU) 
                                                 << 0x18U) 
                                                | ((((0x40U 
                                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                      ? 0U
                                                      : 0xffU) 
                                                    << 0x10U) 
                                                   | ((((0x20U 
                                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                         ? 0U
                                                         : 0xffU) 
                                                       << 8U) 
                                                      | ((0x10U 
                                                          & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                          ? 0U
                                                          : 0xffU)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((8U 
                                                               & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                               ? 0U
                                                               : 0xffU) 
                                                             << 0x18U) 
                                                            | ((((4U 
                                                                  & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                                  ? 0U
                                                                  : 0xffU) 
                                                                << 0x10U) 
                                                               | ((((2U 
                                                                     & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                                     ? 0U
                                                                     : 0xffU) 
                                                                   << 8U) 
                                                                  | ((1U 
                                                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                                      ? 0U
                                                                      : 0xffU))))))) 
                             >> 0x20U));
    if ((0x8000000U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) {
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[0U] = 0xffffffffU;
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[1U] = 0xffffffffU;
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[2U] 
            = __Vtemp63[2U];
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[3U] 
            = __Vtemp63[3U];
    } else {
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[0U] 
            = ((((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                  ? 0U : 0xffU) << 0x18U) | ((((4U 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                ? 0U
                                                : 0xffU) 
                                              << 0x10U) 
                                             | ((((2U 
                                                   & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                   ? 0U
                                                   : 0xffU) 
                                                 << 8U) 
                                                | ((1U 
                                                    & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                    ? 0U
                                                    : 0xffU))));
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[1U] 
            = ((((0x80U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                  ? 0U : 0xffU) << 0x18U) | ((((0x40U 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                ? 0U
                                                : 0xffU) 
                                              << 0x10U) 
                                             | ((((0x20U 
                                                   & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                   ? 0U
                                                   : 0xffU) 
                                                 << 8U) 
                                                | ((0x10U 
                                                    & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                                    ? 0U
                                                    : 0xffU))));
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[2U] = 0xffffffffU;
        vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[3U] = 0xffffffffU;
    }
    if ((0x1aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU))))) {
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_0 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_0_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_0 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_0_r;
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_1 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_1_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_1 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_1_r;
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_2 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_2_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_2 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_2_r;
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_3 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_3_r;
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_3 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_3_r;
    } else {
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_0 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_0_r)
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_0_r)
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_0_r)
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_0_r)
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_0_r)
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_0_r)
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_0_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_0_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_0_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_0_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_0_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_0_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_0)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_0 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_0_r
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_0_r
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_0_r
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_0_r
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_0_r
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_0_r
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_0_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_0_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_0_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_0_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_0_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_0_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_0))))))))))));
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_1 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_1_r)
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_1_r)
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_1_r)
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_1_r)
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_1_r)
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_1_r)
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_1_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_1_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_1_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_1_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_1_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_1_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_1)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_1 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_1_r
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_1_r
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_1_r
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_1_r
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_1_r
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_1_r
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_1_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_1_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_1_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_1_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_1_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_1_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_1))))))))))));
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_2 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_2_r)
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_2_r)
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_2_r)
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_2_r)
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_2_r)
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_2_r)
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_2_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_2_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_2_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_2_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_2_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_2_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_2)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_2 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_2_r
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_2_r
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_2_r
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_2_r
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_2_r
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_2_r
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_2_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_2_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_2_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_2_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_2_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_2_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_2))))))))))));
        ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_3 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_3_r)
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_3_r)
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_3_r)
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_3_r)
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_3_r)
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_3_r)
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_3_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_3_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_3_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_3_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_3_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_3_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_25_3)))))))))))));
        ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_3 
            = ((0x19U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_3_r
                : ((0x18U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_3_r
                    : ((0x17U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_3_r
                        : ((0x16U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_3_r
                            : ((0x15U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_3_r
                                : ((0x14U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_3_r
                                    : ((0x13U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_3_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_3_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_3_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_3_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_3_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_3_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_25_3))))))))))));
    }
    vlSelf->ysyx_041728__DOT__clintIns__DOT__intrTimeCnt 
        = ((vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime_r 
            >= vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp_r) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__startTimeCnt));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mepcval_T_18 
        = ((0x20U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
            ? (QData)((IData)((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                        >> 8U)))) : 0ULL);
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT___multiplierReg_T 
        = ((0U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg)) 
           & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns_io_mul_valid));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__block1 
        = (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_valid) 
            & (3U != (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))) 
           | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns_io_mul_valid) 
              & (2U != (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T 
        = (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_valid) 
            << 1U) | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_divw));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_28 
        = ((0x3023U != (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 1U))) & ((0x200503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))) 
                                               | ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U))) 
                                                  | ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))) 
                                                     | ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))) 
                                                        | ((0x2005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                 << 0x1fU) 
                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                   >> 1U)))) 
                                                           | ((0x4000003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                    << 0x1fU) 
                                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                      >> 1U)))) 
                                                              | ((0x5003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                      >> 1U))) 
                                                                 | ((3U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                         >> 1U))) 
                                                                    | ((0x7063U 
                                                                        != 
                                                                        (0x707fU 
                                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                            >> 1U))) 
                                                                       & ((0x23U 
                                                                           != 
                                                                           (0x707fU 
                                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                               >> 1U))) 
                                                                          & ((0x33U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                             | ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                & ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_11))))))))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout1_T_51 
        = ((0x1aU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                               >> 0x10U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_26
            : ((0x19U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 0x10U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_25
                : ((0x18U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 0x10U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_24
                    : ((0x17U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 0x10U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_23
                        : ((0x16U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 0x10U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_22
                            : ((0x15U == (0x1fU & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 0x10U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 0x10U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 0x10U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 0x10U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0x10U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 0x10U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 0x10U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 0x10U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_14
                                                      : ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout1_T_25)))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout2_T_51 
        = ((0x1aU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                               >> 0x15U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_26
            : ((0x19U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 0x15U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_25
                : ((0x18U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 0x15U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_24
                    : ((0x17U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 0x15U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_23
                        : ((0x16U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 0x15U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_22
                            : ((0x15U == (0x1fU & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 0x15U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 0x15U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 0x15U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 0x15U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0x15U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 0x15U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 0x15U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 0x15U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_14
                                                      : ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout2_T_25)))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_rdDout_T_51 
        = ((0x1aU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                               >> 8U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_26
            : ((0x19U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 8U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_25
                : ((0x18U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 8U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_24
                    : ((0x17U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 8U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_23
                        : ((0x16U == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 8U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_22
                            : ((0x15U == (0x1fU & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 8U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 8U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 8U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 8U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 8U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 8U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 8U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 8U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_14
                                                      : ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_rdDout_T_25)))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_23 
        = ((0x4003U != (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 1U))) & ((0x2005033U 
                                                != 
                                                (0xfe00707fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))) 
                                               & ((0x4000003bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                        << 0x1fU) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U)))) 
                                                  & ((0x5003U 
                                                      != 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))) 
                                                     & ((3U 
                                                         != 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))) 
                                                        & ((0x7063U 
                                                            != 
                                                            (0x707fU 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 1U))) 
                                                           & ((0x23U 
                                                               != 
                                                               (0x707fU 
                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                   >> 1U))) 
                                                              & ((0x33U 
                                                                  != 
                                                                  (0xfe00707fU 
                                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                       << 0x1fU) 
                                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                         >> 1U)))) 
                                                                 & ((0x2023U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                         >> 1U))) 
                                                                    & ((0x6033U 
                                                                        != 
                                                                        (0xfe00707fU 
                                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                             << 0x1fU) 
                                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                               >> 1U)))) 
                                                                       & ((0x2004033U 
                                                                           != 
                                                                           (0xfe00707fU 
                                                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                          & ((0x4033U 
                                                                              != 
                                                                              (0xfe00707fU 
                                                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                             & (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_11)))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_22 
        = ((0x13U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                 >> 1U))) ? 0U : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))
                                                     ? 2U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U)))
                                                      ? 2U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                             << 0x1fU) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 1U))))
                                                        ? 0U
                                                        : 
                                                       ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                              << 0x1fU) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 1U))))
                                                         ? 0U
                                                         : 
                                                        ((0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1bU 
                                                            == 
                                                            (0x707fU 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 1U)))
                                                            ? 0U
                                                            : (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_11))))))))))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_0_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_0_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_0_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_0_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_1_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_1_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_1_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_1_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_2_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_2_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_2_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_2_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_3_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_3_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_3_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_3_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_4_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_4_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_4_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_4_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_5_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_5_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_5_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_5_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_6_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_6_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_6_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_6_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_7_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_7_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_7_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_7_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_8_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_8_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_8_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_8_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_9_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_9_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_9_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_9_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_10_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_10_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_10_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_10_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_11_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_11_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_11_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_11_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_12_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_12_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_12_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_12_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_13_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_13_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_13_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_13_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_14_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_14_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_14_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_14_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_15_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_15_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_15_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_15_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_16_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_16_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_16_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_16_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_17_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_17_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_17_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_17_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_18_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_18_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_18_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_18_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_19_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_19_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_19_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_19_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_20_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_20_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_20_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_20_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_21_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_21_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_21_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_21_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_22_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_22_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_22_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_22_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_23_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_23_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_23_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_23_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_24_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_24_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_24_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_24_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_25_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_25_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_25_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_25_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_26_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_26_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_26_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_26_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_27_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_27_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_27_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_27_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_28_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_28_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_28_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_28_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_29_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_29_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_29_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_29_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_30_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_30_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_30_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_30_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_31_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_31_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_31_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_31_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_32_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_32_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_32_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_32_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_33_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_33_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_33_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_33_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_34_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_34_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_34_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_34_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_35_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_35_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_35_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_35_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_36_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_36_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_36_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_36_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_37_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_37_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_37_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_37_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_38_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_38_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_38_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_38_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_39_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_39_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_39_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_39_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_40_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_40_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_40_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_40_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_41_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_41_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_41_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_41_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_42_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_42_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_42_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_42_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_43_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_43_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_43_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_43_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_44_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_44_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_44_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_44_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_45_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_45_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_45_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_45_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_46_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_46_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_46_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_46_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_47_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_47_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_47_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_47_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_48_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_48_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_48_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_48_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_49_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_49_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_49_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_49_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_50_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_50_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_50_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_50_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_51_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_51_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_51_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_51_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_52_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_52_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_52_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_52_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_53_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_53_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_53_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_53_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_54_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_54_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_54_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_54_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_55_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_55_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_55_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_55_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_56_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_56_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_56_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_56_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_57_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_57_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_57_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_57_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_58_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_58_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_58_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_58_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_59_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_59_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_59_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_59_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_60_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_60_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_60_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_60_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_61_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_61_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_61_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_61_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_62_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_62_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_62_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_62_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_0_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_63_T_3) 
            & (0U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_1_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_63_T_3) 
            & (1U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_2_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_63_T_3) 
            & (2U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_3_T_4 
        = (((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___selArrayWire_63_T_3) 
            & (3U == (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63_r))) 
           & (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_20 
        = ((0x200603bU == (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                             >> 1U))))
            ? 0x14U : ((0x200403bU == (0xfe00707fU 
                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                             >> 1U))))
                        ? 0x15U : ((0x2000033U == (0xfe00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U))))
                                    ? 0x16U : ((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U))))
                                                ? 3U
                                                : (
                                                   (0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U))))
                                                    ? 0xeU
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U))))
                                                     ? 0xfU
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))))
                                                      ? 0xcU
                                                      : 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                            << 0x1fU) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U))))
                                                       ? 5U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                             << 0x1fU) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 1U))))
                                                        ? 0x17U
                                                        : 
                                                       ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                              << 0x1fU) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 1U))))
                                                         ? 4U
                                                         : 
                                                        ((0x2006033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                               << 0x1fU) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                 >> 1U))))
                                                          ? 0x18U
                                                          : (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_9))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_20 
        = ((0x5003U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 1U))) ? 1U : 
           ((3U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                               >> 1U))) ? 1U : ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))
                                                 ? 0U
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U)))
                                                  ? 1U
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                        << 0x1fU) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))))
                                                   ? 0U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U))))
                                                     ? 0U
                                                     : 
                                                    ((0x2004033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))))
                                                      ? 0U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                            << 0x1fU) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U))))
                                                       ? 0U
                                                       : 
                                                      ((0x40005013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                             << 0x1fU) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 1U))))
                                                        ? 1U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U)))
                                                         ? 0U
                                                         : (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_9))))))))))));
    ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT___io_imme_T_7 
        = ((0x37U == (0x7fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                               >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Uimm
            : ((0x1023U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm
                : ((0x6fU == (0x7fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 1U))) ? (
                                                   (((1U 
                                                      & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
                                                      ? 0x7ffffffffffULL
                                                      : 0ULL) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                          << 0x14U)) 
                                                                      | ((0xff000U 
                                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                             >> 1U)) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 0xaU)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 0x15U))))))))
                    : ((0x1073U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 1U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                        : ((0x2073U == (0x707fU & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                            : ((0x6073U == (0x707fU 
                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 1U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                : ((0x7073U == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U)))
                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                    : ((0x3073U == 
                                        (0x707fU & 
                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                          >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                        : 0ULL))))))));
    ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT___io_ifjump_T_31 
        = (((((((((((((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_0) 
                          & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire_r)) 
                             | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire_r)))) 
                         | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_1) 
                            & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire_r)) 
                               | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire_r))))) 
                        | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_2) 
                           & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire_r)) 
                              | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire_r))))) 
                       | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_3) 
                          & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire_r)) 
                             | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire_r))))) 
                      | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_4) 
                         & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire_r)) 
                            | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire_r))))) 
                     | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_5) 
                        & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire_r)) 
                           | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire_r))))) 
                    | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_6) 
                       & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire_r)) 
                          | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire_r))))) 
                   | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_7) 
                      & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire_r)) 
                         | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire_r))))) 
                  | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_8) 
                     & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire_r)) 
                        | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire_r))))) 
                 | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_9) 
                    & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire_r)) 
                       | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire_r))))) 
                | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_10) 
                   & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire_r)) 
                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire_r))))) 
               | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_11) 
                  & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire_r)) 
                     | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire_r))))) 
              | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_12) 
                 & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire_r)) 
                    | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire_r))))) 
             | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_13) 
                & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire_r)) 
                   | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire_r))))) 
            | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_14) 
               & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire_r)) 
                  | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire_r))))) 
           | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_15) 
              & ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire_r)) 
                 | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire_r)))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitif 
        = ((((((((((((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_0) 
                         | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_1)) 
                        | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_2)) 
                       | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_3)) 
                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_4)) 
                     | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_5)) 
                    | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_6)) 
                   | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_7)) 
                  | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_8)) 
                 | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_9)) 
                | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_10)) 
               | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_11)) 
              | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_12)) 
             | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_13)) 
            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_14)) 
           | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_15));
    if ((0x1aU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U)))) {
        ysyx_041728__DOT__iCache__DOT___sramSel_T_51 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26_r;
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_0 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_0_r;
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_0 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_0_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_1 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_1_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_1 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_1_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_2 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_2_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_2 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_2_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_3 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_3_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_3 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_3_r;
    } else {
        ysyx_041728__DOT__iCache__DOT___sramSel_T_51 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25_r)
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24_r)
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23_r)
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22_r)
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21_r)
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20_r)
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14_r)
                                                      : (IData)(ysyx_041728__DOT__iCache__DOT___sramSel_T_25)))))))))))));
        ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_0 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_0_r)
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_0_r)
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_0_r)
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_0_r)
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_0_r)
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_0_r)
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_0_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_0_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_0_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_0_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_0_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_0_r)
                                                      : (IData)(ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_0)))))))))))));
        ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_0 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_0_r
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_0_r
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_0_r
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_0_r
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_0_r
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_0_r
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_0_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_0_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_0_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_0_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_0_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_0_r
                                                      : ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_0))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_1 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_1_r)
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_1_r)
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_1_r)
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_1_r)
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_1_r)
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_1_r)
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_1_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_1_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_1_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_1_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_1_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_1_r)
                                                      : (IData)(ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_1)))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_1 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_1_r
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_1_r
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_1_r
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_1_r
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_1_r
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_1_r
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_1_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_1_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_1_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_1_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_1_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_1_r
                                                      : ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_1))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_2 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_2_r)
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_2_r)
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_2_r)
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_2_r)
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_2_r)
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_2_r)
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_2_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_2_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_2_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_2_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_2_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_2_r)
                                                      : (IData)(ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_2)))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_2 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_2_r
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_2_r
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_2_r
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_2_r
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_2_r
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_2_r
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_2_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_2_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_2_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_2_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_2_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_2_r
                                                      : ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_2))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_3 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_3_r)
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_3_r)
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_3_r)
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_3_r)
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_3_r)
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_3_r)
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_3_r)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_3_r)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_3_r)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_3_r)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_3_r)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_3_r)
                                                      : (IData)(ysyx_041728__DOT__iCache__DOT___vMuxOut_T_25_3)))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_3 
            = ((0x19U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_3_r
                : ((0x18U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_3_r
                    : ((0x17U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_3_r
                        : ((0x16U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_3_r
                            : ((0x15U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_3_r
                                : ((0x14U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_3_r
                                    : ((0x13U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_3_r
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_3_r
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_3_r
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_3_r
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_3_r
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_3_r
                                                      : ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_25_3))))))))))));
    }
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__memData_ins_io_rdata_ext 
        = ((6U == (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                         >> 5U))) ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata))
            : ((5U == (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                             >> 5U))) ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata))))
                : ((4U == (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                 >> 5U))) ? (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata))))
                    : ((3U == (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                     >> 5U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata
                        : ((2U == (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         >> 5U))) ? 
                           (((QData)((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                             >> 0x1fU)))
                                               ? 0xffffffffU
                                               : 0U))) 
                             << 0x20U) | (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata)))
                            : ((1U == (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                             >> 5U)))
                                ? ((((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                    >> 0xfU)))
                                      ? 0xffffffffffffULL
                                      : 0ULL) << 0x10U) 
                                   | (QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata)))))
                                : ((0U == (7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                 >> 5U)))
                                    ? ((((1U & (IData)(
                                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                        >> 7U)))
                                          ? 0xffffffffffffffULL
                                          : 0ULL) << 8U) 
                                       | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata)))))
                                    : 0ULL)))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB 
        = ((0x1fU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                               >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_31
            : ((0x1eU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                   >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_30
                : ((0x1dU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                       >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_29
                    : ((0x1cU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                           >> 1U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_28
                        : ((0x1bU == (0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                               >> 1U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_27
                            : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_doutWB_T_51)))));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_2 = 
        ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_0_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_4 = 
        ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_1_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_6 = 
        ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_2_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_8 = 
        ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_0_3_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_11 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_13 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_15 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_17 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_1_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_20 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_22 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_24 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_26 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_2_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_29 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_31 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_33 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_35 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_3_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_38 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_40 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_42 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_44 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_4_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_47 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_49 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_51 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_53 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_5_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_56 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_58 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_60 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_62 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_6_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_65 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_67 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_69 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_71 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_7_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_74 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_76 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_78 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_80 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_8_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_83 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_85 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_87 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_89 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_9_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_92 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_94 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_96 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_98 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_10_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_101 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_103 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_105 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_107 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_11_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_110 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_112 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_114 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_116 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_12_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_119 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_121 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_123 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_125 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_13_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_128 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_130 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_132 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_134 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_14_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_137 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_139 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_141 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_143 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_15_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_146 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_148 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_150 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_152 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_16_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_155 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_157 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_159 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_161 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_17_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_164 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_166 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_168 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_170 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_18_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_173 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_175 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_177 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_179 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_19_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_182 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_184 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_186 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_188 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_20_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_191 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_193 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_195 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_197 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_21_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_200 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_202 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_204 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_206 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_22_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_209 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_211 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_213 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_215 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_23_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_218 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_220 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_222 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_224 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_24_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_227 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_229 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_231 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_233 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_25_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_236 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_238 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_240 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_242 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_26_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_245 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_247 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_249 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_251 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_27_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_254 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_256 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_258 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_260 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_28_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_263 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_265 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_267 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_269 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_29_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_272 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_274 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_276 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_278 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_30_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_281 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_283 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_285 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_287 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_31_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_290 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_292 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_294 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_296 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_32_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_299 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_301 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_303 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_305 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_33_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_308 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_310 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_312 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_314 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_34_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_317 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_319 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_321 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_323 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_35_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_326 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_328 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_330 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_332 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_36_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_335 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_337 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_339 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_341 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_37_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_344 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_346 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_348 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_350 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_38_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_353 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_355 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_357 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_359 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_39_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_362 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_364 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_366 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_368 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_40_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_371 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_373 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_375 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_377 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_41_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_380 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_382 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_384 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_386 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_42_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_389 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_391 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_393 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_395 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_43_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_398 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_400 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_402 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_404 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_44_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_407 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_409 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_411 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_413 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_45_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_416 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_418 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_420 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_422 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_46_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_425 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_427 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_429 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_431 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_47_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_434 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_436 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_438 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_440 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_48_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_443 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_445 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_447 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_449 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_49_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_452 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_454 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_456 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_458 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_50_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_461 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_463 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_465 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_467 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_51_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_470 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_472 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_474 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_476 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_52_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_479 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_481 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_483 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_485 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_53_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_488 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_490 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_492 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_494 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_54_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_497 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_499 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_501 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_503 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_55_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_506 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_508 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_510 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_512 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_56_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_515 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_517 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_519 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_521 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_57_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_524 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_526 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_528 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_530 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_58_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_533 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_535 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_537 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_539 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_59_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_542 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_544 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_546 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_548 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_60_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_551 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_553 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_555 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_557 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_61_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_560 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_562 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_564 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_566 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_62_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_569 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_0_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_571 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_1_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_573 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_2_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___GEN_575 
        = ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___tagArrayWire_63_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_3_r));
    vlSelf->ysyx_041728__DOT__dCache__DOT___sramSel_T_77 
        = ((0x27U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                          >> 0x1cU))))
            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39_r)
            : ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38_r)
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37_r)
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36_r)
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35_r)
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34_r)
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33_r)
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32_r)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31_r)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30_r)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29_r)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28_r)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___sramSel_T_51))))))))))))));
    if ((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) {
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[0U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[1U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[2U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[3U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[0U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[1U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[2U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[3U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[0U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[1U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[2U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[3U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0xffffffffU
                : 0U);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U] 
            = ((IData)(vlSelf->io_dmaster_rlast) ? 0U
                : 0xffffffffU);
    } else {
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[0U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[0U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[1U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[1U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[2U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[2U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[3U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[3U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[0U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[0U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[1U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[1U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[2U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[2U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[3U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[3U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[0U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[0U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[1U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[1U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[2U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[2U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[3U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[3U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[0U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[1U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[2U];
        vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U] 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite[3U];
    }
    if ((0x27U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                             << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                       >> 0x1cU))))) {
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_0 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_0_r;
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_0 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_0_r;
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_1 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_1_r;
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_1 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_1_r;
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_2 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_2_r;
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_2 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_2_r;
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_3 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_3_r;
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_3 
            = vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_3_r;
    } else {
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_0 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_0_r)
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_0_r)
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_0_r)
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_0_r)
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_0_r)
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_0_r)
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_0_r)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_0_r)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_0_r)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_0_r)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_0_r)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_0_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_0)))))))))))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_0 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_0_r
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_0_r
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_0_r
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_0_r
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_0_r
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_0_r
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_0_r
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_0_r
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_0_r
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_0_r
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_0_r
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_0_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_0))))))))))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_1 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_1_r)
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_1_r)
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_1_r)
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_1_r)
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_1_r)
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_1_r)
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_1_r)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_1_r)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_1_r)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_1_r)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_1_r)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_1_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_1)))))))))))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_1 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_1_r
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_1_r
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_1_r
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_1_r
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_1_r
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_1_r
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_1_r
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_1_r
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_1_r
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_1_r
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_1_r
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_1_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_1))))))))))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_2 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_2_r)
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_2_r)
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_2_r)
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_2_r)
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_2_r)
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_2_r)
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_2_r)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_2_r)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_2_r)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_2_r)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_2_r)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_2_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_2)))))))))))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_2 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_2_r
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_2_r
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_2_r
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_2_r
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_2_r
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_2_r
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_2_r
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_2_r
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_2_r
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_2_r
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_2_r
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_2_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_2))))))))))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_77_3 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_3_r)
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_3_r)
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_3_r)
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_3_r)
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_3_r)
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_3_r)
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_3_r)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_3_r)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_3_r)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_3_r)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_3_r)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_3_r)
                                                      : (IData)(ysyx_041728__DOT__dCache__DOT___vMuxOut_T_51_3)))))))))))));
        vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_77_3 
            = ((0x26U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                    << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_3_r
                : ((0x25U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                        << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_3_r
                    : ((0x24U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                              >> 0x1cU))))
                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_3_r
                        : ((0x23U == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 4U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                  >> 0x1cU))))
                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_3_r
                            : ((0x22U == (0x3fU & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x1cU))))
                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_3_r
                                : ((0x21U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_3_r
                                    : ((0x20U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_3_r
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_3_r
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_3_r
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_3_r
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_3_r
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_3_r
                                                      : ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_51_3))))))))))));
    }
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr 
        = ((IData)(vlSelf->ysyx_041728__DOT__clintIns__DOT__intrTimeCnt) 
           & (0U != ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
                      << 0x12U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                   >> 0xeU))));
    vlSelf->ysyx_041728__DOT__riscvIns_io_dataIO_valid 
        = (1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                   >> 0xfU) & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__block1))) 
                 & (~ (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__blockDMA))));
    vlSelf->ysyx_041728__DOT__riscvIns_io_instIO_valid 
        = (1U & ((~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__block1)) 
                 & (~ (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__blockDMA))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_49 
        = ((0x4063U != (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 1U))) & ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))) 
                                               | ((0x503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                        << 0x1fU) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U)))) 
                                                  | ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U)))) 
                                                     | ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))) 
                                                        | ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 1U))) 
                                                           | ((0x3bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                    << 0x1fU) 
                                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                      >> 1U)))) 
                                                              | ((0x2000033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                       << 0x1fU) 
                                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                         >> 1U)))) 
                                                                 | ((0x7033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                          << 0x1fU) 
                                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                            >> 1U)))) 
                                                                    | ((0x103bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                             << 0x1fU) 
                                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                               >> 1U)))) 
                                                                       | ((0x1003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                               >> 1U))) 
                                                                          | ((0x200603bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                             | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x4000501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                | ((0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                & ((0x1bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                | (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_28))))))))))))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_35 
        = ((0x2033U != (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                        << 0x1fU) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                        >> 1U)))) & 
           ((0x200403bU != (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                            << 0x1fU) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U)))) 
            & ((0x4000501bU != (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                << 0x1fU) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 1U)))) 
               & ((0x1033U != (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                               << 0x1fU) 
                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 1U)))) 
                  & ((0x67U != (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U))) 
                     & ((0x4000503bU != (0xfe00707fU 
                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                             << 0x1fU) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 1U)))) 
                        & ((0x1063U != (0x707fU & (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U))) 
                           & ((0x1bU != (0x707fU & 
                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                          >> 1U))) 
                              & ((0x3023U != (0x707fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 1U))) 
                                 & ((0x200503bU != 
                                     (0xfe00707fU & 
                                      ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                        << 0x1fU) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                        >> 1U)))) & 
                                    ((0x4013U != (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U))) 
                                     & ((0x2003U != 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U))) 
                                        & (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_23)))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_33 
        = ((0x6033U == (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                        << 0x1fU) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                        >> 1U)))) ? 0U
            : ((0x2004033U == (0xfe00707fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                               << 0x1fU) 
                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 1U))))
                ? 0U : ((0x4033U == (0xfe00707fU & 
                                     ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                       << 0x1fU) | 
                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 1U)))) ? 0U
                         : ((0x40000033U == (0xfe00707fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U))))
                             ? 0U : ((0x5033U == (0xfe00707fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U))))
                                      ? 0U : ((0x200703bU 
                                               == (0xfe00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U))))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x200003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U))))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U)))
                                                       ? 1U
                                                       : (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_22))))))))))));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_2 = 
        ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_0_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_4 = 
        ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_1_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_6 = 
        ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_2_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_8 = 
        ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_0_3_T_4) 
         | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_11 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_13 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_15 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_17 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_1_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_20 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_22 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_24 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_26 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_2_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_29 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_31 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_33 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_35 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_3_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_38 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_40 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_42 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_44 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_4_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_47 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_49 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_51 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_53 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_5_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_56 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_58 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_60 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_62 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_6_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_65 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_67 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_69 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_71 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_7_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_74 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_76 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_78 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_80 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_8_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_83 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_85 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_87 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_89 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_9_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_92 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_94 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_96 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_98 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_10_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_101 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_103 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_105 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_107 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_11_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_110 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_112 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_114 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_116 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_12_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_119 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_121 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_123 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_125 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_13_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_128 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_130 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_132 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_134 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_14_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_137 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_139 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_141 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_143 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_15_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_146 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_148 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_150 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_152 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_16_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_155 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_157 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_159 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_161 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_17_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_164 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_166 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_168 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_170 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_18_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_173 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_175 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_177 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_179 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_19_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_182 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_184 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_186 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_188 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_20_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_191 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_193 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_195 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_197 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_21_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_200 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_202 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_204 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_206 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_22_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_209 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_211 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_213 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_215 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_23_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_218 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_220 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_222 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_224 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_24_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_227 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_229 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_231 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_233 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_25_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_236 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_238 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_240 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_242 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_26_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_245 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_247 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_249 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_251 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_27_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_254 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_256 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_258 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_260 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_28_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_263 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_265 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_267 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_269 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_29_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_272 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_274 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_276 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_278 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_30_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_281 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_283 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_285 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_287 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_31_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_290 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_292 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_294 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_296 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_32_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_299 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_301 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_303 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_305 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_33_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_308 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_310 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_312 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_314 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_34_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_317 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_319 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_321 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_323 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_35_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_326 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_328 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_330 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_332 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_36_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_335 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_337 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_339 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_341 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_37_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_344 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_346 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_348 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_350 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_38_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_353 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_355 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_357 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_359 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_39_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_362 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_364 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_366 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_368 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_40_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_371 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_373 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_375 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_377 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_41_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_380 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_382 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_384 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_386 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_42_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_389 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_391 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_393 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_395 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_43_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_398 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_400 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_402 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_404 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_44_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_407 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_409 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_411 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_413 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_45_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_416 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_418 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_420 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_422 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_46_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_425 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_427 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_429 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_431 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_47_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_434 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_436 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_438 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_440 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_48_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_443 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_445 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_447 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_449 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_49_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_452 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_454 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_456 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_458 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_50_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_461 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_463 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_465 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_467 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_51_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_470 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_472 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_474 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_476 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_52_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_479 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_481 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_483 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_485 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_53_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_488 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_490 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_492 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_494 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_54_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_497 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_499 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_501 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_503 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_55_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_506 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_508 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_510 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_512 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_56_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_515 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_517 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_519 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_521 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_57_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_524 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_526 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_528 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_530 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_58_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_533 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_535 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_537 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_539 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_59_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_542 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_544 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_546 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_548 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_60_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_551 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_553 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_555 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_557 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_61_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_560 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_562 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_564 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_566 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_62_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_3_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_569 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_0_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_0_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_571 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_1_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_1_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_573 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_2_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_2_r));
    vlSelf->ysyx_041728__DOT__iCache__DOT___GEN_575 
        = ((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___tagArrayWire_63_3_T_4) 
           | (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_3_r));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_31 
        = ((3U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                              >> 1U))) ? 0U : ((0x6013U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U)))
                                                ? 3U
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U))))
                                                    ? 7U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U))))
                                                     ? 0xdU
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))))
                                                      ? 0x10U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                            << 0x1fU) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U))))
                                                       ? 2U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                             << 0x1fU) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 1U))))
                                                        ? 0U
                                                        : 
                                                       ((0x200503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                              << 0x1fU) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 1U))))
                                                         ? 0x11U
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                               << 0x1fU) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                 >> 1U))))
                                                          ? 0x12U
                                                          : 
                                                         ((0x40000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                << 0x1fU) 
                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                  >> 1U))))
                                                           ? 1U
                                                           : 
                                                          ((0x200003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                 << 0x1fU) 
                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                   >> 1U))))
                                                            ? 0x13U
                                                            : (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_20))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_31 
        = ((0x67U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                 >> 1U))) ? 1U : ((0x4000503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                        << 0x1fU) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U)))
                                                      ? 1U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                            << 0x1fU) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U))))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U)))
                                                        ? 1U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U)))
                                                         ? 1U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                              >> 1U)))
                                                          ? 1U
                                                          : 
                                                         ((0x2005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                << 0x1fU) 
                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                  >> 1U))))
                                                           ? 0U
                                                           : 
                                                          ((0x4000003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                 << 0x1fU) 
                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                   >> 1U))))
                                                            ? 0U
                                                            : (IData)(ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_20))))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT___io_imme_T_18 
        = ((0x4003U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                   >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
            : ((0x5003U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                : ((3U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                      >> 1U))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                    : ((0x7063U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 1U)))
                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                        : ((0x23U == (0x707fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 1U)))
                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm
                            : ((0x2023U == (0x707fU 
                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               >> 1U)))
                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm
                                : ((0x40005013U == 
                                    (0xfc00707fU & 
                                     ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                       << 0x1fU) | 
                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                       >> 1U)))) ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                    : ((0x63U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))
                                        ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                                        : ((0x5063U 
                                            == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U)))
                                            ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                                            : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U)))
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Uimm
                                                : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                    : ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT___io_imme_T_7)))))))))));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifjump 
        = ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitif) 
           & (IData)(ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT___io_ifjump_T_31));
    vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifdnpc 
        = ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitif)
            ? (((((((((((((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_0)
                               ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__dnpcReg
                               : 0U) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_1)
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__dnpcReg
                                         : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_2)
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__dnpcReg
                                                    : 0U)) 
                           | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_3)
                               ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__dnpcReg
                               : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_4)
                                          ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__dnpcReg
                                          : 0U)) | 
                         ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_5)
                           ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__dnpcReg
                           : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_6)
                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__dnpcReg
                                      : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_7)
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__dnpcReg
                                                 : 0U)) 
                      | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_8)
                          ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__dnpcReg
                          : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_9)
                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__dnpcReg
                                     : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_10)
                                                ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__dnpcReg
                                                : 0U)) 
                   | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_11)
                       ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__dnpcReg
                       : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_12)
                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__dnpcReg
                                  : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_13)
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__dnpcReg
                                             : 0U)) 
                | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_14)
                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__dnpcReg
                    : 0U)) | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_15)
                               ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__dnpcReg
                               : 0U)) : 0U);
    if ((0x27U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                            >> 4U)))) {
        vlSelf->ysyx_041728__DOT__iCache__DOT___sramSel_T_77 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_77_0 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_0_r;
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_77_0 
            = vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_0_r;
    } else {
        vlSelf->ysyx_041728__DOT__iCache__DOT___sramSel_T_77 
            = ((0x26U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38_r)
                : ((0x25U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37_r)
                    : ((0x24U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36_r)
                        : ((0x23U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35_r)
                            : ((0x22U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34_r)
                                : ((0x21U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33_r)
                                    : ((0x20U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32_r)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31_r)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30_r)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29_r)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28_r)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27_r)
                                                      : (IData)(ysyx_041728__DOT__iCache__DOT___sramSel_T_51)))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_77_0 
            = ((0x26U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_0_r)
                : ((0x25U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_0_r)
                    : ((0x24U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_0_r)
                        : ((0x23U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_0_r)
                            : ((0x22U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_0_r)
                                : ((0x21U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_0_r)
                                    : ((0x20U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_0_r)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_0_r)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_0_r)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_0_r)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_0_r)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_0_r)
                                                      : (IData)(ysyx_041728__DOT__iCache__DOT___vMuxOut_T_51_0)))))))))))));
        vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_77_0 
            = ((0x26U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                   >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_0_r
                : ((0x25U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                       >> 4U))) ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_0_r
                    : ((0x24U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                           >> 4U)))
                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_0_r
                        : ((0x23U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                               >> 4U)))
                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_0_r
                            : ((0x22U == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                   >> 4U)))
                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_0_r
                                : ((0x21U == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_0_r
                                    : ((0x20U == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_0_r
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_0_r
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_0_r
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_0_r
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_0_r
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_0_r
                                                      : ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_51_0))))))))))));
    }
}
