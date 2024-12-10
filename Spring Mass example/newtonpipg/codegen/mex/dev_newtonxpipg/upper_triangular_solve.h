//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// upper_triangular_solve.h
//
// Code generation for function 'upper_triangular_solve'
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

// Function Declarations
void upper_triangular_solve(const emlrtStack *sp, const real_T U_data[],
                            const int32_T U_size[2],
                            const coder::array<real_T, 1U> &B, real_T X_data[],
                            int32_T *X_size);

// End of code generation (upper_triangular_solve.h)
