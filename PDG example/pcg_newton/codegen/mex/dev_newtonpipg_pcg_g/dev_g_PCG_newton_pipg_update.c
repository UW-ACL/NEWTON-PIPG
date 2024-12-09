/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_g_PCG_newton_pipg_update.c
 *
 * Code generation for function 'dev_g_PCG_newton_pipg_update'
 *
 */

/* Include files */
#include "dev_g_PCG_newton_pipg_update.h"
#include "dev_A_Q_D_unit.h"
#include "dev_HZ_g.h"
#include "dev_H_sinv_Ht.h"
#include "dev_HtZ_g.h"
#include "dev_S_inv_g.h"
#include "dev_cholesky_special.h"
#include "dev_g_Q_multi_vector.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "dev_solve_LTv.h"
#include "dev_solve_Lv.h"
#include "diag.h"
#include "find.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sub2ind.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo kc_emlrtRSI = {
    16,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    20,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    23,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    26,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    28,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    31,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    37,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    38,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    41,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    42,                             /* lineNo */
    "dev_g_PCG_newton_pipg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI = {
    5,             /* lineNo */
    "dev_g_A_Q_D", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_A_Q_D.m" /* pathName */
};

static emlrtRSInfo tg_emlrtRSI = {
    8,                    /* lineNo */
    "dev_g_multiply_J_k", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" /* pathName */
};

static emlrtRSInfo ug_emlrtRSI = {
    21,              /* lineNo */
    "processMatrix", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" /* pathName */
};

