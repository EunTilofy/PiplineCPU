// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello_if_if_id.h"

std::string VL_TO_STRING(const Vhello_if_if_id* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhello_if_if_id::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
