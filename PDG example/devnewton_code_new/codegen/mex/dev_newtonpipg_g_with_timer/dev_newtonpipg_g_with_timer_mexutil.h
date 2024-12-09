//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_with_timer_mexutil.h
//
// Code generation for function 'dev_newtonpipg_g_with_timer_mexutil'
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
real_T emlrt_marshallIn(const emlrtStack &sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier);

real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId);

const mxArray *emlrt_marshallOut(const real_T u);

const mxArray *emlrt_marshallOut(const emlrtStack &sp, const char_T u[7]);

const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, const mxArray *m4,
                     emlrtMCInfo &location);

real_T h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

// End of code generation (dev_newtonpipg_g_with_timer_mexutil.h)
