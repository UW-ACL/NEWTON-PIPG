//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_xpipg_g_for_N_30.cpp
//
// Code generation for function 'dev_xpipg_g_for_N_30'
//

// Include files
#include "dev_xpipg_g_for_N_30.h"
#include "dev_HZ_g.h"
#include "dev_HtZ_g.h"
#include "dev_xpipg_g_for_N_30_data.h"
#include "dev_xpipg_g_for_N_30_mexutil.h"
#include "dev_xpipg_g_for_N_30_types.h"
#include "dev_xpipg_onestep_g.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "blas.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRTEInfo emlrtRTEI{
    79,                     // lineNo
    9,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtRSInfo emlrtRSI{
    42,                     // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    52,                     // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    54,                     // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    65,                     // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    76,                     // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    79,                     // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    96,                     // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    100,                    // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    110,                    // lineNo
    "dev_xpipg_g_for_N_30", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    17,         // lineNo
    "dev_HZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    38,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    10,                     // lineNo
    1,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    11,                     // lineNo
    1,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtRTEInfo d_emlrtRTEI{
    12,                     // lineNo
    1,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    13,                     // lineNo
    1,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtRTEInfo f_emlrtRTEI{
    20,                     // lineNo
    1,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    21,                     // lineNo
    1,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtDCInfo emlrtDCI{
    29,                     // lineNo
    16,                     // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m", // pName
    4 // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    29,                     // lineNo
    16,                     // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m", // pName
    1 // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    30,                     // lineNo
    17,                     // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m", // pName
    4 // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    30,                     // lineNo
    17,                     // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m", // pName
    1 // checkKind
};

static emlrtRTEInfo h_emlrtRTEI{
    73,                     // lineNo
    9,                      // colNo
    "dev_xpipg_g_for_N_30", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_for_n_30_customed\\dev_xpipg_g_for_N_30.m" // pName
};

static emlrtRTEInfo
    i_emlrtRTEI{
        82,         // lineNo
        5,          // colNo
        "fltpower", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

static emlrtBCInfo emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    16,         // lineNo
    61,         // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    16,         // lineNo
    75,         // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    17,         // lineNo
    90,         // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    17,         // lineNo
    108,        // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtRSInfo ac_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

// Function Declarations
static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo &location);

// Function Definitions
static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo &location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 5, &pArrays[0],
                               "feval", true, &location);
}

void dev_xpipg_g_for_N_30(const emlrtStack *sp, const real_T P[326],
                          const real_T A[3190], const real_T q[326],
                          const real_T g[290], real_T N, real_T nx, real_T nu,
                          real_T nineq, const real_T proj_index_all[660],
                          const real_T proj_coefficient_all[660],
                          const real_T cone_k_polar[290], const real_T z_1[326],
                          real_T lam, real_T rho, real_T omg, real_T maxit,
                          real_T tol, boolean_T display, struct0_T *out)
{
  static const int32_T iv1[2]{1, 7};
  static const int32_T iv2[2]{1, 66};
  static const char_T b_u[66]{
      't', 'h', 'i', 's', ' ', 'i', 's', ' ', 't',  'h', 'e', ' ', '%', 'd',
      ' ', 'i', 'n', 't', 'e', 'r', 'a', 't', 'i',  'o', 'n', ' ', 'f', 'o',
      'r', ' ', 'v', 'e', 'c', 'n', 'e', 'w', 't',  'o', 'n', ',', ' ', 't',
      'h', 'e', ' ', 'r', 'e', 's', 'i', 'd', 'u',  'a', 'l', ' ', 'n', 'o',
      'r', 'm', ' ', 'i', 's', ' ', '%', 'e', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec savedTime;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T R[616];
  real_T xinew[326];
  real_T etanew[290];
  real_T b_out[10];
  real_T nH_c;
  real_T nH_r;
  real_T nR;
  real_T sig2;
  int32_T b_i;
  int32_T flag4;
  int32_T flag8;
  int32_T index_zstart;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  // min_z \frac{1}{2} z^{\top} P z+q^{\top} z
  //   s.t. H z-g = 0, \quad z \in \mathbb{D}
  //  nx, nu are legacy, stands for the amout of state and control
  //  nineq = #ineq. proj_index_all, proj_coefficient_all,cone_k_polar, are
  //  defined data. z1 is the random initial,lam,rho, omg, maxit are defined.
  //  display is used to contorl the output. This will be cancelled later.
  //  Set up
  //  nz = nx* N + nx + nu*N;
  if (!(nx <= 7.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(nu <= 4.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &c_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(N <= 30.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(nineq <= 4.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  out->xi.size[0] = 326;
  std::copy(&z_1[0], &z_1[326], &out->xi.data[0]);
  // weird bug
  nH_r = (nx + nineq) * N;
  // #rows of H
  nH_c = (nx + nu) * N + nx;
  // #cols of H
  if (!(nH_c <= 360.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(nH_r <= 360.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  // ne is the amount of equalities. A better way is to put ne in the definition
  // of the func.
  out->converge = true;
  out->iter4 = -1.0;
  out->iter8 = -1.0;
  out->iter12 = -1.0;
  if (!(nH_c >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_c, &emlrtDCI, (emlrtConstCTX)sp);
  }
  if (nH_c != muDoubleScalarFloor(nH_c)) {
    emlrtIntegerCheckR2012b(nH_c, &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(nH_r >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_r, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (nH_r != muDoubleScalarFloor(nH_r)) {
    emlrtIntegerCheckR2012b(nH_r, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  nR = 0.0;
  index_zstart = static_cast<int32_T>(nH_r);
  out->eta.size[0] = static_cast<int32_T>(nH_r);
  if (index_zstart - 1 >= 0) {
    std::memset(&out->eta.data[0], 0,
                static_cast<uint32_T>(index_zstart) * sizeof(real_T));
  }
  // %%%%%%%%%%%%%%%%%%
  // PIPG
  // %%%%%%%%%%%%%%%%%%
  flag4 = 0;
  flag8 = 0;
  st.site = &emlrtRSI;
  coder::tic(st, savedTime);
  // %%%%%%%%%%%%%%%%%%%
  // find alpha and beta
  // %%%%%%%%%%%%%%%%%%%
  nH_c = 100.1;
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - nH_c) / nH_c >= 0.005) {
    __m128d r;
    int32_T index_Hstart;
    int32_T vectorUB;
    sig2 = nH_c;
    st.site = &b_emlrtRSI;
    // This function is only designed for PDG
    // We assume that the B matrix, an indentity matrix arounded by zero matrix.
    // If we are applying First order hold, we need to fix this to more general
    // settings.
    // A is the matrix including all equalities. n_e is the amount of
    // equalities, which is also the amount of state variable at time t.
    std::memset(&etanew[0], 0, 290U * sizeof(real_T));
    for (int32_T i{0}; i < 29; i++) {
      int32_T iv[2];
      int32_T i1;
      int32_T i2;
      int32_T i3;
      int32_T i4;
      int32_T unnamed_idx_0;
      index_Hstart = i * 10 + 1;
      index_zstart = i * 11 + 1;
      if (index_zstart > index_zstart + 10) {
        i1 = 0;
        b_i = 0;
      } else {
        b_i = out->xi.size[0];
        if (index_zstart > b_i) {
          emlrtDynamicBoundsCheckR2012b(index_zstart, 1, b_i, &emlrtBCI, &st);
        }
        i1 = index_zstart - 1;
        if (index_zstart + 10 > b_i) {
          emlrtDynamicBoundsCheckR2012b(index_zstart + 10, 1, b_i, &b_emlrtBCI,
                                        &st);
        }
        b_i = index_zstart + 10;
      }
      iv[0] = 1;
      b_i -= i1;
      iv[1] = b_i;
      b_st.site = &o_emlrtRSI;
      coder::internal::indexShapeCheck(b_st, out->xi.size[0], iv);
      if (index_Hstart > index_Hstart + 9) {
        vectorUB = 0;
        i2 = 0;
      } else {
        vectorUB = index_Hstart - 1;
        i2 = index_Hstart + 9;
      }
      i2 -= vectorUB;
      if (i2 != 10) {
        emlrtSubAssignSizeCheck1dR2017a(i2, 10, &emlrtECI, &st);
      }
      b_st.site = &o_emlrtRSI;
      c_st.site = &r_emlrtRSI;
      if (b_i != 11) {
        if (b_i == 1) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &k_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (b_i = 0; b_i < 10; b_i++) {
        nH_c = 0.0;
        for (i2 = 0; i2 < 11; i2++) {
          nH_c += out->xi.data[i1 + i2] * A[(i + 29 * i2) + 319 * b_i];
        }
        b_out[b_i] = nH_c;
      }
      std::copy(&b_out[0], &b_out[10], &etanew[vectorUB]);
      nH_c = (static_cast<real_T>(index_Hstart) + nx) - 1.0;
      if (index_Hstart > nH_c) {
        b_i = 0;
        i1 = 0;
      } else {
        b_i = index_Hstart - 1;
        if (nH_c != muDoubleScalarFloor(nH_c)) {
          emlrtIntegerCheckR2012b(nH_c, &e_emlrtDCI, &st);
        }
        i1 = static_cast<int32_T>(nH_c);
      }
      nH_r = ((static_cast<real_T>(index_zstart) + 11.0) + nx) - 1.0;
      if (static_cast<real_T>(index_zstart) + 11.0 > nH_r) {
        i2 = 0;
        vectorUB = 0;
      } else {
        vectorUB = out->xi.size[0];
        if (index_zstart + 11 > vectorUB) {
          emlrtDynamicBoundsCheckR2012b(index_zstart + 11, 1, vectorUB,
                                        &c_emlrtBCI, &st);
        }
        i2 = index_zstart + 10;
        if (nH_r != muDoubleScalarFloor(nH_r)) {
          emlrtIntegerCheckR2012b(nH_r, &f_emlrtDCI, &st);
        }
        if (static_cast<int32_T>(nH_r) > vectorUB) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nH_r), 1, vectorUB,
                                        &d_emlrtBCI, &st);
        }
        vectorUB = static_cast<int32_T>(nH_r);
      }
      iv[0] = 1;
      index_zstart = vectorUB - i2;
      iv[1] = index_zstart;
      b_st.site = &p_emlrtRSI;
      coder::internal::indexShapeCheck(b_st, out->xi.size[0], iv);
      unnamed_idx_0 = i1 - b_i;
      if ((unnamed_idx_0 != index_zstart) &&
          ((unnamed_idx_0 != 1) && (index_zstart != 1))) {
        emlrtDimSizeImpxCheckR2021b(unnamed_idx_0, index_zstart, &b_emlrtECI,
                                    &st);
      }
      if (index_Hstart > nH_c) {
        i3 = 0;
        i4 = 0;
      } else {
        i3 = index_Hstart - 1;
        if (nH_c != muDoubleScalarFloor(nH_c)) {
          emlrtIntegerCheckR2012b(nH_c, &g_emlrtDCI, &st);
        }
        i4 = static_cast<int32_T>(nH_c);
      }
      if (unnamed_idx_0 == index_zstart) {
        index_Hstart = (unnamed_idx_0 / 2) << 1;
        vectorUB = index_Hstart - 2;
        for (i1 = 0; i1 <= vectorUB; i1 += 2) {
          __m128d r1;
          r = _mm_loadu_pd(&etanew[b_i + i1]);
          r1 = _mm_loadu_pd(&out->xi.data[i2 + i1]);
          _mm_storeu_pd(&xinew[i1], _mm_add_pd(r, r1));
        }
        for (i1 = index_Hstart; i1 < unnamed_idx_0; i1++) {
          xinew[i1] = etanew[b_i + i1] + out->xi.data[i2 + i1];
        }
      } else {
        unnamed_idx_0 =
            binary_expand_op(xinew, etanew, b_i, i1, out, i2, vectorUB);
      }
      index_zstart = i4 - i3;
      if (index_zstart != unnamed_idx_0) {
        emlrtSubAssignSizeCheck1dR2017a(index_zstart, unnamed_idx_0,
                                        &c_emlrtECI, &st);
      }
      for (b_i = 0; b_i < index_zstart; b_i++) {
        etanew[i3 + b_i] = xinew[b_i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    out->eta.size[0] = 290;
    std::copy(&etanew[0], &etanew[290], &out->eta.data[0]);
    // devec
    st.site = &c_emlrtRSI;
    out->xi.size[0] = dev_HtZ_g(st, A, etanew, 290, nx, out->xi.data);
    // devec
    if (out->xi.size[0] == 0) {
      nH_c = 0.0;
    } else {
      n_t = (ptrdiff_t)out->xi.size[0];
      incx_t = (ptrdiff_t)1;
      nH_c = dnrm2(&n_t, &out->xi.data[0], &incx_t);
    }
    index_zstart = out->xi.size[0];
    index_Hstart = index_zstart / 2 * 2;
    vectorUB = index_Hstart - 2;
    for (b_i = 0; b_i <= vectorUB; b_i += 2) {
      r = _mm_loadu_pd(&out->xi.data[b_i]);
      r = _mm_div_pd(r, _mm_set1_pd(nH_c));
      _mm_storeu_pd(&out->xi.data[b_i], r);
    }
    for (b_i = index_Hstart; b_i < index_zstart; b_i++) {
      out->xi.data[b_i] /= nH_c;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  find alpha beta
  //  Buffer the estimated spectral norm
  nH_c *= 1.1;
  st.site = &d_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  c_st.site = &w_emlrtRSI;
  st.site = &d_emlrtRSI;
  nH_c = lam * lam + 4.0 * omg * nH_c;
  b_st.site = &v_emlrtRSI;
  c_st.site = &w_emlrtRSI;
  if (nH_c < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &i_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  nH_r = 2.0 / (muDoubleScalarSqrt(nH_c) + lam);
  sig2 = omg * nH_r;
  //
  // J_D_old= zeros(nH_c);
  //  J_affine_D_old = zeros(nH_c, 1);
  //  J_k_polar_old = zeros(nH_r,1);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, maxit, mxDOUBLE_CLASS,
                                static_cast<int32_T>(maxit), &h_emlrtRTEI,
                                (emlrtConstCTX)sp);
  index_zstart = 0;
  exitg1 = false;
  while ((!exitg1) && (index_zstart <= static_cast<int32_T>(maxit) - 1)) {
    real_T a__1[326];
    real_T a__2[290];
    //  [xinew, etanew,  J_D, J_affine_D, J_k_polar, R] = vec_xpipg_onestep( xi,
    //  eta,alpha, beta,... rho,P,H,Ht,q, g,N, nx, nu, proj_index_all,
    //  proj_coefficient_all,cone_k_polar);
    st.site = &e_emlrtRSI;
    dev_xpipg_onestep_g(st, out->xi.data, out->xi.size[0], out->eta.data,
                        out->eta.size[0], nH_r, sig2, rho, P, A, q, g, N, nx,
                        nu, nx, proj_index_all, proj_coefficient_all,
                        cone_k_polar, xinew, etanew, a__1, a__2, R);
    if (display) {
      st.site = &f_emlrtRSI;
      n_t = (ptrdiff_t)616;
      incx_t = (ptrdiff_t)1;
      nH_c = dnrm2(&n_t, &R[0], &incx_t);
      b_st.site = &wb_emlrtRSI;
      y = nullptr;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
      emlrtAssign(&y, m);
      b_y = nullptr;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m);
      c_y = nullptr;
      m = emlrtCreateDoubleScalar(nH_c);
      emlrtAssign(&c_y, m);
      d_y = nullptr;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 66, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      e_y = nullptr;
      m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
      if (static_cast<real_T>(index_zstart) + 1.0 < 2.147483648E+9) {
        b_i = index_zstart + 1;
      } else {
        b_i = MAX_int32_T;
      }
      *static_cast<int32_T *>(emlrtMxGetData(m)) = b_i;
      emlrtAssign(&e_y, m);
      c_st.site = &ac_emlrtRSI;
      nH_c =
          emlrt_marshallIn(c_st, feval(c_st, y, b_y, d_y, e_y, c_y, emlrtMCI),
                           "<output of feval>");
      f_y = nullptr;
      m = emlrtCreateDoubleScalar(nH_c);
      emlrtAssign(&f_y, m);
      emlrtDisplayR2012b(f_y, "ans", &emlrtRTEI, (emlrtCTX)sp);
    }
    out->xi.size[0] = 326;
    std::copy(&xinew[0], &xinew[326], &out->xi.data[0]);
    out->eta.size[0] = 290;
    std::copy(&etanew[0], &etanew[290], &out->eta.data[0]);
    //
    //  if display && (norm(J_affine_D_old - J_affine_D)>0 ||
    //  norm(diag(J_k_polar_old)-diag(J_k_polar))>0||(k>200&&mod(k, 800) == 0))
    //      fprintf('This is the %d iteration\n', k);
    //      fprintf('the update for D-affine jacobian is %f',
    //      norm(J_affine_D_old - J_affine_D)); fprintf('the update for k_polar
    //      is %f', norm(diag(J_k_polar_old)-diag(J_k_polar))); fprintf('the
    //      current norm of residual is %e', norm(R));
    //  end
    //
    //  J_affine_D_old = J_affine_D;
    //  J_k_polar_old = J_k_polar;
    n_t = (ptrdiff_t)616;
    incx_t = (ptrdiff_t)1;
    nR = dnrm2(&n_t, &R[0], &incx_t);
    st.site = &g_emlrtRSI;
    b_st.site = &v_emlrtRSI;
    c_st.site = &w_emlrtRSI;
    if ((nR <= 0.0001) && (flag4 == 0)) {
      flag4 = 1;
      out->iter4 = static_cast<real_T>(index_zstart) + 1.0;
    }
    st.site = &h_emlrtRSI;
    b_st.site = &v_emlrtRSI;
    c_st.site = &w_emlrtRSI;
    if ((nR <= 1.0E-8) && (flag8 == 0)) {
      flag8 = 1;
      out->iter8 = static_cast<real_T>(index_zstart) + 1.0;
    }
    if (nR <= tol) {
      exitg1 = true;
    } else {
      index_zstart++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  st.site = &i_emlrtRSI;
  out->solve_time = coder::toc(st, savedTime) * 1000.0;
  out->nR = nR;
}

// End of code generation (dev_xpipg_g_for_N_30.cpp)
