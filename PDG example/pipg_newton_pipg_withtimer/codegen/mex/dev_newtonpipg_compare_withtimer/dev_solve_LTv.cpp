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
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo eg_emlrtRSI{
    10,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo fg_emlrtRSI{
    12,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo gg_emlrtRSI{
    13,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtBCInfo pg_emlrtBCI{
    1,                        // iFirst
    10,                       // iLast
    10,                       // lineNo
    42,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\upper_triangular_solve.m", // pName
    0                                                       // checkKind
};

static emlrtBCInfo qg_emlrtBCI{
    1,               // iFirst
    290,             // iLast
    10,              // lineNo
    15,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    3                                              // checkKind
};

static emlrtBCInfo rg_emlrtBCI{
    1,               // iFirst
    290,             // iLast
    12,              // lineNo
    24,              // colNo
    "v",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo sg_emlrtBCI{
    1,               // iFirst
    290,             // iLast
    12,              // lineNo
    49,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    0                                              // checkKind
};

static emlrtDCInfo kd_emlrtDCI{
    12,              // lineNo
    49,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo tg_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    8,                        // lineNo
    25,                       // colNo
    "B",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\upper_triangular_solve.m", // pName
    0                                                       // checkKind
};

static emlrtECInfo bd_emlrtECI{
    1,               // nDims
    12,              // lineNo
    22,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtECInfo cd_emlrtECI{
    -1,              // nDims
    10,              // lineNo
    13,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

// Function Definitions
void dev_solve_LTv(const emlrtStack &sp, const real_T L[5800],
                   const real_T v[290], real_T X[290])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T idx_data[290];
  real_T dv[2];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::memset(&X[0], 0, 290U * sizeof(real_T));
  for (int32_T t{0}; t < 29; t++) {
    int32_T a;
    int32_T b;
    int32_T i;
    int32_T loop_ub;
    a = (28 - t) * 10;
    b = (29 - t) * 10;
    if (b < a + 1) {
      loop_ub = 0;
    } else {
      loop_ub = b - a;
      for (i = 0; i < loop_ub; i++) {
        idx_data[i] = static_cast<real_T>(a + i) + 1.0;
      }
    }
    if (29 - t == 29) {
      real_T U[100];
      real_T y[10];
      int16_T tmp_data[290];
      for (i = 0; i < loop_ub; i++) {
        b = static_cast<int32_T>(idx_data[i]);
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &qg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        tmp_data[i] = static_cast<int16_T>(b);
      }
      if (loop_ub != 10) {
        emlrtSubAssignSizeCheck1dR2017a(loop_ub, 10, &cd_emlrtECI,
                                        (emlrtConstCTX)&sp);
      }
      st.site = &eg_emlrtRSI;
      for (int32_T b_i{0}; b_i < 10; b_i++) {
        for (i = 0; i < 10; i++) {
          U[i + 10 * b_i] = L[(58 * b_i + 580 * i) + 28];
        }
        y[b_i] = 0.0;
      }
      for (int32_T b_i{0}; b_i < 10; b_i++) {
        if (10 - b_i > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(10 - b_i, 1, loop_ub, &tg_emlrtBCI,
                                        &st);
        }
        y[9 - b_i] =
            v[static_cast<int32_T>(
                  idx_data[(9 - b_i) % loop_ub +
                           loop_ub * static_cast<int32_T>(
                                         static_cast<uint32_T>(9 - b_i) /
                                         static_cast<uint32_T>(loop_ub))]) -
              1];
        for (a = 0; a < b_i; a++) {
          b = (a - b_i) + 10;
          if (b + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(b + 1, 1, 10, &pg_emlrtBCI, &st);
          }
          y[9 - b_i] -= U[b + 10 * (9 - b_i)] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[9 - b_i] /= U[(10 * (9 - b_i) - b_i) + 9];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < loop_ub; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    } else {
      real_T U[100];
      real_T temp_v[10];
      real_T y[10];
      int16_T tmp_data[290];
      a = (loop_ub / 2) << 1;
      b = a - 2;
      for (i = 0; i <= b; i += 2) {
        __m128d r;
        r = _mm_loadu_pd(&idx_data[i]);
        _mm_storeu_pd(&dv[0], _mm_add_pd(r, _mm_set1_pd(10.0)));
        if (dv[0] != static_cast<int32_T>(muDoubleScalarFloor(dv[0]))) {
          emlrtIntegerCheckR2012b(dv[0], &kd_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (dv[1] != static_cast<int32_T>(muDoubleScalarFloor(dv[1]))) {
          emlrtIntegerCheckR2012b(dv[1], &kd_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(dv[0]) < 1) ||
            (static_cast<int32_T>(dv[0]) > 290)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(dv[0]), 1, 290,
                                        &sg_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(dv[1]) < 1) ||
            (static_cast<int32_T>(dv[1]) > 290)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(dv[1]), 1, 290,
                                        &sg_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      for (i = a; i < loop_ub; i++) {
        b = static_cast<int32_T>(idx_data[i]) + 10;
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &sg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      for (i = 0; i < loop_ub; i++) {
        b = static_cast<int32_T>(idx_data[i]);
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &rg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      if ((loop_ub != 10) && (loop_ub != 1)) {
        emlrtDimSizeImpxCheckR2021b(loop_ub, 10, &bd_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      st.site = &fg_emlrtRSI;
      b_st.site = &s_emlrtRSI;
      if (loop_ub != 10) {
        if (loop_ub == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &o_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (int32_T b_i{0}; b_i < 10; b_i++) {
        real_T s;
        s = 0.0;
        for (b = 0; b < 10; b++) {
          i = b_i + b * 10;
          s += L[((58 * (i % 10) - t) + 580 * (i / 10)) + 58] *
               X[static_cast<int32_T>(idx_data[b]) + 9];
        }
        y[b_i] = s;
      }
      for (i = 0; i < 10; i++) {
        b = static_cast<int32_T>(idx_data[i]);
        temp_v[i] = v[b - 1] - y[i];
        tmp_data[i] = static_cast<int16_T>(b);
      }
      st.site = &gg_emlrtRSI;
      for (int32_T b_i{0}; b_i < 10; b_i++) {
        for (i = 0; i < 10; i++) {
          U[i + 10 * b_i] = L[((58 * b_i - t) + 580 * i) + 28];
        }
        y[b_i] = 0.0;
      }
      for (int32_T b_i{0}; b_i < 10; b_i++) {
        y[9 - b_i] = temp_v[9 - b_i];
        for (a = 0; a < b_i; a++) {
          b = (a - b_i) + 10;
          if (b + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(b + 1, 1, 10, &pg_emlrtBCI, &st);
          }
          y[9 - b_i] -= U[b + 10 * (9 - b_i)] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[9 - b_i] /= U[(10 * (9 - b_i) - b_i) + 9];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < 10; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_solve_LTv.cpp)
