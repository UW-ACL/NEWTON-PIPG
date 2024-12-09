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
#include "dev_newtonpipg_g_with_timer_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "emlrt.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo ki_emlrtRSI{
    8,               // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo li_emlrtRSI{
    10,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo mi_emlrtRSI{
    12,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo ni_emlrtRSI{
    13,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtECInfo uc_emlrtECI{
    -1,              // nDims
    10,              // lineNo
    13,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtECInfo vc_emlrtECI{
    1,               // nDims
    12,              // lineNo
    22,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtDCInfo yb_emlrtDCI{
    10,              // lineNo
    15,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
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

static emlrtBCInfo qd_emlrtBCI{
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

static emlrtDCInfo ac_emlrtDCI{
    12,              // lineNo
    49,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo bc_emlrtDCI{
    12,              // lineNo
    24,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
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

static emlrtBCInfo sd_emlrtBCI{
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

static emlrtBCInfo td_emlrtBCI{
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

static emlrtRTEInfo qi_emlrtRTEI{
    8,               // lineNo
    9,               // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtRTEInfo ri_emlrtRTEI{
    12,              // lineNo
    47,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtRTEInfo si_emlrtRTEI{
    13,              // lineNo
    15,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtRTEInfo ti_emlrtRTEI{
    10,              // lineNo
    15,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

// Function Definitions
void dev_solve_LTv(const emlrtStack &sp, const real_T L[5800],
                   const real_T v[290], real_T X[290])
{
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel c_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> idx;
  coder::array<real_T, 2U> r1;
  coder::array<int16_T, 2U> r;
  emlrtStack b_st;
  emlrtStack st;
  real_T y[10];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_solve_LTv_complete_name,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  std::memset(&X[0], 0, 290U * sizeof(real_T));
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  for (int32_T t{0}; t < 29; t++) {
    int32_T a;
    int32_T aoffset;
    int32_T j;
    int32_T loop_ub;
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    st.site = &ki_emlrtRSI;
    a = (28 - t) * 10 + 1;
    aoffset = (29 - t) * 10;
    b_st.site = &qb_emlrtRSI;
    if (aoffset < a) {
      idx.set_size(&qi_emlrtRTEI, &b_st, 1, 0);
    } else {
      loop_ub = aoffset - a;
      idx.set_size(&qi_emlrtRTEI, &b_st, 1, loop_ub + 1);
      for (j = 0; j <= loop_ub; j++) {
        idx[j] = a + j;
      }
    }
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    if (29 - t == 29) {
      real_T U[100];
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      loop_ub = idx.size(1);
      r.set_size(&ti_emlrtRTEI, &sp, 1, idx.size(1));
      for (j = 0; j < loop_ub; j++) {
        if (idx[j] != idx[j]) {
          emlrtIntegerCheckR2012b(idx[j], &yb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        a = static_cast<int32_T>(idx[j]);
        if (a > 290) {
          emlrtDynamicBoundsCheckR2012b(a, 1, 290, &pd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        r[j] = static_cast<int16_T>(idx[j]);
      }
      aoffset = r.size(1);
      if (r.size(1) != 10) {
        emlrtSubAssignSizeCheck1dR2017a(r.size(1), 10, &uc_emlrtECI,
                                        (emlrtConstCTX)&sp);
      }
      st.site = &li_emlrtRSI;
      for (j = 0; j < 10; j++) {
        for (a = 0; a < 10; a++) {
          U[a + 10 * j] = L[(j + 10 * a) + 5600];
        }
      }
      emlrtMEXProfilingFunctionEntryCPP(
          (char_T *)c_upper_triangular_solve_comple,
          static_cast<boolean_T>(isMexOutdated), &b_profilerSentinel);
      emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
      std::memset(&y[0], 0, 10U * sizeof(real_T));
      emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
      for (int32_T i{0}; i < 10; i++) {
        emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
        if (10 - i > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(10 - i, 1, loop_ub, &sd_emlrtBCI, &st);
        }
        y[9 - i] = v[static_cast<int32_T>(idx[9 - i]) - 1];
        emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
        for (j = 0; j < i; j++) {
          a = (j - i) + 10;
          emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
          if (a + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(a + 1, 1, 10, &td_emlrtBCI, &st);
          }
          y[9 - i] -= U[9 - (i - 10 * a)] * y[a];
          emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
        y[9 - i] /= U[(10 * (9 - i) - i) + 9];
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
      for (j = 0; j < aoffset; j++) {
        X[r[j] - 1] = y[j];
      }
      emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
    } else {
      real_T U[100];
      real_T temp_v[10];
      real_T s;
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      loop_ub = idx.size(1);
      r1.set_size(&ri_emlrtRTEI, &sp, 1, idx.size(1));
      for (j = 0; j < loop_ub; j++) {
        s = idx[j] + 10.0;
        if (s != s) {
          emlrtIntegerCheckR2012b(s, &ac_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (static_cast<int32_T>(s) > 290) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1, 290,
                                        &qd_emlrtBCI, (emlrtConstCTX)&sp);
        }
        r1[j] = X[static_cast<int32_T>(s) - 1];
      }
      for (j = 0; j < loop_ub; j++) {
        if (idx[j] != idx[j]) {
          emlrtIntegerCheckR2012b(idx[j], &bc_emlrtDCI, (emlrtConstCTX)&sp);
        }
        a = static_cast<int32_T>(idx[j]);
        if (a > 290) {
          emlrtDynamicBoundsCheckR2012b(a, 1, 290, &rd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      if ((idx.size(1) != 10) && (idx.size(1) != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx.size(1), 10, &vc_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      st.site = &mi_emlrtRSI;
      b_st.site = &r_emlrtRSI;
      if (idx.size(1) != 10) {
        if (idx.size(1) == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &g_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (int32_T i{0}; i < 10; i++) {
        aoffset = i * 10;
        s = 0.0;
        for (a = 0; a < 10; a++) {
          j = aoffset + a;
          s += L[((j % 10 + 10 * (j / 10)) + 200 * (29 - t)) + 100] * r1[a];
        }
        y[i] = s;
      }
      for (j = 0; j < 10; j++) {
        temp_v[j] = v[static_cast<int32_T>(idx[j]) - 1] - y[j];
      }
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
      r.set_size(&si_emlrtRTEI, &sp, 1, 10);
      for (j = 0; j < 10; j++) {
        r[j] = static_cast<int16_T>(idx[j]);
      }
      st.site = &ni_emlrtRSI;
      for (j = 0; j < 10; j++) {
        for (a = 0; a < 10; a++) {
          U[a + 10 * j] = L[(j + 10 * a) + 200 * (28 - t)];
        }
      }
      emlrtMEXProfilingFunctionEntryCPP(
          (char_T *)c_upper_triangular_solve_comple,
          static_cast<boolean_T>(isMexOutdated), &c_profilerSentinel);
      emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
      std::memset(&y[0], 0, 10U * sizeof(real_T));
      emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
      for (int32_T i{0}; i < 10; i++) {
        emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
        y[9 - i] = temp_v[9 - i];
        emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
        for (j = 0; j < i; j++) {
          a = (j - i) + 10;
          emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
          if (a + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(a + 1, 1, 10, &td_emlrtBCI, &st);
          }
          y[9 - i] -= U[9 - (i - 10 * a)] * y[a];
          emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
        y[9 - i] /= U[(10 * (9 - i) - i) + 9];
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingFunctionExitCPP(&c_profilerSentinel);
      for (j = 0; j < 10; j++) {
        X[r[j] - 1] = y[j];
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
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_solve_LTv.cpp)
