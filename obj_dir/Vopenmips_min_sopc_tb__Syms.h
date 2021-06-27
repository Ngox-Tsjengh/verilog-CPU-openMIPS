// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOPENMIPS_MIN_SOPC_TB__SYMS_H_
#define VERILATED_VOPENMIPS_MIN_SOPC_TB__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vopenmips_min_sopc_tb.h"

// SYMS CLASS
class Vopenmips_min_sopc_tb__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_dumping;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex);  /// Trace class for $dump*
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vopenmips_min_sopc_tb*         TOPp;
    
    // CREATORS
    Vopenmips_min_sopc_tb__Syms(VerilatedContext* contextp, Vopenmips_min_sopc_tb* topp, const char* namep);
    ~Vopenmips_min_sopc_tb__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
