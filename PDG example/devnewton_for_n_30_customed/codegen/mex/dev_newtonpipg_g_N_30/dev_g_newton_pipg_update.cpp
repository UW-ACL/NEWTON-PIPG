//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_newton_pipg_update.cpp
//
// Code generation for function 'dev_g_newton_pipg_update'
//

// Include files
#include "dev_g_newton_pipg_update.h"
#include "dev_HZ_g.h"
#include "dev_H_sinv_Ht.h"
#include "dev_S_inv_g.h"
#include "dev_Y_multi_vector.h"
#include "dev_cholesky_special.h"
#include "dev_g_A_Q_D.h"
#include "dev_g_Q_multi_vector.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "dev_newtonpipg_g_N_30_types.h"
#include "dev_solve_LTv.h"
#include "dev_solve_Lv.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sub2ind.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo dc_emlrtRSI{
    17,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
    22,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo fc_emlrtRSI{
    25,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo gc_emlrtRSI{
    28,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo hc_emlrtRSI{
    30,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo ic_emlrtRSI{
    33,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    39,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    40,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo lc_emlrtRSI{
    43,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    44,                         // lineNo
    "dev_g_newton_pipg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pathName
};

static emlrtRSInfo gf_emlrtRSI{
    8,                    // lineNo
    "dev_g_multiply_J_k", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" // pathName
};

static emlrtRSInfo hf_emlrtRSI{
    21,              // lineNo
    "processMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" // pathName
};

static emlrtRSInfo if_emlrtRSI{
    24,              // lineNo
    "processMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m" // pathName
};

static emlrtRSInfo jf_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo mf_emlrtRSI{
    16,        // lineNo
    "sub2ind", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" // pathName
};

static emlrtRSInfo tf_emlrtRSI{
    11,                     // lineNo
    "dev_g_Q_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtRSInfo uf_emlrtRSI{
    14,                     // lineNo
    "dev_g_Q_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtECInfo x_emlrtECI{
    1,                          // nDims
    44,                         // lineNo
    11,                         // colNo
    "dev_g_newton_pipg_update", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update.m" // pName
};

static emlrtECInfo y_emlrtECI{
    -1,                     // nDims
    11,                     // lineNo
    9,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtECInfo ab_emlrtECI{
    -1,                     // nDims
    14,                     // lineNo
    9,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtDCInfo ab_emlrtDCI{
    14,                     // lineNo
    13,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    1,                      // iFirst
    326,                    // iLast
    14,                     // lineNo
    13,                     // colNo
    "out",                  // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    3                                                      // checkKind
};

static emlrtDCInfo bb_emlrtDCI{
    11,                     // lineNo
    13,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    1,                      // iFirst
    326,                    // iLast
    11,                     // lineNo
    13,                     // colNo
    "out",                  // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    3                                                      // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    1,           // iFirst
    290,         // iLast
    14,          // lineNo
    36,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    1,           // iFirst
    290,         // iLast
    18,          // lineNo
    50,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    1,           // iFirst
    290,         // iLast
    20,          // lineNo
    57,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    14,                     // lineNo
    13,                     // colNo
    "out",                  // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    14,                     // lineNo
    54,                     // colNo
    "v",                    // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    11,                     // lineNo
    13,                     // colNo
    "out",                  // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    11,                     // lineNo
    59,                     // colNo
    "v",                    // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

// Function Declarations
static void binary_expand_op_14(real_T in1[616], const real_T in2[326],
                                real_T in3, const real_T in4_data[],
                                const int32_T &in4_size, const real_T in5[290]);

// Function Definitions
static void binary_expand_op_14(real_T in1[616], const real_T in2[326],
                                real_T in3, const real_T in4_data[],
                                const int32_T &in4_size, const real_T in5[290])
{
  int32_T stride_0_0;
  stride_0_0 = (in4_size != 1);
  for (int32_T i{0}; i < 326; i++) {
    in1[i] = in2[i] - in3 * in4_data[i * stride_0_0];
  }
  std::copy(&in5[0], &in5[290], &in1[326]);
}

void b_dev_g_newton_pipg_update(
    dev_newtonpipg_g_N_30StackData *SD, const emlrtStack &sp,
    const real_T A[3190], const real_T P[326], real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T diag_J_k_p[290], const real_T temp_prime[326], real_T R[616],
    real_T alpha, real_T beta, real_T rho, real_T delta_Y, real_T dzw[616])
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T A_n[3190];
  real_T R_z[326];
  real_T out[326];
  real_T out_data[326];
  real_T J_k_polar_n[290];
  real_T R_w_new[290];
  real_T c_J_k_polar_n[290];
  real_T dv[290];
  real_T Q_inv_data[121];
  real_T proj_temp_index[22];
  real_T R_z_data[11];
  real_T d_tmp_data[11];
  real_T y_data[11];
  real_T e_tmp_data[7];
  real_T f_tmp_data[7];
  real_T dv2[2];
  real_T dv3[2];
  real_T dv4[2];
  real_T dv5[2];
  real_T dv6[2];
  real_T dv7[2];
  real_T dv8[2];
  real_T dv9[2];
  real_T d;
  real_T s;
  int32_T ii_data[10];
  int32_T tmp_data[10];
  int32_T Q_inv_size[3];
  int32_T Q_size[3];
  int32_T ii[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T iv2[2];
  int32_T iv3[2];
  int32_T iv4[2];
  int32_T iv5[2];
  int32_T iv6[2];
  int32_T iv7[2];
  int32_T i;
  int32_T i1;
  int32_T ii_size;
  int32_T loop_ub;
  int32_T out_size_tmp;
  int32_T tmp_size;
  int32_T y_size_idx_1;
  int16_T c_tmp_data[11];
  int16_T b_tmp_data[7];
  int16_T i2;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  // Function for Newton pipg update.
  // A is the matrix defining the matrix H. For further definition, check
  // data_tranplant file. P is the quadratic cost
  // nx = #state, nu = #control, ne = #equality
  // proj_* are pojrection coefficients. diag_J_k_p, R and temp_prime comes from
  // pipgupdate.alpha, beta are pipg coeffcients. delta_Y is used to stablelize
  // the algo.
  // P, diag_J_k_p must be vector
  //  setup
  for (i = 0; i <= 614; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (int32_T b_i{0}; b_i <= 324; b_i += 2) {
    r = _mm_loadu_pd(&R[b_i]);
    _mm_storeu_pd(&R_z[b_i], _mm_div_pd(r, _mm_set1_pd(rho)));
  }
  s = -2.0 * beta;
  st.site = &dc_emlrtRSI;
  dev_HZ_g(st, A, R_z, ne, dv);
  for (int32_T b_i{0}; b_i <= 288; b_i += 2) {
    r = _mm_loadu_pd(&dv[b_i]);
    r1 = _mm_loadu_pd(&R[b_i + 326]);
    _mm_storeu_pd(
        &R_w_new[b_i],
        _mm_add_pd(
            _mm_mul_pd(
                _mm_mul_pd(_mm_set1_pd(s), _mm_loadu_pd(&diag_J_k_p[b_i])), r),
            _mm_div_pd(r1, _mm_set1_pd(rho))));
  }
  // check?
  //  Factorization of J_D
  st.site = &ec_emlrtRSI;
  dev_S_inv_g(st, temp_prime, nx, nu, proj_index_all, proj_coefficient_all, P,
              alpha, SD->f0.Q_data, Q_size, SD->f0.Q_inv_data, Q_inv_size);
  // This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1;
  // step 2 update A
  std::copy(&A[0], &A[3190], &A_n[0]);
  st.site = &fc_emlrtRSI;
  dev_g_A_Q_D(st, A_n, SD->f0.Q_data, Q_size, proj_index_all);
  // H*Q_D
  // step 3 compute H_Sinv_JD_Ht
  st.site = &gc_emlrtRSI;
  dev_H_sinv_Ht(st, A_n, SD->f0.Q_data, Q_size, proj_index_all, nx, SD->f0.Y);
  s = alpha * beta;
  for (i = 0; i <= 5798; i += 2) {
    r = _mm_loadu_pd(&SD->f0.Y[i]);
    _mm_storeu_pd(&SD->f0.Y[i], _mm_mul_pd(r, _mm_set1_pd(s)));
  }
  //  beta* alpha * H *Sinv* J_D*Ht;
  st.site = &hc_emlrtRSI;
  // Y is my result of HsinvHt. I want to compute J_k HsinveHtJ_k +(I-J_k) +
  // delta I
  i = 0;
  i1 = 0;
  for (tmp_size = 0; tmp_size < 290; tmp_size++) {
    J_k_polar_n[i1 + 29 * i] = diag_J_k_p[tmp_size];
    i++;
    if (i > 9) {
      i = 0;
      i1++;
    }
  }
  std::copy(&SD->f0.Y[0], &SD->f0.Y[5800], &SD->f0.Y_out[0]);
  for (int32_T b_i{0}; b_i < 29; b_i++) {
    real_T dv1[100];
    real_T ind_data[10];
    boolean_T b_J_k_polar_n[10];
    b_st.site = &gf_emlrtRSI;
    for (i = 0; i < 10; i++) {
      for (i1 = 0; i1 < 10; i1++) {
        dv1[i1 + 10 * i] = SD->f0.Y[(b_i + 58 * i1) + 580 * i];
      }
    }
    c_st.site = &hf_emlrtRSI;
    for (i = 0; i < 10; i++) {
      b_J_k_polar_n[i] = (J_k_polar_n[b_i + 29 * i] == 0.0);
    }
    d_st.site = &jf_emlrtRSI;
    ii_size = coder::eml_find(d_st, b_J_k_polar_n, ii_data);
    for (i = 0; i < ii_size; i++) {
      ind_data[i] = ii_data[i];
    }
    for (i = 0; i < ii_size; i++) {
      ii_data[i] = static_cast<int32_T>(ind_data[i]);
      for (i1 = 0; i1 < 10; i1++) {
        dv1[i1 + 10 * (ii_data[i] - 1)] = 0.0;
      }
    }
    for (i = 0; i < 10; i++) {
      for (i1 = 0; i1 < ii_size; i1++) {
        dv1[(ii_data[i1] + 10 * i) - 1] = 0.0;
      }
    }
    c_st.site = &if_emlrtRSI;
    d_st.site = &mf_emlrtRSI;
    tmp_size = coder::internal::sub2ind(d_st, ind_data, ii_size, ind_data,
                                        ii_size, tmp_data);
    for (i = 0; i < tmp_size; i++) {
      ind_data[i] = tmp_data[i];
    }
    for (i = 0; i < tmp_size; i++) {
      i1 = static_cast<int32_T>(ind_data[i]);
      dv1[(i1 - 1) % 10 * 10 + (i1 - 1) / 10] = 1.0;
    }
    //  for idx = reshape(zeroIndices, 1, length(zeroIndices))
    //      B(idx, idx) = 1;
    //  end
    for (tmp_size = 0; tmp_size < 10; tmp_size++) {
      i = tmp_size + 10 * tmp_size;
      dv1[i] += delta_Y;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&b_st);
      }
    }
    for (i = 0; i < 10; i++) {
      for (i1 = 0; i1 < 10; i1++) {
        SD->f0.Y_out[(b_i + 58 * i1) + 580 * i] = dv1[i1 + 10 * i];
      }
    }
    if (b_i + 1 < 29) {
      for (i = 0; i < 10; i++) {
        for (i1 = 0; i1 < ii_size; i1++) {
          SD->f0.Y_out[((b_i + 58 * (ii_data[i1] - 1)) + 580 * i) + 30] = 0.0;
        }
      }
    }
    if (b_i + 1 >= 2) {
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < 10; i1++) {
          SD->f0.Y_out[((b_i + 58 * i1) + 580 * (ii_data[i] - 1)) + 29] = 0.0;
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  // final matrix
  // Step 4 compute
  st.site = &ic_emlrtRSI;
  dev_cholesky_special(st, SD->f0.Y_out, SD->f0.chol_y);
  // Step 5 righthand side
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&R_w_new[i]);
    _mm_storeu_pd(&J_k_polar_n[i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[i]), r)));
  }
  // reform this what is the size of diag_J_k_p..*%check
  // %%%%3
  st.site = &jc_emlrtRSI;
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  std::memset(&out[0], 0, 326U * sizeof(real_T));
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < 11; i1++) {
        proj_temp_index[i1 + 11 * i] =
            proj_index_all[(b_i + 30 * i1) + 330 * i];
      }
    }
    if (b_i + 1 < 30) {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
      s = nx + nu;
      if (s < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(s - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(s - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      s *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      for (i = 0; i < y_size_idx_1; i++) {
        d = s + y_data[i];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, &st);
        }
        if ((static_cast<int16_T>(d) < 1) || (static_cast<int16_T>(d) > 326)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<int16_T>(d)), 1, 326,
              &qb_emlrtBCI, &st);
        }
        c_tmp_data[i] = static_cast<int16_T>(d);
      }
      loop_ub = Q_inv_size[1];
      ii_size = Q_inv_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_inv_data[(b_i + 30 * i1) + 30 * Q_inv_size[1] * i];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = R_z[c_tmp_data[i] - 1];
      }
      iv1[0] = Q_inv_size[0];
      iv1[1] = Q_inv_size[1];
      b_st.site = &tf_emlrtRSI;
      tmp_size = Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv1,
                          proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &y_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        out[c_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    } else {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx));
      if (nx < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(nx - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(nx - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      d = 29.0 * (nx + nu);
      for (i = 0; i < y_size_idx_1; i++) {
        s = d + y_data[i];
        if (s != static_cast<int32_T>(muDoubleScalarFloor(s))) {
          emlrtIntegerCheckR2012b(s, &ab_emlrtDCI, &st);
        }
        if ((static_cast<int16_T>(s) < 1) || (static_cast<int16_T>(s) > 326)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<int16_T>(s)), 1, 326,
              &pb_emlrtBCI, &st);
        }
        b_tmp_data[i] = static_cast<int16_T>(s);
      }
      loop_ub = Q_inv_size[1];
      ii_size = Q_inv_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_inv_data[(30 * i1 + 30 * Q_inv_size[1] * i) + 29];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = R_z[b_tmp_data[i] - 1];
      }
      iv[0] = Q_inv_size[0];
      iv[1] = Q_inv_size[1];
      b_st.site = &uf_emlrtRSI;
      tmp_size = Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv,
                          proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &ab_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        out[b_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &jc_emlrtRSI;
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  std::memset(&R_z[0], 0, 326U * sizeof(real_T));
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < 11; i1++) {
        proj_temp_index[i1 + 11 * i] =
            proj_index_all[(b_i + 30 * i1) + 330 * i];
      }
    }
    if (b_i + 1 < 30) {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
      s = nx + nu;
      if (s < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(s - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(s - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      s *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      for (i = 0; i < y_size_idx_1; i++) {
        d = s + y_data[i];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, &st);
        }
        if ((static_cast<int16_T>(d) < 1) || (static_cast<int16_T>(d) > 326)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<int16_T>(d)), 1, 326,
              &qb_emlrtBCI, &st);
        }
        c_tmp_data[i] = static_cast<int16_T>(d);
      }
      loop_ub = Q_inv_size[1];
      ii_size = Q_inv_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_inv_data[(b_i + 30 * i1) + 30 * Q_inv_size[1] * i];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = out[c_tmp_data[i] - 1];
      }
      iv3[0] = Q_inv_size[0];
      iv3[1] = Q_inv_size[1];
      b_st.site = &tf_emlrtRSI;
      tmp_size = b_Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv3,
                            proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &y_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z[c_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    } else {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx));
      if (nx < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(nx - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(nx - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      d = 29.0 * (nx + nu);
      for (i = 0; i < y_size_idx_1; i++) {
        s = d + y_data[i];
        if (s != static_cast<int32_T>(muDoubleScalarFloor(s))) {
          emlrtIntegerCheckR2012b(s, &ab_emlrtDCI, &st);
        }
        if ((static_cast<int16_T>(s) < 1) || (static_cast<int16_T>(s) > 326)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<int16_T>(s)), 1, 326,
              &pb_emlrtBCI, &st);
        }
        b_tmp_data[i] = static_cast<int16_T>(s);
      }
      loop_ub = Q_inv_size[1];
      ii_size = Q_inv_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_inv_data[(30 * i1 + 30 * Q_inv_size[1] * i) + 29];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = out[b_tmp_data[i] - 1];
      }
      iv2[0] = Q_inv_size[0];
      iv2[1] = Q_inv_size[1];
      b_st.site = &uf_emlrtRSI;
      tmp_size = b_Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv2,
                            proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &ab_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z[b_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &kc_emlrtRSI;
  dev_HZ_g(st, A, R_z, ne, dv);
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&J_k_polar_n[i]);
    _mm_storeu_pd(&c_J_k_polar_n[i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[i]), r)));
  }
  st.site = &kc_emlrtRSI;
  dev_Y_multi_vector(st, SD->f0.Y, c_J_k_polar_n, J_k_polar_n);
  for (i = 0; i <= 288; i += 2) {
    __m128d r2;
    r = _mm_loadu_pd(&dv[i]);
    r1 = _mm_loadu_pd(&R_w_new[i]);
    r2 = _mm_loadu_pd(&J_k_polar_n[i]);
    _mm_storeu_pd(
        &R_w_new[i],
        _mm_sub_pd(
            _mm_add_pd(r1, _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(beta),
                                                 _mm_loadu_pd(&diag_J_k_p[i])),
                                      r)),
            r2));
  }
  // solve dw
  st.site = &lc_emlrtRSI;
  dev_solve_Lv(st, SD->f0.chol_y, R_w_new, dv);
  st.site = &lc_emlrtRSI;
  dev_solve_LTv(st, SD->f0.chol_y, dv, J_k_polar_n);
  st.site = &mc_emlrtRSI;
  // n_e stands for the amount of equaitons in A. The other definition are the
  // same.
  if (!(ne + 319.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ne + 319.0, &k_emlrtDCI, &st);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(ne + 319.0));
  if (ne + 319.0 != d) {
    emlrtIntegerCheckR2012b(ne + 319.0, &j_emlrtDCI, &st);
  }
  out_size_tmp = static_cast<int32_T>(ne + 319.0);
  if (ne + 319.0 != d) {
    emlrtIntegerCheckR2012b(ne + 319.0, &j_emlrtDCI, &st);
  }
  if (out_size_tmp - 1 >= 0) {
    std::memset(&out[0], 0,
                static_cast<uint32_T>(out_size_tmp) * sizeof(real_T));
  }
  if (ne < 1.0) {
    y_size_idx_1 = 0;
  } else {
    ii_size = static_cast<int32_T>(ne - 1.0) + 1;
    y_size_idx_1 = static_cast<int32_T>(ne - 1.0) + 1;
    for (i = 0; i < ii_size; i++) {
      y_data[i] = static_cast<real_T>(i) + 1.0;
    }
  }
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    int16_T temp_index[10];
    i2 = static_cast<int16_T>(10 * b_i + 1);
    for (i = 0; i < 10; i++) {
      temp_index[i] = static_cast<int16_T>(i + i2);
    }
    if (b_i + 1 == 1) {
      for (i = 0; i < 10; i++) {
        i1 = temp_index[i];
        if (i1 > 290) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 290, &rb_emlrtBCI, &st);
        }
      }
      for (ii_size = 0; ii_size < 11; ii_size++) {
        s = 0.0;
        for (tmp_size = 0; tmp_size < 10; tmp_size++) {
          i = ii_size + tmp_size * 11;
          s += A[29 * (i % 11) + 319 * (i / 11)] *
               J_k_polar_n[temp_index[tmp_size] - 1];
        }
        R_z_data[ii_size] = s;
      }
      for (i = 0; i < 11; i++) {
        if (i + 1 > static_cast<int32_T>(ne + 319.0)) {
          emlrtDynamicBoundsCheckR2012b(
              i + 1, 1, static_cast<int32_T>(ne + 319.0), &j_emlrtBCI, &st);
        }
        out[i] = R_z_data[i];
      }
    } else {
      uint32_T b_y_data[11];
      if (b_i + 1 <= 29) {
        for (i = 0; i < 10; i++) {
          i1 = temp_index[i];
          if (i1 > 290) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 290, &sb_emlrtBCI, &st);
          }
        }
        for (ii_size = 0; ii_size < 11; ii_size++) {
          s = 0.0;
          for (tmp_size = 0; tmp_size < 10; tmp_size++) {
            i = ii_size + tmp_size * 11;
            s += A[(b_i + 29 * (i % 11)) + 319 * (i / 11)] *
                 J_k_polar_n[temp_index[tmp_size] - 1];
          }
          R_z_data[ii_size] = s;
        }
        i = 11 * b_i + 1;
        for (i1 = 0; i1 < 11; i1++) {
          tmp_size = i1 + i;
          if (tmp_size > static_cast<int32_T>(ne + 319.0)) {
            emlrtDynamicBoundsCheckR2012b(tmp_size, 1,
                                          static_cast<int32_T>(ne + 319.0),
                                          &k_emlrtBCI, &st);
          }
          out[tmp_size - 1] = R_z_data[i1];
        }
      }
      ii[0] = 1;
      ii[1] = y_size_idx_1;
      b_st.site = &ab_emlrtRSI;
      coder::internal::indexShapeCheck(b_st, static_cast<int32_T>(ne + 319.0),
                                       ii);
      i = 11 * b_i;
      for (i1 = 0; i1 < y_size_idx_1; i1++) {
        tmp_size = static_cast<int32_T>(static_cast<real_T>(i) + y_data[i1]);
        if ((tmp_size < 1) || (tmp_size > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(
              tmp_size, 1, static_cast<int32_T>(ne + 319.0), &l_emlrtBCI, &st);
        }
        e_tmp_data[i1] = out[tmp_size - 1];
      }
      i1 = 10 * (b_i - 1);
      for (tmp_size = 0; tmp_size < y_size_idx_1; tmp_size++) {
        ii_size =
            static_cast<int32_T>(static_cast<real_T>(i1) + y_data[tmp_size]);
        if ((ii_size < 1) || (ii_size > 290)) {
          emlrtDynamicBoundsCheckR2012b(ii_size, 1, 290, &tb_emlrtBCI, &st);
        }
        f_tmp_data[tmp_size] = J_k_polar_n[ii_size - 1];
      }
      if (ne < 1.0) {
        loop_ub = 0;
      } else {
        ii_size = static_cast<int32_T>(ne - 1.0) + 1;
        loop_ub = static_cast<int32_T>(ne - 1.0) + 1;
        for (i1 = 0; i1 < ii_size; i1++) {
          b_y_data[i1] = static_cast<uint32_T>(i1) + 1U;
        }
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        tmp_size =
            static_cast<int32_T>(static_cast<uint32_T>(i) + b_y_data[i1]);
        if ((tmp_size < 1) || (tmp_size > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(
              tmp_size, 1, static_cast<int32_T>(ne + 319.0), &n_emlrtBCI, &st);
        }
        b_tmp_data[i1] = static_cast<int16_T>(tmp_size);
      }
      ii_size = (y_size_idx_1 / 2) << 1;
      tmp_size = ii_size - 2;
      for (i = 0; i <= tmp_size; i += 2) {
        r = _mm_loadu_pd(&e_tmp_data[i]);
        r1 = _mm_loadu_pd(&f_tmp_data[i]);
        _mm_storeu_pd(&d_tmp_data[i], _mm_add_pd(r, r1));
      }
      for (i = ii_size; i < y_size_idx_1; i++) {
        d_tmp_data[i] = e_tmp_data[i] + f_tmp_data[i];
      }
      if (loop_ub != y_size_idx_1) {
        emlrtSubAssignSizeCheck1dR2017a(loop_ub, y_size_idx_1, &h_emlrtECI,
                                        &st);
      }
      for (i = 0; i < loop_ub; i++) {
        out[b_tmp_data[i] - 1] = d_tmp_data[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &mc_emlrtRSI;
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  if (out_size_tmp - 1 >= 0) {
    std::memset(&out_data[0], 0,
                static_cast<uint32_T>(out_size_tmp) * sizeof(real_T));
  }
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < 11; i1++) {
        proj_temp_index[i1 + 11 * i] =
            proj_index_all[(b_i + 30 * i1) + 330 * i];
      }
    }
    if (b_i + 1 < 30) {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
      s = nx + nu;
      if (s < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(s - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(s - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      ii[0] = 1;
      ii[1] = y_size_idx_1;
      b_st.site = &tf_emlrtRSI;
      coder::internal::indexShapeCheck(b_st, static_cast<int32_T>(ne + 319.0),
                                       ii);
      s *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      loop_ub = y_size_idx_1 - 1;
      ii_size = (y_size_idx_1 / 2) << 1;
      tmp_size = ii_size - 2;
      for (i = 0; i <= tmp_size; i += 2) {
        r = _mm_loadu_pd(&y_data[i]);
        _mm_storeu_pd(&dv3[0], _mm_add_pd(_mm_set1_pd(s), r));
        if (dv3[0] != static_cast<int32_T>(muDoubleScalarFloor(dv3[0]))) {
          emlrtIntegerCheckR2012b(dv3[0], &bb_emlrtDCI, &st);
        }
        dv5[0] = dv3[0];
        if (dv3[1] != static_cast<int32_T>(muDoubleScalarFloor(dv3[1]))) {
          emlrtIntegerCheckR2012b(dv3[1], &bb_emlrtDCI, &st);
        }
        dv5[1] = dv3[1];
        r = _mm_loadu_pd(&dv5[0]);
        _mm_storeu_pd(&y_data[i], r);
      }
      for (i = ii_size; i <= loop_ub; i++) {
        d = s + y_data[i];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, &st);
        }
        y_data[i] = d;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i2 = static_cast<int16_T>(y_data[i]);
        if ((i2 < 1) || (i2 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i2), 1,
                                        static_cast<int32_T>(ne + 319.0),
                                        &wb_emlrtBCI, &st);
        }
        c_tmp_data[i] = i2;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i1 = static_cast<int32_T>(y_data[i]);
        if ((i1 < 1) || (i1 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(ne + 319.0),
                                        &xb_emlrtBCI, &st);
        }
      }
      loop_ub = Q_size[1];
      ii_size = Q_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_data[(b_i + 30 * i1) + 30 * Q_size[1] * i];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = out[static_cast<int32_T>(y_data[i]) - 1];
      }
      iv5[0] = Q_size[0];
      iv5[1] = Q_size[1];
      b_st.site = &tf_emlrtRSI;
      tmp_size = Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv5,
                          proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &y_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        out_data[c_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    } else {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx));
      if (nx < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(nx - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(nx - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      ii[0] = 1;
      ii[1] = y_size_idx_1;
      b_st.site = &uf_emlrtRSI;
      coder::internal::indexShapeCheck(b_st, static_cast<int32_T>(ne + 319.0),
                                       ii);
      d = 29.0 * (nx + nu);
      ii_size = (y_size_idx_1 / 2) << 1;
      tmp_size = ii_size - 2;
      for (i = 0; i <= tmp_size; i += 2) {
        r = _mm_loadu_pd(&y_data[i]);
        _mm_storeu_pd(&dv2[0], _mm_add_pd(_mm_set1_pd(d), r));
        if (dv2[0] != static_cast<int32_T>(muDoubleScalarFloor(dv2[0]))) {
          emlrtIntegerCheckR2012b(dv2[0], &ab_emlrtDCI, &st);
        }
        dv4[0] = dv2[0];
        if (dv2[1] != static_cast<int32_T>(muDoubleScalarFloor(dv2[1]))) {
          emlrtIntegerCheckR2012b(dv2[1], &ab_emlrtDCI, &st);
        }
        dv4[1] = dv2[1];
        r = _mm_loadu_pd(&dv4[0]);
        _mm_storeu_pd(&e_tmp_data[i], r);
      }
      for (i = ii_size; i < y_size_idx_1; i++) {
        s = d + y_data[i];
        if (s != static_cast<int32_T>(muDoubleScalarFloor(s))) {
          emlrtIntegerCheckR2012b(s, &ab_emlrtDCI, &st);
        }
        e_tmp_data[i] = s;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i2 = static_cast<int16_T>(e_tmp_data[i]);
        if ((i2 < 1) || (i2 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i2), 1,
                                        static_cast<int32_T>(ne + 319.0),
                                        &ub_emlrtBCI, &st);
        }
        b_tmp_data[i] = i2;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i1 = static_cast<int32_T>(e_tmp_data[i]);
        if ((i1 < 1) || (i1 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(ne + 319.0),
                                        &vb_emlrtBCI, &st);
        }
      }
      loop_ub = Q_size[1];
      ii_size = Q_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_data[(30 * i1 + 30 * Q_size[1] * i) + 29];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = out[static_cast<int32_T>(e_tmp_data[i]) - 1];
      }
      iv4[0] = Q_size[0];
      iv4[1] = Q_size[1];
      b_st.site = &uf_emlrtRSI;
      tmp_size = Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv4,
                          proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &ab_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        out_data[b_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &mc_emlrtRSI;
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  if (out_size_tmp - 1 >= 0) {
    std::memset(&out[0], 0,
                static_cast<uint32_T>(out_size_tmp) * sizeof(real_T));
  }
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < 11; i1++) {
        proj_temp_index[i1 + 11 * i] =
            proj_index_all[(b_i + 30 * i1) + 330 * i];
      }
    }
    if (b_i + 1 < 30) {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
      s = nx + nu;
      if (s < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(s - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(s - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      ii[0] = 1;
      ii[1] = y_size_idx_1;
      b_st.site = &tf_emlrtRSI;
      coder::internal::indexShapeCheck(b_st, static_cast<int32_T>(ne + 319.0),
                                       ii);
      s *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      loop_ub = y_size_idx_1 - 1;
      ii_size = (y_size_idx_1 / 2) << 1;
      tmp_size = ii_size - 2;
      for (i = 0; i <= tmp_size; i += 2) {
        r = _mm_loadu_pd(&y_data[i]);
        _mm_storeu_pd(&dv7[0], _mm_add_pd(_mm_set1_pd(s), r));
        if (dv7[0] != static_cast<int32_T>(muDoubleScalarFloor(dv7[0]))) {
          emlrtIntegerCheckR2012b(dv7[0], &bb_emlrtDCI, &st);
        }
        dv9[0] = dv7[0];
        if (dv7[1] != static_cast<int32_T>(muDoubleScalarFloor(dv7[1]))) {
          emlrtIntegerCheckR2012b(dv7[1], &bb_emlrtDCI, &st);
        }
        dv9[1] = dv7[1];
        r = _mm_loadu_pd(&dv9[0]);
        _mm_storeu_pd(&y_data[i], r);
      }
      for (i = ii_size; i <= loop_ub; i++) {
        d = s + y_data[i];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, &st);
        }
        y_data[i] = d;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i2 = static_cast<int16_T>(y_data[i]);
        if ((i2 < 1) || (i2 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i2), 1,
                                        static_cast<int32_T>(ne + 319.0),
                                        &wb_emlrtBCI, &st);
        }
        c_tmp_data[i] = i2;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i1 = static_cast<int32_T>(y_data[i]);
        if ((i1 < 1) || (i1 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(ne + 319.0),
                                        &xb_emlrtBCI, &st);
        }
      }
      loop_ub = Q_size[1];
      ii_size = Q_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_data[(b_i + 30 * i1) + 30 * Q_size[1] * i];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = out_data[static_cast<int32_T>(y_data[i]) - 1];
      }
      iv7[0] = Q_size[0];
      iv7[1] = Q_size[1];
      b_st.site = &tf_emlrtRSI;
      tmp_size = b_Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv7,
                            proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &y_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        out[c_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    } else {
      // v_temp_index = (i-1) * (nx + nu)+ (1:(nx));
      if (nx < 1.0) {
        y_size_idx_1 = 0;
      } else {
        ii_size = static_cast<int32_T>(nx - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(nx - 1.0) + 1;
        for (i = 0; i < ii_size; i++) {
          y_data[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      ii[0] = 1;
      ii[1] = y_size_idx_1;
      b_st.site = &uf_emlrtRSI;
      coder::internal::indexShapeCheck(b_st, static_cast<int32_T>(ne + 319.0),
                                       ii);
      d = 29.0 * (nx + nu);
      ii_size = (y_size_idx_1 / 2) << 1;
      tmp_size = ii_size - 2;
      for (i = 0; i <= tmp_size; i += 2) {
        r = _mm_loadu_pd(&y_data[i]);
        _mm_storeu_pd(&dv6[0], _mm_add_pd(_mm_set1_pd(d), r));
        if (dv6[0] != static_cast<int32_T>(muDoubleScalarFloor(dv6[0]))) {
          emlrtIntegerCheckR2012b(dv6[0], &ab_emlrtDCI, &st);
        }
        dv8[0] = dv6[0];
        if (dv6[1] != static_cast<int32_T>(muDoubleScalarFloor(dv6[1]))) {
          emlrtIntegerCheckR2012b(dv6[1], &ab_emlrtDCI, &st);
        }
        dv8[1] = dv6[1];
        r = _mm_loadu_pd(&dv8[0]);
        _mm_storeu_pd(&e_tmp_data[i], r);
      }
      for (i = ii_size; i < y_size_idx_1; i++) {
        s = d + y_data[i];
        if (s != static_cast<int32_T>(muDoubleScalarFloor(s))) {
          emlrtIntegerCheckR2012b(s, &ab_emlrtDCI, &st);
        }
        e_tmp_data[i] = s;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i2 = static_cast<int16_T>(e_tmp_data[i]);
        if ((i2 < 1) || (i2 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i2), 1,
                                        static_cast<int32_T>(ne + 319.0),
                                        &ub_emlrtBCI, &st);
        }
        b_tmp_data[i] = i2;
      }
      for (i = 0; i < y_size_idx_1; i++) {
        i1 = static_cast<int32_T>(e_tmp_data[i]);
        if ((i1 < 1) || (i1 > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(ne + 319.0),
                                        &vb_emlrtBCI, &st);
        }
      }
      loop_ub = Q_size[1];
      ii_size = Q_size[0];
      for (i = 0; i < ii_size; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[i1 + loop_ub * i] =
              SD->f0.Q_data[(30 * i1 + 30 * Q_size[1] * i) + 29];
        }
      }
      for (i = 0; i < y_size_idx_1; i++) {
        R_z_data[i] = out_data[static_cast<int32_T>(e_tmp_data[i]) - 1];
      }
      iv6[0] = Q_size[0];
      iv6[1] = Q_size[1];
      b_st.site = &uf_emlrtRSI;
      tmp_size = b_Q_v_unit(b_st, R_z_data, y_size_idx_1, Q_inv_data, iv6,
                            proj_temp_index, d_tmp_data);
      if (y_size_idx_1 != tmp_size) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, tmp_size, &ab_emlrtECI,
                                        &st);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        out[b_tmp_data[i] - 1] = d_tmp_data[i];
      }
      // Specified! only for the LCvx case
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  if ((static_cast<int32_T>(ne + 319.0) != 326) &&
      (static_cast<int32_T>(ne + 319.0) != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, static_cast<int32_T>(ne + 319.0),
                                &x_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (static_cast<int32_T>(ne + 319.0) == 326) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&out[i]);
      r1 = _mm_loadu_pd(&R_z[i]);
      _mm_storeu_pd(&dzw[i], _mm_sub_pd(r1, _mm_mul_pd(_mm_set1_pd(alpha), r)));
    }
    std::copy(&J_k_polar_n[0], &J_k_polar_n[290], &dzw[326]);
  } else {
    binary_expand_op_14(dzw, R_z, alpha, out, out_size_tmp, J_k_polar_n);
  }
}

// End of code generation (dev_g_newton_pipg_update.cpp)
