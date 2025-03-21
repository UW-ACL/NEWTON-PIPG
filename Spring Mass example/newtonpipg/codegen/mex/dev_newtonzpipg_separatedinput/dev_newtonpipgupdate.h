//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipgupdate.h
//
// Code generation for function 'dev_newtonpipgupdate'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct c_dev_newtonzpipg_separatedinpu;

namespace coder {
class sparse;

}

// Function Declarations
real_T b_dev_newtonpipgupdate(c_dev_newtonzpipg_separatedinpu *SD,
                              const emlrtStack *sp, const real_T A[256],
                              const real_T B[128], const real_T At[256],
                              const real_T Bt[128], const coder::sparse *P_diag,
                              const real_T Id[496], real_T R[816], real_T alpha,
                              real_T beta, real_T rho);

// End of code generation (dev_newtonpipgupdate.h)
