//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_compare_withtimer_mexutil.h
//
// Code generation for function 'dev_newtonpipg_compare_withtimer_mexutil'
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
real_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

real_T emlrt_marshallIn(const emlrtStack &sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier);

real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId);

// End of code generation (dev_newtonpipg_compare_withtimer_mexutil.h)
