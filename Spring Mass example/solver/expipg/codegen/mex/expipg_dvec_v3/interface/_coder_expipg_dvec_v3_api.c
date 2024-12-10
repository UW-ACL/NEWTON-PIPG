/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_expipg_dvec_v3_api.c
 *
 * Code generation for function '_coder_expipg_dvec_v3_api'
 *
 */

/* Include files */
#include "_coder_expipg_dvec_v3_api.h"
#include "expipg_dvec_v3.h"
#include "expipg_dvec_v3_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void ab_emlrt_marshallIn(const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[128]);

static void b_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[1616]);

static const mxArray *b_emlrt_marshallOut(const real_T u[800]);

static void bb_emlrt_marshallIn(const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[16]);

static void c_emlrt_marshallIn(const mxArray *u1, const char_T *identifier,
                               real_T y[800]);

static const mxArray *c_emlrt_marshallOut(const real_T u[1600]);

static void d_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[800]);

static const mxArray *d_emlrt_marshallOut(const real_T u);

static void e_emlrt_marshallIn(const mxArray *w1, const char_T *identifier,
                               real_T y[1600]);

static void emlrt_marshallIn(const mxArray *x1, const char_T *identifier,
                             real_T y[1616]);

static const mxArray *emlrt_marshallOut(const real_T u[1616]);

static void f_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[1600]);

static real_T g_emlrt_marshallIn(const mxArray *err_p1,
                                 const char_T *identifier);

static real_T h_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void i_emlrt_marshallIn(const mxArray *Q, const char_T *identifier,
                               real_T y[256]);

static void j_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[256]);

static void k_emlrt_marshallIn(const mxArray *R, const char_T *identifier,
                               real_T y[64]);

static void l_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[64]);

static void m_emlrt_marshallIn(const mxArray *B, const char_T *identifier,
                               real_T y[128]);

static void n_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[128]);

static void o_emlrt_marshallIn(const mxArray *BT, const char_T *identifier,
                               real_T y[128]);

static void p_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[128]);

static void q_emlrt_marshallIn(const mxArray *x_0, const char_T *identifier,
                               real_T y[16]);

static void r_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[16]);

static void s_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[1616]);

static void t_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[800]);

static void u_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[1600]);

static real_T v_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void w_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[256]);

static void x_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[64]);

static void y_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[128]);

/* Function Definitions */
static void ab_emlrt_marshallIn(const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[128])
{
  static const int32_T dims[2] = {8, 16};
  real_T(*r)[128];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[128])emlrtMxGetData(src);
  for (i = 0; i < 128; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[1616])
{
  real_T dv[1616];
  int32_T i;
  int32_T i1;
  s_emlrt_marshallIn(emlrtAlias(u), parentId, dv);
  for (i = 0; i < 16; i++) {
    for (i1 = 0; i1 < 101; i1++) {
      y[i1 + 101 * i] = dv[i + (i1 << 4)];
    }
  }
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[800])
{
  static const int32_T iv[2] = {8, 100};
  const mxArray *m;
  const mxArray *y;
  real_T dv[800];
  real_T *pData;
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  for (i = 0; i < 100; i++) {
    for (b_i = 0; b_i < 8; b_i++) {
      dv[b_i + (i << 3)] = u[i + 100 * b_i];
    }
  }
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 100; b_i++) {
    for (c_i = 0; c_i < 8; c_i++) {
      pData[i + c_i] = dv[c_i + (b_i << 3)];
    }
    i += 8;
  }
  emlrtAssign(&y, m);
  return y;
}

static void bb_emlrt_marshallIn(const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[16])
{
  static const int32_T dims = 16;
  real_T(*r)[16];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[16])emlrtMxGetData(src);
  for (i = 0; i < 16; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const mxArray *u1, const char_T *identifier,
                               real_T y[800])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(emlrtAlias(u1), &thisId, y);
  emlrtDestroyArray(&u1);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[1600])
{
  static const int32_T iv[2] = {16, 100};
  const mxArray *m;
  const mxArray *y;
  real_T dv[1600];
  real_T *pData;
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  for (i = 0; i < 100; i++) {
    for (b_i = 0; b_i < 16; b_i++) {
      dv[b_i + (i << 4)] = u[i + 100 * b_i];
    }
  }
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 100; b_i++) {
    for (c_i = 0; c_i < 16; c_i++) {
      pData[i + c_i] = dv[c_i + (b_i << 4)];
    }
    i += 16;
  }
  emlrtAssign(&y, m);
  return y;
}

static void d_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[800])
{
  real_T dv[800];
  int32_T i;
  int32_T i1;
  t_emlrt_marshallIn(emlrtAlias(u), parentId, dv);
  for (i = 0; i < 8; i++) {
    for (i1 = 0; i1 < 100; i1++) {
      y[i1 + 100 * i] = dv[i + (i1 << 3)];
    }
  }
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void e_emlrt_marshallIn(const mxArray *w1, const char_T *identifier,
                               real_T y[1600])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(emlrtAlias(w1), &thisId, y);
  emlrtDestroyArray(&w1);
}

