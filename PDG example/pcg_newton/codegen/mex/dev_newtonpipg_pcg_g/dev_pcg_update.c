/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_pcg_update.c
 *
 * Code generation for function 'dev_pcg_update'
 *
 */

/* Include files */
#include "dev_pcg_update.h"
#include "dev_HZ_g.h"
#include "dev_HtZ_g.h"
#include "dev_S_inv_g.h"
#include "dev_g_PCG_newton_pipg_update.h"
#include "dev_g_Q_multi_vector.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "dev_solve_LTv.h"
#include "dev_solve_Lv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ai_emlrtRSI = {
    7,                /* lineNo */
    "dev_pcg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    12,               /* lineNo */
    "dev_pcg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    13,               /* lineNo */
    "dev_pcg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    17,               /* lineNo */
    "dev_pcg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    19,               /* lineNo */
    "dev_pcg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pathName */
};

static emlrtRSInfo fi_emlrtRSI = {
    21,               /* lineNo */
    "dev_pcg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pathName */
};

static emlrtRSInfo gi_emlrtRSI = {
    22,               /* lineNo */
    "dev_pcg_update", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pathName */
};

static emlrtRSInfo hi_emlrtRSI = {
    13,             /* lineNo */
    "pcg_dev_pipg", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\pcg_dev_pipg.m" /* pathName */
};

static emlrtRSInfo ii_emlrtRSI = {
    14,             /* lineNo */
    "pcg_dev_pipg", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\pcg_dev_pipg.m" /* pathName */
};

static emlrtRSInfo ji_emlrtRSI = {
    25,             /* lineNo */
    "pcg_dev_pipg", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\pcg_dev_pipg.m" /* pathName */
};

static emlrtRSInfo ki_emlrtRSI = {
    38,             /* lineNo */
    "pcg_dev_pipg", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\pcg_dev_pipg.m" /* pathName */
};

static emlrtRSInfo li_emlrtRSI = {
    4,                   /* lineNo */
    "pcg_matrix_vector", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\pcg_matrix_vector.m" /* pathName */
};

static emlrtRSInfo mi_emlrtRSI = {
    6,                   /* lineNo */
    "pcg_matrix_vector", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\pcg_matrix_vector.m" /* pathName */
};

static emlrtRSInfo ni_emlrtRSI = {
    2,                        /* lineNo */
    "pcg_solve_precondition", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\pcg_solve_precondition.m" /* pathName */
};

static emlrtECInfo tc_emlrtECI = {
    1,                /* nDims */
    22,               /* lineNo */
    11,               /* colNo */
    "dev_pcg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = {
    17,               /* lineNo */
    1,                /* colNo */
    "dev_pcg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = {
    1,                /* lineNo */
    44,               /* colNo */
    "dev_pcg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = {
    17,               /* lineNo */
    33,               /* colNo */
    "dev_pcg_update", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_pcg_update.m" /* pName */
};

