//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_A_Q_D.cpp
//
// Code generation for function 'dev_g_A_Q_D'
//

// Include files
#include "dev_g_A_Q_D.h"
#include "dev_A_Q_D_unit.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "diag.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo re_emlrtRSI{
    5,             // lineNo
    "dev_g_A_Q_D", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_A_Q_D.m" // pathName
};

static emlrtBCInfo tg_emlrtBCI{
    1,                // iFirst
    11,               // iLast
    34,               // lineNo
    26,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo ug_emlrtBCI{
    1,                // iFirst
    11,               // iLast
    36,               // lineNo
    26,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

// Function Definitions
void dev_g_A_Q_D(const emlrtStack &sp, real_T A[3190], const real_T Q_data[],
                 const int32_T Q_size[3], const real_T proj_index_all[660])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d_tmp_data[110];
  real_T out[110];
  real_T c_tmp_data[11];
  int32_T A_size[2];
  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T tmp_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  loop_ub_tmp = Q_size[0];
  loop_ub = Q_size[1];
  for (int32_T i{0}; i < 29; i++) {
    real_T tmp_data[121];
    real_T temp;
    int32_T b_i;
    int32_T flag;
    int32_T i1;
    boolean_T exitg1;
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        tmp_data[i1 + loop_ub * b_i] =
            Q_data[(i + 30 * i1) + 30 * Q_size[1] * b_i];
      }
    }
    st.site = &re_emlrtRSI;
    // WE want to compute the innerproduct of A and Q.
    // When col(A) \neq row(Q), we need an L such that only the first L column
    // multiply the top square block of Q that ahs size L
    std::memset(&out[0], 0, 110U * sizeof(real_T));
    temp = 1.0;
    flag = 0;
    exitg1 = false;
    while ((!exitg1) && (temp <= 11.0)) {
      real_T d;
      if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
        emlrtIntegerCheckR2012b(temp, &lc_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(temp) < 1) ||
          (static_cast<int32_T>(temp) > 11)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                      &vd_emlrtBCI, &st);
      }
      d = proj_index_all[i + 30 * ((static_cast<int32_T>(temp) - 1) % 11)];
      if (d == rtInf) {
        exitg1 = true;
      } else {
        if (d >= 11.0) {
          real_T d1;
          flag = 1;
          d1 = proj_index_all[(i +
                               30 * ((static_cast<int32_T>(temp) + 10) % 11)) +
                              330];
          if (d1 == 1.0) {
            real_T b_tmp_data[121];
            int32_T b_loop_ub;
            int32_T b_loop_ub_tmp;
            //  Q(temp_index, temp_index)  =
            //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)'
            //  ...
            //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            loop_ub_tmp, &wd_emlrtBCI, &st);
            }
            if (loop_ub_tmp < 11) {
              emlrtDynamicBoundsCheckR2012b(11, 1, loop_ub_tmp, &xd_emlrtBCI,
                                            &st);
            }
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            loop_ub, &yd_emlrtBCI, &st);
            }
            if (loop_ub < 11) {
              emlrtDynamicBoundsCheckR2012b(11, 1, loop_ub, &ae_emlrtBCI, &st);
            }
            b_tmp_size[1] = 12 - static_cast<int32_T>(temp);
            b_tmp_size[0] = 12 - static_cast<int32_T>(temp);
            b_loop_ub_tmp = -static_cast<int32_T>(temp);
            for (b_i = 0; b_i <= b_loop_ub_tmp + 11; b_i++) {
              for (i1 = 0; i1 <= b_loop_ub_tmp + 11; i1++) {
                b_tmp_data[i1 + (12 - static_cast<int32_T>(temp)) * b_i] =
                    tmp_data[((static_cast<int32_T>(temp) + i1) +
                              loop_ub *
                                  ((static_cast<int32_T>(temp) + b_i) - 1)) -
                             1];
              }
            }
            b_st.site = &ve_emlrtRSI;
            tmp_size = coder::diag(b_st, b_tmp_data, b_tmp_size, c_tmp_data);
            if ((12 - static_cast<int32_T>(temp) != tmp_size) &&
                ((12 - static_cast<int32_T>(temp) != 1) && (tmp_size != 1))) {
              emlrtDimSizeImpxCheckR2021b(12 - static_cast<int32_T>(temp),
                                          tmp_size, &mc_emlrtECI, &st);
            }
            if (12 - static_cast<int32_T>(temp) == tmp_size) {
              c_tmp_size[1] = 12 - static_cast<int32_T>(temp);
              c_tmp_size[0] = 10;
              for (b_i = 0; b_i < 10; b_i++) {
                for (i1 = 0; i1 <= b_loop_ub_tmp + 11; i1++) {
                  d_tmp_data[i1 + (12 - static_cast<int32_T>(temp)) * b_i] =
                      A[(i + 29 * ((static_cast<int32_T>(temp) + i1) - 1)) +
                        319 * b_i] *
                      c_tmp_data[i1];
                }
              }
            } else {
              binary_expand_op_36(d_tmp_data, c_tmp_size, A, i, temp,
                                  c_tmp_data, tmp_size);
            }
            iv[0] = 10;
            iv[1] = 12 - static_cast<int32_T>(temp);
            iv1[0] = 10;
            iv1[1] = c_tmp_size[1];
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &oc_emlrtECI,
                                          &st);
            b_loop_ub = static_cast<int8_T>(12 - static_cast<int32_T>(temp));
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                out[((static_cast<int32_T>(temp) + i1) + 11 * b_i) - 1] =
                    d_tmp_data[i1 + c_tmp_size[1] * b_i];
              }
            }
            //  to save computation.
          } else if ((d1 == 2.0) || (d1 == 3.0)) {
            real_T b_tmp_data[121];
            real_T A_data[110];
            int32_T b_loop_ub;
            int32_T b_loop_ub_tmp;
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            loop_ub_tmp, &be_emlrtBCI, &st);
            }
            if (loop_ub_tmp < 11) {
              emlrtDynamicBoundsCheckR2012b(11, 1, loop_ub_tmp, &ce_emlrtBCI,
                                            &st);
            }
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            loop_ub, &de_emlrtBCI, &st);
            }
            if (loop_ub < 11) {
              emlrtDynamicBoundsCheckR2012b(11, 1, loop_ub, &ee_emlrtBCI, &st);
            }
            b_st.site = &ue_emlrtRSI;
            A_size[1] = 12 - static_cast<int32_T>(temp);
            A_size[0] = 10;
            b_loop_ub_tmp = -static_cast<int32_T>(temp);
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 <= b_loop_ub_tmp + 11; i1++) {
                A_data[i1 + (12 - static_cast<int32_T>(temp)) * b_i] =
                    A[(i + 29 * ((static_cast<int32_T>(temp) + i1) - 1)) +
                      319 * b_i];
              }
            }
            b_tmp_size[1] = 12 - static_cast<int32_T>(temp);
            b_tmp_size[0] = 12 - static_cast<int32_T>(temp);
            for (b_i = 0; b_i <= b_loop_ub_tmp + 11; b_i++) {
              for (i1 = 0; i1 <= b_loop_ub_tmp + 11; i1++) {
                b_tmp_data[i1 + (12 - static_cast<int32_T>(temp)) * b_i] =
                    tmp_data[((static_cast<int32_T>(temp) + i1) +
                              loop_ub *
                                  ((static_cast<int32_T>(temp) + b_i) - 1)) -
                             1];
              }
            }
            coder::internal::blas::mtimes(A_data, A_size, b_tmp_data,
                                          b_tmp_size, d_tmp_data, c_tmp_size);
            iv[0] = 10;
            iv[1] = 12 - static_cast<int32_T>(temp);
            iv1[0] = 10;
            iv1[1] = c_tmp_size[1];
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &pc_emlrtECI,
                                          &st);
            b_loop_ub = static_cast<int8_T>(12 - static_cast<int32_T>(temp));
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                out[((static_cast<int32_T>(temp) + i1) + 11 * b_i) - 1] =
                    d_tmp_data[i1 + c_tmp_size[1] * b_i];
              }
            }
            //  a faster way is to treat diagbonal cases vs dense cases
            //  differently. Q(temp_index, temp_index) =
            //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
            //  P(temp_index), alpha);
          }
          // update
          temp = d + 1.0;
        } else {
          real_T d1;
          d1 = proj_index_all[(i +
                               30 * ((static_cast<int32_T>(temp) + 10) % 11)) +
                              330];
          if (d1 == 1.0) {
            real_T b_tmp_data[121];
            int32_T b_loop_ub;
            int32_T c_loop_ub;
            int32_T i2;
            int32_T i3;
            int32_T i4;
            int32_T i5;
            if (temp > d) {
              b_i = 0;
              i1 = 0;
              i2 = 0;
              i3 = 0;
              i4 = 0;
              i5 = 0;
            } else {
              b_i = static_cast<int32_T>(temp) - 1;
              d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &mc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > 11)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                              &fe_emlrtBCI, &st);
              }
              i1 = static_cast<int32_T>(d);
              if ((static_cast<int32_T>(temp) < 1) ||
                  (static_cast<int32_T>(temp) > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                              loop_ub_tmp, &ge_emlrtBCI, &st);
              }
              i2 = static_cast<int32_T>(temp) - 1;
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                              loop_ub_tmp, &he_emlrtBCI, &st);
              }
              i3 = static_cast<int32_T>(d);
              if ((static_cast<int32_T>(temp) < 1) ||
                  (static_cast<int32_T>(temp) > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                              loop_ub, &ie_emlrtBCI, &st);
              }
              i4 = static_cast<int32_T>(temp) - 1;
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &oc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                              loop_ub, &je_emlrtBCI, &st);
              }
              i5 = static_cast<int32_T>(d);
            }
            b_loop_ub = i5 - i4;
            b_tmp_size[1] = b_loop_ub;
            c_loop_ub = i3 - i2;
            b_tmp_size[0] = c_loop_ub;
            for (i3 = 0; i3 < c_loop_ub; i3++) {
              for (i5 = 0; i5 < b_loop_ub; i5++) {
                b_tmp_data[i5 + b_loop_ub * i3] =
                    tmp_data[(i4 + i5) + loop_ub * (i2 + i3)];
              }
            }
            b_st.site = &te_emlrtRSI;
            tmp_size = coder::diag(b_st, b_tmp_data, b_tmp_size, c_tmp_data);
            b_loop_ub = i1 - b_i;
            if ((b_loop_ub != tmp_size) &&
                ((b_loop_ub != 1) && (tmp_size != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_loop_ub, tmp_size, &nc_emlrtECI,
                                          &st);
            }
            if (temp > d) {
              i2 = 0;
              i3 = 0;
            } else {
              i2 = static_cast<int32_T>(temp) - 1;
              if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
                emlrtIntegerCheckR2012b(d, &sc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > 11)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                              &tg_emlrtBCI, &st);
              }
              i3 = static_cast<int32_T>(d);
            }
            if (b_loop_ub == tmp_size) {
              c_tmp_size[1] = b_loop_ub;
              c_tmp_size[0] = 10;
              for (i1 = 0; i1 < 10; i1++) {
                for (i4 = 0; i4 < b_loop_ub; i4++) {
                  d_tmp_data[i4 + b_loop_ub * i1] =
                      A[(i + 29 * (b_i + i4)) + 319 * i1] * c_tmp_data[i4];
                }
              }
            } else {
              binary_expand_op_30(d_tmp_data, c_tmp_size, A, i, b_i, i1,
                                  c_tmp_data, tmp_size);
            }
            iv[0] = 10;
            b_i = i3 - i2;
            iv[1] = b_i;
            iv1[0] = 10;
            iv1[1] = c_tmp_size[1];
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &qc_emlrtECI,
                                          &st);
            b_loop_ub = static_cast<int8_T>(b_i);
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                out[(i2 + i1) + 11 * b_i] =
                    d_tmp_data[i1 + c_tmp_size[1] * b_i];
              }
            }
            //  to save computation.
          } else if ((d1 == 2.0) || (d1 == 3.0)) {
            real_T b_tmp_data[121];
            real_T A_data[110];
            int32_T b_loop_ub;
            int32_T b_loop_ub_tmp;
            int32_T c_loop_ub;
            int32_T i2;
            int32_T i3;
            int32_T i4;
            int32_T i5;
            if (temp > d) {
              b_i = 1;
              i1 = 0;
              i2 = 1;
              i3 = 0;
              i4 = 0;
              i5 = 0;
              b_loop_ub_tmp = 0;
              tmp_size = 0;
            } else {
              b_i = static_cast<int32_T>(temp);
              d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &pc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > 11)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                              &ke_emlrtBCI, &st);
              }
              i1 = static_cast<int32_T>(d);
              if ((static_cast<int32_T>(temp) < 1) ||
                  (static_cast<int32_T>(temp) > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                              loop_ub_tmp, &le_emlrtBCI, &st);
              }
              i2 = static_cast<int32_T>(temp);
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &qc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                              loop_ub_tmp, &me_emlrtBCI, &st);
              }
              i3 = static_cast<int32_T>(d);
              if ((static_cast<int32_T>(temp) < 1) ||
                  (static_cast<int32_T>(temp) > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                              loop_ub, &ne_emlrtBCI, &st);
              }
              i4 = static_cast<int32_T>(temp) - 1;
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &rc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                              loop_ub, &oe_emlrtBCI, &st);
              }
              i5 = static_cast<int32_T>(d);
              b_loop_ub_tmp = static_cast<int32_T>(temp) - 1;
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &tc_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d) < 1) ||
                  (static_cast<int32_T>(d) > 11)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                              &ug_emlrtBCI, &st);
              }
              tmp_size = static_cast<int32_T>(d);
            }
            b_st.site = &se_emlrtRSI;
            c_st.site = &w_emlrtRSI;
            b_loop_ub = i3 - i2;
            c_loop_ub = i1 - b_i;
            if (c_loop_ub != b_loop_ub) {
              if ((b_loop_ub + 1 == 1) && (i5 - i4 == 1)) {
                emlrtErrorWithMessageIdR2018a(
                    &c_st, &p_emlrtRTEI,
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(&c_st, &o_emlrtRTEI,
                                              "MATLAB:innerdim",
                                              "MATLAB:innerdim", 0);
              }
            }
            A_size[1] = c_loop_ub + 1;
            A_size[0] = 10;
            for (i1 = 0; i1 < 10; i1++) {
              for (i3 = 0; i3 <= c_loop_ub; i3++) {
                A_data[i3 + (c_loop_ub + 1) * i1] =
                    A[(i + 29 * ((b_i + i3) - 1)) + 319 * i1];
              }
            }
            c_loop_ub = i5 - i4;
            b_tmp_size[1] = c_loop_ub;
            b_tmp_size[0] = b_loop_ub + 1;
            for (b_i = 0; b_i <= b_loop_ub; b_i++) {
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                b_tmp_data[i1 + c_loop_ub * b_i] =
                    tmp_data[(i4 + i1) + loop_ub * ((i2 + b_i) - 1)];
              }
            }
            coder::internal::blas::mtimes(A_data, A_size, b_tmp_data,
                                          b_tmp_size, d_tmp_data, c_tmp_size);
            iv[0] = 10;
            b_i = tmp_size - b_loop_ub_tmp;
            iv[1] = b_i;
            iv1[0] = 10;
            iv1[1] = c_tmp_size[1];
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &rc_emlrtECI,
                                          &st);
            b_loop_ub = static_cast<int8_T>(b_i);
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                out[(b_loop_ub_tmp + i1) + 11 * b_i] =
                    d_tmp_data[i1 + c_tmp_size[1] * b_i];
              }
            }
            //  a faster way is to treat diagbonal cases vs dense cases
            //  differently.
          }
          // update
          temp = d + 1.0;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
        if (flag == 1) {
          exitg1 = true;
        }
      }
    }
    for (b_i = 0; b_i < 10; b_i++) {
      for (i1 = 0; i1 < 11; i1++) {
        A[(i + 29 * i1) + 319 * b_i] = out[i1 + 11 * b_i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_g_A_Q_D.cpp)