static void emlrt_marshallIn(const mxArray *x1, const char_T *identifier,
                             real_T y[1616])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(emlrtAlias(x1), &thisId, y);
  emlrtDestroyArray(&x1);
}

static const mxArray *emlrt_marshallOut(const real_T u[1616])
{
  static const int32_T iv[2] = {16, 101};
  const mxArray *m;
  const mxArray *y;
  real_T dv[1616];
  real_T *pData;
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  for (i = 0; i < 101; i++) {
    for (b_i = 0; b_i < 16; b_i++) {
      dv[b_i + (i << 4)] = u[i + 101 * b_i];
    }
  }
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 101; b_i++) {
    for (c_i = 0; c_i < 16; c_i++) {
      pData[i + c_i] = dv[c_i + (b_i << 4)];
    }
    i += 16;
  }
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[1600])
{
  real_T dv[1600];
  int32_T i;
  int32_T i1;
  u_emlrt_marshallIn(emlrtAlias(u), parentId, dv);
  for (i = 0; i < 16; i++) {
    for (i1 = 0; i1 < 100; i1++) {
      y[i1 + 100 * i] = dv[i + (i1 << 4)];
    }
  }
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const mxArray *err_p1,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(emlrtAlias(err_p1), &thisId);
  emlrtDestroyArray(&err_p1);
  return y;
}

static real_T h_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = v_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const mxArray *Q, const char_T *identifier,
                               real_T y[256])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(emlrtAlias(Q), &thisId, y);
  emlrtDestroyArray(&Q);
}

static void j_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[256])
{
  real_T dv[256];
  int32_T i;
  int32_T i1;
  w_emlrt_marshallIn(emlrtAlias(u), parentId, dv);
  for (i = 0; i < 16; i++) {
    for (i1 = 0; i1 < 16; i1++) {
      y[i1 + (i << 4)] = dv[i + (i1 << 4)];
    }
  }
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const mxArray *R, const char_T *identifier,
                               real_T y[64])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(emlrtAlias(R), &thisId, y);
  emlrtDestroyArray(&R);
}

static void l_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[64])
{
  real_T dv[64];
  int32_T i;
  int32_T i1;
  x_emlrt_marshallIn(emlrtAlias(u), parentId, dv);
  for (i = 0; i < 8; i++) {
    for (i1 = 0; i1 < 8; i1++) {
      y[i1 + (i << 3)] = dv[i + (i1 << 3)];
    }
  }
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const mxArray *B, const char_T *identifier,
                               real_T y[128])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(emlrtAlias(B), &thisId, y);
  emlrtDestroyArray(&B);
}

static void n_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[128])
{
  real_T dv[128];
  int32_T i;
  int32_T i1;
  y_emlrt_marshallIn(emlrtAlias(u), parentId, dv);
  for (i = 0; i < 16; i++) {
    for (i1 = 0; i1 < 8; i1++) {
      y[i1 + (i << 3)] = dv[i + (i1 << 4)];
    }
  }
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const mxArray *BT, const char_T *identifier,
                               real_T y[128])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(emlrtAlias(BT), &thisId, y);
  emlrtDestroyArray(&BT);
}

static void p_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[128])
{
  real_T dv[128];
  int32_T i;
  int32_T i1;
  ab_emlrt_marshallIn(emlrtAlias(u), parentId, dv);
  for (i = 0; i < 8; i++) {
    for (i1 = 0; i1 < 16; i1++) {
      y[i1 + (i << 4)] = dv[i + (i1 << 3)];
    }
  }
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const mxArray *x_0, const char_T *identifier,
                               real_T y[16])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(emlrtAlias(x_0), &thisId, y);
  emlrtDestroyArray(&x_0);
}

