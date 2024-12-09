/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_solve_Lv.c
 *
 * Code generation for function 'dev_solve_Lv'
 *
 */

/* Include files */
#include "dev_solve_Lv.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo qh_emlrtRSI = {
    8,              /* lineNo */
    "dev_solve_Lv", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    10,             /* lineNo */
    "dev_solve_Lv", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    12,             /* lineNo */
    "dev_solve_Lv", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pathName */
};

static emlrtBCInfo md_emlrtBCI = {
    1,              /* iFirst */
    290,            /* iLast */
    12,             /* lineNo */
    24,             /* colNo */
    "v",            /* aName */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = {
    12,             /* lineNo */
    24,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = {
    1,              /* iFirst */
    290,            /* iLast */
    10,             /* lineNo */
    15,             /* colNo */
    "X",            /* aName */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", /* pName */
    3                                             /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = {
    10,             /* lineNo */
    15,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", /* pName */
    1                                             /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = {
    12,             /* lineNo */
    46,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = {
    1,              /* iFirst */
    290,            /* iLast */
    12,             /* lineNo */
    46,             /* colNo */
    "X",            /* aName */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,                             /* iFirst */
    -1,                             /* iLast */
    8,                              /* lineNo */
    25,                             /* colNo */
    "B",                            /* aName */
    "small_lower_triangular_solve", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\small_lower_triangular_solve.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo pc_emlrtECI = {
    1,              /* nDims */
    12,             /* lineNo */
    22,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pName */
};

static emlrtECInfo qc_emlrtECI = {
    -1,             /* nDims */
    10,             /* lineNo */
    13,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = {
    8,              /* lineNo */
    9,              /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = {
    12,             /* lineNo */
    44,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = {
    10,             /* lineNo */
    15,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = {
    13,             /* lineNo */
    15,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = {
    13,             /* lineNo */
    13,             /* colNo */
    "dev_solve_Lv", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" /* pName */
};

/* Function Definitions */
void dev_solve_Lv(const emlrtStack *sp, const real_T L[5800],
                  const real_T v[290], real_T X[290])
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int16_T *r1;
  emxArray_real_T *idx;
  emxArray_real_T *r;
  real_T b_X[10];
  real_T *idx_data;
  real_T *r2;
  int32_T a;
  int32_T b;
  int32_T i;
  int32_T j;
  int32_T t;
  int16_T *r3;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  memset(&X[0], 0, 290U * sizeof(real_T));
  emxInit_real_T(sp, &idx, 2, &jk_emlrtRTEI);
  idx_data = idx->data;
  emxInit_real_T(sp, &r, 2, &kk_emlrtRTEI);
  emxInit_int16_T(sp, &r1, &nk_emlrtRTEI);
  for (t = 0; t < 29; t++) {
    int32_T loop_ub;
    st.site = &qh_emlrtRSI;
    a = t * 10;
    b = (t + 1) * 10;
    b_st.site = &ub_emlrtRSI;
    if (b < a + 1) {
      idx->size[1] = 0;
      idx->size[0] = 1;
    } else {
      loop_ub = b - a;
      i = idx->size[0] * idx->size[1];
      idx->size[1] = loop_ub;
      idx->size[0] = 1;
      emxEnsureCapacity_real_T(&b_st, idx, i, &jk_emlrtRTEI);
      idx_data = idx->data;
      for (i = 0; i < loop_ub; i++) {
        idx_data[i] = (real_T)(a + i) + 1.0;
      }
    }
    if (t + 1 == 1) {
      loop_ub = idx->size[1];
      i = r1->size[0] * r1->size[1];
      r1->size[1] = idx->size[1];
      r1->size[0] = 1;
      emxEnsureCapacity_int16_T(sp, r1, i, &lk_emlrtRTEI);
      r3 = r1->data;
      for (i = 0; i < loop_ub; i++) {
        if (idx_data[i] != idx_data[i]) {
          emlrtIntegerCheckR2012b(idx_data[i], &wb_emlrtDCI, (emlrtConstCTX)sp);
        }
        b = (int32_T)idx_data[i];
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &nd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r3[i] = (int16_T)b;
      }
      b = r1->size[1];
      if (r1->size[1] != 10) {
        emlrtSubAssignSizeCheck1dR2017a(r1->size[1], 10, &qc_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      st.site = &rh_emlrtRSI;
      memset(&b_X[0], 0, 10U * sizeof(real_T));
      for (a = 0; a < 10; a++) {
        if (a + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(a + 1, 1, loop_ub, &pd_emlrtBCI, &st);
        }
        b_X[a] = v[(int32_T)idx_data[a % idx->size[1] +
                                     idx->size[1] * (a / idx->size[1])] -
                   1];
        for (j = 0; j < a; j++) {
          i = j + a * 10;
          b_X[a] -= L[58 * (i % 10) + 580 * (i / 10)] * b_X[j];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        i = a + a * 10;
        b_X[a] /= L[58 * (i % 10) + 580 * (i / 10)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < b; i++) {
        X[r3[i] - 1] = b_X[i];
      }
    } else {
      real_T temp_v[10];
      real_T d;
      loop_ub = idx->size[1];
      i = r->size[0] * r->size[1];
      r->size[1] = idx->size[1];
      r->size[0] = 1;
      emxEnsureCapacity_real_T(sp, r, i, &kk_emlrtRTEI);
      r2 = r->data;
      for (i = 0; i < loop_ub; i++) {
        d = idx_data[i] - 10.0;
        if (d != d) {
          emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)d < 1) || ((int32_T)d > 290)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 290, &od_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r2[i] = X[(int32_T)d - 1];
      }
      for (i = 0; i < loop_ub; i++) {
        if (idx_data[i] != idx_data[i]) {
          emlrtIntegerCheckR2012b(idx_data[i], &vb_emlrtDCI, (emlrtConstCTX)sp);
        }
        b = (int32_T)idx_data[i];
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &md_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((idx->size[1] != 10) && (idx->size[1] != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx->size[1], 10, &pc_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      st.site = &sh_emlrtRSI;
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
        d = 0.0;
        for (b = 0; b < 10; b++) {
          d += r2[b] * L[((t + 58 * b) + 580 * i) + 29];
        }
        b_X[i] = d;
      }
      for (i = 0; i < 10; i++) {
        temp_v[i] = v[(int32_T)idx_data[i] - 1] - b_X[i];
      }
      i = r1->size[0] * r1->size[1];
      r1->size[1] = 10;
      r1->size[0] = 1;
      emxEnsureCapacity_int16_T(sp, r1, i, &mk_emlrtRTEI);
      r3 = r1->data;
      for (i = 0; i < 10; i++) {
        r3[i] = (int16_T)idx_data[i];
      }
      memset(&b_X[0], 0, 10U * sizeof(real_T));
      for (a = 0; a < 10; a++) {
        b_X[a] = temp_v[a];
        for (j = 0; j < a; j++) {
          i = j + a * 10;
          b_X[a] -= L[(t + 58 * (i % 10)) + 580 * (i / 10)] * b_X[j];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        i = a + a * 10;
        b_X[a] /= L[(t + 58 * (i % 10)) + 580 * (i / 10)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 10; i++) {
        X[r3[i] - 1] = b_X[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_int16_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_solve_Lv.c) */
