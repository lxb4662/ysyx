// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__29(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__29\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w63__a 
        = (((QData)((IData)(((0x80000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U]) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                >> 1U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   >> 2U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          >> 3U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           >> 4U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              >> 5U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 >> 6U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    >> 7U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       >> 8U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 9U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 0xaU)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 0xbU)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 0xcU)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 0xdU)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 0xeU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 0x10U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0x11U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x1dU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x1eU)) 
                                                                                | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                      >> 0x1fU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w62__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 1U)) 
                             | ((0x40000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U]) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   >> 1U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          >> 2U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           >> 3U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              >> 4U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 >> 5U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    >> 6U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       >> 7U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 8U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 9U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 0xaU)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 0xbU)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 0xcU)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 0xdU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 0xeU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 0xfU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0x10U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x1eU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x1eU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w61__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 2U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 1U)) 
                                | ((0x20000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U]) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          >> 1U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           >> 2U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              >> 3U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 >> 4U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    >> 5U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       >> 6U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 7U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 8U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 9U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 0xaU)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 0xbU)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 0xcU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 0xdU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 0xeU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0xfU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x1dU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x1dU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w60__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 3U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 2U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 1U)) 
                                   | ((0x10000000U 
                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U]) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             >> 1U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                >> 2U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   >> 3U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      >> 4U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         >> 5U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            >> 6U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               >> 7U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  >> 8U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     >> 9U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        >> 0xaU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           >> 0xbU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              >> 0xcU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                >> 0xdU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x1bU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x1cU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x1cU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w59__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 4U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 3U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 2U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 1U)) | 
                                      ((0x8000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U]) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              >> 1U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 >> 2U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    >> 3U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       >> 4U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 5U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 6U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 7U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 8U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 9U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 0xaU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 0xbU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0xdU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x18U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x1aU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x1bU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x1bU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w58__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 5U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 4U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 3U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 2U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 1U)) 
                                       | ((0x4000000U 
                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U]) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 >> 1U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    >> 2U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       >> 3U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 4U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 5U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 6U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 7U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 8U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 9U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 0xaU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0xcU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x18U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x1aU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x1aU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w57__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 6U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 5U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 4U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 3U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 2U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              << 1U)) 
                                          | ((0x2000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U]) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    >> 1U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       >> 2U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 3U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 4U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 5U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 6U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 7U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 8U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 9U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 0xaU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x18U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x19U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w56__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 7U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 6U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 5U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 4U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 3U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              << 2U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 << 1U)) 
                                             | ((0x1000000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U]) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       >> 1U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 2U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 3U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 4U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 5U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 6U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 7U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 8U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 9U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 0xaU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x17U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x18U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x18U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w55__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 8U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 7U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 6U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 5U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 4U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              << 3U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 << 2U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    << 1U)) 
                                                | ((0x800000U 
                                                    & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U]) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          >> 1U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 2U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 3U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 4U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 5U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 6U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 7U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 8U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 9U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x16U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x17U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x17U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w54__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 9U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 8U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 7U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 6U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 5U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              << 4U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 << 3U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    << 2U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       << 1U)) 
                                                   | ((0x400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U]) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             >> 1U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 2U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 3U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 4U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 5U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 6U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 7U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 8U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x16U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x16U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w53__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0xaU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 9U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 8U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 7U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 6U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              << 5U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 << 4U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    << 3U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       << 2U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          << 1U)) 
                                                      | ((0x200000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U]) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                >> 1U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 2U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 3U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 4U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 5U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 6U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 7U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x15U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x15U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w52__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0xbU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0xaU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 9U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 8U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 7U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              << 6U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 << 5U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    << 4U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       << 3U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          << 2U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             << 1U)) 
                                                         | ((0x100000U 
                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U]) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                   >> 1U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 2U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 3U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 4U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 5U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 6U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x14U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w51__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0xcU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0xbU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0xaU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 9U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                           << 8U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                              << 7U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                 << 6U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                    << 5U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                       << 4U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                          << 3U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                             << 2U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                << 1U)) 
                                                            | ((0x80000U 
                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U]) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                      >> 1U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                         >> 2U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                            >> 3U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                               >> 4U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 5U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x12U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x13U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x13U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w50__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0xdU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0xcU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0xbU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0xaU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 9U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 8U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 7U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 6U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 5U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 4U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 3U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 2U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 1U)) 
                                                                 | ((0x40000U 
                                                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U]) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           >> 1U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              >> 2U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                >> 3U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x12U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x12U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w49__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0xeU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0xdU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0xcU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0xbU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0xaU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 9U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 8U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 7U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 6U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 5U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 4U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 3U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 2U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 1U)) 
                                                                    | ((0x20000U 
                                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U]) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              >> 1U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                >> 2U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x11U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x11U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w48__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0xfU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0xeU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0xdU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0xcU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0xbU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0xaU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 9U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 8U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 7U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 6U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 5U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 4U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 3U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 2U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 1U)) 
                                                                       | ((0x10000U 
                                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U]) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                >> 1U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0x10U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0x10U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w0__a 
        = (((QData)((IData)(((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                              << 0x1fU) | ((0x40000000U 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U])))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U]))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w1__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x1eU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x1dU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x1cU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x1bU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x1aU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x19U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x18U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x17U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0x16U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0x15U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0x14U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0x13U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0x12U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0x11U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 0x10U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 0xfU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 0xeU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U]) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 1U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 1U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w2__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x1dU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x1cU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x1bU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x1aU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x19U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x18U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x16U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0x15U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0x14U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0x13U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0x12U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0x11U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0x10U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 0xfU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 0xeU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 0xdU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U]) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 2U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 2U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w3__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x1cU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x1bU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x1aU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x19U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x18U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x17U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x16U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x15U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0x14U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0x13U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0x12U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0x11U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0x10U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0xfU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 0xeU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 0xdU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 0xcU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 3U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 3U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w4__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x1bU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x1aU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x19U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x18U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x17U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x16U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x15U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x14U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0x13U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0x12U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0x11U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0x10U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0xfU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0xeU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 0xdU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 0xcU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 0xbU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U]) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 4U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 4U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w5__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x1aU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x19U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x18U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x17U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x16U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x15U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x14U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x13U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0x12U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0x11U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0x10U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0xfU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0xeU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0xdU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 0xcU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 0xbU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 0xaU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 5U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 5U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w6__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x19U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x18U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x17U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x16U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x14U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x13U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x12U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0x11U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0x10U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0xfU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0xeU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0xdU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0xcU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 0xbU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 0xaU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 9U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U]) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 6U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 6U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w7__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x18U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x17U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x16U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x15U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x14U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x12U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x11U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0x10U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0xfU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0xeU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0xdU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0xcU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0xbU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 0xaU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 9U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 8U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 7U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 7U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w8__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x17U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x16U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x15U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x14U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x13U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x12U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x11U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0x10U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0xfU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0xeU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0xdU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0xcU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0xbU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 0xaU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 9U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 8U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 7U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U]) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 5U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 8U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 8U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w9__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x16U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x15U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x14U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x12U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x11U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0x10U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0xfU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0xeU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0xdU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0xcU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0xbU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 0xaU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 9U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 8U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 7U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 6U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 9U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 9U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w10__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x15U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x14U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x13U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x12U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x11U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0x10U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0xfU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0xeU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0xdU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0xcU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0xbU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 0xaU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 9U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 8U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 7U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 6U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 5U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 6U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 7U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0xaU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0xaU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w11__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x14U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x13U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x12U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x11U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0x10U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0xfU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0xeU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0xdU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0xcU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0xbU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 0xaU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 9U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 8U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 7U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 6U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 5U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 4U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U]) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0xbU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0xbU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w12__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x13U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x12U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x11U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0x10U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0xfU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0xeU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0xdU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0xcU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0xbU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 0xaU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 9U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 8U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 7U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 6U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 5U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 4U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 3U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0xcU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0xcU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w13__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x12U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x11U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0x10U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0xfU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0xeU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0xdU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0xcU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0xbU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 0xaU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 9U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 8U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 7U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 6U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 5U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 4U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 3U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 2U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                << 1U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U]) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0xcU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0xdU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0xdU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w14__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x11U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0x10U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0xfU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0xeU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0xdU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0xcU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0xbU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 0xaU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 9U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 8U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 7U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 6U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 5U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 4U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 3U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 2U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                << 1U)) 
                                                                             | ((0x4000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U]) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0xeU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0xeU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w15__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0x10U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0xfU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0xeU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0xdU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0xcU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0xbU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 0xaU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 9U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 8U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 7U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 6U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 5U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 4U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 3U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 2U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              << 1U)) 
                                                                          | ((0x8000U 
                                                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U]) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0xfU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w16__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0xfU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0xeU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0xdU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0xcU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0xbU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 0xaU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 9U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 8U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 7U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 6U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 5U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 4U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 3U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 2U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           << 1U)) 
                                                                       | ((0x10000U 
                                                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U]) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                >> 1U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x10U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x10U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w17__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0xeU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0xdU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0xcU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0xbU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 0xaU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 9U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 8U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 7U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 6U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 5U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 4U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 3U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 2U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        << 1U)) 
                                                                    | ((0x20000U 
                                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U]) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              >> 1U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                >> 2U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x11U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x11U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w18__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0xdU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0xcU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0xbU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 0xaU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             << 9U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                << 8U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   << 7U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      << 6U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         << 5U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            << 4U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               << 3U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  << 2U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     << 1U)) 
                                                                 | ((0x40000U 
                                                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U]) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           >> 1U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              >> 2U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                >> 3U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x12U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x12U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w19__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0xcU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0xbU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 0xaU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 9U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 8U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              << 7U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 << 6U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    << 5U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       << 4U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          << 3U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             << 2U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                << 1U)) 
                                                            | ((0x80000U 
                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U]) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 1U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 2U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 3U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 4U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 5U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x12U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x13U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x13U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w20__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0xbU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 0xaU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 9U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 8U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 7U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              << 6U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 << 5U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    << 4U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       << 3U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          << 2U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             << 1U)) 
                                                         | ((0x100000U 
                                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U]) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 1U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 2U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 3U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 4U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 5U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 6U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x14U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w21__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 0xaU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 9U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 8U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 7U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 6U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              << 5U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 << 4U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    << 3U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       << 2U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          << 1U)) 
                                                      | ((0x200000U 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U]) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 1U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 2U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 3U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 4U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 5U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 6U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 7U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x15U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x15U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w22__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 9U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 8U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 7U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 6U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 5U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              << 4U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 << 3U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    << 2U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       << 1U)) 
                                                   | ((0x400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U]) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 1U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 2U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 3U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 4U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 5U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 6U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 7U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 8U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x16U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x16U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w23__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 8U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 7U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 6U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 5U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 4U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              << 3U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 << 2U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    << 1U)) 
                                                | ((0x800000U 
                                                    & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U]) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 1U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 2U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 3U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 4U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 5U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 6U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 7U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 8U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 9U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x16U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x17U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x17U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w24__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 7U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 6U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 5U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 4U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 3U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              << 2U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 << 1U)) 
                                             | ((0x1000000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U]) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       >> 1U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 2U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 3U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 4U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 5U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 6U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 7U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 8U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 9U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0xaU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x17U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x18U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x18U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w25__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 6U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 5U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 4U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 3U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 2U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              << 1U)) 
                                          | ((0x2000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U]) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    >> 1U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       >> 2U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 3U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 4U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 5U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 6U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 7U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 8U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 9U)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 0xaU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x18U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x19U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x19U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w26__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 5U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 4U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 3U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 2U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           << 1U)) 
                                       | ((0x4000000U 
                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U]) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 >> 1U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    >> 2U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       >> 3U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 4U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 5U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 6U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 7U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 8U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 9U)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 0xaU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0xcU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x18U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x1aU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x1aU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w27__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 4U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 3U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 2U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          << 1U)) | 
                                      ((0x8000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U]) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              >> 1U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 >> 2U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    >> 3U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       >> 4U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 5U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 6U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 7U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 8U)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 9U)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 0xaU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 0xbU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0xdU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x18U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x1aU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x1bU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x1bU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w28__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 3U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 2U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   << 1U)) 
                                   | ((0x10000000U 
                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U]) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                             >> 1U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                                >> 2U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                   >> 3U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                      >> 4U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                         >> 5U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                            >> 6U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                               >> 7U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                  >> 8U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                     >> 9U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                        >> 0xaU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                           >> 0xbU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                              >> 0xcU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                                >> 0xdU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x1bU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x1cU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x1cU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w29__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 2U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                << 1U)) 
                                | ((0x20000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U]) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          >> 1U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           >> 2U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              >> 3U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 >> 4U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    >> 5U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       >> 6U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 7U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 8U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 9U)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 0xaU)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 0xbU)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 0xcU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 0xdU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 0xeU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0xfU)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x1aU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x1dU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x1dU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w30__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U] 
                                             << 1U)) 
                             | ((0x40000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U]) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   >> 1U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          >> 2U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           >> 3U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              >> 4U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 >> 5U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    >> 6U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       >> 7U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 8U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 9U)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 0xaU)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 0xbU)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 0xcU)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 0xdU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 0xeU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 0xfU)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0x10U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x1bU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x1eU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                            >> 0x1eU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w31__a 
        = (((QData)((IData)(((0x80000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[0U]) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[0U] 
                                                >> 1U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[0U] 
                                                   >> 2U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[0U] 
                                          >> 3U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[0U] 
                                           >> 4U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[0U] 
                                              >> 5U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[0U] 
                                                 >> 6U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[0U] 
                                                    >> 7U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[0U] 
                                                       >> 8U)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[0U] 
                                                          >> 9U)) 
                                                      | ((0x200000U 
                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[0U] 
                                                             >> 0xaU)) 
                                                         | ((0x100000U 
                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[0U] 
                                                                >> 0xbU)) 
                                                            | ((0x80000U 
                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[0U] 
                                                                   >> 0xcU)) 
                                                               | ((0x40000U 
                                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[0U] 
                                                                      >> 0xdU)) 
                                                                  | ((0x20000U 
                                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[0U] 
                                                                         >> 0xeU)) 
                                                                     | ((0x10000U 
                                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[0U] 
                                                                            >> 0xfU)) 
                                                                        | ((0x8000U 
                                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[0U] 
                                                                               >> 0x10U)) 
                                                                           | ((0x4000U 
                                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[0U] 
                                                                                >> 0x11U)) 
                                                                              | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[0U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[0U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[0U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[0U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[0U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[0U] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[0U] 
                                                                                >> 0x1dU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[0U] 
                                                                                >> 0x1eU)) 
                                                                                | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[0U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[0U] 
                                      >> 0x1fU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w32__a 
        = (((QData)((IData)(((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                              << 0x1fU) | ((0x40000000U 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U])))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U]))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w33__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x1eU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x1dU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x1cU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x1bU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x1aU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x19U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x18U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x17U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0x16U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0x15U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0x14U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0x13U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0x12U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0x11U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 0x10U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 0xeU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U]) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 1U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w34__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x1dU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x1cU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x1bU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x1aU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x19U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x18U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x16U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0x15U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0x14U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0x13U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0x12U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0x11U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0x10U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 0xfU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 0xeU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 0xdU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U]) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 2U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 2U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w35__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x1cU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x1bU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x1aU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x19U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x18U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x17U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x16U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x15U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0x14U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0x13U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0x12U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0x11U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0x10U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0xfU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 0xeU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 0xdU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 0xcU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 3U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 3U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w36__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x1bU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x1aU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x19U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x18U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x17U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x16U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x15U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x14U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0x13U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0x12U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0x11U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0x10U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0xfU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0xeU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 0xdU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 0xcU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 0xbU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U]) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 4U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 4U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w37__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x1aU)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x19U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x18U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x17U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x16U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x15U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x14U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x13U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0x12U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0x11U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0x10U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0xfU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0xeU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0xdU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 0xcU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 0xbU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 0xaU)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 5U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 5U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w38__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x19U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x18U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x17U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x16U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x14U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x13U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x12U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0x11U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0x10U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0xfU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0xeU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0xdU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0xcU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 0xbU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 0xaU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 9U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U]) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 6U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 6U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w39__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x18U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x17U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x16U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x15U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x14U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x12U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x11U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0x10U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0xfU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0xeU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0xdU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0xcU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0xbU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 0xaU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 9U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 8U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 7U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 7U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w40__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x17U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x16U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x15U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x14U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x13U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x12U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x11U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0x10U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0xfU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0xeU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0xdU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0xcU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0xbU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 0xaU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 9U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 8U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 7U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U]) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 5U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 8U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 8U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w41__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x16U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x15U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x14U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x12U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x11U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0x10U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0xfU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0xeU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0xdU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0xcU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0xbU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 0xaU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 9U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 8U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 7U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 6U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 9U))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 9U)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w42__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x15U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x14U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x13U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x12U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x11U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0x10U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0xfU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0xeU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0xdU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0xcU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0xbU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 0xaU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 9U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 8U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 7U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 6U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 5U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 6U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 7U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0xaU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0xaU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w43__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x14U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x13U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x12U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x11U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0x10U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0xfU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0xeU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0xdU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0xcU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0xbU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 0xaU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 9U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 8U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 7U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 6U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 5U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 4U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U]) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0xbU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0xbU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w44__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x13U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x12U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x11U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0x10U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0xfU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0xeU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0xdU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0xcU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0xbU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 0xaU)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 9U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 8U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 7U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 6U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 5U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 4U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 3U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0xcU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0xcU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w45__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x12U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x11U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0x10U)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0xfU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0xeU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0xdU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0xcU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0xbU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 0xaU)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 9U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 8U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 7U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 6U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 5U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 4U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 3U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 2U)) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                << 1U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U]) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0xcU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0xdU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0xdU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w46__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x11U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0x10U)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0xfU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0xeU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0xdU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0xcU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0xbU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 0xaU)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 9U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 8U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 7U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 6U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 5U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 4U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 3U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 2U)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U] 
                                                                                << 1U)) 
                                                                             | ((0x4000U 
                                                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U]) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0xeU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0xeU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w47__a 
        = (((QData)((IData)(((0x80000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x0[1U] 
                                             << 0x10U)) 
                             | ((0x40000000U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x1[1U] 
                                                << 0xfU)) 
                                | ((0x20000000U & (
                                                   vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x2[1U] 
                                                   << 0xeU)) 
                                   | ((0x10000000U 
                                       & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x3[1U] 
                                          << 0xdU)) 
                                      | ((0x8000000U 
                                          & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x4[1U] 
                                             << 0xcU)) 
                                         | ((0x4000000U 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x5[1U] 
                                                << 0xbU)) 
                                            | ((0x2000000U 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x6[1U] 
                                                   << 0xaU)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x7[1U] 
                                                      << 9U)) 
                                                  | ((0x800000U 
                                                      & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x8[1U] 
                                                         << 8U)) 
                                                     | ((0x400000U 
                                                         & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x9[1U] 
                                                            << 7U)) 
                                                        | ((0x200000U 
                                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x10[1U] 
                                                               << 6U)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x11[1U] 
                                                                  << 5U)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x12[1U] 
                                                                     << 4U)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x13[1U] 
                                                                        << 3U)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x14[1U] 
                                                                           << 2U)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x15[1U] 
                                                                              << 1U)) 
                                                                          | ((0x8000U 
                                                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x16[1U]) 
                                                                             | ((0x4000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x17[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x18[1U] 
                                                                                >> 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x19[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x20[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x21[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x22[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x23[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x24[1U] 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x25[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x26[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x27[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x28[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x29[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x30[1U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x31[1U] 
                                                                                >> 0xfU))))))))))))))))))))))))))))))))))) 
            << 1U) | (QData)((IData)((1U & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__b1__DOT__p_x32[1U] 
                                            >> 0xfU)))));
    vlSelf->top__DOT__stage1__DOT__next_pc = ((IData)(vlSelf->top__DOT__pipe3_allowin_lsu)
                                               ? ((1U 
                                                   == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                                   ? vlSelf->top__DOT__jup_addr_c
                                                   : 
                                                  ((IData)(vlSelf->ecall)
                                                    ? vlSelf->top__DOT__mtvec_wire
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc)))
                                               : vlSelf->top__DOT__pc);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w131__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w131__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a) 
                     & (IData)((0ULL != (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    | (IData)((6ULL == (6ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (2U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                               >> 3U)) & (IData)((0ULL 
                                                  != 
                                                  (0x30ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                     | (IData)((0x30ULL == (0x30ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (4U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                               >> 6U)) & (IData)((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                     | (IData)((0x180ULL == (0x180ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (8U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                               >> 9U)) & (IData)((0ULL 
                                                  != 
                                                  (0xc00ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                     | (IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (0x10U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                  >> 0xcU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x6000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0x6000ULL == (0x6000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (0x20U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                  >> 0xfU)) & (IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x30000ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0x30000ULL == (0x30000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (0x40U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                  >> 0x12U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x180000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0x180000ULL == (0x180000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (0x80U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                  >> 0x15U)) & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0xc00000ULL 
                                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0xc00000ULL == (0xc00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (0x100U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                   >> 0x18U)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x6000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x6000000ULL == 
                                    (0x6000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (0x200U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                   >> 0x1bU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x30000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x30000000ULL == 
                                    (0x30000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__c_1)) 
           | (0x400U & ((((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a 
                                   >> 0x1eU)) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x180000000ULL 
                                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x180000000ULL 
                                    == (0x180000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        << 0xaU)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x7feU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (1U & ((((IData)((4ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                      | (IData)((2ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                     | (IData)((1ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    | (IData)((7ULL == (7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x7fdU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (2U & (((((IData)((0x20ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                       | (IData)((0x10ULL == (0x38ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                      | (IData)((8ULL == (0x38ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                     | (IData)((0x38ULL == (0x38ULL 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x7fbU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (4U & (((((IData)((0x100ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                       | (IData)((0x80ULL == (0x1c0ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                      | (IData)((0x40ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                     | (IData)((0x1c0ULL == (0x1c0ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x7f7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (8U & (((((IData)((0x800ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                       | (IData)((0x400ULL == (0xe00ULL 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                      | (IData)((0x200ULL == (0xe00ULL 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                     | (IData)((0xe00ULL == (0xe00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x7efU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (0x10U & (((((IData)((0x4000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                          | (IData)((0x2000ULL == (0x7000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x1000ULL == (0x7000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0x7000ULL == (0x7000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x7dfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (0x20U & (((((IData)((0x20000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                          | (IData)((0x10000ULL == 
                                     (0x38000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x8000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0x38000ULL == (0x38000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x7bfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (0x40U & (((((IData)((0x100000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                          | (IData)((0x80000ULL == 
                                     (0x1c0000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x40000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0x1c0000ULL == (0x1c0000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x77fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (0x80U & (((((IData)((0x800000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                          | (IData)((0x400000ULL == 
                                     (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x200000ULL == 
                                    (0xe00000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        | (IData)((0xe00000ULL == (0xe00000ULL 
                                                   & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                       << 7U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x6ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (0x100U & (((((IData)((0x4000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                           | (IData)((0x2000000ULL 
                                      == (0x7000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                          | (IData)((0x1000000ULL == 
                                     (0x7000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x7000000ULL == 
                                    (0x7000000ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        << 8U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x5ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (0x200U & (((((IData)((0x20000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                           | (IData)((0x10000000ULL 
                                      == (0x38000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                          | (IData)((0x8000000ULL == 
                                     (0x38000000ULL 
                                      & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x38000000ULL == 
                                    (0x38000000ULL 
                                     & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        << 9U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1 
        = ((0x3ffU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w130__DOT__s_1)) 
           | (0x400U & (((((IData)((0x100000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a))) 
                           | (IData)((0x80000000ULL 
                                      == (0x1c0000000ULL 
                                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                          | (IData)((0x40000000ULL 
                                     == (0x1c0000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                         | (IData)((0x1c0000000ULL 
                                    == (0x1c0000000ULL 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT____Vcellinp__w130__a)))) 
                        << 0xaU)));
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
}
