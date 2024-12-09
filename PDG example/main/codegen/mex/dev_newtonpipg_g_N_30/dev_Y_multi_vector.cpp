//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_Y_multi_vector.cpp
//
// Code generation for function 'dev_Y_multi_vector'
//

// Include files
#include "dev_Y_multi_vector.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "rt_nonfinite.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo yf_emlrtRSI{
    16,                   // lineNo
    "dev_Y_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m" // pathName
};

static emlrtRSInfo ag_emlrtRSI{
    11,                   // lineNo
    "dev_Y_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m" // pathName
};

// Function Definitions
void dev_Y_multi_vector(const emlrtStack &sp, const real_T Y[5800],
                        const real_T v[290], real_T out[290])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_v[10];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::memset(&out[0], 0, 290U * sizeof(real_T));
  for (int32_T i{0}; i < 29; i++) {
    if (i + 1 == 1) {
      for (int32_T b_i{0}; b_i < 10; b_i++) {
        real_T d;
        real_T s;
        s = 0.0;
        d = 0.0;
        for (int32_T k{0}; k < 10; k++) {
          int32_T c_i;
          c_i = b_i + k * 10;
          s += Y[(58 * (c_i % 10) + 580 * (c_i / 10)) + 30] * v[k + 10];
          d += v[k] * Y[58 * k + 580 * b_i];
        }
        out[b_i] = d + s;
      }
    } else if (i + 1 == 29) {
      st.site = &ag_emlrtRSI;
      for (int32_T c_i{0}; c_i < 10; c_i++) {
        real_T d;
        real_T s;
        d = 0.0;
        s = 0.0;
        for (int32_T i1{0}; i1 < 10; i1++) {
          int32_T k;
          k = 58 * i1 + 580 * c_i;
          d += v[i1 + 280] * Y[k + 28];
          s += v[i1 + 270] * Y[k + 57];
        }
        out[c_i + 280] = d + s;
      }
    } else {
      real_T y[10];
      real_T s;
      int32_T b_i;
      int32_T c_i;
      int32_T i1;
      int32_T temp;
      temp = i * 10;
      if (temp - 9 > temp) {
        c_i = 0;
        i1 = 0;
      } else {
        c_i = temp - 10;
        i1 = temp;
      }
      st.site = &yf_emlrtRSI;
      b_st.site = &w_emlrtRSI;
      i1 -= c_i;
      if (i1 != 10) {
        if (i1 == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &p_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      st.site = &yf_emlrtRSI;
      for (b_i = 0; b_i < 10; b_i++) {
        s = 0.0;
        for (int32_T k{0}; k < 10; k++) {
          i1 = b_i + k * 10;
          s += Y[((i + 58 * (i1 % 10)) + 580 * (i1 / 10)) + 30] *
               v[(temp + k) + 10];
        }
        y[b_i] = s;
      }
      std::copy(&v[temp],
                &v[static_cast<int32_T>(static_cast<uint32_T>(temp) + 10U)],
                &b_v[0]);
      for (i1 = 0; i1 < 10; i1++) {
        real_T d;
        d = 0.0;
        s = 0.0;
        for (int32_T k{0}; k < 10; k++) {
          b_i = (i + 58 * k) + 580 * i1;
          d += b_v[k] * Y[b_i];
          s += v[c_i + k] * Y[b_i + 29];
        }
        out[i1 + temp] = (d + s) + y[i1];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_Y_multi_vector.cpp)
