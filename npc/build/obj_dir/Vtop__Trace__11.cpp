// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub21(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp3397;
    VlWide<4>/*127:0*/ __Vtemp3398;
    VlWide<3>/*95:0*/ __Vtemp3399;
    VlWide<3>/*95:0*/ __Vtemp3400;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 23390);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+0,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_128 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+1,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_128 
                                          >> 0x1bU))));
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a),33);
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1),11);
            tracep->chgSData(oldp+5,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1),11);
            tracep->chgSData(oldp+6,((0x7ffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)),11);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2),7);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_2),7);
            tracep->chgCData(oldp+9,((0x7fU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                               >> 0xbU))),7);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3),5);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_3),5);
            tracep->chgCData(oldp+12,((0x1fU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                >> 0x12U))),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4),3);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_4),3);
            tracep->chgCData(oldp+15,((7U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                             >> 0x17U))),3);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_5),2);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_5),2);
            tracep->chgCData(oldp+18,((3U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                             >> 0x1aU))),2);
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_6));
            tracep->chgBit(oldp+20,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_5) 
                                            & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_5) 
                                                >> 1U) 
                                               | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                  >> 0x19U))) 
                                           | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_5) 
                                               >> 1U) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                 >> 0x19U))))));
            tracep->chgBit(oldp+21,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_7));
            tracep->chgBit(oldp+23,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_6) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                           | (IData)(
                                                     (0xc000000U 
                                                      == 
                                                      (0xc000000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+24,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+25,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))));
            tracep->chgBit(oldp+26,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 1U)))));
            tracep->chgBit(oldp+27,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 2U)))));
            tracep->chgBit(oldp+28,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (6ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (6ULL 
                                                      == 
                                                      (6ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+29,((1U & ((((IData)(
                                                     (4ULL 
                                                      == 
                                                      (7ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (2ULL 
                                                        == 
                                                        (7ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (1ULL 
                                                       == 
                                                       (7ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (7ULL 
                                                      == 
                                                      (7ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+30,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 3U)))));
            tracep->chgBit(oldp+31,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 4U)))));
            tracep->chgBit(oldp+32,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 5U)))));
            tracep->chgBit(oldp+33,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 3U)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x30ULL 
                                                      == 
                                                      (0x30ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+34,((1U & ((((IData)(
                                                     (0x20ULL 
                                                      == 
                                                      (0x38ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x10ULL 
                                                        == 
                                                        (0x38ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0x38ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x38ULL 
                                                      == 
                                                      (0x38ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+35,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 6U)))));
            tracep->chgBit(oldp+36,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 7U)))));
            tracep->chgBit(oldp+37,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 8U)))));
            tracep->chgBit(oldp+38,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 6U)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x180ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x180ULL 
                                                      == 
                                                      (0x180ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+39,((1U & ((((IData)(
                                                     (0x100ULL 
                                                      == 
                                                      (0x1c0ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x80ULL 
                                                        == 
                                                        (0x1c0ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x40ULL 
                                                       == 
                                                       (0x1c0ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x1c0ULL 
                                                      == 
                                                      (0x1c0ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+40,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 9U)))));
            tracep->chgBit(oldp+41,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0xaU)))));
            tracep->chgBit(oldp+42,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0xbU)))));
            tracep->chgBit(oldp+43,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 9U)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0xc00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0xc00ULL 
                                                      == 
                                                      (0xc00ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+44,((1U & ((((IData)(
                                                     (0x800ULL 
                                                      == 
                                                      (0xe00ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x400ULL 
                                                        == 
                                                        (0xe00ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x200ULL 
                                                       == 
                                                       (0xe00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0xe00ULL 
                                                      == 
                                                      (0xe00ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+45,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+46,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0xdU)))));
            tracep->chgBit(oldp+47,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+48,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 0xcU)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x6000ULL 
                                                      == 
                                                      (0x6000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+49,((1U & ((((IData)(
                                                     (0x4000ULL 
                                                      == 
                                                      (0x7000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x2000ULL 
                                                        == 
                                                        (0x7000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x1000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x7000ULL 
                                                      == 
                                                      (0x7000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0xfU)))));
            tracep->chgBit(oldp+51,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x10U)))));
            tracep->chgBit(oldp+52,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x11U)))));
            tracep->chgBit(oldp+53,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 0xfU)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x30000ULL 
                                                      == 
                                                      (0x30000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+54,((1U & ((((IData)(
                                                     (0x20000ULL 
                                                      == 
                                                      (0x38000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x10000ULL 
                                                        == 
                                                        (0x38000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x8000ULL 
                                                       == 
                                                       (0x38000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x38000ULL 
                                                      == 
                                                      (0x38000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+55,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+56,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x13U)))));
            tracep->chgBit(oldp+57,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x14U)))));
            tracep->chgBit(oldp+58,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 0x12U)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x180000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x180000ULL 
                                                      == 
                                                      (0x180000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+59,((1U & ((((IData)(
                                                     (0x100000ULL 
                                                      == 
                                                      (0x1c0000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x80000ULL 
                                                        == 
                                                        (0x1c0000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x40000ULL 
                                                       == 
                                                       (0x1c0000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x1c0000ULL 
                                                      == 
                                                      (0x1c0000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+60,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x15U)))));
            tracep->chgBit(oldp+61,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x16U)))));
            tracep->chgBit(oldp+62,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x17U)))));
            tracep->chgBit(oldp+63,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 0x15U)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0xc00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0xc00000ULL 
                                                      == 
                                                      (0xc00000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+64,((1U & ((((IData)(
                                                     (0x800000ULL 
                                                      == 
                                                      (0xe00000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x400000ULL 
                                                        == 
                                                        (0xe00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x200000ULL 
                                                       == 
                                                       (0xe00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0xe00000ULL 
                                                      == 
                                                      (0xe00000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+65,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x18U)))));
            tracep->chgBit(oldp+66,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+67,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x1aU)))));
            tracep->chgBit(oldp+68,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 0x18U)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x6000000ULL 
                                                      == 
                                                      (0x6000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+69,((1U & ((((IData)(
                                                     (0x4000000ULL 
                                                      == 
                                                      (0x7000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x2000000ULL 
                                                        == 
                                                        (0x7000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x1000000ULL 
                                                       == 
                                                       (0x7000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x7000000ULL 
                                                      == 
                                                      (0x7000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+70,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x1bU)))));
            tracep->chgBit(oldp+71,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x1cU)))));
            tracep->chgBit(oldp+72,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x1dU)))));
            tracep->chgBit(oldp+73,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 0x1bU)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x30000000ULL 
                                                      == 
                                                      (0x30000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+74,((1U & ((((IData)(
                                                     (0x20000000ULL 
                                                      == 
                                                      (0x38000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x10000000ULL 
                                                        == 
                                                        (0x38000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x8000000ULL 
                                                       == 
                                                       (0x38000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x38000000ULL 
                                                      == 
                                                      (0x38000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+75,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+76,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x1fU)))));
            tracep->chgBit(oldp+77,((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+78,((1U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                                     >> 0x1eU)) 
                                            & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x180000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x180000000ULL 
                                                      == 
                                                      (0x180000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+79,((1U & ((((IData)(
                                                     (0x100000000ULL 
                                                      == 
                                                      (0x1c0000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                                             | (IData)(
                                                       (0x80000000ULL 
                                                        == 
                                                        (0x1c0000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                            | (IData)(
                                                      (0x40000000ULL 
                                                       == 
                                                       (0x1c0000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                                           | (IData)(
                                                     (0x1c0000000ULL 
                                                      == 
                                                      (0x1c0000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))))));
            tracep->chgBit(oldp+80,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))));
            tracep->chgBit(oldp+81,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 1U))));
            tracep->chgBit(oldp+82,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 2U))));
            tracep->chgBit(oldp+83,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                           | (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))))));
            tracep->chgBit(oldp+84,((1U & ((((IData)(
                                                     (4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                           | (IData)(
                                                     (7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))))));
            tracep->chgBit(oldp+85,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 3U))));
            tracep->chgBit(oldp+86,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 4U))));
            tracep->chgBit(oldp+87,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 5U))));
            tracep->chgBit(oldp+88,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                             >> 3U) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x30U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))))));
            tracep->chgBit(oldp+89,((1U & ((((IData)(
                                                     (0x20U 
                                                      == 
                                                      (0x38U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                             | (IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                            | (IData)(
                                                      (8U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                           | (IData)(
                                                     (0x38U 
                                                      == 
                                                      (0x38U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))))));
            tracep->chgBit(oldp+90,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 6U))));
            tracep->chgBit(oldp+91,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 7U))));
            tracep->chgBit(oldp+92,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 8U))));
            tracep->chgBit(oldp+93,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                             >> 6U) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                           | (IData)(
                                                     (0x180U 
                                                      == 
                                                      (0x180U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))))));
            tracep->chgBit(oldp+94,((1U & ((((IData)(
                                                     (0x100U 
                                                      == 
                                                      (0x1c0U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x40U 
                                                       == 
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                                           | (IData)(
                                                     (0x1c0U 
                                                      == 
                                                      (0x1c0U 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 9U))));
            tracep->chgBit(oldp+96,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+97,((1U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)));
            tracep->chgBit(oldp+98,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                             >> 9U) 
                                            & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                                >> 0xaU) 
                                               | vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)) 
                                           | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                               >> 0xaU) 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))));
            tracep->chgBit(oldp+99,((1U & (((((IData)(
                                                      (0U 
                                                       == 
                                                       (0x600U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129) 
                                             | ((IData)(
                                                        (0x400U 
                                                         == 
                                                         (0x600U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                                & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                               & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                           | ((IData)(
                                                      (0x600U 
                                                       == 
                                                       (0x600U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))));
            tracep->chgBit(oldp+100,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 1U))));
            tracep->chgBit(oldp+101,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 2U))));
            tracep->chgBit(oldp+102,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 3U))));
            tracep->chgBit(oldp+103,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                              >> 1U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+104,((1U & ((((IData)(
                                                      (8U 
                                                       == 
                                                       (0xeU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                              | (IData)(
                                                        (4U 
                                                         == 
                                                         (0xeU 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (0xeU 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0xeU 
                                                       == 
                                                       (0xeU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+105,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 4U))));
            tracep->chgBit(oldp+106,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 5U))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 6U))));
            tracep->chgBit(oldp+108,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                              >> 4U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x60U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x60U 
                                                       == 
                                                       (0x60U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+109,((1U & ((((IData)(
                                                      (0x40U 
                                                       == 
                                                       (0x70U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                              | (IData)(
                                                        (0x20U 
                                                         == 
                                                         (0x70U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                             | (IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x70U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x70U 
                                                       == 
                                                       (0x70U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+110,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 7U))));
            tracep->chgBit(oldp+111,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 8U))));
            tracep->chgBit(oldp+112,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 9U))));
            tracep->chgBit(oldp+113,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                              >> 7U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x300U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+114,((1U & ((((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x380U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                              | (IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x380U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x380U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x380U 
                                                       == 
                                                       (0x380U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+115,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))));
            tracep->chgBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                            >> 2U))));
            tracep->chgBit(oldp+118,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))))));
            tracep->chgBit(oldp+119,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))))));
            tracep->chgBit(oldp+120,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                            >> 3U))));
            tracep->chgBit(oldp+121,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                            >> 4U))));
            tracep->chgBit(oldp+122,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                            >> 5U))));
            tracep->chgBit(oldp+123,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                              >> 3U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))) 
                                            | (IData)(
                                                      (0x30U 
                                                       == 
                                                       (0x30U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))))));
            tracep->chgBit(oldp+124,((1U & ((((IData)(
                                                      (0x20U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2)))) 
                                              | (IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x38U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))) 
                                            | (IData)(
                                                      (0x38U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))))))));
            tracep->chgBit(oldp+125,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                            >> 6U))));
            tracep->chgBit(oldp+126,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0xaU))));
            tracep->chgBit(oldp+127,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0xbU))));
            tracep->chgBit(oldp+128,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                              >> 6U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc00U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0xc00U 
                                                       == 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+129,((1U & ((((IData)(
                                                      ((0U 
                                                        == 
                                                        (0x40U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))) 
                                                       & (0x800U 
                                                          == 
                                                          (0xc00U 
                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                              | (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x40U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))) 
                                                         & (0x400U 
                                                            == 
                                                            (0xc00U 
                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))))) 
                                             | (IData)(
                                                       ((0x40U 
                                                         == 
                                                         (0x40U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2))) 
                                                        & (0U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))))) 
                                            | ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2) 
                                                 >> 6U) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                   >> 0xaU)) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+130,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0xcU))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0xdU))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0xeU))));
            tracep->chgBit(oldp+133,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                              >> 0xcU) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x6000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x6000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+134,((1U & ((((IData)(
                                                      (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                              | (IData)(
                                                        (0x2000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                             | (IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x7000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+135,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0xfU))));
            tracep->chgBit(oldp+136,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x10U))));
            tracep->chgBit(oldp+137,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x11U))));
            tracep->chgBit(oldp+138,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                              >> 0xfU) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x30000U 
                                                       == 
                                                       (0x30000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+139,((1U & ((((IData)(
                                                      (0x20000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                              | (IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x38000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x38000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x38000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+140,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3))));
            tracep->chgBit(oldp+141,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+142,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                            >> 2U))));
            tracep->chgBit(oldp+143,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3))))))));
            tracep->chgBit(oldp+144,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3))))))));
            tracep->chgBit(oldp+145,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                            >> 3U))));
            tracep->chgBit(oldp+146,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                            >> 4U))));
            tracep->chgBit(oldp+147,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x12U))));
            tracep->chgBit(oldp+148,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                              >> 3U) 
                                             & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                                 >> 4U) 
                                                | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                   >> 0x12U))) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3) 
                                                >> 4U) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+149,((1U & (((((IData)(
                                                       (0U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3)))) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                  >> 0x12U)) 
                                              | ((IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3)))) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                     >> 0x12U)))) 
                                             | ((IData)(
                                                        (8U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3)))) 
                                                & (~ 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                    >> 0x12U)))) 
                                            | ((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_3)))) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+150,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x13U))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x14U))));
            tracep->chgBit(oldp+152,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x15U))));
            tracep->chgBit(oldp+153,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                              >> 0x13U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x300000U 
                                                       == 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+154,((1U & ((((IData)(
                                                      (0x200000U 
                                                       == 
                                                       (0x380000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                              | (IData)(
                                                        (0x100000U 
                                                         == 
                                                         (0x380000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                             | (IData)(
                                                       (0x80000U 
                                                        == 
                                                        (0x380000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x380000U 
                                                       == 
                                                       (0x380000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+155,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4))));
            tracep->chgBit(oldp+156,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4) 
                                            >> 1U))));
            tracep->chgBit(oldp+157,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4) 
                                            >> 2U))));
            tracep->chgBit(oldp+158,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4))))))));
            tracep->chgBit(oldp+159,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_4))))))));
            tracep->chgBit(oldp+160,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x17U))));
            tracep->chgBit(oldp+161,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x18U))));
            tracep->chgBit(oldp+162,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x16U))));
            tracep->chgBit(oldp+163,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                              >> 0x17U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1400000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x1400000U 
                                                       == 
                                                       (0x1400000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+164,((1U & ((((IData)(
                                                      (0x400000U 
                                                       == 
                                                       (0x1c00000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129))) 
                                              | (IData)(
                                                        (0x1000000U 
                                                         == 
                                                         (0x1c00000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                             | (IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x1c00000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                            | (IData)(
                                                      (0x1c00000U 
                                                       == 
                                                       (0x1c00000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))))));
            tracep->chgBit(oldp+165,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_5))));
            tracep->chgBit(oldp+166,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_5) 
                                            >> 1U))));
            tracep->chgBit(oldp+167,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x19U))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+169,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129 
                                            >> 0x1bU))));
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a),33);
            tracep->chgSData(oldp+172,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1),11);
            tracep->chgSData(oldp+173,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1),11);
            tracep->chgSData(oldp+174,((0x7ffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)),11);
            tracep->chgCData(oldp+175,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2),7);
            tracep->chgCData(oldp+176,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_2),7);
            tracep->chgCData(oldp+177,((0x7fU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                 >> 0xbU))),7);
            tracep->chgCData(oldp+178,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3),5);
            tracep->chgCData(oldp+179,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_3),5);
            tracep->chgCData(oldp+180,((0x1fU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                 >> 0x12U))),5);
            tracep->chgCData(oldp+181,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4),3);
            tracep->chgCData(oldp+182,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_4),3);
            tracep->chgCData(oldp+183,((7U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 0x17U))),3);
            tracep->chgCData(oldp+184,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_5),2);
            tracep->chgCData(oldp+185,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_5),2);
            tracep->chgCData(oldp+186,((3U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+187,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_6));
            tracep->chgBit(oldp+188,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_5) 
                                             & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_5) 
                                                 >> 1U) 
                                                | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                   >> 0x19U))) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_5) 
                                                >> 1U) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+190,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_7));
            tracep->chgBit(oldp+191,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_6) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0xc000000U 
                                                       == 
                                                       (0xc000000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+192,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+193,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))));
            tracep->chgBit(oldp+194,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 1U)))));
            tracep->chgBit(oldp+195,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 2U)))));
            tracep->chgBit(oldp+196,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (6ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (6ULL 
                                                       == 
                                                       (6ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+197,((1U & ((((IData)(
                                                      (4ULL 
                                                       == 
                                                       (7ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (2ULL 
                                                         == 
                                                         (7ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (1ULL 
                                                        == 
                                                        (7ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (7ULL 
                                                       == 
                                                       (7ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 3U)))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 4U)))));
            tracep->chgBit(oldp+200,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 5U)))));
            tracep->chgBit(oldp+201,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 3U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x30ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x30ULL 
                                                       == 
                                                       (0x30ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+202,((1U & ((((IData)(
                                                      (0x20ULL 
                                                       == 
                                                       (0x38ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x10ULL 
                                                         == 
                                                         (0x38ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (8ULL 
                                                        == 
                                                        (0x38ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x38ULL 
                                                       == 
                                                       (0x38ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+203,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 6U)))));
            tracep->chgBit(oldp+204,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 7U)))));
            tracep->chgBit(oldp+205,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 8U)))));
            tracep->chgBit(oldp+206,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 6U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x180ULL 
                                                       == 
                                                       (0x180ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+207,((1U & ((((IData)(
                                                      (0x100ULL 
                                                       == 
                                                       (0x1c0ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x80ULL 
                                                         == 
                                                         (0x1c0ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x40ULL 
                                                        == 
                                                        (0x1c0ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x1c0ULL 
                                                       == 
                                                       (0x1c0ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+208,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 9U)))));
            tracep->chgBit(oldp+209,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+210,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+211,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 9U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0xc00ULL 
                                                       == 
                                                       (0xc00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+212,((1U & ((((IData)(
                                                      (0x800ULL 
                                                       == 
                                                       (0xe00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x400ULL 
                                                         == 
                                                         (0xe00ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x200ULL 
                                                        == 
                                                        (0xe00ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0xe00ULL 
                                                       == 
                                                       (0xe00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+213,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+214,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+215,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+216,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 0xcU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x6000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x6000ULL 
                                                       == 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+217,((1U & ((((IData)(
                                                      (0x4000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x2000ULL 
                                                         == 
                                                         (0x7000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x1000ULL 
                                                        == 
                                                        (0x7000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x7000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+218,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+219,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+220,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+221,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x30000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x30000ULL 
                                                       == 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+222,((1U & ((((IData)(
                                                      (0x20000ULL 
                                                       == 
                                                       (0x38000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x10000ULL 
                                                         == 
                                                         (0x38000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x8000ULL 
                                                        == 
                                                        (0x38000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x38000ULL 
                                                       == 
                                                       (0x38000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+223,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+224,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+225,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+226,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 0x12U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x180000ULL 
                                                       == 
                                                       (0x180000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+227,((1U & ((((IData)(
                                                      (0x100000ULL 
                                                       == 
                                                       (0x1c0000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x80000ULL 
                                                         == 
                                                         (0x1c0000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x40000ULL 
                                                        == 
                                                        (0x1c0000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x1c0000ULL 
                                                       == 
                                                       (0x1c0000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+229,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+230,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+231,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0xc00000ULL 
                                                       == 
                                                       (0xc00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+232,((1U & ((((IData)(
                                                      (0x800000ULL 
                                                       == 
                                                       (0xe00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0xe00000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x200000ULL 
                                                        == 
                                                        (0xe00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0xe00000ULL 
                                                       == 
                                                       (0xe00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+233,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+234,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+235,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+236,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 0x18U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x6000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x6000000ULL 
                                                       == 
                                                       (0x6000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+237,((1U & ((((IData)(
                                                      (0x4000000ULL 
                                                       == 
                                                       (0x7000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x2000000ULL 
                                                         == 
                                                         (0x7000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x1000000ULL 
                                                        == 
                                                        (0x7000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x7000000ULL 
                                                       == 
                                                       (0x7000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+238,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+239,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+240,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+241,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x30000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x30000000ULL 
                                                       == 
                                                       (0x30000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+242,((1U & ((((IData)(
                                                      (0x20000000ULL 
                                                       == 
                                                       (0x38000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x38000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x8000000ULL 
                                                        == 
                                                        (0x38000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x38000000ULL 
                                                       == 
                                                       (0x38000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+243,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+244,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+245,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+246,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x180000000ULL 
                                                       == 
                                                       (0x180000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+247,((1U & ((((IData)(
                                                      (0x100000000ULL 
                                                       == 
                                                       (0x1c0000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                                              | (IData)(
                                                        (0x80000000ULL 
                                                         == 
                                                         (0x1c0000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                             | (IData)(
                                                       (0x40000000ULL 
                                                        == 
                                                        (0x1c0000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                                            | (IData)(
                                                      (0x1c0000000ULL 
                                                       == 
                                                       (0x1c0000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))))));
            tracep->chgBit(oldp+248,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 2U))));
            tracep->chgBit(oldp+251,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))))));
            tracep->chgBit(oldp+252,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 3U))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 4U))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 5U))));
            tracep->chgBit(oldp+256,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                              >> 3U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x30U 
                                                       == 
                                                       (0x30U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))))));
            tracep->chgBit(oldp+257,((1U & ((((IData)(
                                                      (0x20U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                              | (IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x38U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x38U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 6U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 7U))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 8U))));
            tracep->chgBit(oldp+261,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                              >> 6U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x180U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))))));
            tracep->chgBit(oldp+262,((1U & ((((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                              | (IData)(
                                                        (0x80U 
                                                         == 
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                             | (IData)(
                                                       (0x40U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x1c0U 
                                                       == 
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 9U))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+265,((1U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)));
            tracep->chgBit(oldp+266,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                              >> 9U) 
                                             & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                                 >> 0xaU) 
                                                | vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                                >> 0xaU) 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))));
            tracep->chgBit(oldp+267,((1U & (((((IData)(
                                                       (0U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130) 
                                              | ((IData)(
                                                         (0x400U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                                 & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                             | ((IData)(
                                                        (0x200U 
                                                         == 
                                                         (0x600U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                                & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                            | ((IData)(
                                                       (0x600U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))));
            tracep->chgBit(oldp+268,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 1U))));
            tracep->chgBit(oldp+269,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 2U))));
            tracep->chgBit(oldp+270,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 3U))));
            tracep->chgBit(oldp+271,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 1U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+272,((1U & ((((IData)(
                                                      (8U 
                                                       == 
                                                       (0xeU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                              | (IData)(
                                                        (4U 
                                                         == 
                                                         (0xeU 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (0xeU 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0xeU 
                                                       == 
                                                       (0xeU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+273,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 4U))));
            tracep->chgBit(oldp+274,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 5U))));
            tracep->chgBit(oldp+275,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 6U))));
            tracep->chgBit(oldp+276,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 4U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x60U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x60U 
                                                       == 
                                                       (0x60U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+277,((1U & ((((IData)(
                                                      (0x40U 
                                                       == 
                                                       (0x70U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                              | (IData)(
                                                        (0x20U 
                                                         == 
                                                         (0x70U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                             | (IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x70U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x70U 
                                                       == 
                                                       (0x70U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+278,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 7U))));
            tracep->chgBit(oldp+279,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 8U))));
            tracep->chgBit(oldp+280,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 9U))));
            tracep->chgBit(oldp+281,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 7U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x300U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+282,((1U & ((((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x380U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                              | (IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x380U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x380U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x380U 
                                                       == 
                                                       (0x380U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+283,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))));
            tracep->chgBit(oldp+284,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+285,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                            >> 2U))));
            tracep->chgBit(oldp+286,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))))));
            tracep->chgBit(oldp+287,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))))));
            tracep->chgBit(oldp+288,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                            >> 3U))));
            tracep->chgBit(oldp+289,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                            >> 4U))));
            tracep->chgBit(oldp+290,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                            >> 5U))));
            tracep->chgBit(oldp+291,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                              >> 3U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))) 
                                            | (IData)(
                                                      (0x30U 
                                                       == 
                                                       (0x30U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))))));
            tracep->chgBit(oldp+292,((1U & ((((IData)(
                                                      (0x20U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2)))) 
                                              | (IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x38U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))) 
                                            | (IData)(
                                                      (0x38U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))))))));
            tracep->chgBit(oldp+293,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                            >> 6U))));
            tracep->chgBit(oldp+294,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0xaU))));
            tracep->chgBit(oldp+295,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0xbU))));
            tracep->chgBit(oldp+296,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                              >> 6U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc00U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0xc00U 
                                                       == 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+297,((1U & ((((IData)(
                                                      ((0U 
                                                        == 
                                                        (0x40U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))) 
                                                       & (0x800U 
                                                          == 
                                                          (0xc00U 
                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                              | (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x40U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))) 
                                                         & (0x400U 
                                                            == 
                                                            (0xc00U 
                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))))) 
                                             | (IData)(
                                                       ((0x40U 
                                                         == 
                                                         (0x40U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2))) 
                                                        & (0U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))))) 
                                            | ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2) 
                                                 >> 6U) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                   >> 0xaU)) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+298,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0xcU))));
            tracep->chgBit(oldp+299,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0xdU))));
            tracep->chgBit(oldp+300,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0xeU))));
            tracep->chgBit(oldp+301,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 0xcU) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x6000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x6000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+302,((1U & ((((IData)(
                                                      (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                              | (IData)(
                                                        (0x2000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                             | (IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x7000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+303,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0xfU))));
            tracep->chgBit(oldp+304,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x10U))));
            tracep->chgBit(oldp+305,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x11U))));
            tracep->chgBit(oldp+306,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 0xfU) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x30000U 
                                                       == 
                                                       (0x30000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+307,((1U & ((((IData)(
                                                      (0x20000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                              | (IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x38000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x38000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x38000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+308,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3))));
            tracep->chgBit(oldp+309,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+310,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                            >> 2U))));
            tracep->chgBit(oldp+311,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3))))))));
            tracep->chgBit(oldp+312,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3))))))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                            >> 3U))));
            tracep->chgBit(oldp+314,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                            >> 4U))));
            tracep->chgBit(oldp+315,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x12U))));
            tracep->chgBit(oldp+316,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                              >> 3U) 
                                             & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                                 >> 4U) 
                                                | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                   >> 0x12U))) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3) 
                                                >> 4U) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+317,((1U & (((((IData)(
                                                       (0U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3)))) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                  >> 0x12U)) 
                                              | ((IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3)))) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                     >> 0x12U)))) 
                                             | ((IData)(
                                                        (8U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3)))) 
                                                & (~ 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                    >> 0x12U)))) 
                                            | ((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_3)))) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+318,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x13U))));
            tracep->chgBit(oldp+319,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x14U))));
            tracep->chgBit(oldp+320,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x15U))));
            tracep->chgBit(oldp+321,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 0x13U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x300000U 
                                                       == 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+322,((1U & ((((IData)(
                                                      (0x200000U 
                                                       == 
                                                       (0x380000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                              | (IData)(
                                                        (0x100000U 
                                                         == 
                                                         (0x380000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                             | (IData)(
                                                       (0x80000U 
                                                        == 
                                                        (0x380000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x380000U 
                                                       == 
                                                       (0x380000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+323,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4) 
                                            >> 1U))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4) 
                                            >> 2U))));
            tracep->chgBit(oldp+326,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4))))))));
            tracep->chgBit(oldp+327,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_4))))))));
            tracep->chgBit(oldp+328,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x17U))));
            tracep->chgBit(oldp+329,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x18U))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x16U))));
            tracep->chgBit(oldp+331,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                              >> 0x17U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1400000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x1400000U 
                                                       == 
                                                       (0x1400000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+332,((1U & ((((IData)(
                                                      (0x400000U 
                                                       == 
                                                       (0x1c00000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130))) 
                                              | (IData)(
                                                        (0x1000000U 
                                                         == 
                                                         (0x1c00000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                             | (IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x1c00000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                            | (IData)(
                                                      (0x1c00000U 
                                                       == 
                                                       (0x1c00000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))))));
            tracep->chgBit(oldp+333,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_5))));
            tracep->chgBit(oldp+334,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_5) 
                                            >> 1U))));
            tracep->chgBit(oldp+335,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x19U))));
            tracep->chgBit(oldp+336,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+337,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130 
                                            >> 0x1bU))));
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a),33);
            tracep->chgIData(oldp+340,(((0x20000000U 
                                         & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_6) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xc000000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (0xc000000U 
                                                        == 
                                                        (0xc000000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            << 0x1dU)) 
                                        | ((0x10000000U 
                                            & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5) 
                                                 << 0x1cU) 
                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5) 
                                                    << 0x1bU) 
                                                   | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                      << 3U))) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5) 
                                                   << 0x1bU) 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                     << 3U)))) 
                                           | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_5) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_4) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_3) 
                                                     << 0x12U) 
                                                    | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2) 
                                                        << 0xbU) 
                                                       | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)))))))),32);
            tracep->chgSData(oldp+341,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1),11);
            tracep->chgSData(oldp+342,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1),11);
            tracep->chgSData(oldp+343,((0x7ffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)),11);
            tracep->chgCData(oldp+344,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2),7);
            tracep->chgCData(oldp+345,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2),7);
            tracep->chgCData(oldp+346,((0x7fU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                 >> 0xbU))),7);
            tracep->chgCData(oldp+347,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3),5);
            tracep->chgCData(oldp+348,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_3),5);
            tracep->chgCData(oldp+349,((0x1fU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                 >> 0x12U))),5);
            tracep->chgCData(oldp+350,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4),3);
            tracep->chgCData(oldp+351,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_4),3);
            tracep->chgCData(oldp+352,((7U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 0x17U))),3);
            tracep->chgCData(oldp+353,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5),2);
            tracep->chgCData(oldp+354,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_5),2);
            tracep->chgCData(oldp+355,((3U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+356,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_6));
            tracep->chgBit(oldp+357,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5) 
                                             & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5) 
                                                 >> 1U) 
                                                | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                   >> 0x19U))) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5) 
                                                >> 1U) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+358,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_7));
            tracep->chgBit(oldp+360,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_6) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0xc000000U 
                                                       == 
                                                       (0xc000000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+361,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+362,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))));
            tracep->chgBit(oldp+363,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 1U)))));
            tracep->chgBit(oldp+364,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 2U)))));
            tracep->chgBit(oldp+365,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (6ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (6ULL 
                                                       == 
                                                       (6ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+366,((1U & ((((IData)(
                                                      (4ULL 
                                                       == 
                                                       (7ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (2ULL 
                                                         == 
                                                         (7ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (1ULL 
                                                        == 
                                                        (7ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (7ULL 
                                                       == 
                                                       (7ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+367,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 3U)))));
            tracep->chgBit(oldp+368,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 4U)))));
            tracep->chgBit(oldp+369,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 5U)))));
            tracep->chgBit(oldp+370,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 3U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x30ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x30ULL 
                                                       == 
                                                       (0x30ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+371,((1U & ((((IData)(
                                                      (0x20ULL 
                                                       == 
                                                       (0x38ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x10ULL 
                                                         == 
                                                         (0x38ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (8ULL 
                                                        == 
                                                        (0x38ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x38ULL 
                                                       == 
                                                       (0x38ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+372,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 6U)))));
            tracep->chgBit(oldp+373,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 7U)))));
            tracep->chgBit(oldp+374,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 8U)))));
            tracep->chgBit(oldp+375,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 6U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x180ULL 
                                                       == 
                                                       (0x180ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+376,((1U & ((((IData)(
                                                      (0x100ULL 
                                                       == 
                                                       (0x1c0ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x80ULL 
                                                         == 
                                                         (0x1c0ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x40ULL 
                                                        == 
                                                        (0x1c0ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x1c0ULL 
                                                       == 
                                                       (0x1c0ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+377,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 9U)))));
            tracep->chgBit(oldp+378,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+379,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+380,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 9U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0xc00ULL 
                                                       == 
                                                       (0xc00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+381,((1U & ((((IData)(
                                                      (0x800ULL 
                                                       == 
                                                       (0xe00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x400ULL 
                                                         == 
                                                         (0xe00ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x200ULL 
                                                        == 
                                                        (0xe00ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0xe00ULL 
                                                       == 
                                                       (0xe00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+382,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+383,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+384,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+385,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 0xcU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x6000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x6000ULL 
                                                       == 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+386,((1U & ((((IData)(
                                                      (0x4000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x2000ULL 
                                                         == 
                                                         (0x7000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x1000ULL 
                                                        == 
                                                        (0x7000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x7000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+387,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+388,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+389,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+390,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x30000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x30000ULL 
                                                       == 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+391,((1U & ((((IData)(
                                                      (0x20000ULL 
                                                       == 
                                                       (0x38000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x10000ULL 
                                                         == 
                                                         (0x38000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x8000ULL 
                                                        == 
                                                        (0x38000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x38000ULL 
                                                       == 
                                                       (0x38000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+392,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+393,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+394,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+395,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 0x12U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x180000ULL 
                                                       == 
                                                       (0x180000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+396,((1U & ((((IData)(
                                                      (0x100000ULL 
                                                       == 
                                                       (0x1c0000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x80000ULL 
                                                         == 
                                                         (0x1c0000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x40000ULL 
                                                        == 
                                                        (0x1c0000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x1c0000ULL 
                                                       == 
                                                       (0x1c0000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+397,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+398,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+399,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+400,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0xc00000ULL 
                                                       == 
                                                       (0xc00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+401,((1U & ((((IData)(
                                                      (0x800000ULL 
                                                       == 
                                                       (0xe00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0xe00000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x200000ULL 
                                                        == 
                                                        (0xe00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0xe00000ULL 
                                                       == 
                                                       (0xe00000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+402,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+403,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+404,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+405,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 0x18U)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x6000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x6000000ULL 
                                                       == 
                                                       (0x6000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+406,((1U & ((((IData)(
                                                      (0x4000000ULL 
                                                       == 
                                                       (0x7000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x2000000ULL 
                                                         == 
                                                         (0x7000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x1000000ULL 
                                                        == 
                                                        (0x7000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x7000000ULL 
                                                       == 
                                                       (0x7000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+407,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+408,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+409,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+410,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x30000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x30000000ULL 
                                                       == 
                                                       (0x30000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+411,((1U & ((((IData)(
                                                      (0x20000000ULL 
                                                       == 
                                                       (0x38000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x38000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x8000000ULL 
                                                        == 
                                                        (0x38000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x38000000ULL 
                                                       == 
                                                       (0x38000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+412,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+413,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+414,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+415,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x180000000ULL 
                                                       == 
                                                       (0x180000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+416,((1U & ((((IData)(
                                                      (0x100000000ULL 
                                                       == 
                                                       (0x1c0000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                                              | (IData)(
                                                        (0x80000000ULL 
                                                         == 
                                                         (0x1c0000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                             | (IData)(
                                                       (0x40000000ULL 
                                                        == 
                                                        (0x1c0000000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                                            | (IData)(
                                                      (0x1c0000000ULL 
                                                       == 
                                                       (0x1c0000000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))))));
            tracep->chgBit(oldp+417,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))));
            tracep->chgBit(oldp+418,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+419,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 2U))));
            tracep->chgBit(oldp+420,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))))));
            tracep->chgBit(oldp+421,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))))));
            tracep->chgBit(oldp+422,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 3U))));
            tracep->chgBit(oldp+423,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 4U))));
            tracep->chgBit(oldp+424,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 5U))));
            tracep->chgBit(oldp+425,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                              >> 3U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x30U 
                                                       == 
                                                       (0x30U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))))));
            tracep->chgBit(oldp+426,((1U & ((((IData)(
                                                      (0x20U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                              | (IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x38U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x38U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))))));
            tracep->chgBit(oldp+427,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 6U))));
            tracep->chgBit(oldp+428,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 7U))));
            tracep->chgBit(oldp+429,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 8U))));
            tracep->chgBit(oldp+430,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                              >> 6U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x180U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))))));
            tracep->chgBit(oldp+431,((1U & ((((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                              | (IData)(
                                                        (0x80U 
                                                         == 
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                             | (IData)(
                                                       (0x40U 
                                                        == 
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                                            | (IData)(
                                                      (0x1c0U 
                                                       == 
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))))));
            tracep->chgBit(oldp+432,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 9U))));
            tracep->chgBit(oldp+433,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+434,((1U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)));
            tracep->chgBit(oldp+435,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                              >> 9U) 
                                             & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                                 >> 0xaU) 
                                                | vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                                >> 0xaU) 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))));
            tracep->chgBit(oldp+436,((1U & (((((IData)(
                                                       (0U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131) 
                                              | ((IData)(
                                                         (0x400U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                                 & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                             | ((IData)(
                                                        (0x200U 
                                                         == 
                                                         (0x600U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                                & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                            | ((IData)(
                                                       (0x600U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 1U))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 2U))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 3U))));
            tracep->chgBit(oldp+440,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 1U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+441,((1U & ((((IData)(
                                                      (8U 
                                                       == 
                                                       (0xeU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                              | (IData)(
                                                        (4U 
                                                         == 
                                                         (0xeU 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (0xeU 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0xeU 
                                                       == 
                                                       (0xeU 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 4U))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 5U))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 6U))));
            tracep->chgBit(oldp+445,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 4U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x60U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x60U 
                                                       == 
                                                       (0x60U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+446,((1U & ((((IData)(
                                                      (0x40U 
                                                       == 
                                                       (0x70U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                              | (IData)(
                                                        (0x20U 
                                                         == 
                                                         (0x70U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x70U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x70U 
                                                       == 
                                                       (0x70U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+447,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 7U))));
            tracep->chgBit(oldp+448,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 8U))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 9U))));
            tracep->chgBit(oldp+450,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 7U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x300U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+451,((1U & ((((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x380U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                              | (IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x380U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x380U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x380U 
                                                       == 
                                                       (0x380U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+452,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))));
            tracep->chgBit(oldp+453,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+454,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                            >> 2U))));
            tracep->chgBit(oldp+455,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))))));
            tracep->chgBit(oldp+456,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))))));
            tracep->chgBit(oldp+457,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                            >> 3U))));
            tracep->chgBit(oldp+458,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                            >> 4U))));
            tracep->chgBit(oldp+459,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                            >> 5U))));
            tracep->chgBit(oldp+460,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                              >> 3U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))) 
                                            | (IData)(
                                                      (0x30U 
                                                       == 
                                                       (0x30U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))))));
            tracep->chgBit(oldp+461,((1U & ((((IData)(
                                                      (0x20U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2)))) 
                                              | (IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x38U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))) 
                                            | (IData)(
                                                      (0x38U 
                                                       == 
                                                       (0x38U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))))))));
            tracep->chgBit(oldp+462,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                            >> 6U))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0xaU))));
            tracep->chgBit(oldp+464,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0xbU))));
            tracep->chgBit(oldp+465,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                              >> 6U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc00U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0xc00U 
                                                       == 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+466,((1U & ((((IData)(
                                                      ((0U 
                                                        == 
                                                        (0x40U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))) 
                                                       & (0x800U 
                                                          == 
                                                          (0xc00U 
                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                              | (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x40U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))) 
                                                         & (0x400U 
                                                            == 
                                                            (0xc00U 
                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))))) 
                                             | (IData)(
                                                       ((0x40U 
                                                         == 
                                                         (0x40U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2))) 
                                                        & (0U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))))) 
                                            | ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2) 
                                                 >> 6U) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                   >> 0xaU)) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+467,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0xcU))));
            tracep->chgBit(oldp+468,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0xdU))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0xeU))));
            tracep->chgBit(oldp+470,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 0xcU) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x6000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x6000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+471,((1U & ((((IData)(
                                                      (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                              | (IData)(
                                                        (0x2000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x7000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+472,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0xfU))));
            tracep->chgBit(oldp+473,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x10U))));
            tracep->chgBit(oldp+474,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x11U))));
            tracep->chgBit(oldp+475,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 0xfU) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x30000U 
                                                       == 
                                                       (0x30000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+476,((1U & ((((IData)(
                                                      (0x20000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                              | (IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x38000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x38000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x38000U 
                                                       == 
                                                       (0x38000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+477,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3))));
            tracep->chgBit(oldp+478,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+479,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                            >> 2U))));
            tracep->chgBit(oldp+480,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3))))))));
            tracep->chgBit(oldp+481,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3))))))));
            tracep->chgBit(oldp+482,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                            >> 3U))));
            tracep->chgBit(oldp+483,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                            >> 4U))));
            tracep->chgBit(oldp+484,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x12U))));
            tracep->chgBit(oldp+485,((1U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                              >> 3U) 
                                             & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                                 >> 4U) 
                                                | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                   >> 0x12U))) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3) 
                                                >> 4U) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+486,((1U & (((((IData)(
                                                       (0U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3)))) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                  >> 0x12U)) 
                                              | ((IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3)))) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                     >> 0x12U)))) 
                                             | ((IData)(
                                                        (8U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3)))) 
                                                & (~ 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                    >> 0x12U)))) 
                                            | ((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_3)))) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+487,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x13U))));
            tracep->chgBit(oldp+488,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x14U))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x15U))));
            tracep->chgBit(oldp+490,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 0x13U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x300000U 
                                                       == 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+491,((1U & ((((IData)(
                                                      (0x200000U 
                                                       == 
                                                       (0x380000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                              | (IData)(
                                                        (0x100000U 
                                                         == 
                                                         (0x380000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (0x80000U 
                                                        == 
                                                        (0x380000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x380000U 
                                                       == 
                                                       (0x380000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+492,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4))));
            tracep->chgBit(oldp+493,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4) 
                                            >> 1U))));
            tracep->chgBit(oldp+494,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4) 
                                            >> 2U))));
            tracep->chgBit(oldp+495,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4))))) 
                                            | (IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4))))))));
            tracep->chgBit(oldp+496,((1U & ((((IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4)))) 
                                              | (IData)(
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4))))) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4))))) 
                                            | (IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_4))))))));
            tracep->chgBit(oldp+497,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x17U))));
            tracep->chgBit(oldp+498,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x18U))));
            tracep->chgBit(oldp+499,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x16U))));
            tracep->chgBit(oldp+500,((1U & (((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                              >> 0x17U) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1400000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x1400000U 
                                                       == 
                                                       (0x1400000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+501,((1U & ((((IData)(
                                                      (0x400000U 
                                                       == 
                                                       (0x1c00000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131))) 
                                              | (IData)(
                                                        (0x1000000U 
                                                         == 
                                                         (0x1c00000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                             | (IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x1c00000U 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                            | (IData)(
                                                      (0x1c00000U 
                                                       == 
                                                       (0x1c00000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))))));
            tracep->chgBit(oldp+502,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5))));
            tracep->chgBit(oldp+503,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_5) 
                                            >> 1U))));
            tracep->chgBit(oldp+504,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x19U))));
            tracep->chgBit(oldp+505,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+506,((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131 
                                            >> 0x1bU))));
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__lsu__DOT__mem_read_data),64);
            tracep->chgBit(oldp+509,(vlSelf->top__DOT__lsu__DOT__u1__DOT__write));
            tracep->chgBit(oldp+510,((0x81U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__dcache_addr 
                                                           >> 0x18U))))));
            tracep->chgCData(oldp+511,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__dcache_addr 
                                                         >> 0x18U)))),8);
            tracep->chgBit(oldp+512,(vlSelf->top__DOT__icache__DOT__miss));
            tracep->chgCData(oldp+513,((0x7fU & (IData)(
                                                        (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                         >> 4U)))),7);
            tracep->chgQData(oldp+514,((vlSelf->top__DOT__stage1__DOT__next_pc 
                                        >> 0xbU)),53);
            tracep->chgBit(oldp+516,((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))));
            tracep->chgBit(oldp+517,(vlSelf->top__DOT__icache__DOT__hit));
            tracep->chgBit(oldp+518,(vlSelf->top__DOT__icache__DOT__hit1));
            tracep->chgBit(oldp+519,(vlSelf->top__DOT__icache__DOT__hit0));
            tracep->chgCData(oldp+520,(vlSelf->top__DOT__icache__DOT__tag_arry_addr),8);
            tracep->chgQData(oldp+521,(vlSelf->top__DOT__icache__DOT__tag_arry_data_in),55);
            tracep->chgQData(oldp+523,(((IData)(vlSelf->top__DOT__icache__DOT__hit1)
                                         ? (QData)((IData)(
                                                           ((0x36U 
                                                             >= 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                         >> 4U)))) 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                                       >> 
                                                                       (0x3fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U))))))))
                                         : (QData)((IData)(
                                                           ((0x36U 
                                                             >= 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                         >> 4U)))) 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                                       >> 
                                                                       (0x3fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U)))))))))),55);
            tracep->chgQData(oldp+525,(vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0),55);
            tracep->chgQData(oldp+527,(vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1),55);
            tracep->chgCData(oldp+529,(vlSelf->top__DOT__icache__DOT__cache_addr),8);
            tracep->chgCData(oldp+530,(vlSelf->top__DOT__icache__DOT__cache_sel),4);
            if ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                               >> 3U)))) {
                __Vtemp3397[0U] = 0U;
                __Vtemp3397[1U] = 0U;
                __Vtemp3397[2U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                  >> 2U)))
                                    ? 0U : ((1U & (IData)(
                                                          (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                 ? 0xff000000U
                                                 : 0xffff0000U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                 ? 0xffffff00U
                                                 : 0xffffffffU)));
                __Vtemp3397[3U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xff000000U
                                            : 0xffff0000U)
                                        : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffffff00U
                                            : 0xffffffffU))
                                    : ((1U & (IData)(
                                                     (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffffffU
                                            : 0xffffU)
                                        : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffU
                                            : 0U)));
            } else {
                __Vtemp3397[0U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                  >> 2U)))
                                    ? 0U : ((1U & (IData)(
                                                          (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                 ? 0xff000000U
                                                 : 0xffff0000U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                 ? 0xffffff00U
                                                 : 0xffffffffU)));
                __Vtemp3397[1U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xff000000U
                                            : 0xffff0000U)
                                        : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffffff00U
                                            : 0xffffffffU))
                                    : ((1U & (IData)(
                                                     (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffffffU
                                            : 0xffffU)
                                        : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffU
                                            : 0U)));
                __Vtemp3397[2U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffffffU
                                            : 0xffffU)
                                        : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                            ? 0xffU
                                            : 0U)) : 0U);
                __Vtemp3397[3U] = 0U;
            }
            tracep->chgWData(oldp+531,(__Vtemp3397),128);
            tracep->chgCData(oldp+535,((0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__tag_arry_addr))),7);
            tracep->chgCData(oldp+536,((0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))),6);
            tracep->chgBit(oldp+537,(vlSelf->top__DOT__dcache__DOT__miss));
            tracep->chgCData(oldp+538,((0x7fU & (IData)(
                                                        (vlSelf->top__DOT__dcache_addr 
                                                         >> 4U)))),7);
            tracep->chgQData(oldp+539,((vlSelf->top__DOT__dcache_addr 
                                        >> 0xbU)),53);
            tracep->chgBit(oldp+541,((1U & (IData)(vlSelf->top__DOT__dcache_addr))));
            tracep->chgBit(oldp+542,(vlSelf->top__DOT__dcache__DOT__hit));
            tracep->chgBit(oldp+543,(vlSelf->top__DOT__dcache__DOT__hit1));
            tracep->chgBit(oldp+544,(vlSelf->top__DOT__dcache__DOT__hit0));
            tracep->chgCData(oldp+545,(vlSelf->top__DOT__dcache__DOT__tag_arry_addr),8);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__dcache__DOT__tag_arry_data_in),55);
            tracep->chgQData(oldp+548,(((IData)(vlSelf->top__DOT__dcache__DOT__hit1)
                                         ? (QData)((IData)(
                                                           ((0x36U 
                                                             >= 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__dcache_addr 
                                                                         >> 4U)))) 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 
                                                                       >> 
                                                                       (0x3fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__dcache_addr 
                                                                                >> 4U))))))))
                                         : (QData)((IData)(
                                                           ((0x36U 
                                                             >= 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__dcache_addr 
                                                                         >> 4U)))) 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 
                                                                       >> 
                                                                       (0x3fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__dcache_addr 
                                                                                >> 4U)))))))))),55);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0),55);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1),55);
            tracep->chgCData(oldp+554,(vlSelf->top__DOT__dcache__DOT__cache_addr),8);
            tracep->chgCData(oldp+555,(vlSelf->top__DOT__dcache__DOT__cache_sel),4);
            tracep->chgWData(oldp+556,(vlSelf->top__DOT__dcache__DOT__cache_bwen),128);
            tracep->chgWData(oldp+560,(vlSelf->top__DOT__dcache__DOT__cache_write_bwen),128);
            tracep->chgWData(oldp+564,(vlSelf->top__DOT__dcache__DOT__write_shift),128);
            tracep->chgCData(oldp+568,((0x7fU & (IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_addr))),7);
            __Vtemp3398[0U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[0U]);
            __Vtemp3398[1U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[1U]);
            __Vtemp3398[2U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[2U]);
            __Vtemp3398[3U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[3U]);
            tracep->chgWData(oldp+569,(__Vtemp3398),128);
            tracep->chgCData(oldp+573,((0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))),6);
        }
        tracep->chgBit(oldp+574,(vlSelf->clk));
        tracep->chgBit(oldp+575,(vlSelf->rst_n));
        tracep->chgIData(oldp+576,(vlSelf->ir),32);
        tracep->chgQData(oldp+577,(vlSelf->ira),64);
        tracep->chgBit(oldp+579,(vlSelf->jup));
        tracep->chgBit(oldp+580,(vlSelf->ecall));
        tracep->chgBit(oldp+581,(vlSelf->uart_get));
        tracep->chgBit(oldp+582,(vlSelf->uart_en));
        tracep->chgCData(oldp+583,(vlSelf->uart_out),8);
        tracep->chgBit(oldp+584,(vlSelf->stop_n));
        tracep->chgBit(oldp+585,(vlSelf->skip));
        tracep->chgQData(oldp+586,(vlSelf->pc_dut),64);
        tracep->chgBit(oldp+588,(vlSelf->axi_0_clk));
        tracep->chgBit(oldp+589,(vlSelf->axi_0_rst_n));
        tracep->chgCData(oldp+590,(vlSelf->axi_0_ar_id),4);
        tracep->chgCData(oldp+591,(vlSelf->axi_0_ar_brust),2);
        tracep->chgCData(oldp+592,(vlSelf->axi_0_ar_len),8);
        tracep->chgCData(oldp+593,(vlSelf->axi_0_ar_size),3);
        tracep->chgQData(oldp+594,(vlSelf->axi_0_ar_addr),64);
        tracep->chgBit(oldp+596,(vlSelf->axi_0_ar_valid));
        tracep->chgBit(oldp+597,(vlSelf->axi_0_ar_ready));
        tracep->chgIData(oldp+598,(vlSelf->axi_0_r_data),32);
        tracep->chgBit(oldp+599,(vlSelf->axi_0_r_valid));
        tracep->chgBit(oldp+600,(vlSelf->axi_0_r_ready));
        tracep->chgCData(oldp+601,(vlSelf->axi_0_r_id),4);
        tracep->chgBit(oldp+602,(vlSelf->axi_0_r_last));
        tracep->chgCData(oldp+603,(vlSelf->axi_0_r_resp),2);
        tracep->chgQData(oldp+604,(vlSelf->axi_0_aw_addr),64);
        tracep->chgBit(oldp+606,(vlSelf->axi_0_aw_valid));
        tracep->chgBit(oldp+607,(vlSelf->axi_0_aw_ready));
        tracep->chgCData(oldp+608,(vlSelf->axi_0_aw_id),4);
        tracep->chgCData(oldp+609,(vlSelf->axi_0_aw_brust),2);
        tracep->chgCData(oldp+610,(vlSelf->axi_0_aw_len),8);
        tracep->chgCData(oldp+611,(vlSelf->axi_0_aw_size),3);
        tracep->chgIData(oldp+612,(vlSelf->axi_0_w_data),32);
        tracep->chgBit(oldp+613,(vlSelf->axi_0_w_valid));
        tracep->chgBit(oldp+614,(vlSelf->axi_0_w_ready));
        tracep->chgBit(oldp+615,(vlSelf->axi_0_w_last));
        tracep->chgCData(oldp+616,(vlSelf->axi_0_w_strb),4);
        tracep->chgBit(oldp+617,(vlSelf->axi_0_b_ready));
        tracep->chgBit(oldp+618,(vlSelf->axi_0_b_valid));
        tracep->chgCData(oldp+619,(vlSelf->axi_0_b_resp),2);
        tracep->chgCData(oldp+620,(vlSelf->axi_0_b_id),4);
        tracep->chgBit(oldp+621,(vlSelf->axi_1_clk));
        tracep->chgBit(oldp+622,(vlSelf->axi_1_rst_n));
        tracep->chgCData(oldp+623,(vlSelf->axi_1_ar_id),4);
        tracep->chgCData(oldp+624,(vlSelf->axi_1_ar_brust),2);
        tracep->chgCData(oldp+625,(vlSelf->axi_1_ar_len),8);
        tracep->chgCData(oldp+626,(vlSelf->axi_1_ar_size),3);
        tracep->chgQData(oldp+627,(vlSelf->axi_1_ar_addr),64);
        tracep->chgBit(oldp+629,(vlSelf->axi_1_ar_valid));
        tracep->chgBit(oldp+630,(vlSelf->axi_1_ar_ready));
        tracep->chgIData(oldp+631,(vlSelf->axi_1_r_data),32);
        tracep->chgBit(oldp+632,(vlSelf->axi_1_r_valid));
        tracep->chgBit(oldp+633,(vlSelf->axi_1_r_ready));
        tracep->chgCData(oldp+634,(vlSelf->axi_1_r_id),4);
        tracep->chgBit(oldp+635,(vlSelf->axi_1_r_last));
        tracep->chgCData(oldp+636,(vlSelf->axi_1_r_resp),2);
        tracep->chgQData(oldp+637,(vlSelf->axi_1_aw_addr),64);
        tracep->chgBit(oldp+639,(vlSelf->axi_1_aw_valid));
        tracep->chgBit(oldp+640,(vlSelf->axi_1_aw_ready));
        tracep->chgCData(oldp+641,(vlSelf->axi_1_aw_id),4);
        tracep->chgCData(oldp+642,(vlSelf->axi_1_aw_brust),2);
        tracep->chgCData(oldp+643,(vlSelf->axi_1_aw_len),8);
        tracep->chgCData(oldp+644,(vlSelf->axi_1_aw_size),3);
        tracep->chgIData(oldp+645,(vlSelf->axi_1_w_data),32);
        tracep->chgBit(oldp+646,(vlSelf->axi_1_w_valid));
        tracep->chgBit(oldp+647,(vlSelf->axi_1_w_ready));
        tracep->chgBit(oldp+648,(vlSelf->axi_1_w_last));
        tracep->chgCData(oldp+649,(vlSelf->axi_1_w_strb),4);
        tracep->chgBit(oldp+650,(vlSelf->axi_1_b_ready));
        tracep->chgBit(oldp+651,(vlSelf->axi_1_b_valid));
        tracep->chgCData(oldp+652,(vlSelf->axi_1_b_resp),2);
        tracep->chgCData(oldp+653,(vlSelf->axi_1_b_id),4);
        VL_EXTEND_WQ(65,64, __Vtemp3399, vlSelf->top__DOT__pc_out);
        VL_EXTEND_WQ(65,64, __Vtemp3400, vlSelf->top__DOT__csr_reg__DOT__csrr_);
        tracep->chgQData(oldp+654,((((QData)((IData)(
                                                     ((IData)(vlSelf->ecall)
                                                       ? 
                                                      __Vtemp3399[1U]
                                                       : 
                                                      (((0x341U 
                                                         == (IData)(vlSelf->top__DOT__csr_addr)) 
                                                        & (IData)(vlSelf->top__DOT__csrr))
                                                        ? 
                                                       __Vtemp3400[1U]
                                                        : 0U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->ecall)
                                                                   ? 
                                                                  __Vtemp3399[0U]
                                                                   : 
                                                                  (((0x341U 
                                                                     == (IData)(vlSelf->top__DOT__csr_addr)) 
                                                                    & (IData)(vlSelf->top__DOT__csrr))
                                                                    ? 
                                                                   __Vtemp3400[0U]
                                                                    : 0U)))))),64);
        tracep->chgQData(oldp+656,(((IData)(vlSelf->ecall)
                                     ? vlSelf->top__DOT__csr_reg__DOT__rs1
                                     : (((0x342U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                         & (IData)(vlSelf->top__DOT__csrr))
                                         ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                                         : 0ULL))),64);
        tracep->chgBit(oldp+658,(((IData)(vlSelf->top__DOT__pri_en) 
                                  & ((IData)(vlSelf->ecall) 
                                     | ((0x341U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                        & (IData)(vlSelf->top__DOT__csrr))))));
        tracep->chgBit(oldp+659,(((IData)(vlSelf->top__DOT__pri_en) 
                                  & ((IData)(vlSelf->ecall) 
                                     | ((0x342U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                        & (IData)(vlSelf->top__DOT__csrr))))));
        tracep->chgBit(oldp+660,((1U & (~ (IData)(vlSelf->jup)))));
        tracep->chgCData(oldp+661,((7U & ((0U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                           ? ((IData)(vlSelf->jup)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                               ? ((IData)(vlSelf->top__DOT__icache_valid)
                                                   ? 0U
                                                   : 1U)
                                               : 0U)))),3);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
