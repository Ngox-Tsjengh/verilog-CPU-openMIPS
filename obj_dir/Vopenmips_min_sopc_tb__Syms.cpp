// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vopenmips_min_sopc_tb__Syms.h"
#include "Vopenmips_min_sopc_tb.h"



// FUNCTIONS
Vopenmips_min_sopc_tb__Syms::~Vopenmips_min_sopc_tb__Syms()
{
}

Vopenmips_min_sopc_tb__Syms::Vopenmips_min_sopc_tb__Syms(VerilatedContext* contextp, Vopenmips_min_sopc_tb* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_dumping(false)
    , __Vm_dumperp(nullptr)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
