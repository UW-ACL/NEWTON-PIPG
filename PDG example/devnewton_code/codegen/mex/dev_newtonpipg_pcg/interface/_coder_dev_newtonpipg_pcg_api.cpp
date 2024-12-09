//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonpipg_pcg_api.cpp
//
// Code generation for function '_coder_dev_newtonpipg_pcg_api'
//

// Include files
#include "_coder_dev_newtonpipg_pcg_api.h"
#include "dev_newtonpipg_pcg.h"
#include "dev_newtonpipg_pcg_data.h"
#include "dev_newtonpipg_pcg_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "coder_array.h"

// Variable Definitions
static const char_T *sv[4]{"d", "colidx", "rowidx", "maxnz"};

static const char_T *sv1[4]{"coder.internal.sparse", "coder.internal.sparse",
                            "coder.internal.sparse", "coder.internal.sparse"};

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *g,
                               const char_T *identifier, coder::sparse *y);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::sparse *y);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int32_T, 1U> &ret);

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *B,
                                   const char_T *identifier))[128];

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[128];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Bt,
                                   const char_T *identifier))[128];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[128];

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId);

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *z1,
                                   const char_T *identifier))[496];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[496];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lw,
                                   const char_T *identifier))[320];

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *P,
                             const char_T *identifier, coder::sparse *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::sparse *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<int32_T, 1U> &y);

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *A,
                                 const char_T *identifier))[256];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[256];

static const mxArray *emlrt_marshallOut(const struct0_T *u);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[320];

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lam,
                                 const char_T *identifier);

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[256];

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[128];

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[128];

