//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_xpipg_g_for_N_30_types.h
//
// Code generation for function 'dev_xpipg_g_for_N_30'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
struct struct0_T {
  boolean_T converge;
  real_T iter4;
  real_T iter8;
  real_T iter12;
  coder::bounded_array<real_T, 360U, 1U> xi;
  coder::bounded_array<real_T, 360U, 1U> eta;
  real_T solve_time;
  real_T nR;
};

// End of code generation (dev_xpipg_g_for_N_30_types.h)
