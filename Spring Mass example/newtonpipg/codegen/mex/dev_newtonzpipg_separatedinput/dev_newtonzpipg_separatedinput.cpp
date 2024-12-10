//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonzpipg_separatedinput.cpp
//
// Code generation for function 'dev_newtonzpipg_separatedinput'
//

// Include files
#include "dev_newtonzpipg_separatedinput.h"
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "dev_newtonpipgupdate.h"
#include "dev_newtonzpipg_separatedinput_data.h"
#include "dev_newtonzpipg_separatedinput_types.h"
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
    23,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    29,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    30,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    39,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    52,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    73,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    77,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    78,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    88,                               // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    103,                              // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    104,                              // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    105,                              // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    111,                              // lineNo
    "dev_newtonzpipg_separatedinput", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" // pathName
};

static emlrtRSInfo
    y_emlrtRSI{
        71,      // lineNo
        "power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

static emlrtRSInfo db_emlrtRSI{
    6,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    7,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
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
    58,                               // lineNo
    9,                                // colNo
    "dev_newtonzpipg_separatedinput", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonzpipg_separatedinput.m" // pName
};

// Function Definitions
void dev_newtonzpipg_separatedinput(
    c_dev_newtonzpipg_separatedinpu *SD, const emlrtStack *sp,
    const real_T A[256], const real_T B[128], const real_T At[256],
    const real_T Bt[128], const coder::sparse *P, real_T z1[496],
    const real_T[320], const coder::sparse *q, const coder::sparse *g,
    const real_T z_min[496], const real_T z_max[496], real_T lam, real_T rho,
    real_T omg, real_T maxit, real_T newtonratio, real_T newtonactive,
    struct0_T *out)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  coder::sparse r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T R[816];
  real_T Rn[816];
  real_T dv[496];
  real_T idn[496];
  real_T minval[496];
  real_T z[496];
  real_T b[320];
  real_T dv1[320];
  real_T alpha;
  real_T b_k;
  real_T beta;
  real_T newtonwait_factor;
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
  //  this is a code for pipg
  // avoid using newton for the third time in one region.
  // ratio for activating newton step
  // wait for 10 pipg before activating newton
  //  Set up
  out->converge = false;
  out->ntime = 0.0;
  std::memset(&out->eta[0], 0, 320U * sizeof(real_T));
  //  find alpha and beta
  st.site = &emlrtRSI;
  coder::tic(&st);
  sig1 = 100.1;
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    sig2 = sig1;
    st.site = &b_emlrtRSI;
    dev_HZ(&st, A, B, z1, out->eta);
    st.site = &c_emlrtRSI;
    dev_HtZ(&st, At, Bt, out->eta, z1);
    sig1 = 0.0;
    alpha = 3.3121686421112381E-170;
    for (k = 0; k < 496; k++) {
      beta = muDoubleScalarAbs(z1[k]);
      if (beta > alpha) {
        newtonwait_factor = alpha / beta;
        sig1 = sig1 * newtonwait_factor * newtonwait_factor + 1.0;
        alpha = beta;
      } else {
        newtonwait_factor = beta / alpha;
        sig1 += newtonwait_factor * newtonwait_factor;
      }
    }
    sig1 = alpha * muDoubleScalarSqrt(sig1);
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
  b_st.site = &x_emlrtRSI;
  st.site = &d_emlrtRSI;
  sig1 = lam * lam + 4.0 * omg * sig1;
  b_st.site = &x_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  alpha = 2.0 / (muDoubleScalarSqrt(sig1) + lam);
  beta = omg * alpha;
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // %%%newton pipg out%%%%%%%%%%%%
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // What inital guess should I use??!!
  newtonwait_factor = 0.0;
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // newton pipg
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  st.site = &e_emlrtRSI;
  //  This function calculates an one step PIPG
  //  rho = 1 makes it the conventional parameter.
  // todo
  // change P*xi
  b_st.site = &db_emlrtRSI;
  P->times(&b_st, z1, &r);
  b_st.site = &db_emlrtRSI;
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
  b_st.site = &eb_emlrtRSI;
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
    }
    st.site = &f_emlrtRSI;
    b_st.site = &x_emlrtRSI;
    if (static_cast<real_T>(k) + 1.0 >=
        (((newtonactive + temp) + 30.0 * newtonwait_factor) +
         muDoubleScalarPower(10.0, newtonwait_factor)) -
            1.0) {
      real_T dzw[816];
      temp = static_cast<real_T>(k) + 1.0;
      for (i = 0; i < 496; i++) {
        id[i] = static_cast<int8_T>(idn[i]);
      }
      st.site = &g_emlrtRSI;
      //  This function calculates an one step PIPG
      //  rho = 1 makes it the conventional parameter.
      // todo
      // change P*xi
      b_st.site = &db_emlrtRSI;
      P->times(&b_st, out->xi, &r);
      b_st.site = &db_emlrtRSI;
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
      b_st.site = &eb_emlrtRSI;
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
      for (i = 0; i < 816; i++) {
        dzw[i] = -R[i];
      }
      st.site = &h_emlrtRSI;
      sig1 = b_dev_newtonpipgupdate(SD, &st, A, B, At, Bt, P, idn, dzw, alpha,
                                    beta, rho);
      newtonwait_factor++;
      out->ntime++;
      // %%Easiest version
      // %%line search
      if (sig1 == 0.0) {
        real_T dv2[6];
        int32_T kk;
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
          st.site = &i_emlrtRSI;
          //  This function calculates an one step PIPG
          //  rho = 1 makes it the conventional parameter.
          // todo
          // change P*xi
          b_st.site = &db_emlrtRSI;
          P->times(&b_st, idn, &r);
          b_st.site = &db_emlrtRSI;
          dev_HtZ(&b_st, At, Bt, etanew, minval);
          r.plus(minval, dv);
          q->b_plus(dv, minval);
          //  use dev_HtZ function here
          for (i = 0; i < 496; i++) {
            sig1 = idn[i];
            sig2 = sig1 - alpha * minval[i];
            minval[i] = sig2;
            sig2 =
                muDoubleScalarMax(z_min[i], muDoubleScalarMin(z_max[i], sig2));
            z[i] = sig2;
            dv[i] = 2.0 * sig2 - sig1;
          }
          b_st.site = &eb_emlrtRSI;
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
            Rn[i] = -z[i] + idn[i];
          }
          for (i = 0; i < 320; i++) {
            Rn[i + 496] = -b[i] + etanew[i];
          }
          n_t = (ptrdiff_t)816;
          incx_t = (ptrdiff_t)1;
          sig1 = dnrm2(&n_t, &Rn[0], &incx_t);
          n_t = (ptrdiff_t)816;
          incx_t = (ptrdiff_t)1;
          sig2 = dnrm2(&n_t, &R[0], &incx_t);
          if (sig1 <= newtonratio * sig2) {
            std::copy(&z[0], &z[496], &out->xi[0]);
            std::copy(&b[0], &b[320], &out->eta[0]);
            // R = Rn;
            // In case the residual has a big drop but still in the same region.
            // This is dangerous as we may active the Newton step too
            // many times. A better way is to compute the exact length
            // that helps current iteration get rid of current area
            // iterfirstactive = k;%same here
            exitg2 = true;
          } else {
            kk++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
        }
      }
    }
    st.site = &j_emlrtRSI;
    //  This function calculates an one step PIPG
    //  rho = 1 makes it the conventional parameter.
    // todo
    // change P*xi
    b_st.site = &db_emlrtRSI;
    P->times(&b_st, out->xi, &r);
    b_st.site = &db_emlrtRSI;
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
    b_st.site = &eb_emlrtRSI;
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
    st.site = &k_emlrtRSI;
    b_st.site = &x_emlrtRSI;
    n_t = (ptrdiff_t)816;
    incx_t = (ptrdiff_t)1;
    sig1 = dnrm2(&n_t, &R[0], &incx_t);
    if (sig1 <= 1.0E-10) {
      st.site = &l_emlrtRSI;
      //  This function calculates an one step PIPG
      //  rho = 1 makes it the conventional parameter.
      // todo
      // change P*xi
      b_st.site = &db_emlrtRSI;
      P->times(&b_st, z, &r);
      b_st.site = &db_emlrtRSI;
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
      b_st.site = &eb_emlrtRSI;
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
  st.site = &m_emlrtRSI;
  out->solve_time = coder::toc(&st) * 1000.0;
  out->k = b_k;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_newtonzpipg_separatedinput.cpp)
