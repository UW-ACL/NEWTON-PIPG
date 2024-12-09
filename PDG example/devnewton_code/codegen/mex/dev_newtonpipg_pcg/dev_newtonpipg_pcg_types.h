//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_pcg_types.h
//
// Code generation for function 'dev_newtonpipg_pcg'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"

// Type Definitions
struct struct0_T {
  boolean_T converge;
  real_T xi[496];
  real_T eta[320];
  real_T solve_time;
  real_T ntime;
  real_T pcgtime;
  real_T k;
};

struct dev_newtonpipgupdate {
  real_T left[10240];
};

struct b_dev_newtonpipg_pcg {
  real_T L[10240];
};

struct dev_newtonpipg_pcgStackData {
  dev_newtonpipgupdate f0;
  b_dev_newtonpipg_pcg f1;
};

// End of code generation (dev_newtonpipg_pcg_types.h)
