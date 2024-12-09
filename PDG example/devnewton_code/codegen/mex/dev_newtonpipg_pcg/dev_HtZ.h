//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_HtZ.h
//
// Code generation for function 'dev_HtZ'
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
void binary_expand_op(real_T in1[496], int32_T in2, int32_T in4, int32_T in5,
                      const real_T in6[256], int32_T in9, int32_T in10,
                      const real_T in11[128]);

void dev_HtZ(const emlrtStack *sp, const real_T At[256], const real_T Bt[128],
             const real_T z[320], real_T out[496]);

// End of code generation (dev_HtZ.h)
