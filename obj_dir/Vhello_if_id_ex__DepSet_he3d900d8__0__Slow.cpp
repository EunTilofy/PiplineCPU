// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello_if_id_ex.h"

VL_ATTR_COLD void Vhello_if_id_ex___ctor_var_reset(Vhello_if_id_ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhello_if_id_ex___ctor_var_reset\n"); );
    // Body
    vlSelf->mem_load = VL_RAND_RESET_I(1);
    vlSelf->reg_wr = VL_RAND_RESET_I(1);
    vlSelf->mem_wr = VL_RAND_RESET_I(1);
    vlSelf->mem_opt = VL_RAND_RESET_I(3);
    vlSelf->mem_signed = VL_RAND_RESET_I(1);
    vlSelf->reg_anum = VL_RAND_RESET_I(5);
    vlSelf->reg_bnum = VL_RAND_RESET_I(5);
    vlSelf->reg_wnum = VL_RAND_RESET_I(5);
    vlSelf->alu_sela = VL_RAND_RESET_I(2);
    vlSelf->alu_selb = VL_RAND_RESET_I(2);
    vlSelf->ALUctr = VL_RAND_RESET_I(3);
    vlSelf->ALUext = VL_RAND_RESET_I(1);
    vlSelf->imm = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->branch = VL_RAND_RESET_I(3);
}
