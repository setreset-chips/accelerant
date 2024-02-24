// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFMA__Syms.h"


void VFMA___024root__trace_chg_0_sub_0(VFMA___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFMA___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root__trace_chg_0\n"); );
    // Init
    VFMA___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFMA___024root*>(voidSelf);
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFMA___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFMA___024root__trace_chg_0_sub_0(VFMA___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->FMA__DOT__out),32);
        bufp->chgBit(oldp+1,(vlSelf->FMA__DOT__fadd1__DOT__largerMag));
        bufp->chgBit(oldp+2,(vlSelf->FMA__DOT__fadd1__DOT__finalSign));
        bufp->chgCData(oldp+3,(vlSelf->FMA__DOT__fadd1__DOT__num1Exp),8);
        bufp->chgCData(oldp+4,(vlSelf->FMA__DOT__fadd1__DOT__num2Exp),8);
        bufp->chgCData(oldp+5,(vlSelf->FMA__DOT__fadd1__DOT__finalExp),8);
        bufp->chgIData(oldp+6,(vlSelf->FMA__DOT__fadd1__DOT__num1Mant),24);
        bufp->chgIData(oldp+7,(vlSelf->FMA__DOT__fadd1__DOT__num2Mant),24);
        bufp->chgIData(oldp+8,(vlSelf->FMA__DOT__fadd1__DOT__finalMant),24);
        bufp->chgIData(oldp+9,(vlSelf->FMA__DOT__fadd1__DOT__sumMants),25);
        bufp->chgIData(oldp+10,(vlSelf->FMA__DOT__fadd1__DOT__i),32);
        bufp->chgCData(oldp+11,(vlSelf->FMA__DOT__fmul1__DOT__expF),8);
        bufp->chgIData(oldp+12,(vlSelf->FMA__DOT__fmul1__DOT__mantissa),23);
        bufp->chgQData(oldp+13,(vlSelf->FMA__DOT__fmul1__DOT__mantissaProd),48);
        bufp->chgIData(oldp+15,(vlSelf->FMA__DOT__fmul1__DOT__i),32);
    }
    bufp->chgIData(oldp+16,(vlSelf->var1),32);
    bufp->chgIData(oldp+17,(vlSelf->var2),32);
    bufp->chgIData(oldp+18,(vlSelf->var3),32);
    bufp->chgIData(oldp+19,(vlSelf->res),32);
    bufp->chgBit(oldp+20,(((vlSelf->var1 ^ vlSelf->var2) 
                           >> 0x1fU)));
    bufp->chgIData(oldp+21,((0x800000U | (0x7fffffU 
                                          & vlSelf->var1))),24);
    bufp->chgIData(oldp+22,((0x800000U | (0x7fffffU 
                                          & vlSelf->var2))),24);
}

void VFMA___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFMA___024root__trace_cleanup\n"); );
    // Init
    VFMA___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFMA___024root*>(voidSelf);
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
