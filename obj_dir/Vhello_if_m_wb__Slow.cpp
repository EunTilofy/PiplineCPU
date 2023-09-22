// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello__Syms.h"
#include "Vhello_if_m_wb.h"

void Vhello_if_m_wb___ctor_var_reset(Vhello_if_m_wb* vlSelf);

Vhello_if_m_wb::Vhello_if_m_wb(Vhello__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhello_if_m_wb___ctor_var_reset(this);
}

void Vhello_if_m_wb::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vhello_if_m_wb::~Vhello_if_m_wb() {
}
