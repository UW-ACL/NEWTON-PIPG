//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_solve_LTv.cpp
//
// Code generation for function 'dev_solve_LTv'
//

// Include files
#include "dev_solve_LTv.h"
#include "dev_newtonxpipg_data.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo ub_emlrtRSI{
    10,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    12,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    13,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pathName
};

static emlrtECInfo i_emlrtECI{
    1,               // nDims
    12,              // lineNo
    22,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pName
};

static emlrtECInfo j_emlrtECI{
    -1,              // nDims
    10,              // lineNo
    13,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    1,               // iFirst
    1632,            // iLast
    12,              // lineNo
    49,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    1,               // iFirst
    1632,            // iLast
    10,              // lineNo
    15,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m", // pName
    3                                     // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    1,               // iFirst
    1632,            // iLast
    12,              // lineNo
    24,              // colNo
    "v",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    8,                        // lineNo
    25,                       // colNo
    "B",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    1,                        // iFirst
    32,                       // iLast
    10,                       // lineNo
    42,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

// Function Definitions
void dev_solve_LTv(const emlrtStack *sp, const real_T L[104448],
                   const real_T v[1632], real_T X[1632])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T b_tmp_data[1632];
  real_T y[32];
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::memset(&X[0], 0, 1632U * sizeof(real_T));
  for (int32_T t{0}; t < 51; t++) {
    int32_T a;
    int32_T b;
    int32_T idx_size_idx_1;
    int16_T idx_data[1632];
    a = ((50 - t) << 5) + 1;
    b = (51 - t) << 5;
    if (b < a) {
      idx_size_idx_1 = 0;
    } else {
      b -= a;
      idx_size_idx_1 = b + 1;
      for (int32_T i{0}; i <= b; i++) {
        idx_data[i] = static_cast<int16_T>(a + i);
      }
    }
    if (51 - t == 51) {
      real_T U[1024];
      int16_T tmp_data[1632];
      for (int32_T i{0}; i < idx_size_idx_1; i++) {
        b = idx_data[i];
        if (b > 1632) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 1632, &f_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tmp_data[i] = static_cast<int16_T>(b);
      }
      if (idx_size_idx_1 != 32) {
        emlrtSubAssignSizeCheck1dR2017a(idx_size_idx_1, 32, &j_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      st.site = &ub_emlrtRSI;
      for (int32_T b_i{0}; b_i < 32; b_i++) {
        for (int32_T i{0}; i < 32; i++) {
          U[i + (b_i << 5)] = L[(b_i + (i << 5)) + 102400];
        }
        y[b_i] = 0.0;
      }
      for (int32_T b_i{0}; b_i < 32; b_i++) {
        if (32 - b_i > idx_size_idx_1) {
          emlrtDynamicBoundsCheckR2012b(32 - b_i, 1, idx_size_idx_1,
                                        &h_emlrtBCI, &st);
        }
        y[31 - b_i] = v[idx_data[31 - b_i] - 1];
        for (a = 0; a < b_i; a++) {
          b = (a - b_i) + 32;
          if (b + 1 > 32) {
            emlrtDynamicBoundsCheckR2012b(b + 1, 1, 32, &i_emlrtBCI, &st);
          }
          y[31 - b_i] -= U[31 - (b_i - (b << 5))] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[31 - b_i] /= U[(((31 - b_i) << 5) - b_i) + 31];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (int32_T i{0}; i < 32; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    } else {
      real_T U[1024];
      real_T temp_v[32];
      int16_T tmp_data[1632];
      for (int32_T i{0}; i < idx_size_idx_1; i++) {
        b = idx_data[i] + 32;
        if (b > 1632) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 1632, &e_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_tmp_data[i] = X[b - 1];
      }
      for (int32_T i{0}; i < idx_size_idx_1; i++) {
        b = idx_data[i];
        if (b > 1632) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 1632, &g_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((idx_size_idx_1 != 32) && (idx_size_idx_1 != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx_size_idx_1, 32, &i_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      st.site = &vb_emlrtRSI;
      b_st.site = &u_emlrtRSI;
      if (idx_size_idx_1 != 32) {
        if (idx_size_idx_1 == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &d_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      TRANSB1 = 'T';
      TRANSA1 = 'T';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)32;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)32;
      lda_t = (ptrdiff_t)32;
      ldb_t = (ptrdiff_t)1;
      ldc_t = (ptrdiff_t)32;
      dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
            (real_T *)&L[((51 - t) << 11) + 1024], &lda_t, &b_tmp_data[0],
            &ldb_t, &beta1, &y[0], &ldc_t);
      for (int32_T i{0}; i < 32; i++) {
        b = idx_data[i];
        temp_v[i] = v[b - 1] - y[i];
        tmp_data[i] = static_cast<int16_T>(b);
      }
      st.site = &wb_emlrtRSI;
      for (int32_T b_i{0}; b_i < 32; b_i++) {
        for (int32_T i{0}; i < 32; i++) {
          U[i + (b_i << 5)] = L[(b_i + (i << 5)) + ((50 - t) << 11)];
        }
        y[b_i] = 0.0;
      }
      for (int32_T b_i{0}; b_i < 32; b_i++) {
        y[31 - b_i] = temp_v[31 - b_i];
        for (a = 0; a < b_i; a++) {
          b = (a - b_i) + 32;
          if (b + 1 > 32) {
            emlrtDynamicBoundsCheckR2012b(b + 1, 1, 32, &i_emlrtBCI, &st);
          }
          y[31 - b_i] -= U[31 - (b_i - (b << 5))] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[31 - b_i] /= U[(((31 - b_i) << 5) - b_i) + 31];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (int32_T i{0}; i < 32; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (dev_solve_LTv.cpp)
