//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonzpipg_separatedinput_types.h
//
// Code generation for function 'dev_newtonzpipg_separatedinput'
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
  real_T k;
};

struct dev_newtonpipgupdate {
  real_T left[10240];
  real_T L[10240];
};

struct c_dev_newtonzpipg_separatedinpu {
  dev_newtonpipgupdate f0;
};

// End of code generation (dev_newtonzpipg_separatedinput_types.h)
