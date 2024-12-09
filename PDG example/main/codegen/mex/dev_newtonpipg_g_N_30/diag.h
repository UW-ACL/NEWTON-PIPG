//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// diag.h
//
// Code generation for function 'diag'
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
namespace coder {
int32_T diag(const emlrtStack &sp, const creal_T v_data[],
             const int32_T v_size[2], creal_T d_data[]);

void diag(const real_T v_data[], int32_T v_size, real_T d_data[],
          int32_T d_size[2]);

int32_T diag(const emlrtStack &sp, const real_T v_data[],
             const int32_T v_size[2], real_T d_data[]);

} // namespace coder

// End of code generation (diag.h)
