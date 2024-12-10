//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// diag_multiply.h
//
// Code generation for function 'diag_multiply'
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
void diag_multiply(const emlrtStack *sp, const coder::array<real_T, 2U> &P,
                   const real_T A_data[], const int32_T A_size[2],
                   real_T C_data[], int32_T C_size[2]);

// End of code generation (diag_multiply.h)