/* Function Definitions */
real_T dev_pcg_update(const emlrtStack *sp, const real_T A[3190],
                      const real_T P[326], const real_T L[5800], real_T nx,
                      real_T nu, real_T ne, const real_T proj_index_all[660],
                      const real_T proj_coefficient_all[660],
                      const real_T diag_J_k_p[290],
                      const real_T temp_prime[326], real_T R[616], real_T alpha,
                      real_T beta, real_T rho, real_T delta_Y, real_T tol,
                      real_T max_iter, real_T dzw[616], real_T *iter,
                      real_T *accuracy)
{
  __m128d r;
  __m128d r1;
  __m128d r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *Q;
  emxArray_real_T *Q_inv;
  emxArray_real_T *r2;
  emxArray_real_T *temp2;
  real_T R_z[326];
  real_T R_w_new[290];
  real_T b_diag_J_k_p[290];
  real_T b_r[290];
  real_T dw[290];
  real_T one_minus_jkdeltaw[290];
  real_T p[290];
  real_T z_new[290];
  real_T a_tmp;
  real_T absxk;
  real_T b_alpha;
  real_T b_scale;
  real_T k;
  real_T nb;
  real_T pcg_flag;
  real_T scale;
  real_T t;
  real_T *temp2_data;
  int32_T b_i;
  int32_T b_k;
  int32_T i;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  setup */
  for (i = 0; i <= 614; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (b_i = 0; b_i <= 324; b_i += 2) {
    r = _mm_loadu_pd(&R[b_i]);
    _mm_storeu_pd(&R_z[b_i], _mm_div_pd(r, _mm_set1_pd(rho)));
  }
  scale = -2.0 * beta;
  st.site = &ai_emlrtRSI;
  b_dev_HZ_g(&st, A, R_z, ne, b_diag_J_k_p);
  for (b_i = 0; b_i <= 288; b_i += 2) {
    r = _mm_loadu_pd(&b_diag_J_k_p[b_i]);
    r1 = _mm_loadu_pd(&R[b_i + 326]);
    _mm_storeu_pd(
        &R_w_new[b_i],
        _mm_add_pd(_mm_mul_pd(_mm_mul_pd(_mm_set1_pd(scale),
                                         _mm_loadu_pd(&diag_J_k_p[b_i])),
                              r),
                   _mm_div_pd(r1, _mm_set1_pd(rho))));
  }
  real_T dv[326];
  /* check? */
  /*  Factorization of J_D */
  emxInit_real_T(sp, &Q, 3, &vk_emlrtRTEI);
  emxInit_real_T(sp, &Q_inv, 3, &vk_emlrtRTEI);
  st.site = &bi_emlrtRSI;
  dev_S_inv_g(&st, temp_prime, nx, nu, proj_index_all, proj_coefficient_all, P,
              alpha, Q, Q_inv);
  /* This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1; */
  st.site = &ci_emlrtRSI;
  dev_g_Q_multi_vector(&st, Q_inv, R_z, proj_index_all, nx, nu, dv);
  st.site = &ci_emlrtRSI;
  b_dev_g_Q_multi_vector(&st, Q_inv, dv, proj_index_all, nx, nu, R_z);
  emxFree_real_T(sp, &Q_inv);
  /* Step 5 righthand side */
  for (b_i = 0; b_i <= 288; b_i += 2) {
    r = _mm_loadu_pd(&diag_J_k_p[b_i]);
    r1 = _mm_loadu_pd(&R_w_new[b_i]);
    r1 = _mm_sub_pd(r1, _mm_mul_pd(r, r1));
    _mm_storeu_pd(&one_minus_jkdeltaw[b_i], _mm_sub_pd(r1, _mm_mul_pd(r, r1)));
  }
  emxInit_real_T(sp, &temp2, 1, &uk_emlrtRTEI);
  st.site = &di_emlrtRSI;
  b_dev_HtZ_g(&st, A, one_minus_jkdeltaw, ne, temp2);
  emxInit_real_T(sp, &r2, 1, &wk_emlrtRTEI);
  st.site = &di_emlrtRSI;
  c_dev_g_Q_multi_vector(&st, Q, temp2, proj_index_all, nx, nu, r2);
  st.site = &di_emlrtRSI;
  d_dev_g_Q_multi_vector(&st, Q, r2, proj_index_all, nx, nu, temp2);
  a_tmp = alpha * beta;
  st.site = &ei_emlrtRSI;
  dev_HZ_g(&st, A, temp2, ne, one_minus_jkdeltaw);
  st.site = &ei_emlrtRSI;
  b_dev_HZ_g(&st, A, R_z, ne, b_diag_J_k_p);
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&b_diag_J_k_p[i]);
    r1 = _mm_loadu_pd(&R_w_new[i]);
    r3 = _mm_loadu_pd(&one_minus_jkdeltaw[i]);
    _mm_storeu_pd(
        &R_w_new[i],
        _mm_sub_pd(
            _mm_add_pd(r1, _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(beta),
                                                 _mm_loadu_pd(&diag_J_k_p[i])),
                                      r)),
            _mm_mul_pd(_mm_set1_pd(a_tmp), r3)));
  }
  /* check this  */
  st.site = &fi_emlrtRSI;
  /*  Preconditioned Conjugate Gradient Descent algorithm with maximum
   * iterations */
  /*   Solving (Jk H sinv jd Ht Jk + (I-Jk) + deltaY) v = b */
  /*          b - right hand side vector */
  /*          L - preconditioner matrix */
  /*          tol - tolerance for the stopping criterion (optional, defaults to
   * 1e-3) */
  /*          max_iter - maximum number of iterations (optional, defaults to
   * inf) */
  /*  Initialization */
  b_st.site = &hi_emlrtRSI;
  /* J_K'*H * SInv*J_D*H' j_k + (I + deltaY - jk) */
  for (i = 0; i <= 288; i += 2) {
    _mm_storeu_pd(&b_diag_J_k_p[i],
                  _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[i]), _mm_set1_pd(0.0)));
  }
  c_st.site = &li_emlrtRSI;
  b_dev_HtZ_g(&c_st, A, b_diag_J_k_p, ne, temp2);
  c_st.site = &li_emlrtRSI;
  c_dev_g_Q_multi_vector(&c_st, Q, temp2, proj_index_all, nx, nu, r2);
  c_st.site = &li_emlrtRSI;
  d_dev_g_Q_multi_vector(&c_st, Q, r2, proj_index_all, nx, nu, temp2);
  c_st.site = &mi_emlrtRSI;
  dev_HZ_g(&c_st, A, temp2, ne, b_r);
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&diag_J_k_p[i]);
    r1 = _mm_loadu_pd(&b_r[i]);
    _mm_storeu_pd(
        &b_r[i],
        _mm_add_pd(_mm_mul_pd(_mm_mul_pd(_mm_set1_pd(a_tmp), r), r1),
                   _mm_mul_pd(_mm_sub_pd(_mm_set1_pd(delta_Y + 1.0), r),
                              _mm_set1_pd(0.0))));
  }
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&R_w_new[i]);
    r1 = _mm_loadu_pd(&b_r[i]);
    _mm_storeu_pd(&b_r[i], _mm_sub_pd(r, r1));
  }
  b_st.site = &ii_emlrtRSI;
  c_st.site = &ni_emlrtRSI;
  dev_solve_Lv(&c_st, L, b_r, b_diag_J_k_p);
  c_st.site = &ni_emlrtRSI;
  dev_solve_LTv(&c_st, L, b_diag_J_k_p, z_new);
  /*  Solve LLTz = r */
  k = 0.0;
  *iter = 1.0;
  /*  Tolerance for the stopping criteria */
  nb = 0.0;
  b_scale = 3.3121686421112381E-170;
  b_alpha = 0.0;
  scale = 3.3121686421112381E-170;
  for (b_k = 0; b_k < 290; b_k++) {
    p[b_k] = z_new[b_k];
    dw[b_k] = 0.0;
    absxk = muDoubleScalarAbs(R_w_new[b_k]);
    if (absxk > b_scale) {
      t = b_scale / absxk;
      nb = nb * t * t + 1.0;
      b_scale = absxk;
    } else {
      t = absxk / b_scale;
      nb += t * t;
    }
    absxk = muDoubleScalarAbs(b_r[b_k]);
    if (absxk > scale) {
      t = scale / absxk;
      b_alpha = b_alpha * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_alpha += t * t;
    }
  }
  nb = b_scale * muDoubleScalarSqrt(nb);
  b_alpha = scale * muDoubleScalarSqrt(b_alpha);
  *accuracy = b_alpha / nb;
  pcg_flag = 0.0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    b_alpha = 0.0;
    b_scale = 3.3121686421112381E-170;
    for (b_k = 0; b_k < 290; b_k++) {
      absxk = muDoubleScalarAbs(b_r[b_k]);
      if (absxk > b_scale) {
        t = b_scale / absxk;
        b_alpha = b_alpha * t * t + 1.0;
        b_scale = absxk;
      } else {
        t = absxk / b_scale;
        b_alpha += t * t;
      }
    }
    b_alpha = b_scale * muDoubleScalarSqrt(b_alpha);
    if ((b_alpha / nb > tol) && (k < max_iter)) {
      real_T b_z_new;
      real_T nr_new;
      /* Ap = pcg_matrix_vector(A, B, At, Bt, S_invJd, p); */
      b_st.site = &ji_emlrtRSI;
      /* J_K'*H * SInv*J_D*H' j_k + (I + deltaY - jk) */
      for (i = 0; i <= 288; i += 2) {
        r = _mm_loadu_pd(&p[i]);
        _mm_storeu_pd(&b_diag_J_k_p[i],
                      _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[i]), r));
      }
      c_st.site = &li_emlrtRSI;
      b_dev_HtZ_g(&c_st, A, b_diag_J_k_p, ne, temp2);
      c_st.site = &li_emlrtRSI;
      c_dev_g_Q_multi_vector(&c_st, Q, temp2, proj_index_all, nx, nu, r2);
      c_st.site = &li_emlrtRSI;
      d_dev_g_Q_multi_vector(&c_st, Q, r2, proj_index_all, nx, nu, temp2);
      c_st.site = &mi_emlrtRSI;
      dev_HZ_g(&c_st, A, temp2, ne, one_minus_jkdeltaw);
      for (i = 0; i <= 288; i += 2) {
        r = _mm_loadu_pd(&diag_J_k_p[i]);
        r1 = _mm_loadu_pd(&one_minus_jkdeltaw[i]);
        r3 = _mm_loadu_pd(&p[i]);
        _mm_storeu_pd(
            &one_minus_jkdeltaw[i],
            _mm_add_pd(
                _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(a_tmp), r), r1),
                _mm_mul_pd(_mm_sub_pd(_mm_set1_pd(delta_Y + 1.0), r), r3)));
      }
      b_z_new = 0.0;
      scale = 0.0;
      for (i = 0; i < 290; i++) {
        b_z_new += z_new[i] * b_r[i];
        scale += one_minus_jkdeltaw[i] * p[i];
      }
      b_alpha = b_z_new / scale;
      nr_new = 0.0;
      b_scale = 3.3121686421112381E-170;
      for (b_k = 0; b_k < 290; b_k++) {
        dw[b_k] += b_alpha * p[b_k];
        scale = b_r[b_k] - b_alpha * one_minus_jkdeltaw[b_k];
        one_minus_jkdeltaw[b_k] = scale;
        absxk = muDoubleScalarAbs(scale);
        if (absxk > b_scale) {
          t = b_scale / absxk;
          nr_new = nr_new * t * t + 1.0;
          b_scale = absxk;
        } else {
          t = absxk / b_scale;
          nr_new += t * t;
        }
      }
      nr_new = b_scale * muDoubleScalarSqrt(nr_new);
      /*  Check for convergence */
      *accuracy = nr_new / nb;
      if (*accuracy < tol) {
        *iter = k + 1.0;
        pcg_flag = 1.0;
        exitg1 = 1;
      } else {
        if (k + 1.0 < max_iter) {
          b_st.site = &ki_emlrtRSI;
          c_st.site = &ni_emlrtRSI;
          dev_solve_Lv(&c_st, L, one_minus_jkdeltaw, b_diag_J_k_p);
          c_st.site = &ni_emlrtRSI;
          dev_solve_LTv(&c_st, L, b_diag_J_k_p, z_new);
          /*  Solve Mz = r_new */
          scale = 0.0;
          for (i = 0; i < 290; i++) {
            scale += z_new[i] * one_minus_jkdeltaw[i];
          }
          scale /= b_z_new;
          for (b_i = 0; b_i <= 288; b_i += 2) {
            r = _mm_loadu_pd(&p[b_i]);
            r1 = _mm_loadu_pd(&z_new[b_i]);
            _mm_storeu_pd(&p[b_i],
                          _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(scale), r)));
            r = _mm_loadu_pd(&one_minus_jkdeltaw[b_i]);
            _mm_storeu_pd(&b_r[b_i], r);
          }
        }
        k++;
        *iter = k;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  st.site = &gi_emlrtRSI;
  b_dev_HtZ_g(&st, A, dw, ne, temp2);
  st.site = &gi_emlrtRSI;
  c_dev_g_Q_multi_vector(&st, Q, temp2, proj_index_all, nx, nu, r2);
  st.site = &gi_emlrtRSI;
  d_dev_g_Q_multi_vector(&st, Q, r2, proj_index_all, nx, nu, temp2);
  temp2_data = temp2->data;
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &Q);
  b_i = temp2->size[0];
  b_k = (temp2->size[0] / 2) << 1;
  vectorUB = b_k - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    r = _mm_loadu_pd(&temp2_data[i]);
    _mm_storeu_pd(&temp2_data[i], _mm_mul_pd(_mm_set1_pd(alpha), r));
  }
  for (i = b_k; i < b_i; i++) {
    temp2_data[i] *= alpha;
  }
  if ((temp2->size[0] != 326) && (temp2->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, temp2->size[0], &tc_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (temp2->size[0] == 326) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&R_z[i]);
      r1 = _mm_loadu_pd(&temp2_data[i]);
      _mm_storeu_pd(&dzw[i], _mm_sub_pd(r, r1));
    }
    memcpy(&dzw[326], &dw[0], 290U * sizeof(real_T));
  } else {
    binary_expand_op_14(dzw, R_z, temp2, dw);
  }
  emxFree_real_T(sp, &temp2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return pcg_flag;
}

/* End of code generation (dev_pcg_update.c) */
