//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_pipg_types.h
//
// Code generation for function 'dev_pipg'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "sparse.h"
#include "emlrt.h"

// Type Definitions
struct struct1_T {
  real_T alpha;
  real_T beta;
  boolean_T converge;
  real_T residualfirstactive;
  real_T iterfirstactive;
  real_T iter4;
  real_T iter8;
  real_T iter12;
  real_T computationtime;
  real_T shiftactiveamount[100];
};

struct struct0_T {
  real_T n;
  real_T m;
  real_T N;
  real_T T;
  real_T xmax;
  real_T umax;
  real_T xmin;
  real_T umin;
  real_T z0[16];
  real_T zN[16];
  real_T A[256];
  real_T B[128];
  real_T P[541696];
  coder::sparse q;
  coder::sparse g;
  real_T z[736];
  real_T w[480];
  real_T H[353280];
  real_T HT[353280];
  real_T zmin[736];
  real_T zmax[736];
  real_T expipg_omg;
  real_T max_eig_P;
  real_T rho;
};

struct dev_pipg_api {
  struct0_T ppv;
};

struct dev_pipgStackData {
  dev_pipg_api f0;
};

// End of code generation (dev_pipg_types.h)
