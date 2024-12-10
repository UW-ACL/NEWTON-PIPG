//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// chol.h
//
// Code generation for function 'chol'
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
namespace internal {
void chol(const emlrtStack *sp, real_T A[256], int32_T *flag, int32_T *jmax);

}
} // namespace coder

// End of code generation (chol.h)
