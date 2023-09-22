// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello_if_ex_m.h"

VL_ATTR_COLD void Vhello_if_ex_m___ctor_var_reset(Vhello_if_ex_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhello_if_ex_m___ctor_var_reset\n"); );
    // Body
    vlSelf->aluresult = VL_RAND_RESET_I(32);
    vlSelf->rbdata = VL_RAND_RESET_I(32);
    vlSelf->mem_load = VL_RAND_RESET_I(1);
    vlSelf->reg_wr = VL_RAND_RESET_I(1);
    vlSelf->mem_wr = VL_RAND_RESET_I(1);
    vlSelf->mem_opt = VL_RAND_RESET_I(3);
    vlSelf->mem_signed = VL_RAND_RESET_I(1);
    vlSelf->reg_wnum = VL_RAND_RESET_I(5);
}
