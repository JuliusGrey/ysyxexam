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
    VlWide<4>/*127:0*/ __Vtemp1141;
    VlWide<4>/*127:0*/ __Vtemp1142;
    VlWide<4>/*127:0*/ __Vtemp1143;
    VlWide<4>/*127:0*/ __Vtemp1144;
    VlWide<4>/*127:0*/ __Vtemp1146;
    VlWide<4>/*127:0*/ __Vtemp1162;
    VlWide<4>/*127:0*/ __Vtemp1168;
    VlWide<4>/*127:0*/ __Vtemp1184;
    VlWide<4>/*127:0*/ __Vtemp1190;
    VlWide<4>/*127:0*/ __Vtemp1206;
    VlWide<4>/*127:0*/ __Vtemp1212;
    VlWide<4>/*127:0*/ __Vtemp1228;
    VlWide<4>/*127:0*/ __Vtemp1234;
    VlWide<4>/*127:0*/ __Vtemp1246;
    VlWide<4>/*127:0*/ __Vtemp1256;
    VlWide<4>/*127:0*/ __Vtemp1268;
    VlWide<4>/*127:0*/ __Vtemp1278;
    VlWide<4>/*127:0*/ __Vtemp1290;
    VlWide<4>/*127:0*/ __Vtemp1300;
    VlWide<4>/*127:0*/ __Vtemp1312;
    VlWide<4>/*127:0*/ __Vtemp1322;
    VlWide<4>/*127:0*/ __Vtemp1323;
    VlWide<4>/*127:0*/ __Vtemp1324;
    VlWide<4>/*127:0*/ __Vtemp1329;
    VlWide<3>/*95:0*/ __Vtemp1330;
    VlWide<4>/*127:0*/ __Vtemp1331;
    VlWide<3>/*95:0*/ __Vtemp1334;
    VlWide<4>/*127:0*/ __Vtemp1335;
    VlWide<5>/*159:0*/ __Vtemp1366;
    VlWide<5>/*159:0*/ __Vtemp1398;
    VlWide<5>/*159:0*/ __Vtemp1399;
    VlWide<5>/*159:0*/ __Vtemp1400;
    VlWide<5>/*159:0*/ __Vtemp1401;
    VlWide<5>/*159:0*/ __Vtemp1402;
    VlWide<5>/*159:0*/ __Vtemp1403;
    VlWide<3>/*95:0*/ __Vtemp1404;
    VlWide<3>/*95:0*/ __Vtemp1405;
    VlWide<3>/*95:0*/ __Vtemp1408;
    VlWide<5>/*159:0*/ __Vtemp1411;
    VlWide<5>/*159:0*/ __Vtemp1415;
    VlWide<5>/*159:0*/ __Vtemp1447;
    VlWide<5>/*159:0*/ __Vtemp1448;
    VlWide<5>/*159:0*/ __Vtemp1449;
    VlWide<5>/*159:0*/ __Vtemp1450;
    VlWide<5>/*159:0*/ __Vtemp1451;
    VlWide<5>/*159:0*/ __Vtemp1452;
    VlWide<5>/*159:0*/ __Vtemp1453;
    VlWide<4>/*127:0*/ __Vtemp1455;
    VlWide<4>/*127:0*/ __Vtemp1456;
    VlWide<4>/*127:0*/ __Vtemp1459;
    VlWide<4>/*127:0*/ __Vtemp1463;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_041728__DOT__dmaIns__DOT__blockDMA));
            tracep->chgBit(oldp+1,(vlSelf->ysyx_041728__DOT__riscvIns_io_instIO_valid));
            tracep->chgBit(oldp+2,(vlSelf->ysyx_041728__DOT__riscvIns_io_dataIO_valid));
            tracep->chgBit(oldp+3,(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_0_cen));
            tracep->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_0_cen_T_2)))));
            tracep->chgBit(oldp+5,(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_1_cen));
            tracep->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_1_cen_T_2)))));
            tracep->chgBit(oldp+7,(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_2_cen));
            tracep->chgBit(oldp+8,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_2_cen_T_2)))));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_3_cen));
            tracep->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2)))));
            tracep->chgBit(oldp+11,(vlSelf->ysyx_041728__DOT__dArbIns_io_arbMMIO_valid));
            tracep->chgBit(oldp+12,(vlSelf->ysyx_041728__DOT__dArbIns_io_arbDCache_valid));
            tracep->chgBit(oldp+13,(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i));
            tracep->chgBit(oldp+14,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_cen));
            tracep->chgBit(oldp+15,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wen));
            tracep->chgWData(oldp+16,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask),128);
            tracep->chgBit(oldp+20,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_cen));
            tracep->chgBit(oldp+21,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wen));
            tracep->chgWData(oldp+22,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask),128);
            tracep->chgBit(oldp+26,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_cen));
            tracep->chgBit(oldp+27,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wen));
            tracep->chgWData(oldp+28,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask),128);
            tracep->chgBit(oldp+32,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_cen));
            tracep->chgBit(oldp+33,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wen));
            tracep->chgWData(oldp+34,(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask),128);
            tracep->chgBit(oldp+38,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__block23));
            tracep->chgBit(oldp+39,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipBlock));
            tracep->chgBit(oldp+40,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0_io_cen));
            tracep->chgBit(oldp+41,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1_io_cen));
            tracep->chgBit(oldp+42,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2_io_cen));
            tracep->chgBit(oldp+43,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3_io_cen));
            tracep->chgBit(oldp+44,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4_io_cen));
            tracep->chgBit(oldp+45,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5_io_cen));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6_io_cen));
            tracep->chgBit(oldp+47,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7_io_cen));
            tracep->chgBit(oldp+48,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8_io_cen));
            tracep->chgBit(oldp+49,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9_io_cen));
            tracep->chgBit(oldp+50,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10_io_cen));
            tracep->chgBit(oldp+51,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11_io_cen));
            tracep->chgBit(oldp+52,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12_io_cen));
            tracep->chgBit(oldp+53,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13_io_cen));
            tracep->chgBit(oldp+54,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14_io_cen));
            tracep->chgBit(oldp+55,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15_io_cen));
            tracep->chgBit(oldp+56,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__block));
            tracep->chgCData(oldp+57,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__valid_c),2);
            tracep->chgCData(oldp+58,(((3U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__valid_c))
                                        ? 3U : ((2U 
                                                 == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__valid_c))
                                                 ? 2U
                                                 : 1U))),2);
            tracep->chgCData(oldp+59,(((IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbMMIO_valid)
                                        ? 1U : 0U)),2);
            tracep->chgBit(oldp+60,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_0_cen)))));
            tracep->chgBit(oldp+61,(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_0_cen_T_2));
            tracep->chgBit(oldp+62,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_cen)))));
            __Vtemp1141[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[0U]);
            __Vtemp1141[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[1U]);
            __Vtemp1141[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[2U]);
            __Vtemp1141[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wmask[3U]);
            tracep->chgWData(oldp+63,(__Vtemp1141),128);
            tracep->chgBit(oldp+67,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_0_wen)))));
            tracep->chgBit(oldp+68,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_1_cen)))));
            tracep->chgBit(oldp+69,(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_1_cen_T_2));
            tracep->chgBit(oldp+70,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_cen)))));
            __Vtemp1142[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[0U]);
            __Vtemp1142[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[1U]);
            __Vtemp1142[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[2U]);
            __Vtemp1142[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wmask[3U]);
            tracep->chgWData(oldp+71,(__Vtemp1142),128);
            tracep->chgBit(oldp+75,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_1_wen)))));
            tracep->chgBit(oldp+76,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_2_cen)))));
            tracep->chgBit(oldp+77,(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_2_cen_T_2));
            tracep->chgBit(oldp+78,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_cen)))));
            __Vtemp1143[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[0U]);
            __Vtemp1143[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[1U]);
            __Vtemp1143[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[2U]);
            __Vtemp1143[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wmask[3U]);
            tracep->chgWData(oldp+79,(__Vtemp1143),128);
            tracep->chgBit(oldp+83,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_2_wen)))));
            tracep->chgBit(oldp+84,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache_io_SRAMIO_3_cen)))));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_041728__DOT__iCache__DOT___io_SRAMIO_3_cen_T_2));
            tracep->chgBit(oldp+86,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_cen)))));
            __Vtemp1144[0U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[0U]);
            __Vtemp1144[1U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[1U]);
            __Vtemp1144[2U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[2U]);
            __Vtemp1144[3U] = (~ vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wmask[3U]);
            tracep->chgWData(oldp+87,(__Vtemp1144),128);
            tracep->chgBit(oldp+91,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__dCache_io_SRAMIO_3_wen)))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+92,((((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
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
                                                   >> 6U)))))) 
                                     | (((~ (IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV)) 
                                         & (~ (IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV))) 
                                        & (2U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))))));
            tracep->chgBit(oldp+93,((1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                             >> 2U) 
                                            & (~ (IData)(vlSelf->ysyx_041728__DOT__clintIns__DOT__intrTimeCnt))) 
                                           & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipBlock))))));
            tracep->chgBit(oldp+94,(((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV) 
                                     & (IData)(vlSelf->ysyx_041728__DOT__riscvIns_io_dataIO_valid))));
            tracep->chgBit(oldp+95,(((((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                       & (IData)(vlSelf->ysyx_041728__DOT__axiDIO_io_cache_w_ready_i)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) 
                                     | (((0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hit)) 
                                        & (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 6U))))));
            tracep->chgBit(oldp+96,(((0U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state)) 
                                     & (IData)(vlSelf->ysyx_041728__DOT__dArbIns_io_arbMMIO_valid))));
            tracep->chgBit(oldp+97,((((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___IdleMux_T_1) 
                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                         >> 6U)) & 
                                     (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)))));
            if ((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))) {
                __Vtemp1146[0U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[0U];
                __Vtemp1146[1U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[1U];
                __Vtemp1146[2U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[2U];
                __Vtemp1146[3U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_2[3U];
            } else {
                __Vtemp1146[0U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[0U];
                __Vtemp1146[1U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[1U];
                __Vtemp1146[2U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[2U];
                __Vtemp1146[3U] = vlSelf->ysyx_041728__DOT__dCache__DOT___io_SRAMIO_0_wdata_T_6[3U];
            }
            tracep->chgWData(oldp+98,(__Vtemp1146),128);
            tracep->chgBit(oldp+102,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                             >> 0xdU) 
                                            & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipBlock))))));
            tracep->chgBit(oldp+103,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                             >> 1U) 
                                            & (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipBlock))))));
            tracep->chgBit(oldp+104,((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__block1) 
                                       | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__block23)) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__blockDMA))));
            tracep->chgBit(oldp+105,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                             >> 0xfU) 
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
                                                                >> 6U)))))) 
                                                  | (((~ (IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV)) 
                                                      & (~ (IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV))) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state)))))))));
            tracep->chgBit(oldp+106,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns_io_instIO_valid) 
                                      & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__hit)))));
            tracep->chgCData(oldp+107,(((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___IdleMux_T_1)
                                         ? ((0x40U 
                                             & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U])
                                             ? 2U : 
                                            ((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__hit)
                                              ? 0U : 1U))
                                         : 0U)),2);
            tracep->chgCData(oldp+108,(((((IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___IdleMux_T_1) 
                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                             >> 6U)) 
                                         & (0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState)))
                                         ? 1U : 0U)),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+109,((1U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState))));
            tracep->chgIData(oldp+110,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[0U]),32);
            tracep->chgCData(oldp+111,((0xffU & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[4U])),8);
            tracep->chgBit(oldp+112,(((1U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState)) 
                                      | (2U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState)))));
            tracep->chgIData(oldp+113,(vlSelf->ysyx_041728__DOT__dmaIns__DOT__addrCnt),32);
            tracep->chgBit(oldp+114,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0U])));
            tracep->chgWData(oldp+115,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl),192);
            tracep->chgBit(oldp+121,(vlSelf->ysyx_041728__DOT__dmaIns__DOT__DMABuzy));
            tracep->chgBit(oldp+122,(vlSelf->ysyx_041728__DOT__iCache_io_cacheIn_ready));
            tracep->chgQData(oldp+123,(((8U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
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
            tracep->chgIData(oldp+125,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc),32);
            tracep->chgQData(oldp+126,(((IData)(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV)
                                         ? ((0x8000000U 
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
                                                   << 8U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x18U)))
                                                 ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime_r
                                                 : 
                                                ((0x2004000U 
                                                  == 
                                                  ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                    << 8U) 
                                                   | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                      >> 0x18U)))
                                                  ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp_r
                                                  : 0ULL))
                                             : vlSelf->ysyx_041728__DOT__mmioDCache__DOT__io_mmioIn_data_read_r))),64);
            tracep->chgQData(oldp+128,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[0U])))),64);
            tracep->chgBit(oldp+130,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 6U))));
            tracep->chgIData(oldp+131,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                         << 8U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x18U))),32);
            tracep->chgCData(oldp+132,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0x10U))),2);
            tracep->chgCData(oldp+133,((0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))),8);
            tracep->chgBit(oldp+134,(vlSelf->ysyx_041728__DOT__clintIns__DOT__intrTimeCnt));
            tracep->chgBit(oldp+135,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__startTimeCnt));
            tracep->chgBit(oldp+136,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache_io_cacheIn_ready)))));
            tracep->chgBit(oldp+137,(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState));
            tracep->chgIData(oldp+138,((0xfffffff0U 
                                        & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),32);
            tracep->chgCData(oldp+139,(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState),8);
            tracep->chgCData(oldp+140,((0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U))),6);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1162[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_60_r[0U];
                __Vtemp1162[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_60_r[1U];
                __Vtemp1162[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_60_r[2U];
                __Vtemp1162[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_60_r[3U];
            } else {
                __Vtemp1162[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_59_r[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_58_r[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_57_r[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_56_r[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_55_r[0U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_54_r[0U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_53_r[0U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT___io_memIO_rdata_T_103[0U])))))));
                __Vtemp1162[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_59_r[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_58_r[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_57_r[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_56_r[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_55_r[1U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_54_r[1U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_53_r[1U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT___io_memIO_rdata_T_103[1U])))))));
                __Vtemp1162[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_59_r[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_58_r[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_57_r[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_56_r[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_55_r[2U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_54_r[2U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_53_r[2U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT___io_memIO_rdata_T_103[2U])))))));
                __Vtemp1162[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_59_r[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_58_r[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_57_r[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_56_r[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_55_r[3U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_54_r[3U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_53_r[3U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT___io_memIO_rdata_T_103[3U])))))));
            }
            if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1168[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_63_r[0U];
                __Vtemp1168[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_63_r[1U];
                __Vtemp1168[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_63_r[2U];
                __Vtemp1168[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1168[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_61_r[0U]
                                        : __Vtemp1162[0U]));
                __Vtemp1168[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_61_r[1U]
                                        : __Vtemp1162[1U]));
                __Vtemp1168[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_61_r[2U]
                                        : __Vtemp1162[2U]));
                __Vtemp1168[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_61_r[3U]
                                        : __Vtemp1162[3U]));
            }
            tracep->chgWData(oldp+141,(__Vtemp1168),128);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1184[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_60_r[0U];
                __Vtemp1184[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_60_r[1U];
                __Vtemp1184[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_60_r[2U];
                __Vtemp1184[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_60_r[3U];
            } else {
                __Vtemp1184[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_59_r[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_58_r[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_57_r[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_56_r[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_55_r[0U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_54_r[0U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_53_r[0U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT___io_memIO_rdata_T_103[0U])))))));
                __Vtemp1184[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_59_r[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_58_r[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_57_r[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_56_r[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_55_r[1U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_54_r[1U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_53_r[1U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT___io_memIO_rdata_T_103[1U])))))));
                __Vtemp1184[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_59_r[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_58_r[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_57_r[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_56_r[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_55_r[2U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_54_r[2U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_53_r[2U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT___io_memIO_rdata_T_103[2U])))))));
                __Vtemp1184[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_59_r[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_58_r[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_57_r[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_56_r[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_55_r[3U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_54_r[3U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_53_r[3U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT___io_memIO_rdata_T_103[3U])))))));
            }
            if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1190[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_63_r[0U];
                __Vtemp1190[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_63_r[1U];
                __Vtemp1190[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_63_r[2U];
                __Vtemp1190[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1190[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_61_r[0U]
                                        : __Vtemp1184[0U]));
                __Vtemp1190[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_61_r[1U]
                                        : __Vtemp1184[1U]));
                __Vtemp1190[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_61_r[2U]
                                        : __Vtemp1184[2U]));
                __Vtemp1190[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_61_r[3U]
                                        : __Vtemp1184[3U]));
            }
            tracep->chgWData(oldp+145,(__Vtemp1190),128);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1206[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_60_r[0U];
                __Vtemp1206[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_60_r[1U];
                __Vtemp1206[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_60_r[2U];
                __Vtemp1206[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_60_r[3U];
            } else {
                __Vtemp1206[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_59_r[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_58_r[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_57_r[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_56_r[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_55_r[0U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_54_r[0U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_53_r[0U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT___io_memIO_rdata_T_103[0U])))))));
                __Vtemp1206[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_59_r[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_58_r[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_57_r[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_56_r[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_55_r[1U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_54_r[1U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_53_r[1U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT___io_memIO_rdata_T_103[1U])))))));
                __Vtemp1206[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_59_r[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_58_r[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_57_r[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_56_r[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_55_r[2U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_54_r[2U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_53_r[2U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT___io_memIO_rdata_T_103[2U])))))));
                __Vtemp1206[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_59_r[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_58_r[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_57_r[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_56_r[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_55_r[3U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_54_r[3U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_53_r[3U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT___io_memIO_rdata_T_103[3U])))))));
            }
            if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1212[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_63_r[0U];
                __Vtemp1212[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_63_r[1U];
                __Vtemp1212[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_63_r[2U];
                __Vtemp1212[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1212[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_61_r[0U]
                                        : __Vtemp1206[0U]));
                __Vtemp1212[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_61_r[1U]
                                        : __Vtemp1206[1U]));
                __Vtemp1212[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_61_r[2U]
                                        : __Vtemp1206[2U]));
                __Vtemp1212[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_61_r[3U]
                                        : __Vtemp1206[3U]));
            }
            tracep->chgWData(oldp+149,(__Vtemp1212),128);
            if ((0x3cU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1228[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_60_r[0U];
                __Vtemp1228[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_60_r[1U];
                __Vtemp1228[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_60_r[2U];
                __Vtemp1228[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_60_r[3U];
            } else {
                __Vtemp1228[0U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_59_r[0U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_58_r[0U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_57_r[0U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_56_r[0U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_55_r[0U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_54_r[0U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_53_r[0U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT___io_memIO_rdata_T_103[0U])))))));
                __Vtemp1228[1U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_59_r[1U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_58_r[1U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_57_r[1U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_56_r[1U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_55_r[1U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_54_r[1U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_53_r[1U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT___io_memIO_rdata_T_103[1U])))))));
                __Vtemp1228[2U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_59_r[2U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_58_r[2U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_57_r[2U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_56_r[2U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_55_r[2U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_54_r[2U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_53_r[2U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT___io_memIO_rdata_T_103[2U])))))));
                __Vtemp1228[3U] = ((0x3bU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_59_r[3U]
                                    : ((0x3aU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_58_r[3U]
                                        : ((0x39U == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_57_r[3U]
                                            : ((0x38U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_56_r[3U]
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_55_r[3U]
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? 
                                                    vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_54_r[3U]
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_53_r[3U]
                                                      : 
                                                     vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT___io_memIO_rdata_T_103[3U])))))));
            }
            if ((0x3fU == (0x3fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                    >> 4U)))) {
                __Vtemp1234[0U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_63_r[0U];
                __Vtemp1234[1U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_63_r[1U];
                __Vtemp1234[2U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_63_r[2U];
                __Vtemp1234[3U] = vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1234[0U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_61_r[0U]
                                        : __Vtemp1228[0U]));
                __Vtemp1234[1U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_61_r[1U]
                                        : __Vtemp1228[1U]));
                __Vtemp1234[2U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_61_r[2U]
                                        : __Vtemp1228[2U]));
                __Vtemp1234[3U] = ((0x3eU == (0x3fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                 >> 4U)))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_61_r[3U]
                                        : __Vtemp1228[3U]));
            }
            tracep->chgWData(oldp+153,(__Vtemp1234),128);
            tracep->chgBit(oldp+157,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
            tracep->chgIData(oldp+158,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc
                                         : 0U)),32);
            tracep->chgBit(oldp+159,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)) 
                                      | (2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)))));
            tracep->chgBit(oldp+160,((3U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
            tracep->chgBit(oldp+161,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))));
            tracep->chgIData(oldp+162,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? (0xfffffff0U 
                                            & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
                                         : 0U)),32);
            tracep->chgCData(oldp+163,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState)
                                         : 0U)),8);
            tracep->chgCData(oldp+164,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? 3U : 0U)),3);
            tracep->chgCData(oldp+165,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+166,(((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state)) 
                                      | (1U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state)))));
            tracep->chgBit(oldp+167,((2U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))));
            tracep->chgQData(oldp+168,(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__io_mmioIn_data_read_r),64);
            tracep->chgQData(oldp+170,(((0x200bff8U 
                                         == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                              << 8U) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                >> 0x18U)))
                                         ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime_r
                                         : ((0x2004000U 
                                             == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 8U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x18U)))
                                             ? vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp_r
                                             : 0ULL))),64);
            tracep->chgQData(oldp+172,(((0x8000000U 
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
            tracep->chgBit(oldp+174,((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgIData(oldp+175,((0xfffffff0U 
                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            << 8U) 
                                           | (0xf0U 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x18U))))),32);
            tracep->chgCData(oldp+176,((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))),8);
            tracep->chgCData(oldp+177,((0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU)))),6);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1246[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_58_r[0U];
                __Vtemp1246[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_58_r[1U];
                __Vtemp1246[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_58_r[2U];
                __Vtemp1246[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_58_r[3U];
            } else {
                __Vtemp1246[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_57_r[0U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_56_r[0U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_55_r[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_54_r[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_53_r[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT___io_memIO_rdata_T_103[0U])))));
                __Vtemp1246[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_57_r[1U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_56_r[1U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_55_r[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_54_r[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_53_r[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT___io_memIO_rdata_T_103[1U])))));
                __Vtemp1246[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_57_r[2U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_56_r[2U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_55_r[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_54_r[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_53_r[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT___io_memIO_rdata_T_103[2U])))));
                __Vtemp1246[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_57_r[3U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_56_r[3U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_55_r[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_54_r[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_53_r[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT___io_memIO_rdata_T_103[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1256[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_63_r[0U];
                __Vtemp1256[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_63_r[1U];
                __Vtemp1256[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_63_r[2U];
                __Vtemp1256[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1256[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_61_r[0U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_60_r[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_59_r[0U]
                                                : __Vtemp1246[0U]))));
                __Vtemp1256[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_61_r[1U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_60_r[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_59_r[1U]
                                                : __Vtemp1246[1U]))));
                __Vtemp1256[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_61_r[2U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_60_r[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_59_r[2U]
                                                : __Vtemp1246[2U]))));
                __Vtemp1256[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_61_r[3U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_60_r[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_59_r[3U]
                                                : __Vtemp1246[3U]))));
            }
            tracep->chgWData(oldp+178,(__Vtemp1256),128);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1268[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_58_r[0U];
                __Vtemp1268[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_58_r[1U];
                __Vtemp1268[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_58_r[2U];
                __Vtemp1268[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_58_r[3U];
            } else {
                __Vtemp1268[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_57_r[0U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_56_r[0U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_55_r[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_54_r[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_53_r[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT___io_memIO_rdata_T_103[0U])))));
                __Vtemp1268[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_57_r[1U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_56_r[1U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_55_r[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_54_r[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_53_r[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT___io_memIO_rdata_T_103[1U])))));
                __Vtemp1268[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_57_r[2U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_56_r[2U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_55_r[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_54_r[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_53_r[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT___io_memIO_rdata_T_103[2U])))));
                __Vtemp1268[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_57_r[3U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_56_r[3U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_55_r[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_54_r[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_53_r[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT___io_memIO_rdata_T_103[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1278[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_63_r[0U];
                __Vtemp1278[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_63_r[1U];
                __Vtemp1278[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_63_r[2U];
                __Vtemp1278[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1278[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_61_r[0U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_60_r[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_59_r[0U]
                                                : __Vtemp1268[0U]))));
                __Vtemp1278[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_61_r[1U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_60_r[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_59_r[1U]
                                                : __Vtemp1268[1U]))));
                __Vtemp1278[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_61_r[2U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_60_r[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_59_r[2U]
                                                : __Vtemp1268[2U]))));
                __Vtemp1278[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_61_r[3U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_60_r[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_59_r[3U]
                                                : __Vtemp1268[3U]))));
            }
            tracep->chgWData(oldp+182,(__Vtemp1278),128);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1290[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_58_r[0U];
                __Vtemp1290[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_58_r[1U];
                __Vtemp1290[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_58_r[2U];
                __Vtemp1290[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_58_r[3U];
            } else {
                __Vtemp1290[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_57_r[0U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_56_r[0U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_55_r[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_54_r[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_53_r[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT___io_memIO_rdata_T_103[0U])))));
                __Vtemp1290[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_57_r[1U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_56_r[1U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_55_r[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_54_r[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_53_r[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT___io_memIO_rdata_T_103[1U])))));
                __Vtemp1290[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_57_r[2U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_56_r[2U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_55_r[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_54_r[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_53_r[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT___io_memIO_rdata_T_103[2U])))));
                __Vtemp1290[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_57_r[3U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_56_r[3U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_55_r[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_54_r[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_53_r[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT___io_memIO_rdata_T_103[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1300[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_63_r[0U];
                __Vtemp1300[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_63_r[1U];
                __Vtemp1300[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_63_r[2U];
                __Vtemp1300[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1300[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_61_r[0U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_60_r[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_59_r[0U]
                                                : __Vtemp1290[0U]))));
                __Vtemp1300[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_61_r[1U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_60_r[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_59_r[1U]
                                                : __Vtemp1290[1U]))));
                __Vtemp1300[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_61_r[2U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_60_r[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_59_r[2U]
                                                : __Vtemp1290[2U]))));
                __Vtemp1300[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_61_r[3U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_60_r[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_59_r[3U]
                                                : __Vtemp1290[3U]))));
            }
            tracep->chgWData(oldp+186,(__Vtemp1300),128);
            if ((0x3aU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1312[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_58_r[0U];
                __Vtemp1312[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_58_r[1U];
                __Vtemp1312[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_58_r[2U];
                __Vtemp1312[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_58_r[3U];
            } else {
                __Vtemp1312[0U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_57_r[0U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_56_r[0U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_55_r[0U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_54_r[0U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_53_r[0U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT___io_memIO_rdata_T_103[0U])))));
                __Vtemp1312[1U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_57_r[1U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_56_r[1U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_55_r[1U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_54_r[1U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_53_r[1U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT___io_memIO_rdata_T_103[1U])))));
                __Vtemp1312[2U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_57_r[2U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_56_r[2U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_55_r[2U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_54_r[2U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_53_r[2U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT___io_memIO_rdata_T_103[2U])))));
                __Vtemp1312[3U] = ((0x39U == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_57_r[3U]
                                    : ((0x38U == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_56_r[3U]
                                        : ((0x37U == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_55_r[3U]
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_54_r[3U]
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_53_r[3U]
                                                    : 
                                                   vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT___io_memIO_rdata_T_103[3U])))));
            }
            if ((0x3fU == (0x3fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                     << 4U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))) {
                __Vtemp1322[0U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_63_r[0U];
                __Vtemp1322[1U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_63_r[1U];
                __Vtemp1322[2U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_63_r[2U];
                __Vtemp1322[3U] = vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_63_r[3U];
            } else {
                __Vtemp1322[0U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_62_r[0U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_61_r[0U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_60_r[0U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_59_r[0U]
                                                : __Vtemp1312[0U]))));
                __Vtemp1322[1U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_62_r[1U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_61_r[1U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_60_r[1U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_59_r[1U]
                                                : __Vtemp1312[1U]))));
                __Vtemp1322[2U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_62_r[2U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_61_r[2U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_60_r[2U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_59_r[2U]
                                                : __Vtemp1312[2U]))));
                __Vtemp1322[3U] = ((0x3eU == (0x3fU 
                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                  << 4U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                    >> 0x1cU))))
                                    ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_62_r[3U]
                                    : ((0x3dU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_61_r[3U]
                                        : ((0x3cU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_60_r[3U]
                                            : ((0x3bU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_59_r[3U]
                                                : __Vtemp1312[3U]))));
            }
            tracep->chgWData(oldp+190,(__Vtemp1322),128);
            tracep->chgBit(oldp+194,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
            tracep->chgIData(oldp+195,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))
                                         ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 8U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x18U))
                                         : 0U)),32);
            tracep->chgCData(oldp+196,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+197,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)) 
                                      | (2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state)))));
            tracep->chgQData(oldp+198,(((IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT___io_axiIO_wvalid_T)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_data_write_T_2[0U])))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+200,(((IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT___io_axiIO_wvalid_T)
                                         ? (0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                         : 0U)),8);
            tracep->chgBit(oldp+201,((3U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
            tracep->chgBit(oldp+202,((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))));
            tracep->chgIData(oldp+203,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? (0xfffffff0U 
                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                << 8U) 
                                               | (0xf0U 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                     >> 0x18U))))
                                         : 0U)),32);
            tracep->chgCData(oldp+204,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? (1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))
                                         : 0U)),8);
            tracep->chgCData(oldp+205,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? 3U : 0U)),3);
            tracep->chgCData(oldp+206,(((1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+207,(((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state)) 
                                      | (1U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state)))));
            tracep->chgQData(oldp+208,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[0U])))),64);
            tracep->chgQData(oldp+210,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[2U])))),64);
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dmaCtrl[4U])))),64);
            tracep->chgCData(oldp+214,(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState),2);
            tracep->chgCData(oldp+215,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0U])
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+216,((2U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState))));
            tracep->chgIData(oldp+217,(((4U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)
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
            tracep->chgIData(oldp+218,(((IData)(4U) 
                                        + vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),32);
            tracep->chgIData(oldp+219,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)
                                         ? (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___io_dnpc_T_2)
                                         : ((4U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U])
                                             ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                                 << 0x12U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                   >> 0xeU))
                                             : ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump1)
                                                 ? 
                                                ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                                  << 0x12U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 0xeU))
                                                 : 
                                                ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump2)
                                                  ? (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___io_dnpc_T_2)
                                                  : vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifdnpc))))),32);
            tracep->chgBit(oldp+220,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipFlashWire) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifjump))));
            tracep->chgBit(oldp+221,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_loadHazard));
            tracep->chgBit(oldp+222,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__block1));
            tracep->chgIData(oldp+223,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         << 0x1eU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                           >> 2U))),32);
            tracep->chgIData(oldp+224,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+225,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                            >> 4U))));
            tracep->chgQData(oldp+226,(((0x1013U == 
                                         (0xfc00707fU 
                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                              << 0x1fU) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 1U))))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                         : ((0x13U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                             : ((0x101bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U))))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                 : 
                                                ((0x5013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U))))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                  : 
                                                 ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                                                   : 
                                                  ((0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 1U)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U)))
                                                      ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm
                                                      : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT___io_imme_T_29))))))))),64);
            tracep->chgQData(oldp+228,(((0x1fU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 0x10U)))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0x10U)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 0x10U)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 0x10U)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 0x10U)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_27
                                                   : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout1_T_51)))))),64);
            tracep->chgQData(oldp+230,(((0x1fU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 0x15U)))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0x15U)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 0x15U)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 0x15U)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 0x15U)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_27
                                                   : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_dout2_T_51)))))),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataId_dIn),64);
            tracep->chgQData(oldp+234,(((0x1fU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 8U)))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 8U)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 8U)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 8U)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 8U)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_27
                                                   : vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT___io_rdDout_T_51)))))),64);
            tracep->chgCData(oldp+236,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 8U))),5);
            tracep->chgCData(oldp+237,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                 >> 8U))),5);
            tracep->chgCData(oldp+238,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+239,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 0x15U))),5);
            tracep->chgCData(oldp+240,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB),64);
            tracep->chgCData(oldp+243,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                              >> 2U))),2);
            tracep->chgCData(oldp+244,((3U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U])),2);
            tracep->chgCData(oldp+245,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                 >> 4U))),5);
            tracep->chgBit(oldp+246,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+247,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                              >> 2U))),2);
            tracep->chgCData(oldp+248,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                              >> 5U))),3);
            tracep->chgQData(oldp+249,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xcU])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xbU])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+251,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[9U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[8U])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+253,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[8U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[7U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[6U])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+255,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[6U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[5U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+257,(((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg))
                                         ? ((0x344U 
                                             == (0xfffU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                    >> 0xeU)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins_r
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                     >> 0xeU)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r
                                                 : 
                                                ((0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                      >> 0xeU)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                       >> 0xeU)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins_r
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                        >> 0xeU)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mcauseins_r
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                         >> 0xeU)))
                                                     ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mepcins_r
                                                     : 0ULL))))))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___io_ALUResult_T_59[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___io_ALUResult_T_59[0U]))))),64);
            tracep->chgQData(oldp+259,(((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardB))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___dOut2_T_3)),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata),64);
            tracep->chgBit(oldp+263,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___io_ALUResult_T_59[0U])));
            tracep->chgIData(oldp+264,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
                                         << 0x12U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                           >> 0xeU))),32);
            tracep->chgIData(oldp+265,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                         << 0x18U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                           >> 8U))),32);
            tracep->chgIData(oldp+266,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT___io_dnpc_T_2)),32);
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 8U))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 7U))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 6U))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 5U))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 4U))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 3U))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 2U))));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                            >> 1U))));
            tracep->chgBit(oldp+275,((1U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg))));
            tracep->chgCData(oldp+276,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                 >> 8U))),5);
            tracep->chgQData(oldp+277,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[3U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U])) 
                                              >> 0xdU)))),64);
            tracep->chgCData(oldp+279,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardA),2);
            tracep->chgCData(oldp+280,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardB),2);
            tracep->chgCData(oldp+281,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardC),2);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_aluRes1),64);
            tracep->chgBit(oldp+284,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+285,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                 >> 0x13U))),5);
            tracep->chgCData(oldp+286,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                 >> 3U))),5);
            tracep->chgBit(oldp+287,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U])));
            tracep->chgCData(oldp+288,((0x1fU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                 >> 9U))),5);
            tracep->chgCData(oldp+289,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+290,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_exjump));
            tracep->chgIData(oldp+291,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifdnpc),32);
            tracep->chgBit(oldp+292,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns_io_ifjump));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__memVGenInst_io_valid));
            tracep->chgCData(oldp+294,(((0x1013U != 
                                         (0xfc00707fU 
                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                              << 0x1fU) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 1U)))) 
                                        & ((0x13U != 
                                            (0x707fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 1U))) 
                                           & ((0x101bU 
                                               != (0xfe00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))) 
                                              & ((0x5013U 
                                                  != 
                                                  (0xfc00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))) 
                                                 & ((0x6063U 
                                                     != 
                                                     (0x707fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U))) 
                                                    & ((0x6013U 
                                                        != 
                                                        (0x707fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U))) 
                                                       & ((0x7013U 
                                                           != 
                                                           (0x707fU 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 1U))) 
                                                          & ((0x4063U 
                                                              != 
                                                              (0x707fU 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                  >> 1U))) 
                                                             & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_47)))))))))),2);
            tracep->chgCData(oldp+295,(((0x1013U == 
                                         (0xfc00707fU 
                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                              << 0x1fU) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 1U))))
                                         ? 1U : ((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U)))
                                                  ? 1U
                                                  : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_53)))),2);
            tracep->chgCData(oldp+296,(((0x3023U == 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U)))
                                         ? 0U : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U)))
                                                  ? 0U
                                                  : 
                                                 ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))
                                                   ? 0U
                                                   : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_53))))),5);
            tracep->chgBit(oldp+297,(((0x3023U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U))) 
                                      | ((0x23U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))) 
                                         | ((0x2023U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U))) 
                                            | (0x1023U 
                                               == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U))))))));
            tracep->chgCData(oldp+298,(((3U == (7U 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 0xdU)))
                                         ? 0xffU : 
                                        ((2U == (7U 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0xdU)))
                                          ? 0xfU : 
                                         ((1U == (7U 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 0xdU)))
                                           ? 3U : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                        >> 0xdU)))
                                                    ? 1U
                                                    : 0U))))),8);
            tracep->chgCData(oldp+299,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+300,(((0x6063U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U))) 
                                      | ((0x4063U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))) 
                                         | ((0x1063U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U))) 
                                            | ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U))) 
                                               | ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U))) 
                                                  | ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))) 
                                                     | (0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U)))))))))));
            tracep->chgBit(oldp+301,(((0x6fU == (0x7fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U))) 
                                      | (0x67U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U))))));
            tracep->chgBit(oldp+302,(((0x6063U == (0x707fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                      >> 1U))) 
                                      | ((0x4063U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))) 
                                         | ((0x1063U 
                                             == (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U))) 
                                            | ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 1U))) 
                                               | ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U))) 
                                                  | (0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U))))))))));
            tracep->chgBit(oldp+303,(((0x1013U == (0xfc00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U)))) 
                                      | ((0x13U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))) 
                                         | ((0x101bU 
                                             == (0xfe00707fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))) 
                                            | ((0x5013U 
                                                == 
                                                (0xfc00707fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U)))) 
                                               | ((0x6063U 
                                                   != 
                                                   (0x707fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                       >> 1U))) 
                                                  & ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))) 
                                                     | ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 1U))) 
                                                        | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_49))))))))));
            tracep->chgCData(oldp+304,(((0x2007033U 
                                         == (0xfe00707fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U))))
                                         ? 0U : ((0x503bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 1U))))
                                                  ? 0U
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                        << 0x1fU) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                          >> 1U))))
                                                   ? 0U
                                                   : 
                                                  ((0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                           >> 1U))))
                                                    ? 0U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                            >> 1U))))
                                                     ? 0U
                                                     : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_44))))))),2);
            tracep->chgBit(oldp+305,((0x100fU == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+306,((0x1073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+307,((0x2073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+308,((0x6073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+309,((0x7073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+310,((0x3073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+311,((0x5073U == (0x707fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+312,((0x73U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                 << 0x1fU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U)))));
            tracep->chgBit(oldp+313,((((((0x1073U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U))) 
                                         | (0x2073U 
                                            == (0x707fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                   >> 1U)))) 
                                        | (0x6073U 
                                           == (0x707fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 1U)))) 
                                       | (0x7073U == 
                                          (0x707fU 
                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                              >> 1U)))) 
                                      | (0x3073U == 
                                         (0x707fU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                           >> 1U))))));
            tracep->chgBit(oldp+314,((0x30200073U == 
                                      ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                        << 0x1fU) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                        >> 1U)))));
            tracep->chgIData(oldp+315,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                         << 0x13U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U] 
                                           >> 0xdU))),32);
            tracep->chgBit(oldp+316,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U])));
            tracep->chgWData(oldp+317,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg),249);
            tracep->chgBit(oldp+325,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0xfU))));
            tracep->chgWData(oldp+326,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg),431);
            tracep->chgBit(oldp+340,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+341,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 0x11U))));
            tracep->chgSData(oldp+342,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg),9);
            tracep->chgBit(oldp+343,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__dnpcTakenWithoutPreB));
            tracep->chgBit(oldp+344,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+345,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump1));
            tracep->chgIData(oldp+346,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+347,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__jump2));
            tracep->chgBit(oldp+348,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+349,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipFlashWire));
            tracep->chgBit(oldp+350,((0U != vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)));
            tracep->chgWData(oldp+351,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg),130);
            tracep->chgIData(oldp+356,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[0U]),32);
            tracep->chgBit(oldp+357,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[1U])));
            tracep->chgIData(oldp+358,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[2U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[1U] 
                                           >> 1U))),32);
            tracep->chgIData(oldp+359,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[2U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+360,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                            >> 1U))));
            tracep->chgBit(oldp+361,((0xc00607bU == 
                                      (0xfe00707fU 
                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                             >> 1U))))));
            tracep->chgQData(oldp+362,((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                             >> 0x10U)))) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 0x15U)))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0x100fU 
                                                                == 
                                                                (0x707fU 
                                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                    >> 1U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[1U]))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[0U])) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      (0xc00607bU 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                            << 0x1fU) 
                                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                              >> 1U)))))))))))),45);
            tracep->chgQData(oldp+364,((((QData)((IData)(
                                                         ((3U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               >> 0xdU)))
                                                           ? 0xffU
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                >> 0xdU)))
                                                            ? 0xfU
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                 >> 0xdU)))
                                                             ? 3U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                  >> 0xdU)))
                                                              ? 1U
                                                              : 0U)))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            ((0x3023U 
                                                              == 
                                                              (0x707fU 
                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                  >> 1U))) 
                                                             | ((0x23U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                     >> 1U))) 
                                                                | ((0x2023U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                        >> 1U))) 
                                                                   | (0x1023U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                          >> 1U)))))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               ((0x6063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                     >> 1U))) 
                                                                | ((0x4063U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                        >> 1U))) 
                                                                   | ((0x1063U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                           >> 1U))) 
                                                                      | ((0x7063U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                              >> 1U))) 
                                                                         | ((0x63U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                            | ((0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                               | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))))))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  ((0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                        >> 1U))) 
                                                                   | (0x67U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                          >> 1U)))))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     ((0x6063U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                           >> 1U))) 
                                                                      | ((0x4063U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                              >> 1U))) 
                                                                         | ((0x1063U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                            | ((0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                               | ((0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                | (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))))))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        ((0x1013U 
                                                                          == 
                                                                          (0xfc00707fU 
                                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                               << 0x1fU) 
                                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                         | ((0x13U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                            | ((0x101bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                               | ((0x5013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                                | ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                & ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__regEnGen_ins__DOT___io_regEn_T_49)))))))))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           ((0x2007033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))
                                                                             ? 0U
                                                                             : 
                                                                            ((0x503bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))
                                                                              ? 0U
                                                                              : 
                                                                             ((0x3bU 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))
                                                                               ? 0U
                                                                               : 
                                                                              ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))
                                                                                ? 0U
                                                                                : 
                                                                               ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ResultSrcGen_ins__DOT___io_ResultSrc_T_44)))))))) 
                                                           << 0x2dU) 
                                                          | (((QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 0x10U)))) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 0x15U)))) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(
                                                                                (0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))) 
                                                                    << 0x22U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[1U]))) 
                                                                       << 0x21U) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[0U])) 
                                                                          << 1U) 
                                                                         | (QData)((IData)(
                                                                                (0xc00607bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))))))))))))))))))),60);
            tracep->chgQData(oldp+366,((((QData)((IData)(
                                                         ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[2U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[1U] 
                                                             >> 1U)))) 
                                         << 0x12U) 
                                        | (QData)((IData)(
                                                          ((0x3e000U 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                               << 5U)) 
                                                           | ((((0x3023U 
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
                                                                  ? 0U
                                                                  : 
                                                                 ((0x2023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                       >> 1U)))
                                                                   ? 0U
                                                                   : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUCtrl_ins__DOT___io_ALUCtrl_T_53)))) 
                                                               << 8U) 
                                                              | ((((0x1013U 
                                                                    != 
                                                                    (0xfc00707fU 
                                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                         << 0x1fU) 
                                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                           >> 1U)))) 
                                                                   & ((0x13U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                           >> 1U))) 
                                                                      & ((0x101bU 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                               << 0x1fU) 
                                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                         & ((0x5013U 
                                                                             != 
                                                                             (0xfc00707fU 
                                                                              & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U)))) 
                                                                            & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                               & ((0x6013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                & ((0x7013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                                >> 1U))) 
                                                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc1_T_47))))))))) 
                                                                  << 6U) 
                                                                 | ((((0x1013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                                            << 0x1fU) 
                                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                              >> 1U))))
                                                                       ? 1U
                                                                       : 
                                                                      ((0x13U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                            >> 1U)))
                                                                        ? 1U
                                                                        : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__ctrl__DOT__ALUSrcGen_ins__DOT___io_AluSrc2_T_53))) 
                                                                     << 4U) 
                                                                    | ((0xeU 
                                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                                           >> 0xcU)) 
                                                                       | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__memVGenInst_io_valid)))))))))),50);
            tracep->chgBit(oldp+368,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+369,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+370,((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                 >> 0x14U))),8);
            tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+372,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                        >> 0x1dU)),3);
            tracep->chgIData(oldp+373,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                         << 0x12U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                           >> 0xeU))),32);
            tracep->chgIData(oldp+374,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xdU] 
                                         << 0x12U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xcU] 
                                           >> 0xeU))),32);
            tracep->chgBit(oldp+375,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xdU] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+376,((1U & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                             >> 0xfU) 
                                            | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                               >> 1U)))));
            tracep->chgQData(oldp+377,((((QData)((IData)(
                                                         (0xffU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                             >> 0x14U)))) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                                >> 0x13U)))) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                                    >> 0xfU) 
                                                                   | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                                                      >> 1U))))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                                      >> 0xdU)))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                                                         >> 0xeU)))) 
                                                     << 3U) 
                                                    | (QData)((IData)(
                                                                      ((4U 
                                                                        & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U]) 
                                                                       | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0U]))))))))))),47);
            tracep->chgBit(oldp+379,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U])));
            tracep->chgBit(oldp+380,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                            >> 2U))));
            tracep->chgIData(oldp+382,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                         << 0x1dU) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                           >> 3U))),32);
            tracep->chgCData(oldp+383,((3U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 3U))),2);
            tracep->chgCData(oldp+384,((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                 >> 7U))),8);
            tracep->chgCData(oldp+385,((7U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              >> 0x10U))),3);
            tracep->chgIData(oldp+386,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U] 
                                         << 8U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                   >> 0x18U))),32);
            tracep->chgQData(oldp+387,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[3U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[2U])) 
                                              >> 0x18U)))),64);
            tracep->chgQData(oldp+389,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U])) 
                                              >> 0x18U)))),64);
            tracep->chgIData(oldp+391,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                         << 8U) | (
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[6U] 
                                                   >> 0x18U))),32);
            tracep->chgBit(oldp+392,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[7U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+393,((1U & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
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
                                               >> 2U)))));
            tracep->chgBit(oldp+394,((0U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                              << 0x1dU) 
                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+395,((1U & ((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
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
                                            | vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U]))));
            tracep->chgWData(oldp+396,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg),174);
            tracep->chgIData(oldp+402,(((0U == ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                 << 0x1dU) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                                   >> 3U)))
                                         ? ((IData)(4U) 
                                            + ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                << 0x1eU) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                                  >> 2U)))
                                         : ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                             << 0x1dU) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U] 
                                               >> 3U)))),32);
            tracep->chgQData(oldp+403,((((QData)((IData)(
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
                                                                       | vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[0U]))))))))),37);
            tracep->chgBit(oldp+405,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+406,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                            >> 0xdU))));
            tracep->chgQData(oldp+407,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata_r),64);
            tracep->chgWData(oldp+409,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r),70);
            tracep->chgSData(oldp+412,((0xfffU & ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                   << 0xbU) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                     >> 0x15U)))),12);
            tracep->chgBit(oldp+413,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])));
            tracep->chgQData(oldp+414,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
                                         ? 0xfffffffffffffULL
                                         : 0ULL)),52);
            tracep->chgQData(oldp+416,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Iimm),64);
            tracep->chgCData(oldp+418,((0x7fU & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                  << 6U) 
                                                 | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 0x1aU)))),7);
            tracep->chgSData(oldp+419,(((0xfe0U & (
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                                    << 0xbU) 
                                                   | (0x7e0U 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                         >> 0x15U)))) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 8U)))),12);
            tracep->chgQData(oldp+420,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Simm),64);
            tracep->chgBit(oldp+422,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 8U))));
            tracep->chgCData(oldp+423,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+424,((0xfU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                >> 9U))),4);
            tracep->chgSData(oldp+425,(((0x1000U & 
                                         (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                               << 3U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                  >> 0x15U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                    >> 8U)))))),13);
            tracep->chgQData(oldp+426,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
                                         ? 0x7ffffffffffffULL
                                         : 0ULL)),51);
            tracep->chgQData(oldp+428,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Bimm),64);
            tracep->chgIData(oldp+430,((0xfffffU & 
                                        ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                          << 0x13U) 
                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 0xdU)))),20);
            tracep->chgIData(oldp+431,((0xfffff000U 
                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U] 
                                            << 0x1fU) 
                                           | (0x7ffff000U 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 1U))))),32);
            tracep->chgIData(oldp+432,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgQData(oldp+433,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__imme__DOT__Uimm),64);
            tracep->chgCData(oldp+435,((0xffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                                 >> 0xdU))),8);
            tracep->chgBit(oldp+436,((1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                            >> 0x15U))));
            tracep->chgSData(oldp+437,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[3U] 
                                        >> 0x16U)),10);
            tracep->chgIData(oldp+438,(((0x100000U 
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
                                                    >> 0x15U)))))),21);
            tracep->chgQData(oldp+439,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
                                         ? 0x7ffffffffffULL
                                         : 0ULL)),43);
            tracep->chgQData(oldp+441,(((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipIF2IDReg[4U])
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
                                                                       >> 0x15U))))))))),64);
            tracep->chgQData(oldp+443,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_1),64);
            tracep->chgQData(oldp+445,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_2),64);
            tracep->chgQData(oldp+447,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_3),64);
            tracep->chgQData(oldp+449,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_4),64);
            tracep->chgQData(oldp+451,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_5),64);
            tracep->chgQData(oldp+453,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_6),64);
            tracep->chgQData(oldp+455,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_7),64);
            tracep->chgQData(oldp+457,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_8),64);
            tracep->chgQData(oldp+459,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_9),64);
            tracep->chgQData(oldp+461,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_10),64);
            tracep->chgQData(oldp+463,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_11),64);
            tracep->chgQData(oldp+465,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_12),64);
            tracep->chgQData(oldp+467,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_13),64);
            tracep->chgQData(oldp+469,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_14),64);
            tracep->chgQData(oldp+471,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_15),64);
            tracep->chgQData(oldp+473,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_16),64);
            tracep->chgQData(oldp+475,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_17),64);
            tracep->chgQData(oldp+477,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_18),64);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_19),64);
            tracep->chgQData(oldp+481,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_20),64);
            tracep->chgQData(oldp+483,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_21),64);
            tracep->chgQData(oldp+485,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_22),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_23),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_24),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_25),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_26),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_27),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_28),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_29),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_30),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf__DOT__regData_r_31),64);
            tracep->chgQData(oldp+505,((QData)((IData)(
                                                       ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                                         << 0x1eU) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[0U] 
                                                           >> 2U))))),64);
            tracep->chgBit(oldp+507,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+508,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (2U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+509,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (3U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+510,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (4U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+511,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (5U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+512,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (6U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+513,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (7U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+514,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+515,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (9U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+516,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+517,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+518,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0xcU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+519,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+520,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0xeU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+521,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0xfU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+522,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x10U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+523,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+524,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x12U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+525,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+526,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+527,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x15U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+528,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x16U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+529,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+530,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+531,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+532,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+533,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x1bU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+534,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+535,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+536,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgBit(oldp+537,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                       >> 4U) & (0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                     >> 8U))))));
            tracep->chgQData(oldp+538,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA),64);
            tracep->chgQData(oldp+540,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB),64);
            tracep->chgQData(oldp+542,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___io_ALUResult_T_59[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___io_ALUResult_T_59[0U])))),64);
            tracep->chgQData(oldp+544,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1),64);
            tracep->chgSData(oldp+546,((0xfffU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                  >> 0xeU))),12);
            tracep->chgQData(oldp+547,((QData)((IData)(
                                                       ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
                                                         << 0x12U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                                           >> 0xeU))))),64);
            tracep->chgQData(oldp+549,(((0x344U == 
                                         (0xfffU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                           >> 0xeU)))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins_r
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                    >> 0xeU)))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r
                                             : ((0x300U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                     >> 0xeU)))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                      >> 0xeU)))
                                                  ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins_r
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                       >> 0xeU)))
                                                   ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mcauseins_r
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                        >> 0xeU)))
                                                    ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mepcins_r
                                                    : 0ULL))))))),64);
            tracep->chgQData(oldp+551,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins_r),64);
            tracep->chgQData(oldp+553,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mepcins_r),64);
            tracep->chgIData(oldp+555,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xbU] 
                                         << 0x12U) 
                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                           >> 0xeU))),32);
            tracep->chgIData(oldp+556,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1)),32);
            tracep->chgIData(oldp+557,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xbU] 
                                          << 0x12U) 
                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                            >> 0xeU)) 
                                        + ((0x40000U 
                                            & vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U])
                                            ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
                                                << 0x12U) 
                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                                  >> 0xeU))
                                            : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1)))),32);
            tracep->chgQData(oldp+558,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__memData_ins_io_rdata_ext),64);
            tracep->chgQData(oldp+560,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut2),64);
            tracep->chgQData(oldp+562,(((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardC))
                                         ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__idu__DOT__rf_io_doutWB
                                         : ((1U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardC))
                                             ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataId_dIn
                                             : ((2U 
                                                 == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__hazardu_io_forwardC))
                                                 ? vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_aluRes1
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[6U])) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[5U])) 
                                                     << 0x12U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U])) 
                                                       >> 0xeU))))))),64);
            tracep->chgBit(oldp+564,((((((((1U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U))) 
                                           | (5U == 
                                              (0x1fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                  >> 4U)))) 
                                          | (0x10U 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 4U)))) 
                                         | (5U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U)))) 
                                        | (7U == (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                     >> 4U)))) 
                                       | (0x1bU == 
                                          (0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                            >> 4U)))) 
                                      | (0x1cU == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U))))));
            tracep->chgQData(oldp+565,(((((((((1U == 
                                               (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                   >> 4U))) 
                                              | (5U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                     >> 4U)))) 
                                             | (0x10U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 4U)))) 
                                            | (5U == 
                                               (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                   >> 4U)))) 
                                           | (7U == 
                                              (0x1fU 
                                               & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                  >> 4U)))) 
                                          | (0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 4U)))) 
                                         | (0x1cU == 
                                            (0x1fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                >> 4U))))
                                         ? (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgQData(oldp+567,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT__res[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT__res[0U])))),64);
            tracep->chgBit(oldp+569,((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT__res[2U])));
            tracep->chgBit(oldp+570,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_valid));
            tracep->chgBit(oldp+571,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_divw));
            tracep->chgBit(oldp+572,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed));
            tracep->chgBit(oldp+573,((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
            tracep->chgQData(oldp+574,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_quotient),64);
            tracep->chgQData(oldp+576,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_remainder),64);
            tracep->chgBit(oldp+578,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns_io_mul_valid));
            tracep->chgQData(oldp+579,(((0x13U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U)))
                                         ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)),64);
            tracep->chgQData(oldp+581,(((0x13U == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U)))
                                         ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgBit(oldp+583,((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
            tracep->chgQData(oldp+584,((((QData)((IData)(
                                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[0U])))),64);
            tracep->chgQData(oldp+586,((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgIData(oldp+588,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)),32);
            tracep->chgQData(oldp+589,((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))),64);
            tracep->chgIData(oldp+591,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),32);
            tracep->chgQData(oldp+592,((QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),64);
            tracep->chgCData(oldp+594,((0x3fU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),6);
            tracep->chgBit(oldp+595,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                      != vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)));
            tracep->chgIData(oldp+596,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__lo_1),32);
            tracep->chgBit(oldp+597,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__lo_1 
                                      >> 0x1fU)));
            tracep->chgIData(oldp+598,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__lo_1 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+599,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT__res[0U]),32);
            tracep->chgBit(oldp+600,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT__res[0U] 
                                      >> 0x1fU)));
            tracep->chgIData(oldp+601,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT__res[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+602,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_17[0U]),32);
            tracep->chgBit(oldp+603,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_17[0U] 
                                      >> 0x1fU)));
            tracep->chgIData(oldp+604,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT___T_17[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+605,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__lo_4),32);
            tracep->chgBit(oldp+606,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__lo_4 
                                      >> 0x1fU)));
            tracep->chgIData(oldp+607,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__lo_4 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+608,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_quotient)),32);
            tracep->chgBit(oldp+609,((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_quotient 
                                                    >> 0x1fU)))));
            tracep->chgIData(oldp+610,(((1U & (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_quotient 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+611,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_remainder)),32);
            tracep->chgBit(oldp+612,((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_remainder 
                                                    >> 0x1fU)))));
            tracep->chgIData(oldp+613,(((1U & (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_remainder 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+614,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[0U]),32);
            tracep->chgBit(oldp+615,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[0U] 
                                      >> 0x1fU)));
            tracep->chgIData(oldp+616,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgWData(oldp+617,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__addIns__DOT__res),65);
            tracep->chgQData(oldp+620,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                  >> 0x3fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)),64);
            tracep->chgQData(oldp+622,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x3fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)),64);
            tracep->chgBit(oldp+624,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x3fU))) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))));
            tracep->chgIData(oldp+625,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                  >> 0x1fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? ((IData)(1U) 
                                            + (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))),32);
            tracep->chgIData(oldp+626,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x1fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? ((IData)(1U) 
                                            + (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB)))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))),32);
            tracep->chgBit(oldp+627,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))));
            tracep->chgCData(oldp+628,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg),2);
            tracep->chgBit(oldp+629,((1U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
            tracep->chgBit(oldp+630,((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__stateReg))));
            tracep->chgCData(oldp+631,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__cnt),6);
            tracep->chgCData(oldp+632,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T))
                                         ? 2U : ((3U 
                                                  == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+633,(((0x1fU == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__cnt))
                                         ? 3U : 1U)),2);
            tracep->chgWData(oldp+634,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg),128);
            tracep->chgQData(oldp+638,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg),64);
            VL_EXTEND_WQ(128,64, __Vtemp1323, (((IData)(
                                                        (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                         >> 0x3fU)) 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA))
                                                : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA));
            VL_EXTEND_WI(128,32, __Vtemp1324, (((IData)(
                                                        (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                         >> 0x1fU)) 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)))
                                                : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA)));
            if ((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T))) {
                __Vtemp1329[0U] = __Vtemp1323[0U];
                __Vtemp1329[1U] = __Vtemp1323[1U];
                __Vtemp1329[2U] = __Vtemp1323[2U];
                __Vtemp1329[3U] = __Vtemp1323[3U];
            } else {
                __Vtemp1329[0U] = ((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T))
                                    ? __Vtemp1324[0U]
                                    : 0U);
                __Vtemp1329[1U] = ((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T))
                                    ? __Vtemp1324[1U]
                                    : 0U);
                __Vtemp1329[2U] = ((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T))
                                    ? __Vtemp1324[2U]
                                    : 0U);
                __Vtemp1329[3U] = ((3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT___idleMux_T))
                                    ? __Vtemp1324[3U]
                                    : 0U);
            }
            tracep->chgWData(oldp+640,(__Vtemp1329),128);
            tracep->chgIData(oldp+644,((0x7fffffffU 
                                        & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])),31);
            tracep->chgQData(oldp+645,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                              >> 0x1fU)))),33);
            tracep->chgQData(oldp+647,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32),33);
            tracep->chgIData(oldp+649,(((1U & (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32 
                                                       >> 0x20U)))
                                         ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                             << 1U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                                               >> 0x1fU))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32))),32);
            VL_EXTEND_WI(96,32, __Vtemp1330, ((1U & (IData)(
                                                            (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32 
                                                             >> 0x20U)))
                                               ? ((
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                                   << 1U) 
                                                  | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                                                     >> 0x1fU))
                                               : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32)));
            __Vtemp1331[0U] = (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U] 
                               << 1U);
            __Vtemp1331[1U] = __Vtemp1330[0U];
            __Vtemp1331[2U] = __Vtemp1330[1U];
            __Vtemp1331[3U] = __Vtemp1330[2U];
            tracep->chgWData(oldp+650,(__Vtemp1331),128);
            tracep->chgQData(oldp+654,((0x7fffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U]))))),63);
            __Vtemp1334[0U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U] 
                                << 1U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U] 
                                          >> 0x1fU));
            __Vtemp1334[1U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U] 
                                << 1U) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[2U] 
                                          >> 0x1fU));
            __Vtemp1334[2U] = (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[3U] 
                               >> 0x1fU);
            tracep->chgWData(oldp+656,(__Vtemp1334),65);
            tracep->chgWData(oldp+659,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64),65);
            tracep->chgQData(oldp+662,(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
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
            __Vtemp1335[0U] = (IData)((0xfffffffffffffffeULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                           << 0x21U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                             << 1U))));
            __Vtemp1335[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])) 
                                            << 0x21U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[0U])) 
                                              << 1U))) 
                                       >> 0x20U));
            __Vtemp1335[2U] = (IData)(((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
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
            __Vtemp1335[3U] = (IData)((((1U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U])
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
            tracep->chgWData(oldp+664,(__Vtemp1335),128);
            tracep->chgQData(oldp+668,((0x7fffffffffffffffULL 
                                        & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg)),63);
            tracep->chgBit(oldp+670,((1U & (~ (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes32 
                                                       >> 0x20U))))));
            tracep->chgBit(oldp+671,((1U & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__subRes64[2U]))));
            tracep->chgQData(oldp+672,(((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                   >> 0x3fU)) 
                                          ^ (IData)(
                                                    (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB 
                                                     >> 0x3fU))) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg))
                                         : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg)),64);
            tracep->chgQData(oldp+674,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                  >> 0x3fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
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
            tracep->chgIData(oldp+676,(((IData)(1U) 
                                        + (~ (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__resReg)))),32);
            tracep->chgQData(oldp+677,(((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
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
            tracep->chgIData(oldp+679,(((IData)(1U) 
                                        + (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U]))),32);
            tracep->chgQData(oldp+680,((((IData)((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcA 
                                                  >> 0x1fU)) 
                                         & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins_io_div_signed))
                                         ? (0xffffffff00000000ULL 
                                            | (QData)((IData)(
                                                              ((IData)(1U) 
                                                               + 
                                                               (~ 
                                                                vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])))))
                                         : (QData)((IData)(
                                                           vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__divR2Ins__DOT__dividendReg[1U])))),64);
            tracep->chgCData(oldp+682,((7U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])),3);
            tracep->chgWData(oldp+683,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg),132);
            __Vtemp1366[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (1U | 
                                               ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                << 1U)))) 
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1366[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1366[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1366[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1366[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xfU : 0U) & 
                                  (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xfU : 0U) 
                                    & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                        >> 0x1fU) | 
                                       (0xeU & ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                << 1U))))) 
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            tracep->chgWData(oldp+688,(__Vtemp1366),132);
            tracep->chgBit(oldp+693,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative))));
            tracep->chgWData(oldp+694,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg),132);
            __Vtemp1398[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (1U | 
                                               ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                << 1U)))) 
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1398[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1398[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1398[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1398[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xfU : 0U) & 
                                  (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xfU : 0U) 
                                    & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                        >> 0x1fU) | 
                                       (0xeU & ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                << 1U))))) 
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            VL_ADD_W(5, __Vtemp1399, __Vtemp1398, vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg);
            VL_EXTEND_WI(133,1, __Vtemp1400, ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)));
            __Vtemp1401[0U] = __Vtemp1400[0U];
            __Vtemp1401[1U] = __Vtemp1400[1U];
            __Vtemp1401[2U] = __Vtemp1400[2U];
            __Vtemp1401[3U] = __Vtemp1400[3U];
            __Vtemp1401[4U] = __Vtemp1400[4U];
            VL_ADD_W(5, __Vtemp1402, __Vtemp1399, __Vtemp1401);
            __Vtemp1403[0U] = __Vtemp1402[0U];
            __Vtemp1403[1U] = __Vtemp1402[1U];
            __Vtemp1403[2U] = __Vtemp1402[2U];
            __Vtemp1403[3U] = __Vtemp1402[3U];
            __Vtemp1403[4U] = (0xfU & __Vtemp1402[4U]);
            tracep->chgWData(oldp+699,(__Vtemp1403),132);
            tracep->chgCData(oldp+704,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg),2);
            tracep->chgBit(oldp+705,((0U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
            tracep->chgBit(oldp+706,((1U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__stateReg))));
            tracep->chgCData(oldp+707,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__cnt),6);
            tracep->chgCData(oldp+708,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns_io_mul_valid)
                                         ? 1U : 0U)),2);
            VL_EXTEND_WQ(66,64, __Vtemp1404, ((0x13U 
                                               == (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 4U)))
                                               ? (QData)((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB))
                                               : vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU_io_srcB));
            __Vtemp1405[0U] = (__Vtemp1404[0U] << 1U);
            __Vtemp1405[1U] = ((__Vtemp1404[0U] >> 0x1fU) 
                               | (__Vtemp1404[1U] << 1U));
            __Vtemp1405[2U] = ((__Vtemp1404[1U] >> 0x1fU) 
                               | (__Vtemp1404[2U] << 1U));
            tracep->chgWData(oldp+709,(__Vtemp1405),67);
            tracep->chgWData(oldp+712,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg),67);
            __Vtemp1408[0U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[1U] 
                                << 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                             >> 2U));
            __Vtemp1408[1U] = ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[2U] 
                                << 0x1eU) | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[1U] 
                                             >> 2U));
            __Vtemp1408[2U] = (1U & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[2U] 
                                     >> 2U));
            tracep->chgWData(oldp+715,(__Vtemp1408),65);
            __Vtemp1411[0U] = vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U];
            __Vtemp1411[1U] = vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U];
            __Vtemp1411[2U] = vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U];
            __Vtemp1411[3U] = vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U];
            __Vtemp1411[4U] = (3U & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]);
            tracep->chgWData(oldp+718,(__Vtemp1411),130);
            tracep->chgBit(oldp+723,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative));
            tracep->chgBit(oldp+724,((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))));
            tracep->chgBit(oldp+725,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative));
            tracep->chgBit(oldp+726,((1U & (((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))));
            __Vtemp1415[0U] = (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]);
            __Vtemp1415[1U] = (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[1U]);
            __Vtemp1415[2U] = (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[2U]);
            __Vtemp1415[3U] = (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]);
            __Vtemp1415[4U] = (7U & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]));
            tracep->chgWData(oldp+727,(__Vtemp1415),131);
            __Vtemp1447[0U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xffffffffU : 0U) 
                                  & (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xffffffffU
                                      : 0U) & (1U | 
                                               ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[0U]) 
                                                << 1U)))) 
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1447[1U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1447[2U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1447[3U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
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
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            __Vtemp1447[4U] = ((((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)
                                    ? 0xfU : 0U) & 
                                  (~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U])) 
                                 | (((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative)
                                      ? 0xfU : 0U) 
                                    & (((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[3U]) 
                                        >> 0x1fU) | 
                                       (0xeU & ((~ 
                                                 vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplicandReg[4U]) 
                                                << 1U))))) 
                                | (((1U & ((~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                               >> 2U)) 
                                           & (((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                >> 1U) 
                                               & (~ 
                                                  vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U])) 
                                              | ((~ 
                                                  (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U] 
                                                   >> 1U)) 
                                                 & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__multiplierReg[0U]))))
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
            VL_EXTEND_WW(133,132, __Vtemp1448, __Vtemp1447);
            VL_EXTEND_WW(133,132, __Vtemp1449, vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__resReg);
            VL_ADD_W(5, __Vtemp1450, __Vtemp1448, __Vtemp1449);
            VL_EXTEND_WI(133,1, __Vtemp1451, ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selDoubleNegative) 
                                              | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__ALU__DOT__mulIns__DOT__boothIns__DOT__selNegative)));
            VL_ADD_W(5, __Vtemp1452, __Vtemp1450, __Vtemp1451);
            __Vtemp1453[0U] = __Vtemp1452[0U];
            __Vtemp1453[1U] = __Vtemp1452[1U];
            __Vtemp1453[2U] = __Vtemp1452[2U];
            __Vtemp1453[3U] = __Vtemp1452[3U];
            __Vtemp1453[4U] = (0x1fU & __Vtemp1452[4U]);
            tracep->chgWData(oldp+732,(__Vtemp1453),133);
            tracep->chgBit(oldp+737,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr));
            tracep->chgBit(oldp+738,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren));
            tracep->chgCData(oldp+739,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H),6);
            tracep->chgQData(oldp+740,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                           >> 8U))))),64);
            tracep->chgBit(oldp+742,((1U & ((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                              >> 2U) 
                                             | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                                & (0x341U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                       >> 0xeU))))) 
                                            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)))));
            tracep->chgBit(oldp+743,((1U & ((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                              >> 2U) 
                                             | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                                & (0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                       >> 0xeU))))) 
                                            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)))));
            tracep->chgQData(oldp+744,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mcauseins_r),64);
            tracep->chgBit(oldp+746,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                      & (0x305U == 
                                         (0xfffU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                           >> 0xeU))))));
            tracep->chgQData(oldp+747,((((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mepcval_T_13 
                                            | ((2U 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                                ? (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1 
                                                   | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins_r)
                                                : 0ULL)) 
                                           | ((4U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                               ? ((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1) 
                                                  & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins_r)
                                               : 0ULL)) 
                                          | ((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                              ? ((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                                     >> 8U)))) 
                                                 | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins_r)
                                              : 0ULL)) 
                                         | ((0x10U 
                                             & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                             ? ((~ (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                                       >> 8U))))) 
                                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mtvecins_r)
                                             : 0ULL)) 
                                        | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mepcval_T_18)),64);
            tracep->chgBit(oldp+749,((1U & (((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                               & (0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                                      >> 0xeU)))) 
                                              | ((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg) 
                                                 >> 2U)) 
                                             | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr)) 
                                            | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipCSRReg)))));
            tracep->chgQData(oldp+750,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r),64);
            tracep->chgQData(oldp+752,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                        >> 8U)),56);
            tracep->chgBit(oldp+754,((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                                    >> 3U)))));
            tracep->chgCData(oldp+755,((7U & (IData)(
                                                     (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                                      >> 4U)))),3);
            tracep->chgCData(oldp+756,((7U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r))),3);
            tracep->chgBit(oldp+757,((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mstatusins_r 
                                                    >> 7U)))));
            tracep->chgBit(oldp+758,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                      & (0x304U == 
                                         (0xfffU & 
                                          (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                           >> 0xeU))))));
            tracep->chgQData(oldp+759,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r),64);
            tracep->chgQData(oldp+761,((((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mepcval_T_13 
                                            | ((2U 
                                                & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                                ? (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1 
                                                   | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r)
                                                : 0ULL)) 
                                           | ((4U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                               ? ((~ vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1) 
                                                  & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r)
                                               : 0ULL)) 
                                          | ((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                              ? ((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                                     >> 8U)))) 
                                                 | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r)
                                              : 0ULL)) 
                                         | ((0x10U 
                                             & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__sel1H))
                                             ? ((~ (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                                       >> 8U))))) 
                                                & vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mieins_r)
                                             : 0ULL)) 
                                        | vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT___mepcval_T_18)),64);
            tracep->chgBit(oldp+763,((((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__csren) 
                                       & (0x344U == 
                                          (0xfffU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[0xaU] 
                                            >> 0xeU)))) 
                                      | (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__intr))));
            tracep->chgQData(oldp+764,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins_r),64);
            tracep->chgQData(oldp+766,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins_r 
                                        >> 8U)),56);
            tracep->chgCData(oldp+768,((0x7fU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__csr_ins__DOT__mipins_r))),7);
            tracep->chgIData(oldp+769,(((0x40000U & 
                                         vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U])
                                         ? ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[4U] 
                                             << 0x12U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[3U] 
                                               >> 0xeU))
                                         : (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu__DOT__dOut1))),32);
            tracep->chgCData(oldp+770,((0xffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata))),8);
            tracep->chgBit(oldp+771,((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                    >> 7U)))));
            tracep->chgQData(oldp+772,(((1U & (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                       >> 7U)))
                                         ? 0xffffffffffffffULL
                                         : 0ULL)),56);
            tracep->chgSData(oldp+774,((0xffffU & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata))),16);
            tracep->chgBit(oldp+775,((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                    >> 0xfU)))));
            tracep->chgQData(oldp+776,(((1U & (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                       >> 0xfU)))
                                         ? 0xffffffffffffULL
                                         : 0ULL)),48);
            tracep->chgIData(oldp+778,((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata)),32);
            tracep->chgBit(oldp+779,((1U & (IData)(
                                                   (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                    >> 0x1fU)))));
            tracep->chgIData(oldp+780,(((1U & (IData)(
                                                      (vlSelf->ysyx_041728__DOT__riscvIns__DOT__exu_io_dataOut_rdata 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgBit(oldp+781,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                        >> 5U) & ((0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                      >> 0x13U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                      >> 8U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+782,(((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         >> 4U) & (
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                       >> 8U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                       >> 8U)))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                    >> 8U)))) 
                                      & (((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0x13U)) 
                                          != (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                 >> 8U))) 
                                         | (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                               >> 5U))))));
            tracep->chgBit(oldp+783,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                            >> 1U)) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                 >> 8U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+784,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                        >> 5U) & ((0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                      >> 0x13U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                      >> 3U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+785,(((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         >> 4U) & (
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                       >> 8U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                       >> 3U)))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                    >> 3U)))) 
                                      & (((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0x13U)) 
                                          != (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                 >> 3U))) 
                                         | (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                               >> 5U))))));
            tracep->chgBit(oldp+786,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                            >> 1U)) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                 >> 3U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[1U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+787,((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                        >> 5U) & ((0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                                      >> 0x13U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                      >> 9U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+788,(((((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[1U] 
                                         >> 4U) & (
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[2U] 
                                                       >> 8U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                       >> 9U)))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                    >> 9U)))) 
                                      & (((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                            >> 0x13U)) 
                                          != (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                 >> 9U))) 
                                         | (~ (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[1U] 
                                               >> 5U))))));
            tracep->chgBit(oldp+789,(((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipWB2ENDWire_r[2U] 
                                            >> 1U)) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                 >> 9U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipID2ExReg[2U] 
                                                   >> 9U))))));
            tracep->chgIData(oldp+790,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__dnpcReg),32);
            tracep->chgBit(oldp+791,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire_r)))));
            tracep->chgIData(oldp+792,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__dnpcReg),32);
            tracep->chgBit(oldp+793,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire_r)))));
            tracep->chgIData(oldp+794,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__dnpcReg),32);
            tracep->chgBit(oldp+795,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire_r)))));
            tracep->chgIData(oldp+796,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__dnpcReg),32);
            tracep->chgBit(oldp+797,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire_r)))));
            tracep->chgIData(oldp+798,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__dnpcReg),32);
            tracep->chgBit(oldp+799,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire_r)))));
            tracep->chgIData(oldp+800,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__dnpcReg),32);
            tracep->chgBit(oldp+801,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire_r)))));
            tracep->chgIData(oldp+802,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__dnpcReg),32);
            tracep->chgBit(oldp+803,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire_r)))));
            tracep->chgIData(oldp+804,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__dnpcReg),32);
            tracep->chgBit(oldp+805,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire_r)))));
            tracep->chgIData(oldp+806,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__dnpcReg),32);
            tracep->chgBit(oldp+807,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire_r)))));
            tracep->chgIData(oldp+808,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__dnpcReg),32);
            tracep->chgBit(oldp+809,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire_r)))));
            tracep->chgIData(oldp+810,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__dnpcReg),32);
            tracep->chgBit(oldp+811,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire_r)))));
            tracep->chgIData(oldp+812,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__dnpcReg),32);
            tracep->chgBit(oldp+813,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire_r)))));
            tracep->chgIData(oldp+814,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__dnpcReg),32);
            tracep->chgBit(oldp+815,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire_r)))));
            tracep->chgIData(oldp+816,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__dnpcReg),32);
            tracep->chgBit(oldp+817,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire_r)))));
            tracep->chgIData(oldp+818,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__dnpcReg),32);
            tracep->chgBit(oldp+819,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire_r)))));
            tracep->chgIData(oldp+820,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__dnpcReg),32);
            tracep->chgBit(oldp+821,(((2U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire_r)) 
                                      | (3U == (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire_r)))));
            tracep->chgIData(oldp+822,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_0_r),32);
            tracep->chgBit(oldp+823,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_0_r));
            tracep->chgBit(oldp+824,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_0));
            tracep->chgIData(oldp+825,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_1_r),32);
            tracep->chgBit(oldp+826,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_1_r));
            tracep->chgBit(oldp+827,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_1));
            tracep->chgIData(oldp+828,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_2_r),32);
            tracep->chgBit(oldp+829,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_2_r));
            tracep->chgBit(oldp+830,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_2));
            tracep->chgIData(oldp+831,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_3_r),32);
            tracep->chgBit(oldp+832,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_3_r));
            tracep->chgBit(oldp+833,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_3));
            tracep->chgIData(oldp+834,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_4_r),32);
            tracep->chgBit(oldp+835,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_4_r));
            tracep->chgBit(oldp+836,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_4));
            tracep->chgIData(oldp+837,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_5_r),32);
            tracep->chgBit(oldp+838,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_5_r));
            tracep->chgBit(oldp+839,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_5));
            tracep->chgIData(oldp+840,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_6_r),32);
            tracep->chgBit(oldp+841,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_6_r));
            tracep->chgBit(oldp+842,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_6));
            tracep->chgIData(oldp+843,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_7_r),32);
            tracep->chgBit(oldp+844,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_7_r));
            tracep->chgBit(oldp+845,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_7));
            tracep->chgIData(oldp+846,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_8_r),32);
            tracep->chgBit(oldp+847,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_8_r));
            tracep->chgBit(oldp+848,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_8));
            tracep->chgIData(oldp+849,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_9_r),32);
            tracep->chgBit(oldp+850,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_9_r));
            tracep->chgBit(oldp+851,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_9));
            tracep->chgIData(oldp+852,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_10_r),32);
            tracep->chgBit(oldp+853,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_10_r));
            tracep->chgBit(oldp+854,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_10));
            tracep->chgIData(oldp+855,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_11_r),32);
            tracep->chgBit(oldp+856,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_11_r));
            tracep->chgBit(oldp+857,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_11));
            tracep->chgIData(oldp+858,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_12_r),32);
            tracep->chgBit(oldp+859,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_12_r));
            tracep->chgBit(oldp+860,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_12));
            tracep->chgIData(oldp+861,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_13_r),32);
            tracep->chgBit(oldp+862,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_13_r));
            tracep->chgBit(oldp+863,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_13));
            tracep->chgIData(oldp+864,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_14_r),32);
            tracep->chgBit(oldp+865,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_14_r));
            tracep->chgBit(oldp+866,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_14));
            tracep->chgIData(oldp+867,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__pcList_15_r),32);
            tracep->chgBit(oldp+868,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__vList_15_r));
            tracep->chgBit(oldp+869,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitList_15));
            tracep->chgBit(oldp+870,(((((((((((((((
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
            tracep->chgCData(oldp+871,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__cnt_r),4);
            tracep->chgBit(oldp+872,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_0));
            tracep->chgBit(oldp+873,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_1));
            tracep->chgBit(oldp+874,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_2));
            tracep->chgBit(oldp+875,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_3));
            tracep->chgBit(oldp+876,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_4));
            tracep->chgBit(oldp+877,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_5));
            tracep->chgBit(oldp+878,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_6));
            tracep->chgBit(oldp+879,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_7));
            tracep->chgBit(oldp+880,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_8));
            tracep->chgBit(oldp+881,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_9));
            tracep->chgBit(oldp+882,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_10));
            tracep->chgBit(oldp+883,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_11));
            tracep->chgBit(oldp+884,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_12));
            tracep->chgBit(oldp+885,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_13));
            tracep->chgBit(oldp+886,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_14));
            tracep->chgBit(oldp+887,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitIfList_15));
            tracep->chgBit(oldp+888,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__hitif));
            tracep->chgBit(oldp+889,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__takenV));
            tracep->chgCData(oldp+890,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+891,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+892,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+893,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_0__DOT__stateWire_r),2);
            tracep->chgBit(oldp+894,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__takenV));
            tracep->chgCData(oldp+895,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+896,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+897,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+898,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_1__DOT__stateWire_r),2);
            tracep->chgBit(oldp+899,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__takenV));
            tracep->chgCData(oldp+900,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+901,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+902,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+903,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_2__DOT__stateWire_r),2);
            tracep->chgBit(oldp+904,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__takenV));
            tracep->chgCData(oldp+905,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+906,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+907,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+908,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_3__DOT__stateWire_r),2);
            tracep->chgBit(oldp+909,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__takenV));
            tracep->chgCData(oldp+910,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+911,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+912,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+913,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_4__DOT__stateWire_r),2);
            tracep->chgBit(oldp+914,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__takenV));
            tracep->chgCData(oldp+915,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+916,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+917,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+918,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_5__DOT__stateWire_r),2);
            tracep->chgBit(oldp+919,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__takenV));
            tracep->chgCData(oldp+920,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+921,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+922,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+923,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_6__DOT__stateWire_r),2);
            tracep->chgBit(oldp+924,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__takenV));
            tracep->chgCData(oldp+925,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+926,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+927,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+928,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_7__DOT__stateWire_r),2);
            tracep->chgBit(oldp+929,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__takenV));
            tracep->chgCData(oldp+930,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+931,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+932,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+933,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_8__DOT__stateWire_r),2);
            tracep->chgBit(oldp+934,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__takenV));
            tracep->chgCData(oldp+935,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+936,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+937,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+938,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_9__DOT__stateWire_r),2);
            tracep->chgBit(oldp+939,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__takenV));
            tracep->chgCData(oldp+940,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+941,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+942,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+943,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_10__DOT__stateWire_r),2);
            tracep->chgBit(oldp+944,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__takenV));
            tracep->chgCData(oldp+945,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+946,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+947,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+948,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_11__DOT__stateWire_r),2);
            tracep->chgBit(oldp+949,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__takenV));
            tracep->chgCData(oldp+950,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+951,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+952,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+953,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_12__DOT__stateWire_r),2);
            tracep->chgBit(oldp+954,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__takenV));
            tracep->chgCData(oldp+955,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+956,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+957,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+958,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_13__DOT__stateWire_r),2);
            tracep->chgBit(oldp+959,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__takenV));
            tracep->chgCData(oldp+960,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+961,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+962,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+963,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_14__DOT__stateWire_r),2);
            tracep->chgBit(oldp+964,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__takenV));
            tracep->chgCData(oldp+965,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__takenV)
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+966,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__takenV)
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+967,(((IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__takenV)
                                         ? 3U : 1U)),2);
            tracep->chgCData(oldp+968,(vlSelf->ysyx_041728__DOT__riscvIns__DOT__preBranchIns__DOT__precelList_15__DOT__stateWire_r),2);
            tracep->chgBit(oldp+969,((0x100073U == 
                                      ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[5U] 
                                        << 0x13U) | 
                                       (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipMEM2WBReg[4U] 
                                        >> 0xdU)))));
            tracep->chgCData(oldp+970,((0xfU & vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc)),4);
            tracep->chgIData(oldp+971,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                        >> 0xaU)),22);
            tracep->chgBit(oldp+972,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_0_r));
            tracep->chgBit(oldp+973,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_0_r));
            tracep->chgBit(oldp+974,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_0_r));
            tracep->chgBit(oldp+975,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_0_r));
            tracep->chgBit(oldp+976,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_0_r));
            tracep->chgBit(oldp+977,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_0_r));
            tracep->chgBit(oldp+978,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_0_r));
            tracep->chgBit(oldp+979,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_0_r));
            tracep->chgBit(oldp+980,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_0_r));
            tracep->chgBit(oldp+981,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_0_r));
            tracep->chgBit(oldp+982,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_0_r));
            tracep->chgBit(oldp+983,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_0_r));
            tracep->chgBit(oldp+984,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_0_r));
            tracep->chgBit(oldp+985,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_0_r));
            tracep->chgBit(oldp+986,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_0_r));
            tracep->chgBit(oldp+987,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_0_r));
            tracep->chgBit(oldp+988,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_0_r));
            tracep->chgBit(oldp+989,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_0_r));
            tracep->chgBit(oldp+990,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_0_r));
            tracep->chgBit(oldp+991,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_0_r));
            tracep->chgBit(oldp+992,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_0_r));
            tracep->chgBit(oldp+993,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_0_r));
            tracep->chgBit(oldp+994,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_0_r));
            tracep->chgBit(oldp+995,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_0_r));
            tracep->chgBit(oldp+996,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_0_r));
            tracep->chgBit(oldp+997,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_0_r));
            tracep->chgBit(oldp+998,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_0_r));
            tracep->chgBit(oldp+999,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_0_r));
            tracep->chgBit(oldp+1000,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_0_r));
            tracep->chgBit(oldp+1001,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_0_r));
            tracep->chgBit(oldp+1002,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_0_r));
            tracep->chgBit(oldp+1003,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_0_r));
            tracep->chgBit(oldp+1004,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_0_r));
            tracep->chgBit(oldp+1005,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_0_r));
            tracep->chgBit(oldp+1006,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_0_r));
            tracep->chgBit(oldp+1007,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_0_r));
            tracep->chgBit(oldp+1008,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_0_r));
            tracep->chgBit(oldp+1009,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_0_r));
            tracep->chgBit(oldp+1010,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_0_r));
            tracep->chgBit(oldp+1011,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_0_r));
            tracep->chgBit(oldp+1012,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_0_r));
            tracep->chgBit(oldp+1013,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_0_r));
            tracep->chgBit(oldp+1014,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_0_r));
            tracep->chgBit(oldp+1015,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_0_r));
            tracep->chgBit(oldp+1016,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_0_r));
            tracep->chgBit(oldp+1017,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_0_r));
            tracep->chgBit(oldp+1018,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_0_r));
            tracep->chgBit(oldp+1019,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_0_r));
            tracep->chgBit(oldp+1020,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_0_r));
            tracep->chgBit(oldp+1021,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_0_r));
            tracep->chgBit(oldp+1022,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_0_r));
            tracep->chgBit(oldp+1023,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_0_r));
            tracep->chgBit(oldp+1024,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_0_r));
            tracep->chgBit(oldp+1025,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_0_r));
            tracep->chgBit(oldp+1026,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_0_r));
            tracep->chgBit(oldp+1027,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_0_r));
            tracep->chgBit(oldp+1028,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_0_r));
            tracep->chgBit(oldp+1029,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_0_r));
            tracep->chgBit(oldp+1030,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_0_r));
            tracep->chgBit(oldp+1031,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_0_r));
            tracep->chgBit(oldp+1032,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_0_r));
            tracep->chgBit(oldp+1033,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_0_r));
            tracep->chgBit(oldp+1034,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_0_r));
            tracep->chgBit(oldp+1035,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_0_r));
            tracep->chgBit(oldp+1036,(((0x3fU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_0_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_0_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_0_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_0_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_0_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_0_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_0_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_0_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_0_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_0_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                               >> 4U)))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_0_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_103_0))))))))))))));
            tracep->chgIData(oldp+1037,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_0_r),22);
            tracep->chgIData(oldp+1038,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_0_r),22);
            tracep->chgIData(oldp+1039,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_0_r),22);
            tracep->chgIData(oldp+1040,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_0_r),22);
            tracep->chgIData(oldp+1041,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_0_r),22);
            tracep->chgIData(oldp+1042,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_0_r),22);
            tracep->chgIData(oldp+1043,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_0_r),22);
            tracep->chgIData(oldp+1044,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_0_r),22);
            tracep->chgIData(oldp+1045,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_0_r),22);
            tracep->chgIData(oldp+1046,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_0_r),22);
            tracep->chgIData(oldp+1047,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_0_r),22);
            tracep->chgIData(oldp+1048,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_0_r),22);
            tracep->chgIData(oldp+1049,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_0_r),22);
            tracep->chgIData(oldp+1050,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_0_r),22);
            tracep->chgIData(oldp+1051,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_0_r),22);
            tracep->chgIData(oldp+1052,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_0_r),22);
            tracep->chgIData(oldp+1053,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_0_r),22);
            tracep->chgIData(oldp+1054,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_0_r),22);
            tracep->chgIData(oldp+1055,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_0_r),22);
            tracep->chgIData(oldp+1056,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_0_r),22);
            tracep->chgIData(oldp+1057,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_0_r),22);
            tracep->chgIData(oldp+1058,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_0_r),22);
            tracep->chgIData(oldp+1059,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_0_r),22);
            tracep->chgIData(oldp+1060,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_0_r),22);
            tracep->chgIData(oldp+1061,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_0_r),22);
            tracep->chgIData(oldp+1062,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_0_r),22);
            tracep->chgIData(oldp+1063,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_0_r),22);
            tracep->chgIData(oldp+1064,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_0_r),22);
            tracep->chgIData(oldp+1065,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_0_r),22);
            tracep->chgIData(oldp+1066,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_0_r),22);
            tracep->chgIData(oldp+1067,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_0_r),22);
            tracep->chgIData(oldp+1068,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_0_r),22);
            tracep->chgIData(oldp+1069,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_0_r),22);
            tracep->chgIData(oldp+1070,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_0_r),22);
            tracep->chgIData(oldp+1071,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_0_r),22);
            tracep->chgIData(oldp+1072,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_0_r),22);
            tracep->chgIData(oldp+1073,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_0_r),22);
            tracep->chgIData(oldp+1074,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_0_r),22);
            tracep->chgIData(oldp+1075,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_0_r),22);
            tracep->chgIData(oldp+1076,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_0_r),22);
            tracep->chgIData(oldp+1077,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_0_r),22);
            tracep->chgIData(oldp+1078,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_0_r),22);
            tracep->chgIData(oldp+1079,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_0_r),22);
            tracep->chgIData(oldp+1080,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_0_r),22);
            tracep->chgIData(oldp+1081,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_0_r),22);
            tracep->chgIData(oldp+1082,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_0_r),22);
            tracep->chgIData(oldp+1083,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_0_r),22);
            tracep->chgIData(oldp+1084,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_0_r),22);
            tracep->chgIData(oldp+1085,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_0_r),22);
            tracep->chgIData(oldp+1086,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_0_r),22);
            tracep->chgIData(oldp+1087,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_0_r),22);
            tracep->chgIData(oldp+1088,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_0_r),22);
            tracep->chgIData(oldp+1089,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_0_r),22);
            tracep->chgIData(oldp+1090,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_0_r),22);
            tracep->chgIData(oldp+1091,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_0_r),22);
            tracep->chgIData(oldp+1092,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_0_r),22);
            tracep->chgIData(oldp+1093,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_0_r),22);
            tracep->chgIData(oldp+1094,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_0_r),22);
            tracep->chgIData(oldp+1095,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_0_r),22);
            tracep->chgIData(oldp+1096,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_0_r),22);
            tracep->chgIData(oldp+1097,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_0_r),22);
            tracep->chgIData(oldp+1098,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_0_r),22);
            tracep->chgIData(oldp+1099,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_0_r),22);
            tracep->chgIData(oldp+1100,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_0_r),22);
            tracep->chgIData(oldp+1101,(((0x3fU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_0_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_0_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_0_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_0_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_0_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_0_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_0_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_0_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_0_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_0_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_0_r
                                                          : vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_103_0)))))))))))),22);
            tracep->chgBit(oldp+1102,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_0));
            tracep->chgBit(oldp+1103,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_1_r));
            tracep->chgBit(oldp+1104,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_1_r));
            tracep->chgBit(oldp+1105,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_1_r));
            tracep->chgBit(oldp+1106,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_1_r));
            tracep->chgBit(oldp+1107,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_1_r));
            tracep->chgBit(oldp+1108,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_1_r));
            tracep->chgBit(oldp+1109,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_1_r));
            tracep->chgBit(oldp+1110,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_1_r));
            tracep->chgBit(oldp+1111,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_1_r));
            tracep->chgBit(oldp+1112,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_1_r));
            tracep->chgBit(oldp+1113,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_1_r));
            tracep->chgBit(oldp+1114,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_1_r));
            tracep->chgBit(oldp+1115,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_1_r));
            tracep->chgBit(oldp+1116,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_1_r));
            tracep->chgBit(oldp+1117,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_1_r));
            tracep->chgBit(oldp+1118,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_1_r));
            tracep->chgBit(oldp+1119,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_1_r));
            tracep->chgBit(oldp+1120,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_1_r));
            tracep->chgBit(oldp+1121,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_1_r));
            tracep->chgBit(oldp+1122,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_1_r));
            tracep->chgBit(oldp+1123,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_1_r));
            tracep->chgBit(oldp+1124,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_1_r));
            tracep->chgBit(oldp+1125,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_1_r));
            tracep->chgBit(oldp+1126,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_1_r));
            tracep->chgBit(oldp+1127,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_1_r));
            tracep->chgBit(oldp+1128,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_1_r));
            tracep->chgBit(oldp+1129,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_1_r));
            tracep->chgBit(oldp+1130,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_1_r));
            tracep->chgBit(oldp+1131,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_1_r));
            tracep->chgBit(oldp+1132,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_1_r));
            tracep->chgBit(oldp+1133,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_1_r));
            tracep->chgBit(oldp+1134,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_1_r));
            tracep->chgBit(oldp+1135,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_1_r));
            tracep->chgBit(oldp+1136,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_1_r));
            tracep->chgBit(oldp+1137,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_1_r));
            tracep->chgBit(oldp+1138,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_1_r));
            tracep->chgBit(oldp+1139,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_1_r));
            tracep->chgBit(oldp+1140,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_1_r));
            tracep->chgBit(oldp+1141,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_1_r));
            tracep->chgBit(oldp+1142,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_1_r));
            tracep->chgBit(oldp+1143,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_1_r));
            tracep->chgBit(oldp+1144,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_1_r));
            tracep->chgBit(oldp+1145,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_1_r));
            tracep->chgBit(oldp+1146,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_1_r));
            tracep->chgBit(oldp+1147,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_1_r));
            tracep->chgBit(oldp+1148,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_1_r));
            tracep->chgBit(oldp+1149,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_1_r));
            tracep->chgBit(oldp+1150,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_1_r));
            tracep->chgBit(oldp+1151,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_1_r));
            tracep->chgBit(oldp+1152,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_1_r));
            tracep->chgBit(oldp+1153,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_1_r));
            tracep->chgBit(oldp+1154,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_1_r));
            tracep->chgBit(oldp+1155,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_1_r));
            tracep->chgBit(oldp+1156,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_1_r));
            tracep->chgBit(oldp+1157,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_1_r));
            tracep->chgBit(oldp+1158,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_1_r));
            tracep->chgBit(oldp+1159,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_1_r));
            tracep->chgBit(oldp+1160,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_1_r));
            tracep->chgBit(oldp+1161,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_1_r));
            tracep->chgBit(oldp+1162,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_1_r));
            tracep->chgBit(oldp+1163,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_1_r));
            tracep->chgBit(oldp+1164,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_1_r));
            tracep->chgBit(oldp+1165,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_1_r));
            tracep->chgBit(oldp+1166,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_1_r));
            tracep->chgBit(oldp+1167,(((0x3fU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_1_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_1_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_1_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_1_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_1_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_1_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_1_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_1_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_1_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_1_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                               >> 4U)))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_1_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_103_1))))))))))))));
            tracep->chgIData(oldp+1168,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_1_r),22);
            tracep->chgIData(oldp+1169,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_1_r),22);
            tracep->chgIData(oldp+1170,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_1_r),22);
            tracep->chgIData(oldp+1171,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_1_r),22);
            tracep->chgIData(oldp+1172,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_1_r),22);
            tracep->chgIData(oldp+1173,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_1_r),22);
            tracep->chgIData(oldp+1174,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_1_r),22);
            tracep->chgIData(oldp+1175,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_1_r),22);
            tracep->chgIData(oldp+1176,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_1_r),22);
            tracep->chgIData(oldp+1177,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_1_r),22);
            tracep->chgIData(oldp+1178,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_1_r),22);
            tracep->chgIData(oldp+1179,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_1_r),22);
            tracep->chgIData(oldp+1180,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_1_r),22);
            tracep->chgIData(oldp+1181,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_1_r),22);
            tracep->chgIData(oldp+1182,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_1_r),22);
            tracep->chgIData(oldp+1183,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_1_r),22);
            tracep->chgIData(oldp+1184,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_1_r),22);
            tracep->chgIData(oldp+1185,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_1_r),22);
            tracep->chgIData(oldp+1186,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_1_r),22);
            tracep->chgIData(oldp+1187,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_1_r),22);
            tracep->chgIData(oldp+1188,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_1_r),22);
            tracep->chgIData(oldp+1189,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_1_r),22);
            tracep->chgIData(oldp+1190,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_1_r),22);
            tracep->chgIData(oldp+1191,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_1_r),22);
            tracep->chgIData(oldp+1192,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_1_r),22);
            tracep->chgIData(oldp+1193,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_1_r),22);
            tracep->chgIData(oldp+1194,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_1_r),22);
            tracep->chgIData(oldp+1195,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_1_r),22);
            tracep->chgIData(oldp+1196,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_1_r),22);
            tracep->chgIData(oldp+1197,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_1_r),22);
            tracep->chgIData(oldp+1198,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_1_r),22);
            tracep->chgIData(oldp+1199,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_1_r),22);
            tracep->chgIData(oldp+1200,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_1_r),22);
            tracep->chgIData(oldp+1201,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_1_r),22);
            tracep->chgIData(oldp+1202,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_1_r),22);
            tracep->chgIData(oldp+1203,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_1_r),22);
            tracep->chgIData(oldp+1204,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_1_r),22);
            tracep->chgIData(oldp+1205,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_1_r),22);
            tracep->chgIData(oldp+1206,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_1_r),22);
            tracep->chgIData(oldp+1207,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_1_r),22);
            tracep->chgIData(oldp+1208,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_1_r),22);
            tracep->chgIData(oldp+1209,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_1_r),22);
            tracep->chgIData(oldp+1210,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_1_r),22);
            tracep->chgIData(oldp+1211,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_1_r),22);
            tracep->chgIData(oldp+1212,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_1_r),22);
            tracep->chgIData(oldp+1213,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_1_r),22);
            tracep->chgIData(oldp+1214,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_1_r),22);
            tracep->chgIData(oldp+1215,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_1_r),22);
            tracep->chgIData(oldp+1216,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_1_r),22);
            tracep->chgIData(oldp+1217,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_1_r),22);
            tracep->chgIData(oldp+1218,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_1_r),22);
            tracep->chgIData(oldp+1219,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_1_r),22);
            tracep->chgIData(oldp+1220,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_1_r),22);
            tracep->chgIData(oldp+1221,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_1_r),22);
            tracep->chgIData(oldp+1222,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_1_r),22);
            tracep->chgIData(oldp+1223,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_1_r),22);
            tracep->chgIData(oldp+1224,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_1_r),22);
            tracep->chgIData(oldp+1225,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_1_r),22);
            tracep->chgIData(oldp+1226,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_1_r),22);
            tracep->chgIData(oldp+1227,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_1_r),22);
            tracep->chgIData(oldp+1228,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_1_r),22);
            tracep->chgIData(oldp+1229,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_1_r),22);
            tracep->chgIData(oldp+1230,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_1_r),22);
            tracep->chgIData(oldp+1231,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_1_r),22);
            tracep->chgIData(oldp+1232,(((0x3fU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_1_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_1_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_1_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_1_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_1_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_1_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_1_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_1_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_1_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_1_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_1_r
                                                          : vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_103_1)))))))))))),22);
            tracep->chgBit(oldp+1233,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_1));
            tracep->chgBit(oldp+1234,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_2_r));
            tracep->chgBit(oldp+1235,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_2_r));
            tracep->chgBit(oldp+1236,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_2_r));
            tracep->chgBit(oldp+1237,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_2_r));
            tracep->chgBit(oldp+1238,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_2_r));
            tracep->chgBit(oldp+1239,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_2_r));
            tracep->chgBit(oldp+1240,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_2_r));
            tracep->chgBit(oldp+1241,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_2_r));
            tracep->chgBit(oldp+1242,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_2_r));
            tracep->chgBit(oldp+1243,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_2_r));
            tracep->chgBit(oldp+1244,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_2_r));
            tracep->chgBit(oldp+1245,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_2_r));
            tracep->chgBit(oldp+1246,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_2_r));
            tracep->chgBit(oldp+1247,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_2_r));
            tracep->chgBit(oldp+1248,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_2_r));
            tracep->chgBit(oldp+1249,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_2_r));
            tracep->chgBit(oldp+1250,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_2_r));
            tracep->chgBit(oldp+1251,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_2_r));
            tracep->chgBit(oldp+1252,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_2_r));
            tracep->chgBit(oldp+1253,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_2_r));
            tracep->chgBit(oldp+1254,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_2_r));
            tracep->chgBit(oldp+1255,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_2_r));
            tracep->chgBit(oldp+1256,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_2_r));
            tracep->chgBit(oldp+1257,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_2_r));
            tracep->chgBit(oldp+1258,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_2_r));
            tracep->chgBit(oldp+1259,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_2_r));
            tracep->chgBit(oldp+1260,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_2_r));
            tracep->chgBit(oldp+1261,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_2_r));
            tracep->chgBit(oldp+1262,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_2_r));
            tracep->chgBit(oldp+1263,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_2_r));
            tracep->chgBit(oldp+1264,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_2_r));
            tracep->chgBit(oldp+1265,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_2_r));
            tracep->chgBit(oldp+1266,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_2_r));
            tracep->chgBit(oldp+1267,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_2_r));
            tracep->chgBit(oldp+1268,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_2_r));
            tracep->chgBit(oldp+1269,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_2_r));
            tracep->chgBit(oldp+1270,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_2_r));
            tracep->chgBit(oldp+1271,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_2_r));
            tracep->chgBit(oldp+1272,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_2_r));
            tracep->chgBit(oldp+1273,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_2_r));
            tracep->chgBit(oldp+1274,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_2_r));
            tracep->chgBit(oldp+1275,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_2_r));
            tracep->chgBit(oldp+1276,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_2_r));
            tracep->chgBit(oldp+1277,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_2_r));
            tracep->chgBit(oldp+1278,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_2_r));
            tracep->chgBit(oldp+1279,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_2_r));
            tracep->chgBit(oldp+1280,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_2_r));
            tracep->chgBit(oldp+1281,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_2_r));
            tracep->chgBit(oldp+1282,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_2_r));
            tracep->chgBit(oldp+1283,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_2_r));
            tracep->chgBit(oldp+1284,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_2_r));
            tracep->chgBit(oldp+1285,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_2_r));
            tracep->chgBit(oldp+1286,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_2_r));
            tracep->chgBit(oldp+1287,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_2_r));
            tracep->chgBit(oldp+1288,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_2_r));
            tracep->chgBit(oldp+1289,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_2_r));
            tracep->chgBit(oldp+1290,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_2_r));
            tracep->chgBit(oldp+1291,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_2_r));
            tracep->chgBit(oldp+1292,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_2_r));
            tracep->chgBit(oldp+1293,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_2_r));
            tracep->chgBit(oldp+1294,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_2_r));
            tracep->chgBit(oldp+1295,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_2_r));
            tracep->chgBit(oldp+1296,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_2_r));
            tracep->chgBit(oldp+1297,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_2_r));
            tracep->chgBit(oldp+1298,(((0x3fU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_2_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_2_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_2_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_2_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_2_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_2_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_2_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_2_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_2_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_2_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                               >> 4U)))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_2_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_103_2))))))))))))));
            tracep->chgIData(oldp+1299,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_2_r),22);
            tracep->chgIData(oldp+1300,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_2_r),22);
            tracep->chgIData(oldp+1301,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_2_r),22);
            tracep->chgIData(oldp+1302,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_2_r),22);
            tracep->chgIData(oldp+1303,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_2_r),22);
            tracep->chgIData(oldp+1304,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_2_r),22);
            tracep->chgIData(oldp+1305,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_2_r),22);
            tracep->chgIData(oldp+1306,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_2_r),22);
            tracep->chgIData(oldp+1307,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_2_r),22);
            tracep->chgIData(oldp+1308,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_2_r),22);
            tracep->chgIData(oldp+1309,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_2_r),22);
            tracep->chgIData(oldp+1310,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_2_r),22);
            tracep->chgIData(oldp+1311,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_2_r),22);
            tracep->chgIData(oldp+1312,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_2_r),22);
            tracep->chgIData(oldp+1313,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_2_r),22);
            tracep->chgIData(oldp+1314,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_2_r),22);
            tracep->chgIData(oldp+1315,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_2_r),22);
            tracep->chgIData(oldp+1316,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_2_r),22);
            tracep->chgIData(oldp+1317,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_2_r),22);
            tracep->chgIData(oldp+1318,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_2_r),22);
            tracep->chgIData(oldp+1319,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_2_r),22);
            tracep->chgIData(oldp+1320,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_2_r),22);
            tracep->chgIData(oldp+1321,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_2_r),22);
            tracep->chgIData(oldp+1322,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_2_r),22);
            tracep->chgIData(oldp+1323,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_2_r),22);
            tracep->chgIData(oldp+1324,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_2_r),22);
            tracep->chgIData(oldp+1325,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_2_r),22);
            tracep->chgIData(oldp+1326,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_2_r),22);
            tracep->chgIData(oldp+1327,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_2_r),22);
            tracep->chgIData(oldp+1328,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_2_r),22);
            tracep->chgIData(oldp+1329,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_2_r),22);
            tracep->chgIData(oldp+1330,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_2_r),22);
            tracep->chgIData(oldp+1331,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_2_r),22);
            tracep->chgIData(oldp+1332,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_2_r),22);
            tracep->chgIData(oldp+1333,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_2_r),22);
            tracep->chgIData(oldp+1334,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_2_r),22);
            tracep->chgIData(oldp+1335,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_2_r),22);
            tracep->chgIData(oldp+1336,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_2_r),22);
            tracep->chgIData(oldp+1337,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_2_r),22);
            tracep->chgIData(oldp+1338,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_2_r),22);
            tracep->chgIData(oldp+1339,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_2_r),22);
            tracep->chgIData(oldp+1340,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_2_r),22);
            tracep->chgIData(oldp+1341,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_2_r),22);
            tracep->chgIData(oldp+1342,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_2_r),22);
            tracep->chgIData(oldp+1343,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_2_r),22);
            tracep->chgIData(oldp+1344,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_2_r),22);
            tracep->chgIData(oldp+1345,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_2_r),22);
            tracep->chgIData(oldp+1346,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_2_r),22);
            tracep->chgIData(oldp+1347,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_2_r),22);
            tracep->chgIData(oldp+1348,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_2_r),22);
            tracep->chgIData(oldp+1349,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_2_r),22);
            tracep->chgIData(oldp+1350,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_2_r),22);
            tracep->chgIData(oldp+1351,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_2_r),22);
            tracep->chgIData(oldp+1352,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_2_r),22);
            tracep->chgIData(oldp+1353,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_2_r),22);
            tracep->chgIData(oldp+1354,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_2_r),22);
            tracep->chgIData(oldp+1355,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_2_r),22);
            tracep->chgIData(oldp+1356,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_2_r),22);
            tracep->chgIData(oldp+1357,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_2_r),22);
            tracep->chgIData(oldp+1358,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_2_r),22);
            tracep->chgIData(oldp+1359,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_2_r),22);
            tracep->chgIData(oldp+1360,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_2_r),22);
            tracep->chgIData(oldp+1361,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_2_r),22);
            tracep->chgIData(oldp+1362,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_2_r),22);
            tracep->chgIData(oldp+1363,(((0x3fU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_2_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_2_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_2_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_2_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_2_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_2_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_2_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_2_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_2_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_2_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_2_r
                                                          : vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_103_2)))))))))))),22);
            tracep->chgBit(oldp+1364,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_2));
            tracep->chgBit(oldp+1365,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_3_r));
            tracep->chgBit(oldp+1366,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_3_r));
            tracep->chgBit(oldp+1367,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_3_r));
            tracep->chgBit(oldp+1368,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_3_r));
            tracep->chgBit(oldp+1369,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_3_r));
            tracep->chgBit(oldp+1370,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_3_r));
            tracep->chgBit(oldp+1371,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_3_r));
            tracep->chgBit(oldp+1372,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_3_r));
            tracep->chgBit(oldp+1373,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_3_r));
            tracep->chgBit(oldp+1374,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_3_r));
            tracep->chgBit(oldp+1375,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_3_r));
            tracep->chgBit(oldp+1376,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_52_3_r));
            tracep->chgBit(oldp+1377,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_51_3_r));
            tracep->chgBit(oldp+1378,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_50_3_r));
            tracep->chgBit(oldp+1379,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_49_3_r));
            tracep->chgBit(oldp+1380,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_48_3_r));
            tracep->chgBit(oldp+1381,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_47_3_r));
            tracep->chgBit(oldp+1382,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_46_3_r));
            tracep->chgBit(oldp+1383,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_45_3_r));
            tracep->chgBit(oldp+1384,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_44_3_r));
            tracep->chgBit(oldp+1385,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_43_3_r));
            tracep->chgBit(oldp+1386,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_42_3_r));
            tracep->chgBit(oldp+1387,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_41_3_r));
            tracep->chgBit(oldp+1388,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_40_3_r));
            tracep->chgBit(oldp+1389,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_39_3_r));
            tracep->chgBit(oldp+1390,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_38_3_r));
            tracep->chgBit(oldp+1391,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_37_3_r));
            tracep->chgBit(oldp+1392,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_36_3_r));
            tracep->chgBit(oldp+1393,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_35_3_r));
            tracep->chgBit(oldp+1394,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_34_3_r));
            tracep->chgBit(oldp+1395,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_33_3_r));
            tracep->chgBit(oldp+1396,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_32_3_r));
            tracep->chgBit(oldp+1397,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_31_3_r));
            tracep->chgBit(oldp+1398,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_30_3_r));
            tracep->chgBit(oldp+1399,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_29_3_r));
            tracep->chgBit(oldp+1400,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_28_3_r));
            tracep->chgBit(oldp+1401,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_27_3_r));
            tracep->chgBit(oldp+1402,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_26_3_r));
            tracep->chgBit(oldp+1403,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_25_3_r));
            tracep->chgBit(oldp+1404,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_24_3_r));
            tracep->chgBit(oldp+1405,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_23_3_r));
            tracep->chgBit(oldp+1406,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_22_3_r));
            tracep->chgBit(oldp+1407,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_21_3_r));
            tracep->chgBit(oldp+1408,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_20_3_r));
            tracep->chgBit(oldp+1409,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_19_3_r));
            tracep->chgBit(oldp+1410,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_18_3_r));
            tracep->chgBit(oldp+1411,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_17_3_r));
            tracep->chgBit(oldp+1412,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_16_3_r));
            tracep->chgBit(oldp+1413,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_15_3_r));
            tracep->chgBit(oldp+1414,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_14_3_r));
            tracep->chgBit(oldp+1415,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_13_3_r));
            tracep->chgBit(oldp+1416,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_12_3_r));
            tracep->chgBit(oldp+1417,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_11_3_r));
            tracep->chgBit(oldp+1418,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_10_3_r));
            tracep->chgBit(oldp+1419,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_9_3_r));
            tracep->chgBit(oldp+1420,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_8_3_r));
            tracep->chgBit(oldp+1421,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_7_3_r));
            tracep->chgBit(oldp+1422,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_6_3_r));
            tracep->chgBit(oldp+1423,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_5_3_r));
            tracep->chgBit(oldp+1424,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_4_3_r));
            tracep->chgBit(oldp+1425,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_3_3_r));
            tracep->chgBit(oldp+1426,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_2_3_r));
            tracep->chgBit(oldp+1427,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_1_3_r));
            tracep->chgBit(oldp+1428,(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_0_3_r));
            tracep->chgBit(oldp+1429,(((0x3fU == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_63_3_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                >> 4U)))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_62_3_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                    >> 4U)))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_61_3_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_60_3_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_59_3_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_58_3_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_57_3_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_56_3_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_55_3_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_54_3_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                               >> 4U)))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__vArrayWire_53_3_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT___vMuxOut_T_103_3))))))))))))));
            tracep->chgIData(oldp+1430,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_3_r),22);
            tracep->chgIData(oldp+1431,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_3_r),22);
            tracep->chgIData(oldp+1432,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_3_r),22);
            tracep->chgIData(oldp+1433,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_3_r),22);
            tracep->chgIData(oldp+1434,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_3_r),22);
            tracep->chgIData(oldp+1435,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_3_r),22);
            tracep->chgIData(oldp+1436,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_3_r),22);
            tracep->chgIData(oldp+1437,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_3_r),22);
            tracep->chgIData(oldp+1438,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_3_r),22);
            tracep->chgIData(oldp+1439,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_3_r),22);
            tracep->chgIData(oldp+1440,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_3_r),22);
            tracep->chgIData(oldp+1441,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_52_3_r),22);
            tracep->chgIData(oldp+1442,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_51_3_r),22);
            tracep->chgIData(oldp+1443,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_50_3_r),22);
            tracep->chgIData(oldp+1444,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_49_3_r),22);
            tracep->chgIData(oldp+1445,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_48_3_r),22);
            tracep->chgIData(oldp+1446,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_47_3_r),22);
            tracep->chgIData(oldp+1447,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_46_3_r),22);
            tracep->chgIData(oldp+1448,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_45_3_r),22);
            tracep->chgIData(oldp+1449,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_44_3_r),22);
            tracep->chgIData(oldp+1450,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_43_3_r),22);
            tracep->chgIData(oldp+1451,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_42_3_r),22);
            tracep->chgIData(oldp+1452,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_41_3_r),22);
            tracep->chgIData(oldp+1453,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_40_3_r),22);
            tracep->chgIData(oldp+1454,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_39_3_r),22);
            tracep->chgIData(oldp+1455,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_38_3_r),22);
            tracep->chgIData(oldp+1456,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_37_3_r),22);
            tracep->chgIData(oldp+1457,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_36_3_r),22);
            tracep->chgIData(oldp+1458,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_35_3_r),22);
            tracep->chgIData(oldp+1459,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_34_3_r),22);
            tracep->chgIData(oldp+1460,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_33_3_r),22);
            tracep->chgIData(oldp+1461,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_32_3_r),22);
            tracep->chgIData(oldp+1462,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_31_3_r),22);
            tracep->chgIData(oldp+1463,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_30_3_r),22);
            tracep->chgIData(oldp+1464,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_29_3_r),22);
            tracep->chgIData(oldp+1465,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_28_3_r),22);
            tracep->chgIData(oldp+1466,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_27_3_r),22);
            tracep->chgIData(oldp+1467,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_26_3_r),22);
            tracep->chgIData(oldp+1468,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_25_3_r),22);
            tracep->chgIData(oldp+1469,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_24_3_r),22);
            tracep->chgIData(oldp+1470,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_23_3_r),22);
            tracep->chgIData(oldp+1471,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_22_3_r),22);
            tracep->chgIData(oldp+1472,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_21_3_r),22);
            tracep->chgIData(oldp+1473,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_20_3_r),22);
            tracep->chgIData(oldp+1474,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_19_3_r),22);
            tracep->chgIData(oldp+1475,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_18_3_r),22);
            tracep->chgIData(oldp+1476,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_17_3_r),22);
            tracep->chgIData(oldp+1477,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_16_3_r),22);
            tracep->chgIData(oldp+1478,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_15_3_r),22);
            tracep->chgIData(oldp+1479,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_14_3_r),22);
            tracep->chgIData(oldp+1480,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_13_3_r),22);
            tracep->chgIData(oldp+1481,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_12_3_r),22);
            tracep->chgIData(oldp+1482,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_11_3_r),22);
            tracep->chgIData(oldp+1483,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_10_3_r),22);
            tracep->chgIData(oldp+1484,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_9_3_r),22);
            tracep->chgIData(oldp+1485,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_8_3_r),22);
            tracep->chgIData(oldp+1486,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_7_3_r),22);
            tracep->chgIData(oldp+1487,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_6_3_r),22);
            tracep->chgIData(oldp+1488,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_5_3_r),22);
            tracep->chgIData(oldp+1489,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_4_3_r),22);
            tracep->chgIData(oldp+1490,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_3_3_r),22);
            tracep->chgIData(oldp+1491,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_2_3_r),22);
            tracep->chgIData(oldp+1492,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_1_3_r),22);
            tracep->chgIData(oldp+1493,(vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_0_3_r),22);
            tracep->chgIData(oldp+1494,(((0x3fU == 
                                          (0x3fU & 
                                           (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                            >> 4U)))
                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_63_3_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                     >> 4U)))
                                              ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_62_3_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                      >> 4U)))
                                                  ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_61_3_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                       >> 4U)))
                                                   ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_60_3_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                        >> 4U)))
                                                    ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_59_3_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                         >> 4U)))
                                                     ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_58_3_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                          >> 4U)))
                                                      ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_57_3_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                           >> 4U)))
                                                       ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_56_3_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                            >> 4U)))
                                                        ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_55_3_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                             >> 4U)))
                                                         ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_54_3_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                                              >> 4U)))
                                                          ? vlSelf->ysyx_041728__DOT__iCache__DOT__tagArrayWire_53_3_r
                                                          : vlSelf->ysyx_041728__DOT__iCache__DOT___tagMuxOut_T_103_3)))))))))))),22);
            tracep->chgBit(oldp+1495,(vlSelf->ysyx_041728__DOT__iCache__DOT__hitArray_3));
            tracep->chgBit(oldp+1496,(vlSelf->ysyx_041728__DOT__iCache__DOT__hit));
            tracep->chgBit(oldp+1497,((1U & (~ (IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState)))));
            tracep->chgWData(oldp+1498,(vlSelf->ysyx_041728__DOT__iCache__DOT__waysel),128);
            tracep->chgCData(oldp+1502,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_1_r),2);
            tracep->chgCData(oldp+1503,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_0_r),2);
            tracep->chgCData(oldp+1504,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_2_r),2);
            tracep->chgCData(oldp+1505,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_3_r),2);
            tracep->chgCData(oldp+1506,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_4_r),2);
            tracep->chgCData(oldp+1507,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_5_r),2);
            tracep->chgCData(oldp+1508,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_6_r),2);
            tracep->chgCData(oldp+1509,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_7_r),2);
            tracep->chgCData(oldp+1510,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_8_r),2);
            tracep->chgCData(oldp+1511,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_9_r),2);
            tracep->chgCData(oldp+1512,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_10_r),2);
            tracep->chgCData(oldp+1513,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_11_r),2);
            tracep->chgCData(oldp+1514,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_12_r),2);
            tracep->chgCData(oldp+1515,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_13_r),2);
            tracep->chgCData(oldp+1516,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_14_r),2);
            tracep->chgCData(oldp+1517,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_15_r),2);
            tracep->chgCData(oldp+1518,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_16_r),2);
            tracep->chgCData(oldp+1519,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_17_r),2);
            tracep->chgCData(oldp+1520,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_18_r),2);
            tracep->chgCData(oldp+1521,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_19_r),2);
            tracep->chgCData(oldp+1522,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_20_r),2);
            tracep->chgCData(oldp+1523,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_21_r),2);
            tracep->chgCData(oldp+1524,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_22_r),2);
            tracep->chgCData(oldp+1525,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_23_r),2);
            tracep->chgCData(oldp+1526,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_24_r),2);
            tracep->chgCData(oldp+1527,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_25_r),2);
            tracep->chgCData(oldp+1528,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_26_r),2);
            tracep->chgCData(oldp+1529,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_27_r),2);
            tracep->chgCData(oldp+1530,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_28_r),2);
            tracep->chgCData(oldp+1531,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_29_r),2);
            tracep->chgCData(oldp+1532,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_30_r),2);
            tracep->chgCData(oldp+1533,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_31_r),2);
            tracep->chgCData(oldp+1534,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_32_r),2);
            tracep->chgCData(oldp+1535,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_33_r),2);
            tracep->chgCData(oldp+1536,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_34_r),2);
            tracep->chgCData(oldp+1537,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_35_r),2);
            tracep->chgCData(oldp+1538,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_36_r),2);
            tracep->chgCData(oldp+1539,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_37_r),2);
            tracep->chgCData(oldp+1540,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_38_r),2);
            tracep->chgCData(oldp+1541,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_39_r),2);
            tracep->chgCData(oldp+1542,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_40_r),2);
            tracep->chgCData(oldp+1543,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_41_r),2);
            tracep->chgCData(oldp+1544,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_42_r),2);
            tracep->chgCData(oldp+1545,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_43_r),2);
            tracep->chgCData(oldp+1546,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_44_r),2);
            tracep->chgCData(oldp+1547,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_45_r),2);
            tracep->chgCData(oldp+1548,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_46_r),2);
            tracep->chgCData(oldp+1549,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_47_r),2);
            tracep->chgCData(oldp+1550,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_48_r),2);
            tracep->chgCData(oldp+1551,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_49_r),2);
            tracep->chgCData(oldp+1552,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_50_r),2);
            tracep->chgCData(oldp+1553,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_51_r),2);
            tracep->chgCData(oldp+1554,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_52_r),2);
            tracep->chgCData(oldp+1555,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_53_r),2);
            tracep->chgCData(oldp+1556,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_54_r),2);
            tracep->chgCData(oldp+1557,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_55_r),2);
            tracep->chgCData(oldp+1558,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_56_r),2);
            tracep->chgCData(oldp+1559,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_57_r),2);
            tracep->chgCData(oldp+1560,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_58_r),2);
            tracep->chgCData(oldp+1561,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_59_r),2);
            tracep->chgCData(oldp+1562,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_60_r),2);
            tracep->chgCData(oldp+1563,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_61_r),2);
            tracep->chgCData(oldp+1564,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_62_r),2);
            tracep->chgCData(oldp+1565,(vlSelf->ysyx_041728__DOT__iCache__DOT__selArrayWire_63_r),2);
            tracep->chgCData(oldp+1566,(vlSelf->ysyx_041728__DOT__iCache__DOT__sramSel),2);
            tracep->chgIData(oldp+1567,((vlSelf->ysyx_041728__DOT__riscvIns__DOT__ifu__DOT__pc 
                                         >> 4U)),28);
            tracep->chgCData(oldp+1568,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state),2);
            tracep->chgCData(oldp+1569,(((IData)(vlSelf->ysyx_041728__DOT__iCache__DOT__cacheState)
                                          ? 1U : 0U)),2);
            tracep->chgBit(oldp+1570,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__rd_state))));
            tracep->chgCData(oldp+1571,(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state),2);
            tracep->chgBit(oldp+1572,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state))));
            tracep->chgBit(oldp+1573,(vlSelf->ysyx_041728__DOT__dArbIns__DOT__clinitV));
            tracep->chgBit(oldp+1574,(vlSelf->ysyx_041728__DOT__dArbIns__DOT__dCacheV));
            tracep->chgCData(oldp+1575,(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state),2);
            tracep->chgBit(oldp+1576,((0U == (IData)(vlSelf->ysyx_041728__DOT__mmioDCache__DOT__state))));
            tracep->chgCData(oldp+1577,((0xfU & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                 >> 0x18U))),4);
            tracep->chgIData(oldp+1578,((0x3fffffU 
                                         & (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                            >> 2U))),22);
            tracep->chgCData(oldp+1579,(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState),2);
            tracep->chgBit(oldp+1580,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_0_r));
            tracep->chgBit(oldp+1581,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_0_r));
            tracep->chgBit(oldp+1582,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_0_r));
            tracep->chgBit(oldp+1583,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_0_r));
            tracep->chgBit(oldp+1584,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_0_r));
            tracep->chgBit(oldp+1585,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_0_r));
            tracep->chgBit(oldp+1586,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_0_r));
            tracep->chgBit(oldp+1587,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_0_r));
            tracep->chgBit(oldp+1588,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_0_r));
            tracep->chgBit(oldp+1589,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_0_r));
            tracep->chgBit(oldp+1590,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_0_r));
            tracep->chgBit(oldp+1591,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_0_r));
            tracep->chgBit(oldp+1592,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_0_r));
            tracep->chgBit(oldp+1593,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_0_r));
            tracep->chgBit(oldp+1594,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_0_r));
            tracep->chgBit(oldp+1595,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_0_r));
            tracep->chgBit(oldp+1596,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_0_r));
            tracep->chgBit(oldp+1597,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_0_r));
            tracep->chgBit(oldp+1598,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_0_r));
            tracep->chgBit(oldp+1599,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_0_r));
            tracep->chgBit(oldp+1600,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_0_r));
            tracep->chgBit(oldp+1601,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_0_r));
            tracep->chgBit(oldp+1602,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_0_r));
            tracep->chgBit(oldp+1603,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_0_r));
            tracep->chgBit(oldp+1604,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_0_r));
            tracep->chgBit(oldp+1605,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_0_r));
            tracep->chgBit(oldp+1606,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_0_r));
            tracep->chgBit(oldp+1607,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_0_r));
            tracep->chgBit(oldp+1608,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_0_r));
            tracep->chgBit(oldp+1609,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_0_r));
            tracep->chgBit(oldp+1610,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_0_r));
            tracep->chgBit(oldp+1611,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_0_r));
            tracep->chgBit(oldp+1612,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_0_r));
            tracep->chgBit(oldp+1613,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_0_r));
            tracep->chgBit(oldp+1614,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_0_r));
            tracep->chgBit(oldp+1615,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_0_r));
            tracep->chgBit(oldp+1616,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_0_r));
            tracep->chgBit(oldp+1617,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_0_r));
            tracep->chgBit(oldp+1618,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_0_r));
            tracep->chgBit(oldp+1619,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_0_r));
            tracep->chgBit(oldp+1620,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_0_r));
            tracep->chgBit(oldp+1621,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_0_r));
            tracep->chgBit(oldp+1622,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_0_r));
            tracep->chgBit(oldp+1623,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_0_r));
            tracep->chgBit(oldp+1624,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_0_r));
            tracep->chgBit(oldp+1625,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_0_r));
            tracep->chgBit(oldp+1626,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_0_r));
            tracep->chgBit(oldp+1627,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_0_r));
            tracep->chgBit(oldp+1628,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_0_r));
            tracep->chgBit(oldp+1629,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_0_r));
            tracep->chgBit(oldp+1630,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_0_r));
            tracep->chgBit(oldp+1631,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_0_r));
            tracep->chgBit(oldp+1632,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_0_r));
            tracep->chgBit(oldp+1633,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_0_r));
            tracep->chgBit(oldp+1634,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_0_r));
            tracep->chgBit(oldp+1635,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_0_r));
            tracep->chgBit(oldp+1636,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_0_r));
            tracep->chgBit(oldp+1637,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_0_r));
            tracep->chgBit(oldp+1638,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_0_r));
            tracep->chgBit(oldp+1639,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_0_r));
            tracep->chgBit(oldp+1640,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_0_r));
            tracep->chgBit(oldp+1641,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_0_r));
            tracep->chgBit(oldp+1642,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_0_r));
            tracep->chgBit(oldp+1643,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_0_r));
            tracep->chgBit(oldp+1644,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_0_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_0_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_0_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_0_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_0_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_0_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_0_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_0_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_0_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_0_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                                << 4U) 
                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                  >> 0x1cU))))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_0_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_103_0))))))))))))));
            tracep->chgIData(oldp+1645,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_0_r),22);
            tracep->chgIData(oldp+1646,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_0_r),22);
            tracep->chgIData(oldp+1647,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_0_r),22);
            tracep->chgIData(oldp+1648,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_0_r),22);
            tracep->chgIData(oldp+1649,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_0_r),22);
            tracep->chgIData(oldp+1650,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_0_r),22);
            tracep->chgIData(oldp+1651,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_0_r),22);
            tracep->chgIData(oldp+1652,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_0_r),22);
            tracep->chgIData(oldp+1653,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_0_r),22);
            tracep->chgIData(oldp+1654,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_0_r),22);
            tracep->chgIData(oldp+1655,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_0_r),22);
            tracep->chgIData(oldp+1656,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_0_r),22);
            tracep->chgIData(oldp+1657,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_0_r),22);
            tracep->chgIData(oldp+1658,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_0_r),22);
            tracep->chgIData(oldp+1659,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_0_r),22);
            tracep->chgIData(oldp+1660,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_0_r),22);
            tracep->chgIData(oldp+1661,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_0_r),22);
            tracep->chgIData(oldp+1662,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_0_r),22);
            tracep->chgIData(oldp+1663,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_0_r),22);
            tracep->chgIData(oldp+1664,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_0_r),22);
            tracep->chgIData(oldp+1665,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_0_r),22);
            tracep->chgIData(oldp+1666,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_0_r),22);
            tracep->chgIData(oldp+1667,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_0_r),22);
            tracep->chgIData(oldp+1668,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_0_r),22);
            tracep->chgIData(oldp+1669,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_0_r),22);
            tracep->chgIData(oldp+1670,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_0_r),22);
            tracep->chgIData(oldp+1671,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_0_r),22);
            tracep->chgIData(oldp+1672,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_0_r),22);
            tracep->chgIData(oldp+1673,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_0_r),22);
            tracep->chgIData(oldp+1674,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_0_r),22);
            tracep->chgIData(oldp+1675,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_0_r),22);
            tracep->chgIData(oldp+1676,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_0_r),22);
            tracep->chgIData(oldp+1677,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_0_r),22);
            tracep->chgIData(oldp+1678,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_0_r),22);
            tracep->chgIData(oldp+1679,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_0_r),22);
            tracep->chgIData(oldp+1680,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_0_r),22);
            tracep->chgIData(oldp+1681,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_0_r),22);
            tracep->chgIData(oldp+1682,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_0_r),22);
            tracep->chgIData(oldp+1683,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_0_r),22);
            tracep->chgIData(oldp+1684,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_0_r),22);
            tracep->chgIData(oldp+1685,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_0_r),22);
            tracep->chgIData(oldp+1686,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_0_r),22);
            tracep->chgIData(oldp+1687,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_0_r),22);
            tracep->chgIData(oldp+1688,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_0_r),22);
            tracep->chgIData(oldp+1689,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_0_r),22);
            tracep->chgIData(oldp+1690,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_0_r),22);
            tracep->chgIData(oldp+1691,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_0_r),22);
            tracep->chgIData(oldp+1692,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_0_r),22);
            tracep->chgIData(oldp+1693,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_0_r),22);
            tracep->chgIData(oldp+1694,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_0_r),22);
            tracep->chgIData(oldp+1695,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_0_r),22);
            tracep->chgIData(oldp+1696,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_0_r),22);
            tracep->chgIData(oldp+1697,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_0_r),22);
            tracep->chgIData(oldp+1698,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_0_r),22);
            tracep->chgIData(oldp+1699,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_0_r),22);
            tracep->chgIData(oldp+1700,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_0_r),22);
            tracep->chgIData(oldp+1701,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_0_r),22);
            tracep->chgIData(oldp+1702,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_0_r),22);
            tracep->chgIData(oldp+1703,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_0_r),22);
            tracep->chgIData(oldp+1704,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_0_r),22);
            tracep->chgIData(oldp+1705,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_0_r),22);
            tracep->chgIData(oldp+1706,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_0_r),22);
            tracep->chgIData(oldp+1707,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_0_r),22);
            tracep->chgIData(oldp+1708,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_0_r),22);
            tracep->chgIData(oldp+1709,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_0_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_0_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_0_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 4U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1cU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_0_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_0_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_0_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_0_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_0_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_0_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_0_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_0_r
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_103_0)))))))))))),22);
            tracep->chgBit(oldp+1710,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_0));
            tracep->chgBit(oldp+1711,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_1_r));
            tracep->chgBit(oldp+1712,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_1_r));
            tracep->chgBit(oldp+1713,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_1_r));
            tracep->chgBit(oldp+1714,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_1_r));
            tracep->chgBit(oldp+1715,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_1_r));
            tracep->chgBit(oldp+1716,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_1_r));
            tracep->chgBit(oldp+1717,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_1_r));
            tracep->chgBit(oldp+1718,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_1_r));
            tracep->chgBit(oldp+1719,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_1_r));
            tracep->chgBit(oldp+1720,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_1_r));
            tracep->chgBit(oldp+1721,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_1_r));
            tracep->chgBit(oldp+1722,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_1_r));
            tracep->chgBit(oldp+1723,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_1_r));
            tracep->chgBit(oldp+1724,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_1_r));
            tracep->chgBit(oldp+1725,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_1_r));
            tracep->chgBit(oldp+1726,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_1_r));
            tracep->chgBit(oldp+1727,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_1_r));
            tracep->chgBit(oldp+1728,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_1_r));
            tracep->chgBit(oldp+1729,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_1_r));
            tracep->chgBit(oldp+1730,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_1_r));
            tracep->chgBit(oldp+1731,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_1_r));
            tracep->chgBit(oldp+1732,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_1_r));
            tracep->chgBit(oldp+1733,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_1_r));
            tracep->chgBit(oldp+1734,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_1_r));
            tracep->chgBit(oldp+1735,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_1_r));
            tracep->chgBit(oldp+1736,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_1_r));
            tracep->chgBit(oldp+1737,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_1_r));
            tracep->chgBit(oldp+1738,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_1_r));
            tracep->chgBit(oldp+1739,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_1_r));
            tracep->chgBit(oldp+1740,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_1_r));
            tracep->chgBit(oldp+1741,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_1_r));
            tracep->chgBit(oldp+1742,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_1_r));
            tracep->chgBit(oldp+1743,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_1_r));
            tracep->chgBit(oldp+1744,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_1_r));
            tracep->chgBit(oldp+1745,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_1_r));
            tracep->chgBit(oldp+1746,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_1_r));
            tracep->chgBit(oldp+1747,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_1_r));
            tracep->chgBit(oldp+1748,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_1_r));
            tracep->chgBit(oldp+1749,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_1_r));
            tracep->chgBit(oldp+1750,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_1_r));
            tracep->chgBit(oldp+1751,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_1_r));
            tracep->chgBit(oldp+1752,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_1_r));
            tracep->chgBit(oldp+1753,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_1_r));
            tracep->chgBit(oldp+1754,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_1_r));
            tracep->chgBit(oldp+1755,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_1_r));
            tracep->chgBit(oldp+1756,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_1_r));
            tracep->chgBit(oldp+1757,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_1_r));
            tracep->chgBit(oldp+1758,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_1_r));
            tracep->chgBit(oldp+1759,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_1_r));
            tracep->chgBit(oldp+1760,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_1_r));
            tracep->chgBit(oldp+1761,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_1_r));
            tracep->chgBit(oldp+1762,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_1_r));
            tracep->chgBit(oldp+1763,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_1_r));
            tracep->chgBit(oldp+1764,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_1_r));
            tracep->chgBit(oldp+1765,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_1_r));
            tracep->chgBit(oldp+1766,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_1_r));
            tracep->chgBit(oldp+1767,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_1_r));
            tracep->chgBit(oldp+1768,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_1_r));
            tracep->chgBit(oldp+1769,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_1_r));
            tracep->chgBit(oldp+1770,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_1_r));
            tracep->chgBit(oldp+1771,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_1_r));
            tracep->chgBit(oldp+1772,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_1_r));
            tracep->chgBit(oldp+1773,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_1_r));
            tracep->chgBit(oldp+1774,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_1_r));
            tracep->chgBit(oldp+1775,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_1_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_1_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_1_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_1_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_1_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_1_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_1_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_1_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_1_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_1_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                                << 4U) 
                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                  >> 0x1cU))))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_1_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_103_1))))))))))))));
            tracep->chgIData(oldp+1776,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_1_r),22);
            tracep->chgIData(oldp+1777,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_1_r),22);
            tracep->chgIData(oldp+1778,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_1_r),22);
            tracep->chgIData(oldp+1779,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_1_r),22);
            tracep->chgIData(oldp+1780,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_1_r),22);
            tracep->chgIData(oldp+1781,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_1_r),22);
            tracep->chgIData(oldp+1782,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_1_r),22);
            tracep->chgIData(oldp+1783,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_1_r),22);
            tracep->chgIData(oldp+1784,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_1_r),22);
            tracep->chgIData(oldp+1785,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_1_r),22);
            tracep->chgIData(oldp+1786,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_1_r),22);
            tracep->chgIData(oldp+1787,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_1_r),22);
            tracep->chgIData(oldp+1788,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_1_r),22);
            tracep->chgIData(oldp+1789,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_1_r),22);
            tracep->chgIData(oldp+1790,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_1_r),22);
            tracep->chgIData(oldp+1791,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_1_r),22);
            tracep->chgIData(oldp+1792,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_1_r),22);
            tracep->chgIData(oldp+1793,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_1_r),22);
            tracep->chgIData(oldp+1794,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_1_r),22);
            tracep->chgIData(oldp+1795,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_1_r),22);
            tracep->chgIData(oldp+1796,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_1_r),22);
            tracep->chgIData(oldp+1797,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_1_r),22);
            tracep->chgIData(oldp+1798,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_1_r),22);
            tracep->chgIData(oldp+1799,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_1_r),22);
            tracep->chgIData(oldp+1800,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_1_r),22);
            tracep->chgIData(oldp+1801,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_1_r),22);
            tracep->chgIData(oldp+1802,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_1_r),22);
            tracep->chgIData(oldp+1803,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_1_r),22);
            tracep->chgIData(oldp+1804,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_1_r),22);
            tracep->chgIData(oldp+1805,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_1_r),22);
            tracep->chgIData(oldp+1806,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_1_r),22);
            tracep->chgIData(oldp+1807,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_1_r),22);
            tracep->chgIData(oldp+1808,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_1_r),22);
            tracep->chgIData(oldp+1809,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_1_r),22);
            tracep->chgIData(oldp+1810,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_1_r),22);
            tracep->chgIData(oldp+1811,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_1_r),22);
            tracep->chgIData(oldp+1812,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_1_r),22);
            tracep->chgIData(oldp+1813,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_1_r),22);
            tracep->chgIData(oldp+1814,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_1_r),22);
            tracep->chgIData(oldp+1815,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_1_r),22);
            tracep->chgIData(oldp+1816,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_1_r),22);
            tracep->chgIData(oldp+1817,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_1_r),22);
            tracep->chgIData(oldp+1818,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_1_r),22);
            tracep->chgIData(oldp+1819,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_1_r),22);
            tracep->chgIData(oldp+1820,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_1_r),22);
            tracep->chgIData(oldp+1821,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_1_r),22);
            tracep->chgIData(oldp+1822,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_1_r),22);
            tracep->chgIData(oldp+1823,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_1_r),22);
            tracep->chgIData(oldp+1824,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_1_r),22);
            tracep->chgIData(oldp+1825,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_1_r),22);
            tracep->chgIData(oldp+1826,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_1_r),22);
            tracep->chgIData(oldp+1827,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_1_r),22);
            tracep->chgIData(oldp+1828,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_1_r),22);
            tracep->chgIData(oldp+1829,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_1_r),22);
            tracep->chgIData(oldp+1830,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_1_r),22);
            tracep->chgIData(oldp+1831,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_1_r),22);
            tracep->chgIData(oldp+1832,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_1_r),22);
            tracep->chgIData(oldp+1833,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_1_r),22);
            tracep->chgIData(oldp+1834,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_1_r),22);
            tracep->chgIData(oldp+1835,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_1_r),22);
            tracep->chgIData(oldp+1836,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_1_r),22);
            tracep->chgIData(oldp+1837,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_1_r),22);
            tracep->chgIData(oldp+1838,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_1_r),22);
            tracep->chgIData(oldp+1839,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_1_r),22);
            tracep->chgIData(oldp+1840,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_1_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_1_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_1_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 4U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1cU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_1_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_1_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_1_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_1_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_1_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_1_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_1_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_1_r
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_103_1)))))))))))),22);
            tracep->chgBit(oldp+1841,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_1));
            tracep->chgBit(oldp+1842,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_2_r));
            tracep->chgBit(oldp+1843,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_2_r));
            tracep->chgBit(oldp+1844,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_2_r));
            tracep->chgBit(oldp+1845,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_2_r));
            tracep->chgBit(oldp+1846,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_2_r));
            tracep->chgBit(oldp+1847,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_2_r));
            tracep->chgBit(oldp+1848,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_2_r));
            tracep->chgBit(oldp+1849,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_2_r));
            tracep->chgBit(oldp+1850,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_2_r));
            tracep->chgBit(oldp+1851,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_2_r));
            tracep->chgBit(oldp+1852,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_2_r));
            tracep->chgBit(oldp+1853,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_2_r));
            tracep->chgBit(oldp+1854,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_2_r));
            tracep->chgBit(oldp+1855,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_2_r));
            tracep->chgBit(oldp+1856,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_2_r));
            tracep->chgBit(oldp+1857,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_2_r));
            tracep->chgBit(oldp+1858,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_2_r));
            tracep->chgBit(oldp+1859,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_2_r));
            tracep->chgBit(oldp+1860,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_2_r));
            tracep->chgBit(oldp+1861,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_2_r));
            tracep->chgBit(oldp+1862,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_2_r));
            tracep->chgBit(oldp+1863,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_2_r));
            tracep->chgBit(oldp+1864,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_2_r));
            tracep->chgBit(oldp+1865,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_2_r));
            tracep->chgBit(oldp+1866,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_2_r));
            tracep->chgBit(oldp+1867,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_2_r));
            tracep->chgBit(oldp+1868,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_2_r));
            tracep->chgBit(oldp+1869,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_2_r));
            tracep->chgBit(oldp+1870,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_2_r));
            tracep->chgBit(oldp+1871,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_2_r));
            tracep->chgBit(oldp+1872,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_2_r));
            tracep->chgBit(oldp+1873,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_2_r));
            tracep->chgBit(oldp+1874,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_2_r));
            tracep->chgBit(oldp+1875,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_2_r));
            tracep->chgBit(oldp+1876,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_2_r));
            tracep->chgBit(oldp+1877,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_2_r));
            tracep->chgBit(oldp+1878,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_2_r));
            tracep->chgBit(oldp+1879,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_2_r));
            tracep->chgBit(oldp+1880,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_2_r));
            tracep->chgBit(oldp+1881,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_2_r));
            tracep->chgBit(oldp+1882,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_2_r));
            tracep->chgBit(oldp+1883,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_2_r));
            tracep->chgBit(oldp+1884,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_2_r));
            tracep->chgBit(oldp+1885,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_2_r));
            tracep->chgBit(oldp+1886,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_2_r));
            tracep->chgBit(oldp+1887,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_2_r));
            tracep->chgBit(oldp+1888,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_2_r));
            tracep->chgBit(oldp+1889,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_2_r));
            tracep->chgBit(oldp+1890,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_2_r));
            tracep->chgBit(oldp+1891,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_2_r));
            tracep->chgBit(oldp+1892,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_2_r));
            tracep->chgBit(oldp+1893,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_2_r));
            tracep->chgBit(oldp+1894,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_2_r));
            tracep->chgBit(oldp+1895,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_2_r));
            tracep->chgBit(oldp+1896,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_2_r));
            tracep->chgBit(oldp+1897,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_2_r));
            tracep->chgBit(oldp+1898,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_2_r));
            tracep->chgBit(oldp+1899,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_2_r));
            tracep->chgBit(oldp+1900,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_2_r));
            tracep->chgBit(oldp+1901,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_2_r));
            tracep->chgBit(oldp+1902,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_2_r));
            tracep->chgBit(oldp+1903,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_2_r));
            tracep->chgBit(oldp+1904,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_2_r));
            tracep->chgBit(oldp+1905,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_2_r));
            tracep->chgBit(oldp+1906,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_2_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_2_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_2_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_2_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_2_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_2_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_2_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_2_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_2_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_2_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                                << 4U) 
                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                  >> 0x1cU))))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_2_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_103_2))))))))))))));
            tracep->chgIData(oldp+1907,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_2_r),22);
            tracep->chgIData(oldp+1908,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_2_r),22);
            tracep->chgIData(oldp+1909,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_2_r),22);
            tracep->chgIData(oldp+1910,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_2_r),22);
            tracep->chgIData(oldp+1911,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_2_r),22);
            tracep->chgIData(oldp+1912,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_2_r),22);
            tracep->chgIData(oldp+1913,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_2_r),22);
            tracep->chgIData(oldp+1914,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_2_r),22);
            tracep->chgIData(oldp+1915,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_2_r),22);
            tracep->chgIData(oldp+1916,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_2_r),22);
            tracep->chgIData(oldp+1917,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_2_r),22);
            tracep->chgIData(oldp+1918,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_2_r),22);
            tracep->chgIData(oldp+1919,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_2_r),22);
            tracep->chgIData(oldp+1920,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_2_r),22);
            tracep->chgIData(oldp+1921,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_2_r),22);
            tracep->chgIData(oldp+1922,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_2_r),22);
            tracep->chgIData(oldp+1923,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_2_r),22);
            tracep->chgIData(oldp+1924,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_2_r),22);
            tracep->chgIData(oldp+1925,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_2_r),22);
            tracep->chgIData(oldp+1926,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_2_r),22);
            tracep->chgIData(oldp+1927,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_2_r),22);
            tracep->chgIData(oldp+1928,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_2_r),22);
            tracep->chgIData(oldp+1929,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_2_r),22);
            tracep->chgIData(oldp+1930,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_2_r),22);
            tracep->chgIData(oldp+1931,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_2_r),22);
            tracep->chgIData(oldp+1932,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_2_r),22);
            tracep->chgIData(oldp+1933,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_2_r),22);
            tracep->chgIData(oldp+1934,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_2_r),22);
            tracep->chgIData(oldp+1935,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_2_r),22);
            tracep->chgIData(oldp+1936,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_2_r),22);
            tracep->chgIData(oldp+1937,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_2_r),22);
            tracep->chgIData(oldp+1938,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_2_r),22);
            tracep->chgIData(oldp+1939,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_2_r),22);
            tracep->chgIData(oldp+1940,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_2_r),22);
            tracep->chgIData(oldp+1941,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_2_r),22);
            tracep->chgIData(oldp+1942,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_2_r),22);
            tracep->chgIData(oldp+1943,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_2_r),22);
            tracep->chgIData(oldp+1944,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_2_r),22);
            tracep->chgIData(oldp+1945,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_2_r),22);
            tracep->chgIData(oldp+1946,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_2_r),22);
            tracep->chgIData(oldp+1947,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_2_r),22);
            tracep->chgIData(oldp+1948,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_2_r),22);
            tracep->chgIData(oldp+1949,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_2_r),22);
            tracep->chgIData(oldp+1950,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_2_r),22);
            tracep->chgIData(oldp+1951,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_2_r),22);
            tracep->chgIData(oldp+1952,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_2_r),22);
            tracep->chgIData(oldp+1953,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_2_r),22);
            tracep->chgIData(oldp+1954,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_2_r),22);
            tracep->chgIData(oldp+1955,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_2_r),22);
            tracep->chgIData(oldp+1956,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_2_r),22);
            tracep->chgIData(oldp+1957,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_2_r),22);
            tracep->chgIData(oldp+1958,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_2_r),22);
            tracep->chgIData(oldp+1959,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_2_r),22);
            tracep->chgIData(oldp+1960,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_2_r),22);
            tracep->chgIData(oldp+1961,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_2_r),22);
            tracep->chgIData(oldp+1962,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_2_r),22);
            tracep->chgIData(oldp+1963,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_2_r),22);
            tracep->chgIData(oldp+1964,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_2_r),22);
            tracep->chgIData(oldp+1965,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_2_r),22);
            tracep->chgIData(oldp+1966,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_2_r),22);
            tracep->chgIData(oldp+1967,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_2_r),22);
            tracep->chgIData(oldp+1968,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_2_r),22);
            tracep->chgIData(oldp+1969,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_2_r),22);
            tracep->chgIData(oldp+1970,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_2_r),22);
            tracep->chgIData(oldp+1971,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_2_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_2_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_2_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 4U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1cU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_2_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_2_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_2_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_2_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_2_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_2_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_2_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_2_r
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_103_2)))))))))))),22);
            tracep->chgBit(oldp+1972,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_2));
            tracep->chgBit(oldp+1973,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_3_r));
            tracep->chgBit(oldp+1974,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_3_r));
            tracep->chgBit(oldp+1975,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_3_r));
            tracep->chgBit(oldp+1976,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_3_r));
            tracep->chgBit(oldp+1977,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_3_r));
            tracep->chgBit(oldp+1978,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_3_r));
            tracep->chgBit(oldp+1979,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_3_r));
            tracep->chgBit(oldp+1980,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_3_r));
            tracep->chgBit(oldp+1981,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_3_r));
            tracep->chgBit(oldp+1982,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_3_r));
            tracep->chgBit(oldp+1983,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_3_r));
            tracep->chgBit(oldp+1984,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_52_3_r));
            tracep->chgBit(oldp+1985,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_51_3_r));
            tracep->chgBit(oldp+1986,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_50_3_r));
            tracep->chgBit(oldp+1987,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_49_3_r));
            tracep->chgBit(oldp+1988,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_48_3_r));
            tracep->chgBit(oldp+1989,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_47_3_r));
            tracep->chgBit(oldp+1990,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_46_3_r));
            tracep->chgBit(oldp+1991,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_45_3_r));
            tracep->chgBit(oldp+1992,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_44_3_r));
            tracep->chgBit(oldp+1993,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_43_3_r));
            tracep->chgBit(oldp+1994,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_42_3_r));
            tracep->chgBit(oldp+1995,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_41_3_r));
            tracep->chgBit(oldp+1996,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_40_3_r));
            tracep->chgBit(oldp+1997,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_39_3_r));
            tracep->chgBit(oldp+1998,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_38_3_r));
            tracep->chgBit(oldp+1999,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_37_3_r));
            tracep->chgBit(oldp+2000,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_36_3_r));
            tracep->chgBit(oldp+2001,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_35_3_r));
            tracep->chgBit(oldp+2002,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_34_3_r));
            tracep->chgBit(oldp+2003,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_33_3_r));
            tracep->chgBit(oldp+2004,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_32_3_r));
            tracep->chgBit(oldp+2005,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_31_3_r));
            tracep->chgBit(oldp+2006,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_30_3_r));
            tracep->chgBit(oldp+2007,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_29_3_r));
            tracep->chgBit(oldp+2008,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_28_3_r));
            tracep->chgBit(oldp+2009,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_27_3_r));
            tracep->chgBit(oldp+2010,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_26_3_r));
            tracep->chgBit(oldp+2011,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_25_3_r));
            tracep->chgBit(oldp+2012,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_24_3_r));
            tracep->chgBit(oldp+2013,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_23_3_r));
            tracep->chgBit(oldp+2014,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_22_3_r));
            tracep->chgBit(oldp+2015,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_21_3_r));
            tracep->chgBit(oldp+2016,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_20_3_r));
            tracep->chgBit(oldp+2017,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_19_3_r));
            tracep->chgBit(oldp+2018,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_18_3_r));
            tracep->chgBit(oldp+2019,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_17_3_r));
            tracep->chgBit(oldp+2020,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_16_3_r));
            tracep->chgBit(oldp+2021,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_15_3_r));
            tracep->chgBit(oldp+2022,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_14_3_r));
            tracep->chgBit(oldp+2023,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_13_3_r));
            tracep->chgBit(oldp+2024,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_12_3_r));
            tracep->chgBit(oldp+2025,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_11_3_r));
            tracep->chgBit(oldp+2026,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_10_3_r));
            tracep->chgBit(oldp+2027,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_9_3_r));
            tracep->chgBit(oldp+2028,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_8_3_r));
            tracep->chgBit(oldp+2029,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_7_3_r));
            tracep->chgBit(oldp+2030,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_6_3_r));
            tracep->chgBit(oldp+2031,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_5_3_r));
            tracep->chgBit(oldp+2032,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_4_3_r));
            tracep->chgBit(oldp+2033,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_3_3_r));
            tracep->chgBit(oldp+2034,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_2_3_r));
            tracep->chgBit(oldp+2035,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_1_3_r));
            tracep->chgBit(oldp+2036,(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_0_3_r));
            tracep->chgBit(oldp+2037,(((0x3fU == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_63_3_r)
                                        : ((0x3eU == 
                                            (0x3fU 
                                             & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                 << 4U) 
                                                | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                   >> 0x1cU))))
                                            ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_62_3_r)
                                            : ((0x3dU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                     << 4U) 
                                                    | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                       >> 0x1cU))))
                                                ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_61_3_r)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_60_3_r)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_59_3_r)
                                                     : 
                                                    ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_58_3_r)
                                                      : 
                                                     ((0x39U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_57_3_r)
                                                       : 
                                                      ((0x38U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_56_3_r)
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_55_3_r)
                                                         : 
                                                        ((0x36U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_54_3_r)
                                                          : 
                                                         ((0x35U 
                                                           == 
                                                           (0x3fU 
                                                            & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                                << 4U) 
                                                               | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                  >> 0x1cU))))
                                                           ? (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__vArrayWire_53_3_r)
                                                           : (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT___vMuxOut_T_103_3))))))))))))));
            tracep->chgIData(oldp+2038,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_3_r),22);
            tracep->chgIData(oldp+2039,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_3_r),22);
            tracep->chgIData(oldp+2040,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_3_r),22);
            tracep->chgIData(oldp+2041,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_3_r),22);
            tracep->chgIData(oldp+2042,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_3_r),22);
            tracep->chgIData(oldp+2043,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_3_r),22);
            tracep->chgIData(oldp+2044,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_3_r),22);
            tracep->chgIData(oldp+2045,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_3_r),22);
            tracep->chgIData(oldp+2046,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_3_r),22);
            tracep->chgIData(oldp+2047,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_3_r),22);
            tracep->chgIData(oldp+2048,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_3_r),22);
            tracep->chgIData(oldp+2049,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_52_3_r),22);
            tracep->chgIData(oldp+2050,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_51_3_r),22);
            tracep->chgIData(oldp+2051,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_50_3_r),22);
            tracep->chgIData(oldp+2052,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_49_3_r),22);
            tracep->chgIData(oldp+2053,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_48_3_r),22);
            tracep->chgIData(oldp+2054,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_47_3_r),22);
            tracep->chgIData(oldp+2055,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_46_3_r),22);
            tracep->chgIData(oldp+2056,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_45_3_r),22);
            tracep->chgIData(oldp+2057,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_44_3_r),22);
            tracep->chgIData(oldp+2058,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_43_3_r),22);
            tracep->chgIData(oldp+2059,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_42_3_r),22);
            tracep->chgIData(oldp+2060,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_41_3_r),22);
            tracep->chgIData(oldp+2061,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_40_3_r),22);
            tracep->chgIData(oldp+2062,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_39_3_r),22);
            tracep->chgIData(oldp+2063,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_38_3_r),22);
            tracep->chgIData(oldp+2064,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_37_3_r),22);
            tracep->chgIData(oldp+2065,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_36_3_r),22);
            tracep->chgIData(oldp+2066,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_35_3_r),22);
            tracep->chgIData(oldp+2067,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_34_3_r),22);
            tracep->chgIData(oldp+2068,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_33_3_r),22);
            tracep->chgIData(oldp+2069,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_32_3_r),22);
            tracep->chgIData(oldp+2070,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_31_3_r),22);
            tracep->chgIData(oldp+2071,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_30_3_r),22);
            tracep->chgIData(oldp+2072,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_29_3_r),22);
            tracep->chgIData(oldp+2073,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_28_3_r),22);
            tracep->chgIData(oldp+2074,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_27_3_r),22);
            tracep->chgIData(oldp+2075,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_26_3_r),22);
            tracep->chgIData(oldp+2076,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_25_3_r),22);
            tracep->chgIData(oldp+2077,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_24_3_r),22);
            tracep->chgIData(oldp+2078,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_23_3_r),22);
            tracep->chgIData(oldp+2079,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_22_3_r),22);
            tracep->chgIData(oldp+2080,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_21_3_r),22);
            tracep->chgIData(oldp+2081,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_20_3_r),22);
            tracep->chgIData(oldp+2082,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_19_3_r),22);
            tracep->chgIData(oldp+2083,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_18_3_r),22);
            tracep->chgIData(oldp+2084,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_17_3_r),22);
            tracep->chgIData(oldp+2085,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_16_3_r),22);
            tracep->chgIData(oldp+2086,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_15_3_r),22);
            tracep->chgIData(oldp+2087,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_14_3_r),22);
            tracep->chgIData(oldp+2088,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_13_3_r),22);
            tracep->chgIData(oldp+2089,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_12_3_r),22);
            tracep->chgIData(oldp+2090,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_11_3_r),22);
            tracep->chgIData(oldp+2091,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_10_3_r),22);
            tracep->chgIData(oldp+2092,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_9_3_r),22);
            tracep->chgIData(oldp+2093,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_8_3_r),22);
            tracep->chgIData(oldp+2094,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_7_3_r),22);
            tracep->chgIData(oldp+2095,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_6_3_r),22);
            tracep->chgIData(oldp+2096,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_5_3_r),22);
            tracep->chgIData(oldp+2097,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_4_3_r),22);
            tracep->chgIData(oldp+2098,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_3_3_r),22);
            tracep->chgIData(oldp+2099,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_2_3_r),22);
            tracep->chgIData(oldp+2100,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_1_3_r),22);
            tracep->chgIData(oldp+2101,(vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_0_3_r),22);
            tracep->chgIData(oldp+2102,(((0x3fU == 
                                          (0x3fU & 
                                           ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU))))
                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_63_3_r
                                          : ((0x3eU 
                                              == (0x3fU 
                                                  & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                      << 4U) 
                                                     | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                        >> 0x1cU))))
                                              ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_62_3_r
                                              : ((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                       << 4U) 
                                                      | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                         >> 0x1cU))))
                                                  ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_61_3_r
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0x3fU 
                                                    & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                        << 4U) 
                                                       | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                          >> 0x1cU))))
                                                   ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_60_3_r
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0x3fU 
                                                     & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                         << 4U) 
                                                        | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                           >> 0x1cU))))
                                                    ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_59_3_r
                                                    : 
                                                   ((0x3aU 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                          << 4U) 
                                                         | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                            >> 0x1cU))))
                                                     ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_58_3_r
                                                     : 
                                                    ((0x39U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                           << 4U) 
                                                          | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                             >> 0x1cU))))
                                                      ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_57_3_r
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                            << 4U) 
                                                           | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                              >> 0x1cU))))
                                                       ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_56_3_r
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x3fU 
                                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                             << 4U) 
                                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                               >> 0x1cU))))
                                                        ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_55_3_r
                                                        : 
                                                       ((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                              << 4U) 
                                                             | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                >> 0x1cU))))
                                                         ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_54_3_r
                                                         : 
                                                        ((0x35U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                                               << 4U) 
                                                              | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                                                 >> 0x1cU))))
                                                          ? vlSelf->ysyx_041728__DOT__dCache__DOT__tagArrayWire_53_3_r
                                                          : vlSelf->ysyx_041728__DOT__dCache__DOT___tagMuxOut_T_103_3)))))))))))),22);
            tracep->chgBit(oldp+2103,(vlSelf->ysyx_041728__DOT__dCache__DOT__hitArray_3));
            tracep->chgBit(oldp+2104,(vlSelf->ysyx_041728__DOT__dCache__DOT__hit));
            tracep->chgBit(oldp+2105,((0U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgBit(oldp+2106,((2U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgBit(oldp+2107,((3U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))));
            tracep->chgWData(oldp+2108,(vlSelf->ysyx_041728__DOT__dCache__DOT__waysel),128);
            tracep->chgCData(oldp+2112,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_1_r),2);
            tracep->chgCData(oldp+2113,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_0_r),2);
            tracep->chgCData(oldp+2114,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_2_r),2);
            tracep->chgCData(oldp+2115,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_3_r),2);
            tracep->chgCData(oldp+2116,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_4_r),2);
            tracep->chgCData(oldp+2117,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_5_r),2);
            tracep->chgCData(oldp+2118,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_6_r),2);
            tracep->chgCData(oldp+2119,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_7_r),2);
            tracep->chgCData(oldp+2120,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_8_r),2);
            tracep->chgCData(oldp+2121,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_9_r),2);
            tracep->chgCData(oldp+2122,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_10_r),2);
            tracep->chgCData(oldp+2123,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_11_r),2);
            tracep->chgCData(oldp+2124,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_12_r),2);
            tracep->chgCData(oldp+2125,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_13_r),2);
            tracep->chgCData(oldp+2126,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_14_r),2);
            tracep->chgCData(oldp+2127,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_15_r),2);
            tracep->chgCData(oldp+2128,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_16_r),2);
            tracep->chgCData(oldp+2129,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_17_r),2);
            tracep->chgCData(oldp+2130,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_18_r),2);
            tracep->chgCData(oldp+2131,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_19_r),2);
            tracep->chgCData(oldp+2132,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_20_r),2);
            tracep->chgCData(oldp+2133,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_21_r),2);
            tracep->chgCData(oldp+2134,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_22_r),2);
            tracep->chgCData(oldp+2135,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_23_r),2);
            tracep->chgCData(oldp+2136,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_24_r),2);
            tracep->chgCData(oldp+2137,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_25_r),2);
            tracep->chgCData(oldp+2138,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_26_r),2);
            tracep->chgCData(oldp+2139,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_27_r),2);
            tracep->chgCData(oldp+2140,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_28_r),2);
            tracep->chgCData(oldp+2141,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_29_r),2);
            tracep->chgCData(oldp+2142,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_30_r),2);
            tracep->chgCData(oldp+2143,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_31_r),2);
            tracep->chgCData(oldp+2144,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_32_r),2);
            tracep->chgCData(oldp+2145,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_33_r),2);
            tracep->chgCData(oldp+2146,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_34_r),2);
            tracep->chgCData(oldp+2147,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_35_r),2);
            tracep->chgCData(oldp+2148,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_36_r),2);
            tracep->chgCData(oldp+2149,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_37_r),2);
            tracep->chgCData(oldp+2150,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_38_r),2);
            tracep->chgCData(oldp+2151,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_39_r),2);
            tracep->chgCData(oldp+2152,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_40_r),2);
            tracep->chgCData(oldp+2153,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_41_r),2);
            tracep->chgCData(oldp+2154,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_42_r),2);
            tracep->chgCData(oldp+2155,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_43_r),2);
            tracep->chgCData(oldp+2156,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_44_r),2);
            tracep->chgCData(oldp+2157,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_45_r),2);
            tracep->chgCData(oldp+2158,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_46_r),2);
            tracep->chgCData(oldp+2159,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_47_r),2);
            tracep->chgCData(oldp+2160,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_48_r),2);
            tracep->chgCData(oldp+2161,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_49_r),2);
            tracep->chgCData(oldp+2162,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_50_r),2);
            tracep->chgCData(oldp+2163,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_51_r),2);
            tracep->chgCData(oldp+2164,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_52_r),2);
            tracep->chgCData(oldp+2165,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_53_r),2);
            tracep->chgCData(oldp+2166,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_54_r),2);
            tracep->chgCData(oldp+2167,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_55_r),2);
            tracep->chgCData(oldp+2168,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_56_r),2);
            tracep->chgCData(oldp+2169,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_57_r),2);
            tracep->chgCData(oldp+2170,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_58_r),2);
            tracep->chgCData(oldp+2171,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_59_r),2);
            tracep->chgCData(oldp+2172,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_60_r),2);
            tracep->chgCData(oldp+2173,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_61_r),2);
            tracep->chgCData(oldp+2174,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_62_r),2);
            tracep->chgCData(oldp+2175,(vlSelf->ysyx_041728__DOT__dCache__DOT__selArrayWire_63_r),2);
            tracep->chgCData(oldp+2176,(vlSelf->ysyx_041728__DOT__dCache__DOT__sramSel),2);
            tracep->chgIData(oldp+2177,((0xfffffffU 
                                         & ((vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[5U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_041728__DOT__riscvIns__DOT__pipEX2MEMReg[4U] 
                                               >> 0x1cU)))),28);
            tracep->chgCData(oldp+2178,(((1U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+2179,(((2U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+2180,(((4U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+2181,(((8U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+2182,(((0x10U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+2183,(((0x20U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+2184,(((0x40U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgCData(oldp+2185,(((0x80U & (IData)(vlSelf->ysyx_041728__DOT__riscvIns__DOT___io_dataIO_mask_T_1))
                                          ? 0U : 0xffU)),8);
            tracep->chgWData(oldp+2186,(vlSelf->ysyx_041728__DOT__dCache__DOT__ramMaskWrite),128);
            tracep->chgQData(oldp+2190,(vlSelf->ysyx_041728__DOT__clintIns__DOT__mtime_r),64);
            tracep->chgQData(oldp+2192,(vlSelf->ysyx_041728__DOT__clintIns__DOT__mtimecmp_r),64);
            tracep->chgCData(oldp+2194,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state),2);
            tracep->chgCData(oldp+2195,(((1U == (IData)(vlSelf->ysyx_041728__DOT__dCache__DOT__cacheState))
                                          ? 1U : 0U)),2);
            tracep->chgBit(oldp+2196,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__rd_state))));
            tracep->chgCData(oldp+2197,(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state),2);
            tracep->chgBit(oldp+2198,((2U == (IData)(vlSelf->ysyx_041728__DOT__axiDIO__DOT__w_state))));
            tracep->chgWData(oldp+2199,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+2203,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+2207,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+2211,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+2215,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+2219,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+2223,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+2227,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+2231,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+2235,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+2239,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+2243,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+2247,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+2251,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+2255,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+2259,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+2263,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+2267,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+2271,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+2275,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+2279,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+2283,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+2287,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+2291,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+2295,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+2299,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+2303,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+2307,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+2311,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+2315,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+2319,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+2323,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+2327,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+2331,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+2335,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+2339,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+2343,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+2347,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+2351,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+2355,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+2359,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+2363,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+2367,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+2371,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+2375,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+2379,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+2383,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+2387,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+2391,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+2395,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+2399,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+2403,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+2407,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+2411,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+2415,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+2419,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+2423,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+2427,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+2431,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+2435,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+2439,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+2443,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+2447,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+2451,(vlSymsp->TOP__ysyx_041728__DOT__imem.__PVT__ramWire_63_r),128);
            tracep->chgWData(oldp+2455,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+2459,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+2463,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+2467,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+2471,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+2475,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+2479,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+2483,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+2487,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+2491,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+2495,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+2499,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+2503,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+2507,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+2511,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+2515,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+2519,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+2523,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+2527,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+2531,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+2535,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+2539,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+2543,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+2547,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+2551,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+2555,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+2559,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+2563,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+2567,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+2571,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+2575,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+2579,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+2583,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+2587,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+2591,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+2595,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+2599,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+2603,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+2607,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+2611,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+2615,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+2619,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+2623,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+2627,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+2631,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+2635,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+2639,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+2643,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+2647,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+2651,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+2655,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+2659,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+2663,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+2667,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+2671,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+2675,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+2679,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+2683,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+2687,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+2691,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+2695,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+2699,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+2703,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+2707,(vlSymsp->TOP__ysyx_041728__DOT__dmem.__PVT__ramWire_63_r),128);
            tracep->chgWData(oldp+2711,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+2715,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+2719,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+2723,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+2727,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+2731,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+2735,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+2739,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+2743,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+2747,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+2751,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+2755,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+2759,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+2763,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+2767,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+2771,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+2775,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+2779,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+2783,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+2787,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+2791,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+2795,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+2799,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+2803,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+2807,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+2811,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+2815,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+2819,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+2823,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+2827,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+2831,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+2835,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+2839,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+2843,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+2847,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+2851,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+2855,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+2859,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+2863,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+2867,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+2871,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+2875,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+2879,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+2883,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+2887,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+2891,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+2895,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+2899,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+2903,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+2907,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+2911,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+2915,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+2919,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+2923,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+2927,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+2931,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+2935,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+2939,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+2943,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+2947,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+2951,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+2955,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+2959,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+2963,(vlSymsp->TOP__ysyx_041728__DOT__imem_1.__PVT__ramWire_63_r),128);
            tracep->chgWData(oldp+2967,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+2971,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+2975,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+2979,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+2983,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+2987,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+2991,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+2995,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+2999,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+3003,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+3007,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+3011,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+3015,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+3019,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+3023,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+3027,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+3031,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+3035,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+3039,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+3043,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+3047,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+3051,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+3055,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+3059,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+3063,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+3067,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+3071,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+3075,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+3079,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+3083,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+3087,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+3091,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+3095,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+3099,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+3103,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+3107,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+3111,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+3115,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+3119,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+3123,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+3127,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+3131,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+3135,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+3139,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+3143,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+3147,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+3151,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+3155,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+3159,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+3163,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+3167,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+3171,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+3175,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+3179,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+3183,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+3187,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+3191,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+3195,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+3199,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+3203,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+3207,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+3211,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+3215,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+3219,(vlSymsp->TOP__ysyx_041728__DOT__dmem_1.__PVT__ramWire_63_r),128);
            tracep->chgWData(oldp+3223,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+3227,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+3231,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+3235,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+3239,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+3243,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+3247,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+3251,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+3255,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+3259,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+3263,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+3267,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+3271,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+3275,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+3279,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+3283,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+3287,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+3291,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+3295,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+3299,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+3303,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+3307,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+3311,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+3315,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+3319,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+3323,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+3327,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+3331,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+3335,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+3339,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+3343,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+3347,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+3351,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+3355,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+3359,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+3363,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+3367,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+3371,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+3375,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+3379,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+3383,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+3387,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+3391,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+3395,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+3399,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+3403,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+3407,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+3411,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+3415,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+3419,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+3423,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+3427,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+3431,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+3435,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+3439,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+3443,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+3447,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+3451,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+3455,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+3459,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+3463,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+3467,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+3471,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+3475,(vlSymsp->TOP__ysyx_041728__DOT__imem_2.__PVT__ramWire_63_r),128);
            tracep->chgWData(oldp+3479,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+3483,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+3487,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+3491,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+3495,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+3499,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+3503,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+3507,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+3511,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+3515,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+3519,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+3523,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+3527,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+3531,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+3535,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+3539,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+3543,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+3547,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+3551,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+3555,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+3559,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+3563,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+3567,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+3571,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+3575,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+3579,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+3583,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+3587,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+3591,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+3595,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+3599,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+3603,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+3607,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+3611,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+3615,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+3619,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+3623,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+3627,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+3631,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+3635,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+3639,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+3643,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+3647,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+3651,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+3655,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+3659,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+3663,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+3667,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+3671,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+3675,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+3679,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+3683,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+3687,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+3691,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+3695,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+3699,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+3703,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+3707,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+3711,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+3715,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+3719,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+3723,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+3727,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+3731,(vlSymsp->TOP__ysyx_041728__DOT__dmem_2.__PVT__ramWire_63_r),128);
            tracep->chgWData(oldp+3735,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+3739,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+3743,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+3747,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+3751,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+3755,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+3759,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+3763,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+3767,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+3771,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+3775,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+3779,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+3783,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+3787,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+3791,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+3795,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+3799,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+3803,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+3807,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+3811,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+3815,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+3819,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+3823,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+3827,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+3831,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+3835,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+3839,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+3843,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+3847,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+3851,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+3855,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+3859,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+3863,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+3867,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+3871,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+3875,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+3879,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+3883,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+3887,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+3891,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+3895,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+3899,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+3903,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+3907,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+3911,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+3915,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+3919,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+3923,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+3927,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+3931,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+3935,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+3939,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+3943,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+3947,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+3951,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+3955,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+3959,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+3963,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+3967,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+3971,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+3975,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+3979,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+3983,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+3987,(vlSymsp->TOP__ysyx_041728__DOT__imem_3.__PVT__ramWire_63_r),128);
            tracep->chgWData(oldp+3991,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_0_r),128);
            tracep->chgWData(oldp+3995,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_1_r),128);
            tracep->chgWData(oldp+3999,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_2_r),128);
            tracep->chgWData(oldp+4003,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_3_r),128);
            tracep->chgWData(oldp+4007,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_4_r),128);
            tracep->chgWData(oldp+4011,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_5_r),128);
            tracep->chgWData(oldp+4015,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_6_r),128);
            tracep->chgWData(oldp+4019,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_7_r),128);
            tracep->chgWData(oldp+4023,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_8_r),128);
            tracep->chgWData(oldp+4027,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_9_r),128);
            tracep->chgWData(oldp+4031,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_10_r),128);
            tracep->chgWData(oldp+4035,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_11_r),128);
            tracep->chgWData(oldp+4039,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_12_r),128);
            tracep->chgWData(oldp+4043,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_13_r),128);
            tracep->chgWData(oldp+4047,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_14_r),128);
            tracep->chgWData(oldp+4051,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_15_r),128);
            tracep->chgWData(oldp+4055,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_16_r),128);
            tracep->chgWData(oldp+4059,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_17_r),128);
            tracep->chgWData(oldp+4063,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_18_r),128);
            tracep->chgWData(oldp+4067,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_19_r),128);
            tracep->chgWData(oldp+4071,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_20_r),128);
            tracep->chgWData(oldp+4075,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_21_r),128);
            tracep->chgWData(oldp+4079,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_22_r),128);
            tracep->chgWData(oldp+4083,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_23_r),128);
            tracep->chgWData(oldp+4087,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_24_r),128);
            tracep->chgWData(oldp+4091,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_25_r),128);
            tracep->chgWData(oldp+4095,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_26_r),128);
            tracep->chgWData(oldp+4099,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_27_r),128);
            tracep->chgWData(oldp+4103,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_28_r),128);
            tracep->chgWData(oldp+4107,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_29_r),128);
            tracep->chgWData(oldp+4111,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_30_r),128);
            tracep->chgWData(oldp+4115,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_31_r),128);
            tracep->chgWData(oldp+4119,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_32_r),128);
            tracep->chgWData(oldp+4123,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_33_r),128);
            tracep->chgWData(oldp+4127,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_34_r),128);
            tracep->chgWData(oldp+4131,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_35_r),128);
            tracep->chgWData(oldp+4135,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_36_r),128);
            tracep->chgWData(oldp+4139,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_37_r),128);
            tracep->chgWData(oldp+4143,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_38_r),128);
            tracep->chgWData(oldp+4147,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_39_r),128);
            tracep->chgWData(oldp+4151,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_40_r),128);
            tracep->chgWData(oldp+4155,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_41_r),128);
            tracep->chgWData(oldp+4159,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_42_r),128);
            tracep->chgWData(oldp+4163,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_43_r),128);
            tracep->chgWData(oldp+4167,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_44_r),128);
            tracep->chgWData(oldp+4171,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_45_r),128);
            tracep->chgWData(oldp+4175,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_46_r),128);
            tracep->chgWData(oldp+4179,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_47_r),128);
            tracep->chgWData(oldp+4183,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_48_r),128);
            tracep->chgWData(oldp+4187,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_49_r),128);
            tracep->chgWData(oldp+4191,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_50_r),128);
            tracep->chgWData(oldp+4195,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_51_r),128);
            tracep->chgWData(oldp+4199,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_52_r),128);
            tracep->chgWData(oldp+4203,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_53_r),128);
            tracep->chgWData(oldp+4207,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_54_r),128);
            tracep->chgWData(oldp+4211,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_55_r),128);
            tracep->chgWData(oldp+4215,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_56_r),128);
            tracep->chgWData(oldp+4219,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_57_r),128);
            tracep->chgWData(oldp+4223,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_58_r),128);
            tracep->chgWData(oldp+4227,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_59_r),128);
            tracep->chgWData(oldp+4231,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_60_r),128);
            tracep->chgWData(oldp+4235,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_61_r),128);
            tracep->chgWData(oldp+4239,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_62_r),128);
            tracep->chgWData(oldp+4243,(vlSymsp->TOP__ysyx_041728__DOT__dmem_3.__PVT__ramWire_63_r),128);
        }
        tracep->chgBit(oldp+4247,(vlSelf->clock));
        tracep->chgBit(oldp+4248,(vlSelf->reset));
        tracep->chgBit(oldp+4249,(vlSelf->io_dmaster_awready));
        tracep->chgBit(oldp+4250,(vlSelf->io_dmaster_awvalid));
        tracep->chgCData(oldp+4251,(vlSelf->io_dmaster_awid),4);
        tracep->chgIData(oldp+4252,(vlSelf->io_dmaster_awaddr),32);
        tracep->chgCData(oldp+4253,(vlSelf->io_dmaster_awlen),8);
        tracep->chgCData(oldp+4254,(vlSelf->io_dmaster_awsize),3);
        tracep->chgCData(oldp+4255,(vlSelf->io_dmaster_awburst),2);
        tracep->chgBit(oldp+4256,(vlSelf->io_dmaster_wready));
        tracep->chgBit(oldp+4257,(vlSelf->io_dmaster_wvalid));
        tracep->chgQData(oldp+4258,(vlSelf->io_dmaster_wdata),64);
        tracep->chgCData(oldp+4260,(vlSelf->io_dmaster_wstrb),8);
        tracep->chgBit(oldp+4261,(vlSelf->io_dmaster_wlast));
        tracep->chgBit(oldp+4262,(vlSelf->io_dmaster_bready));
        tracep->chgBit(oldp+4263,(vlSelf->io_dmaster_bvalid));
        tracep->chgCData(oldp+4264,(vlSelf->io_dmaster_bid),4);
        tracep->chgCData(oldp+4265,(vlSelf->io_dmaster_bresp),2);
        tracep->chgBit(oldp+4266,(vlSelf->io_dmaster_arready));
        tracep->chgBit(oldp+4267,(vlSelf->io_dmaster_arvalid));
        tracep->chgCData(oldp+4268,(vlSelf->io_dmaster_arid),4);
        tracep->chgIData(oldp+4269,(vlSelf->io_dmaster_araddr),32);
        tracep->chgCData(oldp+4270,(vlSelf->io_dmaster_arlen),8);
        tracep->chgCData(oldp+4271,(vlSelf->io_dmaster_arsize),3);
        tracep->chgCData(oldp+4272,(vlSelf->io_dmaster_arburst),2);
        tracep->chgBit(oldp+4273,(vlSelf->io_dmaster_rready));
        tracep->chgBit(oldp+4274,(vlSelf->io_dmaster_rvalid));
        tracep->chgCData(oldp+4275,(vlSelf->io_dmaster_rid),4);
        tracep->chgCData(oldp+4276,(vlSelf->io_dmaster_rresp),2);
        tracep->chgQData(oldp+4277,(vlSelf->io_dmaster_rdata),64);
        tracep->chgBit(oldp+4279,(vlSelf->io_dmaster_rlast));
        tracep->chgBit(oldp+4280,(vlSelf->io_mmio_valid));
        tracep->chgBit(oldp+4281,(vlSelf->io_mmio_ready));
        tracep->chgQData(oldp+4282,(vlSelf->io_mmio_data_read),64);
        tracep->chgQData(oldp+4284,(vlSelf->io_mmio_data_write),64);
        tracep->chgBit(oldp+4286,(vlSelf->io_mmio_wen));
        tracep->chgIData(oldp+4287,(vlSelf->io_mmio_addr),32);
        tracep->chgCData(oldp+4288,(vlSelf->io_mmio_rsize),2);
        tracep->chgCData(oldp+4289,(vlSelf->io_mmio_mask),8);
        tracep->chgBit(oldp+4290,(((IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__DMABuzy) 
                                   & (IData)(vlSelf->io_dmaster_rvalid))));
        tracep->chgBit(oldp+4291,(((2U == (IData)(vlSelf->ysyx_041728__DOT__dmaIns__DOT__rState)) 
                                   & (IData)(vlSelf->io_dmaster_rvalid))));
        VL_EXTEND_WQ(128,64, __Vtemp1455, vlSelf->io_dmaster_rdata);
        if (vlSelf->io_dmaster_rlast) {
            __Vtemp1456[0U] = 0U;
            __Vtemp1456[1U] = 0U;
            __Vtemp1456[2U] = (IData)(vlSelf->io_dmaster_rdata);
            __Vtemp1456[3U] = (IData)((vlSelf->io_dmaster_rdata 
                                       >> 0x20U));
        } else {
            __Vtemp1456[0U] = __Vtemp1455[0U];
            __Vtemp1456[1U] = __Vtemp1455[1U];
            __Vtemp1456[2U] = __Vtemp1455[2U];
            __Vtemp1456[3U] = __Vtemp1455[3U];
        }
        tracep->chgWData(oldp+4292,(__Vtemp1456),128);
        if (vlSelf->io_dmaster_rlast) {
            __Vtemp1459[0U] = 0xffffffffU;
            __Vtemp1459[1U] = 0xffffffffU;
            __Vtemp1459[2U] = 0U;
            __Vtemp1459[3U] = 0U;
        } else {
            __Vtemp1459[0U] = 0U;
            __Vtemp1459[1U] = 0U;
            __Vtemp1459[2U] = 0xffffffffU;
            __Vtemp1459[3U] = 0xffffffffU;
        }
        tracep->chgWData(oldp+4296,(__Vtemp1459),128);
        tracep->chgBit(oldp+4300,(((IData)(vlSelf->io_dmaster_bvalid) 
                                   & (3U == (IData)(vlSelf->ysyx_041728__DOT__axiIIO__DOT__w_state)))));
        tracep->chgCData(oldp+4301,(((IData)(vlSelf->io_dmaster_rlast)
                                      ? 0U : 1U)),2);
        __Vtemp1463[0U] = (~ ((IData)(vlSelf->io_dmaster_rlast)
                               ? 0xffffffffU : 0U));
        __Vtemp1463[1U] = (~ ((IData)(vlSelf->io_dmaster_rlast)
                               ? 0xffffffffU : 0U));
        __Vtemp1463[2U] = (~ ((IData)(vlSelf->io_dmaster_rlast)
                               ? 0U : 0xffffffffU));
        __Vtemp1463[3U] = (~ ((IData)(vlSelf->io_dmaster_rlast)
                               ? 0U : 0xffffffffU));
        tracep->chgWData(oldp+4302,(__Vtemp1463),128);
    }
}
