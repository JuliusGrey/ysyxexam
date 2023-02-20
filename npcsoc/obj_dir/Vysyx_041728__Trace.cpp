// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_041728__Syms.h"


void Vysyx_041728___024root__traceChgSub0(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_041728___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_041728___024root* const __restrict vlSelf = static_cast<Vysyx_041728___024root*>(voidSelf);
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_041728___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_041728___024root__traceChgSub0(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp1078;
    VlWide<4>/*127:0*/ __Vtemp1079;
    VlWide<4>/*127:0*/ __Vtemp1080;
    VlWide<4>/*127:0*/ __Vtemp1081;
    VlWide<4>/*127:0*/ __Vtemp1083;
    VlWide<4>/*127:0*/ __Vtemp1099;
    VlWide<4>/*127:0*/ __Vtemp1105;
    VlWide<4>/*127:0*/ __Vtemp1121;
    VlWide<4>/*127:0*/ __Vtemp1127;
    VlWide<4>/*127:0*/ __Vtemp1143;
    VlWide<4>/*127:0*/ __Vtemp1149;
    VlWide<4>/*127:0*/ __Vtemp1165;
    VlWide<4>/*127:0*/ __Vtemp1171;
    VlWide<4>/*127:0*/ __Vtemp1183;
    VlWide<4>/*127:0*/ __Vtemp1193;
    VlWide<4>/*127:0*/ __Vtemp1205;
    VlWide<4>/*127:0*/ __Vtemp1215;
    VlWide<4>/*127:0*/ __Vtemp1227;
    VlWide<4>/*127:0*/ __Vtemp1237;
    VlWide<4>/*127:0*/ __Vtemp1249;
    VlWide<4>/*127:0*/ __Vtemp1259;
    VlWide<3>/*95:0*/ __Vtemp1260;
    VlWide<4>/*127:0*/ __Vtemp1261;
    VlWide<3>/*95:0*/ __Vtemp1264;
    VlWide<4>/*127:0*/ __Vtemp1265;
    VlWide<5>/*159:0*/ __Vtemp1296;
    VlWide<5>/*159:0*/ __Vtemp1328;
    VlWide<5>/*159:0*/ __Vtemp1329;
    VlWide<5>/*159:0*/ __Vtemp1330;
    VlWide<5>/*159:0*/ __Vtemp1331;
    VlWide<5>/*159:0*/ __Vtemp1332;
    VlWide<5>/*159:0*/ __Vtemp1333;
    VlWide<3>/*95:0*/ __Vtemp1334;
    VlWide<3>/*95:0*/ __Vtemp1335;
    VlWide<4>/*127:0*/ __Vtemp1337;
    VlWide<4>/*127:0*/ __Vtemp1338;
    VlWide<4>/*127:0*/ __Vtemp1341;
    VlWide<4>/*127:0*/ __Vtemp1345;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4359)))));
            tracep->chgBit(oldp+1,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4377)))));
            tracep->chgBit(oldp+2,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4395)))));
            tracep->chgBit(oldp+3,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4413)))));
            tracep->chgBit(oldp+4,(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i));
            tracep->chgWData(oldp+5,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask),128);
            tracep->chgWData(oldp+9,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask),128);
            tracep->chgWData(oldp+13,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask),128);
            tracep->chgWData(oldp+17,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask),128);
            tracep->chgBit(oldp+21,(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_161));
            tracep->chgBit(oldp+22,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37));
            tracep->chgBit(oldp+23,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0_io_cen));
            tracep->chgBit(oldp+24,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1_io_cen));
            tracep->chgBit(oldp+25,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2_io_cen));
            tracep->chgBit(oldp+26,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3_io_cen));
            tracep->chgBit(oldp+27,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4_io_cen));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5_io_cen));
            tracep->chgBit(oldp+29,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6_io_cen));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7_io_cen));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8_io_cen));
            tracep->chgBit(oldp+32,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9_io_cen));
            tracep->chgBit(oldp+33,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10_io_cen));
            tracep->chgBit(oldp+34,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11_io_cen));
            tracep->chgBit(oldp+35,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12_io_cen));
            tracep->chgBit(oldp+36,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13_io_cen));
            tracep->chgBit(oldp+37,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14_io_cen));
            tracep->chgBit(oldp+38,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15_io_cen));
            tracep->chgBit(oldp+39,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__block));
            tracep->chgCData(oldp+40,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__valid_c),2);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__valid_c),2);
            tracep->chgBit(oldp+42,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4359));
            __Vtemp1078[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[0U]);
            __Vtemp1078[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[1U]);
            __Vtemp1078[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[2U]);
            __Vtemp1078[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[3U]);
            tracep->chgWData(oldp+43,(__Vtemp1078),128);
            tracep->chgBit(oldp+47,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4377));
            __Vtemp1079[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[0U]);
            __Vtemp1079[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[1U]);
            __Vtemp1079[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[2U]);
            __Vtemp1079[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[3U]);
            tracep->chgWData(oldp+48,(__Vtemp1079),128);
            tracep->chgBit(oldp+52,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4395));
            __Vtemp1080[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[0U]);
            __Vtemp1080[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[1U]);
            __Vtemp1080[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[2U]);
            __Vtemp1080[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[3U]);
            tracep->chgWData(oldp+53,(__Vtemp1080),128);
            tracep->chgBit(oldp+57,(vlSelf->ysyx_041728__DOT__iCache__DOT___T_4413));
            __Vtemp1081[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]);
            __Vtemp1081[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]);
            __Vtemp1081[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]);
            __Vtemp1081[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]);
            tracep->chgWData(oldp+58,(__Vtemp1081),128);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+62,((((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
                                      | ((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV) 
                                         & ((((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
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
                                        & (2U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))))));
            tracep->chgBit(oldp+63,((1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                             >> 1U) 
                                            & (~ (IData)(vlSelf->ysyx_041728__DOT__clintIns__DOT___T_18))) 
                                           & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37))))));
            tracep->chgBit(oldp+64,(((((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                       & (IData)(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                     | (((0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hit)) 
                                        & (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 5U))))));
            tracep->chgBit(oldp+65,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                                & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_0)) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))))));
            tracep->chgBit(oldp+66,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))))));
            if ((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) {
                __Vtemp1083[0U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[0U];
                __Vtemp1083[1U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[1U];
                __Vtemp1083[2U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[2U];
                __Vtemp1083[3U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3871[3U];
            } else {
                __Vtemp1083[0U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[0U];
                __Vtemp1083[1U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[1U];
                __Vtemp1083[2U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[2U];
                __Vtemp1083[3U] = vlSelf->ysyx_041728__DOT__dCache__DOT___T_3875[3U];
            }
            tracep->chgWData(oldp+67,(__Vtemp1083),128);
            tracep->chgBit(oldp+71,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                                & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_1)) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))))));
            tracep->chgBit(oldp+72,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))))));
            tracep->chgBit(oldp+73,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                                & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_2)) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))))));
            tracep->chgBit(oldp+74,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))))));
            tracep->chgBit(oldp+75,((1U & (~ ((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                                & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_3)) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))))));
            tracep->chgBit(oldp+76,((1U & (~ ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))))));
            tracep->chgBit(oldp+77,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                            >> 0xdU) 
                                           & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37))))));
            tracep->chgBit(oldp+78,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                            >> 1U) 
                                           & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_37))))));
            tracep->chgBit(oldp+79,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_161))));
            tracep->chgBit(oldp+80,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0xeU) 
                                           & (~ (((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
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
            tracep->chgBit(oldp+81,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                       & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_0)) 
                                      & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))));
            tracep->chgBit(oldp+82,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3860))));
            tracep->chgBit(oldp+83,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                       & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_1)) 
                                      & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))));
            tracep->chgBit(oldp+84,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3889))));
            tracep->chgBit(oldp+85,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                       & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_2)) 
                                      & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))));
            tracep->chgBit(oldp+86,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3918))));
            tracep->chgBit(oldp+87,(((((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid) 
                                       & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_3)) 
                                      & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))));
            tracep->chgBit(oldp+88,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3863) 
                                     | (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_3947))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+89,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186)))));
            tracep->chgBit(oldp+90,(vlSelf->ysyx_041728__DOT__iCache_io_cacheIn_ready));
            tracep->chgQData(oldp+91,(((8U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
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
            tracep->chgIData(oldp+93,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc),32);
            tracep->chgBit(oldp+94,(vlSelf->ysyx_041728__DOT__riscvIns_io_dataIO_valid));
            tracep->chgQData(oldp+95,(((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV)
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
                                                == 
                                                ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 9U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x17U)))
                                                ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime
                                                : (
                                                   (0x2004000U 
                                                    == 
                                                    ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 9U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x17U)))
                                                    ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp
                                                    : 0ULL))
                                            : vlSelf->ysyx_041728__DOT__mmioDCache__DOT___T_7))),64);
            tracep->chgQData(oldp+97,((((QData)((IData)(
                                                        vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[0U])))),64);
            tracep->chgBit(oldp+99,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                           >> 5U))));
            tracep->chgIData(oldp+100,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                         << 9U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x17U))),32);
            tracep->chgCData(oldp+101,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0xfU))),2);
            tracep->chgCData(oldp+102,((0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))),8);
            tracep->chgBit(oldp+103,(vlSelf->ysyx_041728__DOT__clintIns__DOT___T_18));
            tracep->chgBit(oldp+104,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_229));
            tracep->chgBit(oldp+105,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache_io_cacheIn_ready)))));
            tracep->chgBit(oldp+106,(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
            tracep->chgIData(oldp+107,((0xfffffff0U 
                                        & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),32);
            tracep->chgCData(oldp+108,(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState),8);
            tracep->chgCData(oldp+109,((0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U))),6);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1099[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[0U];
                __Vtemp1099[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[1U];
                __Vtemp1099[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[2U];
                __Vtemp1099[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60[3U];
            } else {
                __Vtemp1099[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[0U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1099[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[1U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1099[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[2U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1099[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55[3U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1105[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[0U];
                __Vtemp1105[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[1U];
                __Vtemp1105[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[2U];
                __Vtemp1105[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1105[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[0U]
                                        : __Vtemp1099[0U]));
                __Vtemp1105[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[1U]
                                        : __Vtemp1099[1U]));
                __Vtemp1105[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[2U]
                                        : __Vtemp1099[2U]));
                __Vtemp1105[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61[3U]
                                        : __Vtemp1099[3U]));
            }
            tracep->chgWData(oldp+110,(__Vtemp1105),128);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1121[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[0U];
                __Vtemp1121[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[1U];
                __Vtemp1121[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[2U];
                __Vtemp1121[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60[3U];
            } else {
                __Vtemp1121[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[0U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1121[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[1U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1121[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[2U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1121[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55[3U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1127[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[0U];
                __Vtemp1127[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[1U];
                __Vtemp1127[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[2U];
                __Vtemp1127[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1127[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[0U]
                                        : __Vtemp1121[0U]));
                __Vtemp1127[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[1U]
                                        : __Vtemp1121[1U]));
                __Vtemp1127[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[2U]
                                        : __Vtemp1121[2U]));
                __Vtemp1127[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61[3U]
                                        : __Vtemp1121[3U]));
            }
            tracep->chgWData(oldp+114,(__Vtemp1127),128);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1143[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[0U];
                __Vtemp1143[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[1U];
                __Vtemp1143[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[2U];
                __Vtemp1143[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60[3U];
            } else {
                __Vtemp1143[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[0U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1143[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[1U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1143[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[2U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1143[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55[3U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1149[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[0U];
                __Vtemp1149[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[1U];
                __Vtemp1149[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[2U];
                __Vtemp1149[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1149[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[0U]
                                        : __Vtemp1143[0U]));
                __Vtemp1149[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[1U]
                                        : __Vtemp1143[1U]));
                __Vtemp1149[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[2U]
                                        : __Vtemp1143[2U]));
                __Vtemp1149[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61[3U]
                                        : __Vtemp1143[3U]));
            }
            tracep->chgWData(oldp+118,(__Vtemp1149),128);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1165[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[0U];
                __Vtemp1165[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[1U];
                __Vtemp1165[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[2U];
                __Vtemp1165[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60[3U];
            } else {
                __Vtemp1165[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[0U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1165[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[1U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1165[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[2U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1165[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55[3U]
                                                    : 
                                                   ((0x36U 
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
                __Vtemp1171[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[0U];
                __Vtemp1171[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[1U];
                __Vtemp1171[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[2U];
                __Vtemp1171[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1171[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[0U]
                                        : __Vtemp1165[0U]));
                __Vtemp1171[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[1U]
                                        : __Vtemp1165[1U]));
                __Vtemp1171[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[2U]
                                        : __Vtemp1165[2U]));
                __Vtemp1171[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61[3U]
                                        : __Vtemp1165[3U]));
            }
            tracep->chgWData(oldp+122,(__Vtemp1171),128);
            tracep->chgBit(oldp+126,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
            tracep->chgIData(oldp+127,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc
                                         : 0U)),32);
            tracep->chgBit(oldp+128,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)) 
                                      | (2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)))));
            tracep->chgBit(oldp+129,((3U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
            tracep->chgBit(oldp+130,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))));
            tracep->chgIData(oldp+131,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? (0xfffffff0U 
                                            & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                         : 0U)),32);
            tracep->chgCData(oldp+132,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState)
                                         : 0U)),8);
            tracep->chgCData(oldp+133,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? 3U : 0U)),3);
            tracep->chgCData(oldp+134,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+135,(((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state)) 
                                      | (1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state)))));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_041728__DOT__dArbIns_io_arbMMIO_valid));
            tracep->chgBit(oldp+137,((2U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))));
            tracep->chgQData(oldp+138,(vlSelf->ysyx_041728__DOT__mmioDCache__DOT___T_7),64);
            tracep->chgBit(oldp+140,(((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns_io_dataIO_valid))));
            tracep->chgQData(oldp+141,(((0x200bff8U 
                                         == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 9U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x17U)))
                                         ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime
                                         : ((0x2004000U 
                                             == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 9U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x17U)))
                                             ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp
                                             : 0ULL))),64);
            tracep->chgBit(oldp+143,(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid));
            tracep->chgQData(oldp+144,(((0x4000000U 
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
                                                              vlSelf->ysyx_041728__DOT__dCache__DOT__waysel[0U]))))),64);
            tracep->chgBit(oldp+146,(((0U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state)) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbMMIO_valid))));
            tracep->chgBit(oldp+147,((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgIData(oldp+148,((0xfffffff0U 
                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 9U) 
                                           | (0x1f0U 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x17U))))),32);
            tracep->chgCData(oldp+149,((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))),8);
            tracep->chgBit(oldp+150,((((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___T_1) 
                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                          >> 5U)) & 
                                      (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)))));
            tracep->chgCData(oldp+151,((0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 5U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1bU)))),6);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1183[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[0U];
                __Vtemp1183[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[1U];
                __Vtemp1183[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[2U];
                __Vtemp1183[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58[3U];
            } else {
                __Vtemp1183[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[0U])))));
                __Vtemp1183[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[1U])))));
                __Vtemp1183[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[2U])))));
                __Vtemp1183[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT___T_553[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1193[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[0U];
                __Vtemp1193[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[1U];
                __Vtemp1193[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[2U];
                __Vtemp1193[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1193[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[0U]
                                                : __Vtemp1183[0U]))));
                __Vtemp1193[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[1U]
                                                : __Vtemp1183[1U]))));
                __Vtemp1193[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[2U]
                                                : __Vtemp1183[2U]))));
                __Vtemp1193[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59[3U]
                                                : __Vtemp1183[3U]))));
            }
            tracep->chgWData(oldp+152,(__Vtemp1193),128);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1205[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[0U];
                __Vtemp1205[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[1U];
                __Vtemp1205[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[2U];
                __Vtemp1205[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58[3U];
            } else {
                __Vtemp1205[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[0U])))));
                __Vtemp1205[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[1U])))));
                __Vtemp1205[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[2U])))));
                __Vtemp1205[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT___T_553[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1215[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[0U];
                __Vtemp1215[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[1U];
                __Vtemp1215[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[2U];
                __Vtemp1215[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1215[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[0U]
                                                : __Vtemp1205[0U]))));
                __Vtemp1215[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[1U]
                                                : __Vtemp1205[1U]))));
                __Vtemp1215[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[2U]
                                                : __Vtemp1205[2U]))));
                __Vtemp1215[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59[3U]
                                                : __Vtemp1205[3U]))));
            }
            tracep->chgWData(oldp+156,(__Vtemp1215),128);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1227[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[0U];
                __Vtemp1227[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[1U];
                __Vtemp1227[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[2U];
                __Vtemp1227[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58[3U];
            } else {
                __Vtemp1227[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[0U])))));
                __Vtemp1227[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[1U])))));
                __Vtemp1227[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[2U])))));
                __Vtemp1227[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT___T_553[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1237[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[0U];
                __Vtemp1237[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[1U];
                __Vtemp1237[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[2U];
                __Vtemp1237[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1237[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[0U]
                                                : __Vtemp1227[0U]))));
                __Vtemp1237[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[1U]
                                                : __Vtemp1227[1U]))));
                __Vtemp1237[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[2U]
                                                : __Vtemp1227[2U]))));
                __Vtemp1237[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59[3U]
                                                : __Vtemp1227[3U]))));
            }
            tracep->chgWData(oldp+160,(__Vtemp1237),128);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1249[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[0U];
                __Vtemp1249[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[1U];
                __Vtemp1249[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[2U];
                __Vtemp1249[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58[3U];
            } else {
                __Vtemp1249[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[0U])))));
                __Vtemp1249[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[1U])))));
                __Vtemp1249[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[2U])))));
                __Vtemp1249[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 5U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT___T_553[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 5U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))) {
                __Vtemp1259[0U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[0U];
                __Vtemp1259[1U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[1U];
                __Vtemp1259[2U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[2U];
                __Vtemp1259[3U] = vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63[3U];
            } else {
                __Vtemp1259[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[0U]
                                                : __Vtemp1249[0U]))));
                __Vtemp1259[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[1U]
                                                : __Vtemp1249[1U]))));
                __Vtemp1259[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[2U]
                                                : __Vtemp1249[2U]))));
                __Vtemp1259[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
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
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59[3U]
                                                : __Vtemp1249[3U]))));
            }
            tracep->chgWData(oldp+164,(__Vtemp1259),128);
            tracep->chgBit(oldp+168,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
            tracep->chgIData(oldp+169,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))
                                         ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 9U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x17U))
                                         : 0U)),32);
            tracep->chgCData(oldp+170,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+171,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)) 
                                      | (2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)))));
            tracep->chgQData(oldp+172,(((IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT___T_27)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_150[0U])))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+174,(((IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT___T_27)
                                         ? (0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                         : 0U)),8);
            tracep->chgBit(oldp+175,((3U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
            tracep->chgBit(oldp+176,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))));
            tracep->chgIData(oldp+177,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? (0xfffffff0U 
                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 9U) 
                                               | (0x1f0U 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x17U))))
                                         : 0U)),32);
            tracep->chgCData(oldp+178,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))
                                         : 0U)),8);
            tracep->chgCData(oldp+179,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? 3U : 0U)),3);
            tracep->chgCData(oldp+180,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+181,(((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state)) 
                                      | (1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state)))));
            tracep->chgIData(oldp+182,(((4U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                         ? (IData)(
                                                   (((8U 
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
                                         : (IData)(
                                                   ((8U 
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
            tracep->chgIData(oldp+183,(((IData)(4U) 
                                        + vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),32);
            tracep->chgIData(oldp+184,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)
                                         ? (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_23)
                                         : ((2U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])
                                             ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                                 << 0x13U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                   >> 0xdU))
                                             : ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump1)
                                                 ? 
                                                ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                                  << 0x13U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                    >> 0xdU))
                                                 : 
                                                ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump2)
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_23)
                                                  : vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifdnpc))))),32);
            tracep->chgBit(oldp+185,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipFlashWire) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifjump))));
            tracep->chgBit(oldp+186,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_loadHazard));
            tracep->chgBit(oldp+187,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186));
            tracep->chgIData(oldp+188,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         << 0x1eU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                           >> 2U))),32);
            tracep->chgIData(oldp+189,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+190,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                            >> 4U))));
            tracep->chgQData(oldp+191,(((0x1063U == 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                           >> 1U)))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                                         : ((0x23U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm
                                             : ((0x6003U 
                                                 == 
                                                 (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                 : 
                                                ((0x1013U 
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
            tracep->chgQData(oldp+193,(((0x1fU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 0x10U)))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_221
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 0x10U)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_214
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 0x10U)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_207
                                                 : 
                                                ((0x1cU 
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
            tracep->chgQData(oldp+195,(((0x1fU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 0x15U)))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_221
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 0x15U)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_214
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 0x15U)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_207
                                                 : 
                                                ((0x1cU 
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
            tracep->chgQData(oldp+197,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dinMux),64);
            tracep->chgCData(oldp+199,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                 >> 8U))),5);
            tracep->chgCData(oldp+200,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                 >> 8U))),5);
            tracep->chgCData(oldp+201,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+202,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                 >> 0x15U))),5);
            tracep->chgCData(oldp+203,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB),64);
            tracep->chgCData(oldp+206,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                              >> 1U))),2);
            tracep->chgCData(oldp+207,((3U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 0x1fU)))),2);
            tracep->chgCData(oldp+208,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                 >> 3U))),5);
            tracep->chgBit(oldp+209,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+210,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                              >> 2U))),2);
            tracep->chgCData(oldp+211,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                              >> 5U))),3);
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xaU])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[9U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+214,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[7U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[6U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+216,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[6U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[5U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+218,(((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96))
                                         ? ((0x344U 
                                             == (0xfffU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                    >> 0xdU)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                     >> 0xdU)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins
                                                 : 
                                                ((0x300U 
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
            tracep->chgQData(oldp+220,(((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardB))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_13)),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata),64);
            tracep->chgBit(oldp+224,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[0U])));
            tracep->chgIData(oldp+225,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                         << 0x13U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                           >> 0xdU))),32);
            tracep->chgIData(oldp+226,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                         << 0x18U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                           >> 8U))),32);
            tracep->chgIData(oldp+227,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___T_23)),32);
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 8U))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 7U))));
            tracep->chgBit(oldp+230,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 6U))));
            tracep->chgBit(oldp+231,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 5U))));
            tracep->chgBit(oldp+232,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 4U))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 3U))));
            tracep->chgBit(oldp+234,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 2U))));
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                            >> 1U))));
            tracep->chgBit(oldp+236,((1U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96))));
            tracep->chgCData(oldp+237,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 7U))),5);
            tracep->chgQData(oldp+238,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[3U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U])) 
                                              >> 0xdU)))),64);
            tracep->chgCData(oldp+240,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardA),2);
            tracep->chgCData(oldp+241,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardB),2);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_aluRes1),64);
            tracep->chgBit(oldp+244,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+245,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                 >> 0x12U))),5);
            tracep->chgCData(oldp+246,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 2U))),5);
            tracep->chgBit(oldp+247,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U])));
            tracep->chgCData(oldp+248,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                 >> 8U))),5);
            tracep->chgCData(oldp+249,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+250,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_exjump));
            tracep->chgIData(oldp+251,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifdnpc),32);
            tracep->chgBit(oldp+252,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifjump));
            tracep->chgBit(oldp+253,(((0x23U == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                      | ((0x2023U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | ((0x3023U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | ((0x1023U 
                                                == 
                                                (0x707fU 
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
            tracep->chgCData(oldp+254,(((0x2007033U 
                                         != (0xfe00707fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U)))) 
                                        & ((0x1063U 
                                            != (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))) 
                                           & ((0x23U 
                                               != (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                              & ((0x6003U 
                                                  != 
                                                  (0x707fU 
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
            tracep->chgCData(oldp+255,(((0x2007033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))))
                                         ? 0U : ((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U)))
                                                  ? 0U
                                                  : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___T_333)))),2);
            tracep->chgCData(oldp+256,(((0x23U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U)))
                                         ? 0U : ((0x2023U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U)))
                                                  ? 0U
                                                  : 
                                                 ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                       >> 1U)))
                                                   ? 0U
                                                   : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___T_167))))),5);
            tracep->chgBit(oldp+257,(((0x23U == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                      | ((0x2023U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | ((0x3023U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | (0x1023U 
                                               == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))))))));
            tracep->chgCData(oldp+258,(((3U == (7U 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 0xdU)))
                                         ? 0xffU : 
                                        ((2U == (7U 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 0xdU)))
                                          ? 0xfU : 
                                         ((1U == (7U 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 0xdU)))
                                           ? 3U : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                        >> 0xdU)))
                                                    ? 1U
                                                    : 0U))))),8);
            tracep->chgCData(oldp+259,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+260,(((0x1063U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      | ((0x5063U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | ((0x6063U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | ((0x4063U 
                                                == 
                                                (0x707fU 
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
            tracep->chgBit(oldp+261,(((0x6fU == (0x7fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                      | (0x67U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))))));
            tracep->chgBit(oldp+262,(((0x1063U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                      >> 1U))) 
                                      | ((0x5063U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | ((0x6063U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            | ((0x4063U 
                                                == 
                                                (0x707fU 
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
            tracep->chgBit(oldp+263,(((0x2007033U == 
                                       (0xfe00707fU 
                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                            << 0x1fU) 
                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U)))) 
                                      | ((0x1063U != 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         & ((0x23U 
                                             != (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                    >> 1U))) 
                                            & ((0x6003U 
                                                == 
                                                (0x707fU 
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
            tracep->chgCData(oldp+264,(((0x2007033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U))))
                                         ? 0U : ((0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                         >> 1U))))
                                                  ? 0U
                                                  : 
                                                 ((0x200003bU 
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
            tracep->chgBit(oldp+265,((0x100fU == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+266,((0x1073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+267,((0x2073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+268,((0x6073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+269,((0x7073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+270,((0x3073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+271,((0x5073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+272,((0x73U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+273,((((((0x1073U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U))) 
                                         | (0x2073U 
                                            == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                   >> 1U)))) 
                                        | (0x6073U 
                                           == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                                  >> 1U)))) 
                                       | (0x7073U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                              >> 1U)))) 
                                      | (0x3073U == 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                           >> 1U))))));
            tracep->chgBit(oldp+274,((0x30200073U == 
                                      ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                        << 0x1fU) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                        >> 1U)))));
            tracep->chgIData(oldp+275,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                         << 0x13U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U] 
                                           >> 0xdU))),32);
            tracep->chgBit(oldp+276,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U])));
            tracep->chgWData(oldp+277,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg),248);
            tracep->chgBit(oldp+285,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+286,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+287,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+288,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump1));
            tracep->chgIData(oldp+290,(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0U]),32);
            tracep->chgBit(oldp+291,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump2));
            tracep->chgBit(oldp+292,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipFlashWire));
            tracep->chgIData(oldp+294,(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[0U]),32);
            tracep->chgBit(oldp+295,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[1U])));
            tracep->chgIData(oldp+296,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[2U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[1U] 
                                           >> 1U))),32);
            tracep->chgIData(oldp+297,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[3U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[2U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+298,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U] 
                                            >> 1U))));
            tracep->chgBit(oldp+299,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+300,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+301,((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 0x13U))),8);
            tracep->chgBit(oldp+302,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+303,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                              >> 0x1cU))),3);
            tracep->chgIData(oldp+304,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                         << 0x13U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                           >> 0xdU))),32);
            tracep->chgIData(oldp+305,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xbU] 
                                         << 0x13U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xaU] 
                                           >> 0xdU))),32);
            tracep->chgBit(oldp+306,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[0xbU] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+307,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U])));
            tracep->chgBit(oldp+308,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                            >> 1U))));
            tracep->chgIData(oldp+309,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                         << 0x1eU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                           >> 2U))),32);
            tracep->chgCData(oldp+310,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 2U))),2);
            tracep->chgCData(oldp+311,((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                 >> 6U))),8);
            tracep->chgCData(oldp+312,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0xfU))),3);
            tracep->chgIData(oldp+313,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U] 
                                         << 9U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                   >> 0x17U))),32);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[3U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U])) 
                                              >> 0x17U)))),64);
            tracep->chgQData(oldp+316,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                              >> 0x17U)))),64);
            tracep->chgIData(oldp+318,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                         << 9U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U] 
                                                   >> 0x17U))),32);
            tracep->chgBit(oldp+319,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+320,((1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0xeU) 
                                             & ((0x80000000ULL 
                                                 > 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                                        >> 0x17U)))) 
                                                | (0x8fffffffULL 
                                                   < 
                                                   (((QData)((IData)(
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
            tracep->chgBit(oldp+321,((0U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              << 0x1eU) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                >> 2U)))));
            tracep->chgWData(oldp+322,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg),174);
            tracep->chgIData(oldp+328,(((0U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
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
            tracep->chgBit(oldp+329,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                            >> 0xdU))));
            tracep->chgQData(oldp+331,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Uimm),64);
            tracep->chgQData(oldp+339,(((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_20[4U])
                                           ? 0x7ffffffffffULL
                                           : 0ULL) 
                                         << 0x15U) 
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
            tracep->chgQData(oldp+341,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_11),64);
            tracep->chgQData(oldp+343,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_18),64);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_25),64);
            tracep->chgQData(oldp+347,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_32),64);
            tracep->chgQData(oldp+349,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_39),64);
            tracep->chgQData(oldp+351,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_46),64);
            tracep->chgQData(oldp+353,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_53),64);
            tracep->chgQData(oldp+355,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_60),64);
            tracep->chgQData(oldp+357,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_67),64);
            tracep->chgQData(oldp+359,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_74),64);
            tracep->chgQData(oldp+361,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_81),64);
            tracep->chgQData(oldp+363,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_88),64);
            tracep->chgQData(oldp+365,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_95),64);
            tracep->chgQData(oldp+367,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_102),64);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_109),64);
            tracep->chgQData(oldp+371,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_116),64);
            tracep->chgQData(oldp+373,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_123),64);
            tracep->chgQData(oldp+375,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_130),64);
            tracep->chgQData(oldp+377,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_137),64);
            tracep->chgQData(oldp+379,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_144),64);
            tracep->chgQData(oldp+381,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_151),64);
            tracep->chgQData(oldp+383,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_158),64);
            tracep->chgQData(oldp+385,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_165),64);
            tracep->chgQData(oldp+387,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_172),64);
            tracep->chgQData(oldp+389,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_179),64);
            tracep->chgQData(oldp+391,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_186),64);
            tracep->chgQData(oldp+393,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_193),64);
            tracep->chgQData(oldp+395,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_200),64);
            tracep->chgQData(oldp+397,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_207),64);
            tracep->chgQData(oldp+399,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_214),64);
            tracep->chgQData(oldp+401,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___T_221),64);
            tracep->chgQData(oldp+403,((QData)((IData)(
                                                       ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                         << 0x1eU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                                           >> 2U))))),64);
            tracep->chgQData(oldp+405,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA),64);
            tracep->chgQData(oldp+407,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB),64);
            tracep->chgQData(oldp+409,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_181[0U])))),64);
            tracep->chgQData(oldp+411,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1),64);
            tracep->chgSData(oldp+413,((0xfffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                  >> 0xdU))),12);
            tracep->chgQData(oldp+414,((QData)((IData)(
                                                       ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                                         << 0x13U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                                           >> 0xdU))))),64);
            tracep->chgQData(oldp+416,(((0x344U == 
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
                                                    : 0ULL))))))),64);
            tracep->chgQData(oldp+418,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins),64);
            tracep->chgQData(oldp+420,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mepcins),64);
            tracep->chgIData(oldp+422,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[9U] 
                                         << 0x13U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                           >> 0xdU))),32);
            tracep->chgIData(oldp+423,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1)),32);
            tracep->chgIData(oldp+424,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[9U] 
                                          << 0x13U) 
                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                            >> 0xdU)) 
                                        + ((0x20000U 
                                            & vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])
                                            ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                                << 0x13U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                                  >> 0xdU))
                                            : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1)))),32);
            tracep->chgQData(oldp+425,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__memData_ins_io_rdata_ext),64);
            tracep->chgBit(oldp+427,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_11) 
                                      | (0x1cU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                      >> 3U))))));
            tracep->chgQData(oldp+428,((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_11) 
                                         | (0x1cU == 
                                            (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                >> 3U))))
                                         ? (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgQData(oldp+430,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT___T_6[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT___T_6[0U])))),64);
            tracep->chgBit(oldp+432,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT___T_6[2U])));
            tracep->chgBit(oldp+433,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_valid));
            tracep->chgBit(oldp+434,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_divw));
            tracep->chgBit(oldp+435,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed));
            tracep->chgBit(oldp+436,((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
            tracep->chgQData(oldp+437,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_quotient),64);
            tracep->chgQData(oldp+439,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_remainder),64);
            tracep->chgBit(oldp+441,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns_io_mul_valid));
            tracep->chgQData(oldp+442,(((0x13U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                      >> 3U)))
                                         ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)),64);
            tracep->chgQData(oldp+444,(((0x13U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                      >> 3U)))
                                         ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgBit(oldp+446,((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
            tracep->chgQData(oldp+447,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[0U])))),64);
            tracep->chgQData(oldp+449,((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgQData(oldp+451,((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))),64);
            tracep->chgQData(oldp+453,((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),64);
            tracep->chgCData(oldp+455,((0x3fU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),6);
            tracep->chgQData(oldp+456,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_1)
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)),64);
            tracep->chgQData(oldp+458,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x3fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgBit(oldp+460,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x3fU))) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))));
            tracep->chgIData(oldp+461,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_15)
                                         ? ((IData)(1U) 
                                            + (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))),32);
            tracep->chgIData(oldp+462,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x1fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? ((IData)(1U) 
                                            + (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),32);
            tracep->chgBit(oldp+463,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))));
            tracep->chgCData(oldp+464,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg),2);
            tracep->chgBit(oldp+465,((1U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
            tracep->chgBit(oldp+466,((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
            tracep->chgCData(oldp+467,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__cnt),6);
            tracep->chgWData(oldp+468,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg),128);
            tracep->chgQData(oldp+472,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg),64);
            tracep->chgQData(oldp+474,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                              >> 0x1fU)))),33);
            tracep->chgQData(oldp+476,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32),33);
            tracep->chgIData(oldp+478,(((1U & (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32 
                                                       >> 0x20U)))
                                         ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                             << 1U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                                               >> 0x1fU))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32))),32);
            VL_EXTEND_WI(96,32, __Vtemp1260, ((1U & (IData)(
                                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32 
                                                             >> 0x20U)))
                                               ? ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                                   << 1U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                                                     >> 0x1fU))
                                               : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32)));
            __Vtemp1261[0U] = (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                               << 1U);
            __Vtemp1261[1U] = __Vtemp1260[0U];
            __Vtemp1261[2U] = __Vtemp1260[1U];
            __Vtemp1261[3U] = __Vtemp1260[2U];
            tracep->chgWData(oldp+479,(__Vtemp1261),128);
            __Vtemp1264[0U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U] 
                                << 1U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                          >> 0x1fU));
            __Vtemp1264[1U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U] 
                                << 1U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U] 
                                          >> 0x1fU));
            __Vtemp1264[2U] = (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U] 
                               >> 0x1fU);
            tracep->chgWData(oldp+483,(__Vtemp1264),65);
            tracep->chgWData(oldp+486,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64),65);
            tracep->chgQData(oldp+489,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
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
            __Vtemp1265[0U] = (IData)((0xfffffffffffffffeULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                           << 0x21U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                             << 1U))));
            __Vtemp1265[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                            << 0x21U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                              << 1U))) 
                                       >> 0x20U));
            __Vtemp1265[2U] = (IData)(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
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
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[0U])))));
            __Vtemp1265[3U] = (IData)((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
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
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[0U])))) 
                                       >> 0x20U));
            tracep->chgWData(oldp+491,(__Vtemp1265),128);
            tracep->chgQData(oldp+495,(((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                   >> 0x3fU)) 
                                          ^ (IData)(
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                     >> 0x3fU))) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg)),64);
            tracep->chgQData(oldp+497,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_1)
                                         ? (1ULL + 
                                            (~ (((QData)((IData)(
                                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U])))))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U]))))),64);
            tracep->chgQData(oldp+499,(((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                     >> 0x1fU))) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? (0xffffffff00000000ULL 
                                            | (QData)((IData)(
                                                              ((IData)(1U) 
                                                               + 
                                                               (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg))))))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg)),64);
            tracep->chgQData(oldp+501,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___T_15)
                                         ? (0xffffffff00000000ULL 
                                            | (QData)((IData)(
                                                              ((IData)(1U) 
                                                               + 
                                                               (~ 
                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])))))
                                         : (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])))),64);
            tracep->chgCData(oldp+503,((7U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])),3);
            tracep->chgWData(oldp+504,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg),132);
            __Vtemp1296[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (1U | 
                                               ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                     << 1U)));
            __Vtemp1296[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                  << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                                   << 1U))));
            __Vtemp1296[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                  << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                                   << 1U))));
            __Vtemp1296[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                                  << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                                   << 1U))));
            __Vtemp1296[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xfU : 0U) & 
                                  (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xfU : 0U) 
                                    & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                        >> 0x1fU) | 
                                       (0xeU & ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                << 1U))))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xfU : 0U) & 
                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xfU : 0U) & 
                                  ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                    >> 0x1fU) | (0xeU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U] 
                                                    << 1U)))));
            tracep->chgWData(oldp+509,(__Vtemp1296),132);
            tracep->chgBit(oldp+514,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative))));
            tracep->chgWData(oldp+515,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg),132);
            __Vtemp1328[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (1U | 
                                               ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                     << 1U)));
            __Vtemp1328[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                  << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                                   << 1U))));
            __Vtemp1328[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                  << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                                   << 1U))));
            __Vtemp1328[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]) 
                                                >> 0x1fU) 
                                               | ((~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                                  << 1U)))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xffffffffU : 0U) 
                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xffffffffU : 0U) 
                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                                   << 1U))));
            __Vtemp1328[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xfU : 0U) & 
                                  (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xfU : 0U) 
                                    & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                        >> 0x1fU) | 
                                       (0xeU & ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                << 1U))))) 
                                | ((((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                         >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))
                                     ? 0xfU : 0U) & 
                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                               | (((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                              >> 1U)) 
                                          & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))
                                    ? 0xfU : 0U) & 
                                  ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U] 
                                    >> 0x1fU) | (0xeU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U] 
                                                    << 1U)))));
            VL_ADD_W(5, __Vtemp1329, __Vtemp1328, vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg);
            VL_EXTEND_WI(133,1, __Vtemp1330, ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)));
            __Vtemp1331[0U] = __Vtemp1330[0U];
            __Vtemp1331[1U] = __Vtemp1330[1U];
            __Vtemp1331[2U] = __Vtemp1330[2U];
            __Vtemp1331[3U] = __Vtemp1330[3U];
            __Vtemp1331[4U] = __Vtemp1330[4U];
            VL_ADD_W(5, __Vtemp1332, __Vtemp1329, __Vtemp1331);
            __Vtemp1333[0U] = __Vtemp1332[0U];
            __Vtemp1333[1U] = __Vtemp1332[1U];
            __Vtemp1333[2U] = __Vtemp1332[2U];
            __Vtemp1333[3U] = __Vtemp1332[3U];
            __Vtemp1333[4U] = (0xfU & __Vtemp1332[4U]);
            tracep->chgWData(oldp+520,(__Vtemp1333),132);
            tracep->chgCData(oldp+525,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg),2);
            tracep->chgBit(oldp+526,((0U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
            tracep->chgBit(oldp+527,((1U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
            tracep->chgCData(oldp+528,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__cnt),6);
            VL_EXTEND_WQ(66,64, __Vtemp1334, ((0x13U 
                                               == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[2U] 
                                                      >> 3U)))
                                               ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                               : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB));
            __Vtemp1335[0U] = (__Vtemp1334[0U] << 1U);
            __Vtemp1335[1U] = ((__Vtemp1334[0U] >> 0x1fU) 
                               | (__Vtemp1334[1U] << 1U));
            __Vtemp1335[2U] = ((__Vtemp1334[1U] >> 0x1fU) 
                               | (__Vtemp1334[2U] << 1U));
            tracep->chgWData(oldp+529,(__Vtemp1335),67);
            tracep->chgWData(oldp+532,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg),67);
            tracep->chgBit(oldp+535,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative));
            tracep->chgBit(oldp+536,(((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                          >> 2U)) & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT___T_9))));
            tracep->chgBit(oldp+537,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative));
            tracep->chgBit(oldp+538,((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))));
            tracep->chgBit(oldp+539,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr));
            tracep->chgBit(oldp+540,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren));
            tracep->chgCData(oldp+541,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H),6);
            tracep->chgQData(oldp+542,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                           >> 7U))))),64);
            tracep->chgBit(oldp+544,((1U & ((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                              >> 2U) 
                                             | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                                & (0x341U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                       >> 0xdU))))) 
                                            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)))));
            tracep->chgBit(oldp+545,((1U & ((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                              >> 2U) 
                                             | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                                & (0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                       >> 0xdU))))) 
                                            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)))));
            tracep->chgQData(oldp+546,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mcauseins),64);
            tracep->chgBit(oldp+548,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                      & (0x305U == 
                                         (0xfffU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                           >> 0xdU))))));
            tracep->chgQData(oldp+549,((((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_25 
                                            | ((2U 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
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
                                         | ((0x10U 
                                             & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                             ? ((~ (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                                       >> 7U))))) 
                                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins)
                                             : 0ULL)) 
                                        | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_30)),64);
            tracep->chgBit(oldp+551,((1U & (((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                               & (0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                                      >> 0xdU)))) 
                                              | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96) 
                                                 >> 2U)) 
                                             | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)) 
                                            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_96)))));
            tracep->chgQData(oldp+552,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins),64);
            tracep->chgBit(oldp+554,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                      & (0x304U == 
                                         (0xfffU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                           >> 0xdU))))));
            tracep->chgQData(oldp+555,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins),64);
            tracep->chgQData(oldp+557,((((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_25 
                                            | ((2U 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
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
                                         | ((0x10U 
                                             & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                             ? ((~ (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                                       >> 7U))))) 
                                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins)
                                             : 0ULL)) 
                                        | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___T_30)),64);
            tracep->chgBit(oldp+559,((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                       & (0x344U == 
                                          (0xfffU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[8U] 
                                            >> 0xdU)))) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr))));
            tracep->chgQData(oldp+560,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins),64);
            tracep->chgIData(oldp+562,(((0x20000U & 
                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U])
                                         ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[4U] 
                                             << 0x13U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[3U] 
                                               >> 0xdU))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1))),32);
            tracep->chgBit(oldp+563,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                        >> 4U) & ((0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                      >> 0x12U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                      >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+564,(((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         >> 4U) & (
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                       >> 8U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                       >> 7U)))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                    >> 7U)))) 
                                      & (((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0x12U)) 
                                          != (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 7U))) 
                                         | (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                               >> 4U))))));
            tracep->chgBit(oldp+565,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                            >> 1U)) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+566,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                        >> 4U) & ((0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                      >> 0x12U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                      >> 2U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+567,(((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         >> 4U) & (
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                       >> 8U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                       >> 2U)))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                    >> 2U)))) 
                                      & (((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0x12U)) 
                                          != (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 2U))) 
                                         | (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                               >> 4U))))));
            tracep->chgBit(oldp+568,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_197[2U] 
                                            >> 1U)) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                 >> 2U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_59[1U] 
                                                   >> 2U))))));
            tracep->chgIData(oldp+569,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__dnpcReg),32);
            tracep->chgBit(oldp+570,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire)))));
            tracep->chgIData(oldp+571,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__dnpcReg),32);
            tracep->chgBit(oldp+572,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire)))));
            tracep->chgIData(oldp+573,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__dnpcReg),32);
            tracep->chgBit(oldp+574,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire)))));
            tracep->chgIData(oldp+575,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__dnpcReg),32);
            tracep->chgBit(oldp+576,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire)))));
            tracep->chgIData(oldp+577,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__dnpcReg),32);
            tracep->chgBit(oldp+578,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire)))));
            tracep->chgIData(oldp+579,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__dnpcReg),32);
            tracep->chgBit(oldp+580,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire)))));
            tracep->chgIData(oldp+581,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__dnpcReg),32);
            tracep->chgBit(oldp+582,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire)))));
            tracep->chgIData(oldp+583,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__dnpcReg),32);
            tracep->chgBit(oldp+584,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire)))));
            tracep->chgIData(oldp+585,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__dnpcReg),32);
            tracep->chgBit(oldp+586,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire)))));
            tracep->chgIData(oldp+587,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__dnpcReg),32);
            tracep->chgBit(oldp+588,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire)))));
            tracep->chgIData(oldp+589,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__dnpcReg),32);
            tracep->chgBit(oldp+590,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire)))));
            tracep->chgIData(oldp+591,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__dnpcReg),32);
            tracep->chgBit(oldp+592,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire)))));
            tracep->chgIData(oldp+593,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__dnpcReg),32);
            tracep->chgBit(oldp+594,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire)))));
            tracep->chgIData(oldp+595,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__dnpcReg),32);
            tracep->chgBit(oldp+596,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire)))));
            tracep->chgIData(oldp+597,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__dnpcReg),32);
            tracep->chgBit(oldp+598,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire)))));
            tracep->chgIData(oldp+599,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__dnpcReg),32);
            tracep->chgBit(oldp+600,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire)))));
            tracep->chgIData(oldp+601,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_0),32);
            tracep->chgBit(oldp+602,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_0));
            tracep->chgBit(oldp+603,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_0));
            tracep->chgIData(oldp+604,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_1),32);
            tracep->chgBit(oldp+605,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_1));
            tracep->chgBit(oldp+606,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_1));
            tracep->chgIData(oldp+607,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_2),32);
            tracep->chgBit(oldp+608,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_2));
            tracep->chgBit(oldp+609,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_2));
            tracep->chgIData(oldp+610,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_3),32);
            tracep->chgBit(oldp+611,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_3));
            tracep->chgBit(oldp+612,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_3));
            tracep->chgIData(oldp+613,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_4),32);
            tracep->chgBit(oldp+614,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_4));
            tracep->chgBit(oldp+615,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_4));
            tracep->chgIData(oldp+616,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_5),32);
            tracep->chgBit(oldp+617,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_5));
            tracep->chgBit(oldp+618,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_5));
            tracep->chgIData(oldp+619,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_6),32);
            tracep->chgBit(oldp+620,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_6));
            tracep->chgBit(oldp+621,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_6));
            tracep->chgIData(oldp+622,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_7),32);
            tracep->chgBit(oldp+623,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_7));
            tracep->chgBit(oldp+624,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_7));
            tracep->chgIData(oldp+625,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_8),32);
            tracep->chgBit(oldp+626,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_8));
            tracep->chgBit(oldp+627,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_8));
            tracep->chgIData(oldp+628,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_9),32);
            tracep->chgBit(oldp+629,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_9));
            tracep->chgBit(oldp+630,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_9));
            tracep->chgIData(oldp+631,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_10),32);
            tracep->chgBit(oldp+632,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_10));
            tracep->chgBit(oldp+633,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_10));
            tracep->chgIData(oldp+634,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_11),32);
            tracep->chgBit(oldp+635,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_11));
            tracep->chgBit(oldp+636,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_11));
            tracep->chgIData(oldp+637,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_12),32);
            tracep->chgBit(oldp+638,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_12));
            tracep->chgBit(oldp+639,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_12));
            tracep->chgIData(oldp+640,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_13),32);
            tracep->chgBit(oldp+641,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_13));
            tracep->chgBit(oldp+642,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_13));
            tracep->chgIData(oldp+643,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_14),32);
            tracep->chgBit(oldp+644,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_14));
            tracep->chgBit(oldp+645,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_14));
            tracep->chgIData(oldp+646,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_15),32);
            tracep->chgBit(oldp+647,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_15));
            tracep->chgBit(oldp+648,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_15));
            tracep->chgBit(oldp+649,(((((((((((((((
                                                   ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_0) 
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
            tracep->chgCData(oldp+650,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__cnt),4);
            tracep->chgBit(oldp+651,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_0));
            tracep->chgBit(oldp+652,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_1));
            tracep->chgBit(oldp+653,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_2));
            tracep->chgBit(oldp+654,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_3));
            tracep->chgBit(oldp+655,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_4));
            tracep->chgBit(oldp+656,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_5));
            tracep->chgBit(oldp+657,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_6));
            tracep->chgBit(oldp+658,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_7));
            tracep->chgBit(oldp+659,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_8));
            tracep->chgBit(oldp+660,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_9));
            tracep->chgBit(oldp+661,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_10));
            tracep->chgBit(oldp+662,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_11));
            tracep->chgBit(oldp+663,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_12));
            tracep->chgBit(oldp+664,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_13));
            tracep->chgBit(oldp+665,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_14));
            tracep->chgBit(oldp+666,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_15));
            tracep->chgBit(oldp+667,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitif));
            tracep->chgBit(oldp+668,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__takenV));
            tracep->chgCData(oldp+669,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire),2);
            tracep->chgBit(oldp+670,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__takenV));
            tracep->chgCData(oldp+671,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire),2);
            tracep->chgBit(oldp+672,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__takenV));
            tracep->chgCData(oldp+673,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire),2);
            tracep->chgBit(oldp+674,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__takenV));
            tracep->chgCData(oldp+675,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire),2);
            tracep->chgBit(oldp+676,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__takenV));
            tracep->chgCData(oldp+677,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire),2);
            tracep->chgBit(oldp+678,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__takenV));
            tracep->chgCData(oldp+679,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire),2);
            tracep->chgBit(oldp+680,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__takenV));
            tracep->chgCData(oldp+681,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire),2);
            tracep->chgBit(oldp+682,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__takenV));
            tracep->chgCData(oldp+683,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire),2);
            tracep->chgBit(oldp+684,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__takenV));
            tracep->chgCData(oldp+685,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire),2);
            tracep->chgBit(oldp+686,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__takenV));
            tracep->chgCData(oldp+687,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire),2);
            tracep->chgBit(oldp+688,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__takenV));
            tracep->chgCData(oldp+689,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire),2);
            tracep->chgBit(oldp+690,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__takenV));
            tracep->chgCData(oldp+691,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire),2);
            tracep->chgBit(oldp+692,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__takenV));
            tracep->chgCData(oldp+693,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire),2);
            tracep->chgBit(oldp+694,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__takenV));
            tracep->chgCData(oldp+695,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire),2);
            tracep->chgBit(oldp+696,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__takenV));
            tracep->chgCData(oldp+697,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire),2);
            tracep->chgBit(oldp+698,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__takenV));
            tracep->chgCData(oldp+699,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire),2);
            tracep->chgBit(oldp+700,((0x100073U == 
                                      ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                        << 0x13U) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U] 
                                        >> 0xdU)))));
            tracep->chgCData(oldp+701,((0xfU & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),4);
            tracep->chgIData(oldp+702,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                        >> 0xaU)),22);
            tracep->chgBit(oldp+703,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_0));
            tracep->chgBit(oldp+704,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_0));
            tracep->chgBit(oldp+705,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_0));
            tracep->chgBit(oldp+706,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_0));
            tracep->chgBit(oldp+707,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_0));
            tracep->chgBit(oldp+708,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_0));
            tracep->chgBit(oldp+709,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_0));
            tracep->chgBit(oldp+710,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_0));
            tracep->chgBit(oldp+711,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_0));
            tracep->chgBit(oldp+712,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_0));
            tracep->chgBit(oldp+713,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_0));
            tracep->chgBit(oldp+714,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_0));
            tracep->chgBit(oldp+715,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_0));
            tracep->chgBit(oldp+716,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_0));
            tracep->chgBit(oldp+717,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_0));
            tracep->chgBit(oldp+718,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_0));
            tracep->chgBit(oldp+719,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_0));
            tracep->chgBit(oldp+720,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_0));
            tracep->chgBit(oldp+721,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_0));
            tracep->chgBit(oldp+722,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_0));
            tracep->chgBit(oldp+723,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_0));
            tracep->chgBit(oldp+724,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_0));
            tracep->chgBit(oldp+725,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_0));
            tracep->chgBit(oldp+726,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_0));
            tracep->chgBit(oldp+727,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_0));
            tracep->chgBit(oldp+728,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_0));
            tracep->chgBit(oldp+729,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_0));
            tracep->chgBit(oldp+730,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_0));
            tracep->chgBit(oldp+731,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_0));
            tracep->chgBit(oldp+732,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_0));
            tracep->chgBit(oldp+733,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_0));
            tracep->chgBit(oldp+734,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_0));
            tracep->chgBit(oldp+735,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_0));
            tracep->chgBit(oldp+736,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_0));
            tracep->chgBit(oldp+737,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_0));
            tracep->chgBit(oldp+738,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_0));
            tracep->chgBit(oldp+739,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_0));
            tracep->chgBit(oldp+740,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_0));
            tracep->chgBit(oldp+741,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_0));
            tracep->chgBit(oldp+742,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_0));
            tracep->chgBit(oldp+743,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_0));
            tracep->chgBit(oldp+744,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_0));
            tracep->chgBit(oldp+745,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_0));
            tracep->chgBit(oldp+746,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_0));
            tracep->chgBit(oldp+747,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_0));
            tracep->chgBit(oldp+748,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_0));
            tracep->chgBit(oldp+749,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_0));
            tracep->chgBit(oldp+750,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_0));
            tracep->chgBit(oldp+751,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_0));
            tracep->chgBit(oldp+752,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_0));
            tracep->chgBit(oldp+753,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_0));
            tracep->chgBit(oldp+754,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_0));
            tracep->chgBit(oldp+755,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_0));
            tracep->chgBit(oldp+756,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_0));
            tracep->chgBit(oldp+757,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_0));
            tracep->chgBit(oldp+758,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_0));
            tracep->chgBit(oldp+759,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_0));
            tracep->chgBit(oldp+760,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_0));
            tracep->chgBit(oldp+761,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_0));
            tracep->chgBit(oldp+762,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_0));
            tracep->chgBit(oldp+763,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_0));
            tracep->chgBit(oldp+764,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_0));
            tracep->chgBit(oldp+765,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_0));
            tracep->chgBit(oldp+766,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_0));
            tracep->chgBit(oldp+767,(((0x3fU == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_0)
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_0)
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_0)
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_0)
                                                   : 
                                                  ((0x3bU 
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
            tracep->chgIData(oldp+768,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_0),22);
            tracep->chgIData(oldp+769,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_0),22);
            tracep->chgIData(oldp+770,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_0),22);
            tracep->chgIData(oldp+771,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_0),22);
            tracep->chgIData(oldp+772,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_0),22);
            tracep->chgIData(oldp+773,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_0),22);
            tracep->chgIData(oldp+774,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_0),22);
            tracep->chgIData(oldp+775,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_0),22);
            tracep->chgIData(oldp+776,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_0),22);
            tracep->chgIData(oldp+777,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_0),22);
            tracep->chgIData(oldp+778,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_0),22);
            tracep->chgIData(oldp+779,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_0),22);
            tracep->chgIData(oldp+780,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_0),22);
            tracep->chgIData(oldp+781,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_0),22);
            tracep->chgIData(oldp+782,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_0),22);
            tracep->chgIData(oldp+783,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_0),22);
            tracep->chgIData(oldp+784,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_0),22);
            tracep->chgIData(oldp+785,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_0),22);
            tracep->chgIData(oldp+786,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_0),22);
            tracep->chgIData(oldp+787,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_0),22);
            tracep->chgIData(oldp+788,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_0),22);
            tracep->chgIData(oldp+789,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_0),22);
            tracep->chgIData(oldp+790,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_0),22);
            tracep->chgIData(oldp+791,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_0),22);
            tracep->chgIData(oldp+792,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_0),22);
            tracep->chgIData(oldp+793,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_0),22);
            tracep->chgIData(oldp+794,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_0),22);
            tracep->chgIData(oldp+795,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_0),22);
            tracep->chgIData(oldp+796,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_0),22);
            tracep->chgIData(oldp+797,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_0),22);
            tracep->chgIData(oldp+798,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_0),22);
            tracep->chgIData(oldp+799,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_0),22);
            tracep->chgIData(oldp+800,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_0),22);
            tracep->chgIData(oldp+801,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_0),22);
            tracep->chgIData(oldp+802,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_0),22);
            tracep->chgIData(oldp+803,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_0),22);
            tracep->chgIData(oldp+804,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_0),22);
            tracep->chgIData(oldp+805,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_0),22);
            tracep->chgIData(oldp+806,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_0),22);
            tracep->chgIData(oldp+807,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_0),22);
            tracep->chgIData(oldp+808,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_0),22);
            tracep->chgIData(oldp+809,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_0),22);
            tracep->chgIData(oldp+810,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_0),22);
            tracep->chgIData(oldp+811,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_0),22);
            tracep->chgIData(oldp+812,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_0),22);
            tracep->chgIData(oldp+813,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_0),22);
            tracep->chgIData(oldp+814,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_0),22);
            tracep->chgIData(oldp+815,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_0),22);
            tracep->chgIData(oldp+816,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_0),22);
            tracep->chgIData(oldp+817,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_0),22);
            tracep->chgIData(oldp+818,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_0),22);
            tracep->chgIData(oldp+819,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_0),22);
            tracep->chgIData(oldp+820,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_0),22);
            tracep->chgIData(oldp+821,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_0),22);
            tracep->chgIData(oldp+822,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_0),22);
            tracep->chgIData(oldp+823,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_0),22);
            tracep->chgIData(oldp+824,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_0),22);
            tracep->chgIData(oldp+825,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_0),22);
            tracep->chgIData(oldp+826,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_0),22);
            tracep->chgIData(oldp+827,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_0),22);
            tracep->chgIData(oldp+828,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_0),22);
            tracep->chgIData(oldp+829,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_0),22);
            tracep->chgIData(oldp+830,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_0),22);
            tracep->chgIData(oldp+831,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_0),22);
            tracep->chgIData(oldp+832,(((0x3fU == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_0
                                         : ((0x3eU 
                                             == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                             ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_0
                                             : ((0x3dU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                                 ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_0
                                                 : 
                                                ((0x3cU 
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
            tracep->chgBit(oldp+833,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_0));
            tracep->chgBit(oldp+834,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_1));
            tracep->chgBit(oldp+835,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_1));
            tracep->chgBit(oldp+836,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_1));
            tracep->chgBit(oldp+837,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_1));
            tracep->chgBit(oldp+838,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_1));
            tracep->chgBit(oldp+839,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_1));
            tracep->chgBit(oldp+840,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_1));
            tracep->chgBit(oldp+841,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_1));
            tracep->chgBit(oldp+842,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_1));
            tracep->chgBit(oldp+843,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_1));
            tracep->chgBit(oldp+844,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_1));
            tracep->chgBit(oldp+845,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_1));
            tracep->chgBit(oldp+846,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_1));
            tracep->chgBit(oldp+847,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_1));
            tracep->chgBit(oldp+848,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_1));
            tracep->chgBit(oldp+849,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_1));
            tracep->chgBit(oldp+850,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_1));
            tracep->chgBit(oldp+851,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_1));
            tracep->chgBit(oldp+852,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_1));
            tracep->chgBit(oldp+853,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_1));
            tracep->chgBit(oldp+854,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_1));
            tracep->chgBit(oldp+855,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_1));
            tracep->chgBit(oldp+856,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_1));
            tracep->chgBit(oldp+857,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_1));
            tracep->chgBit(oldp+858,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_1));
            tracep->chgBit(oldp+859,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_1));
            tracep->chgBit(oldp+860,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_1));
            tracep->chgBit(oldp+861,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_1));
            tracep->chgBit(oldp+862,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_1));
            tracep->chgBit(oldp+863,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_1));
            tracep->chgBit(oldp+864,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_1));
            tracep->chgBit(oldp+865,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_1));
            tracep->chgBit(oldp+866,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_1));
            tracep->chgBit(oldp+867,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_1));
            tracep->chgBit(oldp+868,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_1));
            tracep->chgBit(oldp+869,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_1));
            tracep->chgBit(oldp+870,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_1));
            tracep->chgBit(oldp+871,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_1));
            tracep->chgBit(oldp+872,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_1));
            tracep->chgBit(oldp+873,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_1));
            tracep->chgBit(oldp+874,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_1));
            tracep->chgBit(oldp+875,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_1));
            tracep->chgBit(oldp+876,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_1));
            tracep->chgBit(oldp+877,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_1));
            tracep->chgBit(oldp+878,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_1));
            tracep->chgBit(oldp+879,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_1));
            tracep->chgBit(oldp+880,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_1));
            tracep->chgBit(oldp+881,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_1));
            tracep->chgBit(oldp+882,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_1));
            tracep->chgBit(oldp+883,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_1));
            tracep->chgBit(oldp+884,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_1));
            tracep->chgBit(oldp+885,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_1));
            tracep->chgBit(oldp+886,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_1));
            tracep->chgBit(oldp+887,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_1));
            tracep->chgBit(oldp+888,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_1));
            tracep->chgBit(oldp+889,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_1));
            tracep->chgBit(oldp+890,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_1));
            tracep->chgBit(oldp+891,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_1));
            tracep->chgBit(oldp+892,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_1));
            tracep->chgBit(oldp+893,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_1));
            tracep->chgBit(oldp+894,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_1));
            tracep->chgBit(oldp+895,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_1));
            tracep->chgBit(oldp+896,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_1));
            tracep->chgBit(oldp+897,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_1));
            tracep->chgBit(oldp+898,(((0x3fU == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_1)
                                       : ((0x3eU == 
                                           (0x3fU & 
                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                             >> 4U)))
                                           ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_1)
                                           : ((0x3dU 
                                               == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                               ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_1)
                                               : ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_1)
                                                   : 
                                                  ((0x3bU 
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
            tracep->chgIData(oldp+899,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_1),22);
            tracep->chgIData(oldp+900,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_1),22);
            tracep->chgIData(oldp+901,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_1),22);
            tracep->chgIData(oldp+902,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_1),22);
            tracep->chgIData(oldp+903,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_1),22);
            tracep->chgIData(oldp+904,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_1),22);
            tracep->chgIData(oldp+905,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_1),22);
            tracep->chgIData(oldp+906,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_1),22);
            tracep->chgIData(oldp+907,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_1),22);
            tracep->chgIData(oldp+908,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_1),22);
            tracep->chgIData(oldp+909,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_1),22);
            tracep->chgIData(oldp+910,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_1),22);
            tracep->chgIData(oldp+911,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_1),22);
            tracep->chgIData(oldp+912,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_1),22);
            tracep->chgIData(oldp+913,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_1),22);
            tracep->chgIData(oldp+914,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_1),22);
            tracep->chgIData(oldp+915,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_1),22);
            tracep->chgIData(oldp+916,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_1),22);
            tracep->chgIData(oldp+917,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_1),22);
            tracep->chgIData(oldp+918,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_1),22);
            tracep->chgIData(oldp+919,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_1),22);
            tracep->chgIData(oldp+920,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_1),22);
            tracep->chgIData(oldp+921,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_1),22);
            tracep->chgIData(oldp+922,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_1),22);
            tracep->chgIData(oldp+923,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_1),22);
            tracep->chgIData(oldp+924,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_1),22);
            tracep->chgIData(oldp+925,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_1),22);
            tracep->chgIData(oldp+926,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_1),22);
            tracep->chgIData(oldp+927,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_1),22);
            tracep->chgIData(oldp+928,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_1),22);
            tracep->chgIData(oldp+929,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_1),22);
            tracep->chgIData(oldp+930,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_1),22);
            tracep->chgIData(oldp+931,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_1),22);
            tracep->chgIData(oldp+932,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_1),22);
            tracep->chgIData(oldp+933,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_1),22);
            tracep->chgIData(oldp+934,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_1),22);
            tracep->chgIData(oldp+935,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_1),22);
            tracep->chgIData(oldp+936,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_1),22);
            tracep->chgIData(oldp+937,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_1),22);
            tracep->chgIData(oldp+938,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_1),22);
            tracep->chgIData(oldp+939,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_1),22);
            tracep->chgIData(oldp+940,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_1),22);
            tracep->chgIData(oldp+941,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_1),22);
            tracep->chgIData(oldp+942,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_1),22);
            tracep->chgIData(oldp+943,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_1),22);
            tracep->chgIData(oldp+944,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_1),22);
            tracep->chgIData(oldp+945,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_1),22);
            tracep->chgIData(oldp+946,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_1),22);
            tracep->chgIData(oldp+947,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_1),22);
            tracep->chgIData(oldp+948,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_1),22);
            tracep->chgIData(oldp+949,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_1),22);
            tracep->chgIData(oldp+950,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_1),22);
            tracep->chgIData(oldp+951,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_1),22);
            tracep->chgIData(oldp+952,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_1),22);
            tracep->chgIData(oldp+953,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_1),22);
            tracep->chgIData(oldp+954,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_1),22);
            tracep->chgIData(oldp+955,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_1),22);
            tracep->chgIData(oldp+956,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_1),22);
            tracep->chgIData(oldp+957,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_1),22);
            tracep->chgIData(oldp+958,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_1),22);
            tracep->chgIData(oldp+959,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_1),22);
            tracep->chgIData(oldp+960,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_1),22);
            tracep->chgIData(oldp+961,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_1),22);
            tracep->chgIData(oldp+962,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_1),22);
            tracep->chgIData(oldp+963,(((0x3fU == (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_1
                                         : ((0x3eU 
                                             == (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                             ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_1
                                             : ((0x3dU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                                 ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_1
                                                 : 
                                                ((0x3cU 
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
            tracep->chgBit(oldp+964,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_1));
            tracep->chgBit(oldp+965,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_2));
            tracep->chgBit(oldp+966,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_2));
            tracep->chgBit(oldp+967,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_2));
            tracep->chgBit(oldp+968,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_2));
            tracep->chgBit(oldp+969,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_2));
            tracep->chgBit(oldp+970,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_2));
            tracep->chgBit(oldp+971,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_2));
            tracep->chgBit(oldp+972,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_2));
            tracep->chgBit(oldp+973,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_2));
            tracep->chgBit(oldp+974,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_2));
            tracep->chgBit(oldp+975,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_2));
            tracep->chgBit(oldp+976,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_2));
            tracep->chgBit(oldp+977,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_2));
            tracep->chgBit(oldp+978,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_2));
            tracep->chgBit(oldp+979,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_2));
            tracep->chgBit(oldp+980,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_2));
            tracep->chgBit(oldp+981,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_2));
            tracep->chgBit(oldp+982,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_2));
            tracep->chgBit(oldp+983,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_2));
            tracep->chgBit(oldp+984,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_2));
            tracep->chgBit(oldp+985,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_2));
            tracep->chgBit(oldp+986,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_2));
            tracep->chgBit(oldp+987,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_2));
            tracep->chgBit(oldp+988,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_2));
            tracep->chgBit(oldp+989,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_2));
            tracep->chgBit(oldp+990,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_2));
            tracep->chgBit(oldp+991,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_2));
            tracep->chgBit(oldp+992,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_2));
            tracep->chgBit(oldp+993,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_2));
            tracep->chgBit(oldp+994,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_2));
            tracep->chgBit(oldp+995,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_2));
            tracep->chgBit(oldp+996,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_2));
            tracep->chgBit(oldp+997,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_2));
            tracep->chgBit(oldp+998,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_2));
            tracep->chgBit(oldp+999,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_2));
            tracep->chgBit(oldp+1000,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_2));
            tracep->chgBit(oldp+1001,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_2));
            tracep->chgBit(oldp+1002,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_2));
            tracep->chgBit(oldp+1003,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_2));
            tracep->chgBit(oldp+1004,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_2));
            tracep->chgBit(oldp+1005,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_2));
            tracep->chgBit(oldp+1006,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_2));
            tracep->chgBit(oldp+1007,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_2));
            tracep->chgBit(oldp+1008,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_2));
            tracep->chgBit(oldp+1009,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_2));
            tracep->chgBit(oldp+1010,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_2));
            tracep->chgBit(oldp+1011,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_2));
            tracep->chgBit(oldp+1012,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_2));
            tracep->chgBit(oldp+1013,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_2));
            tracep->chgBit(oldp+1014,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_2));
            tracep->chgBit(oldp+1015,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_2));
            tracep->chgBit(oldp+1016,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_2));
            tracep->chgBit(oldp+1017,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_2));
            tracep->chgBit(oldp+1018,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_2));
            tracep->chgBit(oldp+1019,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_2));
            tracep->chgBit(oldp+1020,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_2));
            tracep->chgBit(oldp+1021,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_2));
            tracep->chgBit(oldp+1022,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_2));
            tracep->chgBit(oldp+1023,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_2));
            tracep->chgBit(oldp+1024,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_2));
            tracep->chgBit(oldp+1025,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_2));
            tracep->chgBit(oldp+1026,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_2));
            tracep->chgBit(oldp+1027,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_2));
            tracep->chgBit(oldp+1028,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_2));
            tracep->chgBit(oldp+1029,(((0x3fU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_2)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_2)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_2)
                                                : (
                                                   (0x3cU 
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
            tracep->chgIData(oldp+1030,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_2),22);
            tracep->chgIData(oldp+1031,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_2),22);
            tracep->chgIData(oldp+1032,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_2),22);
            tracep->chgIData(oldp+1033,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_2),22);
            tracep->chgIData(oldp+1034,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_2),22);
            tracep->chgIData(oldp+1035,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_2),22);
            tracep->chgIData(oldp+1036,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_2),22);
            tracep->chgIData(oldp+1037,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_2),22);
            tracep->chgIData(oldp+1038,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_2),22);
            tracep->chgIData(oldp+1039,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_2),22);
            tracep->chgIData(oldp+1040,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_2),22);
            tracep->chgIData(oldp+1041,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_2),22);
            tracep->chgIData(oldp+1042,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_2),22);
            tracep->chgIData(oldp+1043,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_2),22);
            tracep->chgIData(oldp+1044,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_2),22);
            tracep->chgIData(oldp+1045,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_2),22);
            tracep->chgIData(oldp+1046,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_2),22);
            tracep->chgIData(oldp+1047,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_2),22);
            tracep->chgIData(oldp+1048,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_2),22);
            tracep->chgIData(oldp+1049,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_2),22);
            tracep->chgIData(oldp+1050,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_2),22);
            tracep->chgIData(oldp+1051,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_2),22);
            tracep->chgIData(oldp+1052,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_2),22);
            tracep->chgIData(oldp+1053,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_2),22);
            tracep->chgIData(oldp+1054,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_2),22);
            tracep->chgIData(oldp+1055,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_2),22);
            tracep->chgIData(oldp+1056,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_2),22);
            tracep->chgIData(oldp+1057,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_2),22);
            tracep->chgIData(oldp+1058,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_2),22);
            tracep->chgIData(oldp+1059,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_2),22);
            tracep->chgIData(oldp+1060,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_2),22);
            tracep->chgIData(oldp+1061,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_2),22);
            tracep->chgIData(oldp+1062,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_2),22);
            tracep->chgIData(oldp+1063,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_2),22);
            tracep->chgIData(oldp+1064,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_2),22);
            tracep->chgIData(oldp+1065,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_2),22);
            tracep->chgIData(oldp+1066,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_2),22);
            tracep->chgIData(oldp+1067,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_2),22);
            tracep->chgIData(oldp+1068,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_2),22);
            tracep->chgIData(oldp+1069,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_2),22);
            tracep->chgIData(oldp+1070,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_2),22);
            tracep->chgIData(oldp+1071,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_2),22);
            tracep->chgIData(oldp+1072,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_2),22);
            tracep->chgIData(oldp+1073,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_2),22);
            tracep->chgIData(oldp+1074,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_2),22);
            tracep->chgIData(oldp+1075,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_2),22);
            tracep->chgIData(oldp+1076,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_2),22);
            tracep->chgIData(oldp+1077,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_2),22);
            tracep->chgIData(oldp+1078,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_2),22);
            tracep->chgIData(oldp+1079,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_2),22);
            tracep->chgIData(oldp+1080,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_2),22);
            tracep->chgIData(oldp+1081,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_2),22);
            tracep->chgIData(oldp+1082,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_2),22);
            tracep->chgIData(oldp+1083,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_2),22);
            tracep->chgIData(oldp+1084,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_2),22);
            tracep->chgIData(oldp+1085,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_2),22);
            tracep->chgIData(oldp+1086,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_2),22);
            tracep->chgIData(oldp+1087,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_2),22);
            tracep->chgIData(oldp+1088,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_2),22);
            tracep->chgIData(oldp+1089,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_2),22);
            tracep->chgIData(oldp+1090,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_2),22);
            tracep->chgIData(oldp+1091,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_2),22);
            tracep->chgIData(oldp+1092,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_2),22);
            tracep->chgIData(oldp+1093,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_2),22);
            tracep->chgIData(oldp+1094,(((0x3fU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_2
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_2
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_2
                                                  : 
                                                 ((0x3cU 
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
            tracep->chgBit(oldp+1095,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_2));
            tracep->chgBit(oldp+1096,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_3));
            tracep->chgBit(oldp+1097,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_3));
            tracep->chgBit(oldp+1098,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_3));
            tracep->chgBit(oldp+1099,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_3));
            tracep->chgBit(oldp+1100,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_3));
            tracep->chgBit(oldp+1101,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_3));
            tracep->chgBit(oldp+1102,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_3));
            tracep->chgBit(oldp+1103,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_3));
            tracep->chgBit(oldp+1104,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_3));
            tracep->chgBit(oldp+1105,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_3));
            tracep->chgBit(oldp+1106,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_3));
            tracep->chgBit(oldp+1107,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_3));
            tracep->chgBit(oldp+1108,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_3));
            tracep->chgBit(oldp+1109,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_3));
            tracep->chgBit(oldp+1110,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_3));
            tracep->chgBit(oldp+1111,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_3));
            tracep->chgBit(oldp+1112,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_3));
            tracep->chgBit(oldp+1113,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_3));
            tracep->chgBit(oldp+1114,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_3));
            tracep->chgBit(oldp+1115,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_3));
            tracep->chgBit(oldp+1116,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_3));
            tracep->chgBit(oldp+1117,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_3));
            tracep->chgBit(oldp+1118,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_3));
            tracep->chgBit(oldp+1119,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_3));
            tracep->chgBit(oldp+1120,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_3));
            tracep->chgBit(oldp+1121,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_3));
            tracep->chgBit(oldp+1122,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_3));
            tracep->chgBit(oldp+1123,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_3));
            tracep->chgBit(oldp+1124,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_3));
            tracep->chgBit(oldp+1125,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_3));
            tracep->chgBit(oldp+1126,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_3));
            tracep->chgBit(oldp+1127,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_3));
            tracep->chgBit(oldp+1128,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_3));
            tracep->chgBit(oldp+1129,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_3));
            tracep->chgBit(oldp+1130,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_3));
            tracep->chgBit(oldp+1131,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_3));
            tracep->chgBit(oldp+1132,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_3));
            tracep->chgBit(oldp+1133,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_3));
            tracep->chgBit(oldp+1134,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_3));
            tracep->chgBit(oldp+1135,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_3));
            tracep->chgBit(oldp+1136,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_3));
            tracep->chgBit(oldp+1137,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_3));
            tracep->chgBit(oldp+1138,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_3));
            tracep->chgBit(oldp+1139,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_3));
            tracep->chgBit(oldp+1140,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_3));
            tracep->chgBit(oldp+1141,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_3));
            tracep->chgBit(oldp+1142,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_3));
            tracep->chgBit(oldp+1143,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_3));
            tracep->chgBit(oldp+1144,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_3));
            tracep->chgBit(oldp+1145,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_3));
            tracep->chgBit(oldp+1146,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_3));
            tracep->chgBit(oldp+1147,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_3));
            tracep->chgBit(oldp+1148,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_3));
            tracep->chgBit(oldp+1149,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_3));
            tracep->chgBit(oldp+1150,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_3));
            tracep->chgBit(oldp+1151,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_3));
            tracep->chgBit(oldp+1152,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_3));
            tracep->chgBit(oldp+1153,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_3));
            tracep->chgBit(oldp+1154,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_3));
            tracep->chgBit(oldp+1155,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_3));
            tracep->chgBit(oldp+1156,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_3));
            tracep->chgBit(oldp+1157,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_3));
            tracep->chgBit(oldp+1158,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_3));
            tracep->chgBit(oldp+1159,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_3));
            tracep->chgBit(oldp+1160,(((0x3fU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_3)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_3)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_3)
                                                : (
                                                   (0x3cU 
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
            tracep->chgIData(oldp+1161,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_3),22);
            tracep->chgIData(oldp+1162,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_3),22);
            tracep->chgIData(oldp+1163,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_3),22);
            tracep->chgIData(oldp+1164,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_3),22);
            tracep->chgIData(oldp+1165,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_3),22);
            tracep->chgIData(oldp+1166,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_3),22);
            tracep->chgIData(oldp+1167,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_3),22);
            tracep->chgIData(oldp+1168,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_3),22);
            tracep->chgIData(oldp+1169,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_3),22);
            tracep->chgIData(oldp+1170,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_3),22);
            tracep->chgIData(oldp+1171,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_3),22);
            tracep->chgIData(oldp+1172,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_3),22);
            tracep->chgIData(oldp+1173,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_3),22);
            tracep->chgIData(oldp+1174,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_3),22);
            tracep->chgIData(oldp+1175,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_3),22);
            tracep->chgIData(oldp+1176,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_3),22);
            tracep->chgIData(oldp+1177,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_3),22);
            tracep->chgIData(oldp+1178,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_3),22);
            tracep->chgIData(oldp+1179,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_3),22);
            tracep->chgIData(oldp+1180,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_3),22);
            tracep->chgIData(oldp+1181,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_3),22);
            tracep->chgIData(oldp+1182,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_3),22);
            tracep->chgIData(oldp+1183,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_3),22);
            tracep->chgIData(oldp+1184,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_3),22);
            tracep->chgIData(oldp+1185,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_3),22);
            tracep->chgIData(oldp+1186,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_3),22);
            tracep->chgIData(oldp+1187,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_3),22);
            tracep->chgIData(oldp+1188,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_3),22);
            tracep->chgIData(oldp+1189,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_3),22);
            tracep->chgIData(oldp+1190,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_3),22);
            tracep->chgIData(oldp+1191,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_3),22);
            tracep->chgIData(oldp+1192,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_3),22);
            tracep->chgIData(oldp+1193,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_3),22);
            tracep->chgIData(oldp+1194,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_3),22);
            tracep->chgIData(oldp+1195,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_3),22);
            tracep->chgIData(oldp+1196,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_3),22);
            tracep->chgIData(oldp+1197,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_3),22);
            tracep->chgIData(oldp+1198,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_3),22);
            tracep->chgIData(oldp+1199,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_3),22);
            tracep->chgIData(oldp+1200,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_3),22);
            tracep->chgIData(oldp+1201,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_3),22);
            tracep->chgIData(oldp+1202,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_3),22);
            tracep->chgIData(oldp+1203,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_3),22);
            tracep->chgIData(oldp+1204,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_3),22);
            tracep->chgIData(oldp+1205,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_3),22);
            tracep->chgIData(oldp+1206,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_3),22);
            tracep->chgIData(oldp+1207,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_3),22);
            tracep->chgIData(oldp+1208,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_3),22);
            tracep->chgIData(oldp+1209,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_3),22);
            tracep->chgIData(oldp+1210,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_3),22);
            tracep->chgIData(oldp+1211,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_3),22);
            tracep->chgIData(oldp+1212,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_3),22);
            tracep->chgIData(oldp+1213,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_3),22);
            tracep->chgIData(oldp+1214,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_3),22);
            tracep->chgIData(oldp+1215,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_3),22);
            tracep->chgIData(oldp+1216,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_3),22);
            tracep->chgIData(oldp+1217,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_3),22);
            tracep->chgIData(oldp+1218,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_3),22);
            tracep->chgIData(oldp+1219,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_3),22);
            tracep->chgIData(oldp+1220,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_3),22);
            tracep->chgIData(oldp+1221,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_3),22);
            tracep->chgIData(oldp+1222,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_3),22);
            tracep->chgIData(oldp+1223,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_3),22);
            tracep->chgIData(oldp+1224,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_3),22);
            tracep->chgIData(oldp+1225,(((0x3fU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_3
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_3
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_3
                                                  : 
                                                 ((0x3cU 
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
            tracep->chgBit(oldp+1226,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_3));
            tracep->chgBit(oldp+1227,(vlSelf->ysyx_041728__DOT__iCache__DOT__hit));
            tracep->chgBit(oldp+1228,((1U & ((~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_186)) 
                                             & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__hit))))));
            tracep->chgBit(oldp+1229,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState)))));
            tracep->chgWData(oldp+1230,(vlSelf->ysyx_041728__DOT__iCache__DOT__waysel),128);
            tracep->chgCData(oldp+1234,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1),2);
            tracep->chgCData(oldp+1235,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0),2);
            tracep->chgCData(oldp+1236,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2),2);
            tracep->chgCData(oldp+1237,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3),2);
            tracep->chgCData(oldp+1238,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4),2);
            tracep->chgCData(oldp+1239,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5),2);
            tracep->chgCData(oldp+1240,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6),2);
            tracep->chgCData(oldp+1241,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7),2);
            tracep->chgCData(oldp+1242,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8),2);
            tracep->chgCData(oldp+1243,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9),2);
            tracep->chgCData(oldp+1244,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10),2);
            tracep->chgCData(oldp+1245,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11),2);
            tracep->chgCData(oldp+1246,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12),2);
            tracep->chgCData(oldp+1247,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13),2);
            tracep->chgCData(oldp+1248,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14),2);
            tracep->chgCData(oldp+1249,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15),2);
            tracep->chgCData(oldp+1250,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16),2);
            tracep->chgCData(oldp+1251,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17),2);
            tracep->chgCData(oldp+1252,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18),2);
            tracep->chgCData(oldp+1253,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19),2);
            tracep->chgCData(oldp+1254,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20),2);
            tracep->chgCData(oldp+1255,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21),2);
            tracep->chgCData(oldp+1256,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22),2);
            tracep->chgCData(oldp+1257,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23),2);
            tracep->chgCData(oldp+1258,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24),2);
            tracep->chgCData(oldp+1259,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25),2);
            tracep->chgCData(oldp+1260,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26),2);
            tracep->chgCData(oldp+1261,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27),2);
            tracep->chgCData(oldp+1262,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28),2);
            tracep->chgCData(oldp+1263,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29),2);
            tracep->chgCData(oldp+1264,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30),2);
            tracep->chgCData(oldp+1265,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31),2);
            tracep->chgCData(oldp+1266,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32),2);
            tracep->chgCData(oldp+1267,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33),2);
            tracep->chgCData(oldp+1268,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34),2);
            tracep->chgCData(oldp+1269,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35),2);
            tracep->chgCData(oldp+1270,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36),2);
            tracep->chgCData(oldp+1271,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37),2);
            tracep->chgCData(oldp+1272,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38),2);
            tracep->chgCData(oldp+1273,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39),2);
            tracep->chgCData(oldp+1274,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40),2);
            tracep->chgCData(oldp+1275,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41),2);
            tracep->chgCData(oldp+1276,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42),2);
            tracep->chgCData(oldp+1277,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43),2);
            tracep->chgCData(oldp+1278,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44),2);
            tracep->chgCData(oldp+1279,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45),2);
            tracep->chgCData(oldp+1280,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46),2);
            tracep->chgCData(oldp+1281,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47),2);
            tracep->chgCData(oldp+1282,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48),2);
            tracep->chgCData(oldp+1283,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49),2);
            tracep->chgCData(oldp+1284,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50),2);
            tracep->chgCData(oldp+1285,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51),2);
            tracep->chgCData(oldp+1286,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52),2);
            tracep->chgCData(oldp+1287,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53),2);
            tracep->chgCData(oldp+1288,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54),2);
            tracep->chgCData(oldp+1289,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55),2);
            tracep->chgCData(oldp+1290,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56),2);
            tracep->chgCData(oldp+1291,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57),2);
            tracep->chgCData(oldp+1292,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58),2);
            tracep->chgCData(oldp+1293,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59),2);
            tracep->chgCData(oldp+1294,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60),2);
            tracep->chgCData(oldp+1295,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61),2);
            tracep->chgCData(oldp+1296,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62),2);
            tracep->chgCData(oldp+1297,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63),2);
            tracep->chgCData(oldp+1298,(vlSelf->ysyx_041728__DOT__iCache__DOT__sramSel),2);
            tracep->chgCData(oldp+1299,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state),2);
            tracep->chgBit(oldp+1300,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))));
            tracep->chgCData(oldp+1301,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state),2);
            tracep->chgBit(oldp+1302,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
            tracep->chgBit(oldp+1303,(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV));
            tracep->chgBit(oldp+1304,(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV));
            tracep->chgCData(oldp+1305,(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state),2);
            tracep->chgBit(oldp+1306,((0U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))));
            tracep->chgCData(oldp+1307,((0xfU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x17U))),4);
            tracep->chgIData(oldp+1308,((0x3fffffU 
                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            >> 1U))),22);
            tracep->chgCData(oldp+1309,(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState),2);
            tracep->chgBit(oldp+1310,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_0));
            tracep->chgBit(oldp+1311,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_0));
            tracep->chgBit(oldp+1312,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_0));
            tracep->chgBit(oldp+1313,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_0));
            tracep->chgBit(oldp+1314,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_0));
            tracep->chgBit(oldp+1315,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_0));
            tracep->chgBit(oldp+1316,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_0));
            tracep->chgBit(oldp+1317,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_0));
            tracep->chgBit(oldp+1318,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_0));
            tracep->chgBit(oldp+1319,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_0));
            tracep->chgBit(oldp+1320,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_0));
            tracep->chgBit(oldp+1321,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_0));
            tracep->chgBit(oldp+1322,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_0));
            tracep->chgBit(oldp+1323,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_0));
            tracep->chgBit(oldp+1324,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_0));
            tracep->chgBit(oldp+1325,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_0));
            tracep->chgBit(oldp+1326,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_0));
            tracep->chgBit(oldp+1327,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_0));
            tracep->chgBit(oldp+1328,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_0));
            tracep->chgBit(oldp+1329,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_0));
            tracep->chgBit(oldp+1330,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_0));
            tracep->chgBit(oldp+1331,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_0));
            tracep->chgBit(oldp+1332,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_0));
            tracep->chgBit(oldp+1333,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_0));
            tracep->chgBit(oldp+1334,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_0));
            tracep->chgBit(oldp+1335,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_0));
            tracep->chgBit(oldp+1336,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_0));
            tracep->chgBit(oldp+1337,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_0));
            tracep->chgBit(oldp+1338,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_0));
            tracep->chgBit(oldp+1339,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_0));
            tracep->chgBit(oldp+1340,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_0));
            tracep->chgBit(oldp+1341,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_0));
            tracep->chgBit(oldp+1342,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_0));
            tracep->chgBit(oldp+1343,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_0));
            tracep->chgBit(oldp+1344,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_0));
            tracep->chgBit(oldp+1345,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_0));
            tracep->chgBit(oldp+1346,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_0));
            tracep->chgBit(oldp+1347,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_0));
            tracep->chgBit(oldp+1348,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_0));
            tracep->chgBit(oldp+1349,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_0));
            tracep->chgBit(oldp+1350,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_0));
            tracep->chgBit(oldp+1351,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_0));
            tracep->chgBit(oldp+1352,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_0));
            tracep->chgBit(oldp+1353,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_0));
            tracep->chgBit(oldp+1354,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_0));
            tracep->chgBit(oldp+1355,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_0));
            tracep->chgBit(oldp+1356,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_0));
            tracep->chgBit(oldp+1357,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_0));
            tracep->chgBit(oldp+1358,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_0));
            tracep->chgBit(oldp+1359,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_0));
            tracep->chgBit(oldp+1360,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_0));
            tracep->chgBit(oldp+1361,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_0));
            tracep->chgBit(oldp+1362,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_0));
            tracep->chgBit(oldp+1363,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_0));
            tracep->chgBit(oldp+1364,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_0));
            tracep->chgBit(oldp+1365,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_0));
            tracep->chgBit(oldp+1366,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_0));
            tracep->chgBit(oldp+1367,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_0));
            tracep->chgBit(oldp+1368,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_0));
            tracep->chgBit(oldp+1369,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_0));
            tracep->chgBit(oldp+1370,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_0));
            tracep->chgBit(oldp+1371,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_0));
            tracep->chgBit(oldp+1372,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_0));
            tracep->chgBit(oldp+1373,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_0));
            tracep->chgBit(oldp+1374,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_0)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_0)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_0)
                                                : (
                                                   (0x3cU 
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
            tracep->chgIData(oldp+1375,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_0),22);
            tracep->chgIData(oldp+1376,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_0),22);
            tracep->chgIData(oldp+1377,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_0),22);
            tracep->chgIData(oldp+1378,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_0),22);
            tracep->chgIData(oldp+1379,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_0),22);
            tracep->chgIData(oldp+1380,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_0),22);
            tracep->chgIData(oldp+1381,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_0),22);
            tracep->chgIData(oldp+1382,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_0),22);
            tracep->chgIData(oldp+1383,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_0),22);
            tracep->chgIData(oldp+1384,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_0),22);
            tracep->chgIData(oldp+1385,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_0),22);
            tracep->chgIData(oldp+1386,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_0),22);
            tracep->chgIData(oldp+1387,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_0),22);
            tracep->chgIData(oldp+1388,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_0),22);
            tracep->chgIData(oldp+1389,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_0),22);
            tracep->chgIData(oldp+1390,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_0),22);
            tracep->chgIData(oldp+1391,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_0),22);
            tracep->chgIData(oldp+1392,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_0),22);
            tracep->chgIData(oldp+1393,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_0),22);
            tracep->chgIData(oldp+1394,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_0),22);
            tracep->chgIData(oldp+1395,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_0),22);
            tracep->chgIData(oldp+1396,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_0),22);
            tracep->chgIData(oldp+1397,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_0),22);
            tracep->chgIData(oldp+1398,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_0),22);
            tracep->chgIData(oldp+1399,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_0),22);
            tracep->chgIData(oldp+1400,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_0),22);
            tracep->chgIData(oldp+1401,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_0),22);
            tracep->chgIData(oldp+1402,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_0),22);
            tracep->chgIData(oldp+1403,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_0),22);
            tracep->chgIData(oldp+1404,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_0),22);
            tracep->chgIData(oldp+1405,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_0),22);
            tracep->chgIData(oldp+1406,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_0),22);
            tracep->chgIData(oldp+1407,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_0),22);
            tracep->chgIData(oldp+1408,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_0),22);
            tracep->chgIData(oldp+1409,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_0),22);
            tracep->chgIData(oldp+1410,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_0),22);
            tracep->chgIData(oldp+1411,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_0),22);
            tracep->chgIData(oldp+1412,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_0),22);
            tracep->chgIData(oldp+1413,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_0),22);
            tracep->chgIData(oldp+1414,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_0),22);
            tracep->chgIData(oldp+1415,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_0),22);
            tracep->chgIData(oldp+1416,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_0),22);
            tracep->chgIData(oldp+1417,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_0),22);
            tracep->chgIData(oldp+1418,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_0),22);
            tracep->chgIData(oldp+1419,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_0),22);
            tracep->chgIData(oldp+1420,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_0),22);
            tracep->chgIData(oldp+1421,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_0),22);
            tracep->chgIData(oldp+1422,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_0),22);
            tracep->chgIData(oldp+1423,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_0),22);
            tracep->chgIData(oldp+1424,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_0),22);
            tracep->chgIData(oldp+1425,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_0),22);
            tracep->chgIData(oldp+1426,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_0),22);
            tracep->chgIData(oldp+1427,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_0),22);
            tracep->chgIData(oldp+1428,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_0),22);
            tracep->chgIData(oldp+1429,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_0),22);
            tracep->chgIData(oldp+1430,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_0),22);
            tracep->chgIData(oldp+1431,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_0),22);
            tracep->chgIData(oldp+1432,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_0),22);
            tracep->chgIData(oldp+1433,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_0),22);
            tracep->chgIData(oldp+1434,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_0),22);
            tracep->chgIData(oldp+1435,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_0),22);
            tracep->chgIData(oldp+1436,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_0),22);
            tracep->chgIData(oldp+1437,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_0),22);
            tracep->chgIData(oldp+1438,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_0),22);
            tracep->chgIData(oldp+1439,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_0
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_0
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_0
                                                  : 
                                                 ((0x3cU 
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
            tracep->chgBit(oldp+1440,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_0));
            tracep->chgBit(oldp+1441,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_1));
            tracep->chgBit(oldp+1442,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_1));
            tracep->chgBit(oldp+1443,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_1));
            tracep->chgBit(oldp+1444,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_1));
            tracep->chgBit(oldp+1445,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_1));
            tracep->chgBit(oldp+1446,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_1));
            tracep->chgBit(oldp+1447,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_1));
            tracep->chgBit(oldp+1448,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_1));
            tracep->chgBit(oldp+1449,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_1));
            tracep->chgBit(oldp+1450,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_1));
            tracep->chgBit(oldp+1451,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_1));
            tracep->chgBit(oldp+1452,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_1));
            tracep->chgBit(oldp+1453,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_1));
            tracep->chgBit(oldp+1454,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_1));
            tracep->chgBit(oldp+1455,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_1));
            tracep->chgBit(oldp+1456,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_1));
            tracep->chgBit(oldp+1457,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_1));
            tracep->chgBit(oldp+1458,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_1));
            tracep->chgBit(oldp+1459,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_1));
            tracep->chgBit(oldp+1460,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_1));
            tracep->chgBit(oldp+1461,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_1));
            tracep->chgBit(oldp+1462,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_1));
            tracep->chgBit(oldp+1463,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_1));
            tracep->chgBit(oldp+1464,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_1));
            tracep->chgBit(oldp+1465,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_1));
            tracep->chgBit(oldp+1466,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_1));
            tracep->chgBit(oldp+1467,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_1));
            tracep->chgBit(oldp+1468,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_1));
            tracep->chgBit(oldp+1469,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_1));
            tracep->chgBit(oldp+1470,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_1));
            tracep->chgBit(oldp+1471,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_1));
            tracep->chgBit(oldp+1472,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_1));
            tracep->chgBit(oldp+1473,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_1));
            tracep->chgBit(oldp+1474,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_1));
            tracep->chgBit(oldp+1475,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_1));
            tracep->chgBit(oldp+1476,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_1));
            tracep->chgBit(oldp+1477,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_1));
            tracep->chgBit(oldp+1478,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_1));
            tracep->chgBit(oldp+1479,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_1));
            tracep->chgBit(oldp+1480,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_1));
            tracep->chgBit(oldp+1481,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_1));
            tracep->chgBit(oldp+1482,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_1));
            tracep->chgBit(oldp+1483,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_1));
            tracep->chgBit(oldp+1484,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_1));
            tracep->chgBit(oldp+1485,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_1));
            tracep->chgBit(oldp+1486,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_1));
            tracep->chgBit(oldp+1487,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_1));
            tracep->chgBit(oldp+1488,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_1));
            tracep->chgBit(oldp+1489,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_1));
            tracep->chgBit(oldp+1490,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_1));
            tracep->chgBit(oldp+1491,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_1));
            tracep->chgBit(oldp+1492,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_1));
            tracep->chgBit(oldp+1493,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_1));
            tracep->chgBit(oldp+1494,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_1));
            tracep->chgBit(oldp+1495,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_1));
            tracep->chgBit(oldp+1496,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_1));
            tracep->chgBit(oldp+1497,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_1));
            tracep->chgBit(oldp+1498,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_1));
            tracep->chgBit(oldp+1499,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_1));
            tracep->chgBit(oldp+1500,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_1));
            tracep->chgBit(oldp+1501,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_1));
            tracep->chgBit(oldp+1502,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_1));
            tracep->chgBit(oldp+1503,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_1));
            tracep->chgBit(oldp+1504,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_1));
            tracep->chgBit(oldp+1505,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_1)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_1)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_1)
                                                : (
                                                   (0x3cU 
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
            tracep->chgIData(oldp+1506,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_1),22);
            tracep->chgIData(oldp+1507,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_1),22);
            tracep->chgIData(oldp+1508,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_1),22);
            tracep->chgIData(oldp+1509,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_1),22);
            tracep->chgIData(oldp+1510,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_1),22);
            tracep->chgIData(oldp+1511,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_1),22);
            tracep->chgIData(oldp+1512,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_1),22);
            tracep->chgIData(oldp+1513,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_1),22);
            tracep->chgIData(oldp+1514,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_1),22);
            tracep->chgIData(oldp+1515,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_1),22);
            tracep->chgIData(oldp+1516,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_1),22);
            tracep->chgIData(oldp+1517,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_1),22);
            tracep->chgIData(oldp+1518,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_1),22);
            tracep->chgIData(oldp+1519,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_1),22);
            tracep->chgIData(oldp+1520,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_1),22);
            tracep->chgIData(oldp+1521,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_1),22);
            tracep->chgIData(oldp+1522,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_1),22);
            tracep->chgIData(oldp+1523,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_1),22);
            tracep->chgIData(oldp+1524,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_1),22);
            tracep->chgIData(oldp+1525,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_1),22);
            tracep->chgIData(oldp+1526,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_1),22);
            tracep->chgIData(oldp+1527,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_1),22);
            tracep->chgIData(oldp+1528,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_1),22);
            tracep->chgIData(oldp+1529,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_1),22);
            tracep->chgIData(oldp+1530,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_1),22);
            tracep->chgIData(oldp+1531,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_1),22);
            tracep->chgIData(oldp+1532,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_1),22);
            tracep->chgIData(oldp+1533,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_1),22);
            tracep->chgIData(oldp+1534,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_1),22);
            tracep->chgIData(oldp+1535,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_1),22);
            tracep->chgIData(oldp+1536,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_1),22);
            tracep->chgIData(oldp+1537,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_1),22);
            tracep->chgIData(oldp+1538,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_1),22);
            tracep->chgIData(oldp+1539,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_1),22);
            tracep->chgIData(oldp+1540,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_1),22);
            tracep->chgIData(oldp+1541,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_1),22);
            tracep->chgIData(oldp+1542,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_1),22);
            tracep->chgIData(oldp+1543,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_1),22);
            tracep->chgIData(oldp+1544,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_1),22);
            tracep->chgIData(oldp+1545,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_1),22);
            tracep->chgIData(oldp+1546,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_1),22);
            tracep->chgIData(oldp+1547,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_1),22);
            tracep->chgIData(oldp+1548,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_1),22);
            tracep->chgIData(oldp+1549,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_1),22);
            tracep->chgIData(oldp+1550,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_1),22);
            tracep->chgIData(oldp+1551,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_1),22);
            tracep->chgIData(oldp+1552,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_1),22);
            tracep->chgIData(oldp+1553,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_1),22);
            tracep->chgIData(oldp+1554,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_1),22);
            tracep->chgIData(oldp+1555,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_1),22);
            tracep->chgIData(oldp+1556,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_1),22);
            tracep->chgIData(oldp+1557,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_1),22);
            tracep->chgIData(oldp+1558,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_1),22);
            tracep->chgIData(oldp+1559,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_1),22);
            tracep->chgIData(oldp+1560,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_1),22);
            tracep->chgIData(oldp+1561,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_1),22);
            tracep->chgIData(oldp+1562,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_1),22);
            tracep->chgIData(oldp+1563,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_1),22);
            tracep->chgIData(oldp+1564,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_1),22);
            tracep->chgIData(oldp+1565,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_1),22);
            tracep->chgIData(oldp+1566,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_1),22);
            tracep->chgIData(oldp+1567,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_1),22);
            tracep->chgIData(oldp+1568,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_1),22);
            tracep->chgIData(oldp+1569,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_1),22);
            tracep->chgIData(oldp+1570,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_1
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_1
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_1
                                                  : 
                                                 ((0x3cU 
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
            tracep->chgBit(oldp+1571,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_1));
            tracep->chgBit(oldp+1572,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_2));
            tracep->chgBit(oldp+1573,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_2));
            tracep->chgBit(oldp+1574,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_2));
            tracep->chgBit(oldp+1575,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_2));
            tracep->chgBit(oldp+1576,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_2));
            tracep->chgBit(oldp+1577,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_2));
            tracep->chgBit(oldp+1578,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_2));
            tracep->chgBit(oldp+1579,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_2));
            tracep->chgBit(oldp+1580,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_2));
            tracep->chgBit(oldp+1581,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_2));
            tracep->chgBit(oldp+1582,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_2));
            tracep->chgBit(oldp+1583,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_2));
            tracep->chgBit(oldp+1584,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_2));
            tracep->chgBit(oldp+1585,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_2));
            tracep->chgBit(oldp+1586,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_2));
            tracep->chgBit(oldp+1587,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_2));
            tracep->chgBit(oldp+1588,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_2));
            tracep->chgBit(oldp+1589,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_2));
            tracep->chgBit(oldp+1590,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_2));
            tracep->chgBit(oldp+1591,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_2));
            tracep->chgBit(oldp+1592,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_2));
            tracep->chgBit(oldp+1593,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_2));
            tracep->chgBit(oldp+1594,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_2));
            tracep->chgBit(oldp+1595,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_2));
            tracep->chgBit(oldp+1596,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_2));
            tracep->chgBit(oldp+1597,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_2));
            tracep->chgBit(oldp+1598,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_2));
            tracep->chgBit(oldp+1599,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_2));
            tracep->chgBit(oldp+1600,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_2));
            tracep->chgBit(oldp+1601,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_2));
            tracep->chgBit(oldp+1602,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_2));
            tracep->chgBit(oldp+1603,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_2));
            tracep->chgBit(oldp+1604,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_2));
            tracep->chgBit(oldp+1605,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_2));
            tracep->chgBit(oldp+1606,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_2));
            tracep->chgBit(oldp+1607,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_2));
            tracep->chgBit(oldp+1608,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_2));
            tracep->chgBit(oldp+1609,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_2));
            tracep->chgBit(oldp+1610,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_2));
            tracep->chgBit(oldp+1611,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_2));
            tracep->chgBit(oldp+1612,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_2));
            tracep->chgBit(oldp+1613,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_2));
            tracep->chgBit(oldp+1614,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_2));
            tracep->chgBit(oldp+1615,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_2));
            tracep->chgBit(oldp+1616,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_2));
            tracep->chgBit(oldp+1617,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_2));
            tracep->chgBit(oldp+1618,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_2));
            tracep->chgBit(oldp+1619,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_2));
            tracep->chgBit(oldp+1620,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_2));
            tracep->chgBit(oldp+1621,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_2));
            tracep->chgBit(oldp+1622,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_2));
            tracep->chgBit(oldp+1623,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_2));
            tracep->chgBit(oldp+1624,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_2));
            tracep->chgBit(oldp+1625,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_2));
            tracep->chgBit(oldp+1626,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_2));
            tracep->chgBit(oldp+1627,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_2));
            tracep->chgBit(oldp+1628,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_2));
            tracep->chgBit(oldp+1629,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_2));
            tracep->chgBit(oldp+1630,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_2));
            tracep->chgBit(oldp+1631,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_2));
            tracep->chgBit(oldp+1632,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_2));
            tracep->chgBit(oldp+1633,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_2));
            tracep->chgBit(oldp+1634,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_2));
            tracep->chgBit(oldp+1635,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_2));
            tracep->chgBit(oldp+1636,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_2)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_2)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_2)
                                                : (
                                                   (0x3cU 
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
            tracep->chgIData(oldp+1637,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_2),22);
            tracep->chgIData(oldp+1638,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_2),22);
            tracep->chgIData(oldp+1639,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_2),22);
            tracep->chgIData(oldp+1640,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_2),22);
            tracep->chgIData(oldp+1641,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_2),22);
            tracep->chgIData(oldp+1642,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_2),22);
            tracep->chgIData(oldp+1643,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_2),22);
            tracep->chgIData(oldp+1644,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_2),22);
            tracep->chgIData(oldp+1645,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_2),22);
            tracep->chgIData(oldp+1646,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_2),22);
            tracep->chgIData(oldp+1647,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_2),22);
            tracep->chgIData(oldp+1648,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_2),22);
            tracep->chgIData(oldp+1649,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_2),22);
            tracep->chgIData(oldp+1650,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_2),22);
            tracep->chgIData(oldp+1651,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_2),22);
            tracep->chgIData(oldp+1652,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_2),22);
            tracep->chgIData(oldp+1653,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_2),22);
            tracep->chgIData(oldp+1654,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_2),22);
            tracep->chgIData(oldp+1655,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_2),22);
            tracep->chgIData(oldp+1656,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_2),22);
            tracep->chgIData(oldp+1657,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_2),22);
            tracep->chgIData(oldp+1658,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_2),22);
            tracep->chgIData(oldp+1659,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_2),22);
            tracep->chgIData(oldp+1660,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_2),22);
            tracep->chgIData(oldp+1661,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_2),22);
            tracep->chgIData(oldp+1662,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_2),22);
            tracep->chgIData(oldp+1663,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_2),22);
            tracep->chgIData(oldp+1664,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_2),22);
            tracep->chgIData(oldp+1665,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_2),22);
            tracep->chgIData(oldp+1666,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_2),22);
            tracep->chgIData(oldp+1667,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_2),22);
            tracep->chgIData(oldp+1668,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_2),22);
            tracep->chgIData(oldp+1669,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_2),22);
            tracep->chgIData(oldp+1670,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_2),22);
            tracep->chgIData(oldp+1671,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_2),22);
            tracep->chgIData(oldp+1672,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_2),22);
            tracep->chgIData(oldp+1673,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_2),22);
            tracep->chgIData(oldp+1674,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_2),22);
            tracep->chgIData(oldp+1675,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_2),22);
            tracep->chgIData(oldp+1676,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_2),22);
            tracep->chgIData(oldp+1677,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_2),22);
            tracep->chgIData(oldp+1678,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_2),22);
            tracep->chgIData(oldp+1679,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_2),22);
            tracep->chgIData(oldp+1680,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_2),22);
            tracep->chgIData(oldp+1681,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_2),22);
            tracep->chgIData(oldp+1682,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_2),22);
            tracep->chgIData(oldp+1683,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_2),22);
            tracep->chgIData(oldp+1684,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_2),22);
            tracep->chgIData(oldp+1685,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_2),22);
            tracep->chgIData(oldp+1686,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_2),22);
            tracep->chgIData(oldp+1687,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_2),22);
            tracep->chgIData(oldp+1688,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_2),22);
            tracep->chgIData(oldp+1689,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_2),22);
            tracep->chgIData(oldp+1690,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_2),22);
            tracep->chgIData(oldp+1691,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_2),22);
            tracep->chgIData(oldp+1692,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_2),22);
            tracep->chgIData(oldp+1693,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_2),22);
            tracep->chgIData(oldp+1694,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_2),22);
            tracep->chgIData(oldp+1695,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_2),22);
            tracep->chgIData(oldp+1696,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_2),22);
            tracep->chgIData(oldp+1697,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_2),22);
            tracep->chgIData(oldp+1698,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_2),22);
            tracep->chgIData(oldp+1699,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_2),22);
            tracep->chgIData(oldp+1700,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_2),22);
            tracep->chgIData(oldp+1701,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_2
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_2
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_2
                                                  : 
                                                 ((0x3cU 
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
            tracep->chgBit(oldp+1702,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_2));
            tracep->chgBit(oldp+1703,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_3));
            tracep->chgBit(oldp+1704,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_3));
            tracep->chgBit(oldp+1705,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_3));
            tracep->chgBit(oldp+1706,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_3));
            tracep->chgBit(oldp+1707,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_3));
            tracep->chgBit(oldp+1708,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_3));
            tracep->chgBit(oldp+1709,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_3));
            tracep->chgBit(oldp+1710,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_3));
            tracep->chgBit(oldp+1711,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_3));
            tracep->chgBit(oldp+1712,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_3));
            tracep->chgBit(oldp+1713,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_3));
            tracep->chgBit(oldp+1714,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_3));
            tracep->chgBit(oldp+1715,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_3));
            tracep->chgBit(oldp+1716,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_3));
            tracep->chgBit(oldp+1717,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_3));
            tracep->chgBit(oldp+1718,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_3));
            tracep->chgBit(oldp+1719,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_3));
            tracep->chgBit(oldp+1720,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_3));
            tracep->chgBit(oldp+1721,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_3));
            tracep->chgBit(oldp+1722,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_3));
            tracep->chgBit(oldp+1723,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_3));
            tracep->chgBit(oldp+1724,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_3));
            tracep->chgBit(oldp+1725,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_3));
            tracep->chgBit(oldp+1726,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_3));
            tracep->chgBit(oldp+1727,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_3));
            tracep->chgBit(oldp+1728,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_3));
            tracep->chgBit(oldp+1729,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_3));
            tracep->chgBit(oldp+1730,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_3));
            tracep->chgBit(oldp+1731,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_3));
            tracep->chgBit(oldp+1732,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_3));
            tracep->chgBit(oldp+1733,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_3));
            tracep->chgBit(oldp+1734,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_3));
            tracep->chgBit(oldp+1735,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_3));
            tracep->chgBit(oldp+1736,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_3));
            tracep->chgBit(oldp+1737,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_3));
            tracep->chgBit(oldp+1738,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_3));
            tracep->chgBit(oldp+1739,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_3));
            tracep->chgBit(oldp+1740,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_3));
            tracep->chgBit(oldp+1741,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_3));
            tracep->chgBit(oldp+1742,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_3));
            tracep->chgBit(oldp+1743,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_3));
            tracep->chgBit(oldp+1744,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_3));
            tracep->chgBit(oldp+1745,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_3));
            tracep->chgBit(oldp+1746,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_3));
            tracep->chgBit(oldp+1747,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_3));
            tracep->chgBit(oldp+1748,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_3));
            tracep->chgBit(oldp+1749,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_3));
            tracep->chgBit(oldp+1750,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_3));
            tracep->chgBit(oldp+1751,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_3));
            tracep->chgBit(oldp+1752,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_3));
            tracep->chgBit(oldp+1753,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_3));
            tracep->chgBit(oldp+1754,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_3));
            tracep->chgBit(oldp+1755,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_3));
            tracep->chgBit(oldp+1756,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_3));
            tracep->chgBit(oldp+1757,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_3));
            tracep->chgBit(oldp+1758,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_3));
            tracep->chgBit(oldp+1759,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_3));
            tracep->chgBit(oldp+1760,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_3));
            tracep->chgBit(oldp+1761,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_3));
            tracep->chgBit(oldp+1762,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_3));
            tracep->chgBit(oldp+1763,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_3));
            tracep->chgBit(oldp+1764,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_3));
            tracep->chgBit(oldp+1765,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_3));
            tracep->chgBit(oldp+1766,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_3));
            tracep->chgBit(oldp+1767,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_3)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 5U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1bU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_3)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 5U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1bU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_3)
                                                : (
                                                   (0x3cU 
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
            tracep->chgIData(oldp+1768,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_3),22);
            tracep->chgIData(oldp+1769,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_3),22);
            tracep->chgIData(oldp+1770,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_3),22);
            tracep->chgIData(oldp+1771,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_3),22);
            tracep->chgIData(oldp+1772,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_3),22);
            tracep->chgIData(oldp+1773,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_3),22);
            tracep->chgIData(oldp+1774,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_3),22);
            tracep->chgIData(oldp+1775,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_3),22);
            tracep->chgIData(oldp+1776,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_3),22);
            tracep->chgIData(oldp+1777,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_3),22);
            tracep->chgIData(oldp+1778,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_3),22);
            tracep->chgIData(oldp+1779,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_3),22);
            tracep->chgIData(oldp+1780,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_3),22);
            tracep->chgIData(oldp+1781,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_3),22);
            tracep->chgIData(oldp+1782,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_3),22);
            tracep->chgIData(oldp+1783,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_3),22);
            tracep->chgIData(oldp+1784,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_3),22);
            tracep->chgIData(oldp+1785,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_3),22);
            tracep->chgIData(oldp+1786,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_3),22);
            tracep->chgIData(oldp+1787,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_3),22);
            tracep->chgIData(oldp+1788,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_3),22);
            tracep->chgIData(oldp+1789,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_3),22);
            tracep->chgIData(oldp+1790,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_3),22);
            tracep->chgIData(oldp+1791,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_3),22);
            tracep->chgIData(oldp+1792,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_3),22);
            tracep->chgIData(oldp+1793,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_3),22);
            tracep->chgIData(oldp+1794,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_3),22);
            tracep->chgIData(oldp+1795,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_3),22);
            tracep->chgIData(oldp+1796,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_3),22);
            tracep->chgIData(oldp+1797,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_3),22);
            tracep->chgIData(oldp+1798,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_3),22);
            tracep->chgIData(oldp+1799,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_3),22);
            tracep->chgIData(oldp+1800,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_3),22);
            tracep->chgIData(oldp+1801,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_3),22);
            tracep->chgIData(oldp+1802,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_3),22);
            tracep->chgIData(oldp+1803,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_3),22);
            tracep->chgIData(oldp+1804,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_3),22);
            tracep->chgIData(oldp+1805,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_3),22);
            tracep->chgIData(oldp+1806,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_3),22);
            tracep->chgIData(oldp+1807,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_3),22);
            tracep->chgIData(oldp+1808,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_3),22);
            tracep->chgIData(oldp+1809,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_3),22);
            tracep->chgIData(oldp+1810,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_3),22);
            tracep->chgIData(oldp+1811,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_3),22);
            tracep->chgIData(oldp+1812,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_3),22);
            tracep->chgIData(oldp+1813,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_3),22);
            tracep->chgIData(oldp+1814,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_3),22);
            tracep->chgIData(oldp+1815,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_3),22);
            tracep->chgIData(oldp+1816,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_3),22);
            tracep->chgIData(oldp+1817,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_3),22);
            tracep->chgIData(oldp+1818,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_3),22);
            tracep->chgIData(oldp+1819,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_3),22);
            tracep->chgIData(oldp+1820,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_3),22);
            tracep->chgIData(oldp+1821,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_3),22);
            tracep->chgIData(oldp+1822,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_3),22);
            tracep->chgIData(oldp+1823,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_3),22);
            tracep->chgIData(oldp+1824,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_3),22);
            tracep->chgIData(oldp+1825,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_3),22);
            tracep->chgIData(oldp+1826,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_3),22);
            tracep->chgIData(oldp+1827,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_3),22);
            tracep->chgIData(oldp+1828,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_3),22);
            tracep->chgIData(oldp+1829,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_3),22);
            tracep->chgIData(oldp+1830,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_3),22);
            tracep->chgIData(oldp+1831,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_3),22);
            tracep->chgIData(oldp+1832,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 5U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1bU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_3
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 5U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1bU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_3
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 5U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1bU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_3
                                                  : 
                                                 ((0x3cU 
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
            tracep->chgBit(oldp+1833,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_3));
            tracep->chgBit(oldp+1834,(vlSelf->ysyx_041728__DOT__dCache__DOT__hit));
            tracep->chgBit(oldp+1835,((0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgBit(oldp+1836,((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgBit(oldp+1837,((3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgWData(oldp+1838,(vlSelf->ysyx_041728__DOT__dCache__DOT__waysel),128);
            tracep->chgCData(oldp+1842,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1),2);
            tracep->chgCData(oldp+1843,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0),2);
            tracep->chgCData(oldp+1844,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2),2);
            tracep->chgCData(oldp+1845,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3),2);
            tracep->chgCData(oldp+1846,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4),2);
            tracep->chgCData(oldp+1847,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5),2);
            tracep->chgCData(oldp+1848,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6),2);
            tracep->chgCData(oldp+1849,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7),2);
            tracep->chgCData(oldp+1850,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8),2);
            tracep->chgCData(oldp+1851,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9),2);
            tracep->chgCData(oldp+1852,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10),2);
            tracep->chgCData(oldp+1853,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11),2);
            tracep->chgCData(oldp+1854,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12),2);
            tracep->chgCData(oldp+1855,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13),2);
            tracep->chgCData(oldp+1856,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14),2);
            tracep->chgCData(oldp+1857,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15),2);
            tracep->chgCData(oldp+1858,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16),2);
            tracep->chgCData(oldp+1859,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17),2);
            tracep->chgCData(oldp+1860,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18),2);
            tracep->chgCData(oldp+1861,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19),2);
            tracep->chgCData(oldp+1862,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20),2);
            tracep->chgCData(oldp+1863,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21),2);
            tracep->chgCData(oldp+1864,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22),2);
            tracep->chgCData(oldp+1865,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23),2);
            tracep->chgCData(oldp+1866,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24),2);
            tracep->chgCData(oldp+1867,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25),2);
            tracep->chgCData(oldp+1868,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26),2);
            tracep->chgCData(oldp+1869,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27),2);
            tracep->chgCData(oldp+1870,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28),2);
            tracep->chgCData(oldp+1871,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29),2);
            tracep->chgCData(oldp+1872,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30),2);
            tracep->chgCData(oldp+1873,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31),2);
            tracep->chgCData(oldp+1874,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32),2);
            tracep->chgCData(oldp+1875,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33),2);
            tracep->chgCData(oldp+1876,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34),2);
            tracep->chgCData(oldp+1877,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35),2);
            tracep->chgCData(oldp+1878,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36),2);
            tracep->chgCData(oldp+1879,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37),2);
            tracep->chgCData(oldp+1880,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38),2);
            tracep->chgCData(oldp+1881,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39),2);
            tracep->chgCData(oldp+1882,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40),2);
            tracep->chgCData(oldp+1883,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41),2);
            tracep->chgCData(oldp+1884,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42),2);
            tracep->chgCData(oldp+1885,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43),2);
            tracep->chgCData(oldp+1886,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44),2);
            tracep->chgCData(oldp+1887,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45),2);
            tracep->chgCData(oldp+1888,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46),2);
            tracep->chgCData(oldp+1889,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47),2);
            tracep->chgCData(oldp+1890,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48),2);
            tracep->chgCData(oldp+1891,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49),2);
            tracep->chgCData(oldp+1892,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50),2);
            tracep->chgCData(oldp+1893,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51),2);
            tracep->chgCData(oldp+1894,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52),2);
            tracep->chgCData(oldp+1895,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53),2);
            tracep->chgCData(oldp+1896,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54),2);
            tracep->chgCData(oldp+1897,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55),2);
            tracep->chgCData(oldp+1898,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56),2);
            tracep->chgCData(oldp+1899,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57),2);
            tracep->chgCData(oldp+1900,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58),2);
            tracep->chgCData(oldp+1901,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59),2);
            tracep->chgCData(oldp+1902,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60),2);
            tracep->chgCData(oldp+1903,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61),2);
            tracep->chgCData(oldp+1904,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62),2);
            tracep->chgCData(oldp+1905,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63),2);
            tracep->chgCData(oldp+1906,(vlSelf->ysyx_041728__DOT__dCache__DOT__sramSel),2);
            tracep->chgCData(oldp+1907,(((1U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+1908,(((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+1909,(((4U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+1910,(((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+1911,(((0x10U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+1912,(((0x20U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+1913,(((0x40U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+1914,(((0x80U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___T_146))
                                          ? 0U : 0xffU)),8);
            tracep->chgWData(oldp+1915,(vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite),128);
            tracep->chgQData(oldp+1919,(vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime),64);
            tracep->chgQData(oldp+1921,(vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp),64);
            tracep->chgCData(oldp+1923,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state),2);
            tracep->chgBit(oldp+1924,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))));
            tracep->chgCData(oldp+1925,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state),2);
            tracep->chgBit(oldp+1926,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
            tracep->chgWData(oldp+1927,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+1931,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+1935,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+1939,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+1943,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+1947,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+1951,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+1955,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+1959,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+1963,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+1967,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+1971,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+1975,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+1979,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+1983,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+1987,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+1991,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+1995,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+1999,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+2003,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+2007,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+2011,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+2015,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+2019,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+2023,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+2027,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+2031,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+2035,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+2039,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+2043,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+2047,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+2051,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+2055,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+2059,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+2063,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+2067,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+2071,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+2075,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+2079,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+2083,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+2087,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+2091,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+2095,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+2099,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+2103,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+2107,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+2111,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+2115,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+2119,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+2123,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+2127,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+2131,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+2135,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+2139,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+2143,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+2147,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+2151,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+2155,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+2159,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+2163,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+2167,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+2171,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+2175,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+2179,(vlSymsp->TOP__ysyx_041728__DOT__mem.__PVT__ramWire_63),128);
            tracep->chgWData(oldp+2183,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+2187,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+2191,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+2195,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+2199,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+2203,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+2207,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+2211,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+2215,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+2219,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+2223,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+2227,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+2231,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+2235,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+2239,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+2243,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+2247,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+2251,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+2255,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+2259,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+2263,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+2267,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+2271,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+2275,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+2279,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+2283,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+2287,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+2291,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+2295,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+2299,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+2303,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+2307,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+2311,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+2315,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+2319,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+2323,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+2327,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+2331,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+2335,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+2339,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+2343,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+2347,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+2351,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+2355,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+2359,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+2363,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+2367,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+2371,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+2375,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+2379,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+2383,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+2387,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+2391,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+2395,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+2399,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+2403,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+2407,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+2411,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+2415,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+2419,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+2423,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+2427,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+2431,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+2435,(vlSymsp->TOP__ysyx_041728__DOT__mem_1.__PVT__ramWire_63),128);
            tracep->chgWData(oldp+2439,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+2443,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+2447,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+2451,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+2455,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+2459,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+2463,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+2467,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+2471,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+2475,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+2479,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+2483,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+2487,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+2491,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+2495,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+2499,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+2503,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+2507,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+2511,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+2515,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+2519,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+2523,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+2527,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+2531,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+2535,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+2539,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+2543,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+2547,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+2551,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+2555,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+2559,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+2563,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+2567,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+2571,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+2575,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+2579,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+2583,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+2587,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+2591,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+2595,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+2599,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+2603,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+2607,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+2611,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+2615,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+2619,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+2623,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+2627,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+2631,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+2635,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+2639,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+2643,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+2647,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+2651,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+2655,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+2659,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+2663,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+2667,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+2671,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+2675,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+2679,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+2683,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+2687,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+2691,(vlSymsp->TOP__ysyx_041728__DOT__mem_2.__PVT__ramWire_63),128);
            tracep->chgWData(oldp+2695,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+2699,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+2703,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+2707,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+2711,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+2715,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+2719,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+2723,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+2727,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+2731,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+2735,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+2739,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+2743,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+2747,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+2751,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+2755,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+2759,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+2763,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+2767,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+2771,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+2775,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+2779,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+2783,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+2787,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+2791,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+2795,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+2799,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+2803,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+2807,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+2811,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+2815,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+2819,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+2823,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+2827,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+2831,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+2835,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+2839,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+2843,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+2847,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+2851,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+2855,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+2859,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+2863,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+2867,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+2871,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+2875,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+2879,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+2883,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+2887,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+2891,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+2895,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+2899,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+2903,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+2907,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+2911,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+2915,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+2919,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+2923,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+2927,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+2931,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+2935,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+2939,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+2943,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+2947,(vlSymsp->TOP__ysyx_041728__DOT__mem_3.__PVT__ramWire_63),128);
            tracep->chgWData(oldp+2951,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+2955,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+2959,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+2963,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+2967,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+2971,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+2975,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+2979,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+2983,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+2987,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+2991,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+2995,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+2999,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+3003,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+3007,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+3011,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+3015,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+3019,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+3023,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+3027,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+3031,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+3035,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+3039,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+3043,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+3047,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+3051,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+3055,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+3059,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+3063,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+3067,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+3071,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+3075,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+3079,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+3083,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+3087,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+3091,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+3095,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+3099,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+3103,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+3107,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+3111,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+3115,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+3119,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+3123,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+3127,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+3131,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+3135,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+3139,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+3143,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+3147,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+3151,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+3155,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+3159,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+3163,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+3167,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+3171,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+3175,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+3179,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+3183,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+3187,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+3191,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+3195,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+3199,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+3203,(vlSymsp->TOP__ysyx_041728__DOT__mem_4.__PVT__ramWire_63),128);
            tracep->chgWData(oldp+3207,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+3211,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+3215,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+3219,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+3223,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+3227,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+3231,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+3235,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+3239,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+3243,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+3247,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+3251,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+3255,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+3259,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+3263,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+3267,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+3271,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+3275,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+3279,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+3283,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+3287,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+3291,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+3295,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+3299,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+3303,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+3307,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+3311,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+3315,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+3319,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+3323,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+3327,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+3331,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+3335,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+3339,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+3343,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+3347,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+3351,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+3355,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+3359,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+3363,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+3367,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+3371,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+3375,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+3379,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+3383,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+3387,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+3391,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+3395,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+3399,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+3403,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+3407,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+3411,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+3415,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+3419,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+3423,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+3427,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+3431,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+3435,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+3439,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+3443,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+3447,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+3451,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+3455,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+3459,(vlSymsp->TOP__ysyx_041728__DOT__mem_5.__PVT__ramWire_63),128);
            tracep->chgWData(oldp+3463,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+3467,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+3471,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+3475,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+3479,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+3483,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+3487,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+3491,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+3495,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+3499,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+3503,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+3507,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+3511,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+3515,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+3519,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+3523,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+3527,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+3531,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+3535,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+3539,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+3543,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+3547,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+3551,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+3555,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+3559,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+3563,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+3567,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+3571,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+3575,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+3579,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+3583,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+3587,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+3591,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+3595,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+3599,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+3603,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+3607,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+3611,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+3615,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+3619,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+3623,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+3627,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+3631,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+3635,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+3639,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+3643,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+3647,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+3651,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+3655,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+3659,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+3663,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+3667,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+3671,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+3675,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+3679,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+3683,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+3687,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+3691,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+3695,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+3699,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+3703,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+3707,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+3711,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+3715,(vlSymsp->TOP__ysyx_041728__DOT__mem_6.__PVT__ramWire_63),128);
            tracep->chgWData(oldp+3719,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_0),128);
            tracep->chgWData(oldp+3723,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_1),128);
            tracep->chgWData(oldp+3727,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_2),128);
            tracep->chgWData(oldp+3731,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_3),128);
            tracep->chgWData(oldp+3735,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_4),128);
            tracep->chgWData(oldp+3739,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_5),128);
            tracep->chgWData(oldp+3743,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_6),128);
            tracep->chgWData(oldp+3747,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_7),128);
            tracep->chgWData(oldp+3751,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_8),128);
            tracep->chgWData(oldp+3755,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_9),128);
            tracep->chgWData(oldp+3759,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_10),128);
            tracep->chgWData(oldp+3763,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_11),128);
            tracep->chgWData(oldp+3767,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_12),128);
            tracep->chgWData(oldp+3771,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_13),128);
            tracep->chgWData(oldp+3775,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_14),128);
            tracep->chgWData(oldp+3779,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_15),128);
            tracep->chgWData(oldp+3783,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_16),128);
            tracep->chgWData(oldp+3787,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_17),128);
            tracep->chgWData(oldp+3791,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_18),128);
            tracep->chgWData(oldp+3795,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_19),128);
            tracep->chgWData(oldp+3799,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_20),128);
            tracep->chgWData(oldp+3803,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_21),128);
            tracep->chgWData(oldp+3807,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_22),128);
            tracep->chgWData(oldp+3811,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_23),128);
            tracep->chgWData(oldp+3815,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_24),128);
            tracep->chgWData(oldp+3819,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_25),128);
            tracep->chgWData(oldp+3823,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_26),128);
            tracep->chgWData(oldp+3827,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_27),128);
            tracep->chgWData(oldp+3831,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_28),128);
            tracep->chgWData(oldp+3835,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_29),128);
            tracep->chgWData(oldp+3839,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_30),128);
            tracep->chgWData(oldp+3843,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_31),128);
            tracep->chgWData(oldp+3847,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_32),128);
            tracep->chgWData(oldp+3851,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_33),128);
            tracep->chgWData(oldp+3855,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_34),128);
            tracep->chgWData(oldp+3859,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_35),128);
            tracep->chgWData(oldp+3863,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_36),128);
            tracep->chgWData(oldp+3867,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_37),128);
            tracep->chgWData(oldp+3871,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_38),128);
            tracep->chgWData(oldp+3875,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_39),128);
            tracep->chgWData(oldp+3879,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_40),128);
            tracep->chgWData(oldp+3883,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_41),128);
            tracep->chgWData(oldp+3887,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_42),128);
            tracep->chgWData(oldp+3891,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_43),128);
            tracep->chgWData(oldp+3895,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_44),128);
            tracep->chgWData(oldp+3899,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_45),128);
            tracep->chgWData(oldp+3903,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_46),128);
            tracep->chgWData(oldp+3907,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_47),128);
            tracep->chgWData(oldp+3911,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_48),128);
            tracep->chgWData(oldp+3915,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_49),128);
            tracep->chgWData(oldp+3919,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_50),128);
            tracep->chgWData(oldp+3923,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_51),128);
            tracep->chgWData(oldp+3927,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_52),128);
            tracep->chgWData(oldp+3931,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_53),128);
            tracep->chgWData(oldp+3935,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_54),128);
            tracep->chgWData(oldp+3939,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_55),128);
            tracep->chgWData(oldp+3943,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_56),128);
            tracep->chgWData(oldp+3947,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_57),128);
            tracep->chgWData(oldp+3951,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_58),128);
            tracep->chgWData(oldp+3955,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_59),128);
            tracep->chgWData(oldp+3959,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_60),128);
            tracep->chgWData(oldp+3963,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_61),128);
            tracep->chgWData(oldp+3967,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_62),128);
            tracep->chgWData(oldp+3971,(vlSymsp->TOP__ysyx_041728__DOT__mem_7.__PVT__ramWire_63),128);
        }
        tracep->chgBit(oldp+3975,(vlSelf->clock));
        tracep->chgBit(oldp+3976,(vlSelf->reset));
        tracep->chgBit(oldp+3977,(vlSelf->io_imaster_awready));
        tracep->chgBit(oldp+3978,(vlSelf->io_imaster_awvalid));
        tracep->chgCData(oldp+3979,(vlSelf->io_imaster_awid),4);
        tracep->chgIData(oldp+3980,(vlSelf->io_imaster_awaddr),32);
        tracep->chgCData(oldp+3981,(vlSelf->io_imaster_awlen),8);
        tracep->chgCData(oldp+3982,(vlSelf->io_imaster_awsize),3);
        tracep->chgCData(oldp+3983,(vlSelf->io_imaster_awburst),2);
        tracep->chgBit(oldp+3984,(vlSelf->io_imaster_wready));
        tracep->chgBit(oldp+3985,(vlSelf->io_imaster_wvalid));
        tracep->chgQData(oldp+3986,(vlSelf->io_imaster_wdata),64);
        tracep->chgCData(oldp+3988,(vlSelf->io_imaster_wstrb),8);
        tracep->chgBit(oldp+3989,(vlSelf->io_imaster_wlast));
        tracep->chgBit(oldp+3990,(vlSelf->io_imaster_bready));
        tracep->chgBit(oldp+3991,(vlSelf->io_imaster_bvalid));
        tracep->chgCData(oldp+3992,(vlSelf->io_imaster_bid),4);
        tracep->chgCData(oldp+3993,(vlSelf->io_imaster_bresp),2);
        tracep->chgBit(oldp+3994,(vlSelf->io_imaster_arready));
        tracep->chgBit(oldp+3995,(vlSelf->io_imaster_arvalid));
        tracep->chgCData(oldp+3996,(vlSelf->io_imaster_arid),4);
        tracep->chgIData(oldp+3997,(vlSelf->io_imaster_araddr),32);
        tracep->chgCData(oldp+3998,(vlSelf->io_imaster_arlen),8);
        tracep->chgCData(oldp+3999,(vlSelf->io_imaster_arsize),3);
        tracep->chgCData(oldp+4000,(vlSelf->io_imaster_arburst),2);
        tracep->chgBit(oldp+4001,(vlSelf->io_imaster_rready));
        tracep->chgBit(oldp+4002,(vlSelf->io_imaster_rvalid));
        tracep->chgCData(oldp+4003,(vlSelf->io_imaster_rid),4);
        tracep->chgCData(oldp+4004,(vlSelf->io_imaster_rresp),2);
        tracep->chgQData(oldp+4005,(vlSelf->io_imaster_rdata),64);
        tracep->chgBit(oldp+4007,(vlSelf->io_imaster_rlast));
        tracep->chgBit(oldp+4008,(vlSelf->io_dmaster_awready));
        tracep->chgBit(oldp+4009,(vlSelf->io_dmaster_awvalid));
        tracep->chgCData(oldp+4010,(vlSelf->io_dmaster_awid),4);
        tracep->chgIData(oldp+4011,(vlSelf->io_dmaster_awaddr),32);
        tracep->chgCData(oldp+4012,(vlSelf->io_dmaster_awlen),8);
        tracep->chgCData(oldp+4013,(vlSelf->io_dmaster_awsize),3);
        tracep->chgCData(oldp+4014,(vlSelf->io_dmaster_awburst),2);
        tracep->chgBit(oldp+4015,(vlSelf->io_dmaster_wready));
        tracep->chgBit(oldp+4016,(vlSelf->io_dmaster_wvalid));
        tracep->chgQData(oldp+4017,(vlSelf->io_dmaster_wdata),64);
        tracep->chgCData(oldp+4019,(vlSelf->io_dmaster_wstrb),8);
        tracep->chgBit(oldp+4020,(vlSelf->io_dmaster_wlast));
        tracep->chgBit(oldp+4021,(vlSelf->io_dmaster_bready));
        tracep->chgBit(oldp+4022,(vlSelf->io_dmaster_bvalid));
        tracep->chgCData(oldp+4023,(vlSelf->io_dmaster_bid),4);
        tracep->chgCData(oldp+4024,(vlSelf->io_dmaster_bresp),2);
        tracep->chgBit(oldp+4025,(vlSelf->io_dmaster_arready));
        tracep->chgBit(oldp+4026,(vlSelf->io_dmaster_arvalid));
        tracep->chgCData(oldp+4027,(vlSelf->io_dmaster_arid),4);
        tracep->chgIData(oldp+4028,(vlSelf->io_dmaster_araddr),32);
        tracep->chgCData(oldp+4029,(vlSelf->io_dmaster_arlen),8);
        tracep->chgCData(oldp+4030,(vlSelf->io_dmaster_arsize),3);
        tracep->chgCData(oldp+4031,(vlSelf->io_dmaster_arburst),2);
        tracep->chgBit(oldp+4032,(vlSelf->io_dmaster_rready));
        tracep->chgBit(oldp+4033,(vlSelf->io_dmaster_rvalid));
        tracep->chgCData(oldp+4034,(vlSelf->io_dmaster_rid),4);
        tracep->chgCData(oldp+4035,(vlSelf->io_dmaster_rresp),2);
        tracep->chgQData(oldp+4036,(vlSelf->io_dmaster_rdata),64);
        tracep->chgBit(oldp+4038,(vlSelf->io_dmaster_rlast));
        tracep->chgBit(oldp+4039,(vlSelf->io_mmio_valid));
        tracep->chgBit(oldp+4040,(vlSelf->io_mmio_ready));
        tracep->chgQData(oldp+4041,(vlSelf->io_mmio_data_read),64);
        tracep->chgQData(oldp+4043,(vlSelf->io_mmio_data_write),64);
        tracep->chgBit(oldp+4045,(vlSelf->io_mmio_wen));
        tracep->chgIData(oldp+4046,(vlSelf->io_mmio_addr),32);
        tracep->chgCData(oldp+4047,(vlSelf->io_mmio_rsize),2);
        tracep->chgCData(oldp+4048,(vlSelf->io_mmio_mask),8);
        VL_EXTEND_WQ(128,64, __Vtemp1337, vlSelf->io_imaster_rdata);
        if (vlSelf->io_imaster_rlast) {
            __Vtemp1338[0U] = 0U;
            __Vtemp1338[1U] = 0U;
            __Vtemp1338[2U] = (IData)(vlSelf->io_imaster_rdata);
            __Vtemp1338[3U] = (IData)((vlSelf->io_imaster_rdata 
                                       >> 0x20U));
        } else {
            __Vtemp1338[0U] = __Vtemp1337[0U];
            __Vtemp1338[1U] = __Vtemp1337[1U];
            __Vtemp1338[2U] = __Vtemp1337[2U];
            __Vtemp1338[3U] = __Vtemp1337[3U];
        }
        tracep->chgWData(oldp+4049,(__Vtemp1338),128);
        if (vlSelf->io_imaster_rlast) {
            __Vtemp1341[0U] = 0xffffffffU;
            __Vtemp1341[1U] = 0xffffffffU;
            __Vtemp1341[2U] = 0U;
            __Vtemp1341[3U] = 0U;
        } else {
            __Vtemp1341[0U] = 0U;
            __Vtemp1341[1U] = 0U;
            __Vtemp1341[2U] = 0xffffffffU;
            __Vtemp1341[3U] = 0xffffffffU;
        }
        tracep->chgWData(oldp+4053,(__Vtemp1341),128);
        tracep->chgBit(oldp+4057,(((IData)(vlSelf->io_imaster_bvalid) 
                                   & (3U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)))));
        __Vtemp1345[0U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0xffffffffU : 0U));
        __Vtemp1345[1U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0xffffffffU : 0U));
        __Vtemp1345[2U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0U : 0xffffffffU));
        __Vtemp1345[3U] = (~ ((IData)(vlSelf->io_imaster_rlast)
                               ? 0U : 0xffffffffU));
        tracep->chgWData(oldp+4058,(__Vtemp1345),128);
    }
}

void Vysyx_041728___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_041728___024root* const __restrict vlSelf = static_cast<Vysyx_041728___024root*>(voidSelf);
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
