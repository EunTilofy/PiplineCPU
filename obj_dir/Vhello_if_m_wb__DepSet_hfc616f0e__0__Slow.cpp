// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello_if_m_wb.h"

VL_ATTR_COLD void Vhello_if_m_wb___ctor_var_reset(Vhello_if_m_wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhello_if_m_wb___ctor_var_reset\n"); );
    // Body
    vlSelf->aluresult = VL_RAND_RESET_I(32);
    vlSelf->mem_dat_i_w = VL_RAND_RESET_I(32);
    vlSelf->Data_out = VL_RAND_RESET_I(32);
    vlSelf->mem_load = VL_RAND_RESET_I(1);
    vlSelf->reg_wr = VL_RAND_RESET_I(1);
    vlSelf->reg_wnum = VL_RAND_RESET_I(5);
}
