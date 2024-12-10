//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_compute_HPHt.h
//
// Code generation for function 'dev_compute_HPHt'
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
void dev_compute_HPHt(const emlrtStack *sp, real_T A[1024], real_T B[512],
                      const coder::array<real_T, 1U> &P_diag,
                      coder::array<real_T, 4U> &out);

// End of code generation (dev_compute_HPHt.h)
