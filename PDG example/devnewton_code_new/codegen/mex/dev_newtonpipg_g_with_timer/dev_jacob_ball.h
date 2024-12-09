//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_ball.h
//
// Code generation for function 'dev_jacob_ball'
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
void binary_expand_op_17(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                         const coder::array<creal_T, 2U> &in2,
                         const coder::array<real_T, 1U> &in3);

void binary_expand_op_19(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                         const emlrtRSInfo in2,
                         const coder::array<creal_T, 1U> &in4,
                         const coder::array<creal_T, 1U> &in5);

void binary_expand_op_20(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                         const emlrtRSInfo in2,
                         const coder::array<creal_T, 1U> &in3,
                         const coder::array<creal_T, 1U> &in4);

void binary_expand_op_21(const emlrtStack &sp, coder::array<creal_T, 1U> &in1,
                         const coder::array<creal_T, 1U> &in3,
                         const coder::array<creal_T, 1U> &in4);

void binary_expand_op_22(const emlrtStack &sp, const emlrtRSInfo in1,
                         const coder::array<real_T, 2U> &in2,
                         const coder::array<real_T, 2U> &in3,
                         const real_T in4[22], real_T in5,
                         coder::array<creal_T, 2U> &in6,
                         coder::array<creal_T, 2U> &in7);

void times(const emlrtStack &sp, coder::array<creal_T, 1U> &in1,
           const coder::array<creal_T, 1U> &in2,
           const coder::array<real_T, 1U> &in3);

// End of code generation (dev_jacob_ball.h)