static emlrtRSInfo vg_emlrtRSI = {
    24,              /* lineNo */
    "processMatrix", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = {
    39,     /* lineNo */
    "find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo ah_emlrtRSI = {
    16,        /* lineNo */
    "sub2ind", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" /* pathName
                                                                          */
};

static emlrtRSInfo oh_emlrtRSI = {
    16,                   /* lineNo */
    "dev_Y_multi_vector", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    11,                   /* lineNo */
    "dev_Y_multi_vector", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m" /* pathName */
};

static emlrtECInfo u_emlrtECI = {
    1,                              /* nDims */
    42,                             /* lineNo */
    11,                             /* colNo */
    "dev_g_PCG_newton_pipg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pName */
};

static emlrtBCInfo hb_emlrtBCI = {
    1,                /* iFirst */
    11,               /* iLast */
    31,               /* lineNo */
    16,               /* colNo */
    "out",            /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    3                                                /* checkKind */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    5,             /* lineNo */
    45,            /* colNo */
    "dev_g_A_Q_D", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_A_Q_D.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    1,                              /* lineNo */
    26,                             /* colNo */
    "dev_g_PCG_newton_pipg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    42,                             /* lineNo */
    27,                             /* colNo */
    "dev_g_PCG_newton_pipg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    42,                             /* lineNo */
    51,                             /* colNo */
    "dev_g_PCG_newton_pipg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_g_PCG_newton_pipg_update.m" /* pName */
};

/* Function Definitions */
void binary_expand_op_14(real_T in1[616], const real_T in2[326],
                         const emxArray_real_T *in3, const real_T in4[290])
{
  const real_T *in3_data;
  int32_T i;
  int32_T stride_0_0;
  in3_data = in3->data;
  stride_0_0 = (in3->size[0] != 1);
  for (i = 0; i < 326; i++) {
    in1[i] = in2[i] - in3_data[i * stride_0_0];
  }
  memcpy(&in1[326], &in4[0], 290U * sizeof(real_T));
}

void dev_g_PCG_newton_pipg_update(
    dev_newtonpipg_pcg_gStackData *SD, const emlrtStack *sp,
    const real_T A[3190], const real_T P[326], real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T diag_J_k_p[290], const real_T temp_prime[326], real_T R[616],
    real_T alpha, real_T beta, real_T rho, real_T delta_Y, real_T dzw[616],
    real_T chol_y[5800])
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int8_T *r3;
  emxArray_real_T *Q;
  emxArray_real_T *Q_inv;
  emxArray_real_T *b;
  emxArray_real_T *b_A_n;
  emxArray_real_T *r2;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r9;
  emxArray_real_T *temp_index;
  real_T Y_out[5800];
  real_T A_n[3190];
  real_T R_z[326];
  real_T J_k_polar_n[290];
  real_T R_w_new[290];
  real_T b_out[290];
  real_T dv[290];
  real_T out[110];
  real_T c_J_k_polar_n[10];
  real_T ind_data[10];
  real_T b_b;
  real_T temp;
  real_T *A_n_data;
  real_T *Q_data;
  real_T *b_data;
  real_T *r6;
  real_T *temp_index_data;
  int32_T ii_data[10];
  int32_T tmp_data[10];
  int32_T ii[2];
  int32_T iv[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T b_temp;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int8_T *r7;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* Function for Newton pipg update. */
  /* A is the matrix defining the matrix H. For further definition, check */
  /* data_tranplant file. P is the quadratic cost */
  /* nx = #state, nu = #control, ne = #equality */
  /* proj_* are pojrection coefficients. diag_J_k_p, R and temp_prime comes from
   */
  /* pipgupdate.alpha, beta are pipg coeffcients. delta_Y is used to stablelize
   */
  /* the algo.  */
  /* P, diag_J_k_p must be vector */
  /*  setup */
  for (i = 0; i <= 614; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (b_i = 0; b_i <= 324; b_i += 2) {
    r = _mm_loadu_pd(&R[b_i]);
    _mm_storeu_pd(&R_z[b_i], _mm_div_pd(r, _mm_set1_pd(rho)));
  }
  temp = -2.0 * beta;
  st.site = &kc_emlrtRSI;
  b_dev_HZ_g(&st, A, R_z, ne, dv);
  for (b_i = 0; b_i <= 288; b_i += 2) {
    r = _mm_loadu_pd(&dv[b_i]);
    r1 = _mm_loadu_pd(&R[b_i + 326]);
    _mm_storeu_pd(
        &R_w_new[b_i],
        _mm_add_pd(_mm_mul_pd(_mm_mul_pd(_mm_set1_pd(temp),
                                         _mm_loadu_pd(&diag_J_k_p[b_i])),
                              r),
                   _mm_div_pd(r1, _mm_set1_pd(rho))));
  }
  /* check? */
  /*  Factorization of J_D */
  emxInit_real_T(sp, &Q, 3, &be_emlrtRTEI);
  emxInit_real_T(sp, &Q_inv, 3, &be_emlrtRTEI);
  st.site = &lc_emlrtRSI;
  dev_S_inv_g(&st, temp_prime, nx, nu, proj_index_all, proj_coefficient_all, P,
              alpha, Q, Q_inv);
  Q_data = Q->data;
  /* This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1; */
  /* step 2 update A */
  st.site = &mc_emlrtRSI;
  memcpy(&A_n[0], &A[0], 3190U * sizeof(real_T));
  loop_ub_tmp = Q->size[0];
  emxInit_real_T(&st, &b, 1, &ce_emlrtRTEI);
  emxInit_real_T(&st, &r2, 3, &sd_emlrtRTEI);
  emxInit_real_T(&st, &temp_index, 2, &de_emlrtRTEI);
  temp_index_data = temp_index->data;
  emxInit_int8_T(&st, &r3, &ee_emlrtRTEI);
  emxInit_real_T(&st, &r4, 2, &ee_emlrtRTEI);
  emxInit_real_T(&st, &b_A_n, 2, &wd_emlrtRTEI);
  emxInit_real_T(&st, &r5, 2, &yd_emlrtRTEI);
  for (b_i = 0; b_i < 29; b_i++) {
    int32_T flag;
    boolean_T exitg1;
    i = r2->size[0] * r2->size[1] * r2->size[2];
    r2->size[2] = 1;
    loop_ub = Q->size[1];
    r2->size[1] = Q->size[1];
    r2->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(&st, r2, i, &sd_emlrtRTEI);
    r6 = r2->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        r6[i1 + r2->size[1] * i] =
            Q_data[(b_i + 30 * i1) + 30 * Q->size[1] * i];
      }
    }
    b_st.site = &fg_emlrtRSI;
    /* WE want to compute the innerproduct of A and Q. */
    /* When col(A) \neq row(Q), we need an L such that only the first L column
     */
    /* multiply the top square block of Q that ahs size L */
    memset(&out[0], 0, 110U * sizeof(real_T));
    temp = 1.0;
    flag = 0;
    exitg1 = false;
    while ((!exitg1) && (temp <= 11.0)) {
      if (temp != (int32_T)muDoubleScalarFloor(temp)) {
        emlrtIntegerCheckR2012b(temp, &v_emlrtDCI, &b_st);
      }
      if (((int32_T)temp < 1) || ((int32_T)temp > 11)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)temp, 1, 11, &gb_emlrtBCI,
                                      &b_st);
      }
      b_b = proj_index_all[b_i + 30 * (((int32_T)temp - 1) % 11)];
      if (b_b == rtInf) {
        exitg1 = true;
      } else {
        if (b_b >= 11.0) {
          c_st.site = &gg_emlrtRSI;
          d_st.site = &ub_emlrtRSI;
          b_temp = 12 - (int32_T)temp;
          i = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = 12 - (int32_T)temp;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&d_st, temp_index, i, &fc_emlrtRTEI);
          temp_index_data = temp_index->data;
          for (i = 0; i < b_temp; i++) {
            temp_index_data[i] = temp + (real_T)i;
          }
          temp = proj_index_all[(b_i + 30 * (((int32_T)temp + 10) % 11)) + 330];
          flag = 1;
        } else {
          c_st.site = &hg_emlrtRSI;
          d_st.site = &ub_emlrtRSI;
          if (muDoubleScalarIsNaN(b_b)) {
            i = temp_index->size[0] * temp_index->size[1];
            temp_index->size[1] = 1;
            temp_index->size[0] = 1;
            emxEnsureCapacity_real_T(&d_st, temp_index, i, &td_emlrtRTEI);
            temp_index_data = temp_index->data;
            temp_index_data[0] = rtNaN;
          } else if (b_b < temp) {
            temp_index->size[1] = 0;
            temp_index->size[0] = 1;
          } else if (muDoubleScalarIsInf(b_b) && (temp == b_b)) {
            i = temp_index->size[0] * temp_index->size[1];
            temp_index->size[1] = 1;
            temp_index->size[0] = 1;
            emxEnsureCapacity_real_T(&d_st, temp_index, i, &td_emlrtRTEI);
            temp_index_data = temp_index->data;
            temp_index_data[0] = rtNaN;
          } else {
            b_loop_ub = (int32_T)(b_b - temp) + 1;
            i = temp_index->size[0] * temp_index->size[1];
            temp_index->size[1] = b_loop_ub;
            temp_index->size[0] = 1;
            emxEnsureCapacity_real_T(&d_st, temp_index, i, &td_emlrtRTEI);
            temp_index_data = temp_index->data;
            for (i = 0; i < b_loop_ub; i++) {
              temp_index_data[i] = temp + (real_T)i;
            }
          }
          temp = proj_index_all[(b_i + 30 * (((int32_T)temp + 10) % 11)) + 330];
        }
        if (temp == 1.0) {
          /*  Q(temp_index, temp_index)  =
           * dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
           */
          /*       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
           */
          b_temp = temp_index->size[1];
          for (i = 0; i < b_temp; i++) {
            if (temp_index_data[i] !=
                (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
              emlrtIntegerCheckR2012b(temp_index_data[i], &x_emlrtDCI, &b_st);
            }
            i1 = (int32_T)temp_index_data[i];
            if ((i1 < 1) || (i1 > 11)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 11, &ib_emlrtBCI, &b_st);
            }
          }
          for (i = 0; i < b_temp; i++) {
            i1 = (int32_T)temp_index_data[i];
            if ((i1 < 1) || (i1 > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub_tmp, &jb_emlrtBCI,
                                            &b_st);
            }
          }
          for (i = 0; i < b_temp; i++) {
            i1 = (int32_T)temp_index_data[i];
            if ((i1 < 1) || (i1 > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &lb_emlrtBCI,
                                            &b_st);
            }
          }
          i = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(&b_st, r5, i, &vd_emlrtRTEI);
          A_n_data = r5->data;
          for (i = 0; i < b_temp; i++) {
            for (i1 = 0; i1 < b_temp; i1++) {
              A_n_data[i1 + r5->size[1] * i] =
                  r6[((int32_T)temp_index_data[i1] +
                      loop_ub * ((int32_T)temp_index_data[i] - 1)) -
                     1];
            }
          }
          c_st.site = &ig_emlrtRSI;
          c_diag(&c_st, r5, b);
          b_data = b->data;
          if ((temp_index->size[1] != b->size[0]) &&
              ((temp_index->size[1] != 1) && (b->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(temp_index->size[1], b->size[0],
                                        &v_emlrtECI, &b_st);
          }
          i = r3->size[0];
          r3->size[0] = temp_index->size[1];
          emxEnsureCapacity_int8_T(&b_st, r3, i, &xd_emlrtRTEI);
          r7 = r3->data;
          for (i = 0; i < b_temp; i++) {
            r7[i] = (int8_T)((int8_T)temp_index_data[i] - 1);
          }
          if (temp_index->size[1] == b->size[0]) {
            i = r4->size[0] * r4->size[1];
            r4->size[1] = temp_index->size[1];
            r4->size[0] = 10;
            emxEnsureCapacity_real_T(&b_st, r4, i, &ae_emlrtRTEI);
            A_n_data = r4->data;
            for (i = 0; i < 10; i++) {
              for (i1 = 0; i1 < b_temp; i1++) {
                A_n_data[i1 + r4->size[1] * i] =
                    A_n[(b_i + 29 * ((int32_T)temp_index_data[i1] - 1)) +
                        319 * i] *
                    b_data[i1];
              }
            }
          } else {
            c_st.site = &ig_emlrtRSI;
            binary_expand_op_13(&c_st, r4, A_n, b_i, temp_index, b);
            A_n_data = r4->data;
          }
          ii[0] = 10;
          ii[1] = temp_index->size[1];
          iv[0] = 10;
          iv[1] = r4->size[1];
          emlrtSubAssignSizeCheckR2012b(&ii[0], 2, &iv[0], 2, &w_emlrtECI,
                                        &b_st);
          b_loop_ub = r3->size[0];
          for (i = 0; i < 10; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              out[r7[i1] + 11 * i] = A_n_data[i1 + r4->size[1] * i];
            }
          }
          /*  to save computation. */
        } else if ((temp == 2.0) || (temp == 3.0)) {
          b_temp = temp_index->size[1];
          for (i = 0; i < b_temp; i++) {
            if (temp_index_data[i] !=
                (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
              emlrtIntegerCheckR2012b(temp_index_data[i], &w_emlrtDCI, &b_st);
            }
            i1 = (int32_T)temp_index_data[i];
            if ((i1 < 1) || (i1 > 11)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 11, &hb_emlrtBCI, &b_st);
            }
          }
          i = r3->size[0];
          r3->size[0] = temp_index->size[1];
          emxEnsureCapacity_int8_T(&b_st, r3, i, &ud_emlrtRTEI);
          r7 = r3->data;
          for (i = 0; i < b_temp; i++) {
            r7[i] = (int8_T)((int8_T)temp_index_data[i] - 1);
          }
          for (i = 0; i < b_temp; i++) {
            i1 = (int32_T)temp_index_data[i];
            if ((i1 < 1) || (i1 > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub_tmp, &kb_emlrtBCI,
                                            &b_st);
            }
          }
          for (i = 0; i < b_temp; i++) {
            i1 = (int32_T)temp_index_data[i];
            if ((i1 < 1) || (i1 > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &mb_emlrtBCI,
                                            &b_st);
            }
          }
          c_st.site = &jg_emlrtRSI;
          i = b_A_n->size[0] * b_A_n->size[1];
          b_A_n->size[1] = temp_index->size[1];
          b_A_n->size[0] = 10;
          emxEnsureCapacity_real_T(&c_st, b_A_n, i, &wd_emlrtRTEI);
          A_n_data = b_A_n->data;
          for (i = 0; i < 10; i++) {
            for (i1 = 0; i1 < b_temp; i1++) {
              A_n_data[i1 + b_A_n->size[1] * i] =
                  A_n[(b_i + 29 * ((int32_T)temp_index_data[i1] - 1)) +
                      319 * i];
            }
          }
          i = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(&c_st, r5, i, &yd_emlrtRTEI);
          A_n_data = r5->data;
          for (i = 0; i < b_temp; i++) {
            for (i1 = 0; i1 < b_temp; i1++) {
              A_n_data[i1 + r5->size[1] * i] =
                  r6[((int32_T)temp_index_data[i1] +
                      loop_ub * ((int32_T)temp_index_data[i] - 1)) -
                     1];
            }
          }
          d_st.site = &kg_emlrtRSI;
          mtimes(&d_st, b_A_n, r5, r4);
          A_n_data = r4->data;
          ii[0] = 10;
          ii[1] = temp_index->size[1];
          iv[0] = 10;
          iv[1] = r4->size[1];
          emlrtSubAssignSizeCheckR2012b(&ii[0], 2, &iv[0], 2, &x_emlrtECI,
                                        &b_st);
          b_loop_ub = r3->size[0];
          for (i = 0; i < 10; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              out[r7[i1] + 11 * i] = A_n_data[i1 + r4->size[1] * i];
            }
          }
          /*  a faster way is to treat diagbonal cases vs dense cases
           * differently. */
          /*  Q(temp_index, temp_index) = dev_jacob_ball(z0(temp_index),
           * proj_coefficients(1,temp), P(temp_index), alpha); */
        }
        /* update */
        if (flag == 1) {
          exitg1 = true;
        } else {
          temp = b_b + 1.0;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
      }
    }
    for (i = 0; i < 10; i++) {
      for (i1 = 0; i1 < 11; i1++) {
        A_n[(b_i + 29 * i1) + 319 * i] = out[i1 + 11 * i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emxFree_real_T(&st, &r5);
  emxFree_real_T(&st, &b_A_n);
  emxFree_real_T(&st, &r4);
  emxFree_int8_T(&st, &r3);
  emxFree_real_T(&st, &temp_index);
  emxFree_real_T(&st, &r2);
  /* H*Q_D */
  /* step 3 compute H_Sinv_JD_Ht */
  st.site = &nc_emlrtRSI;
  dev_H_sinv_Ht(&st, A_n, Q, proj_index_all, nx, SD->f0.Y);
  b_b = alpha * beta;
  for (i = 0; i <= 5798; i += 2) {
    r = _mm_loadu_pd(&SD->f0.Y[i]);
    _mm_storeu_pd(&SD->f0.Y[i], _mm_mul_pd(r, _mm_set1_pd(b_b)));
  }
  /*  beta* alpha * H *Sinv* J_D*Ht; */
  st.site = &oc_emlrtRSI;
  /* Y is my result of HsinvHt. I want to compute J_k HsinveHtJ_k +(I-J_k) +
   * delta I */
  i = 0;
  i1 = 0;
  for (loop_ub_tmp = 0; loop_ub_tmp < 290; loop_ub_tmp++) {
    J_k_polar_n[i1 + 29 * i] = diag_J_k_p[loop_ub_tmp];
    i++;
    if (i > 9) {
      i = 0;
      i1++;
    }
  }
  memcpy(&Y_out[0], &SD->f0.Y[0], 5800U * sizeof(real_T));
  for (b_i = 0; b_i < 29; b_i++) {
    real_T dv1[100];
    boolean_T b_J_k_polar_n[10];
    b_st.site = &tg_emlrtRSI;
    for (i = 0; i < 10; i++) {
      for (i1 = 0; i1 < 10; i1++) {
        dv1[i1 + 10 * i] = SD->f0.Y[(b_i + 58 * i1) + 580 * i];
      }
    }
    c_st.site = &ug_emlrtRSI;
    for (i = 0; i < 10; i++) {
      b_J_k_polar_n[i] = (J_k_polar_n[b_i + 29 * i] == 0.0);
    }
    d_st.site = &wg_emlrtRSI;
    b_temp = eml_find(&d_st, b_J_k_polar_n, ii_data);
    for (i = 0; i < b_temp; i++) {
      ind_data[i] = ii_data[i];
    }
    for (i = 0; i < b_temp; i++) {
      ii_data[i] = (int32_T)ind_data[i];
      for (i1 = 0; i1 < 10; i1++) {
        dv1[i1 + 10 * (ii_data[i] - 1)] = 0.0;
      }
    }
    for (i = 0; i < 10; i++) {
      for (i1 = 0; i1 < b_temp; i1++) {
        dv1[(ii_data[i1] + 10 * i) - 1] = 0.0;
      }
    }
    c_st.site = &vg_emlrtRSI;
    d_st.site = &ah_emlrtRSI;
    b_loop_ub = sub2ind(&d_st, ind_data, b_temp, ind_data, b_temp, tmp_data);
    for (i = 0; i < b_loop_ub; i++) {
      ind_data[i] = tmp_data[i];
    }
    for (i = 0; i < b_loop_ub; i++) {
      i1 = (int32_T)ind_data[i];
      dv1[(i1 - 1) % 10 * 10 + (i1 - 1) / 10] = 1.0;
    }
    /*  for idx = reshape(zeroIndices, 1, length(zeroIndices)) */
    /*      B(idx, idx) = 1; */
    /*  end */
    for (b_loop_ub = 0; b_loop_ub < 10; b_loop_ub++) {
      i = b_loop_ub + 10 * b_loop_ub;
      dv1[i] += delta_Y;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&b_st);
      }
    }
    for (i = 0; i < 10; i++) {
      for (i1 = 0; i1 < 10; i1++) {
        Y_out[(b_i + 58 * i1) + 580 * i] = dv1[i1 + 10 * i];
      }
    }
    if (b_i + 1 < 29) {
      for (i = 0; i < 10; i++) {
        for (i1 = 0; i1 < b_temp; i1++) {
          Y_out[((b_i + 58 * (ii_data[i1] - 1)) + 580 * i) + 30] = 0.0;
        }
      }
    }
    if (b_i + 1 >= 2) {
      for (i = 0; i < b_temp; i++) {
        for (i1 = 0; i1 < 10; i1++) {
          Y_out[((b_i + 58 * i1) + 580 * (ii_data[i] - 1)) + 29] = 0.0;
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  /* final matrix */
  /* Step 4 compute */
  st.site = &pc_emlrtRSI;
  dev_cholesky_special(&st, Y_out, chol_y);
  /* Step 5 righthand side */
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&R_w_new[i]);
    _mm_storeu_pd(&J_k_polar_n[i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[i]), r)));
  }
  real_T dv2[326];
  /* reform this what is the size of diag_J_k_p..*%check */
  /* %%%%3 */
  st.site = &qc_emlrtRSI;
  dev_g_Q_multi_vector(&st, Q_inv, R_z, proj_index_all, nx, nu, dv2);
  st.site = &qc_emlrtRSI;
  b_dev_g_Q_multi_vector(&st, Q_inv, dv2, proj_index_all, nx, nu, R_z);
  emxFree_real_T(sp, &Q_inv);
  st.site = &rc_emlrtRSI;
  for (b_i = 0; b_i <= 288; b_i += 2) {
    r = _mm_loadu_pd(&J_k_polar_n[b_i]);
    _mm_storeu_pd(&J_k_polar_n[b_i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[b_i]), r)));
    _mm_storeu_pd(&b_out[b_i], _mm_set1_pd(0.0));
  }
  for (b_i = 0; b_i < 29; b_i++) {
    if (b_i + 1 == 1) {
      for (b_loop_ub = 0; b_loop_ub < 10; b_loop_ub++) {
        temp = 0.0;
        b_b = 0.0;
        for (loop_ub_tmp = 0; loop_ub_tmp < 10; loop_ub_tmp++) {
          i = b_loop_ub + loop_ub_tmp * 10;
          temp += SD->f0.Y[(58 * (i % 10) + 580 * (i / 10)) + 30] *
                  J_k_polar_n[loop_ub_tmp + 10];
          b_b += J_k_polar_n[loop_ub_tmp] *
                 SD->f0.Y[58 * loop_ub_tmp + 580 * b_loop_ub];
        }
        b_out[b_loop_ub] = b_b + temp;
      }
    } else if (b_i + 1 == 29) {
      b_st.site = &ph_emlrtRSI;
      c_st.site = &bb_emlrtRSI;
      for (i = 0; i < 10; i++) {
        b_b = 0.0;
        temp = 0.0;
        for (i1 = 0; i1 < 10; i1++) {
          loop_ub_tmp = 58 * i1 + 580 * i;
          b_b += J_k_polar_n[i1 + 280] * SD->f0.Y[loop_ub_tmp + 28];
          temp += J_k_polar_n[i1 + 270] * SD->f0.Y[loop_ub_tmp + 57];
        }
        b_out[i + 280] = b_b + temp;
      }
    } else {
      b_temp = b_i * 10;
      if (b_temp - 9 > b_temp) {
        i = 0;
        i1 = 0;
      } else {
        i = b_temp - 10;
        i1 = b_temp;
      }
      b_st.site = &oh_emlrtRSI;
      c_st.site = &bb_emlrtRSI;
      i1 -= i;
      if (i1 != 10) {
        if (i1 == 1) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &j_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &i_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      b_st.site = &oh_emlrtRSI;
      c_st.site = &bb_emlrtRSI;
      for (b_loop_ub = 0; b_loop_ub < 10; b_loop_ub++) {
        temp = 0.0;
        for (loop_ub_tmp = 0; loop_ub_tmp < 10; loop_ub_tmp++) {
          i1 = b_loop_ub + loop_ub_tmp * 10;
          temp += SD->f0.Y[((b_i + 58 * (i1 % 10)) + 580 * (i1 / 10)) + 30] *
                  J_k_polar_n[(b_temp + loop_ub_tmp) + 10];
        }
        ind_data[b_loop_ub] = temp;
      }
      memcpy(&c_J_k_polar_n[0], &J_k_polar_n[b_temp], 10U * sizeof(real_T));
      for (i1 = 0; i1 < 10; i1++) {
        b_b = 0.0;
        temp = 0.0;
        for (loop_ub_tmp = 0; loop_ub_tmp < 10; loop_ub_tmp++) {
          b_loop_ub = (b_i + 58 * loop_ub_tmp) + 580 * i1;
          b_b += c_J_k_polar_n[loop_ub_tmp] * SD->f0.Y[b_loop_ub];
          temp += J_k_polar_n[i + loop_ub_tmp] * SD->f0.Y[b_loop_ub + 29];
        }
        b_out[i1 + b_temp] = (b_b + temp) + ind_data[i1];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &rc_emlrtRSI;
  b_dev_HZ_g(&st, A, R_z, ne, dv);
  for (i = 0; i <= 288; i += 2) {
    __m128d r8;
    r = _mm_loadu_pd(&dv[i]);
    r1 = _mm_loadu_pd(&R_w_new[i]);
    r8 = _mm_loadu_pd(&b_out[i]);
    _mm_storeu_pd(
        &R_w_new[i],
        _mm_sub_pd(
            _mm_add_pd(r1, _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(beta),
                                                 _mm_loadu_pd(&diag_J_k_p[i])),
                                      r)),
            r8));
  }
  /* solve dw */
  st.site = &sc_emlrtRSI;
  dev_solve_Lv(&st, chol_y, R_w_new, dv);
  st.site = &sc_emlrtRSI;
  dev_solve_LTv(&st, chol_y, dv, J_k_polar_n);
  st.site = &tc_emlrtRSI;
  b_dev_HtZ_g(&st, A, J_k_polar_n, ne, b);
  emxInit_real_T(sp, &r9, 1, &fe_emlrtRTEI);
  st.site = &tc_emlrtRSI;
  c_dev_g_Q_multi_vector(&st, Q, b, proj_index_all, nx, nu, r9);
  st.site = &tc_emlrtRSI;
  d_dev_g_Q_multi_vector(&st, Q, r9, proj_index_all, nx, nu, b);
  b_data = b->data;
  emxFree_real_T(sp, &r9);
  emxFree_real_T(sp, &Q);
  loop_ub = b->size[0];
  b_loop_ub = (b->size[0] / 2) << 1;
  b_temp = b_loop_ub - 2;
  for (i = 0; i <= b_temp; i += 2) {
    r = _mm_loadu_pd(&b_data[i]);
    _mm_storeu_pd(&b_data[i], _mm_mul_pd(_mm_set1_pd(alpha), r));
  }
  for (i = b_loop_ub; i < loop_ub; i++) {
    b_data[i] *= alpha;
  }
  if ((b->size[0] != 326) && (b->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, b->size[0], &u_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (b->size[0] == 326) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&R_z[i]);
      r1 = _mm_loadu_pd(&b_data[i]);
      _mm_storeu_pd(&dzw[i], _mm_sub_pd(r, r1));
    }
    memcpy(&dzw[326], &J_k_polar_n[0], 290U * sizeof(real_T));
  } else {
    binary_expand_op_14(dzw, R_z, b, J_k_polar_n);
  }
  emxFree_real_T(sp, &b);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_g_PCG_newton_pipg_update.c) */
