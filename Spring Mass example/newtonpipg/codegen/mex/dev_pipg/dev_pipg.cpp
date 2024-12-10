//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_pipg.cpp
//
// Code generation for function 'dev_pipg'
//

// Include files
#include "dev_pipg.h"
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "dev_pipg_data.h"
#include "dev_pipg_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "tic.h"
#include "toc.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    55,         // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    64,         // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    65,         // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    74,         // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    78,         // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    104,        // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    109,        // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    114,        // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    123,        // lineNo
    "dev_pipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" // pathName
};

static emlrtRSInfo
    u_emlrtRSI{
        71,      // lineNo
        "power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

static emlrtRSInfo y_emlrtRSI{
    6,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    7,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtDCInfo emlrtDCI{
    91,         // lineNo
    42,         // colNo
    "dev_pipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m", // pName
    1                                // checkKind
};

static emlrtBCInfo emlrtBCI{
    1,                       // iFirst
    100,                     // iLast
    91,                      // lineNo
    42,                      // colNo
    "out.shiftactiveamount", // aName
    "dev_pipg",              // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m", // pName
    3                                // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    93,         // lineNo
    32,         // colNo
    "dev_pipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m", // pName
    1                                // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    1,             // iFirst
    100,           // iLast
    93,            // lineNo
    32,            // colNo
    "timeinzones", // aName
    "dev_pipg",    // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_pipg.m", // pName
    3                                // checkKind
};

static emlrtRTEInfo
    emlrtRTEI{
        82,         // lineNo
        5,          // colNo
        "fltpower", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

// Function Definitions
void dev_pipg(const emlrtStack *sp, const struct0_T *ppv, struct1_T *out)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T R[1216];
  real_T P[736];
  real_T S[736];
  real_T xi[736];
  real_T z1[736];
  real_T b_S[480];
  real_T eta[480];
  real_T w1[480];
  real_T At[256];
  real_T Bt[128];
  real_T activesetshift;
  real_T alpha;
  real_T beta;
  real_T rho;
  real_T sig1;
  real_T sig2;
  int32_T flag4;
  int32_T flag8;
  int32_T idx;
  int32_T k;
  int32_T row;
  int8_T id[736];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  //  this is a code for pipg
  // %%%%%%%%%%%%%%%%%%%
  // Set up
  // %%%%%%%%%%%%%%%%%%%
  rho = ppv->rho;
  //  inorder to use xpipg code.
  for (row = 0; row < 16; row++) {
    for (idx = 0; idx < 16; idx++) {
      At[idx + (row << 4)] = ppv->A[row + (idx << 4)];
    }
    for (idx = 0; idx < 8; idx++) {
      Bt[idx + (row << 3)] = ppv->B[row + (idx << 4)];
    }
  }
  //  find these in the code
  // rho = pp.expipg_rho;
  // should be an input from ppv
  // Minmum iterations
  // %%%%%%%%%%%%%%%%%%%
  //  pipg out
  // %%%%%%%%%%%%%%%%%%%
  out->alpha = 0.0;
  out->beta = 0.0;
  out->converge = true;
  out->residualfirstactive = rtInf;
  out->iterfirstactive = -1.0;
  out->iter4 = -1.0;
  out->iter8 = -1.0;
  out->iter12 = -1.0;
  std::copy(&ppv->z[0], &ppv->z[736], &z1[0]);
  std::copy(&ppv->z[0], &ppv->z[736], &xi[0]);
  for (k = 0; k < 736; k++) {
    P[k] = ppv->P[k + 736 * k];
  }
  // What inital guess should I use??!!
  std::copy(&ppv->w[0], &ppv->w[480], &eta[0]);
  // %%%%%%%%%%%%%%%%%%
  // PIPG
  // %%%%%%%%%%%%%%%%%%
  flag4 = 0;
  flag8 = 0;
  activesetshift = 1.0;
  std::memset(&out->shiftactiveamount[0], 0, 100U * sizeof(real_T));
  // initialization
  std::memset(&id[0], -1, 736U * sizeof(int8_T));
  st.site = &emlrtRSI;
  coder::tic(&st);
  // %%%%%%%%%%%%%%%%%%%
  // find alpha and beta
  // %%%%%%%%%%%%%%%%%%%
  sig1 = 100.1;
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    sig2 = sig1;
    st.site = &b_emlrtRSI;
    dev_HZ(&st, ppv->A, ppv->B, z1, w1);
    // devec
    st.site = &c_emlrtRSI;
    dev_HtZ(&st, At, Bt, w1, z1);
    // devec
    n_t = (ptrdiff_t)736;
    incx_t = (ptrdiff_t)1;
    sig1 = dnrm2(&n_t, &z1[0], &incx_t);
    for (row = 0; row < 736; row++) {
      z1[row] /= sig1;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  find alpha beta
  //  Buffer the estimated spectral norm
  sig1 *= 1.1;
  st.site = &d_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  st.site = &d_emlrtRSI;
  sig1 = ppv->max_eig_P * ppv->max_eig_P + 4.0 * ppv->expipg_omg * sig1;
  b_st.site = &t_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  alpha = 2.0 / (muDoubleScalarSqrt(sig1) + ppv->max_eig_P);
  beta = ppv->expipg_omg * alpha;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 20000)) {
    real_T dv[736];
    boolean_T exitg2;
    boolean_T p;
    st.site = &e_emlrtRSI;
    //  This function calculates an one step PIPG
    //  rho = 1 makes it the conventional parameter.
    // todo
    // change P*xi
    b_st.site = &y_emlrtRSI;
    dev_HtZ(&b_st, At, Bt, eta, z1);
    idx = ppv->q.colidx[0];
    //  use dev_HtZ function here
    for (row = 0; row < 736; row++) {
      sig1 = xi[row];
      sig2 = P[row] * sig1 + z1[row];
      if ((idx < ppv->q.colidx[1]) && (row + 1 == ppv->q.rowidx[idx - 1])) {
        sig2 += ppv->q.d[idx - 1];
        idx++;
      }
      sig2 = sig1 - alpha * sig2;
      sig2 = muDoubleScalarMin(ppv->zmax[row], sig2);
      z1[row] = sig2;
      sig2 = muDoubleScalarMax(ppv->zmin[row], sig2);
      S[row] = sig2;
      dv[row] = 2.0 * sig2 - sig1;
    }
    b_st.site = &ab_emlrtRSI;
    dev_HZ(&b_st, ppv->A, ppv->B, dv, w1);
    idx = ppv->g.colidx[0];
    for (row = 0; row < 480; row++) {
      if ((idx < ppv->g.colidx[1]) && (row + 1 == ppv->g.rowidx[idx - 1])) {
        b_S[row] = w1[row] - ppv->g.d[idx - 1];
        idx++;
      } else {
        b_S[row] = w1[row];
      }
    }
    //  use dev_HZ function here
    //  there is no constraint on the dual variable
    //  Maybe non-necessary in computing the activated set.
    for (idx = 0; idx < 736; idx++) {
      sig1 = S[idx];
      z1[idx] = (sig1 == ppv->zmin[idx]) + (sig1 == ppv->zmax[idx]);
      sig1 = (1.0 - rho) * xi[idx] + rho * sig1;
      S[idx] = sig1;
    }
    for (row = 0; row < 480; row++) {
      sig1 = eta[row];
      b_S[row] = (1.0 - rho) * sig1 + rho * (sig1 + beta * b_S[row]);
    }
    for (idx = 0; idx < 736; idx++) {
      R[idx] = -S[idx] + xi[idx];
    }
    for (idx = 0; idx < 480; idx++) {
      R[idx + 736] = -b_S[idx] + eta[idx];
    }
    std::copy(&S[0], &S[736], &xi[0]);
    std::copy(&b_S[0], &b_S[480], &eta[0]);
    if (k + 1 == 1) {
      for (idx = 0; idx < 736; idx++) {
        id[idx] = static_cast<int8_T>(z1[idx]);
      }
      n_t = (ptrdiff_t)1216;
      incx_t = (ptrdiff_t)1;
      out->residualfirstactive = dnrm2(&n_t, &R[0], &incx_t);
      out->iterfirstactive = 1.0;
    }
    p = true;
    row = 0;
    exitg2 = false;
    while ((!exitg2) && (row < 736)) {
      if (id[row] != static_cast<int32_T>(z1[row])) {
        p = false;
        exitg2 = true;
      } else {
        row++;
      }
    }
    if (!p) {
      boolean_T x[736];
      n_t = (ptrdiff_t)1216;
      incx_t = (ptrdiff_t)1;
      out->residualfirstactive = dnrm2(&n_t, &R[0], &incx_t);
      out->iterfirstactive = static_cast<real_T>(k) + 1.0;
      for (idx = 0; idx < 736; idx++) {
        x[idx] = (id[idx] != static_cast<int32_T>(z1[idx]));
      }
      idx = x[0];
      for (row = 0; row < 735; row++) {
        idx += x[row + 1];
      }
      if (muDoubleScalarIsInf(activesetshift)) {
        sig1 = rtNaN;
      } else {
        sig1 = muDoubleScalarRem(activesetshift, 100.0);
        if (sig1 == 0.0) {
          sig1 = 0.0;
        }
      }
      if (sig1 + 1.0 != static_cast<int32_T>(sig1 + 1.0)) {
        emlrtIntegerCheckR2012b(sig1 + 1.0, &emlrtDCI, (emlrtConstCTX)sp);
      }
      if (static_cast<int32_T>(sig1 + 1.0) > 100) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(sig1 + 1.0), 1, 100,
                                      &emlrtBCI, (emlrtConstCTX)sp);
      }
      out->shiftactiveamount[static_cast<int32_T>(sig1 + 1.0) - 1] = idx;
      activesetshift++;
      if (muDoubleScalarIsInf(activesetshift)) {
        sig1 = rtNaN;
      } else {
        sig1 = muDoubleScalarRem(activesetshift, 100.0);
      }
      sig1++;
      if (sig1 != static_cast<int32_T>(sig1)) {
        emlrtIntegerCheckR2012b(sig1, &b_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (static_cast<int32_T>(sig1) > 100) {
        emlrtDynamicBoundsCheckR2012b(101, 1, 100, &b_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      //                     out.id = idn;
      //                     out.xiact = xi;
      //                     out.etaact = eta;
      //                     out.R = R;
      for (idx = 0; idx < 736; idx++) {
        id[idx] = static_cast<int8_T>(z1[idx]);
      }
    }
    //      if k/100 == floor(k/100)
    //          disp(norm(R))
    //      end
    st.site = &f_emlrtRSI;
    b_st.site = &t_emlrtRSI;
    n_t = (ptrdiff_t)1216;
    incx_t = (ptrdiff_t)1;
    sig1 = dnrm2(&n_t, &R[0], &incx_t);
    if ((sig1 <= 0.0001) && (flag4 == 0)) {
      flag4 = 1;
      out->iter4 = static_cast<real_T>(k) + 1.0;
    }
    st.site = &g_emlrtRSI;
    b_st.site = &t_emlrtRSI;
    if (sig1 <= 1.0E-8) {
      flag8 = 1;
      out->iter8 = static_cast<real_T>(k) + 1.0;
      exitg1 = true;
    } else {
      st.site = &h_emlrtRSI;
      b_st.site = &t_emlrtRSI;
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  if (flag8 == 0) {
    out->converge = false;
  }
  st.site = &i_emlrtRSI;
  out->computationtime = coder::toc(&st) * 1000.0;
  //  if exit_flag == -1
  //      fprintf("\nexPIPG DVEC did not converge in %.0f iterations: MAX
  //      ITERATIONS REACHED\n",k_max);
  //  end
  // disp(solve_time);
  // print("Primal error : %9.2e\nDual error   : %9.2e\n",err_p1,err_d1);
  // out.residual = norm(R);
  //  out.activeshift = activesetshift;
  //  timeinzones(mod(activesetshift, 100)+2) = k -temp;
  //  out.timeinzones = timeinzones;
  //  out.id = idn;
  //  out.result = [xi; eta];
  //  out.id = idn;
  //  out.xiact = xi;
  //  out.etaact = eta;
  //  out.R = R;
}

// End of code generation (dev_pipg.cpp)
