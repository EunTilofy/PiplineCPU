// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello_if_ex_m.h"

std::string VL_TO_STRING(const Vhello_if_ex_m* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhello_if_ex_m::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
