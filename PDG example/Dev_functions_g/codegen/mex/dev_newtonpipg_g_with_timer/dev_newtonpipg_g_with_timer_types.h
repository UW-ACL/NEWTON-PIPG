//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_with_timer_types.h
//
// Code generation for function 'dev_newtonpipg_g_with_timer'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"

// Type Definitions
struct struct0_T {
  real_T newtonratio;
  real_T newtonactive;
  real_T linesearch_step;
  real_T linsearch_amount;
  real_T newtonwaitlinear;
  real_T newtonwaitexp;
  real_T newtonwait_factor;
};

struct struct1_T {
  boolean_T converge;
  coder::array<real_T, 1U> xi;
  coder::array<real_T, 1U> eta;
  real_T solve_time;
  real_T ntime;
  real_T k;
};

struct d_dev_g_newton_pipg_update_with {
  real_T Y[5800];
};

struct c_dev_newtonpipg_g_with_timerSt {
  d_dev_g_newton_pipg_update_with f0;
};

// End of code generation (dev_newtonpipg_g_with_timer_types.h)
