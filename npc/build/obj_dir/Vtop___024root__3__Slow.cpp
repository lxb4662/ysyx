// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w93__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w92__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w91__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w90__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w89__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w88__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w87__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w86__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w85__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w84__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w83__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w82__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w81__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w80__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w79__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w78__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w77__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w76__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w75__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 6U)));
}

void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w74__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w73__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w72__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w71__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w70__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w69__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w68__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w67__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w66__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w65__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w64__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a)))) 
                       << 4U)));
}
