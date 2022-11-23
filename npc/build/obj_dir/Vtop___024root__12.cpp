// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__49(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__49\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3018;
    VlWide<4>/*127:0*/ __Vtemp3019;
    VlWide<5>/*159:0*/ __Vtemp3020;
    VlWide<3>/*95:0*/ __Vtemp3024;
    VlWide<5>/*159:0*/ __Vtemp3025;
    VlWide<4>/*127:0*/ __Vtemp3026;
    VlWide<4>/*127:0*/ __Vtemp3027;
    VlWide<4>/*127:0*/ __Vtemp3028;
    VlWide<5>/*159:0*/ __Vtemp3029;
    VlWide<4>/*127:0*/ __Vtemp3030;
    VlWide<4>/*127:0*/ __Vtemp3031;
    // Body
    __Vtemp3018[0U] = (((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_7) 
                          & (IData)((0U != (0x30000000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((0x30000000U == 
                                    (0x30000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        << 0x1fU) | ((0x40000000U & 
                                      ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_7) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x30000000U 
                                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                                        | (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_7) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                                           | (IData)(
                                                     (0x30000000U 
                                                      == 
                                                      (0x30000000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_7) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x30000000U 
                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                                              | (IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_7) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x30000000U 
                                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                                                 | (IData)(
                                                           (0x30000000U 
                                                            == 
                                                            (0x30000000U 
                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_7) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                                                    | (IData)(
                                                              (0x30000000U 
                                                               == 
                                                               (0x30000000U 
                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_7) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000000U 
                                                                    & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                                                       | (IData)(
                                                                 (0x30000000U 
                                                                  == 
                                                                  (0x30000000U 
                                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_7) 
                                                           & (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                                                          | (IData)(
                                                                    (0x30000000U 
                                                                     == 
                                                                     (0x30000000U 
                                                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_7) 
                                                              & (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x30000000U 
                                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                                                             | (IData)(
                                                                       (0x30000000U 
                                                                        == 
                                                                        (0x30000000U 
                                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                                                            << 0x17U)) 
                                                        | ((0x400000U 
                                                            & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_7) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x30000000U 
                                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                                                                | (IData)(
                                                                          (0x30000000U 
                                                                           == 
                                                                           (0x30000000U 
                                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                                                               << 0x16U)) 
                                                           | ((0x200000U 
                                                               & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_7) 
                                                                    & (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                                                                   | (IData)(
                                                                             (0x30000000U 
                                                                              == 
                                                                              (0x30000000U 
                                                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                                                                  << 0x15U)) 
                                                              | ((0x100000U 
                                                                  & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_7) 
                                                                       & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                                                                      | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                                                                     << 0x14U)) 
                                                                 | ((0x80000U 
                                                                     & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_7) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                                                                         | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                                                                        << 0x13U)) 
                                                                    | ((0x40000U 
                                                                        & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_7) 
                                                                             & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                                                                            | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                                                                           << 0x12U)) 
                                                                       | ((0x20000U 
                                                                           & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                                                                               | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                                                                              << 0x11U)) 
                                                                          | ((0x10000U 
                                                                              & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                                                                                << 0x10U)) 
                                                                             | ((0x8000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_41)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_41)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_40)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_40)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_39)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_39)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_38)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_38)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_37)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_37)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_36)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_36))))))))))))))))))))))))))))))))))));
    __Vtemp3018[1U] = (IData)((((QData)((IData)((((
                                                   ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_7) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x30000000U 
                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                                   | (IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_7) 
                                                          & (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x30000000U 
                                                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                                         | (IData)(
                                                                   (0x30000000U 
                                                                    == 
                                                                    (0x30000000U 
                                                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                                        << 0x1eU)) 
                                                    | ((0x20000000U 
                                                        & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_7) 
                                                             & (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x30000000U 
                                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                                            | (IData)(
                                                                      (0x30000000U 
                                                                       == 
                                                                       (0x30000000U 
                                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                                           << 0x1dU)) 
                                                       | ((0x10000000U 
                                                           & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_7) 
                                                                & (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x30000000U 
                                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_128)))) 
                                                               | (IData)(
                                                                         (0x30000000U 
                                                                          == 
                                                                          (0x30000000U 
                                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_128)))) 
                                                              << 0x1cU)) 
                                                          | ((0x8000000U 
                                                              & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_7) 
                                                                   & (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x30000000U 
                                                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_127)))) 
                                                                  | (IData)(
                                                                            (0x30000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_127)))) 
                                                                 << 0x1bU)) 
                                                             | ((0x4000000U 
                                                                 & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_7) 
                                                                      & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_126)))) 
                                                                     | (IData)(
                                                                               (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_126)))) 
                                                                    << 0x1aU)) 
                                                                | ((0x2000000U 
                                                                    & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_7) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_125)))) 
                                                                        | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_125)))) 
                                                                       << 0x19U)) 
                                                                   | ((0x1000000U 
                                                                       & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_7) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_124)))) 
                                                                           | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_124)))) 
                                                                          << 0x18U)) 
                                                                      | ((0x800000U 
                                                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_7) 
                                                                               & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_123)))) 
                                                                              | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_123)))) 
                                                                             << 0x17U)) 
                                                                         | ((0x400000U 
                                                                             & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_122)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_122)))) 
                                                                                << 0x16U)) 
                                                                            | ((0x200000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_121)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_121)))) 
                                                                                << 0x15U)) 
                                                                               | ((0x100000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_120)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_120)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_119)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_119)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_118)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_118)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_117)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_117)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_116)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_116)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_115)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_115)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_114)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_114)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_113)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_113)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_112)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_112)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_111)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_111)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_110)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_110)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_109)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_109)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_108)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_108)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_107)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_107)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_106)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_106)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_105)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_105)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_104)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_104)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_103)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_103)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_102)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_102)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_101)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_101)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_100)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_100)))))))))))))))))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_7) 
                                                                & (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x30000000U 
                                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_99)))) 
                                                               | (IData)(
                                                                         (0x30000000U 
                                                                          == 
                                                                          (0x30000000U 
                                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_99)))) 
                                                              << 0x1fU) 
                                                             | ((0x40000000U 
                                                                 & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_7) 
                                                                      & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_98)))) 
                                                                     | (IData)(
                                                                               (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_98)))) 
                                                                    << 0x1eU)) 
                                                                | ((0x20000000U 
                                                                    & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_7) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_97)))) 
                                                                        | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_97)))) 
                                                                       << 0x1dU)) 
                                                                   | ((0x10000000U 
                                                                       & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_7) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_96)))) 
                                                                           | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_96)))) 
                                                                          << 0x1cU)) 
                                                                      | ((0x8000000U 
                                                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_7) 
                                                                               & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_95)))) 
                                                                              | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_95)))) 
                                                                             << 0x1bU)) 
                                                                         | ((0x4000000U 
                                                                             & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_94)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_94)))) 
                                                                                << 0x1aU)) 
                                                                            | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_93)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_93)))) 
                                                                                << 0x19U)) 
                                                                               | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_92)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_92)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_91)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_91)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_90)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_90)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))))))))))))))))))))))))))))))))))))))));
    __Vtemp3018[2U] = (IData)(((((QData)((IData)(((
                                                   (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_7) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                                    | (IData)(
                                                              (0x30000000U 
                                                               == 
                                                               (0x30000000U 
                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_131)))) 
                                                   << 0x1fU) 
                                                  | ((0x40000000U 
                                                      & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_7) 
                                                           & (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                                          | (IData)(
                                                                    (0x30000000U 
                                                                     == 
                                                                     (0x30000000U 
                                                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_130)))) 
                                                         << 0x1eU)) 
                                                     | ((0x20000000U 
                                                         & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w129__DOT__s_7) 
                                                              & (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x30000000U 
                                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                                             | (IData)(
                                                                       (0x30000000U 
                                                                        == 
                                                                        (0x30000000U 
                                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_129)))) 
                                                            << 0x1dU)) 
                                                        | ((0x10000000U 
                                                            & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w128__DOT__s_7) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x30000000U 
                                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_128)))) 
                                                                | (IData)(
                                                                          (0x30000000U 
                                                                           == 
                                                                           (0x30000000U 
                                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_128)))) 
                                                               << 0x1cU)) 
                                                           | ((0x8000000U 
                                                               & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w127__DOT__s_7) 
                                                                    & (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_127)))) 
                                                                   | (IData)(
                                                                             (0x30000000U 
                                                                              == 
                                                                              (0x30000000U 
                                                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_127)))) 
                                                                  << 0x1bU)) 
                                                              | ((0x4000000U 
                                                                  & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w126__DOT__s_7) 
                                                                       & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_126)))) 
                                                                      | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_126)))) 
                                                                     << 0x1aU)) 
                                                                 | ((0x2000000U 
                                                                     & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w125__DOT__s_7) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_125)))) 
                                                                         | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_125)))) 
                                                                        << 0x19U)) 
                                                                    | ((0x1000000U 
                                                                        & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w124__DOT__s_7) 
                                                                             & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_124)))) 
                                                                            | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_124)))) 
                                                                           << 0x18U)) 
                                                                       | ((0x800000U 
                                                                           & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w123__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_123)))) 
                                                                               | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_123)))) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w122__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_122)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_122)))) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w121__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_121)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_121)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w120__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_120)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_120)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w119__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_119)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_119)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w118__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_118)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_118)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w117__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_117)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_117)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w116__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_116)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_116)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w115__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_115)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_115)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w114__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_114)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_114)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w113__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_113)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_113)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w112__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_112)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_112)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w111__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_111)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_111)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w110__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_110)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_110)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w109__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_109)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_109)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w108__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_108)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_108)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w107__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_107)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_107)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w106__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_106)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_106)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w105__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_105)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_105)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w104__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_104)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_104)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w103__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_103)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_103)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w102__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_102)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_102)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w101__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_101)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_101)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w100__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_100)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_100)))))))))))))))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w99__DOT__s_7) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x30000000U 
                                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_99)))) 
                                                                | (IData)(
                                                                          (0x30000000U 
                                                                           == 
                                                                           (0x30000000U 
                                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_99)))) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w98__DOT__s_7) 
                                                                       & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_98)))) 
                                                                      | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_98)))) 
                                                                     << 0x1eU)) 
                                                                 | ((0x20000000U 
                                                                     & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w97__DOT__s_7) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_97)))) 
                                                                         | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_97)))) 
                                                                        << 0x1dU)) 
                                                                    | ((0x10000000U 
                                                                        & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w96__DOT__s_7) 
                                                                             & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_96)))) 
                                                                            | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_96)))) 
                                                                           << 0x1cU)) 
                                                                       | ((0x8000000U 
                                                                           & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w95__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_95)))) 
                                                                               | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_95)))) 
                                                                              << 0x1bU)) 
                                                                          | ((0x4000000U 
                                                                              & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w94__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_94)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_94)))) 
                                                                                << 0x1aU)) 
                                                                             | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w93__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_93)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_93)))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w92__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_92)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_92)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w91__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_91)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_91)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w90__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_90)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_90)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w89__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_89)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w88__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_88)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w87__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_87)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w86__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_86)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w85__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_85)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w84__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_84)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w83__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_83)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w82__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_82)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w81__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_81)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w80__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_80)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w79__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_79)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w78__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_78)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w77__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_77)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w76__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_76)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w75__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_75)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w74__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_74)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w73__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_73)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w72__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_72)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w71__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_71)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w70__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_70)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_69)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))))))))))))))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp3019[0U] = (((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_7) 
                          & (IData)((0U != (0x30000000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_35)))) 
                         | (IData)((0x30000000U == 
                                    (0x30000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_35)))) 
                        << 0x1fU) | ((0x40000000U & 
                                      ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_7) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x30000000U 
                                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_34)))) 
                                        | (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_34)))) 
                                       << 0x1eU)) | 
                                     ((0x20000000U 
                                       & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_7) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_33)))) 
                                           | (IData)(
                                                     (0x30000000U 
                                                      == 
                                                      (0x30000000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_33)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_7) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x30000000U 
                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_32)))) 
                                              | (IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_32)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_7) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x30000000U 
                                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_31)))) 
                                                 | (IData)(
                                                           (0x30000000U 
                                                            == 
                                                            (0x30000000U 
                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_31)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_7) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_30)))) 
                                                    | (IData)(
                                                              (0x30000000U 
                                                               == 
                                                               (0x30000000U 
                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_30)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_7) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000000U 
                                                                    & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_29)))) 
                                                       | (IData)(
                                                                 (0x30000000U 
                                                                  == 
                                                                  (0x30000000U 
                                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_29)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_7) 
                                                           & (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_28)))) 
                                                          | (IData)(
                                                                    (0x30000000U 
                                                                     == 
                                                                     (0x30000000U 
                                                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_28)))) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_7) 
                                                              & (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x30000000U 
                                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_27)))) 
                                                             | (IData)(
                                                                       (0x30000000U 
                                                                        == 
                                                                        (0x30000000U 
                                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_27)))) 
                                                            << 0x17U)) 
                                                        | ((0x400000U 
                                                            & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_7) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x30000000U 
                                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_26)))) 
                                                                | (IData)(
                                                                          (0x30000000U 
                                                                           == 
                                                                           (0x30000000U 
                                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_26)))) 
                                                               << 0x16U)) 
                                                           | ((0x200000U 
                                                               & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_7) 
                                                                    & (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_25)))) 
                                                                   | (IData)(
                                                                             (0x30000000U 
                                                                              == 
                                                                              (0x30000000U 
                                                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_25)))) 
                                                                  << 0x15U)) 
                                                              | ((0x100000U 
                                                                  & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_7) 
                                                                       & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_24)))) 
                                                                      | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_24)))) 
                                                                     << 0x14U)) 
                                                                 | ((0x80000U 
                                                                     & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_7) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_23)))) 
                                                                         | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_23)))) 
                                                                        << 0x13U)) 
                                                                    | ((0x40000U 
                                                                        & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_7) 
                                                                             & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_22)))) 
                                                                            | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_22)))) 
                                                                           << 0x12U)) 
                                                                       | ((0x20000U 
                                                                           & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_21)))) 
                                                                               | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_21)))) 
                                                                              << 0x11U)) 
                                                                          | ((0x10000U 
                                                                              & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_20)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_20)))) 
                                                                                << 0x10U)) 
                                                                             | ((0x8000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_19)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_19)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_18)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_18)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_17)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_17)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_16)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_16)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_15)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_15)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_14)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_14)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_13)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_13)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_7) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))))))))))))))))))))))))))))))))))));
    __Vtemp3020[0U] = ((__Vtemp3019[0U] << 4U) | ((8U 
                                                   & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_7) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000000U 
                                                                    & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                                                       | (IData)(
                                                                 (0x30000000U 
                                                                  == 
                                                                  (0x30000000U 
                                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_7) 
                                                           & (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                                                          | (IData)(
                                                                    (0x30000000U 
                                                                     == 
                                                                     (0x30000000U 
                                                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_7) 
                                                              & (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x30000000U 
                                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                                                             | (IData)(
                                                                       (0x30000000U 
                                                                        == 
                                                                        (0x30000000U 
                                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_7) 
                                                               & (IData)(
                                                                         (0ULL 
                                                                          != 
                                                                          (0x30000000ULL 
                                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))) 
                                                              | (IData)(
                                                                        (0x30000000ULL 
                                                                         == 
                                                                         (0x30000000ULL 
                                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[0U] 
        = __Vtemp3020[0U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[1U] 
        = ((__Vtemp3019[0U] >> 0x1cU) | (__Vtemp3018[0U] 
                                         << 4U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[2U] 
        = ((__Vtemp3018[0U] >> 0x1cU) | (__Vtemp3018[1U] 
                                         << 4U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[3U] 
        = ((__Vtemp3018[1U] >> 0x1cU) | (__Vtemp3018[2U] 
                                         << 4U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[4U] 
        = (__Vtemp3018[2U] >> 0x1cU);
    __Vtemp3024[0U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[0U] 
                        << 1U) | (1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                >> 0x1eU))));
    __Vtemp3024[1U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[0U] 
                        >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[1U] 
                                     << 1U));
    __Vtemp3024[2U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[1U] 
                        >> 0x1fU) | (0xeU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[2U] 
                                             << 1U)));
    VL_EXTEND_WW(132,68, __Vtemp3025, __Vtemp3024);
    __Vtemp3026[0U] = __Vtemp3025[0U];
    __Vtemp3026[1U] = __Vtemp3025[1U];
    __Vtemp3026[2U] = __Vtemp3025[2U];
    __Vtemp3026[3U] = __Vtemp3025[3U];
    __Vtemp3027[0U] = vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__s[0U];
    __Vtemp3027[1U] = vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__s[1U];
    __Vtemp3027[2U] = vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__s[2U];
    __Vtemp3027[3U] = vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__s[3U];
    VL_ADD_W(4, __Vtemp3028, __Vtemp3026, __Vtemp3027);
    VL_EXTEND_WI(132,1, __Vtemp3029, (1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                    >> 0x1fU))));
    __Vtemp3030[0U] = __Vtemp3029[0U];
    __Vtemp3030[1U] = __Vtemp3029[1U];
    __Vtemp3030[2U] = __Vtemp3029[2U];
    __Vtemp3030[3U] = __Vtemp3029[3U];
    VL_ADD_W(4, __Vtemp3031, __Vtemp3028, __Vtemp3030);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_out_h 
        = (((QData)((IData)(__Vtemp3031[3U])) << 0x20U) 
           | (QData)((IData)(__Vtemp3031[2U])));
}

extern const VlUnpacked<CData/*4:0*/, 2048> Vtop__ConstPool__TABLE_f5bfe791_0;
extern const VlUnpacked<CData/*4:0*/, 1024> Vtop__ConstPool__TABLE_936305f9_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__50(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__50\n"); );
    // Variables
    SData/*9:0*/ __Vtableidx4;
    SData/*10:0*/ __Vtableidx6;
    VlWide<3>/*95:0*/ __Vtemp3102;
    VlWide<3>/*95:0*/ __Vtemp3103;
    VlWide<3>/*95:0*/ __Vtemp3106;
    VlWide<3>/*95:0*/ __Vtemp3107;
    VlWide<3>/*95:0*/ __Vtemp3112;
    VlWide<3>/*95:0*/ __Vtemp3113;
    VlWide<3>/*95:0*/ __Vtemp3116;
    VlWide<3>/*95:0*/ __Vtemp3120;
    VlWide<5>/*159:0*/ __Vtemp3121;
    VlWide<5>/*159:0*/ __Vtemp3122;
    VlWide<3>/*95:0*/ __Vtemp3123;
    VlWide<3>/*95:0*/ __Vtemp3133;
    VlWide<3>/*95:0*/ __Vtemp3143;
    VlWide<3>/*95:0*/ __Vtemp3152;
    VlWide<3>/*95:0*/ __Vtemp3153;
    VlWide<3>/*95:0*/ __Vtemp3156;
    VlWide<3>/*95:0*/ __Vtemp3157;
    VlWide<3>/*95:0*/ __Vtemp3162;
    VlWide<3>/*95:0*/ __Vtemp3163;
    VlWide<3>/*95:0*/ __Vtemp3166;
    VlWide<3>/*95:0*/ __Vtemp3167;
    VlWide<3>/*95:0*/ __Vtemp3177;
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
         & (IData)(vlSelf->top__DOT__dcache_write))) {
        vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[0U];
        vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[1U];
        vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[2U];
        vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[3U];
    } else {
        vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->axi_1_r_valid)) ? 
               vlSelf->top__DOT__dcache__DOT__read_line[0U]
                : 0U);
        vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->axi_1_r_valid)) ? 
               vlSelf->top__DOT__dcache__DOT__read_line[1U]
                : 0U);
        vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->axi_1_r_valid)) ? 
               vlSelf->top__DOT__dcache__DOT__read_line[2U]
                : 0U);
        vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->axi_1_r_valid)) ? vlSelf->axi_1_r_data
                : 0U);
    }
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | (IData)((IData)((1U & ((((((~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1)) 
                                        & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))) 
                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
                                      | (((~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1)) 
                                          & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2)) 
                                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]))) 
                                     | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))) 
                                        & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]))) 
                                    | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2)) 
                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 1U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 1U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 1U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 1U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 1U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 1U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 1U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 1U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 1U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 1U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 1U)))))) 
              << 1U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 2U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 2U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 2U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 2U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 2U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 2U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 2U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 2U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 2U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 2U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 2U)))))) 
              << 2U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 3U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 3U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 3U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 3U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 3U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 3U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 3U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 3U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 3U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 3U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 3U)))))) 
              << 3U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 4U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 4U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 4U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 4U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 4U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 4U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 4U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 4U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 4U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 4U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 4U)))))) 
              << 4U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 5U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 5U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 5U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 5U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 5U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 5U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 5U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 5U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 5U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 5U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 5U)))))) 
              << 5U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 6U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 6U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 6U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 6U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 6U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 6U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 6U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 6U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 6U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 6U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 6U)))))) 
              << 6U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 7U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 7U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 7U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 7U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 7U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 7U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 7U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 7U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 7U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 7U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 7U)))))) 
              << 7U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 8U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 8U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 8U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 8U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 8U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 8U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 8U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 8U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 8U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 8U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 8U)))))) 
              << 8U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 9U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 9U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 9U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 9U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 9U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 9U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 9U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 9U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 9U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 9U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 9U)))))) 
              << 9U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xaU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xaU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xaU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xaU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xaU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0xaU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xaU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xaU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0xaU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xaU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xaU)))))) 
              << 0xaU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xbU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xbU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xbU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xbU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xbU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0xbU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xbU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xbU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0xbU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xbU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xbU)))))) 
              << 0xbU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xcU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xcU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xcU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xcU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xcU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0xcU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xcU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xcU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0xcU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xcU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xcU)))))) 
              << 0xcU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xdU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xdU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xdU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xdU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xdU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0xdU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xdU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xdU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0xdU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xdU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xdU)))))) 
              << 0xdU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xeU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xeU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xeU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xeU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xeU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0xeU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xeU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xeU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0xeU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xeU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xeU)))))) 
              << 0xeU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xfU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xfU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xfU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xfU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xfU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0xfU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xfU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xfU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0xfU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xfU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0xfU)))))) 
              << 0xfU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x10U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x10U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x10U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x10U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x10U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x10U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x10U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x10U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x10U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x10U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x10U)))))) 
              << 0x10U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x11U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x11U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x11U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x11U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x11U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x11U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x11U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x11U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x11U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x11U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x11U)))))) 
              << 0x11U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x12U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x12U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x12U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x12U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x12U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x12U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x12U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x12U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x12U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x12U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x12U)))))) 
              << 0x12U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x13U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x13U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x13U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x13U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x13U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x13U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x13U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x13U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x13U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x13U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x13U)))))) 
              << 0x13U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x14U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x14U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x14U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x14U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x14U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x14U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x14U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x14U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x14U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x14U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x14U)))))) 
              << 0x14U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x15U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x15U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x15U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x15U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x15U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x15U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x15U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x15U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x15U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x15U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x15U)))))) 
              << 0x15U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x16U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x16U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x16U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x16U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x16U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x16U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x16U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x16U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x16U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x16U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x16U)))))) 
              << 0x16U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x17U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x17U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x17U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x17U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x17U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x17U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x17U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x17U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x17U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x17U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x17U)))))) 
              << 0x17U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x18U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x18U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x18U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x18U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x18U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x18U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x18U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x18U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x18U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x18U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x18U)))))) 
              << 0x18U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x19U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x19U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x19U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x19U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x19U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x19U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x19U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x19U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x19U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x19U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x19U)))))) 
              << 0x19U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1aU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1aU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1aU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1aU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1aU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x1aU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1aU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1aU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x1aU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1aU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1bU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1bU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1bU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1bU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1bU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x1bU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1bU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1bU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x1bU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1bU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1cU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1cU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1cU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1cU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1cU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x1cU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1cU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1cU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x1cU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1cU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1dU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1dU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1dU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1dU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1dU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x1dU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1dU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1dU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x1dU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1dU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1eU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1eU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1eU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1eU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1eU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x1eU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1eU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1eU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x1eU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1eU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1fU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1fU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1fU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1fU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1fU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                >> 0x1fU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1fU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1fU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               >> 0x1fU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1fU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                           >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x20U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x20U)))) 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x20U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x20U))) 
                                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x20U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x20U)))) 
                                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x20U))) 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]))))) 
              << 0x20U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x21U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x21U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 1U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x21U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x21U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 1U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x21U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x21U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 1U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x21U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 1U)))))) 
              << 0x21U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x22U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x22U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 2U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x22U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x22U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 2U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x22U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x22U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 2U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x22U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 2U)))))) 
              << 0x22U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x23U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x23U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 3U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x23U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x23U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 3U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x23U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x23U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 3U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x23U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 3U)))))) 
              << 0x23U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x24U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x24U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 4U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x24U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x24U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 4U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x24U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x24U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 4U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x24U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 4U)))))) 
              << 0x24U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x25U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x25U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 5U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x25U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x25U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 5U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x25U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x25U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 5U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x25U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 5U)))))) 
              << 0x25U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x26U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x26U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 6U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x26U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x26U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 6U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x26U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x26U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 6U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x26U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 6U)))))) 
              << 0x26U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x27U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x27U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 7U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x27U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x27U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 7U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x27U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x27U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 7U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x27U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 7U)))))) 
              << 0x27U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x28U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x28U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 8U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x28U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x28U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 8U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x28U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x28U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 8U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x28U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 8U)))))) 
              << 0x28U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x29U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x29U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 9U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x29U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x29U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 9U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x29U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x29U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 9U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x29U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 9U)))))) 
              << 0x29U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2aU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2aU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xaU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2aU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2aU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0xaU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2aU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2aU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0xaU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2aU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xaU)))))) 
              << 0x2aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2bU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2bU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xbU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2bU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2bU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0xbU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2bU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2bU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0xbU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2bU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xbU)))))) 
              << 0x2bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2cU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2cU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xcU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2cU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2cU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0xcU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2cU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2cU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0xcU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2cU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xcU)))))) 
              << 0x2cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2dU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2dU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xdU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2dU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2dU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0xdU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2dU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2dU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0xdU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2dU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xdU)))))) 
              << 0x2dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2eU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2eU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xeU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2eU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2eU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0xeU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2eU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2eU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0xeU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2eU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xeU)))))) 
              << 0x2eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2fU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2fU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xfU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2fU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2fU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0xfU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2fU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2fU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0xfU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2fU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0xfU)))))) 
              << 0x2fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x30U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x30U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x10U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x30U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x30U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x10U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x30U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x30U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x10U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x30U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x10U)))))) 
              << 0x30U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x31U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x31U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x11U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x31U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x31U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x11U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x31U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x31U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x11U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x31U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x11U)))))) 
              << 0x31U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x32U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x32U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x12U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x32U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x32U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x12U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x32U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x32U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x12U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x32U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x12U)))))) 
              << 0x32U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x33U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x33U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x13U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x33U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x33U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x13U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x33U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x33U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x13U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x33U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x13U)))))) 
              << 0x33U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x34U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x34U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x14U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x34U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x34U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x14U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x34U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x34U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x14U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x34U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x14U)))))) 
              << 0x34U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x35U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x35U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x15U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x35U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x35U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x15U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x35U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x35U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x15U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x35U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x15U)))))) 
              << 0x35U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x36U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x36U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x16U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x36U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x36U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x16U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x36U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x36U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x16U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x36U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x16U)))))) 
              << 0x36U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x37U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x37U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x17U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x37U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x37U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x17U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x37U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x37U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x17U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x37U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x17U)))))) 
              << 0x37U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x38U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x38U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x18U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x38U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x38U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x18U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x38U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x38U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x18U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x38U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x18U)))))) 
              << 0x38U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x39U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x39U)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x19U)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x39U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x39U))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x19U)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x39U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x39U)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x19U)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x39U))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x19U)))))) 
              << 0x39U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3aU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3aU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1aU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3aU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3aU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x1aU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3aU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3aU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x1aU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3aU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1aU)))))) 
              << 0x3aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3bU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3bU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1bU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3bU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3bU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x1bU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3bU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3bU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x1bU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3bU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1bU)))))) 
              << 0x3bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3cU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3cU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1cU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3cU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3cU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x1cU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3cU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3cU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x1cU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3cU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1cU)))))) 
              << 0x3cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3dU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3dU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1dU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3dU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3dU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x1dU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3dU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3dU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x1dU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3dU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1dU)))))) 
              << 0x3dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3eU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3eU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1eU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3eU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3eU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x1eU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3eU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3eU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x1eU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3eU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1eU)))))) 
              << 0x3eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3fU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3fU)))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1fU)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3fU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3fU))) 
                                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                >> 0x1fU)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3fU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3fU)))) 
                                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               >> 0x1fU)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3fU))) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1fU)))))) 
              << 0x3fU));
    __Vtableidx6 = (((IData)(vlSelf->top__DOT__dcache_write) 
                     << 0xaU) | (((IData)(vlSelf->top__DOT__dcache_read) 
                                  << 9U) | (((IData)(vlSelf->top__DOT__dcache__DOT__miss) 
                                             << 8U) 
                                            | ((((IData)(vlSelf->top__DOT__dcache__DOT__miss) 
                                                 & ((IData)(vlSelf->top__DOT__dcache__DOT__random)
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 
                                                                >> 0x36U))
                                                     : (IData)(
                                                               (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 
                                                                >> 0x36U)))) 
                                                << 7U) 
                                               | (((IData)(vlSelf->axi_1_aw_ready) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->axi_1_ar_ready) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->top__DOT__dcache__DOT__status)))))));
    vlSelf->top__DOT__dcache__DOT__next_status = Vtop__ConstPool__TABLE_f5bfe791_0
        [__Vtableidx6];
    vlSelf->top__DOT__dcache__DOT__cache_wen = (1U 
                                                & (~ 
                                                   ((((0U 
                                                       == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
                                                      & (IData)(vlSelf->top__DOT__dcache_write)) 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__hit)) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                                                       & (IData)(vlSelf->axi_1_r_valid)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (2U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
                     | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U])) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (4U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                              >> 1U)) << 2U) | (0xfffffffcU 
                                                & (((IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                             >> 1U)) 
                                                    << 2U) 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                      << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (8U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                              >> 2U)) << 3U) | (0xfffffff8U 
                                                & (((IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                             >> 2U)) 
                                                    << 3U) 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                      << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x10U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 3U)) << 4U) | (0xfffffff0U 
                                                   & (((IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                                >> 3U)) 
                                                       << 4U) 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                         << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x20U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 4U)) << 5U) | (0xffffffe0U 
                                                   & (((IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                                >> 4U)) 
                                                       << 5U) 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                         << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x40U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 5U)) << 6U) | (0xffffffc0U 
                                                   & (((IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                                >> 5U)) 
                                                       << 6U) 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                         << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x80U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 6U)) << 7U) | (0xffffff80U 
                                                   & (((IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                                >> 6U)) 
                                                       << 7U) 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                         << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x100U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 7U)) << 8U) | 
                        (0xffffff00U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                  >> 7U)) 
                                         << 8U) & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                   << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x200U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 8U)) << 9U) | 
                        (0xfffffe00U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                  >> 8U)) 
                                         << 9U) & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                   << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x400U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 9U)) << 0xaU) 
                        | (0xfffffc00U & (((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                    >> 9U)) 
                                           << 0xaU) 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                             << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x800U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 0xaU)) << 0xbU) 
                        | (0xfffff800U & (((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                    >> 0xaU)) 
                                           << 0xbU) 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                             << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0xbU)) << 0xcU) 
                         | (0xfffff000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0xbU)) 
                                            << 0xcU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0xcU)) << 0xdU) 
                         | (0xffffe000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0xcU)) 
                                            << 0xdU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0xdU)) << 0xeU) 
                         | (0xffffc000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0xdU)) 
                                            << 0xeU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0xeU)) << 0xfU) 
                         | (0xffff8000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0xeU)) 
                                            << 0xfU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x10000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0xfU)) << 0x10U) 
                          | (0xffff0000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0xfU)) 
                                             << 0x10U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x20000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0x10U)) << 0x11U) 
                          | (0xfffe0000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0x10U)) 
                                             << 0x11U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x40000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0x11U)) << 0x12U) 
                          | (0xfffc0000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0x11U)) 
                                             << 0x12U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x80000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0x12U)) << 0x13U) 
                          | (0xfff80000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0x12U)) 
                                             << 0x13U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x100000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x13U)) << 0x14U) 
                           | (0xfff00000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x13U)) 
                                              << 0x14U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x200000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x14U)) << 0x15U) 
                           | (0xffe00000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x14U)) 
                                              << 0x15U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x400000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x15U)) << 0x16U) 
                           | (0xffc00000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x15U)) 
                                              << 0x16U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x800000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x16U)) << 0x17U) 
                           | (0xff800000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x16U)) 
                                              << 0x17U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x1000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x17U)) << 0x18U) 
                            | (0xff000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x17U)) 
                                               << 0x18U) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x2000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x18U)) << 0x19U) 
                            | (0xfe000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x18U)) 
                                               << 0x19U) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x4000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x19U)) << 0x1aU) 
                            | (0xfc000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x19U)) 
                                               << 0x1aU) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x8000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x1aU)) << 0x1bU) 
                            | (0xf8000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x1aU)) 
                                               << 0x1bU) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x10000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x1bU)) << 0x1cU) 
                             | (0xf0000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x1bU)) 
                                                << 0x1cU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x20000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x1cU)) << 0x1dU) 
                             | (0xe0000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x1cU)) 
                                                << 0x1dU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x40000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x1dU)) << 0x1eU) 
                             | (0xc0000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x1dU)) 
                                                << 0x1eU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U]) 
           | (0x80000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x1eU)) << 0x1fU) 
                             | (0x80000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x1eU)) 
                                                << 0x1fU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                             >> 0x1fU)) | ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                    >> 0x1fU)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
                                              >> 0x1fU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (2U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                              >> 0x20U)) | ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0x20U)) 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U])) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (4U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                              >> 0x21U)) << 2U) | (0xfffffffcU 
                                                   & (((IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                                >> 0x21U)) 
                                                       << 2U) 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                         << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (8U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                              >> 0x22U)) << 3U) | (0xfffffff8U 
                                                   & (((IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                                >> 0x22U)) 
                                                       << 3U) 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                         << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x10U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 0x23U)) << 4U) 
                       | (0xfffffff0U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                   >> 0x23U)) 
                                          << 4U) & 
                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                          << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x20U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 0x24U)) << 5U) 
                       | (0xffffffe0U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                   >> 0x24U)) 
                                          << 5U) & 
                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                          << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x40U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 0x25U)) << 6U) 
                       | (0xffffffc0U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                   >> 0x25U)) 
                                          << 6U) & 
                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                          << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x80U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                 >> 0x26U)) << 7U) 
                       | (0xffffff80U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                   >> 0x26U)) 
                                          << 7U) & 
                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                          << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x100U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 0x27U)) << 8U) 
                        | (0xffffff00U & (((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                    >> 0x27U)) 
                                           << 8U) & 
                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x200U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 0x28U)) << 9U) 
                        | (0xfffffe00U & (((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                    >> 0x28U)) 
                                           << 9U) & 
                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x400U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 0x29U)) << 0xaU) 
                        | (0xfffffc00U & (((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                    >> 0x29U)) 
                                           << 0xaU) 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                             << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x800U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                  >> 0x2aU)) << 0xbU) 
                        | (0xfffff800U & (((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                    >> 0x2aU)) 
                                           << 0xbU) 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                             << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0x2bU)) << 0xcU) 
                         | (0xfffff000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0x2bU)) 
                                            << 0xcU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0x2cU)) << 0xdU) 
                         | (0xffffe000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0x2cU)) 
                                            << 0xdU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0x2dU)) << 0xeU) 
                         | (0xffffc000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0x2dU)) 
                                            << 0xeU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                   >> 0x2eU)) << 0xfU) 
                         | (0xffff8000U & (((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                     >> 0x2eU)) 
                                            << 0xfU) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                              << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x10000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0x2fU)) << 0x10U) 
                          | (0xffff0000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0x2fU)) 
                                             << 0x10U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x20000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0x30U)) << 0x11U) 
                          | (0xfffe0000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0x30U)) 
                                             << 0x11U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x40000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0x31U)) << 0x12U) 
                          | (0xfffc0000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0x31U)) 
                                             << 0x12U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x80000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                    >> 0x32U)) << 0x13U) 
                          | (0xfff80000U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                      >> 0x32U)) 
                                             << 0x13U) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                               << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x100000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x33U)) << 0x14U) 
                           | (0xfff00000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x33U)) 
                                              << 0x14U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x200000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x34U)) << 0x15U) 
                           | (0xffe00000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x34U)) 
                                              << 0x15U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x400000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x35U)) << 0x16U) 
                           | (0xffc00000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x35U)) 
                                              << 0x16U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x800000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                     >> 0x36U)) << 0x17U) 
                           | (0xff800000U & (((IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                       >> 0x36U)) 
                                              << 0x17U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x1000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x37U)) << 0x18U) 
                            | (0xff000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x37U)) 
                                               << 0x18U) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x2000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x38U)) << 0x19U) 
                            | (0xfe000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x38U)) 
                                               << 0x19U) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x4000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x39U)) << 0x1aU) 
                            | (0xfc000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x39U)) 
                                               << 0x1aU) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x8000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                      >> 0x3aU)) << 0x1bU) 
                            | (0xf8000000U & (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                        >> 0x3aU)) 
                                               << 0x1bU) 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x10000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x3bU)) << 0x1cU) 
                             | (0xf0000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x3bU)) 
                                                << 0x1cU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x20000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x3cU)) << 0x1dU) 
                             | (0xe0000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x3cU)) 
                                                << 0x1dU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x40000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x3dU)) << 0x1eU) 
                             | (0xc0000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x3dU)) 
                                                << 0x1eU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U]) 
           | (0x80000000U & (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                                       >> 0x3eU)) << 0x1fU) 
                             | (0x80000000U & (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                         >> 0x3eU)) 
                                                << 0x1fU) 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                                  << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[2U] 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x3fU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x3fU)) 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
                                           >> 0x1fU))));
    __Vtableidx4 = ((0x200U & ((~ (IData)(vlSelf->jup)) 
                               << 9U)) | (((IData)(vlSelf->top__DOT__icache__DOT__miss) 
                                           << 8U) | 
                                          ((((IData)(vlSelf->top__DOT__icache__DOT__miss) 
                                             & ((IData)(vlSelf->top__DOT__icache__DOT__random)
                                                 ? (IData)(
                                                           (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                            >> 0x36U))
                                                 : (IData)(
                                                           (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                            >> 0x36U)))) 
                                            << 7U) 
                                           | (((IData)(vlSelf->axi_0_aw_ready) 
                                               << 6U) 
                                              | (((IData)(vlSelf->axi_0_ar_ready) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->top__DOT__icache__DOT__status))))));
    vlSelf->top__DOT__icache__DOT__next_status = Vtop__ConstPool__TABLE_936305f9_0
        [__Vtableidx4];
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache0__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | (IData)(vlSelf->top__DOT__icache__DOT__cache_sel)));
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache1__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | ((IData)(vlSelf->top__DOT__icache__DOT__cache_sel) 
                    >> 1U)));
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache2__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | ((IData)(vlSelf->top__DOT__icache__DOT__cache_sel) 
                    >> 2U)));
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache3__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | ((IData)(vlSelf->top__DOT__icache__DOT__cache_sel) 
                    >> 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp3102, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3103, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3106, VL_DIV_QQQ(64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3107, VL_DIVS_QQQ(64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3112, vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_out_h);
    VL_EXTEND_WQ(65,64, __Vtemp3113, vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_out_h);
    VL_EXTEND_WQ(65,64, __Vtemp3116, vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_out_h);
    __Vtemp3120[0U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[0U] 
                        << 1U) | (1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                >> 0x1eU))));
    __Vtemp3120[1U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[0U] 
                        >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[1U] 
                                     << 1U));
    __Vtemp3120[2U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[1U] 
                        >> 0x1fU) | (0xeU & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__w1__c[2U] 
                                             << 1U)));
    VL_EXTEND_WW(132,68, __Vtemp3121, __Vtemp3120);
    VL_EXTEND_WI(132,1, __Vtemp3122, (1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                    >> 0x1fU))));
    VL_EXTEND_WQ(65,64, __Vtemp3123, (((((QData)((IData)(
                                                         __Vtemp3121[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp3121[0U]))) 
                                       + (((QData)((IData)(
                                                           vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__s[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__s[0U])))) 
                                      + (((QData)((IData)(
                                                          __Vtemp3122[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp3122[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp3133, vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s);
    VL_EXTEND_WQ(65,64, __Vtemp3143, ((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))
                                       ? VL_SHIFTRS_QQQ(64,64,64, 
                                                        VL_EXTENDS_QI(64,32, (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)), 
                                                        (0x3fULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel))
                                       : VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, 
                                                       (0x3fULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel))));
    VL_EXTEND_WQ(65,64, __Vtemp3152, (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3153, (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                      | vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3156, VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3157, (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                      ^ vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3162, ((vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                       < vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                       ? 1ULL : 0ULL));
    VL_EXTEND_WQ(65,64, __Vtemp3163, (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu__DOT__alu_in1_w1, vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                       ? 1ULL : 0ULL));
    VL_EXTEND_WQ(65,64, __Vtemp3166, VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel));
    VL_EXTEND_WQ(65,64, __Vtemp3167, vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s);
    if ((0x10U & (IData)(vlSelf->top__DOT__alu_opcode))) {
        __Vtemp3177[0U] = ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
                            ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3102[0U]
                                        : __Vtemp3103[0U])
                                    : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3106[0U]
                                        : __Vtemp3107[0U]))
                                : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3112[0U]
                                        : __Vtemp3113[0U])
                                    : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3116[0U]
                                        : __Vtemp3123[0U])))
                            : ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? 0U : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 0U
                                                  : 
                                                 __Vtemp3133[0U]))));
        __Vtemp3177[1U] = ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
                            ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3102[1U]
                                        : __Vtemp3103[1U])
                                    : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3106[1U]
                                        : __Vtemp3107[1U]))
                                : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3112[1U]
                                        : __Vtemp3113[1U])
                                    : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3116[1U]
                                        : __Vtemp3123[1U])))
                            : ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? 0U : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 0U
                                                  : 
                                                 __Vtemp3133[1U]))));
        __Vtemp3177[2U] = ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
                            ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3102[2U]
                                        : __Vtemp3103[2U])
                                    : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3106[2U]
                                        : __Vtemp3107[2U]))
                                : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3112[2U]
                                        : __Vtemp3113[2U])
                                    : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? __Vtemp3116[2U]
                                        : __Vtemp3123[2U])))
                            : ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? 0U : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 0U
                                                  : 
                                                 __Vtemp3133[2U]))));
    } else {
        __Vtemp3177[0U] = ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
                            ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                             ? __Vtemp3143[0U]
                                             : 0U))
                                : 0U) : ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                          ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3152[0U]
                                                  : 
                                                 __Vtemp3153[0U])
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3156[0U]
                                                  : 
                                                 __Vtemp3157[0U]))
                                          : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3162[0U]
                                                  : 
                                                 __Vtemp3163[0U])
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3166[0U]
                                                  : 
                                                 __Vtemp3167[0U]))));
        __Vtemp3177[1U] = ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
                            ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                             ? __Vtemp3143[1U]
                                             : 0U))
                                : 0U) : ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                          ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3152[1U]
                                                  : 
                                                 __Vtemp3153[1U])
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3156[1U]
                                                  : 
                                                 __Vtemp3157[1U]))
                                          : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3162[1U]
                                                  : 
                                                 __Vtemp3163[1U])
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3166[1U]
                                                  : 
                                                 __Vtemp3167[1U]))));
        __Vtemp3177[2U] = ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
                            ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                             ? __Vtemp3143[2U]
                                             : 0U))
                                : 0U) : ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                          ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3152[2U]
                                                  : 
                                                 __Vtemp3153[2U])
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3156[2U]
                                                  : 
                                                 __Vtemp3157[2U]))
                                          : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3162[2U]
                                                  : 
                                                 __Vtemp3163[2U])
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 __Vtemp3166[2U]
                                                  : 
                                                 __Vtemp3167[2U]))));
    }
    vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r[0U] 
        = __Vtemp3177[0U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r[1U] 
        = __Vtemp3177[1U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r[2U] 
        = __Vtemp3177[2U];
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
    if ((0U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((0x10U == (IData)(vlSelf->top__DOT__icache__DOT__next_status))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 2U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    } else if ((2U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 3U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    } else if ((3U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 4U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    } else if ((4U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 0U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    }
}

void Vtop___024root___combo__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__25(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__27(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__29(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__30(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__32(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__33(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__34(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__35(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__36(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__37(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__38(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__39(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__40(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__41(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__42(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__43(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__44(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__45(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__46(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__47(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__48(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__24(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->uart_get)) & (IData)(vlSelf->__Vclklast__TOP__uart_get)))) {
        Vtop___024root___sequent__TOP__26(vlSelf);
    }
    Vtop___024root___combo__TOP__27(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__28(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop___024root___sequent__TOP__29(vlSelf);
        Vtop___024root___sequent__TOP__30(vlSelf);
        Vtop___024root___sequent__TOP__31(vlSelf);
        Vtop___024root___sequent__TOP__32(vlSelf);
        Vtop___024root___sequent__TOP__33(vlSelf);
        Vtop___024root___sequent__TOP__34(vlSelf);
        Vtop___024root___sequent__TOP__35(vlSelf);
        Vtop___024root___sequent__TOP__36(vlSelf);
        Vtop___024root___sequent__TOP__37(vlSelf);
        Vtop___024root___sequent__TOP__38(vlSelf);
        Vtop___024root___sequent__TOP__39(vlSelf);
        Vtop___024root___sequent__TOP__40(vlSelf);
        Vtop___024root___sequent__TOP__41(vlSelf);
        Vtop___024root___sequent__TOP__42(vlSelf);
        Vtop___024root___sequent__TOP__43(vlSelf);
        Vtop___024root___sequent__TOP__44(vlSelf);
        Vtop___024root___sequent__TOP__45(vlSelf);
        Vtop___024root___sequent__TOP__46(vlSelf);
        Vtop___024root___sequent__TOP__47(vlSelf);
        Vtop___024root___sequent__TOP__48(vlSelf);
        Vtop___024root___sequent__TOP__49(vlSelf);
    }
    Vtop___024root___combo__TOP__50(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__uart_get = vlSelf->uart_get;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0]) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1]) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[2]));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0]) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1]) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[2]))) VL_DBG_MSGF("        CHANGE: /home/lixinbao/ysyx-workbench/npc/vsrc/add.v:11: top.exu.aluf.add.c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U] 
        = vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U] 
        = vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__exu__DOT__aluf__DOT__add__DOT__c[2U] 
        = vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c[2U];
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->uart_get & 0xfeU))) {
        Verilated::overWidthError("uart_get");}
    if (VL_UNLIKELY((vlSelf->axi_0_ar_ready & 0xfeU))) {
        Verilated::overWidthError("axi_0_ar_ready");}
    if (VL_UNLIKELY((vlSelf->axi_0_r_valid & 0xfeU))) {
        Verilated::overWidthError("axi_0_r_valid");}
    if (VL_UNLIKELY((vlSelf->axi_0_r_id & 0xf0U))) {
        Verilated::overWidthError("axi_0_r_id");}
    if (VL_UNLIKELY((vlSelf->axi_0_r_last & 0xfeU))) {
        Verilated::overWidthError("axi_0_r_last");}
    if (VL_UNLIKELY((vlSelf->axi_0_r_resp & 0xfcU))) {
        Verilated::overWidthError("axi_0_r_resp");}
    if (VL_UNLIKELY((vlSelf->axi_0_aw_ready & 0xfeU))) {
        Verilated::overWidthError("axi_0_aw_ready");}
    if (VL_UNLIKELY((vlSelf->axi_0_w_ready & 0xfeU))) {
        Verilated::overWidthError("axi_0_w_ready");}
    if (VL_UNLIKELY((vlSelf->axi_0_b_valid & 0xfeU))) {
        Verilated::overWidthError("axi_0_b_valid");}
    if (VL_UNLIKELY((vlSelf->axi_0_b_resp & 0xfcU))) {
        Verilated::overWidthError("axi_0_b_resp");}
    if (VL_UNLIKELY((vlSelf->axi_0_b_id & 0xf0U))) {
        Verilated::overWidthError("axi_0_b_id");}
    if (VL_UNLIKELY((vlSelf->axi_1_ar_ready & 0xfeU))) {
        Verilated::overWidthError("axi_1_ar_ready");}
    if (VL_UNLIKELY((vlSelf->axi_1_r_valid & 0xfeU))) {
        Verilated::overWidthError("axi_1_r_valid");}
    if (VL_UNLIKELY((vlSelf->axi_1_r_id & 0xf0U))) {
        Verilated::overWidthError("axi_1_r_id");}
    if (VL_UNLIKELY((vlSelf->axi_1_r_last & 0xfeU))) {
        Verilated::overWidthError("axi_1_r_last");}
    if (VL_UNLIKELY((vlSelf->axi_1_r_resp & 0xfcU))) {
        Verilated::overWidthError("axi_1_r_resp");}
    if (VL_UNLIKELY((vlSelf->axi_1_aw_ready & 0xfeU))) {
        Verilated::overWidthError("axi_1_aw_ready");}
    if (VL_UNLIKELY((vlSelf->axi_1_w_ready & 0xfeU))) {
        Verilated::overWidthError("axi_1_w_ready");}
    if (VL_UNLIKELY((vlSelf->axi_1_b_valid & 0xfeU))) {
        Verilated::overWidthError("axi_1_b_valid");}
    if (VL_UNLIKELY((vlSelf->axi_1_b_resp & 0xfcU))) {
        Verilated::overWidthError("axi_1_b_resp");}
    if (VL_UNLIKELY((vlSelf->axi_1_b_id & 0xf0U))) {
        Verilated::overWidthError("axi_1_b_id");}
}
#endif  // VL_DEBUG
