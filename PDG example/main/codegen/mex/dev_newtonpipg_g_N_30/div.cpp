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
#include "dev_newtonpipg_g_N_30_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <algorithm>

// Function Definitions
void binary_expand_op_15(real_T in1_data[], int32_T &in1_size,
                         const real_T in2_data[], const int32_T &in2_size)
{
  real_T tmp_data[11];
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in2_size == 1) {
    loop_ub = in1_size;
  } else {
    loop_ub = in2_size;
  }
  stride_0_0 = (in1_size != 1);
  stride_1_0 = (in2_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    tmp_data[i] =
        1.0 / ((1.0 - in1_data[i * stride_0_0]) + in2_data[i * stride_1_0]);
  }
  in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    std::copy(&tmp_data[0], &tmp_data[loop_ub], &in1_data[0]);
  }
}

void binary_expand_op_21(creal_T in1_data[], int32_T &in1_size,
                         const creal_T in3_data[], const int32_T &in3_size)
{
  creal_T in2_data[11];
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3_size == 1) {
    loop_ub = in1_size;
  } else {
    loop_ub = in3_size;
  }
  stride_0_0 = (in1_size != 1);
  stride_1_0 = (in3_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T bi;
    real_T br;
    int32_T b_br_tmp;
    int32_T br_tmp;
    br_tmp = i * stride_0_0;
    b_br_tmp = i * stride_1_0;
    br = (1.0 - in1_data[br_tmp].re) + in3_data[b_br_tmp].re;
    bi = (0.0 - in1_data[br_tmp].im) + in3_data[b_br_tmp].im;
    if (bi == 0.0) {
      in2_data[i].re = 1.0 / br;
      in2_data[i].im = 0.0;
    } else if (br == 0.0) {
      in2_data[i].re = 0.0;
      in2_data[i].im = -(1.0 / bi);
    } else {
      real_T bim;
      real_T brm;
      brm = muDoubleScalarAbs(br);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        real_T s;
        s = bi / br;
        bim = br + s * bi;
        in2_data[i].re = (s * 0.0 + 1.0) / bim;
        in2_data[i].im = (0.0 - s) / bim;
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
        in2_data[i].re = (s + 0.0 * bim) / brm;
        in2_data[i].im = (0.0 * s - bim) / brm;
      } else {
        real_T s;
        s = br / bi;
        bim = bi + s * br;
        in2_data[i].re = s / bim;
        in2_data[i].im = (s * 0.0 - 1.0) / bim;
      }
    }
  }
  in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    std::copy(&in2_data[0], &in2_data[loop_ub], &in1_data[0]);
  }
}

void rdivide(creal_T in1_data[], int32_T &in1_size, const creal_T in2_data[],
             const int32_T &in2_size)
{
  creal_T b_in2_data[11];
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in1_size == 1) {
    loop_ub = in2_size;
  } else {
    loop_ub = in1_size;
  }
  stride_0_0 = (in2_size != 1);
  stride_1_0 = (in1_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T ai;
    real_T ar;
    real_T bi;
    real_T br;
    int32_T ar_tmp;
    ar_tmp = i * stride_0_0;
    ar = in2_data[ar_tmp].re;
    ai = in2_data[ar_tmp].im;
    ar_tmp = i * stride_1_0;
    br = in1_data[ar_tmp].re;
    bi = in1_data[ar_tmp].im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        b_in2_data[i].re = ar / br;
        b_in2_data[i].im = 0.0;
      } else if (ar == 0.0) {
        b_in2_data[i].re = 0.0;
        b_in2_data[i].im = ai / br;
      } else {
        b_in2_data[i].re = ar / br;
        b_in2_data[i].im = ai / br;
      }
    } else if (br == 0.0) {
      if (ar == 0.0) {
        b_in2_data[i].re = ai / bi;
        b_in2_data[i].im = 0.0;
      } else if (ai == 0.0) {
        b_in2_data[i].re = 0.0;
        b_in2_data[i].im = -(ar / bi);
      } else {
        b_in2_data[i].re = ai / bi;
        b_in2_data[i].im = -(ar / bi);
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
        b_in2_data[i].re = (ar + s * ai) / bim;
        b_in2_data[i].im = (ai - s * ar) / bim;
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
        b_in2_data[i].re = (ar * s + ai * bim) / brm;
        b_in2_data[i].im = (ai * s - ar * bim) / brm;
      } else {
        real_T s;
        s = br / bi;
        bim = bi + s * br;
        b_in2_data[i].re = (s * ar + ai) / bim;
        b_in2_data[i].im = (s * ai - ar) / bim;
      }
    }
  }
  in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    std::copy(&b_in2_data[0], &b_in2_data[loop_ub], &in1_data[0]);
  }
}

void rdivide(real_T in1_data[], int32_T &in1_size, const real_T in2_data[],
             const int32_T &in2_size)
{
  real_T b_in2_data[11];
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in1_size == 1) {
    loop_ub = in2_size;
  } else {
    loop_ub = in1_size;
  }
  stride_0_0 = (in2_size != 1);
  stride_1_0 = (in1_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] / in1_data[i * stride_1_0];
  }
  in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    std::copy(&b_in2_data[0], &b_in2_data[loop_ub], &in1_data[0]);
  }
}

// End of code generation (div.cpp)
