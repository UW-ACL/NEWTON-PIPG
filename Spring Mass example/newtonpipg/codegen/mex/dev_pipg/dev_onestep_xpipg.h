//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_onestep_xpipg.h
//
// Code generation for function 'dev_onestep_xpipg'
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

// Type Declarations
struct struct0_T;

// Function Declarations
void b_binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                        const coder::array<boolean_T, 1U> &in2,
                        const coder::array<boolean_T, 1U> &in3);

void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const emlrtRSInfo in2, const struct0_T *in3,
                      const coder::array<real_T, 1U> &in4);

void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const emlrtRSInfo in2,
                      const coder::array<real_T, 1U> &in3,
                      const coder::array<real_T, 1U> &in4,
                      const struct0_T *in5);

void c_binary_expand_op(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
                        const coder::array<real_T, 1U> &in2,
                        const struct0_T *in3);

void d_binary_expand_op(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
                        const coder::array<real_T, 1U> &in2,
                        const struct0_T *in3);

void minus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
           const coder::array<real_T, 1U> &in2);

void plus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
          const coder::array<real_T, 1U> &in2);

void times(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
           const real_T in2_data[], const int32_T *in2_size,
           const coder::array<real_T, 1U> &in3);

// End of code generation (dev_onestep_xpipg.h)
