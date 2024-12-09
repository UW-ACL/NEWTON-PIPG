//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_cholesky_special.cpp
//
// Code generation for function 'dev_cholesky_special'
//

// Include files
#include "dev_cholesky_special.h"
#include "chol.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "rt_nonfinite.h"
#include "emlrt.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo rh_emlrtRSI{
    13,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo sh_emlrtRSI{
    28,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo th_emlrtRSI{
    15,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m" // pathName
};

static emlrtECInfo mc_emlrtECI{
    -1,                     // nDims
    13,                     // lineNo
    2,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pName
};

static emlrtECInfo nc_emlrtECI{
    -1,                     // nDims
    32,                     // lineNo
    5,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    16,     // lineNo
    5,      // colNo
    "chol", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m" // pName
};

// Function Definitions
void dev_cholesky_special(const emlrtStack &sp, const real_T Y[5800],
                          real_T L[5800])
{
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel c_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  emlrtStack b_st;
  emlrtStack st;
  real_T A[100];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T i;
  int32_T n;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_cholesky_special_complete,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  //  has the sameshape as the aout put of dev_compute_HPHT
  //  the Y matrix is a 4 dimensional matrix. t is for the t th row YTT and
  //  Yt(t-1)
  //  the third index is for the location. 1 for diag and 2 for the subdiag
  //  below the diag.
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  std::memset(&L[0], 0, 5800U * sizeof(real_T));
  //  Compute L_11
  emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
  st.site = &rh_emlrtRSI;
  std::copy(&Y[0], &Y[100], &A[0]);
  b_st.site = &th_emlrtRSI;
  coder::internal::chol(b_st, A, n);
  if (n > 10) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  iv[0] = 10;
  iv[1] = 10;
  if (n < 1) {
    i = 0;
  } else {
    i = n;
  }
  iv1[0] = i;
  iv1[1] = i;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &mc_emlrtECI,
                                (emlrtCTX)&sp);
  std::copy(&A[0], &A[100], &L[0]);
  //  Compute remaining L's
  emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 < 28)) {
    real_T d[10];
    boolean_T exitg2;
    boolean_T y;
    //  Compute L_{i+1,i} if i < T
    emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
    for (n = 0; n < 10; n++) {
      d[n] = L[(n + 10 * n) + 200 * (b_i - 1)];
    }
    y = false;
    n = 0;
    exitg2 = false;
    while ((!exitg2) && (n < 10)) {
      if (d[n] == 0.0) {
        y = true;
        exitg2 = true;
      } else {
        n++;
      }
    }
    if (y) {
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      exitg1 = true;
    } else {
      real_T B[100];
      int32_T info;
      //  Replace the division by the for loop implementation
      emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
      for (i = 0; i < 10; i++) {
        for (n = 0; n < 10; n++) {
          B[n + 10 * i] = Y[((i + 10 * n) + 200 * b_i) + 100];
        }
      }
      emlrtMEXProfilingFunctionEntryCPP(
          (char_T *)c_small_lower_triangular_solve_,
          static_cast<boolean_T>(isMexOutdated), &b_profilerSentinel);
      emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
      std::memset(&A[0], 0, 100U * sizeof(real_T));
      emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
      for (n = 0; n < 10; n++) {
        emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
        for (int32_T c_i{0}; c_i < 10; c_i++) {
          emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
          info = c_i + 10 * n;
          A[info] = B[info];
          emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
          for (int32_T j{0}; j < c_i; j++) {
            emlrtMEXProfilingStatement(8,
                                       static_cast<boolean_T>(isMexOutdated));
            A[info] -= L[(c_i + 10 * j) + 200 * (b_i - 1)] * A[j + 10 * n];
            emlrtMEXProfilingStatement(9,
                                       static_cast<boolean_T>(isMexOutdated));
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }
          emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
          A[info] /= L[(c_i + 10 * c_i) + 200 * (b_i - 1)];
          emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
      for (i = 0; i < 10; i++) {
        for (n = 0; n < 10; n++) {
          L[((n + 10 * i) + 200 * b_i) + 100] = A[i + 10 * n];
        }
      }
      //  Compute L_{i,i}
      emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
      st.site = &sh_emlrtRSI;
      for (i = 0; i < 10; i++) {
        for (n = 0; n < 10; n++) {
          B[n + 10 * i] = L[((i + 10 * n) + 200 * b_i) + 100];
        }
      }
      emlrtMEXProfilingFunctionEntryCPP(
          (char_T *)c_dev_multiply_symmetric_comple,
          static_cast<boolean_T>(isMexOutdated), &c_profilerSentinel);
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
      std::memset(&A[0], 0, 100U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
      for (int32_T c_i{0}; c_i < 10; c_i++) {
        emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
        for (int32_T j{0}; j <= c_i; j++) {
          real_T b_d;
          emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
          i = c_i + 10 * j;
          b_d = A[i];
          for (n = 0; n < 10; n++) {
            emlrtMEXProfilingStatement(7,
                                       static_cast<boolean_T>(isMexOutdated));
            b_d += L[((c_i + 10 * n) + 200 * b_i) + 100] * B[n + 10 * j];
            emlrtMEXProfilingStatement(8,
                                       static_cast<boolean_T>(isMexOutdated));
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          A[i] = b_d;
          //  Use the computed value for the symmetric element
          emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
          A[j + 10 * c_i] = A[i];
          emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingFunctionExitCPP(&c_profilerSentinel);
      for (i = 0; i < 10; i++) {
        for (n = 0; n <= 8; n += 2) {
          __m128d r;
          info = n + 10 * i;
          r = _mm_loadu_pd(&A[info]);
          _mm_storeu_pd(&A[info],
                        _mm_sub_pd(_mm_loadu_pd(&Y[info + 200 * b_i]), r));
        }
      }
      b_st.site = &th_emlrtRSI;
      info = coder::internal::chol(b_st, A, n);
      if (n > 10) {
        emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
      if (info != 0) {
        emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
        exitg1 = true;
      } else {
        emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
        iv[0] = 10;
        iv[1] = 10;
        if (n < 1) {
          i = 0;
        } else {
          i = n;
        }
        iv1[0] = i;
        iv1[1] = i;
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &nc_emlrtECI,
                                      (emlrtCTX)&sp);
        for (i = 0; i < 10; i++) {
          std::copy(
              &A[i * 10],
              &A[static_cast<int32_T>(static_cast<uint32_T>(i * 10) + 10U)],
              &L[i * 10 + b_i * 200]);
        }
        emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
        b_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
    }
  }
  emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
}

// End of code generation (dev_cholesky_special.cpp)
