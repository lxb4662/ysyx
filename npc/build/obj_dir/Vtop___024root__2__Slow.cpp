// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w129__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w128__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w127__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w126__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w125__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w124__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w123__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w122__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w121__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w120__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w119__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w118__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w117__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w116__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w115__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w114__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w113__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w112__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    << 1U)));
}

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w111__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w110__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w109__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w108__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w107__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w106__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w105__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w104__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w103__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w102__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w101__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w100__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w99__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w98__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w97__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w96__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w95__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w94__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                       << 7U)));
}
