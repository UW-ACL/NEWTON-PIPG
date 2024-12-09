//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_soc.h
//
// Code generation for function 'dev_jacob_soc'
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
void dev_jacob_soc(const emlrtStack &sp, const coder::array<real_T, 1U> &v,
                   real_T epsilon, const coder::array<real_T, 1U> &P,
                   real_T alpha, coder::array<real_T, 2U> &Q_out,
                   coder::array<real_T, 2U> &Q_inv);

void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
          const coder::array<real_T, 2U> &in2);

// End of code generation (dev_jacob_soc.h)
