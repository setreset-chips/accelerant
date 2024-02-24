// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFMA.h for the primary calling header

#include "VFMA__pch.h"
#include "VFMA___024root.h"

VL_ATTR_COLD void VFMA___024root___eval_static(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFMA___024root___eval_initial(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VFMA___024root___eval_final(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__stl(VFMA___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFMA___024root___eval_phase__stl(VFMA___024root* vlSelf);

VL_ATTR_COLD void VFMA___024root___eval_settle(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VFMA___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../FMA.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFMA___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__stl(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VFMA___024root___ico_sequent__TOP__0(VFMA___024root* vlSelf);

VL_ATTR_COLD void VFMA___024root___eval_stl(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VFMA___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VFMA___024root___eval_triggers__stl(VFMA___024root* vlSelf);

VL_ATTR_COLD bool VFMA___024root___eval_phase__stl(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFMA___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VFMA___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__ico(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__act(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__nba(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFMA___024root___ctor_var_reset(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->var1 = VL_RAND_RESET_I(32);
    vlSelf->var2 = VL_RAND_RESET_I(32);
    vlSelf->var3 = VL_RAND_RESET_I(32);
    vlSelf->res = VL_RAND_RESET_I(32);
    vlSelf->FMA__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->FMA__DOT__fmul1__DOT__expF = VL_RAND_RESET_I(8);
    vlSelf->FMA__DOT__fmul1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->FMA__DOT__fmul1__DOT__mantissaProd = VL_RAND_RESET_Q(48);
    vlSelf->FMA__DOT__fmul1__DOT__i = 0;
    vlSelf->FMA__DOT__fadd1__DOT__largerMag = VL_RAND_RESET_I(1);
    vlSelf->FMA__DOT__fadd1__DOT__finalSign = VL_RAND_RESET_I(1);
    vlSelf->FMA__DOT__fadd1__DOT__num1Exp = VL_RAND_RESET_I(8);
    vlSelf->FMA__DOT__fadd1__DOT__num2Exp = VL_RAND_RESET_I(8);
    vlSelf->FMA__DOT__fadd1__DOT__finalExp = VL_RAND_RESET_I(8);
    vlSelf->FMA__DOT__fadd1__DOT__num1Mant = VL_RAND_RESET_I(24);
    vlSelf->FMA__DOT__fadd1__DOT__num2Mant = VL_RAND_RESET_I(24);
    vlSelf->FMA__DOT__fadd1__DOT__finalMant = VL_RAND_RESET_I(24);
    vlSelf->FMA__DOT__fadd1__DOT__sumMants = VL_RAND_RESET_I(25);
    vlSelf->FMA__DOT__fadd1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
