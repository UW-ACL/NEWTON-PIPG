//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparse.h
//
// Code generation for function 'sparse'
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

// Type Definitions
namespace coder {
class sparse {
public:
  void times(const emlrtStack *sp, const real_T b[496], sparse *s) const;
  void plus(const real_T b[496], real_T s[496]) const;
  void b_plus(const real_T a[496], real_T s[496]) const;
  void minus(const real_T a[320], real_T s[320]) const;
  void b_times(const emlrtStack *sp, const boolean_T a[496], sparse *s) const;
  void times(const emlrtStack *sp, real_T b, sparse *s) const;
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
};

} // namespace coder

// End of code generation (sparse.h)
