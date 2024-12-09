//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_multiply_J_k.cpp
//
// Code generation for function 'dev_g_multiply_J_k'
//

// Include files
#include "dev_g_multiply_J_k.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "emlrt.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo kh_emlrtRSI{
    8,                    // lineNo
    "dev_g_multiply_J_k", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" // pathName
};

static emlrtRSInfo lh_emlrtRSI{
    21,              // lineNo
    "processMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" // pathName
};

static emlrtRSInfo mh_emlrtRSI{
    24,              // lineNo
    "processMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" // pathName
};

static emlrtRSInfo nh_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo oh_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo ph_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo qh_emlrtRSI{
    16,        // lineNo
    "sub2ind", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" // pathName
};

static emlrtRTEInfo v_emlrtRTEI{
    18,        // lineNo
    23,        // colNo
    "sub2ind", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m" // pName
};

// Function Definitions
void dev_g_multiply_J_k(const emlrtStack &sp, const real_T Y[5800],
                        const real_T J_k_polar[290], real_T delta,
                        real_T Y_out[5800])
{
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T dv[100];
  int32_T ii[2];
  int8_T varargin_1[2];
  int8_T varargin_2[2];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_g_multiply_J_k_complete_n,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  // Y is my result of HsinvHt. I want to compute J_k HsinveHtJ_k +(I-J_k) +
  // delta I
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  std::copy(&Y[0], &Y[5800], &Y_out[0]);
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  varargin_1[1] = 1;
  varargin_2[1] = 1;
  for (int32_T i{0}; i < 29; i++) {
    int32_T b_i;
    int32_T b_ii;
    int32_T idx;
    int32_T loop_ub;
    int8_T ii_data[10];
    int8_T tmp_data[10];
    boolean_T exitg1;
    boolean_T p;
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    st.site = &kh_emlrtRSI;
    std::copy(&Y[i * 200],
              &Y[static_cast<int32_T>(static_cast<uint32_T>(i * 200) + 100U)],
              &dv[0]);
    emlrtMEXProfilingFunctionEntryCPP((char_T *)processMatrix_complete_name,
                                      static_cast<boolean_T>(isMexOutdated),
                                      &b_profilerSentinel);
    emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
    b_st.site = &lh_emlrtRSI;
    c_st.site = &nh_emlrtRSI;
    d_st.site = &oh_emlrtRSI;
    idx = 0;
    b_ii = 0;
    exitg1 = false;
    while ((!exitg1) && (b_ii < 10)) {
      if (J_k_polar[b_ii + 10 * i] == 0.0) {
        idx++;
        ii_data[idx - 1] = static_cast<int8_T>(b_ii + 1);
        if (idx >= 10) {
          exitg1 = true;
        } else {
          b_ii++;
        }
      } else {
        b_ii++;
      }
    }
    if (idx < 1) {
      loop_ub = 0;
    } else {
      loop_ub = idx;
    }
    ii[0] = 1;
    ii[1] = loop_ub;
    e_st.site = &ph_emlrtRSI;
    coder::internal::indexShapeCheck(e_st, 10, ii);
    emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
    for (b_i = 0; b_i < 10; b_i++) {
      for (b_ii = 0; b_ii < loop_ub; b_ii++) {
        dv[(ii_data[b_ii] + 10 * b_i) - 1] = 0.0;
      }
    }
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    for (b_i = 0; b_i < loop_ub; b_i++) {
      for (b_ii = 0; b_ii < 10; b_ii++) {
        dv[b_ii + 10 * (ii_data[b_i] - 1)] = 0.0;
      }
    }
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    b_st.site = &mh_emlrtRSI;
    c_st.site = &qh_emlrtRSI;
    varargin_1[0] = static_cast<int8_T>(loop_ub);
    varargin_2[0] = static_cast<int8_T>(loop_ub);
    p = true;
    b_ii = 0;
    exitg1 = false;
    while ((!exitg1) && (b_ii < 2)) {
      if (varargin_1[b_ii] != varargin_2[b_ii]) {
        p = false;
        exitg1 = true;
      } else {
        b_ii++;
      }
    }
    if (!p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &v_emlrtRTEI,
                                    "MATLAB:sub2ind:SubscriptVectorSize",
                                    "MATLAB:sub2ind:SubscriptVectorSize", 0);
    }
    b_ii = (loop_ub / 16) << 4;
    for (b_i = b_ii; b_i < loop_ub; b_i++) {
      int8_T i1;
      i1 = ii_data[b_i];
      tmp_data[b_i] = static_cast<int8_T>(i1 + 10 * (i1 - 1));
    }
    for (b_i = 0; b_i < loop_ub; b_i++) {
      dv[tmp_data[b_i] - 1] = 1.0;
    }
    //  for idx = reshape(zeroIndices, 1, length(zeroIndices))
    //      B(idx, idx) = 1;
    //  end
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    for (idx = 0; idx < 10; idx++) {
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      b_i = idx + 10 * idx;
      dv[b_i] += delta;
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
    std::copy(&dv[0], &dv[100], &Y_out[i * 200]);
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    if (i + 1 < 29) {
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      for (b_i = 0; b_i < loop_ub; b_i++) {
        for (b_ii = 0; b_ii < 10; b_ii++) {
          Y_out[((b_ii + 10 * (ii_data[b_i] - 1)) + 200 * (i + 1)) + 100] = 0.0;
        }
      }
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
    if (i + 1 >= 2) {
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
      for (b_i = 0; b_i < 10; b_i++) {
        for (b_ii = 0; b_ii < loop_ub; b_ii++) {
          Y_out[((ii_data[b_ii] + 10 * b_i) + 200 * i) + 99] = 0.0;
        }
      }
      emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
}

// End of code generation (dev_g_multiply_J_k.cpp)
