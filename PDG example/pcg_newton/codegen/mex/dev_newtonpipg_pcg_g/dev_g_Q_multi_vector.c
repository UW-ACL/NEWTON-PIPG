/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_g_Q_multi_vector.c
 *
 * Code generation for function 'dev_g_Q_multi_vector'
 *
 */

/* Include files */
#include "dev_g_Q_multi_vector.h"
#include "dev_S_inv_g.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "diag.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo jh_emlrtRSI = {
    14,                     /* lineNo */
    "dev_g_Q_multi_vector", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = {
    26,         /* lineNo */
    "Q_v_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pathName */
};

static emlrtRSInfo lh_emlrtRSI = {
    29,         /* lineNo */
    "Q_v_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pathName */
};

static emlrtRSInfo mh_emlrtRSI = {
    31,         /* lineNo */
    "Q_v_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pathName */
};

static emlrtRSInfo nh_emlrtRSI = {
    34,         /* lineNo */
    "Q_v_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    12,                     /* lineNo */
    "dev_g_Q_multi_vector", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pathName */
};

static emlrtECInfo kc_emlrtECI = {
    -1,                     /* nDims */
    14,                     /* lineNo */
    4,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtDCInfo qb_emlrtDCI = {
    12,                     /* lineNo */
    16,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    1,                      /* iFirst */
    326,                    /* iLast */
    12,                     /* lineNo */
    16,                     /* colNo */
    "v",                    /* aName */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo lc_emlrtECI = {
    1,          /* nDims */
    29,         /* lineNo */
    29,         /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtECInfo mc_emlrtECI = {
    -1,         /* nDims */
    29,         /* lineNo */
    9,          /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtECInfo nc_emlrtECI = {
    -1,         /* nDims */
    31,         /* lineNo */
    10,         /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtECInfo oc_emlrtECI = {
    -1,         /* nDims */
    34,         /* lineNo */
    10,         /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtBCInfo yc_emlrtBCI = {
    1,            /* iFirst */
    11,           /* iLast */
    23,           /* lineNo */
    22,           /* colNo */
    "proj_index", /* aName */
    "Q_v_unit",   /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = {
    23,         /* lineNo */
    22,         /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = {
    29,         /* lineNo */
    38,         /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    29,         /* lineNo */
    38,         /* colNo */
    "Q_u",      /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = {
    34,         /* lineNo */
    62,         /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    34,         /* lineNo */
    62,         /* colNo */
    "v",        /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = {
    31,         /* lineNo */
    35,         /* colNo */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    31,         /* lineNo */
    35,         /* colNo */
    "Q_u",      /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    29,         /* lineNo */
    50,         /* colNo */
    "Q_u",      /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    31,         /* lineNo */
    47,         /* colNo */
    "Q_u",      /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    34,         /* lineNo */
    16,         /* colNo */
    "v_out",    /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    29,         /* lineNo */
    66,         /* colNo */
    "v",        /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    34,         /* lineNo */
    35,         /* colNo */
    "Q_u",      /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    34,         /* lineNo */
    47,         /* colNo */
    "Q_u",      /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    31,         /* lineNo */
    63,         /* colNo */
    "v",        /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    29,         /* lineNo */
    15,         /* colNo */
    "v_out",    /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    31,         /* lineNo */
    16,         /* colNo */
    "v_out",    /* aName */
    "Q_v_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    12,                     /* lineNo */
    16,                     /* colNo */
    "v",                    /* aName */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    14,                     /* lineNo */
    8,                      /* colNo */
    "out",                  /* aName */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtRTEInfo oj_emlrtRTEI = {
    10,                     /* lineNo */
    9,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = {
    8,                      /* lineNo */
    9,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = {
    14,                     /* lineNo */
    8,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = {
    14,                     /* lineNo */
    40,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = {
    12,                     /* lineNo */
    14,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = {
    14,                     /* lineNo */
    4,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = {
    20,                     /* lineNo */
    1,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = {
    26,                     /* lineNo */
    5,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = {
    34,                     /* lineNo */
    16,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = {
    29,                     /* lineNo */
    34,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = {
    31,                     /* lineNo */
    31,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = {
    31,                     /* lineNo */
    61,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = {
    31,                     /* lineNo */
    16,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = {
    29,                     /* lineNo */
    15,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = {
    34,                     /* lineNo */
    31,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = {
    34,                     /* lineNo */
    60,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = {
    29,                     /* lineNo */
    29,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = {
    29,                     /* lineNo */
    9,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = {
    34,                     /* lineNo */
    10,                     /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = {
    3,                      /* lineNo */
    1,                      /* colNo */
    "dev_g_Q_multi_vector", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" /* pName */
};

/* Function Declarations */
static void Q_v_unit(const emlrtStack *sp, const emxArray_real_T *v,
                     const emxArray_real_T *Q_u, const real_T proj_index[22],
                     emxArray_real_T *v_out);

static void b_Q_v_unit(const emlrtStack *sp, const emxArray_real_T *v,
                       const emxArray_real_T *Q_u, const real_T proj_index[22],
                       emxArray_real_T *v_out);

/* Function Definitions */
static void Q_v_unit(const emlrtStack *sp, const emxArray_real_T *v,
                     const emxArray_real_T *Q_u, const real_T proj_index[22],
                     emxArray_real_T *v_out)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *b_Q_u;
  emxArray_real_T *b_v;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *temp_index;
  const real_T *Q_u_data;
  const real_T *v_data;
  real_T beta1;
  real_T temp;
  real_T *b_Q_u_data;
  real_T *b_v_data;
  real_T *r3;
  real_T *temp_index_data;
  real_T *v_out_data;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T *r4;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  Q_u_data = Q_u->data;
  v_data = v->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  loop_ub = v->size[0];
  i = v_out->size[0];
  v_out->size[0] = v->size[0];
  emxEnsureCapacity_real_T(sp, v_out, i, &uj_emlrtRTEI);
  v_out_data = v_out->data;
  for (i = 0; i < loop_ub; i++) {
    v_out_data[i] = 0.0;
  }
  temp = 1.0;
  emxInit_real_T(sp, &temp_index, 2, &vj_emlrtRTEI);
  temp_index_data = temp_index->data;
  emxInit_real_T(sp, &r, 1, &hk_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 2, &ik_emlrtRTEI);
  emxInit_real_T(sp, &r2, 1, &ik_emlrtRTEI);
  r3 = r2->data;
  emxInit_real_T(sp, &b_Q_u, 2, &dk_emlrtRTEI);
  emxInit_real_T(sp, &b_v, 2, &ek_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (temp <= v->size[0])) {
    real_T d;
    if (temp != (int32_T)muDoubleScalarFloor(temp)) {
      emlrtIntegerCheckR2012b(temp, &rb_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)temp < 1) || ((int32_T)temp > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)temp, 1, 11, &yc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = proj_index[(int32_T)temp - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      int32_T b_loop_ub;
      st.site = &kh_emlrtRSI;
      b_st.site = &ub_emlrtRSI;
      if (muDoubleScalarIsNaN(d)) {
        i = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = 1;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i, &vj_emlrtRTEI);
        temp_index_data = temp_index->data;
        temp_index_data[0] = rtNaN;
      } else if (d < temp) {
        temp_index->size[1] = 0;
        temp_index->size[0] = 1;
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        i = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = 1;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i, &vj_emlrtRTEI);
        temp_index_data = temp_index->data;
        temp_index_data[0] = rtNaN;
      } else {
        b_loop_ub = (int32_T)(d - temp) + 1;
        i = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = b_loop_ub;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i, &vj_emlrtRTEI);
        temp_index_data = temp_index->data;
        for (i = 0; i < b_loop_ub; i++) {
          temp_index_data[i] = temp + (real_T)i;
        }
      }
      temp = proj_index[(int32_T)temp + 10];
      if (temp == 1.0) {
        int32_T b_temp_index[2];
        int32_T temp_index_tmp;
        b_temp_index[0] = 1;
        temp_index_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &lh_emlrtRSI;
        indexShapeCheck(&st, v->size[0], b_temp_index);
        for (i = 0; i < temp_index_tmp; i++) {
          if (temp_index_data[i] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
            emlrtIntegerCheckR2012b(temp_index_data[i], &sb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[0], &ad_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[1], &dd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i = b_Q_u->size[0] * b_Q_u->size[1];
        b_Q_u->size[1] = temp_index->size[1];
        b_Q_u->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(sp, b_Q_u, i, &xj_emlrtRTEI);
        b_Q_u_data = b_Q_u->data;
        for (i = 0; i < temp_index_tmp; i++) {
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            b_Q_u_data[i1 + b_Q_u->size[1] * i] =
                Q_u_data[((int32_T)temp_index_data[i1] +
                          Q_u->size[1] * ((int32_T)temp_index_data[i] - 1)) -
                         1];
          }
        }
        st.site = &lh_emlrtRSI;
        c_diag(&st, b_Q_u, r2);
        r3 = r2->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &gd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        b_loop_ub = r2->size[0];
        if ((r2->size[0] != temp_index->size[1]) &&
            ((r2->size[0] != 1) && (temp_index->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r2->size[0], temp_index->size[1],
                                      &lc_emlrtECI, (emlrtConstCTX)sp);
        }
        i = r1->size[0] * r1->size[1];
        r1->size[1] = temp_index->size[1];
        r1->size[0] = 1;
        emxEnsureCapacity_int32_T(sp, r1, i, &ck_emlrtRTEI);
        r4 = r1->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &kd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          r4[i] = i1;
        }
        if (r2->size[0] == temp_index->size[1]) {
          i = r->size[0];
          r->size[0] = r2->size[0];
          emxEnsureCapacity_real_T(sp, r, i, &fk_emlrtRTEI);
          b_Q_u_data = r->data;
          for (i = 0; i < b_loop_ub; i++) {
            b_Q_u_data[i] = r3[i] * v_data[(int32_T)temp_index_data[i] - 1];
          }
        } else {
          st.site = &lh_emlrtRSI;
          binary_expand_op_18(&st, r, r2, v, temp_index);
          b_Q_u_data = r->data;
        }
        b_loop_ub = r1->size[1];
        if (r1->size[1] != r->size[0]) {
          emlrtSubAssignSizeCheck1dR2017a(r1->size[1], r->size[0], &mc_emlrtECI,
                                          (emlrtConstCTX)sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out_data[r4[i] - 1] = b_Q_u_data[i];
        }
        /* check */
      } else if (temp != 1.0) {
        int32_T b_temp_index[2];
        int32_T temp_index_tmp;
        b_temp_index[0] = 1;
        temp_index_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &mh_emlrtRSI;
        indexShapeCheck(&st, v->size[0], b_temp_index);
        for (i = 0; i < temp_index_tmp; i++) {
          if (temp_index_data[i] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
            emlrtIntegerCheckR2012b(temp_index_data[i], &ub_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[0], &cd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[1], &ed_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i = b_Q_u->size[0] * b_Q_u->size[1];
        b_Q_u->size[1] = temp_index->size[1];
        b_Q_u->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(sp, b_Q_u, i, &yj_emlrtRTEI);
        b_Q_u_data = b_Q_u->data;
        for (i = 0; i < temp_index_tmp; i++) {
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            b_Q_u_data[i1 + b_Q_u->size[1] * i] =
                Q_u_data[((int32_T)temp_index_data[i1] +
                          Q_u->size[1] * ((int32_T)temp_index_data[i] - 1)) -
                         1];
          }
        }
        i = b_v->size[0] * b_v->size[1];
        b_v->size[1] = temp_index->size[1];
        b_v->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v, i, &ak_emlrtRTEI);
        b_v_data = b_v->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &jd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          b_v_data[i] = v_data[i1 - 1];
        }
        i = r1->size[0] * r1->size[1];
        r1->size[1] = temp_index->size[1];
        r1->size[0] = 1;
        emxEnsureCapacity_int32_T(sp, r1, i, &bk_emlrtRTEI);
        r4 = r1->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &ld_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          r4[i] = i1;
        }
        st.site = &mh_emlrtRSI;
        b_st.site = &bb_emlrtRSI;
        b_st.site = &kg_emlrtRSI;
        if (temp_index->size[1] == 0) {
          r2->size[0] = 0;
        } else {
          c_st.site = &lg_emlrtRSI;
          d_st.site = &mg_emlrtRSI;
          TRANSB1 = 'T';
          TRANSA1 = 'T';
          temp = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)temp_index->size[1];
          k_t = (ptrdiff_t)temp_index->size[1];
          lda_t = (ptrdiff_t)temp_index->size[1];
          ldb_t = (ptrdiff_t)temp_index->size[1];
          ldc_t = (ptrdiff_t)1;
          i = r2->size[0];
          r2->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(&d_st, r2, i, &gk_emlrtRTEI);
          r3 = r2->data;
          dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &temp, &b_v_data[0],
                &lda_t, &b_Q_u_data[0], &ldb_t, &beta1, &r3[0], &ldc_t);
        }
        b_loop_ub = r1->size[1];
        if (r1->size[1] != r2->size[0]) {
          emlrtSubAssignSizeCheck1dR2017a(r1->size[1], r2->size[0],
                                          &nc_emlrtECI, (emlrtConstCTX)sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out_data[r4[i] - 1] = r3[i];
        }
        /* check */
      } else {
        int32_T b_temp_index[2];
        int32_T temp_index_tmp;
        b_temp_index[0] = 1;
        temp_index_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &nh_emlrtRSI;
        indexShapeCheck(&st, v->size[0], b_temp_index);
        for (i = 0; i < temp_index_tmp; i++) {
          if (temp_index_data[i] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
            emlrtIntegerCheckR2012b(temp_index_data[i], &tb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &bd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i = r1->size[0] * r1->size[1];
        r1->size[1] = temp_index->size[1];
        r1->size[0] = 1;
        emxEnsureCapacity_int32_T(sp, r1, i, &wj_emlrtRTEI);
        r4 = r1->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &fd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          r4[i] = i1;
        }
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[0], &hd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[1], &id_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        st.site = &nh_emlrtRSI;
        b_st.site = &bb_emlrtRSI;
        i = b_Q_u->size[0] * b_Q_u->size[1];
        b_Q_u->size[1] = temp_index->size[1];
        b_Q_u->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(&st, b_Q_u, i, &dk_emlrtRTEI);
        b_Q_u_data = b_Q_u->data;
        i = b_v->size[0] * b_v->size[1];
        b_v->size[1] = temp_index->size[1];
        b_v->size[0] = 1;
        emxEnsureCapacity_real_T(&st, b_v, i, &ek_emlrtRTEI);
        b_v_data = b_v->data;
        for (i = 0; i < temp_index_tmp; i++) {
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            b_Q_u_data[i1 + b_Q_u->size[1] * i] =
                Q_u_data[((int32_T)temp_index_data[i1] +
                          Q_u->size[1] * ((int32_T)temp_index_data[i] - 1)) -
                         1];
          }
          b_v_data[i] = v_data[(int32_T)temp_index_data[i] - 1];
        }
        b_st.site = &kg_emlrtRSI;
        b_mtimes(&b_st, b_Q_u, b_v, r2);
        r3 = r2->data;
        b_loop_ub = r1->size[1];
        if (r1->size[1] != r2->size[0]) {
          emlrtSubAssignSizeCheck1dR2017a(r1->size[1], r2->size[0],
                                          &oc_emlrtECI, (emlrtConstCTX)sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out_data[r4[i] - 1] = r3[i];
        }
      }
      /* update */
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emxFree_real_T(sp, &b_v);
  emxFree_real_T(sp, &b_Q_u);
  emxFree_real_T(sp, &r2);
  emxFree_int32_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void b_Q_v_unit(const emlrtStack *sp, const emxArray_real_T *v,
                       const emxArray_real_T *Q_u, const real_T proj_index[22],
                       emxArray_real_T *v_out)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *b_Q_u;
  emxArray_real_T *b_v;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *temp_index;
  const real_T *Q_u_data;
  const real_T *v_data;
  real_T temp;
  real_T *b_Q_u_data;
  real_T *b_v_data;
  real_T *temp_index_data;
  real_T *v_out_data;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T *r3;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  Q_u_data = Q_u->data;
  v_data = v->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  loop_ub = v->size[0];
  i = v_out->size[0];
  v_out->size[0] = v->size[0];
  emxEnsureCapacity_real_T(sp, v_out, i, &uj_emlrtRTEI);
  v_out_data = v_out->data;
  for (i = 0; i < loop_ub; i++) {
    v_out_data[i] = 0.0;
  }
  temp = 1.0;
  emxInit_real_T(sp, &temp_index, 2, &vj_emlrtRTEI);
  temp_index_data = temp_index->data;
  emxInit_real_T(sp, &r, 1, &hk_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 2, &ik_emlrtRTEI);
  emxInit_real_T(sp, &r2, 1, &ik_emlrtRTEI);
  emxInit_real_T(sp, &b_Q_u, 2, &dk_emlrtRTEI);
  emxInit_real_T(sp, &b_v, 2, &ek_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (temp <= v->size[0])) {
    real_T d;
    if (temp != (int32_T)muDoubleScalarFloor(temp)) {
      emlrtIntegerCheckR2012b(temp, &rb_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)temp < 1) || ((int32_T)temp > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)temp, 1, 11, &yc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = proj_index[(int32_T)temp - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      int32_T b_loop_ub;
      st.site = &kh_emlrtRSI;
      b_st.site = &ub_emlrtRSI;
      if (muDoubleScalarIsNaN(d)) {
        i = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = 1;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i, &vj_emlrtRTEI);
        temp_index_data = temp_index->data;
        temp_index_data[0] = rtNaN;
      } else if (d < temp) {
        temp_index->size[1] = 0;
        temp_index->size[0] = 1;
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        i = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = 1;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i, &vj_emlrtRTEI);
        temp_index_data = temp_index->data;
        temp_index_data[0] = rtNaN;
      } else {
        b_loop_ub = (int32_T)(d - temp) + 1;
        i = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = b_loop_ub;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i, &vj_emlrtRTEI);
        temp_index_data = temp_index->data;
        for (i = 0; i < b_loop_ub; i++) {
          temp_index_data[i] = temp + (real_T)i;
        }
      }
      if (proj_index[(int32_T)temp + 10] == 1.0) {
        int32_T b_temp_index[2];
        int32_T temp_index_tmp;
        b_temp_index[0] = 1;
        temp_index_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &lh_emlrtRSI;
        indexShapeCheck(&st, v->size[0], b_temp_index);
        for (i = 0; i < temp_index_tmp; i++) {
          if (temp_index_data[i] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
            emlrtIntegerCheckR2012b(temp_index_data[i], &sb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[0], &ad_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[1], &dd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i = b_Q_u->size[0] * b_Q_u->size[1];
        b_Q_u->size[1] = temp_index->size[1];
        b_Q_u->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(sp, b_Q_u, i, &xj_emlrtRTEI);
        b_Q_u_data = b_Q_u->data;
        for (i = 0; i < temp_index_tmp; i++) {
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            b_Q_u_data[i1 + b_Q_u->size[1] * i] =
                Q_u_data[((int32_T)temp_index_data[i1] +
                          Q_u->size[1] * ((int32_T)temp_index_data[i] - 1)) -
                         1];
          }
        }
        st.site = &lh_emlrtRSI;
        c_diag(&st, b_Q_u, r2);
        b_Q_u_data = r2->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &gd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        b_loop_ub = r2->size[0];
        if ((r2->size[0] != temp_index->size[1]) &&
            ((r2->size[0] != 1) && (temp_index->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r2->size[0], temp_index->size[1],
                                      &lc_emlrtECI, (emlrtConstCTX)sp);
        }
        i = r1->size[0] * r1->size[1];
        r1->size[1] = temp_index->size[1];
        r1->size[0] = 1;
        emxEnsureCapacity_int32_T(sp, r1, i, &ck_emlrtRTEI);
        r3 = r1->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &kd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          r3[i] = i1;
        }
        if (r2->size[0] == temp_index->size[1]) {
          i = r->size[0];
          r->size[0] = r2->size[0];
          emxEnsureCapacity_real_T(sp, r, i, &fk_emlrtRTEI);
          b_v_data = r->data;
          for (i = 0; i < b_loop_ub; i++) {
            b_v_data[i] =
                b_Q_u_data[i] * v_data[(int32_T)temp_index_data[i] - 1];
          }
        } else {
          st.site = &lh_emlrtRSI;
          binary_expand_op_18(&st, r, r2, v, temp_index);
          b_v_data = r->data;
        }
        b_loop_ub = r1->size[1];
        if (r1->size[1] != r->size[0]) {
          emlrtSubAssignSizeCheck1dR2017a(r1->size[1], r->size[0], &mc_emlrtECI,
                                          (emlrtConstCTX)sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out_data[r3[i] - 1] = b_v_data[i];
        }
        /* check */
      } else {
        int32_T b_temp_index[2];
        int32_T temp_index_tmp;
        b_temp_index[0] = 1;
        temp_index_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &nh_emlrtRSI;
        indexShapeCheck(&st, v->size[0], b_temp_index);
        for (i = 0; i < temp_index_tmp; i++) {
          if (temp_index_data[i] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
            emlrtIntegerCheckR2012b(temp_index_data[i], &tb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &bd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i = r1->size[0] * r1->size[1];
        r1->size[1] = temp_index->size[1];
        r1->size[0] = 1;
        emxEnsureCapacity_int32_T(sp, r1, i, &wj_emlrtRTEI);
        r3 = r1->data;
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &fd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          r3[i] = i1;
        }
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[0], &hd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < temp_index_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q_u->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q_u->size[1], &id_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        st.site = &nh_emlrtRSI;
        i = b_Q_u->size[0] * b_Q_u->size[1];
        b_Q_u->size[1] = temp_index->size[1];
        b_Q_u->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(&st, b_Q_u, i, &dk_emlrtRTEI);
        b_Q_u_data = b_Q_u->data;
        i = b_v->size[0] * b_v->size[1];
        b_v->size[1] = temp_index->size[1];
        b_v->size[0] = 1;
        emxEnsureCapacity_real_T(&st, b_v, i, &ek_emlrtRTEI);
        b_v_data = b_v->data;
        for (i = 0; i < temp_index_tmp; i++) {
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            b_Q_u_data[i1 + b_Q_u->size[1] * i] =
                Q_u_data[((int32_T)temp_index_data[i1] +
                          Q_u->size[1] * ((int32_T)temp_index_data[i] - 1)) -
                         1];
          }
          b_v_data[i] = v_data[(int32_T)temp_index_data[i] - 1];
        }
        b_st.site = &kg_emlrtRSI;
        b_mtimes(&b_st, b_Q_u, b_v, r2);
        b_Q_u_data = r2->data;
        b_loop_ub = r1->size[1];
        if (r1->size[1] != r2->size[0]) {
          emlrtSubAssignSizeCheck1dR2017a(r1->size[1], r2->size[0],
                                          &oc_emlrtECI, (emlrtConstCTX)sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out_data[r3[i] - 1] = b_Q_u_data[i];
        }
      }
      /* update */
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emxFree_real_T(sp, &b_v);
  emxFree_real_T(sp, &b_Q_u);
  emxFree_real_T(sp, &r2);
  emxFree_int32_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                            const real_T v[326],
                            const real_T proj_index_all[660], real_T nx,
                            real_T nu, real_T out[326])
{
  emlrtStack st;
  emxArray_int16_T *r;
  emxArray_real_T c_Q;
  emxArray_real_T *b_Q;
  emxArray_real_T *b_v;
  emxArray_real_T *r1;
  emxArray_real_T *v_temp_index;
  const real_T *Q_data;
  real_T *b_Q_data;
  real_T *v_temp_index_data;
  int32_T iv[2];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_tmp;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int16_T *r3;
  st.prev = sp;
  st.tls = sp->tls;
  Q_data = Q->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* trans is a true or false. if trans = false we compute Q'v . otherwise Qv */
  memset(&out[0], 0, 326U * sizeof(real_T));
  loop_ub_tmp = Q->size[0];
  Q_tmp = Q->size[1];
  Q_idx_0 = Q->size[1];
  Q_idx_1 = Q->size[0];
  emxInit_real_T(sp, &v_temp_index, 2, &pj_emlrtRTEI);
  emxInit_int16_T(sp, &r, &tj_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &tj_emlrtRTEI);
  emxInit_real_T(sp, &b_Q, 3, &rj_emlrtRTEI);
  emxInit_real_T(sp, &b_v, 1, &sj_emlrtRTEI);
  for (i = 0; i < 30; i++) {
    real_T b_proj_index_all[22];
    int32_T b_loop_ub_tmp;
    if (i + 1 < 30) {
      real_T b_tmp;
      int32_T vectorUB;
      b_tmp = nx + nu;
      if (muDoubleScalarIsNaN(b_tmp)) {
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (b_tmp < 1.0) {
        v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(b_tmp - 1.0) + 1;
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = (int32_T)(b_tmp - 1.0) + 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
          v_temp_index_data[b_i] = (real_T)b_i + 1.0;
        }
      }
      b_i = v_temp_index->size[0] * v_temp_index->size[1];
      v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &pj_emlrtRTEI);
      v_temp_index_data = v_temp_index->data;
      b_tmp *= ((real_T)i + 1.0) - 1.0;
      b_loop_ub_tmp = v_temp_index->size[1] - 1;
      scalarLB = (v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (b_i = 0; b_i <= vectorUB; b_i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[b_i]);
        _mm_storeu_pd(&v_temp_index_data[b_i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (b_i = scalarLB; b_i <= b_loop_ub_tmp; b_i++) {
        v_temp_index_data[b_i] += b_tmp;
      }
    } else {
      real_T b_tmp;
      int32_T vectorUB;
      if (muDoubleScalarIsNaN(nx)) {
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (nx < 1.0) {
        v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(nx - 1.0) + 1;
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = (int32_T)(nx - 1.0) + 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
          v_temp_index_data[b_i] = (real_T)b_i + 1.0;
        }
      }
      b_i = v_temp_index->size[0] * v_temp_index->size[1];
      v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &oj_emlrtRTEI);
      v_temp_index_data = v_temp_index->data;
      b_tmp = 29.0 * (nx + nu);
      b_loop_ub_tmp = v_temp_index->size[1] - 1;
      scalarLB = (v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (b_i = 0; b_i <= vectorUB; b_i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[b_i]);
        _mm_storeu_pd(&v_temp_index_data[b_i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (b_i = scalarLB; b_i <= b_loop_ub_tmp; b_i++) {
        v_temp_index_data[b_i] += b_tmp;
      }
    }
    b_loop_ub_tmp = v_temp_index->size[1];
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      if (v_temp_index_data[b_i] !=
          (int32_T)muDoubleScalarFloor(v_temp_index_data[b_i])) {
        emlrtIntegerCheckR2012b(v_temp_index_data[b_i], &qb_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      scalarLB = (int32_T)v_temp_index_data[b_i];
      if ((scalarLB < 1) || (scalarLB > 326)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, 326, &xc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    b_i = r->size[0] * r->size[1];
    r->size[1] = v_temp_index->size[1];
    r->size[0] = 1;
    emxEnsureCapacity_int16_T(sp, r, b_i, &qj_emlrtRTEI);
    r3 = r->data;
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      r3[b_i] = (int16_T)v_temp_index_data[b_i];
    }
    b_i = b_Q->size[0] * b_Q->size[1] * b_Q->size[2];
    b_Q->size[2] = 1;
    b_Q->size[1] = Q_tmp;
    b_Q->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, b_Q, b_i, &rj_emlrtRTEI);
    b_Q_data = b_Q->data;
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      for (scalarLB = 0; scalarLB < Q_tmp; scalarLB++) {
        b_Q_data[scalarLB + b_Q->size[1] * b_i] =
            Q_data[(i + 30 * scalarLB) + 30 * Q->size[1] * b_i];
      }
    }
    b_i = b_v->size[0];
    b_v->size[0] = v_temp_index->size[1];
    emxEnsureCapacity_real_T(sp, b_v, b_i, &sj_emlrtRTEI);
    b_Q_data = b_v->data;
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      b_Q_data[b_i] = v[(int32_T)v_temp_index_data[b_i] - 1];
    }
    for (b_i = 0; b_i < 2; b_i++) {
      for (scalarLB = 0; scalarLB < 11; scalarLB++) {
        b_proj_index_all[scalarLB + 11 * b_i] =
            proj_index_all[(i + 30 * scalarLB) + 330 * b_i];
      }
    }
    c_Q = *b_Q;
    iv[0] = Q_idx_1;
    iv[1] = Q_idx_0;
    c_Q.size = &iv[0];
    c_Q.numDimensions = 2;
    st.site = &jh_emlrtRSI;
    b_Q_v_unit(&st, b_v, &c_Q, b_proj_index_all, r1);
    b_Q_data = r1->data;
    if (v_temp_index->size[1] != r1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(v_temp_index->size[1], r1->size[0],
                                      &kc_emlrtECI, (emlrtConstCTX)sp);
    }
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      out[r3[b_i] - 1] = b_Q_data[b_i];
    }
    /* Specified! only for the LCvx case */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_v);
  emxFree_real_T(sp, &b_Q);
  emxFree_real_T(sp, &r1);
  emxFree_int16_T(sp, &r);
  emxFree_real_T(sp, &v_temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                            const emxArray_real_T *v,
                            const real_T proj_index_all[660], real_T nx,
                            real_T nu, emxArray_real_T *out)
{
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_real_T c_Q;
  emxArray_real_T *b_Q;
  emxArray_real_T *b_v;
  emxArray_real_T *b_v_temp_index;
  emxArray_real_T *r1;
  const real_T *Q_data;
  const real_T *v_data;
  real_T *b_Q_data;
  real_T *out_data;
  real_T *v_temp_index_data;
  int32_T iv[2];
  int32_T v_temp_index[2];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_tmp;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T *r3;
  st.prev = sp;
  st.tls = sp->tls;
  v_data = v->data;
  Q_data = Q->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* trans is a true or false. if trans = false we compute Q'v . otherwise Qv */
  loop_ub = v->size[0];
  i = out->size[0];
  out->size[0] = v->size[0];
  emxEnsureCapacity_real_T(sp, out, i, &tk_emlrtRTEI);
  out_data = out->data;
  for (i = 0; i < loop_ub; i++) {
    out_data[i] = 0.0;
  }
  loop_ub_tmp = Q->size[0];
  Q_tmp = Q->size[1];
  Q_idx_0 = Q->size[1];
  Q_idx_1 = Q->size[0];
  emxInit_real_T(sp, &b_v_temp_index, 2, &pj_emlrtRTEI);
  emxInit_int32_T(sp, &r, 2, &tj_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &tj_emlrtRTEI);
  emxInit_real_T(sp, &b_Q, 3, &rj_emlrtRTEI);
  emxInit_real_T(sp, &b_v, 1, &sj_emlrtRTEI);
  v_temp_index[0] = 1;
  for (b_i = 0; b_i < 30; b_i++) {
    real_T b_proj_index_all[22];
    int32_T b_loop_ub_tmp;
    if (b_i + 1 < 30) {
      real_T b_tmp;
      int32_T vectorUB;
      b_tmp = nx + nu;
      if (muDoubleScalarIsNaN(b_tmp)) {
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (b_tmp < 1.0) {
        b_v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(b_tmp - 1.0) + 1;
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = (int32_T)(b_tmp - 1.0) + 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        for (i = 0; i < b_loop_ub_tmp; i++) {
          v_temp_index_data[i] = (real_T)i + 1.0;
        }
      }
      i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
      b_v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &pj_emlrtRTEI);
      v_temp_index_data = b_v_temp_index->data;
      b_tmp *= ((real_T)b_i + 1.0) - 1.0;
      b_loop_ub_tmp = b_v_temp_index->size[1] - 1;
      scalarLB = (b_v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i = 0; i <= vectorUB; i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[i]);
        _mm_storeu_pd(&v_temp_index_data[i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (i = scalarLB; i <= b_loop_ub_tmp; i++) {
        v_temp_index_data[i] += b_tmp;
      }
    } else {
      real_T b_tmp;
      int32_T vectorUB;
      if (muDoubleScalarIsNaN(nx)) {
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (nx < 1.0) {
        b_v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(nx - 1.0) + 1;
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = (int32_T)(nx - 1.0) + 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        for (i = 0; i < b_loop_ub_tmp; i++) {
          v_temp_index_data[i] = (real_T)i + 1.0;
        }
      }
      i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
      b_v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &oj_emlrtRTEI);
      v_temp_index_data = b_v_temp_index->data;
      b_tmp = 29.0 * (nx + nu);
      b_loop_ub_tmp = b_v_temp_index->size[1] - 1;
      scalarLB = (b_v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i = 0; i <= vectorUB; i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[i]);
        _mm_storeu_pd(&v_temp_index_data[i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (i = scalarLB; i <= b_loop_ub_tmp; i++) {
        v_temp_index_data[i] += b_tmp;
      }
    }
    b_loop_ub_tmp = b_v_temp_index->size[1];
    v_temp_index[1] = b_v_temp_index->size[1];
    st.site = &xh_emlrtRSI;
    indexShapeCheck(&st, v->size[0], v_temp_index);
    for (i = 0; i < b_loop_ub_tmp; i++) {
      if (v_temp_index_data[i] !=
          (int32_T)muDoubleScalarFloor(v_temp_index_data[i])) {
        emlrtIntegerCheckR2012b(v_temp_index_data[i], &qb_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      scalarLB = (int32_T)v_temp_index_data[i];
      if ((scalarLB < 1) || (scalarLB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &yd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    i = r->size[0] * r->size[1];
    r->size[1] = b_v_temp_index->size[1];
    r->size[0] = 1;
    emxEnsureCapacity_int32_T(sp, r, i, &qj_emlrtRTEI);
    r3 = r->data;
    for (i = 0; i < b_loop_ub_tmp; i++) {
      scalarLB = (int32_T)v_temp_index_data[i];
      if ((scalarLB < 1) || (scalarLB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &ae_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      r3[i] = scalarLB;
    }
    i = b_Q->size[0] * b_Q->size[1] * b_Q->size[2];
    b_Q->size[2] = 1;
    b_Q->size[1] = Q_tmp;
    b_Q->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, b_Q, i, &rj_emlrtRTEI);
    b_Q_data = b_Q->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      for (scalarLB = 0; scalarLB < Q_tmp; scalarLB++) {
        b_Q_data[scalarLB + b_Q->size[1] * i] =
            Q_data[(b_i + 30 * scalarLB) + 30 * Q->size[1] * i];
      }
    }
    i = b_v->size[0];
    b_v->size[0] = b_v_temp_index->size[1];
    emxEnsureCapacity_real_T(sp, b_v, i, &sj_emlrtRTEI);
    b_Q_data = b_v->data;
    for (i = 0; i < b_loop_ub_tmp; i++) {
      b_Q_data[i] = v_data[(int32_T)v_temp_index_data[i] - 1];
    }
    for (i = 0; i < 2; i++) {
      for (scalarLB = 0; scalarLB < 11; scalarLB++) {
        b_proj_index_all[scalarLB + 11 * i] =
            proj_index_all[(b_i + 30 * scalarLB) + 330 * i];
      }
    }
    c_Q = *b_Q;
    iv[0] = Q_idx_1;
    iv[1] = Q_idx_0;
    c_Q.size = &iv[0];
    c_Q.numDimensions = 2;
    st.site = &jh_emlrtRSI;
    Q_v_unit(&st, b_v, &c_Q, b_proj_index_all, r1);
    b_Q_data = r1->data;
    b_loop_ub_tmp = r->size[1];
    if (r->size[1] != r1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(r->size[1], r1->size[0], &kc_emlrtECI,
                                      (emlrtConstCTX)sp);
    }
    for (i = 0; i < b_loop_ub_tmp; i++) {
      out_data[r3[i] - 1] = b_Q_data[i];
    }
    /* Specified! only for the LCvx case */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_v);
  emxFree_real_T(sp, &b_Q);
  emxFree_real_T(sp, &r1);
  emxFree_int32_T(sp, &r);
  emxFree_real_T(sp, &b_v_temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void d_dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                            const emxArray_real_T *v,
                            const real_T proj_index_all[660], real_T nx,
                            real_T nu, emxArray_real_T *out)
{
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_real_T c_Q;
  emxArray_real_T *b_Q;
  emxArray_real_T *b_v;
  emxArray_real_T *b_v_temp_index;
  emxArray_real_T *r1;
  const real_T *Q_data;
  const real_T *v_data;
  real_T *b_Q_data;
  real_T *out_data;
  real_T *v_temp_index_data;
  int32_T iv[2];
  int32_T v_temp_index[2];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_tmp;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T *r3;
  st.prev = sp;
  st.tls = sp->tls;
  v_data = v->data;
  Q_data = Q->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* trans is a true or false. if trans = false we compute Q'v . otherwise Qv */
  loop_ub = v->size[0];
  i = out->size[0];
  out->size[0] = v->size[0];
  emxEnsureCapacity_real_T(sp, out, i, &tk_emlrtRTEI);
  out_data = out->data;
  for (i = 0; i < loop_ub; i++) {
    out_data[i] = 0.0;
  }
  loop_ub_tmp = Q->size[0];
  Q_tmp = Q->size[1];
  Q_idx_0 = Q->size[1];
  Q_idx_1 = Q->size[0];
  emxInit_real_T(sp, &b_v_temp_index, 2, &pj_emlrtRTEI);
  emxInit_int32_T(sp, &r, 2, &tj_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &tj_emlrtRTEI);
  emxInit_real_T(sp, &b_Q, 3, &rj_emlrtRTEI);
  emxInit_real_T(sp, &b_v, 1, &sj_emlrtRTEI);
  v_temp_index[0] = 1;
  for (b_i = 0; b_i < 30; b_i++) {
    real_T b_proj_index_all[22];
    int32_T b_loop_ub_tmp;
    if (b_i + 1 < 30) {
      real_T b_tmp;
      int32_T vectorUB;
      b_tmp = nx + nu;
      if (muDoubleScalarIsNaN(b_tmp)) {
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (b_tmp < 1.0) {
        b_v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(b_tmp - 1.0) + 1;
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = (int32_T)(b_tmp - 1.0) + 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        for (i = 0; i < b_loop_ub_tmp; i++) {
          v_temp_index_data[i] = (real_T)i + 1.0;
        }
      }
      i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
      b_v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &pj_emlrtRTEI);
      v_temp_index_data = b_v_temp_index->data;
      b_tmp *= ((real_T)b_i + 1.0) - 1.0;
      b_loop_ub_tmp = b_v_temp_index->size[1] - 1;
      scalarLB = (b_v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i = 0; i <= vectorUB; i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[i]);
        _mm_storeu_pd(&v_temp_index_data[i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (i = scalarLB; i <= b_loop_ub_tmp; i++) {
        v_temp_index_data[i] += b_tmp;
      }
    } else {
      real_T b_tmp;
      int32_T vectorUB;
      if (muDoubleScalarIsNaN(nx)) {
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (nx < 1.0) {
        b_v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(nx - 1.0) + 1;
        i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
        b_v_temp_index->size[1] = (int32_T)(nx - 1.0) + 1;
        b_v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &fc_emlrtRTEI);
        v_temp_index_data = b_v_temp_index->data;
        for (i = 0; i < b_loop_ub_tmp; i++) {
          v_temp_index_data[i] = (real_T)i + 1.0;
        }
      }
      i = b_v_temp_index->size[0] * b_v_temp_index->size[1];
      b_v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, b_v_temp_index, i, &oj_emlrtRTEI);
      v_temp_index_data = b_v_temp_index->data;
      b_tmp = 29.0 * (nx + nu);
      b_loop_ub_tmp = b_v_temp_index->size[1] - 1;
      scalarLB = (b_v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i = 0; i <= vectorUB; i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[i]);
        _mm_storeu_pd(&v_temp_index_data[i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (i = scalarLB; i <= b_loop_ub_tmp; i++) {
        v_temp_index_data[i] += b_tmp;
      }
    }
    b_loop_ub_tmp = b_v_temp_index->size[1];
    v_temp_index[1] = b_v_temp_index->size[1];
    st.site = &xh_emlrtRSI;
    indexShapeCheck(&st, v->size[0], v_temp_index);
    for (i = 0; i < b_loop_ub_tmp; i++) {
      if (v_temp_index_data[i] !=
          (int32_T)muDoubleScalarFloor(v_temp_index_data[i])) {
        emlrtIntegerCheckR2012b(v_temp_index_data[i], &qb_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      scalarLB = (int32_T)v_temp_index_data[i];
      if ((scalarLB < 1) || (scalarLB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &yd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    i = r->size[0] * r->size[1];
    r->size[1] = b_v_temp_index->size[1];
    r->size[0] = 1;
    emxEnsureCapacity_int32_T(sp, r, i, &qj_emlrtRTEI);
    r3 = r->data;
    for (i = 0; i < b_loop_ub_tmp; i++) {
      scalarLB = (int32_T)v_temp_index_data[i];
      if ((scalarLB < 1) || (scalarLB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &ae_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      r3[i] = scalarLB;
    }
    i = b_Q->size[0] * b_Q->size[1] * b_Q->size[2];
    b_Q->size[2] = 1;
    b_Q->size[1] = Q_tmp;
    b_Q->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, b_Q, i, &rj_emlrtRTEI);
    b_Q_data = b_Q->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      for (scalarLB = 0; scalarLB < Q_tmp; scalarLB++) {
        b_Q_data[scalarLB + b_Q->size[1] * i] =
            Q_data[(b_i + 30 * scalarLB) + 30 * Q->size[1] * i];
      }
    }
    i = b_v->size[0];
    b_v->size[0] = b_v_temp_index->size[1];
    emxEnsureCapacity_real_T(sp, b_v, i, &sj_emlrtRTEI);
    b_Q_data = b_v->data;
    for (i = 0; i < b_loop_ub_tmp; i++) {
      b_Q_data[i] = v_data[(int32_T)v_temp_index_data[i] - 1];
    }
    for (i = 0; i < 2; i++) {
      for (scalarLB = 0; scalarLB < 11; scalarLB++) {
        b_proj_index_all[scalarLB + 11 * i] =
            proj_index_all[(b_i + 30 * scalarLB) + 330 * i];
      }
    }
    c_Q = *b_Q;
    iv[0] = Q_idx_1;
    iv[1] = Q_idx_0;
    c_Q.size = &iv[0];
    c_Q.numDimensions = 2;
    st.site = &jh_emlrtRSI;
    b_Q_v_unit(&st, b_v, &c_Q, b_proj_index_all, r1);
    b_Q_data = r1->data;
    b_loop_ub_tmp = r->size[1];
    if (r->size[1] != r1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(r->size[1], r1->size[0], &kc_emlrtECI,
                                      (emlrtConstCTX)sp);
    }
    for (i = 0; i < b_loop_ub_tmp; i++) {
      out_data[r3[i] - 1] = b_Q_data[i];
    }
    /* Specified! only for the LCvx case */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_v);
  emxFree_real_T(sp, &b_Q);
  emxFree_real_T(sp, &r1);
  emxFree_int32_T(sp, &r);
  emxFree_real_T(sp, &b_v_temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                          const real_T v[326], const real_T proj_index_all[660],
                          real_T nx, real_T nu, real_T out[326])
{
  emlrtStack st;
  emxArray_int16_T *r;
  emxArray_real_T c_Q;
  emxArray_real_T *b_Q;
  emxArray_real_T *b_v;
  emxArray_real_T *r1;
  emxArray_real_T *v_temp_index;
  const real_T *Q_data;
  real_T *b_Q_data;
  real_T *v_temp_index_data;
  int32_T iv[2];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_tmp;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int16_T *r3;
  st.prev = sp;
  st.tls = sp->tls;
  Q_data = Q->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* trans is a true or false. if trans = false we compute Q'v . otherwise Qv */
  memset(&out[0], 0, 326U * sizeof(real_T));
  loop_ub_tmp = Q->size[0];
  Q_tmp = Q->size[1];
  Q_idx_0 = Q->size[1];
  Q_idx_1 = Q->size[0];
  emxInit_real_T(sp, &v_temp_index, 2, &pj_emlrtRTEI);
  emxInit_int16_T(sp, &r, &tj_emlrtRTEI);
  emxInit_real_T(sp, &r1, 1, &tj_emlrtRTEI);
  emxInit_real_T(sp, &b_Q, 3, &rj_emlrtRTEI);
  emxInit_real_T(sp, &b_v, 1, &sj_emlrtRTEI);
  for (i = 0; i < 30; i++) {
    real_T b_proj_index_all[22];
    int32_T b_loop_ub_tmp;
    if (i + 1 < 30) {
      real_T b_tmp;
      int32_T vectorUB;
      b_tmp = nx + nu;
      if (muDoubleScalarIsNaN(b_tmp)) {
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (b_tmp < 1.0) {
        v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(b_tmp - 1.0) + 1;
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = (int32_T)(b_tmp - 1.0) + 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
          v_temp_index_data[b_i] = (real_T)b_i + 1.0;
        }
      }
      b_i = v_temp_index->size[0] * v_temp_index->size[1];
      v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &pj_emlrtRTEI);
      v_temp_index_data = v_temp_index->data;
      b_tmp *= ((real_T)i + 1.0) - 1.0;
      b_loop_ub_tmp = v_temp_index->size[1] - 1;
      scalarLB = (v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (b_i = 0; b_i <= vectorUB; b_i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[b_i]);
        _mm_storeu_pd(&v_temp_index_data[b_i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (b_i = scalarLB; b_i <= b_loop_ub_tmp; b_i++) {
        v_temp_index_data[b_i] += b_tmp;
      }
    } else {
      real_T b_tmp;
      int32_T vectorUB;
      if (muDoubleScalarIsNaN(nx)) {
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        v_temp_index_data[0] = rtNaN;
      } else if (nx < 1.0) {
        v_temp_index->size[1] = 0;
      } else {
        b_loop_ub_tmp = (int32_T)(nx - 1.0) + 1;
        b_i = v_temp_index->size[0] * v_temp_index->size[1];
        v_temp_index->size[1] = (int32_T)(nx - 1.0) + 1;
        v_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &fc_emlrtRTEI);
        v_temp_index_data = v_temp_index->data;
        for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
          v_temp_index_data[b_i] = (real_T)b_i + 1.0;
        }
      }
      b_i = v_temp_index->size[0] * v_temp_index->size[1];
      v_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, v_temp_index, b_i, &oj_emlrtRTEI);
      v_temp_index_data = v_temp_index->data;
      b_tmp = 29.0 * (nx + nu);
      b_loop_ub_tmp = v_temp_index->size[1] - 1;
      scalarLB = (v_temp_index->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (b_i = 0; b_i <= vectorUB; b_i += 2) {
        __m128d r2;
        r2 = _mm_loadu_pd(&v_temp_index_data[b_i]);
        _mm_storeu_pd(&v_temp_index_data[b_i],
                      _mm_add_pd(_mm_set1_pd(b_tmp), r2));
      }
      for (b_i = scalarLB; b_i <= b_loop_ub_tmp; b_i++) {
        v_temp_index_data[b_i] += b_tmp;
      }
    }
    b_loop_ub_tmp = v_temp_index->size[1];
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      if (v_temp_index_data[b_i] !=
          (int32_T)muDoubleScalarFloor(v_temp_index_data[b_i])) {
        emlrtIntegerCheckR2012b(v_temp_index_data[b_i], &qb_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      scalarLB = (int32_T)v_temp_index_data[b_i];
      if ((scalarLB < 1) || (scalarLB > 326)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, 326, &xc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    b_i = r->size[0] * r->size[1];
    r->size[1] = v_temp_index->size[1];
    r->size[0] = 1;
    emxEnsureCapacity_int16_T(sp, r, b_i, &qj_emlrtRTEI);
    r3 = r->data;
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      r3[b_i] = (int16_T)v_temp_index_data[b_i];
    }
    b_i = b_Q->size[0] * b_Q->size[1] * b_Q->size[2];
    b_Q->size[2] = 1;
    b_Q->size[1] = Q_tmp;
    b_Q->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, b_Q, b_i, &rj_emlrtRTEI);
    b_Q_data = b_Q->data;
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      for (scalarLB = 0; scalarLB < Q_tmp; scalarLB++) {
        b_Q_data[scalarLB + b_Q->size[1] * b_i] =
            Q_data[(i + 30 * scalarLB) + 30 * Q->size[1] * b_i];
      }
    }
    b_i = b_v->size[0];
    b_v->size[0] = v_temp_index->size[1];
    emxEnsureCapacity_real_T(sp, b_v, b_i, &sj_emlrtRTEI);
    b_Q_data = b_v->data;
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      b_Q_data[b_i] = v[(int32_T)v_temp_index_data[b_i] - 1];
    }
    for (b_i = 0; b_i < 2; b_i++) {
      for (scalarLB = 0; scalarLB < 11; scalarLB++) {
        b_proj_index_all[scalarLB + 11 * b_i] =
            proj_index_all[(i + 30 * scalarLB) + 330 * b_i];
      }
    }
    c_Q = *b_Q;
    iv[0] = Q_idx_1;
    iv[1] = Q_idx_0;
    c_Q.size = &iv[0];
    c_Q.numDimensions = 2;
    st.site = &jh_emlrtRSI;
    Q_v_unit(&st, b_v, &c_Q, b_proj_index_all, r1);
    b_Q_data = r1->data;
    if (v_temp_index->size[1] != r1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(v_temp_index->size[1], r1->size[0],
                                      &kc_emlrtECI, (emlrtConstCTX)sp);
    }
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      out[r3[b_i] - 1] = b_Q_data[b_i];
    }
    /* Specified! only for the LCvx case */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_v);
  emxFree_real_T(sp, &b_Q);
  emxFree_real_T(sp, &r1);
  emxFree_int16_T(sp, &r);
  emxFree_real_T(sp, &v_temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_g_Q_multi_vector.c) */
