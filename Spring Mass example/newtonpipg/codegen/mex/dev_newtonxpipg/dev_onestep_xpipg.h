//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_onestep_xpipg.h
//
// Code generation for function 'dev_onestep_xpipg'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
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
void dev_onestep_xpipg(
    const emlrtStack *sp, const coder::array<real_T, 1U> &xi,
    const coder::array<real_T, 1U> &eta, real_T alpha, real_T beta, real_T rho,
    const real_T P_diag_data[], int32_T P_diag_size, const real_T A[1024],
    const real_T B[512], const real_T At[1024], const real_T Bt[512],
    const coder::sparse *q, const coder::sparse *g, const real_T zmin_data[],
    int32_T zmin_size, const real_T zmax_data[], int32_T zmax_size,
    coder::array<real_T, 1U> &xi_n, coder::array<real_T, 1U> &eta_n,
    coder::array<real_T, 1U> &Id, coder::array<real_T, 1U> &R);

// End of code generation (dev_onestep_xpipg.h)
