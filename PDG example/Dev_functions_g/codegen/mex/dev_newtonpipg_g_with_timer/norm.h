//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// norm.h
//
// Code generation for function 'norm'
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
real_T b_norm(const real_T x[616]);

real_T b_norm(const array<real_T, 1U> &x);

real_T c_norm(const real_T x[326]);

real_T d_norm(const real_T x[290]);

} // namespace coder

// End of code generation (norm.h)
