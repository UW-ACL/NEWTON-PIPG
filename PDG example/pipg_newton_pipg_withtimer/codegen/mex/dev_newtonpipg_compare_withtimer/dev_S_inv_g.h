//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_S_inv_g.h
//
// Code generation for function 'dev_S_inv_g'
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

// Function Declarations
void dev_S_inv_g(const emlrtStack &sp, const real_T z0[326], real_T nx,
                 real_T nu, const real_T proj_index_all[660],
                 const real_T proj_coefficients_all[660], const real_T P[326],
                 real_T alpha, real_T Q_data[], int32_T Q_size[3],
                 real_T Q_inv_data[], int32_T Q_inv_size[3]);

// End of code generation (dev_S_inv_g.h)
