//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// div.cpp
//
// Code generation for function 'div'
//

// Include files
#include "div.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo nd_emlrtRTEI{
    52,    // lineNo
    9,     // colNo
    "div", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pName
};

// Function Definitions
void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> r;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  r.set_size(&nd_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = 1.0 / (in1[i * stride_0_0] + in2[i * stride_1_0]);
  }
  in1.set_size(&nd_emlrtRTEI, sp, r.size(0));
  loop_ub = r.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = r[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (div.cpp)
