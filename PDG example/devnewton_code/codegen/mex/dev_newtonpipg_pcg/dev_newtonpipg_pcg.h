//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_pcg.h
//
// Code generation for function 'dev_newtonpipg_pcg'
//

#pragma once

// Include files
#include "dev_newtonpipg_pcg_types.h"
#include "rtwtypes.h"
#include "sparse.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void dev_newtonpipg_pcg(dev_newtonpipg_pcgStackData *SD, const emlrtStack *sp,
                        const real_T A[256], const real_T B[128],
                        const real_T At[256], const real_T Bt[128],
                        const coder::sparse *P, real_T z1[496],
                        const real_T lw[320], const coder::sparse *q,
                        const coder::sparse *g, const real_T z_min[496],
                        const real_T z_max[496], real_T lam, real_T rho,
                        real_T omg, real_T maxit, real_T newtonratio,
                        real_T newtonactive, real_T tol, struct0_T *out);

// End of code generation (dev_newtonpipg_pcg.h)
