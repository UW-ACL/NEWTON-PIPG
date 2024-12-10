//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonxpipg.cpp
//
// Code generation for function 'dev_newtonxpipg'
//

// Include files
#include "dev_newtonxpipg.h"
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "dev_newtonpipgupdate.h"
#include "dev_newtonxpipg_data.h"
#include "dev_newtonxpipg_mexutil.h"
#include "dev_newtonxpipg_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "tic.h"
#include "toc.h"
#include "blas.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    33,                // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    39,                // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    41,                // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    50,                // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    67,                // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    108,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    109,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    119,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    134,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    135,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    145,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    152,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" // pathName
};

static emlrtRSInfo
    x_emlrtRSI{
        71,      // lineNo
        "power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

static emlrtRSInfo cb_emlrtRSI{
    6,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    7,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    158,               // lineNo
    1,                 // colNo
    "dev_newtonxpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pName
};

static emlrtRTEInfo
    emlrtRTEI{
        82,         // lineNo
        5,          // colNo
        "fltpower", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

static emlrtRSInfo ac_emlrtRSI{
    158,               // lineNo
    "dev_newtonxpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonxpipg.m" // pathName
};

// Function Definitions
void dev_newtonxpipg(dev_newtonxpipgStackData *SD, const emlrtStack *sp,
                     const struct0_T *ppv, struct1_T *out)
{
  static const real_T dv1[6]{1.0, 0.5, 0.25, 0.125, 0.0625, 0.03125};
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T R[1216];
  real_T Rn[1216];
  real_T P[736];
  real_T b[736];
  real_T b_P[736];
  real_T idn[736];
  real_T z[736];
  real_T b_b[480];
  real_T dv[480];
  real_T w1[480];
  real_T At[256];
  real_T Bt[128];
  real_T alpha;
  real_T beta;
  real_T rho;
  real_T sig1;
  real_T sig2;
  int32_T b_k;
  int32_T i;
  int32_T k;
  int32_T temp;
  int8_T id[736];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  //  this is a code for pipg
  //  Set up
  for (i = 0; i < 16; i++) {
    for (temp = 0; temp < 16; temp++) {
      At[temp + (i << 4)] = ppv->A[i + (temp << 4)];
    }
    for (temp = 0; temp < 8; temp++) {
      Bt[temp + (i << 3)] = ppv->B[i + (temp << 4)];
    }
  }
  rho = ppv->rho;
  //  inorder to use xpipg code.
  std::copy(&ppv->z[0], &ppv->z[736], &out->xi[0]);
  for (k = 0; k < 736; k++) {
    P[k] = ppv->P[k + 736 * k];
  }
  std::copy(&ppv->w[0], &ppv->w[480], &w1[0]);
  //  find these in the code
  // rho = pp.expipg_rho;
  out->converge = false;
  out->ntime = 0.0;
  //  find alpha and beta
  st.site = &emlrtRSI;
  coder::tic(&st);
  sig1 = 100.1;
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    sig2 = sig1;
    st.site = &b_emlrtRSI;
    dev_HZ(&st, ppv->A, ppv->B, out->xi, w1);
    st.site = &c_emlrtRSI;
    dev_HtZ(&st, At, Bt, w1, out->xi);
    n_t = (ptrdiff_t)736;
    incx_t = (ptrdiff_t)1;
    sig1 = dnrm2(&n_t, &out->xi[0], &incx_t);
    for (i = 0; i < 736; i++) {
      out->xi[i] /= sig1;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  find alpha beta
  //  Buffer the estimated spectral norm
  sig1 *= 1.1;
  st.site = &d_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  st.site = &d_emlrtRSI;
  sig1 = ppv->max_eig_P * ppv->max_eig_P + 4.0 * ppv->expipg_omg * sig1;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  alpha = 2.0 / (muDoubleScalarSqrt(sig1) + ppv->max_eig_P);
  beta = ppv->expipg_omg * alpha;
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // %%%newton pipg out%%%%%%%%%%%%
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  out->alpha = alpha;
  out->beta = beta;
  // What inital guess should I use??!!
  // ratio for activating newton step
  // wait for 10 pipg before activating newton
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  // newton pipg
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  st.site = &e_emlrtRSI;
  //  This function calculates an one step PIPG
  //  rho = 1 makes it the conventional parameter.
  // todo
  // change P*xi
  b_st.site = &cb_emlrtRSI;
  dev_HtZ(&b_st, At, Bt, w1, b);
  for (i = 0; i < 736; i++) {
    b_P[i] = P[i] * out->xi[i] + b[i];
  }
  ppv->q.plus(b_P, b);
  //  use dev_HtZ function here
  for (k = 0; k < 736; k++) {
    sig1 = out->xi[k];
    sig2 = sig1 - alpha * b[k];
    b[k] = sig2;
    sig2 =
        muDoubleScalarMax(ppv->zmin[k], muDoubleScalarMin(ppv->zmax[k], sig2));
    z[k] = sig2;
    b_P[k] = 2.0 * sig2 - sig1;
  }
  b_st.site = &db_emlrtRSI;
  dev_HZ(&b_st, ppv->A, ppv->B, b_P, dv);
  ppv->g.minus(dv, b_b);
  //  use dev_HZ function here
  //  there is no constraint on the dual variable
  //  Maybe non-necessary in computing the activated set.
  for (i = 0; i < 736; i++) {
    out->xi[i] = (1.0 - ppv->rho) * out->xi[i] + ppv->rho * z[i];
  }
  for (i = 0; i < 480; i++) {
    sig1 = w1[i];
    sig1 = (1.0 - ppv->rho) * sig1 + ppv->rho * (sig1 + beta * b_b[i]);
    w1[i] = sig1;
  }
  // Do this twice
  // activesetshift = 1;
  temp = -1;
  // timeinzones = zeros(100, 1);
  // shiftactiveamount = zeros(100,1);
  // initialization
  for (i = 0; i < 736; i++) {
    id[i] = -1;
    idn[i] = 2.0;
  }
  k = 1;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 3000)) {
    boolean_T exitg2;
    boolean_T p;
    k = b_k + 1;
    if (b_k + 1 == 1) {
      for (i = 0; i < 736; i++) {
        id[i] = static_cast<int8_T>(idn[i]);
      }
      //          out.residualfirstactive = norm(R);
      //          iterfirstactive = k;
    }
    p = true;
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i < 736)) {
      if (id[i] != static_cast<int32_T>(idn[i])) {
        p = false;
        exitg2 = true;
      } else {
        i++;
      }
    }
    if (!p) {
      //          out.residualfirstactive = norm(R);
      //          iterfirstactive = k;
      //
      //          shiftactiveamount(mod(activesetshift, 100)+1) = sum(id ~=
      //          idn);%for the simplicity of saving data activesetshift =
      //          activesetshift +1; timeinzones(mod(activesetshift, 100)+1) = k
      //          -temp;
      temp = b_k;
      for (i = 0; i < 736; i++) {
        id[i] = static_cast<int8_T>(idn[i]);
      }
    }
    if (b_k + 1 >= temp + 21) {
      real_T dzw[1216];
      temp = b_k;
      for (i = 0; i < 736; i++) {
        id[i] = static_cast<int8_T>(idn[i]);
      }
      //          xiact = xi;
      //          etaact = eta;
      st.site = &f_emlrtRSI;
      //  This function calculates an one step PIPG
      //  rho = 1 makes it the conventional parameter.
      // todo
      // change P*xi
      b_st.site = &cb_emlrtRSI;
      dev_HtZ(&b_st, At, Bt, w1, b);
      for (i = 0; i < 736; i++) {
        b_P[i] = P[i] * out->xi[i] + b[i];
      }
      ppv->q.plus(b_P, b);
      //  use dev_HtZ function here
      for (i = 0; i < 736; i++) {
        sig1 = out->xi[i];
        sig2 = sig1 - alpha * b[i];
        b[i] = sig2;
        sig2 = muDoubleScalarMax(ppv->zmin[i],
                                 muDoubleScalarMin(ppv->zmax[i], sig2));
        z[i] = sig2;
        b_P[i] = 2.0 * sig2 - sig1;
      }
      b_st.site = &db_emlrtRSI;
      dev_HZ(&b_st, ppv->A, ppv->B, b_P, dv);
      ppv->g.minus(dv, b_b);
      //  use dev_HZ function here
      //  there is no constraint on the dual variable
      //  Maybe non-necessary in computing the activated set.
      for (i = 0; i < 736; i++) {
        sig1 = out->xi[i];
        R[i] = -((1.0 - rho) * sig1 + rho * z[i]) + sig1;
      }
      for (i = 0; i < 480; i++) {
        sig1 = w1[i];
        R[i + 736] =
            -((1.0 - rho) * sig1 + rho * (sig1 + beta * b_b[i])) + sig1;
      }
      for (i = 0; i < 1216; i++) {
        dzw[i] = -R[i];
      }
      st.site = &g_emlrtRSI;
      sig1 = b_dev_newtonpipgupdate(SD, &st, ppv->A, ppv->B, At, Bt, P, idn,
                                    dzw, alpha, beta, rho);
      out->ntime++;
      // %%Easiest version
      // %%line search
      if (sig1 == 0.0) {
        int32_T kk;
        kk = 0;
        exitg2 = false;
        while ((!exitg2) && (kk < 6)) {
          real_T etanew[480];
          sig1 = dv1[kk];
          //  magic number! The point is to include very small variable as the
          //  decrease happens locally.
          for (i = 0; i < 736; i++) {
            idn[i] = out->xi[i] + sig1 * dzw[i];
          }
          for (i = 0; i < 480; i++) {
            etanew[i] = w1[i] + sig1 * dzw[i + 736];
          }
          st.site = &h_emlrtRSI;
          //  This function calculates an one step PIPG
          //  rho = 1 makes it the conventional parameter.
          // todo
          // change P*xi
          b_st.site = &cb_emlrtRSI;
          dev_HtZ(&b_st, At, Bt, etanew, b);
          for (i = 0; i < 736; i++) {
            b_P[i] = P[i] * idn[i] + b[i];
          }
          ppv->q.plus(b_P, b);
          //  use dev_HtZ function here
          for (i = 0; i < 736; i++) {
            sig1 = idn[i];
            sig2 = sig1 - alpha * b[i];
            b[i] = sig2;
            sig2 = muDoubleScalarMax(ppv->zmin[i],
                                     muDoubleScalarMin(ppv->zmax[i], sig2));
            z[i] = sig2;
            b_P[i] = 2.0 * sig2 - sig1;
          }
          b_st.site = &db_emlrtRSI;
          dev_HZ(&b_st, ppv->A, ppv->B, b_P, dv);
          ppv->g.minus(dv, b_b);
          //  use dev_HZ function here
          //  there is no constraint on the dual variable
          //  Maybe non-necessary in computing the activated set.
          for (i = 0; i < 736; i++) {
            z[i] = (1.0 - rho) * idn[i] + rho * z[i];
          }
          for (i = 0; i < 480; i++) {
            sig1 = etanew[i];
            b_b[i] = (1.0 - rho) * sig1 + rho * (sig1 + beta * b_b[i]);
          }
          for (i = 0; i < 736; i++) {
            Rn[i] = -z[i] + idn[i];
          }
          for (i = 0; i < 480; i++) {
            Rn[i + 736] = -b_b[i] + etanew[i];
          }
          n_t = (ptrdiff_t)1216;
          incx_t = (ptrdiff_t)1;
          sig1 = dnrm2(&n_t, &Rn[0], &incx_t);
          n_t = (ptrdiff_t)1216;
          incx_t = (ptrdiff_t)1;
          sig2 = dnrm2(&n_t, &R[0], &incx_t);
          if (sig1 <= 0.9 * sig2) {
            std::copy(&z[0], &z[736], &out->xi[0]);
            std::copy(&b_b[0], &b_b[480], &w1[0]);
            // In cas the residual has a big drop but still in the same region.
            // This is dangerous as we may active the Newton step too
            // many times. A better way is to compute the exact length
            // that helps current iteration get rid of current area
            // same here
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
    st.site = &i_emlrtRSI;
    //  This function calculates an one step PIPG
    //  rho = 1 makes it the conventional parameter.
    // todo
    // change P*xi
    b_st.site = &cb_emlrtRSI;
    dev_HtZ(&b_st, At, Bt, w1, b);
    for (i = 0; i < 736; i++) {
      b_P[i] = P[i] * out->xi[i] + b[i];
    }
    ppv->q.plus(b_P, b);
    //  use dev_HtZ function here
    for (i = 0; i < 736; i++) {
      sig1 = out->xi[i];
      sig2 = sig1 - alpha * b[i];
      b[i] = sig2;
      sig2 = muDoubleScalarMax(ppv->zmin[i],
                               muDoubleScalarMin(ppv->zmax[i], sig2));
      z[i] = sig2;
      b_P[i] = 2.0 * sig2 - sig1;
    }
    b_st.site = &db_emlrtRSI;
    dev_HZ(&b_st, ppv->A, ppv->B, b_P, dv);
    ppv->g.minus(dv, b_b);
    //  use dev_HZ function here
    //  there is no constraint on the dual variable
    //  Maybe non-necessary in computing the activated set.
    for (i = 0; i < 736; i++) {
      sig1 = z[i];
      idn[i] = (sig1 == ppv->zmin[i]) + (sig1 == ppv->zmax[i]);
      sig1 = (1.0 - rho) * out->xi[i] + rho * sig1;
      z[i] = sig1;
    }
    for (i = 0; i < 480; i++) {
      sig1 = w1[i];
      b_b[i] = (1.0 - rho) * sig1 + rho * (sig1 + beta * b_b[i]);
    }
    for (i = 0; i < 736; i++) {
      R[i] = -z[i] + out->xi[i];
    }
    for (i = 0; i < 480; i++) {
      R[i + 736] = -b_b[i] + w1[i];
    }
    std::copy(&z[0], &z[736], &out->xi[0]);
    std::copy(&b_b[0], &b_b[480], &w1[0]);
    // not necessary if newton got activates
    st.site = &j_emlrtRSI;
    b_st.site = &w_emlrtRSI;
    n_t = (ptrdiff_t)1216;
    incx_t = (ptrdiff_t)1;
    sig1 = dnrm2(&n_t, &R[0], &incx_t);
    if (sig1 <= 1.0E-10) {
      //          out.converge = true;
      //          out.iter = k +out.ntime* 12;
      //          out.R = R;
      //          %out.id = idn;
      //          out.xi = xi;
      //          out.residual = norm(R);
      //          out.activeshift = activesetshift;
      //
      //          out.timeinzones = timeinzones;
      st.site = &k_emlrtRSI;
      //  This function calculates an one step PIPG
      //  rho = 1 makes it the conventional parameter.
      // todo
      // change P*xi
      b_st.site = &cb_emlrtRSI;
      dev_HtZ(&b_st, At, Bt, b_b, b);
      for (i = 0; i < 736; i++) {
        P[i] = P[i] * z[i] + b[i];
      }
      ppv->q.plus(P, b);
      //  use dev_HtZ function here
      for (b_k = 0; b_k < 736; b_k++) {
        sig1 = z[b_k];
        sig2 = sig1 - alpha * b[b_k];
        b[b_k] = sig2;
        sig2 = muDoubleScalarMax(ppv->zmin[b_k],
                                 muDoubleScalarMin(ppv->zmax[b_k], sig2));
        out->xi[b_k] = sig2;
        b_P[b_k] = 2.0 * sig2 - sig1;
      }
      b_st.site = &db_emlrtRSI;
      dev_HZ(&b_st, ppv->A, ppv->B, b_P, dv);
      ppv->g.minus(dv, w1);
      //  use dev_HZ function here
      //  there is no constraint on the dual variable
      //  Maybe non-necessary in computing the activated set.
      for (i = 0; i < 736; i++) {
        out->xi[i] = (1.0 - rho) * z[i] + rho * out->xi[i];
      }
      for (i = 0; i < 480; i++) {
        sig1 = b_b[i];
        w1[i] = (1.0 - rho) * sig1 + rho * (sig1 + beta * w1[i]);
      }
      out->converge = true;
      //          save("debugg", "alpha", "beta", "rho", "P", "H", "HT", "q",
      //          "g", "z_min", "z_max","xi", "eta");
      exitg1 = true;
    } else {
      b_k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  st.site = &l_emlrtRSI;
  sig1 = coder::toc(&st) * 1000.0;
  //  if exit_flag == -1
  //      fprintf("\nexPIPG DVEC did not converge in %.0f iterations: MAX
  //      ITERATIONS REACHED\n",k_max);
  //  end
  out->k = k;
  out->computationtime = sig1;
  y = nullptr;
  m = emlrtCreateDoubleScalar(sig1);
  emlrtAssign(&y, m);
  st.site = &ac_emlrtRSI;
  disp(&st, y, &emlrtMCI);
  std::copy(&out->xi[0], &out->xi[736], &out->output[0]);
  std::copy(&w1[0], &w1[480], &out->output[736]);
  // out.eta = eta;%comment this after use!
  // print("Primal error : %9.2e\nDual error   : %9.2e\n",err_p1,err_d1);
}

// End of code generation (dev_newtonxpipg.cpp)
