// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFMA.h for the primary calling header

#include "VFMA__pch.h"
#include "VFMA___024root.h"

VL_INLINE_OPT void VFMA___024root___ico_sequent__TOP__0(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->FMA__DOT__fmul1__DOT__mantissaProd = (0xffffffffffffULL 
                                                  & ((0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->var1)))) 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelf->var2))))));
    vlSelf->FMA__DOT__fmul1__DOT__expF = (0xffU & (
                                                   ((vlSelf->var1 
                                                     >> 0x17U) 
                                                    + 
                                                    (vlSelf->var2 
                                                     >> 0x17U)) 
                                                   - (IData)(0x7fU)));
    vlSelf->FMA__DOT__fmul1__DOT__mantissa = (0x7fffffU 
                                              & (IData)(
                                                        (vlSelf->FMA__DOT__fmul1__DOT__mantissaProd 
                                                         >> 0x19U)));
    vlSelf->FMA__DOT__fmul1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x17U, vlSelf->FMA__DOT__fmul1__DOT__i)) {
        if ((0x400000U & vlSelf->FMA__DOT__fmul1__DOT__mantissa)) {
            vlSelf->FMA__DOT__fmul1__DOT__i = 0x17U;
        } else {
            vlSelf->FMA__DOT__fmul1__DOT__mantissa 
                = (0x7fffffU & VL_SHIFTL_III(23,23,32, vlSelf->FMA__DOT__fmul1__DOT__mantissa, 1U));
            vlSelf->FMA__DOT__fmul1__DOT__expF = (0xffU 
                                                  & ((IData)(vlSelf->FMA__DOT__fmul1__DOT__expF) 
                                                     - (IData)(1U)));
            vlSelf->FMA__DOT__fmul1__DOT__mantissa 
                = ((0x7ffffeU & vlSelf->FMA__DOT__fmul1__DOT__mantissa) 
                   | (1U & (IData)((vlSelf->FMA__DOT__fmul1__DOT__mantissaProd 
                                    >> 0x18U))));
            vlSelf->FMA__DOT__fmul1__DOT__mantissaProd 
                = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->FMA__DOT__fmul1__DOT__mantissaProd, 1U));
        }
        vlSelf->FMA__DOT__fmul1__DOT__i = ((IData)(1U) 
                                           + vlSelf->FMA__DOT__fmul1__DOT__i);
    }
    vlSelf->FMA__DOT__fmul1__DOT__mantissa = (0x7fffffU 
                                              & VL_SHIFTL_III(23,23,32, vlSelf->FMA__DOT__fmul1__DOT__mantissa, 1U));
    vlSelf->FMA__DOT__fmul1__DOT__expF = (0xffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->FMA__DOT__fmul1__DOT__expF)));
    vlSelf->FMA__DOT__fmul1__DOT__mantissa = ((0x7ffffeU 
                                               & vlSelf->FMA__DOT__fmul1__DOT__mantissa) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->FMA__DOT__fmul1__DOT__mantissaProd 
                                                            >> 0x18U))));
    vlSelf->FMA__DOT__out = ((0x80000000U & (vlSelf->var1 
                                             ^ vlSelf->var2)) 
                             | (((IData)(vlSelf->FMA__DOT__fmul1__DOT__expF) 
                                 << 0x17U) | vlSelf->FMA__DOT__fmul1__DOT__mantissa));
    vlSelf->FMA__DOT__fadd1__DOT__finalSign = 0U;
    vlSelf->FMA__DOT__fadd1__DOT__largerMag = 0U;
    vlSelf->FMA__DOT__fadd1__DOT__num1Exp = (0xffU 
                                             & (vlSelf->FMA__DOT__out 
                                                >> 0x17U));
    vlSelf->FMA__DOT__fadd1__DOT__num2Exp = (0xffU 
                                             & (vlSelf->var3 
                                                >> 0x17U));
    vlSelf->FMA__DOT__fadd1__DOT__num1Mant = (0x800000U 
                                              | (0x7fffffU 
                                                 & vlSelf->FMA__DOT__out));
    vlSelf->FMA__DOT__fadd1__DOT__num2Mant = (0x800000U 
                                              | (0x7fffffU 
                                                 & vlSelf->var3));
    if (((IData)(vlSelf->FMA__DOT__fadd1__DOT__num1Exp) 
         < (IData)(vlSelf->FMA__DOT__fadd1__DOT__num2Exp))) {
        vlSelf->FMA__DOT__fadd1__DOT__finalExp = vlSelf->FMA__DOT__fadd1__DOT__num2Exp;
        vlSelf->FMA__DOT__fadd1__DOT__num1Mant = (0xffffffU 
                                                  & VL_SHIFTR_III(24,24,8, vlSelf->FMA__DOT__fadd1__DOT__num1Mant, 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->FMA__DOT__fadd1__DOT__finalExp) 
                                                                      - (IData)(vlSelf->FMA__DOT__fadd1__DOT__num2Exp)))));
        vlSelf->FMA__DOT__fadd1__DOT__largerMag = 1U;
    } else if (((IData)(vlSelf->FMA__DOT__fadd1__DOT__num2Exp) 
                < (IData)(vlSelf->FMA__DOT__fadd1__DOT__num1Exp))) {
        vlSelf->FMA__DOT__fadd1__DOT__finalExp = vlSelf->FMA__DOT__fadd1__DOT__num1Exp;
        vlSelf->FMA__DOT__fadd1__DOT__num2Mant = (0xffffffU 
                                                  & VL_SHIFTR_III(24,24,8, vlSelf->FMA__DOT__fadd1__DOT__num2Mant, 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->FMA__DOT__fadd1__DOT__finalExp) 
                                                                      - (IData)(vlSelf->FMA__DOT__fadd1__DOT__num2Exp)))));
        vlSelf->FMA__DOT__fadd1__DOT__largerMag = 0U;
    } else {
        vlSelf->FMA__DOT__fadd1__DOT__finalExp = vlSelf->FMA__DOT__fadd1__DOT__num1Exp;
        vlSelf->FMA__DOT__fadd1__DOT__largerMag = (vlSelf->FMA__DOT__fadd1__DOT__num2Mant 
                                                   > vlSelf->FMA__DOT__fadd1__DOT__num1Mant);
    }
    if (((vlSelf->FMA__DOT__out & vlSelf->var3) >> 0x1fU)) {
        vlSelf->FMA__DOT__fadd1__DOT__sumMants = (0x1ffffffU 
                                                  & (vlSelf->FMA__DOT__fadd1__DOT__num2Mant 
                                                     + vlSelf->FMA__DOT__fadd1__DOT__num1Mant));
        vlSelf->FMA__DOT__fadd1__DOT__finalExp = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->FMA__DOT__fadd1__DOT__finalExp)));
        vlSelf->FMA__DOT__fadd1__DOT__finalSign = 0U;
        vlSelf->FMA__DOT__fadd1__DOT__finalMant = (0xffffffU 
                                                   & (vlSelf->FMA__DOT__fadd1__DOT__sumMants 
                                                      >> 1U));
    } else if (((vlSelf->FMA__DOT__out >> 0x1fU) & 
                (~ (vlSelf->var3 >> 0x1fU)))) {
        vlSelf->FMA__DOT__fadd1__DOT__sumMants = (0x1ffffffU 
                                                  & (vlSelf->FMA__DOT__fadd1__DOT__num1Mant 
                                                     - vlSelf->FMA__DOT__fadd1__DOT__num2Mant));
        vlSelf->FMA__DOT__fadd1__DOT__finalSign = vlSelf->FMA__DOT__fadd1__DOT__largerMag;
        vlSelf->FMA__DOT__fadd1__DOT__finalMant = (0xffffffU 
                                                   & vlSelf->FMA__DOT__fadd1__DOT__sumMants);
        vlSelf->FMA__DOT__fadd1__DOT__finalMant = (0xffffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->FMA__DOT__fadd1__DOT__sumMants)
                                                       ? 
                                                      ((IData)(0xffffffffU) 
                                                       * vlSelf->FMA__DOT__fadd1__DOT__finalMant)
                                                       : vlSelf->FMA__DOT__fadd1__DOT__finalMant));
    } else if (((~ (vlSelf->FMA__DOT__out >> 0x1fU)) 
                & (vlSelf->var3 >> 0x1fU))) {
        vlSelf->FMA__DOT__fadd1__DOT__sumMants = (0x1ffffffU 
                                                  & (vlSelf->FMA__DOT__fadd1__DOT__num2Mant 
                                                     - vlSelf->FMA__DOT__fadd1__DOT__num1Mant));
        vlSelf->FMA__DOT__fadd1__DOT__finalSign = (1U 
                                                   & (~ (IData)(vlSelf->FMA__DOT__fadd1__DOT__largerMag)));
        vlSelf->FMA__DOT__fadd1__DOT__finalMant = (0xffffffU 
                                                   & vlSelf->FMA__DOT__fadd1__DOT__sumMants);
        vlSelf->FMA__DOT__fadd1__DOT__finalMant = (0xffffffU 
                                                   & ((0x1000000U 
                                                       & vlSelf->FMA__DOT__fadd1__DOT__sumMants)
                                                       ? 
                                                      ((IData)(0xffffffffU) 
                                                       * vlSelf->FMA__DOT__fadd1__DOT__finalMant)
                                                       : vlSelf->FMA__DOT__fadd1__DOT__finalMant));
    } else {
        vlSelf->FMA__DOT__fadd1__DOT__sumMants = (0x1ffffffU 
                                                  & (vlSelf->FMA__DOT__fadd1__DOT__num2Mant 
                                                     + vlSelf->FMA__DOT__fadd1__DOT__num1Mant));
        vlSelf->FMA__DOT__fadd1__DOT__finalExp = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->FMA__DOT__fadd1__DOT__finalExp)));
        vlSelf->FMA__DOT__fadd1__DOT__finalSign = 1U;
        vlSelf->FMA__DOT__fadd1__DOT__finalMant = (0xffffffU 
                                                   & (vlSelf->FMA__DOT__fadd1__DOT__sumMants 
                                                      >> 1U));
    }
    vlSelf->FMA__DOT__fadd1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x17U, vlSelf->FMA__DOT__fadd1__DOT__i)) {
        if ((0x800000U & vlSelf->FMA__DOT__fadd1__DOT__finalMant)) {
            vlSelf->FMA__DOT__fadd1__DOT__i = 0x17U;
        } else {
            vlSelf->FMA__DOT__fadd1__DOT__finalMant 
                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->FMA__DOT__fadd1__DOT__finalMant, 1U));
            vlSelf->FMA__DOT__fadd1__DOT__finalExp 
                = (0xffU & ((IData)(vlSelf->FMA__DOT__fadd1__DOT__finalExp) 
                            - (IData)(1U)));
        }
        vlSelf->FMA__DOT__fadd1__DOT__i = ((IData)(1U) 
                                           + vlSelf->FMA__DOT__fadd1__DOT__i);
    }
    vlSelf->FMA__DOT__fadd1__DOT__finalMant = (0xffffffU 
                                               & VL_SHIFTL_III(24,24,32, vlSelf->FMA__DOT__fadd1__DOT__finalMant, 1U));
    if (((0U == vlSelf->FMA__DOT__out) & (0U == (IData)(vlSelf->FMA__DOT__fadd1__DOT__num2Exp)))) {
        vlSelf->FMA__DOT__fadd1__DOT__finalMant = 0U;
        vlSelf->FMA__DOT__fadd1__DOT__finalExp = 0U;
    }
    vlSelf->res = (((~ (IData)(vlSelf->FMA__DOT__fadd1__DOT__finalSign)) 
                    << 0x1fU) | (((IData)(vlSelf->FMA__DOT__fadd1__DOT__finalExp) 
                                  << 0x17U) | (0x7fffffU 
                                               & (vlSelf->FMA__DOT__fadd1__DOT__finalMant 
                                                  >> 1U))));
}

void VFMA___024root___eval_ico(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFMA___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VFMA___024root___eval_triggers__ico(VFMA___024root* vlSelf);

bool VFMA___024root___eval_phase__ico(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VFMA___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VFMA___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VFMA___024root___eval_act(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_act\n"); );
}

void VFMA___024root___eval_nba(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_nba\n"); );
}

void VFMA___024root___eval_triggers__act(VFMA___024root* vlSelf);

bool VFMA___024root___eval_phase__act(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFMA___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFMA___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFMA___024root___eval_phase__nba(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFMA___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__ico(VFMA___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__nba(VFMA___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__act(VFMA___024root* vlSelf);
#endif  // VL_DEBUG

void VFMA___024root___eval(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VFMA___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../FMA.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VFMA___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFMA___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../FMA.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFMA___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../FMA.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFMA___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFMA___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFMA___024root___eval_debug_assertions(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
