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
#include "dev_newtonxpipg_data.h"
#include "rt_nonfinite.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo jb_emlrtRSI{
    12,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    27,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    15,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m" // pathName
};

static emlrtECInfo e_emlrtECI{
    -1,                     // nDims
    12,                     // lineNo
    2,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_cholesky_special.m" // pName
};

static emlrtECInfo f_emlrtECI{
    -1,                     // nDims
    31,                     // lineNo
    5,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_cholesky_special.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    16,     // lineNo
    5,      // colNo
    "chol", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m" // pName
};

// Function Definitions
void dev_cholesky_special(const emlrtStack *sp, const real_T Y[15360],
                          real_T L[15360], real_T *flag)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T A[256];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T i;
  int32_T info;
  int32_T n;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  //  has the sameshape as the aout put of dev_compute_HPHT
  //  the Y matrix is a 4 dimensional matrix. t is for the t th row YTT and
  //  Yt(t-1)
  //  the third index is for the location. 1 for diag and 2 for off-diag
  std::memset(&L[0], 0, 15360U * sizeof(real_T));
  //  Compute L_11
  st.site = &jb_emlrtRSI;
  std::copy(&Y[0], &Y[256], &A[0]);
  b_st.site = &lb_emlrtRSI;
  coder::internal::chol(&b_st, A, &info, &n);
  if (n > 16) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  *flag = info;
  iv[0] = 16;
  iv[1] = 16;
  if (n < 1) {
    iv1[0] = 0;
    iv1[1] = 0;
  } else {
    iv1[0] = n;
    iv1[1] = n;
  }
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &e_emlrtECI,
                                (emlrtCTX)sp);
  std::copy(&A[0], &A[256], &L[0]);
  //  Compute remaining L's
  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i - 1 < 29)) {
    real_T d[16];
    int32_T k;
    boolean_T exitg2;
    boolean_T y;
    //  Compute L_{i+1,i} if i < T
    for (k = 0; k < 16; k++) {
      d[k] = L[(k + (k << 4)) + ((i - 1) << 9)];
    }
    y = false;
    k = 0;
    exitg2 = false;
    while ((!exitg2) && (k < 16)) {
      if (d[k] == 0.0) {
        y = true;
        exitg2 = true;
      } else {
        k++;
      }
    }
    if (y) {
      *flag = 1.0;
      exitg1 = true;
    } else {
      real_T B[256];
      int32_T b_i;
      //  Replace the division by the for loop implementation
      for (info = 0; info < 16; info++) {
        for (b_i = 0; b_i < 16; b_i++) {
          B[b_i + (info << 4)] = Y[((info + (b_i << 4)) + (i << 9)) + 256];
        }
      }
      std::memset(&A[0], 0, 256U * sizeof(real_T));
      for (k = 0; k < 16; k++) {
        info = k << 4;
        for (int32_T c_i{0}; c_i < 16; c_i++) {
          n = c_i + info;
          A[n] = B[n];
          for (int32_T j{0}; j < c_i; j++) {
            A[n] -= L[(c_i + (j << 4)) + ((i - 1) << 9)] * A[j + info];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          A[n] /= L[(c_i + (c_i << 4)) + ((i - 1) << 9)];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (info = 0; info < 16; info++) {
        for (b_i = 0; b_i < 16; b_i++) {
          L[((b_i + (info << 4)) + (i << 9)) + 256] = A[info + (b_i << 4)];
        }
      }
      //  Compute L_{i,i}
      st.site = &kb_emlrtRSI;
      for (info = 0; info < 16; info++) {
        for (b_i = 0; b_i < 16; b_i++) {
          B[b_i + (info << 4)] = L[((info + (b_i << 4)) + (i << 9)) + 256];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&A[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (int32_T c_i{0}; c_i < 16; c_i++) {
        for (int32_T j{0}; j <= c_i; j++) {
          real_T b_d;
          info = j << 4;
          b_i = c_i + info;
          b_d = A[b_i];
          for (k = 0; k < 16; k++) {
            b_d += L[((c_i + (k << 4)) + (i << 9)) + 256] * B[k + info];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          A[b_i] = b_d;
          //  Use the computed value for the symmetric element
          A[j + (c_i << 4)] = A[b_i];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (info = 0; info < 16; info++) {
        for (b_i = 0; b_i < 16; b_i++) {
          n = b_i + (info << 4);
          A[n] = Y[n + (i << 9)] - A[n];
        }
      }
      b_st.site = &lb_emlrtRSI;
      coder::internal::chol(&b_st, A, &info, &n);
      if (n > 16) {
        emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      *flag = info;
      if (info != 0) {
        exitg1 = true;
      } else {
        iv[0] = 16;
        iv[1] = 16;
        if (n < 1) {
          iv1[0] = 0;
          iv1[1] = 0;
        } else {
          iv1[0] = n;
          iv1[1] = n;
        }
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI,
                                      (emlrtCTX)sp);
        for (info = 0; info < 16; info++) {
          std::copy(
              &A[info * 16],
              &A[static_cast<int32_T>(static_cast<uint32_T>(info * 16) + 16U)],
              &L[info * 16 + i * 512]);
        }
        i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    }
  }
}

// End of code generation (dev_cholesky_special.cpp)
