// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__10\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        << 8U)));
}

void Vtop___024root___settle__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__11\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a)))) 
                        << 0xaU)));
    if ((0U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))) {
        vlSelf->top__DOT__dcache__DOT__read_fsm_next 
            = ((0x10U == (IData)(vlSelf->top__DOT__dcache__DOT__next_status))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))) {
        vlSelf->top__DOT__dcache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_1_r_valid) ? 2U : (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm));
    } else if ((2U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))) {
        vlSelf->top__DOT__dcache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_1_r_valid) ? 3U : (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm));
    } else if ((3U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))) {
        vlSelf->top__DOT__dcache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_1_r_valid) ? 4U : (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm));
    } else if ((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))) {
        vlSelf->top__DOT__dcache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_1_r_valid) ? 0U : (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm));
    }
    vlSelf->top__DOT__dcache__DOT__cache_sel = ((0x80U 
                                                 & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))
                                                 ? 
                                                ((0x40U 
                                                  & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))
                                                  ? 7U
                                                  : 0xbU)
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))
                                                  ? 0xdU
                                                  : 0xeU));
    vlSelf->top__DOT__pipe3_allowin_lsu = (1U & (((IData)(vlSelf->top__DOT__dcache_valid) 
                                                  & (IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en)) 
                                                 | (~ (IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                    << 1U)));
}
