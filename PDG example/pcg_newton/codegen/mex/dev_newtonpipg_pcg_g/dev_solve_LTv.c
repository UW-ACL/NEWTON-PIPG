/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_solve_LTv.c
 *
 * Code generation for function 'dev_solve_LTv'
 *
 */

/* Include files */
#include "dev_solve_LTv.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo th_emlrtRSI = {
    8,               /* lineNo */
    "dev_solve_LTv", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    10,              /* lineNo */
    "dev_solve_LTv", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    12,              /* lineNo */
    "dev_solve_LTv", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pathName */
};

static emlrtRSInfo wh_emlrtRSI = {
    13,              /* lineNo */
    "dev_solve_LTv", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pathName */
};

static emlrtBCInfo qd_emlrtBCI = {
    1,                        /* iFirst */
    10,                       /* iLast */
    10,                       /* lineNo */
    42,                       /* colNo */
    "U",                      /* aName */
    "upper_triangular_solve", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\upper_triangular_solve.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    1,               /* iFirst */
    290,             /* iLast */
    10,              /* lineNo */
    15,              /* colNo */
    "X",             /* aName */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", /* pName */
    3                                              /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = {
    10,              /* lineNo */
    15,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", /* pName */
    1                                              /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = {
    1,               /* iFirst */
    290,             /* iLast */
    12,              /* lineNo */
    24,              /* colNo */
    "v",             /* aName */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", /* pName */
    0                                              /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = {
    12,              /* lineNo */
    24,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", /* pName */
    1                                              /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = {
    1,               /* iFirst */
    290,             /* iLast */
    12,              /* lineNo */
    49,              /* colNo */
    "X",             /* aName */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", /* pName */
    0                                              /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = {
    12,              /* lineNo */
    49,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", /* pName */
    1                                              /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    8,                        /* lineNo */
    25,                       /* colNo */
    "B",                      /* aName */
    "upper_triangular_solve", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\upper_triangular_solve.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtECInfo rc_emlrtECI = {
    1,               /* nDims */
    12,              /* lineNo */
    22,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pName */
};

static emlrtECInfo sc_emlrtECI = {
    -1,              /* nDims */
    10,              /* lineNo */
    13,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = {
    8,               /* lineNo */
    9,               /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = {
    10,              /* lineNo */
    15,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = {
    13,              /* lineNo */
    15,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = {
    13,              /* lineNo */
    13,              /* colNo */
    "dev_solve_LTv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" /* pName */
};

/* Function Definitions */
void dev_solve_LTv(const emlrtStack *sp, const real_T L[5800],
                   const real_T v[290], real_T X[290])
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int16_T *r;
  emxArray_real_T *idx;
  real_T dv[2];
  real_T *idx_data;
  int32_T b;
  int32_T i;
  int32_T j;
  int32_T t;
  int16_T *r2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  memset(&X[0], 0, 290U * sizeof(real_T));
  emxInit_real_T(sp, &idx, 2, &ok_emlrtRTEI);
  idx_data = idx->data;
  emxInit_int16_T(sp, &r, &rk_emlrtRTEI);
  for (t = 0; t < 29; t++) {
    int32_T a;
    int32_T loop_ub;
    st.site = &th_emlrtRSI;
    a = (28 - t) * 10;
    b = (29 - t) * 10;
    b_st.site = &ub_emlrtRSI;
    if (b < a + 1) {
      idx->size[1] = 0;
      idx->size[0] = 1;
    } else {
      loop_ub = b - a;
      j = idx->size[0] * idx->size[1];
      idx->size[1] = loop_ub;
      idx->size[0] = 1;
      emxEnsureCapacity_real_T(&b_st, idx, j, &ok_emlrtRTEI);
      idx_data = idx->data;
      for (j = 0; j < loop_ub; j++) {
        idx_data[j] = (real_T)(a + j) + 1.0;
      }
    }
    if (29 - t == 29) {
      real_T U[100];
      real_T y[10];
      loop_ub = idx->size[1];
      j = r->size[0] * r->size[1];
      r->size[1] = idx->size[1];
      r->size[0] = 1;
      emxEnsureCapacity_int16_T(sp, r, j, &pk_emlrtRTEI);
      r2 = r->data;
      for (j = 0; j < loop_ub; j++) {
        if (idx_data[j] != idx_data[j]) {
          emlrtIntegerCheckR2012b(idx_data[j], &yb_emlrtDCI, (emlrtConstCTX)sp);
        }
        b = (int32_T)idx_data[j];
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &rd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r2[j] = (int16_T)b;
      }
      a = r->size[1];
      if (r->size[1] != 10) {
        emlrtSubAssignSizeCheck1dR2017a(r->size[1], 10, &sc_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      st.site = &uh_emlrtRSI;
      for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
          U[j + 10 * i] = L[(58 * i + 580 * j) + 28];
        }
        y[i] = 0.0;
      }
      for (i = 0; i < 10; i++) {
        if (10 - i > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(10 - i, 1, loop_ub, &ud_emlrtBCI, &st);
        }
        y[9 - i] =
            v[(int32_T)
                  idx_data[(9 - i) % idx->size[1] +
                           idx->size[1] * (int32_T)((uint32_T)(9 - i) /
                                                    (uint32_T)idx->size[1])] -
              1];
        for (j = 0; j < i; j++) {
          b = (j - i) + 10;
          if (b + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(b + 1, 1, 10, &qd_emlrtBCI, &st);
          }
          y[9 - i] -= U[b + 10 * (9 - i)] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[9 - i] /= U[(10 * (9 - i) - i) + 9];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (j = 0; j < a; j++) {
        X[r2[j] - 1] = y[j];
      }
    } else {
      real_T U[100];
      real_T temp_v[10];
      real_T y[10];
      real_T s;
      loop_ub = idx->size[1];
      b = (idx->size[1] / 2) << 1;
      a = b - 2;
      for (j = 0; j <= a; j += 2) {
        __m128d r1;
        r1 = _mm_loadu_pd(&idx_data[j]);
        _mm_storeu_pd(&dv[0], _mm_add_pd(r1, _mm_set1_pd(10.0)));
        if (dv[0] != (int32_T)muDoubleScalarFloor(dv[0])) {
          emlrtIntegerCheckR2012b(dv[0], &bc_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (dv[1] != (int32_T)muDoubleScalarFloor(dv[1])) {
          emlrtIntegerCheckR2012b(dv[1], &bc_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)dv[0] < 1) || ((int32_T)dv[0] > 290)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)dv[0], 1, 290, &td_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (((int32_T)dv[1] < 1) || ((int32_T)dv[1] > 290)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)dv[1], 1, 290, &td_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      for (j = b; j < loop_ub; j++) {
        s = idx_data[j] + 10.0;
        if (s != s) {
          emlrtIntegerCheckR2012b(s, &bc_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((int32_T)s > 290) {
          emlrtDynamicBoundsCheckR2012b((int32_T)s, 1, 290, &td_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      for (j = 0; j < loop_ub; j++) {
        if (idx_data[j] != idx_data[j]) {
          emlrtIntegerCheckR2012b(idx_data[j], &ac_emlrtDCI, (emlrtConstCTX)sp);
        }
        b = (int32_T)idx_data[j];
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &sd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((idx->size[1] != 10) && (idx->size[1] != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx->size[1], 10, &rc_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      st.site = &vh_emlrtRSI;
      b_st.site = &bb_emlrtRSI;
      if (idx->size[1] != 10) {
        if (idx->size[1] == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &j_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (i = 0; i < 10; i++) {
        s = 0.0;
        for (b = 0; b < 10; b++) {
          j = i + b * 10;
          s += L[((58 * (j % 10) - t) + 580 * (j / 10)) + 58] *
               X[(int32_T)idx_data[b] + 9];
        }
        y[i] = s;
      }
      for (j = 0; j < 10; j++) {
        temp_v[j] = v[(int32_T)idx_data[j] - 1] - y[j];
      }
      j = r->size[0] * r->size[1];
      r->size[1] = 10;
      r->size[0] = 1;
      emxEnsureCapacity_int16_T(sp, r, j, &qk_emlrtRTEI);
      r2 = r->data;
      for (j = 0; j < 10; j++) {
        r2[j] = (int16_T)idx_data[j];
      }
      st.site = &wh_emlrtRSI;
      for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
          U[j + 10 * i] = L[((58 * i - t) + 580 * j) + 28];
        }
        y[i] = 0.0;
      }
      for (i = 0; i < 10; i++) {
        y[9 - i] = temp_v[9 - i];
        for (j = 0; j < i; j++) {
          b = (j - i) + 10;
          if (b + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(b + 1, 1, 10, &qd_emlrtBCI, &st);
          }
          y[9 - i] -= U[b + 10 * (9 - i)] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[9 - i] /= U[(10 * (9 - i) - i) + 9];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (j = 0; j < 10; j++) {
        X[r2[j] - 1] = y[j];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_int16_T(sp, &r);
  emxFree_real_T(sp, &idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_solve_LTv.c) */
