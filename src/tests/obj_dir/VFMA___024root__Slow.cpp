// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFMA.h for the primary calling header

#include "VFMA__pch.h"
#include "VFMA__Syms.h"
#include "VFMA___024root.h"

void VFMA___024root___ctor_var_reset(VFMA___024root* vlSelf);

VFMA___024root::VFMA___024root(VFMA__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFMA___024root___ctor_var_reset(this);
}

void VFMA___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFMA___024root::~VFMA___024root() {
}
