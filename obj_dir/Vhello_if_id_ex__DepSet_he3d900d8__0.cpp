// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello_if_id_ex.h"

std::string VL_TO_STRING(const Vhello_if_id_ex* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhello_if_id_ex::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}