//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ixfun.h
//
// Code generation for function 'ixfun'
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
namespace coder {
namespace internal {
void expand_max(const emlrtStack *sp, const real_T a_data[], int32_T a_size,
                const ::coder::array<real_T, 1U> &b,
                ::coder::array<real_T, 1U> &c);

void expand_min(const emlrtStack *sp, const real_T a_data[], int32_T a_size,
                const ::coder::array<real_T, 1U> &b,
                ::coder::array<real_T, 1U> &c);

} // namespace internal
} // namespace coder

// End of code generation (ixfun.h)
