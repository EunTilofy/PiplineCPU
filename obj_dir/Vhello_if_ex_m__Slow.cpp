// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello__Syms.h"
#include "Vhello_if_ex_m.h"

void Vhello_if_ex_m___ctor_var_reset(Vhello_if_ex_m* vlSelf);

Vhello_if_ex_m::Vhello_if_ex_m(Vhello__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhello_if_ex_m___ctor_var_reset(this);
}

void Vhello_if_ex_m::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vhello_if_ex_m::~Vhello_if_ex_m() {
}
