// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE.h for the primary calling header

#include "verilated.h"

#include "VPE__Syms.h"
#include "VPE__Syms.h"
#include "VPE___024root.h"

void VPE___024root___ctor_var_reset(VPE___024root* vlSelf);

VPE___024root::VPE___024root(VPE__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPE___024root___ctor_var_reset(this);
}

void VPE___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPE___024root::~VPE___024root() {
}
