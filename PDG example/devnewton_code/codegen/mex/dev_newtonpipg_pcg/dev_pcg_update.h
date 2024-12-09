//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_pcg_update.h
//
// Code generation for function 'dev_pcg_update'
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
namespace coder {
class sparse;

}

// Function Declarations
void dev_pcg_update(const emlrtStack *sp, const real_T A[256],
                    const real_T B[128], const real_T L[10240], real_T tol,
                    const real_T At[256], const real_T Bt[128],
                    const coder::sparse *P_diag, const real_T Id[496],
                    real_T R[816], real_T alpha, real_T beta, real_T rho,
                    real_T dzw[816], real_T *pcg_flag, real_T *iter,
                    real_T *accuracy);

// End of code generation (dev_pcg_update.h)
