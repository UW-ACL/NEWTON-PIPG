//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_compare_withtimer_types.h
//
// Code generation for function 'dev_newtonpipg_compare_withtimer'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_bounded_array.h"
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
  coder::bounded_array<real_T, 360U, 1U> xi;
  coder::bounded_array<real_T, 360U, 1U> eta;
  real_T solve_time;
  real_T ntime;
  real_T k;
  real_T timeout[2000];
  real_T pipgR[2000];
};

struct dev_g_newton_pipg_update {
  real_T Y[5800];
  real_T Y_out[5800];
  real_T chol_y[5800];
  real_T Q_data[3630];
};

struct c_dev_newtonpipg_compare_withti {
  struct1_T out;
};

struct d_dev_newtonpipg_compare_withti {
  dev_g_newton_pipg_update f0;
  c_dev_newtonpipg_compare_withti f1;
};

// End of code generation (dev_newtonpipg_compare_withtimer_types.h)
