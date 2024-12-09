//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_ball.cpp
//
// Code generation for function 'dev_jacob_ball'
//

// Include files
#include "dev_jacob_ball.h"
#include "abs.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "eig.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
void binary_expand_op_10(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                         const emlrtRSInfo in2,
                         const coder::array<creal_T, 1U> &in3,
                         const coder::array<creal_T, 1U> &in4)
{
  coder::array<creal_T, 1U> b_in3;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in3.set_size(&vb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T ai;
    real_T ar;
    real_T bi;
    real_T br;
    int32_T ar_tmp;
    ar_tmp = i * stride_0_0;
    ar = in3[ar_tmp].re;
    ai = in3[ar_tmp].im;
    ar_tmp = i * stride_1_0;
    br = in4[ar_tmp].re;
    bi = in4[ar_tmp].im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        b_in3[i].re = ar / br;
        b_in3[i].im = 0.0;
      } else if (ar == 0.0) {
        b_in3[i].re = 0.0;
        b_in3[i].im = ai / br;
      } else {
        b_in3[i].re = ar / br;
        b_in3[i].im = ai / br;
      }
    } else if (br == 0.0) {
      if (ar == 0.0) {
        b_in3[i].re = ai / bi;
        b_in3[i].im = 0.0;
      } else if (ai == 0.0) {
        b_in3[i].re = 0.0;
        b_in3[i].im = -(ar / bi);
      } else {
        b_in3[i].re = ai / bi;
        b_in3[i].im = -(ar / bi);
      }
    } else {
      real_T bim;
      real_T brm;
      brm = muDoubleScalarAbs(br);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        real_T s;
        s = bi / br;
        bim = br + s * bi;
        b_in3[i].re = (ar + s * ai) / bim;
        b_in3[i].im = (ai - s * ar) / bim;
      } else if (bim == brm) {
        real_T s;
        if (br > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }
        if (bi > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        b_in3[i].re = (ar * s + ai * bim) / brm;
        b_in3[i].im = (ai * s - ar * bim) / brm;
      } else {
        real_T s;
        s = br / bi;
        bim = bi + s * br;
        b_in3[i].re = (s * ar + ai) / bim;
        b_in3[i].im = (s * ai - ar) / bim;
      }
    }
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void binary_expand_op_11(const emlrtStack &sp, coder::array<creal_T, 1U> &in1,
                         const coder::array<creal_T, 1U> &in3,
                         const coder::array<creal_T, 1U> &in4)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  in1.set_size(&ub_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    int32_T i1;
    int32_T i2;
    i1 = i * stride_0_0;
    i2 = i * stride_1_0;
    in1[i].re = (1.0 - in3[i1].re) + in4[i2].re;
    in1[i].im = (0.0 - in3[i1].im) + in4[i2].im;
  }
}

void binary_expand_op_12(const emlrtStack &sp, const emlrtRSInfo in1,
                         const coder::array<real_T, 2U> &in2,
                         const coder::array<real_T, 2U> &in3,
                         const real_T in4[22], real_T in5,
                         coder::array<creal_T, 2U> &in6,
                         coder::array<creal_T, 2U> &in7)
{
  coder::array<real_T, 2U> b_in2;
  emlrtStack st;
  real_T b_in4;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in4 = in4[(static_cast<int32_T>(in5) - 1) << 1];
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  if (in3.size(1) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in3.size(1);
  }
  b_in2.set_size(&sb_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_1_1 = (in3.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] =
          (in2[i1 * stride_0_0 + in2.size(0) * aux_0_1] -
           in3[i1 * stride_1_0 + in3.size(0) * aux_1_1]) *
          b_in4;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = const_cast<emlrtRSInfo *>(&in1);
  coder::eig(st, b_in2, in6, in7);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void binary_expand_op_7(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                        const coder::array<creal_T, 2U> &in2,
                        const coder::array<real_T, 1U> &in3)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  loop_ub = in2.size(0);
  in1.set_size(&xb_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in3.size(0) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in3.size(0);
  }
  in1.set_size(&xb_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in3.size(0) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          in2[i1 + in2.size(0) * aux_0_1].re * in3[aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void binary_expand_op_9(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                        const emlrtRSInfo in2,
                        const coder::array<creal_T, 1U> &in4,
                        const coder::array<creal_T, 1U> &in5)
{
  coder::array<creal_T, 1U> in3;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in5.size(0) == 1) {
    loop_ub = in4.size(0);
  } else {
    loop_ub = in5.size(0);
  }
  in3.set_size(&vb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in4.size(0) != 1);
  stride_1_0 = (in5.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T bi;
    real_T br;
    int32_T b_br_tmp;
    int32_T br_tmp;
    br_tmp = i * stride_0_0;
    b_br_tmp = i * stride_1_0;
    br = (1.0 - in4[br_tmp].re) + in5[b_br_tmp].re;
    bi = (0.0 - in4[br_tmp].im) + in5[b_br_tmp].im;
    if (bi == 0.0) {
      in3[i].re = 1.0 / br;
      in3[i].im = 0.0;
    } else if (br == 0.0) {
      in3[i].re = 0.0;
      in3[i].im = -(1.0 / bi);
    } else {
      real_T bim;
      real_T brm;
      brm = muDoubleScalarAbs(br);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        real_T s;
        s = bi / br;
        bim = br + s * bi;
        in3[i].re = (s * 0.0 + 1.0) / bim;
        in3[i].im = (0.0 - s) / bim;
      } else if (bim == brm) {
        real_T s;
        if (br > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }
        if (bi > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        in3[i].re = (s + 0.0 * bim) / brm;
        in3[i].im = (0.0 * s - bim) / brm;
      } else {
        real_T s;
        s = br / bi;
        bim = bi + s * br;
        in3[i].re = s / bim;
        in3[i].im = (s * 0.0 - 1.0) / bim;
      }
    }
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(st, in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void times(const emlrtStack &sp, coder::array<creal_T, 1U> &in1,
           const coder::array<creal_T, 1U> &in2,
           const coder::array<real_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&tb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    int32_T i1;
    d = in3[i * stride_1_0];
    i1 = i * stride_0_0;
    in1[i].re = d * in2[i1].re;
    in1[i].im = d * in2[i1].im;
  }
}

// End of code generation (dev_jacob_ball.cpp)