static int32_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[496];

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[320];

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *g,
                               const char_T *identifier, coder::sparse *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(g), &thisId, y);
  emlrtDestroyArray(&g);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::sparse *y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[4];
  int32_T iv[2];
  boolean_T bv[2];
  propValues[0] = nullptr;
  propValues[1] = nullptr;
  propValues[2] = nullptr;
  propValues[3] = nullptr;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  bv[0] = false;
  iv[0] = 320;
  bv[1] = false;
  iv[1] = 1;
  emlrtCheckSparse((emlrtCTX)sp, parentId, u, &iv[0], &bv[0], mxDOUBLE_CLASS,
                   mxREAL);
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "sparse");
  emlrtAssign(&u, emlrtConvertInstanceToRedirectTarget(
                      (emlrtCTX)sp, u, 0, "coder.internal.sparse"));
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "coder.internal.sparse");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 4, (const char_T **)&sv[0],
                        (const char_T **)&sv1[0], &propValues[0]);
  thisId.fIdentifier = "d";
  emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId, y->d);
  thisId.fIdentifier = "colidx";
  emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y->colidx);
  thisId.fIdentifier = "rowidx";
  emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y->rowidx);
  thisId.fIdentifier = "maxnz";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  emlrtDestroyArrays(4, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  const boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, i);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &(ret.data())[0], 8, false);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int32_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  const boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int32", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), sp, i);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &(ret.data())[0], 4, false);
  emlrtDestroyArray(&src);
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *B,
                                   const char_T *identifier))[128]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[128];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(B), &thisId);
  emlrtDestroyArray(&B);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[128]
{
  real_T(*y)[128];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Bt,
                                   const char_T *identifier))[128]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[128];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(Bt), &thisId);
  emlrtDestroyArray(&Bt);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[128]
{
  real_T(*y)[128];
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *z1,
                                   const char_T *identifier))[496]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[496];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(z1), &thisId);
  emlrtDestroyArray(&z1);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[496]
{
  real_T(*y)[496];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lw,
                                   const char_T *identifier))[320]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[320];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(lw), &thisId);
  emlrtDestroyArray(&lw);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *P,
                             const char_T *identifier, coder::sparse *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(P), &thisId, y);
  emlrtDestroyArray(&P);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::sparse *y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[4];
  int32_T iv[2];
  boolean_T bv[2];
  propValues[0] = nullptr;
  propValues[1] = nullptr;
  propValues[2] = nullptr;
  propValues[3] = nullptr;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  bv[0] = false;
  iv[0] = 496;
  bv[1] = false;
  iv[1] = 1;
  emlrtCheckSparse((emlrtCTX)sp, parentId, u, &iv[0], &bv[0], mxDOUBLE_CLASS,
                   mxREAL);
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "sparse");
  emlrtAssign(&u, emlrtConvertInstanceToRedirectTarget(
                      (emlrtCTX)sp, u, 0, "coder.internal.sparse"));
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, "coder.internal.sparse");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 4, (const char_T **)&sv[0],
                        (const char_T **)&sv1[0], &propValues[0]);
  thisId.fIdentifier = "d";
  emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId, y->d);
  thisId.fIdentifier = "colidx";
  emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y->colidx);
  thisId.fIdentifier = "rowidx";
  emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y->rowidx);
  thisId.fIdentifier = "maxnz";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  emlrtDestroyArrays(4, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<int32_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *A,
                                 const char_T *identifier))[256]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[256];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(A), &thisId);
  emlrtDestroyArray(&A);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[256]
{
  real_T(*y)[256];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const struct0_T *u)
{
  static const int32_T i{496};
  static const int32_T i1{320};
  static const char_T *b_sv[7]{"converge", "xi",      "eta", "solve_time",
                               "ntime",    "pcgtime", "k"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&b_sv[0]));
  b_y = nullptr;
  m = emlrtCreateLogicalScalar(u->converge);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "converge", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (int32_T b_i{0}; b_i < 496; b_i++) {
    pData[b_i] = u->xi[b_i];
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "xi", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i1, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (int32_T b_i{0}; b_i < 320; b_i++) {
    pData[b_i] = u->eta[b_i];
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "eta", d_y, 2);
  e_y = nullptr;
  m = emlrtCreateDoubleScalar(u->solve_time);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "solve_time", e_y, 3);
  f_y = nullptr;
  m = emlrtCreateDoubleScalar(u->ntime);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "ntime", f_y, 4);
  g_y = nullptr;
  m = emlrtCreateDoubleScalar(u->pcgtime);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "pcgtime", g_y, 5);
  h_y = nullptr;
  m = emlrtCreateDoubleScalar(u->k);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "k", h_y, 6);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[320]
{
  real_T(*y)[320];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lam,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(lam), &thisId);
  emlrtDestroyArray(&lam);
  return y;
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[256]
{
  static const int32_T dims[2]{16, 16};
  real_T(*ret)[256];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  ret = (real_T(*)[256])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[128]
{
  static const int32_T dims[2]{16, 8};
  real_T(*ret)[128];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  ret = (real_T(*)[128])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[128]
{
  static const int32_T dims[2]{8, 16};
  real_T(*ret)[128];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  ret = (real_T(*)[128])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  int32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int32", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<int32_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[496]
{
  static const int32_T dims{496};
  real_T(*ret)[496];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  ret = (real_T(*)[496])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[320]
{
  static const int32_T dims{320};
  real_T(*ret)[320];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  ret = (real_T(*)[320])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

void dev_newtonpipg_pcg_api(dev_newtonpipg_pcgStackData *SD,
                            const mxArray *const prhs[18], const mxArray **plhs)
{
  coder::sparse P;
  coder::sparse g;
  coder::sparse q;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *prhs_copy_idx_5;
  struct0_T out;
  real_T(*z1)[496];
  real_T(*z_max)[496];
  real_T(*z_min)[496];
  real_T(*lw)[320];
  real_T(*A)[256];
  real_T(*At)[256];
  real_T(*B)[128];
  real_T(*Bt)[128];
  real_T lam;
  real_T maxit;
  real_T newtonactive;
  real_T newtonratio;
  real_T omg;
  real_T rho;
  real_T tol;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  prhs_copy_idx_5 = emlrtProtectR2012b(prhs[5], 5, false, -1);
  // Marshall function inputs
  A = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "A");
  B = b_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "B");
  At = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "At");
  Bt = c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "Bt");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "P", &P);
  z1 = d_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_5), "z1");
  lw = e_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "lw");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "q", &q);
  b_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "g", &g);
  z_min = d_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "z_min");
  z_max = d_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "z_max");
  lam = f_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "lam");
  rho = f_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "rho");
  omg = f_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "omg");
  maxit = f_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "maxit");
  newtonratio = f_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "newtonratio");
  newtonactive = f_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "newtonactive");
  tol = f_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "tol");
  // Invoke the target function
  dev_newtonpipg_pcg(SD, &st, *A, *B, *At, *Bt, &P, *z1, *lw, &q, &g, *z_min,
                     *z_max, lam, rho, omg, maxit, newtonratio, newtonactive,
                     tol, &out);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(&out);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_dev_newtonpipg_pcg_api.cpp)
