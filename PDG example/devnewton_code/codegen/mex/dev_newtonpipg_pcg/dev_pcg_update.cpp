//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_pcg_update.cpp
//
// Code generation for function 'dev_pcg_update'
//

// Include files
#include "dev_pcg_update.h"
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "dev_newtonpipg_pcg_data.h"
#include "dev_solve_LTv.h"
#include "dev_solve_Lv.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo qc_emlrtRSI{
    9,                // lineNo
    "dev_pcg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_pcg_update.m" // pathName
};

static emlrtRSInfo rc_emlrtRSI{
    13,               // lineNo
    "dev_pcg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_pcg_update.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    15,               // lineNo
    "dev_pcg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_pcg_update.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    19,               // lineNo
    "dev_pcg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_pcg_update.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    20,               // lineNo
    "dev_pcg_update", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_pcg_update.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    13,             // lineNo
    "pcg_dev_pipg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\pcg_dev_pipg.m" // pathName
};

static emlrtRSInfo wc_emlrtRSI{
    14,             // lineNo
    "pcg_dev_pipg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\pcg_dev_pipg.m" // pathName
};

static emlrtRSInfo xc_emlrtRSI{
    24,             // lineNo
    "pcg_dev_pipg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\pcg_dev_pipg.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    37,             // lineNo
    "pcg_dev_pipg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\pcg_dev_pipg.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    2,                   // lineNo
    "pcg_matrix_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\pcg_matrix_vector.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    3,                   // lineNo
    "pcg_matrix_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\pcg_matrix_vector.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    2,                        // lineNo
    "pcg_solve_precondition", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\pcg_solve_precondition.m" // pathName
};

