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
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo of_emlrtRSI{
    13,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo pf_emlrtRSI{
    28,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo qf_emlrtRSI{
    15,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m" // pathName
};

static emlrtECInfo sc_emlrtECI{
    -1,                     // nDims
    13,                     // lineNo
    2,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pName
};

static emlrtECInfo tc_emlrtECI{
    -1,                     // nDims
    32,                     // lineNo
    5,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
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
  emlrtStack b_st;
  emlrtStack st;
  real_T A[100];
  real_T C[100];
  real_T temp_data[100];
  int32_T iv[2];
  int32_T temp[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T n;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  //  has the sameshape as the aout put of dev_compute_HPHT
  //  the Y matrix is a 4 dimensional matrix. t is for the t th row YTT and
  //  Yt(t-1)
  //  the third index is for the location. 1 for diag and 2 for the subdiag
  //  below the diag.
  std::memset(&L[0], 0, 5800U * sizeof(real_T));
  //  Compute L_11
  st.site = &of_emlrtRSI;
  for (i = 0; i < 10; i++) {
    for (i1 = 0; i1 < 10; i1++) {
      A[i1 + 10 * i] = Y[58 * i + 580 * i1];
    }
  }
  b_st.site = &qf_emlrtRSI;
  coder::internal::chol(b_st, A, n);
  if (n > 10) {
    emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (n < 1) {
    n = 0;
  }
  for (i = 0; i < n; i++) {
    for (i1 = 0; i1 < n; i1++) {
      temp_data[i1 + n * i] = A[i + 10 * i1];
    }
  }
  iv[0] = 10;
  temp[0] = n;
  iv[1] = 10;
  temp[1] = n;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &temp[0], 2, &sc_emlrtECI,
                                (emlrtCTX)&sp);
  for (i = 0; i < 10; i++) {
    for (i1 = 0; i1 < 10; i1++) {
      L[58 * i1 + 580 * i] = temp_data[i1 + n * i];
    }
  }
  //  Compute remaining L's
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 < 28)) {
    real_T d[10];
    int32_T info;
    boolean_T exitg2;
    boolean_T y;
    //  Compute L_{i+1,i} if i < T
    for (info = 0; info < 10; info++) {
      i = info + info * 10;
      d[info] = L[((b_i + 58 * (i % 10)) + 580 * (i / 10)) - 1];
    }
    y = false;
    info = 0;
    exitg2 = false;
    while ((!exitg2) && (info < 10)) {
      if (d[info] == 0.0) {
        y = true;
        exitg2 = true;
      } else {
        info++;
      }
    }
    if (y) {
      exitg1 = true;
    } else {
      //  Replace the division by the for loop implementation
      for (i = 0; i < 10; i++) {
        for (i1 = 0; i1 < 10; i1++) {
          temp_data[i1 + 10 * i] = Y[((b_i + 58 * i) + 580 * i1) + 29];
        }
      }
      std::memset(&A[0], 0, 100U * sizeof(real_T));
      for (info = 0; info < 10; info++) {
        for (int32_T c_i{0}; c_i < 10; c_i++) {
          n = info + 10 * c_i;
          A[n] = temp_data[n];
          for (int32_T j{0}; j < c_i; j++) {
            i = j + c_i * 10;
            A[n] -= L[((b_i + 58 * (i % 10)) + 580 * (i / 10)) - 1] *
                    A[info + 10 * j];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }
          i = c_i + c_i * 10;
          A[n] /= L[((b_i + 58 * (i % 10)) + 580 * (i / 10)) - 1];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      for (i = 0; i < 10; i++) {
        for (i1 = 0; i1 < 10; i1++) {
          L[((b_i + 58 * i1) + 580 * i) + 29] = A[i + 10 * i1];
        }
      }
      //  Compute L_{i,i}
      st.site = &pf_emlrtRSI;
      for (i = 0; i < 10; i++) {
        for (i1 = 0; i1 < 10; i1++) {
          temp_data[i1 + 10 * i] = L[((b_i + 58 * i) + 580 * i1) + 29];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 100U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (int32_T c_i{0}; c_i < 10; c_i++) {
        for (int32_T j{0}; j <= c_i; j++) {
          real_T b_d;
          i = j + 10 * c_i;
          b_d = C[i];
          for (info = 0; info < 10; info++) {
            i1 = info + c_i * 10;
            b_d += L[((b_i + 58 * (i1 % 10)) + 580 * (i1 / 10)) + 29] *
                   temp_data[j + 10 * info];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          C[i] = b_d;
          //  Use the computed value for the symmetric element
          C[c_i + 10 * j] = C[i];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < 10; i++) {
        for (i1 = 0; i1 < 10; i1++) {
          A[i1 + 10 * i] = Y[(b_i + 58 * i) + 580 * i1] - C[i + 10 * i1];
        }
      }
      b_st.site = &qf_emlrtRSI;
      info = coder::internal::chol(b_st, A, n);
      if (n > 10) {
        emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      if (n < 1) {
        n = 0;
      }
      for (i = 0; i < n; i++) {
        for (i1 = 0; i1 < n; i1++) {
          temp_data[i1 + n * i] = A[i + 10 * i1];
        }
      }
      if (info != 0) {
        exitg1 = true;
      } else {
        iv[0] = 10;
        temp[0] = n;
        iv[1] = 10;
        temp[1] = n;
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &temp[0], 2, &tc_emlrtECI,
                                      (emlrtCTX)&sp);
        for (i = 0; i < 10; i++) {
          for (i1 = 0; i1 < 10; i1++) {
            L[(b_i + 58 * i1) + 580 * i] = temp_data[i1 + n * i];
          }
        }
        b_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
    }
  }
}

// End of code generation (dev_cholesky_special.cpp)
