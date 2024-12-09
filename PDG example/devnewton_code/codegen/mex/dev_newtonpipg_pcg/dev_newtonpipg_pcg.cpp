//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_pcg.cpp
//
// Code generation for function 'dev_newtonpipg_pcg'
//

// Include files
#include "dev_newtonpipg_pcg.h"
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "dev_newtonpipg_pcg_data.h"
#include "dev_newtonpipg_pcg_types.h"
#include "dev_newtonpipgupdate.h"
#include "dev_pcg_update.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "tic.h"
#include "toc.h"
#include "blas.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    9,                    // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    33,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    34,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    42,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    47,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    70,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    73,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    77,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    85,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    87,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    97,                   // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    116,                  // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    118,                  // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    125,                  // lineNo
    "dev_newtonpipg_pcg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" // pathName
};

static emlrtRSInfo
    ab_emlrtRSI{
        71,      // lineNo
        "power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

static emlrtRSInfo eb_emlrtRSI{
    6,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    7,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_onestep_xpipg.m" // pathName
};

static emlrtRTEInfo
    emlrtRTEI{
        82,         // lineNo
        5,          // colNo
        "fltpower", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

static emlrtRTEInfo b_emlrtRTEI{
    59,                   // lineNo
    9,                    // colNo
    "dev_newtonpipg_pcg", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipg_pcg.m" // pName
};

// Function Definitions
void dev_newtonpipg_pcg(dev_newtonpipg_pcgStackData *SD, const emlrtStack *sp,
                        const real_T A[256], const real_T B[128],
                        const real_T At[256], const real_T Bt[128],
                        const coder::sparse *P, real_T z1[496],
                        const real_T[320], const coder::sparse *q,
                        const coder::sparse *g, const real_T z_min[496],
                        const real_T z_max[496], real_T lam, real_T rho,
                        real_T omg, real_T maxit, real_T newtonratio,
                        real_T newtonactive, real_T tol, struct0_T *out)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  coder::sparse r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T R[816];
  real_T dv[496];
  real_T idn[496];
  real_T minval[496];
  real_T z[496];
  real_T b[320];
  real_T dv1[320];
  real_T alpha;
  real_T b_k;
  real_T beta;
  real_T nR;
  real_T newtonwait_factor;
  real_T pcg_flag;
  real_T pcg_ratio;
  real_T sig1;
  real_T sig2;
  real_T temp;
  int32_T i;
  int32_T k;
  int8_T id[496];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //   A, B are matrix; At,Bt are the transpose; P is a diagonal matrix
  //          z1 initial; lw provides the size of the dual; q, g are coefficient
  //          in the PIPG z_min, z_max are the box constraints; lam, rho, omg
  //          are coeffcients. Newtonratio, newtonactive are coefficient for
  //          PIPG
  //  coefficient set up
  st.site = &emlrtRSI;
  coder::tic(&st);
  // avoid using newton for the third time in one region.
  // ratio for activating newton step
  // wait for 10 pipg before activating newton
  //  Set up
  out->converge = false;
  out->ntime = 0.0;
  out->pcgtime = 0.0;
  std::memset(&out->eta[0], 0, 320U * sizeof(real_T));
  std::memset(&SD->f1.L[0], 0, 10240U * sizeof(real_T));
  //  not robust, we should have n,n, 2,N instead)
  //  find alpha and beta
  sig1 = 100.1;
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    sig2 = sig1;
    st.site = &b_emlrtRSI;
    dev_HZ(&st, A, B, z1, out->eta);
    st.site = &c_emlrtRSI;
    dev_HtZ(&st, At, Bt, out->eta, z1);
    sig1 = 0.0;
    nR = 3.3121686421112381E-170;
    for (k = 0; k < 496; k++) {
      alpha = muDoubleScalarAbs(z1[k]);
      if (alpha > nR) {
        beta = nR / alpha;
        sig1 = sig1 * beta * beta + 1.0;
        nR = alpha;
      } else {
        beta = alpha / nR;
        sig1 += beta * beta;
      }
    }
    sig1 = nR * muDoubleScalarSqrt(sig1);
    for (i = 0; i < 496; i++) {
      z1[i] /= sig1;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  find alpha beta
  //  Buffer the estimated spectral norm
  sig1 *= 1.1;
  st.site = &d_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &d_emlrtRSI;
  sig1 = lam * lam + 4.0 * omg * sig1;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  alpha = 2.0 / (muDoubleScalarSqrt(sig1) + lam);
  beta = omg * alpha;
  //  newton pipg
  st.site = &e_emlrtRSI;
  //  This function calculates an one step PIPG
  //  rho = 1 makes it the conventional parameter.
  // todo
  // change P*xi
  b_st.site = &eb_emlrtRSI;
  P->times(&b_st, z1, &r);
  b_st.site = &eb_emlrtRSI;
  dev_HtZ(&b_st, At, Bt, out->eta, minval);
  r.plus(minval, dv);
  q->b_plus(dv, minval);
  //  use dev_HtZ function here
  for (k = 0; k < 496; k++) {
    sig1 = z1[k];
    sig2 = sig1 - alpha * minval[k];
    minval[k] = sig2;
    sig2 = muDoubleScalarMax(z_min[k], muDoubleScalarMin(z_max[k], sig2));
    out->xi[k] = sig2;
    dv[k] = 2.0 * sig2 - sig1;
  }
  b_st.site = &fb_emlrtRSI;
  dev_HZ(&b_st, A, B, dv, dv1);
  g->minus(dv1, b);
  //  use dev_HZ function here
  //  there is no constraint on the dual variable
  //  Maybe non-necessary in computing the activated set.
  for (i = 0; i < 496; i++) {
    out->xi[i] = (1.0 - rho) * z1[i] + rho * out->xi[i];
  }
  for (i = 0; i < 320; i++) {
    sig1 = out->eta[i];
    sig1 = (1.0 - rho) * sig1 + rho * (sig1 + beta * b[i]);
    out->eta[i] = sig1;
  }
  // Do this twice
  temp = 0.0;
  // initialization
  for (i = 0; i < 496; i++) {
    id[i] = -1;
    idn[i] = 2.0;
  }
  newtonwait_factor = 0.0;
  pcg_flag = 0.0;
  pcg_ratio = 1.0;
  //  Log the result
  // logid = fopen("pcg_log2.txt", "w");
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, maxit, mxDOUBLE_CLASS,
                                static_cast<int32_T>(maxit), &b_emlrtRTEI,
                                (emlrtConstCTX)sp);
  b_k = 1.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= static_cast<int32_T>(maxit) - 1)) {
    boolean_T exitg2;
    boolean_T p;
    b_k = static_cast<real_T>(k) + 1.0;
    if (static_cast<real_T>(k) + 1.0 == 1.0) {
      for (i = 0; i < 496; i++) {
        id[i] = static_cast<int8_T>(idn[i]);
      }
    }
    p = true;
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i < 496)) {
      if (id[i] != static_cast<int32_T>(idn[i])) {
        p = false;
        exitg2 = true;
      } else {
        i++;
      }
    }
    if (!p) {
      temp = static_cast<real_T>(k) + 1.0;
      for (i = 0; i < 496; i++) {
        id[i] = static_cast<int8_T>(idn[i]);
      }
      newtonwait_factor = 0.0;
      pcg_ratio = 1.0;
    }
    st.site = &f_emlrtRSI;
    b_st.site = &y_emlrtRSI;
    if (static_cast<real_T>(k) + 1.0 >=
        (((newtonactive + temp) + 30.0 * newtonwait_factor) +
         muDoubleScalarPower(10.0, newtonwait_factor)) -
            1.0) {
      real_T dzw[816];
      real_T dv2[6];
      int32_T kk;
      int32_T line_search_flag;
      temp = static_cast<real_T>(k) + 1.0;
      for (i = 0; i < 496; i++) {
        id[i] = static_cast<int8_T>(idn[i]);
      }
      st.site = &g_emlrtRSI;
      //  This function calculates an one step PIPG
      //  rho = 1 makes it the conventional parameter.
      // todo
      // change P*xi
      b_st.site = &eb_emlrtRSI;
      P->times(&b_st, out->xi, &r);
      b_st.site = &eb_emlrtRSI;
      dev_HtZ(&b_st, At, Bt, out->eta, minval);
      r.plus(minval, dv);
      q->b_plus(dv, minval);
      //  use dev_HtZ function here
      for (i = 0; i < 496; i++) {
        sig1 = out->xi[i];
        sig2 = sig1 - alpha * minval[i];
        minval[i] = sig2;
        sig2 = muDoubleScalarMax(z_min[i], muDoubleScalarMin(z_max[i], sig2));
        z[i] = sig2;
        dv[i] = 2.0 * sig2 - sig1;
      }
      b_st.site = &fb_emlrtRSI;
      dev_HZ(&b_st, A, B, dv, dv1);
      g->minus(dv1, b);
      //  use dev_HZ function here
      //  there is no constraint on the dual variable
      //  Maybe non-necessary in computing the activated set.
      for (i = 0; i < 496; i++) {
        sig1 = out->xi[i];
        R[i] = -((1.0 - rho) * sig1 + rho * z[i]) + sig1;
      }
      for (i = 0; i < 320; i++) {
        sig1 = out->eta[i];
        R[i + 496] = -((1.0 - rho) * sig1 + rho * (sig1 + beta * b[i])) + sig1;
      }
      n_t = (ptrdiff_t)816;
      incx_t = (ptrdiff_t)1;
      nR = dnrm2(&n_t, &R[0], &incx_t);
      // pcg_flag = 0;
      if (pcg_flag == 0.0) {
        for (i = 0; i < 816; i++) {
          dzw[i] = -R[i];
        }
        st.site = &h_emlrtRSI;
        b_dev_newtonpipgupdate(SD, &st, A, B, At, Bt, P, idn, dzw, alpha, beta,
                               rho, &sig1, SD->f1.L);
        // fprintf(logid, "Newton step finished with flag = %d \n", flag);
        // newtonwait_factor = newtonwait_factor +1;
        out->ntime++;
        if (sig1 == 0.0) {
          pcg_flag = 1.0;
        }
      } else {
        real_T b_R[816];
        st.site = &i_emlrtRSI;
        b_st.site = &y_emlrtRSI;
        // %%Check the sign for -R
        for (i = 0; i < 816; i++) {
          b_R[i] = -R[i];
        }
        st.site = &j_emlrtRSI;
        dev_pcg_update(&st, A, B, SD->f1.L,
                       muDoubleScalarMin(0.01, pcg_ratio * pcg_ratio), At, Bt,
                       P, idn, b_R, alpha, beta, rho, dzw, &pcg_flag, &sig1,
                       &sig2);
        // newtonwait_factor = newtonwait_factor +1;
        out->pcgtime++;
        // fprintf(logid,"PCG finihsed with pcg_flag = %d, iter = %d, accuracy =
        // %e \n", pcg_flag, iter, accuracy);
      }
      // line-search
      line_search_flag = 0;
      for (i = 0; i < 6; i++) {
        dv2[i] =
            muDoubleScalarPower(3.0, -((static_cast<real_T>(i) + 1.0) - 1.0));
      }
      kk = 0;
      exitg2 = false;
      while ((!exitg2) && (kk < 6)) {
        real_T etanew[320];
        //  magic number! The point is to include very small variable as the
        //  decrease happens locally.
        for (i = 0; i < 496; i++) {
          idn[i] = out->xi[i] + dv2[kk] * dzw[i];
        }
        for (i = 0; i < 320; i++) {
          etanew[i] = out->eta[i] + dv2[kk] * dzw[i + 496];
        }
        st.site = &k_emlrtRSI;
        //  This function calculates an one step PIPG
        //  rho = 1 makes it the conventional parameter.
        // todo
        // change P*xi
        b_st.site = &eb_emlrtRSI;
        P->times(&b_st, idn, &r);
        b_st.site = &eb_emlrtRSI;
        dev_HtZ(&b_st, At, Bt, etanew, minval);
        r.plus(minval, dv);
        q->b_plus(dv, minval);
        //  use dev_HtZ function here
        for (i = 0; i < 496; i++) {
          sig1 = idn[i];
          sig2 = sig1 - alpha * minval[i];
          minval[i] = sig2;
          sig2 = muDoubleScalarMax(z_min[i], muDoubleScalarMin(z_max[i], sig2));
          z[i] = sig2;
          dv[i] = 2.0 * sig2 - sig1;
        }
        b_st.site = &fb_emlrtRSI;
        dev_HZ(&b_st, A, B, dv, dv1);
        g->minus(dv1, b);
        //  use dev_HZ function here
        //  there is no constraint on the dual variable
        //  Maybe non-necessary in computing the activated set.
        for (i = 0; i < 496; i++) {
          z[i] = (1.0 - rho) * idn[i] + rho * z[i];
        }
        for (i = 0; i < 320; i++) {
          sig1 = etanew[i];
          b[i] = (1.0 - rho) * sig1 + rho * (sig1 + beta * b[i]);
        }
        for (i = 0; i < 496; i++) {
          R[i] = -z[i] + idn[i];
        }
        for (i = 0; i < 320; i++) {
          R[i + 496] = -b[i] + etanew[i];
        }
        n_t = (ptrdiff_t)816;
        incx_t = (ptrdiff_t)1;
        sig1 = dnrm2(&n_t, &R[0], &incx_t);
        if (sig1 <= newtonratio * nR) {
          std::copy(&z[0], &z[496], &out->xi[0]);
          std::copy(&b[0], &b[320], &out->eta[0]);
          pcg_ratio = sig1 / nR;
          line_search_flag = 1;
          exitg2 = true;
        } else {
          kk++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
      }
      if (line_search_flag == 0) {
        pcg_ratio = 1.0;
        newtonwait_factor++;
        // magic number
      }
    }
    st.site = &l_emlrtRSI;
    //  This function calculates an one step PIPG
    //  rho = 1 makes it the conventional parameter.
    // todo
    // change P*xi
    b_st.site = &eb_emlrtRSI;
    P->times(&b_st, out->xi, &r);
    b_st.site = &eb_emlrtRSI;
    dev_HtZ(&b_st, At, Bt, out->eta, minval);
    r.plus(minval, dv);
    q->b_plus(dv, minval);
    //  use dev_HtZ function here
    for (i = 0; i < 496; i++) {
      sig1 = out->xi[i];
      sig2 = sig1 - alpha * minval[i];
      minval[i] = sig2;
      sig2 = muDoubleScalarMax(z_min[i], muDoubleScalarMin(z_max[i], sig2));
      z[i] = sig2;
      dv[i] = 2.0 * sig2 - sig1;
    }
    b_st.site = &fb_emlrtRSI;
    dev_HZ(&b_st, A, B, dv, dv1);
    g->minus(dv1, b);
    //  use dev_HZ function here
    //  there is no constraint on the dual variable
    //  Maybe non-necessary in computing the activated set.
    for (i = 0; i < 496; i++) {
      sig1 = z[i];
      idn[i] = (sig1 == z_min[i]) + (sig1 == z_max[i]);
      sig1 = (1.0 - rho) * out->xi[i] + rho * sig1;
      z[i] = sig1;
    }
    for (i = 0; i < 320; i++) {
      sig1 = out->eta[i];
      b[i] = (1.0 - rho) * sig1 + rho * (sig1 + beta * b[i]);
    }
    for (i = 0; i < 496; i++) {
      R[i] = -z[i] + out->xi[i];
    }
    for (i = 0; i < 320; i++) {
      R[i + 496] = -b[i] + out->eta[i];
    }
    std::copy(&z[0], &z[496], &out->xi[0]);
    std::copy(&b[0], &b[320], &out->eta[0]);
    // not necessary if newton got activates
    n_t = (ptrdiff_t)816;
    incx_t = (ptrdiff_t)1;
    sig1 = dnrm2(&n_t, &R[0], &incx_t);
    if (sig1 <= tol) {
      st.site = &m_emlrtRSI;
      //  This function calculates an one step PIPG
      //  rho = 1 makes it the conventional parameter.
      // todo
      // change P*xi
      b_st.site = &eb_emlrtRSI;
      P->times(&b_st, z, &r);
      b_st.site = &eb_emlrtRSI;
      dev_HtZ(&b_st, At, Bt, b, minval);
      r.plus(minval, dv);
      q->b_plus(dv, minval);
      //  use dev_HtZ function here
      for (k = 0; k < 496; k++) {
        sig1 = z[k];
        sig2 = sig1 - alpha * minval[k];
        minval[k] = sig2;
        sig2 = muDoubleScalarMax(z_min[k], muDoubleScalarMin(z_max[k], sig2));
        out->xi[k] = sig2;
        dv[k] = 2.0 * sig2 - sig1;
      }
      b_st.site = &fb_emlrtRSI;
      dev_HZ(&b_st, A, B, dv, dv1);
      g->minus(dv1, out->eta);
      //  use dev_HZ function here
      //  there is no constraint on the dual variable
      //  Maybe non-necessary in computing the activated set.
      for (i = 0; i < 496; i++) {
        out->xi[i] = (1.0 - rho) * z[i] + rho * out->xi[i];
      }
      for (i = 0; i < 320; i++) {
        sig1 = b[i];
        out->eta[i] = (1.0 - rho) * sig1 + rho * (sig1 + beta * out->eta[i]);
      }
      out->converge = true;
      exitg1 = true;
    } else {
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  st.site = &n_emlrtRSI;
  out->solve_time = coder::toc(&st) * 1000.0;
  out->k = b_k;
  // fprintf(logid, "Newton step finished with %d PIPG iterations/Newton step
  // \n", out.k); fclose(logid);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_newtonpipg_pcg.cpp)
