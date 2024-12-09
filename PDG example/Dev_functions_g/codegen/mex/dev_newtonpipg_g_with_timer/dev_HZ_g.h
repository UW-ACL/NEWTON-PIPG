//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_HZ_g.h
//
// Code generation for function 'dev_HZ_g'
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
void dev_HZ_g(const emlrtStack &sp, const real_T A[3190],
              const coder::array<real_T, 1U> &z, real_T n_e, real_T out[290]);

void dev_HZ_g(const emlrtStack &sp, const real_T A[3190], const real_T z[326],
              real_T n_e, real_T out[290]);

// End of code generation (dev_HZ_g.h)