// Function Definitions
void dev_pcg_update(const emlrtStack *sp, const real_T A[256],
                    const real_T B[128], const real_T L[10240], real_T tol,
                    const real_T At[256], const real_T Bt[128],
                    const coder::sparse *P_diag, const real_T Id[496],
                    real_T R[816], real_T alpha, real_T beta, real_T rho,
                    real_T dzw[816], real_T *pcg_flag, real_T *iter,
                    real_T *accuracy)
{
  coder::sparse r;
  coder::sparse r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T S_inv[496];
  real_T S_invJd[496];
  real_T S_invRx[496];
  real_T out[496];
  real_T Ap[320];
  real_T b_r[320];
  real_T dv[320];
  real_T dw[320];
  real_T p[320];
  real_T right[320];
  real_T z_new[320];
  real_T b_out[16];
  real_T c_out[8];
  real_T absxk;
  real_T b_alpha;
  real_T b_scale;
  real_T b_t;
  real_T nb;
  real_T scale;
  int32_T b_i;
  int32_T i;
  int32_T s1;
  boolean_T jd[496];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // PCG updates for the Newton Step.
  //  Set up for variables
  //  Define the problem
  for (i = 0; i < 816; i++) {
    R[i] /= rho;
  }
  for (b_i = 0; b_i < 496; b_i++) {
    jd[b_i] = (Id[b_i] == 0.0);
  }
  st.site = &qc_emlrtRSI;
  P_diag->b_times(&st, jd, &r);
  st.site = &qc_emlrtRSI;
  r.times(&st, alpha, &r1);
  for (i = 0; i < 496; i++) {
    out[i] = 1.0 - static_cast<real_T>(jd[i]);
  }
  r1.b_plus(out, S_inv);
  for (i = 0; i < 496; i++) {
    S_inv[i] = 1.0 / S_inv[i];
  }
  // vector%%may be deleta diag(P)
  scale = 2.0 * beta;
  st.site = &rc_emlrtRSI;
  dev_HZ(&st, A, B, &R[0], right);
  for (b_i = 0; b_i < 496; b_i++) {
    S_invRx[b_i] = S_inv[b_i] * R[b_i];
  }
  st.site = &sc_emlrtRSI;
  dev_HZ(&st, A, B, S_invRx, Ap);
  b_alpha = alpha * beta;
  for (i = 0; i < 320; i++) {
    right[i] = ((R[i + 496] - scale * right[i]) + beta * Ap[i]) / b_alpha;
  }
  //  PCG
  for (b_i = 0; b_i < 496; b_i++) {
    S_invJd[b_i] = S_inv[b_i] * static_cast<real_T>(jd[b_i]);
  }
  st.site = &tc_emlrtRSI;
  //  Preconditioned Conjugate Gradient Descent algorithm with maximum
  //  iterations
  //   A - symmetric positive-definite matrix
  //          b - right hand side vector
  //          L - preconditioner matrix
  //          tol - tolerance for the stopping criterion (optional, defaults to
  //          1e-3) max_iter - maximum number of iterations (optional, defaults
  //          to inf)
  //  Initialization
  b_st.site = &vc_emlrtRSI;
  c_st.site = &ad_emlrtRSI;
  //  In this function, we define a simple version of H transpose multiply z.
  //  Each column of H transpose is [-A', -B', I]
  //  By simple, we mean in the matrix H transpose, both A and B are fixed
  //  function. This should be sufficient in estimating the speed for
  //  computation.
  // fix this. We should only fid in A', B' instead of A and B. UNFIXED!!!!
  std::memset(&out[0], 0, 496U * sizeof(real_T));
  for (int32_T t{0}; t < 20; t++) {
    int32_T e1;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T i5;
    int32_T i6;
    int32_T s1m;
    int32_T ze1;
    s1 = t * 24;
    e1 = (t + 1) * 24;
    b_i = t << 4;
    ze1 = (t + 1) << 4;
    s1m = t * 24 + 16;
    if (s1 + 1 > s1m) {
      i = 0;
      i1 = 0;
    } else {
      i = s1;
      i1 = s1m;
    }
    if (b_i + 1 > ze1) {
      i2 = 0;
      i3 = 0;
    } else {
      i2 = b_i;
      i3 = ze1;
    }
    i4 = i1 - i;
    if ((i4 != 16) && (i4 != 1)) {
      emlrtDimSizeImpxCheckR2021b(i4, 16, &emlrtECI, &c_st);
    }
    d_st.site = &w_emlrtRSI;
    e_st.site = &v_emlrtRSI;
    i2 = i3 - i2;
    if (i2 != 16) {
      if (i2 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &e_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (s1m + 1 > e1) {
      s1m = 0;
      i2 = 0;
    } else {
      i2 = e1;
    }
    if (b_i + 1 > ze1) {
      i3 = 0;
      i5 = 0;
    } else {
      i3 = b_i;
      i5 = ze1;
    }
    i6 = i2 - s1m;
    if ((i6 != 8) && (i6 != 1)) {
      emlrtDimSizeImpxCheckR2021b(i6, 8, &b_emlrtECI, &c_st);
    }
    d_st.site = &x_emlrtRSI;
    e_st.site = &v_emlrtRSI;
    i3 = i5 - i3;
    if (i3 != 16) {
      if (i3 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &e_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (s1 + 1 > e1) {
      s1 = 0;
      i3 = 0;
    } else {
      i3 = e1;
    }
    i3 -= s1;
    if (i3 != 24) {
      emlrtSubAssignSizeCheck1dR2017a(i3, 24, &c_emlrtECI, &c_st);
    }
    if ((i4 == 16) && (i6 == 8)) {
      for (i1 = 0; i1 < 16; i1++) {
        scale = 0.0;
        for (i2 = 0; i2 < 16; i2++) {
          scale += At[i1 + (i2 << 4)] * 0.0;
        }
        b_out[i1] = out[i + i1] - scale;
      }
      for (i = 0; i < 8; i++) {
        scale = 0.0;
        for (i1 = 0; i1 < 16; i1++) {
          scale += Bt[i + (i1 << 3)] * 0.0;
        }
        c_out[i] = out[s1m + i] - scale;
      }
      std::copy(&b_out[0], &b_out[16], &out[s1]);
      std::copy(&c_out[0], &c_out[8], &out[s1 + 16]);
    } else {
      binary_expand_op(out, s1, i, i1, At, s1m, i2, Bt);
    }
    if (b_i + 1 > ze1) {
      b_i = 0;
      ze1 = 0;
    }
    s1 = ze1 - b_i;
    if (s1 != 16) {
      emlrtSubAssignSizeCheck1dR2017a(16, s1, &d_emlrtECI, &c_st);
    }
    std::memset(&out[e1], 0, 16U * sizeof(real_T));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&c_st);
    }
  }
  for (i = 0; i < 496; i++) {
    out[i] *= S_invJd[i];
  }
  c_st.site = &bd_emlrtRSI;
  dev_HZ(&c_st, A, B, out, b_r);
  for (i = 0; i < 320; i++) {
    b_r[i] = right[i] - b_r[i];
  }
  b_st.site = &wc_emlrtRSI;
  c_st.site = &cd_emlrtRSI;
  dev_solve_Lv(&c_st, L, b_r, dv);
  c_st.site = &cd_emlrtRSI;
  dev_solve_LTv(&c_st, L, dv, z_new);
  //  Solve LLTz = r
  s1 = 0;
  *iter = 1.0;
  //  Tolerance for the stopping criteria
  nb = 0.0;
  b_scale = 3.3121686421112381E-170;
  b_alpha = 0.0;
  scale = 3.3121686421112381E-170;
  for (b_i = 0; b_i < 320; b_i++) {
    p[b_i] = z_new[b_i];
    dw[b_i] = 0.0;
    absxk = muDoubleScalarAbs(right[b_i]);
    if (absxk > b_scale) {
      b_t = b_scale / absxk;
      nb = nb * b_t * b_t + 1.0;
      b_scale = absxk;
    } else {
      b_t = absxk / b_scale;
      nb += b_t * b_t;
    }
    absxk = muDoubleScalarAbs(b_r[b_i]);
    if (absxk > scale) {
      b_t = scale / absxk;
      b_alpha = b_alpha * b_t * b_t + 1.0;
      scale = absxk;
    } else {
      b_t = absxk / scale;
      b_alpha += b_t * b_t;
    }
  }
  nb = b_scale * muDoubleScalarSqrt(nb);
  b_alpha = scale * muDoubleScalarSqrt(b_alpha);
  *accuracy = b_alpha / nb;
  *pcg_flag = 0.0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    b_alpha = 0.0;
    b_scale = 3.3121686421112381E-170;
    for (b_i = 0; b_i < 320; b_i++) {
      absxk = muDoubleScalarAbs(b_r[b_i]);
      if (absxk > b_scale) {
        b_t = b_scale / absxk;
        b_alpha = b_alpha * b_t * b_t + 1.0;
        b_scale = absxk;
      } else {
        b_t = absxk / b_scale;
        b_alpha += b_t * b_t;
      }
    }
    b_alpha = b_scale * muDoubleScalarSqrt(b_alpha);
    if ((b_alpha / nb > tol) && (s1 < 3)) {
      real_T c_r;
      real_T nr_new;
      b_st.site = &xc_emlrtRSI;
      c_st.site = &ad_emlrtRSI;
      dev_HtZ(&c_st, At, Bt, p, out);
      for (i = 0; i < 496; i++) {
        out[i] *= S_invJd[i];
      }
      c_st.site = &bd_emlrtRSI;
      dev_HZ(&c_st, A, B, out, Ap);
      c_r = 0.0;
      scale = 0.0;
      for (i = 0; i < 320; i++) {
        c_r += b_r[i] * z_new[i];
        scale += p[i] * Ap[i];
      }
      b_alpha = c_r / scale;
      nr_new = 0.0;
      b_scale = 3.3121686421112381E-170;
      for (b_i = 0; b_i < 320; b_i++) {
        dw[b_i] += b_alpha * p[b_i];
        scale = b_r[b_i] - b_alpha * Ap[b_i];
        Ap[b_i] = scale;
        absxk = muDoubleScalarAbs(scale);
        if (absxk > b_scale) {
          b_t = b_scale / absxk;
          nr_new = nr_new * b_t * b_t + 1.0;
          b_scale = absxk;
        } else {
          b_t = absxk / b_scale;
          nr_new += b_t * b_t;
        }
      }
      nr_new = b_scale * muDoubleScalarSqrt(nr_new);
      //  Check for convergence
      *accuracy = nr_new / nb;
      if (*accuracy < tol) {
        *iter = static_cast<real_T>(s1) + 1.0;
        *pcg_flag = 1.0;
        exitg1 = 1;
      } else {
        if (s1 + 1 < 3) {
          b_st.site = &yc_emlrtRSI;
          c_st.site = &cd_emlrtRSI;
          dev_solve_Lv(&c_st, L, Ap, dv);
          c_st.site = &cd_emlrtRSI;
          dev_solve_LTv(&c_st, L, dv, z_new);
          //  Solve Mz = r_new
          scale = 0.0;
          for (i = 0; i < 320; i++) {
            scale += Ap[i] * z_new[i];
          }
          scale /= c_r;
          for (b_i = 0; b_i < 320; b_i++) {
            p[b_i] = z_new[b_i] + scale * p[b_i];
            b_r[b_i] = Ap[b_i];
          }
        }
        s1++;
        *iter = s1;
        *accuracy = nr_new / nb;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  st.site = &uc_emlrtRSI;
  dev_HtZ(&st, At, Bt, dw, S_invJd);
  for (b_i = 0; b_i < 496; b_i++) {
    scale = S_invRx[b_i] -
            alpha * S_inv[b_i] * static_cast<real_T>(jd[b_i]) * S_invJd[b_i];
    S_invRx[b_i] = scale;
    dzw[b_i] = scale;
  }
  std::copy(&dw[0], &dw[320], &dzw[496]);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_pcg_update.cpp)
