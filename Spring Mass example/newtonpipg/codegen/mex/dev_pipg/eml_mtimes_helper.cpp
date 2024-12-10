//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eml_mtimes_helper.cpp
//
// Code generation for function 'eml_mtimes_helper'
//

// Include files
#include "eml_mtimes_helper.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo
    wb_emlrtRTEI{
        76,                  // lineNo
        13,                  // colNo
        "eml_mtimes_helper", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

// Function Definitions
void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      real_T in2, const coder::array<real_T, 1U> &in3)
{
  coder::array<real_T, 1U> b_in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in1.size(0) == 1) {
    i = in3.size(0);
  } else {
    i = in1.size(0);
  }
  b_in2.set_size(&wb_emlrtRTEI, sp, i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2 * (in3[i * stride_0_0] + in1[i * stride_1_0]);
  }
  in1.set_size(&wb_emlrtRTEI, sp, b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (eml_mtimes_helper.cpp)