static void r_emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[16])
{
  bb_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[1616])
{
  static const int32_T dims[2] = {16, 101};
  real_T(*r)[1616];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[1616])emlrtMxGetData(src);
  for (i = 0; i < 1616; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[800])
{
  static const int32_T dims[2] = {8, 100};
  real_T(*r)[800];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[800])emlrtMxGetData(src);
  for (i = 0; i < 800; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[1600])
{
  static const int32_T dims[2] = {16, 100};
  real_T(*r)[1600];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[1600])emlrtMxGetData(src);
  for (i = 0; i < 1600; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T v_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void w_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[256])
{
  static const int32_T dims[2] = {16, 16};
  real_T(*r)[256];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[256])emlrtMxGetData(src);
  for (i = 0; i < 256; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[64])
{
  static const int32_T dims[2] = {8, 8};
  real_T(*r)[64];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[64])emlrtMxGetData(src);
  for (i = 0; i < 64; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[128])
{
  static const int32_T dims[2] = {16, 8};
  real_T(*r)[128];
  int32_T i;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[128])emlrtMxGetData(src);
  for (i = 0; i < 128; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

void expipg_dvec_v3_api(const mxArray *const prhs[33], int32_T nlhs,
                        const mxArray *plhs[4])
{
  real_T x1[1616];
  real_T x2[1616];
  real_T x3[1616];
  real_T w1[1600];
  real_T w2[1600];
  real_T w3[1600];
  real_T u1[800];
  real_T u2[800];
  real_T u3[800];
  real_T A[256];
  real_T AT[256];
  real_T Q[256];
  real_T B[128];
  real_T BT[128];
  real_T R[64];
  real_T x_0[16];
  real_T x_N[16];
  real_T N;
  real_T eps_feas;
  real_T eps_infeas;
  real_T err_d1;
  real_T err_d2;
  real_T err_p1;
  real_T exit_flag;
  real_T k_max;
  real_T k_test;
  real_T lam;
  real_T omg;
  real_T rho;
  real_T u_max;
  real_T u_min;
  real_T x_max;
  real_T x_min;
  /* Marshall function inputs */
  emlrt_marshallIn(emlrtAliasP(prhs[0]), "x1", x1);
  c_emlrt_marshallIn(emlrtAliasP(prhs[1]), "u1", u1);
  e_emlrt_marshallIn(emlrtAliasP(prhs[2]), "w1", w1);
  emlrt_marshallIn(emlrtAliasP(prhs[3]), "x2", x2);
  c_emlrt_marshallIn(emlrtAliasP(prhs[4]), "u2", u2);
  e_emlrt_marshallIn(emlrtAliasP(prhs[5]), "w2", w2);
  emlrt_marshallIn(emlrtAliasP(prhs[6]), "x3", x3);
  c_emlrt_marshallIn(emlrtAliasP(prhs[7]), "u3", u3);
  e_emlrt_marshallIn(emlrtAliasP(prhs[8]), "w3", w3);
  err_p1 = g_emlrt_marshallIn(emlrtAliasP(prhs[9]), "err_p1");
  err_d1 = g_emlrt_marshallIn(emlrtAliasP(prhs[10]), "err_d1");
  err_d2 = g_emlrt_marshallIn(emlrtAliasP(prhs[11]), "err_d2");
  lam = g_emlrt_marshallIn(emlrtAliasP(prhs[12]), "lam");
  omg = g_emlrt_marshallIn(emlrtAliasP(prhs[13]), "omg");
  rho = g_emlrt_marshallIn(emlrtAliasP(prhs[14]), "rho");
  k_test = g_emlrt_marshallIn(emlrtAliasP(prhs[15]), "k_test");
  k_max = g_emlrt_marshallIn(emlrtAliasP(prhs[16]), "k_max");
  exit_flag = g_emlrt_marshallIn(emlrtAliasP(prhs[17]), "exit_flag");
  eps_feas = g_emlrt_marshallIn(emlrtAliasP(prhs[18]), "eps_feas");
  eps_infeas = g_emlrt_marshallIn(emlrtAliasP(prhs[19]), "eps_infeas");
  N = g_emlrt_marshallIn(emlrtAliasP(prhs[20]), "N");
  i_emlrt_marshallIn(emlrtAliasP(prhs[21]), "Q", Q);
  k_emlrt_marshallIn(emlrtAliasP(prhs[22]), "R", R);
  i_emlrt_marshallIn(emlrtAliasP(prhs[23]), "A", A);
  i_emlrt_marshallIn(emlrtAliasP(prhs[24]), "AT", AT);
  m_emlrt_marshallIn(emlrtAliasP(prhs[25]), "B", B);
  o_emlrt_marshallIn(emlrtAliasP(prhs[26]), "BT", BT);
  q_emlrt_marshallIn(emlrtAliasP(prhs[27]), "x_0", x_0);
  q_emlrt_marshallIn(emlrtAliasP(prhs[28]), "x_N", x_N);
  x_min = g_emlrt_marshallIn(emlrtAliasP(prhs[29]), "x_min");
  x_max = g_emlrt_marshallIn(emlrtAliasP(prhs[30]), "x_max");
  u_min = g_emlrt_marshallIn(emlrtAliasP(prhs[31]), "u_min");
  u_max = g_emlrt_marshallIn(emlrtAliasP(prhs[32]), "u_max");
  /* Invoke the target function */
  expipg_dvec_v3(x1, u1, w1, x2, u2, w2, x3, u3, w3, err_p1, err_d1, err_d2,
                 lam, omg, rho, k_test, k_max, &exit_flag, eps_feas, eps_infeas,
                 N, Q, R, A, AT, B, BT, x_0, x_N, x_min, x_max, u_min, u_max);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(x1);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(u1);
  }
  if (nlhs > 2) {
    plhs[2] = c_emlrt_marshallOut(w1);
  }
  if (nlhs > 3) {
    plhs[3] = d_emlrt_marshallOut(exit_flag);
  }
}

/* End of code generation (_coder_expipg_dvec_v3_api.c) */
