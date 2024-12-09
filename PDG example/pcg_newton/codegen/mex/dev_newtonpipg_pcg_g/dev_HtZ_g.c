/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_HtZ_g.c
 *
 * Code generation for function 'dev_HtZ_g'
 *
 */

/* Include files */
#include "dev_HtZ_g.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = {
    14,          /* lineNo */
    "dev_HtZ_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    18,          /* lineNo */
    "dev_HtZ_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    20,          /* lineNo */
    "dev_HtZ_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pathName */
};

static emlrtECInfo h_emlrtECI = {
    1,           /* nDims */
    20,          /* lineNo */
    30,          /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtECInfo i_emlrtECI = {
    -1,          /* nDims */
    20,          /* lineNo */
    5,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtDCInfo l_emlrtDCI = {
    8,           /* lineNo */
    1,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    1                                           /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    8,           /* lineNo */
    1,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    4                                           /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    14,          /* lineNo */
    36,          /* colNo */
    "w",         /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    18,          /* lineNo */
    50,          /* colNo */
    "w",         /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    14,          /* lineNo */
    9,           /* colNo */
    "out",       /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    18,          /* lineNo */
    9,           /* colNo */
    "out",       /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    20,          /* lineNo */
    34,          /* colNo */
    "out",       /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    20,          /* lineNo */
    34,          /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    1                                           /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    20,          /* lineNo */
    57,          /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    1                                           /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    20,          /* lineNo */
    57,          /* colNo */
    "w",         /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    20,          /* lineNo */
    9,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    1                                           /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    20,          /* lineNo */
    9,           /* colNo */
    "out",       /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = {
    1,           /* iFirst */
    290,         /* iLast */
    14,          /* lineNo */
    36,          /* colNo */
    "w",         /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = {
    1,           /* iFirst */
    290,         /* iLast */
    18,          /* lineNo */
    50,          /* colNo */
    "w",         /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = {
    1,           /* iFirst */
    290,         /* iLast */
    20,          /* lineNo */
    57,          /* colNo */
    "w",         /* aName */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", /* pName */
    0                                           /* checkKind */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    8,           /* lineNo */
    1,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    12,          /* lineNo */
    28,          /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    12,          /* lineNo */
    5,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    20,          /* lineNo */
    30,          /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    20,          /* lineNo */
    9,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    20,          /* lineNo */
    5,           /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    20,          /* lineNo */
    21,          /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = {
    20,          /* lineNo */
    55,          /* colNo */
    "dev_HtZ_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" /* pName */
};

/* Function Declarations */
static void binary_expand_op_2(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3,
                               const emxArray_real_T *in4,
                               const emxArray_real_T *in5);

/* Function Definitions */
static void binary_expand_op_2(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3,
                               const emxArray_real_T *in4,
                               const emxArray_real_T *in5)
{
  const real_T *in2_data;
  const real_T *in4_data;
  const real_T *in5_data;
  real_T *in1_data;
  int32_T i;
  int32_T in3_idx_0;
  int32_T in5_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in5_data = in5->data;
  in4_data = in4->data;
  in2_data = in2->data;
  in3_idx_0 = in3->size[1];
  in5_idx_0 = in5->size[1];
  if (in5_idx_0 == 1) {
    loop_ub = in3_idx_0;
  } else {
    loop_ub = in5_idx_0;
  }
  i = in1->size[0];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &ec_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in3_idx_0 != 1);
  in3_idx_0 = (in5_idx_0 != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[i * stride_0_0] +
                  in4_data[(int32_T)in5_data[i * in3_idx_0] - 1];
  }
}

void b_dev_HtZ_g(const emlrtStack *sp, const real_T A[3190],
                 const real_T w[290], real_T ne, emxArray_real_T *out)
{
  emlrtStack st;
  emxArray_int32_T *r2;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r3;
  emxArray_real_T *temp_w_tmp;
  emxArray_real_T *y;
  real_T s;
  real_T *out_data;
  real_T *r4;
  real_T *r5;
  real_T *r7;
  real_T *temp_w_tmp_data;
  real_T *y_data;
  int32_T b_i;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T *r6;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* n_e stands for the amount of equaitons in A. The other definition are the
   */
  /* same.  */
  if (!(ne + 319.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ne + 319.0, &m_emlrtDCI, (emlrtConstCTX)sp);
  }
  s = (int32_T)muDoubleScalarFloor(ne + 319.0);
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &l_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = out->size[0];
  loop_ub = (int32_T)(ne + 319.0);
  out->size[0] = (int32_T)(ne + 319.0);
  emxEnsureCapacity_real_T(sp, out, i, &bc_emlrtRTEI);
  out_data = out->data;
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &l_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub; i++) {
    out_data[i] = 0.0;
  }
  emxInit_real_T(sp, &r, 2, &ec_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &ec_emlrtRTEI);
  emxInit_int32_T(sp, &r2, 2, &hc_emlrtRTEI);
  emxInit_real_T(sp, &r3, 1, &hc_emlrtRTEI);
  emxInit_real_T(sp, &temp_w_tmp, 2, &cc_emlrtRTEI);
  temp_w_tmp_data = temp_w_tmp->data;
  emxInit_real_T(sp, &y, 2, &ic_emlrtRTEI);
  y_data = y->data;
  for (b_i = 0; b_i < 30; b_i++) {
    int32_T temp_w_size_tmp;
    int16_T temp_index[10];
    int16_T i1;
    i1 = (int16_T)(10 * b_i + 1);
    for (i = 0; i < 10; i++) {
      temp_index[i] = (int16_T)(i + i1);
    }
    if (muDoubleScalarIsNaN(ne)) {
      i = temp_w_tmp->size[0] * temp_w_tmp->size[1];
      temp_w_tmp->size[1] = 1;
      temp_w_tmp->size[0] = 1;
      emxEnsureCapacity_real_T(sp, temp_w_tmp, i, &cc_emlrtRTEI);
      temp_w_tmp_data = temp_w_tmp->data;
      temp_w_tmp_data[0] = rtNaN;
    } else if (ne < 1.0) {
      temp_w_tmp->size[1] = 0;
      temp_w_tmp->size[0] = 1;
    } else {
      loop_ub = (int32_T)(ne - 1.0) + 1;
      i = temp_w_tmp->size[0] * temp_w_tmp->size[1];
      temp_w_tmp->size[1] = (int32_T)(ne - 1.0) + 1;
      temp_w_tmp->size[0] = 1;
      emxEnsureCapacity_real_T(sp, temp_w_tmp, i, &cc_emlrtRTEI);
      temp_w_tmp_data = temp_w_tmp->data;
      for (i = 0; i < loop_ub; i++) {
        temp_w_tmp_data[i] = (real_T)i + 1.0;
      }
    }
    temp_w_size_tmp = temp_w_tmp->size[1];
    if (b_i + 1 == 1) {
      real_T b_y[11];
      for (i = 0; i < 10; i++) {
        k = temp_index[i];
        if (k > 290) {
          emlrtDynamicBoundsCheckR2012b(k, 1, 290, &vd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      for (loop_ub = 0; loop_ub < 11; loop_ub++) {
        s = 0.0;
        for (k = 0; k < 10; k++) {
          i = loop_ub + k * 11;
          s += A[29 * (i % 11) + 319 * (i / 11)] * w[temp_index[k] - 1];
        }
        b_y[loop_ub] = s;
      }
      for (i = 0; i < 11; i++) {
        if (i + 1 > out->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, out->size[0], &k_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        out_data[i] = b_y[i];
      }
    } else {
      int32_T b_temp_w_tmp[2];
      if (b_i + 1 <= 29) {
        real_T b_y[11];
        for (i = 0; i < 10; i++) {
          k = temp_index[i];
          if (k > 290) {
            emlrtDynamicBoundsCheckR2012b(k, 1, 290, &wd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (loop_ub = 0; loop_ub < 11; loop_ub++) {
          s = 0.0;
          for (k = 0; k < 10; k++) {
            i = loop_ub + k * 11;
            s += A[(b_i + 29 * (i % 11)) + 319 * (i / 11)] *
                 w[temp_index[k] - 1];
          }
          b_y[loop_ub] = s;
        }
        i = 11 * b_i + 1;
        for (k = 0; k < 11; k++) {
          loop_ub = k + i;
          if (loop_ub > out->size[0]) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, out->size[0], &l_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          out_data[loop_ub - 1] = b_y[k];
        }
      }
      b_temp_w_tmp[0] = 1;
      b_temp_w_tmp[1] = temp_w_tmp->size[1];
      st.site = &eb_emlrtRSI;
      indexShapeCheck(&st, out->size[0], b_temp_w_tmp);
      i = r->size[0] * r->size[1];
      r->size[1] = temp_w_tmp->size[1];
      r->size[0] = 1;
      emxEnsureCapacity_real_T(sp, r, i, &ec_emlrtRTEI);
      r4 = r->data;
      i = 11 * b_i;
      for (k = 0; k < temp_w_size_tmp; k++) {
        s = (real_T)i + temp_w_tmp_data[k];
        if (s != (int32_T)s) {
          emlrtIntegerCheckR2012b(s, &n_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)s < 1) || ((int32_T)s > out->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)s, 1, out->size[0],
                                        &m_emlrtBCI, (emlrtConstCTX)sp);
        }
        r4[k] = out_data[(int32_T)s - 1];
      }
      k = r1->size[0] * r1->size[1];
      r1->size[1] = temp_w_tmp->size[1];
      r1->size[0] = 1;
      emxEnsureCapacity_real_T(sp, r1, k, &sk_emlrtRTEI);
      r5 = r1->data;
      k = 10 * (b_i - 1);
      for (loop_ub = 0; loop_ub < temp_w_size_tmp; loop_ub++) {
        s = (real_T)k + temp_w_tmp_data[loop_ub];
        if (s != (int32_T)s) {
          emlrtIntegerCheckR2012b(s, &o_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)s < 1) || ((int32_T)s > 290)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)s, 1, 290, &xd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r5[loop_ub] = w[(int32_T)s - 1];
      }
      if (muDoubleScalarIsNaN(ne)) {
        k = y->size[0] * y->size[1];
        y->size[1] = 1;
        y->size[0] = 1;
        emxEnsureCapacity_real_T(sp, y, k, &fc_emlrtRTEI);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else if (ne < 1.0) {
        y->size[1] = 0;
        y->size[0] = 1;
      } else {
        loop_ub = (int32_T)(ne - 1.0) + 1;
        k = y->size[0] * y->size[1];
        y->size[1] = (int32_T)(ne - 1.0) + 1;
        y->size[0] = 1;
        emxEnsureCapacity_real_T(sp, y, k, &fc_emlrtRTEI);
        y_data = y->data;
        for (k = 0; k < loop_ub; k++) {
          y_data[k] = (real_T)k + 1.0;
        }
      }
      loop_ub = y->size[1];
      k = r2->size[0] * r2->size[1];
      r2->size[1] = y->size[1];
      r2->size[0] = 1;
      emxEnsureCapacity_int32_T(sp, r2, k, &gc_emlrtRTEI);
      r6 = r2->data;
      for (k = 0; k < loop_ub; k++) {
        s = (real_T)i + y_data[k];
        if (s != (int32_T)s) {
          emlrtIntegerCheckR2012b(s, &p_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)s < 1) || ((int32_T)s > out->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)s, 1, out->size[0],
                                        &o_emlrtBCI, (emlrtConstCTX)sp);
        }
        r6[k] = (int32_T)s;
      }
      i = r3->size[0];
      r3->size[0] = temp_w_tmp->size[1];
      emxEnsureCapacity_real_T(sp, r3, i, &ec_emlrtRTEI);
      r7 = r3->data;
      loop_ub = (temp_w_tmp->size[1] / 2) << 1;
      k = loop_ub - 2;
      for (i = 0; i <= k; i += 2) {
        __m128d r8;
        __m128d r9;
        r8 = _mm_loadu_pd(&r4[i]);
        r9 = _mm_loadu_pd(&r5[i]);
        _mm_storeu_pd(&r7[i], _mm_add_pd(r8, r9));
      }
      for (i = loop_ub; i < temp_w_size_tmp; i++) {
        r7[i] = r4[i] + r5[i];
      }
      loop_ub = r2->size[1];
      if (r2->size[1] != r3->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(r2->size[1], r3->size[0], &i_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      for (i = 0; i < loop_ub; i++) {
        out_data[r6[i] - 1] = r7[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &temp_w_tmp);
  emxFree_real_T(sp, &r3);
  emxFree_int32_T(sp, &r2);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void dev_HtZ_g(const emlrtStack *sp, const real_T A[3190],
               const emxArray_real_T *w, real_T ne, emxArray_real_T *out)
{
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *temp_w;
  emxArray_real_T *temp_w_tmp;
  emxArray_real_T *y;
  const real_T *w_data;
  real_T s;
  real_T *out_data;
  real_T *r4;
  real_T *r6;
  real_T *temp_w_data;
  real_T *temp_w_tmp_data;
  real_T *y_data;
  int32_T b_i;
  int32_T i;
  int32_T i2;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T vectorUB;
  int32_T *r5;
  st.prev = sp;
  st.tls = sp->tls;
  w_data = w->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* n_e stands for the amount of equaitons in A. The other definition are the
   */
  /* same.  */
  if (!(ne + 319.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ne + 319.0, &m_emlrtDCI, (emlrtConstCTX)sp);
  }
  s = (int32_T)muDoubleScalarFloor(ne + 319.0);
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &l_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = out->size[0];
  loop_ub = (int32_T)(ne + 319.0);
  out->size[0] = (int32_T)(ne + 319.0);
  emxEnsureCapacity_real_T(sp, out, i, &bc_emlrtRTEI);
  out_data = out->data;
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &l_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub; i++) {
    out_data[i] = 0.0;
  }
  emxInit_real_T(sp, &temp_w, 2, &dc_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &ec_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 2, &hc_emlrtRTEI);
  emxInit_real_T(sp, &r2, 1, &hc_emlrtRTEI);
  emxInit_real_T(sp, &temp_w_tmp, 2, &cc_emlrtRTEI);
  temp_w_tmp_data = temp_w_tmp->data;
  emxInit_real_T(sp, &y, 2, &ic_emlrtRTEI);
  y_data = y->data;
  for (b_i = 0; b_i < 30; b_i++) {
    int16_T temp_index[10];
    int16_T i1;
    i1 = (int16_T)(10 * b_i + 1);
    for (i = 0; i < 10; i++) {
      temp_index[i] = (int16_T)(i + i1);
    }
    if (muDoubleScalarIsNaN(ne)) {
      i = temp_w_tmp->size[0] * temp_w_tmp->size[1];
      temp_w_tmp->size[1] = 1;
      temp_w_tmp->size[0] = 1;
      emxEnsureCapacity_real_T(sp, temp_w_tmp, i, &cc_emlrtRTEI);
      temp_w_tmp_data = temp_w_tmp->data;
      temp_w_tmp_data[0] = rtNaN;
    } else if (ne < 1.0) {
      temp_w_tmp->size[1] = 0;
      temp_w_tmp->size[0] = 1;
    } else {
      loop_ub_tmp = (int32_T)(ne - 1.0) + 1;
      i = temp_w_tmp->size[0] * temp_w_tmp->size[1];
      temp_w_tmp->size[1] = (int32_T)(ne - 1.0) + 1;
      temp_w_tmp->size[0] = 1;
      emxEnsureCapacity_real_T(sp, temp_w_tmp, i, &cc_emlrtRTEI);
      temp_w_tmp_data = temp_w_tmp->data;
      for (i = 0; i < loop_ub_tmp; i++) {
        temp_w_tmp_data[i] = (real_T)i + 1.0;
      }
    }
    loop_ub = temp_w_tmp->size[1];
    i = temp_w->size[0] * temp_w->size[1];
    temp_w->size[1] = temp_w_tmp->size[1];
    temp_w->size[0] = 1;
    emxEnsureCapacity_real_T(sp, temp_w, i, &dc_emlrtRTEI);
    temp_w_data = temp_w->data;
    i = 10 * (b_i - 1);
    loop_ub_tmp = (temp_w_tmp->size[1] / 2) << 1;
    vectorUB = loop_ub_tmp - 2;
    for (i2 = 0; i2 <= vectorUB; i2 += 2) {
      __m128d r3;
      r3 = _mm_loadu_pd(&temp_w_tmp_data[i2]);
      _mm_storeu_pd(&temp_w_data[i2], _mm_add_pd(_mm_set1_pd(i), r3));
    }
    for (i2 = loop_ub_tmp; i2 < loop_ub; i2++) {
      temp_w_data[i2] = (real_T)i + temp_w_tmp_data[i2];
    }
    if (b_i + 1 == 1) {
      real_T b_y[11];
      st.site = &cb_emlrtRSI;
      b_indexShapeCheck(&st, w->size[0]);
      for (i = 0; i < 10; i++) {
        i2 = temp_index[i];
        if (i2 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, w->size[0], &i_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      for (loop_ub_tmp = 0; loop_ub_tmp < 11; loop_ub_tmp++) {
        s = 0.0;
        for (vectorUB = 0; vectorUB < 10; vectorUB++) {
          i = loop_ub_tmp + vectorUB * 11;
          s += A[29 * (i % 11) + 319 * (i / 11)] *
               w_data[temp_index[vectorUB] - 1];
        }
        b_y[loop_ub_tmp] = s;
      }
      for (i = 0; i < 11; i++) {
        if (i + 1 > out->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, out->size[0], &k_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        out_data[i] = b_y[i];
      }
    } else {
      int32_T b_temp_w_tmp[2];
      if (b_i + 1 <= 29) {
        real_T b_y[11];
        st.site = &db_emlrtRSI;
        b_indexShapeCheck(&st, w->size[0]);
        for (i = 0; i < 10; i++) {
          i2 = temp_index[i];
          if (i2 > w->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, w->size[0], &j_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (loop_ub_tmp = 0; loop_ub_tmp < 11; loop_ub_tmp++) {
          s = 0.0;
          for (vectorUB = 0; vectorUB < 10; vectorUB++) {
            i = loop_ub_tmp + vectorUB * 11;
            s += A[(b_i + 29 * (i % 11)) + 319 * (i / 11)] *
                 w_data[temp_index[vectorUB] - 1];
          }
          b_y[loop_ub_tmp] = s;
        }
        i = 11 * b_i + 1;
        for (i2 = 0; i2 < 11; i2++) {
          loop_ub_tmp = i2 + i;
          if (loop_ub_tmp > out->size[0]) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, out->size[0],
                                          &l_emlrtBCI, (emlrtConstCTX)sp);
          }
          out_data[loop_ub_tmp - 1] = b_y[i2];
        }
      }
      b_temp_w_tmp[0] = 1;
      b_temp_w_tmp[1] = temp_w_tmp->size[1];
      st.site = &eb_emlrtRSI;
      indexShapeCheck(&st, out->size[0], b_temp_w_tmp);
      b_temp_w_tmp[0] = 1;
      vectorUB = temp_w->size[1];
      b_temp_w_tmp[1] = temp_w->size[1];
      st.site = &eb_emlrtRSI;
      indexShapeCheck(&st, w->size[0], b_temp_w_tmp);
      i = r->size[0] * r->size[1];
      r->size[1] = temp_w_tmp->size[1];
      r->size[0] = 1;
      emxEnsureCapacity_real_T(sp, r, i, &ec_emlrtRTEI);
      r4 = r->data;
      i = 11 * b_i;
      for (i2 = 0; i2 < loop_ub; i2++) {
        s = (real_T)i + temp_w_tmp_data[i2];
        if (s != (int32_T)s) {
          emlrtIntegerCheckR2012b(s, &n_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)s < 1) || ((int32_T)s > out->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)s, 1, out->size[0],
                                        &m_emlrtBCI, (emlrtConstCTX)sp);
        }
        r4[i2] = out_data[(int32_T)s - 1];
      }
      for (i2 = 0; i2 < vectorUB; i2++) {
        if (temp_w_data[i2] != (int32_T)muDoubleScalarFloor(temp_w_data[i2])) {
          emlrtIntegerCheckR2012b(temp_w_data[i2], &o_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        loop_ub_tmp = (int32_T)temp_w_data[i2];
        if ((loop_ub_tmp < 1) || (loop_ub_tmp > w->size[0])) {
          emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, w->size[0], &n_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((temp_w_tmp->size[1] != temp_w->size[1]) &&
          ((temp_w_tmp->size[1] != 1) && (temp_w->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(temp_w_tmp->size[1], temp_w->size[1],
                                    &h_emlrtECI, (emlrtConstCTX)sp);
      }
      if (muDoubleScalarIsNaN(ne)) {
        i2 = y->size[0] * y->size[1];
        y->size[1] = 1;
        y->size[0] = 1;
        emxEnsureCapacity_real_T(sp, y, i2, &fc_emlrtRTEI);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else if (ne < 1.0) {
        y->size[1] = 0;
        y->size[0] = 1;
      } else {
        loop_ub_tmp = (int32_T)(ne - 1.0) + 1;
        i2 = y->size[0] * y->size[1];
        y->size[1] = (int32_T)(ne - 1.0) + 1;
        y->size[0] = 1;
        emxEnsureCapacity_real_T(sp, y, i2, &fc_emlrtRTEI);
        y_data = y->data;
        for (i2 = 0; i2 < loop_ub_tmp; i2++) {
          y_data[i2] = (real_T)i2 + 1.0;
        }
      }
      loop_ub_tmp = y->size[1];
      i2 = r1->size[0] * r1->size[1];
      r1->size[1] = y->size[1];
      r1->size[0] = 1;
      emxEnsureCapacity_int32_T(sp, r1, i2, &gc_emlrtRTEI);
      r5 = r1->data;
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        s = (real_T)i + y_data[i2];
        if (s != (int32_T)s) {
          emlrtIntegerCheckR2012b(s, &p_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)s < 1) || ((int32_T)s > out->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)s, 1, out->size[0],
                                        &o_emlrtBCI, (emlrtConstCTX)sp);
        }
        r5[i2] = (int32_T)s;
      }
      if (temp_w_tmp->size[1] == temp_w->size[1]) {
        i = r2->size[0];
        r2->size[0] = temp_w_tmp->size[1];
        emxEnsureCapacity_real_T(sp, r2, i, &ec_emlrtRTEI);
        r6 = r2->data;
        for (i = 0; i < loop_ub; i++) {
          r6[i] = r4[i] + w_data[(int32_T)temp_w_data[i] - 1];
        }
      } else {
        st.site = &eb_emlrtRSI;
        binary_expand_op_2(&st, r2, r, temp_w_tmp, w, temp_w);
        r6 = r2->data;
      }
      loop_ub = r1->size[1];
      if (r1->size[1] != r2->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(r1->size[1], r2->size[0], &i_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      for (i = 0; i < loop_ub; i++) {
        out_data[r5[i] - 1] = r6[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &temp_w_tmp);
  emxFree_real_T(sp, &r2);
  emxFree_int32_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &temp_w);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_HtZ_g.c) */
