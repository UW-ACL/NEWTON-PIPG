//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_onestep_xpipg.cpp
//
// Code generation for function 'dev_onestep_xpipg'
//

// Include files
#include "dev_onestep_xpipg.h"
#include "dev_HZ.h"
#include "dev_pipg_data.h"
#include "dev_pipg_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Function Definitions
void b_binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                        const coder::array<boolean_T, 1U> &in2,
                        const coder::array<boolean_T, 1U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  in1.set_size(&bb_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = static_cast<real_T>(in2[i * stride_0_0]) +
             static_cast<real_T>(in3[i * stride_1_0]);
  }
}

void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const emlrtRSInfo in2, const struct0_T *in3,
                      const coder::array<real_T, 1U> &in4)
{
  coder::array<real_T, 1U> b_in1;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in4.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in4.size(0);
  }
  b_in1.set_size(&x_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  if (in4.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] - in4[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  dev_HZ(&st, in3->A.data, in3->A.size, in3->B.data, in3->B.size, b_in1, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                      const emlrtRSInfo in2,
                      const coder::array<real_T, 1U> &in3,
                      const coder::array<real_T, 1U> &in4, const struct0_T *in5)
{
  coder::array<real_T, 1U> b_in3;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in4.size(0) == 1) {
    i = in3.size(0);
  } else {
    i = in4.size(0);
  }
  b_in3.set_size(&t_emlrtRTEI, sp, i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_0] + in4[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  in5->q.b_plus(&st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_binary_expand_op(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
                        const coder::array<real_T, 1U> &in2,
                        const struct0_T *in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3->zmax.size[0] == 1) {
    i = in2.size(0);
  } else {
    i = in3->zmax.size[0];
  }
  in1.set_size(&ab_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3->zmax.size[0] != 1);
  if (in3->zmax.size[0] == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3->zmax.size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] == in3->zmax.data[i * stride_1_0]);
  }
}

void d_binary_expand_op(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
                        const coder::array<real_T, 1U> &in2,
                        const struct0_T *in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3->zmin.size[0] == 1) {
    i = in2.size(0);
  } else {
    i = in3->zmin.size[0];
  }
  in1.set_size(&y_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3->zmin.size[0] != 1);
  if (in3->zmin.size[0] == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3->zmin.size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] == in3->zmin.data[i * stride_1_0]);
  }
}

void minus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
           const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> b_in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in1.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in1.size(0);
  }
  b_in2.set_size(&u_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] - in1[i * stride_1_0];
  }
  in1.set_size(&u_emlrtRTEI, sp, b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void plus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
          const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> b_in1;
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
  b_in1.set_size(&fb_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] + in2[i * stride_1_0];
  }
  in1.set_size(&fb_emlrtRTEI, sp, b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void times(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
           const real_T in2_data[], const int32_T *in2_size,
           const coder::array<real_T, 1U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    i = *in2_size;
  } else {
    i = in3.size(0);
  }
  in1.set_size(&t_emlrtRTEI, sp, i);
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2_data[i * stride_0_0] * in3[i * stride_1_0];
  }
}

// End of code generation (dev_onestep_xpipg.cpp)
