// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFMA.h for the primary calling header

#include "VFMA__pch.h"
#include "VFMA__Syms.h"
#include "VFMA___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__ico(VFMA___024root* vlSelf);
#endif  // VL_DEBUG

void VFMA___024root___eval_triggers__ico(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFMA___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFMA___024root___dump_triggers__act(VFMA___024root* vlSelf);
#endif  // VL_DEBUG

void VFMA___024root___eval_triggers__act(VFMA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFMA___024root___dump_triggers__act(vlSelf);
    }
#endif
}
