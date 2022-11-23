// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__18(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__18\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                       << 6U)));
}

void Vtop___024root___settle__TOP__19(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__19\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                    << 3U)));
}
