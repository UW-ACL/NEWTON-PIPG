/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * expipg_dvec_v3.c
 *
 * Code generation for function 'expipg_dvec_v3'
 *
 */

/* Include files */
#include "expipg_dvec_v3.h"
#include "abs.h"
#include "dot.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "validate_print_arguments.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void expipg_dvec_v3(real_T x1[1616], real_T u1[800], real_T w1[1600],
                    real_T x2[1616], real_T u2[800], real_T w2[1600],
                    real_T x3[1616], real_T u3[800], real_T w3[1600],
                    real_T err_p1, real_T err_d1, real_T err_d2, real_T lam,
                    real_T omg, real_T rho, real_T k_test, real_T k_max,
                    real_T *exit_flag, real_T eps_feas, real_T eps_infeas,
                    real_T N, const real_T Q[256], const real_T R[64],
                    const real_T A[256], const real_T AT[256],
                    const real_T B[128], const real_T BT[128],
                    const real_T x_0[16], const real_T x_N[16], real_T x_min,
                    real_T x_max, real_T u_min, real_T u_max)
{
  real_T varargin_1[1600];
  real_T a_tmp[256];
  real_T b_BT[128];
  real_T maxval[100];
  real_T varargin_2[16];
  real_T z1[16];
  real_T b_z1[8];
  real_T validatedHoleFilling[3];
  real_T alf;
  real_T bet;
  real_T d;
  real_T d1;
  real_T ex;
  real_T sig1;
  real_T sig2;
  int32_T b_k;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T k;
  int32_T t;
  boolean_T exitg1;
  /*                                           % Main solution variables */
  /*             % Auxiliary variables */
  /*                 % Algorithm parameters */
  /*                                % Algorithm tolerances */
  /* { */
  /* 05/02/2022 */
  /* Purnanand Elango */
  /*  */
  /* Solve the following trajectory optimization problem via exPIPG: */
  /*      minimize   x_N^T Q x_N + \sum_{t=0}^{N-1} x_t^T Q x_t + u_t^T R u_t */
  /*     subject to  x_{t+1} = A x_t + B u_t, t = 0,...,N-1, */
  /*                 u_min <= u_t <= u_max,   t = 0,...,N-1, */
  /*                 x_min <= x_t <= x_max,   t = 1,...,N-1, */
  /*                 x_0 = z_0, x_N = z_N. */
  /*  */
  /* Feasibility detection: new test developed by Yue Yu on 06/13/2022 */
  /* Infeasibility detection: new test developed by Yue Yu on 04/30/2022 */
  /* See docs/docs.md for details */
  /*  */
  /* Output: */
  /*     exit_flag: */
  /*        -1 - Maximum iterations reached; no conclusion */
  /*         0 - Primal Infeasible */
  /*         1 - Primal Dual Feasible (Solved) */
  /*  */
  /* } */
  tic();
  /*     %% Power iteration for estimating the spectral norm of H^T H */
  sig1 = 100.1;
  for (i = 0; i < 256; i++) {
    a_tmp[i] = -AT[i];
  }
  for (i = 0; i < 128; i++) {
    b_BT[i] = -BT[i];
  }
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    sig2 = sig1;
    i = (int32_T)N;
    for (t = 0; t < i; t++) {
      for (i1 = 0; i1 < 16; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 16; i2++) {
          d += x1[t + 101 * i2] * A[i2 + (i1 << 4)];
        }
        d1 = 0.0;
        for (i2 = 0; i2 < 8; i2++) {
          d1 += u1[t + 100 * i2] * B[i2 + (i1 << 3)];
        }
        w1[t + 100 * i1] = (x1[(t + 101 * i1) + 1] - d) - d1;
      }
    }
    for (i1 = 0; i1 < 16; i1++) {
      d = 0.0;
      for (i2 = 0; i2 < 16; i2++) {
        d += w1[100 * i2] * a_tmp[i2 + (i1 << 4)];
      }
      x1[101 * i1] = d;
    }
    for (i1 = 0; i1 < 8; i1++) {
      d = 0.0;
      for (i2 = 0; i2 < 16; i2++) {
        d += w1[100 * i2] * b_BT[i2 + (i1 << 4)];
      }
      u1[100 * i1] = d;
    }
    i1 = (int32_T)(N - 1.0);
    for (t = 0; t < i1; t++) {
      for (i2 = 0; i2 < 16; i2++) {
        d = 0.0;
        for (b_k = 0; b_k < 16; b_k++) {
          d += w1[(t + 100 * b_k) + 1] * AT[b_k + (i2 << 4)];
        }
        x1[(t + 101 * i2) + 1] = w1[t + 100 * i2] - d;
      }
      for (i2 = 0; i2 < 8; i2++) {
        d = 0.0;
        for (b_k = 0; b_k < 16; b_k++) {
          d += w1[(t + 100 * b_k) + 1] * b_BT[b_k + (i2 << 4)];
        }
        u1[(t + 100 * i2) + 1] = d;
      }
    }
    for (i1 = 0; i1 < 16; i1++) {
      x1[(int32_T)N + 101 * i1] = w1[((int32_T)N + 100 * i1) - 1];
    }
    /*  Compact syntax for norm of primal vector: sig1 = norm([x1(:);u1(:)]); */
    sig1 = 0.0;
    for (t = 0; t < i; t++) {
      real_T b_varargin_2[8];
      for (i1 = 0; i1 < 16; i1++) {
        ex = x1[t + 101 * i1];
        varargin_2[i1] = ex;
        z1[i1] = ex;
      }
      for (i1 = 0; i1 < 8; i1++) {
        ex = u1[t + 100 * i1];
        b_varargin_2[i1] = ex;
        b_z1[i1] = ex;
      }
      sig1 = (sig1 + dot(varargin_2, z1)) + b_dot(b_varargin_2, b_z1);
    }
    for (i = 0; i < 16; i++) {
      ex = x1[(int32_T)N + 101 * i];
      varargin_2[i] = ex;
      z1[i] = ex;
    }
    sig1 += dot(varargin_2, z1);
    sig1 = muDoubleScalarSqrt(sig1);
    for (i = 0; i < 1616; i++) {
      x1[i] /= sig1;
    }
    for (i = 0; i < 800; i++) {
      u1[i] /= sig1;
    }
  }
  /*  Buffer the estimated spectral norm */
  sig1 *= 1.1;
  /*     %% exPIPG */
  /*  Compute step sizes */
  alf = 2.0 / (muDoubleScalarSqrt(lam * lam + 4.0 * omg * sig1) + lam);
  bet = omg * alf;
  /*  Initialization */
  memcpy(&x1[0], &x2[0], 1616U * sizeof(real_T));
  memcpy(&u1[0], &u2[0], 800U * sizeof(real_T));
  memcpy(&w1[0], &w2[0], 1600U * sizeof(real_T));
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= (int32_T)k_max - 1)) {
    /*  Run algorithm for at most k_max iterations  */
    /*  Copy previous iterates */
    memcpy(&x2[0], &x1[0], 1616U * sizeof(real_T));
    memcpy(&u2[0], &u1[0], 800U * sizeof(real_T));
    memcpy(&w2[0], &w1[0], 1600U * sizeof(real_T));
    /*  Projected gradient with proportional-integral feedback of conic
     * constraint affine term */
    for (i = 0; i < 16; i++) {
      x1[101 * i] = x_0[i];
    }
    /*  Projection on singleton set */
    for (b_k = 0; b_k < 8; b_k++) {
      d = 0.0;
      for (i = 0; i < 8; i++) {
        d += u3[100 * i] * R[i + (b_k << 3)];
      }
      d1 = 0.0;
      for (i = 0; i < 16; i++) {
        d1 += w3[100 * i] * BT[i + (b_k << 4)];
      }
      u1[100 * b_k] = muDoubleScalarMax(
          u_min, muDoubleScalarMin(u_max, u3[100 * b_k] - alf * (d - d1)));
    }
    /*  Projection on box */
    i = (int32_T)(N - 1.0);
    for (t = 0; t < i; t++) {
      for (b_k = 0; b_k < 16; b_k++) {
        d = 0.0;
        d1 = 0.0;
        for (i1 = 0; i1 < 16; i1++) {
          i2 = i1 + (b_k << 4);
          d += x3[(t + 101 * i1) + 1] * Q[i2];
          d1 += w3[(t + 100 * i1) + 1] * AT[i2];
        }
        i1 = (t + 101 * b_k) + 1;
        x1[i1] = muDoubleScalarMax(
            x_min, muDoubleScalarMin(
                       x_max, x3[i1] - alf * ((d + w3[t + 100 * b_k]) - d1)));
      }
      /*  Projection on box */
      for (b_k = 0; b_k < 8; b_k++) {
        d = 0.0;
        for (i1 = 0; i1 < 8; i1++) {
          d += u3[(t + 100 * i1) + 1] * R[i1 + (b_k << 3)];
        }
        d1 = 0.0;
        for (i1 = 0; i1 < 16; i1++) {
          d1 += w3[(t + 100 * i1) + 1] * BT[i1 + (b_k << 4)];
        }
        i1 = (t + 100 * b_k) + 1;
        u1[i1] = muDoubleScalarMax(
            u_min, muDoubleScalarMin(u_max, u3[i1] - alf * (d - d1)));
      }
      /*  Projection on box */
    }
    for (i1 = 0; i1 < 16; i1++) {
      x1[((int32_T)(N + 1.0) + 101 * i1) - 1] = x_N[i1];
    }
    /*  Projection on singleton set */
    i1 = (int32_T)N;
    for (t = 0; t < i1; t++) {
      for (i2 = 0; i2 < 16; i2++) {
        d = 0.0;
        d1 = 0.0;
        for (b_k = 0; b_k < 16; b_k++) {
          sig1 = A[b_k + (i2 << 4)];
          idx = t + 101 * b_k;
          d += x1[idx] * (2.0 * sig1);
          d1 += x3[idx] * sig1;
        }
        sig1 = 0.0;
        ex = 0.0;
        for (b_k = 0; b_k < 8; b_k++) {
          sig2 = B[b_k + (i2 << 3)];
          idx = t + 100 * b_k;
          sig1 += u1[idx] * (2.0 * sig2);
          ex += u3[idx] * sig2;
        }
        b_k = (t + 101 * i2) + 1;
        idx = t + 100 * i2;
        w1[idx] = w3[idx] +
                  bet * (((((2.0 * x1[b_k] - x3[b_k]) - d) + d1) - sig1) + ex);
      }
    }
    /*  Extrapolation */
    for (i1 = 0; i1 < 1616; i1++) {
      x3[i1] = (1.0 - rho) * x3[i1] + rho * x1[i1];
    }
    for (i1 = 0; i1 < 800; i1++) {
      u3[i1] = (1.0 - rho) * u3[i1] + rho * u1[i1];
    }
    for (i1 = 0; i1 < 1600; i1++) {
      w3[i1] = (1.0 - rho) * w3[i1] + rho * w1[i1];
    }
    if (muDoubleScalarRem((real_T)k + 1.0, k_test) == 0.0) {
      real_T b_w2[1600];
      real_T b_a_tmp[64];
      real_T b_ex;
      boolean_T exitg2;
      /*  Test stopping criteria only every k_test iterations */
      /*  err_p1 = max(max(abs(x2-x3))); */
      /*  err_p1 = max(err_p1,max(max(abs(u2-u3)))); */
      for (i1 = 0; i1 < 1600; i1++) {
        b_w2[i1] = w2[i1] - w3[i1];
      }
      b_abs(b_w2, varargin_1);
      memcpy(&maxval[0], &varargin_1[0], 100U * sizeof(real_T));
      for (idx = 0; idx < 15; idx++) {
        for (b_k = 0; b_k < 100; b_k++) {
          boolean_T p;
          d = varargin_1[b_k + 100 * (idx + 1)];
          sig1 = maxval[b_k];
          if (muDoubleScalarIsNaN(d)) {
            p = false;
          } else if (muDoubleScalarIsNaN(sig1)) {
            p = true;
          } else {
            p = (sig1 < d);
          }
          if (p) {
            maxval[b_k] = d;
          }
        }
      }
      if (!muDoubleScalarIsNaN(maxval[0])) {
        idx = 1;
      } else {
        idx = 0;
        b_k = 2;
        exitg2 = false;
        while ((!exitg2) && (b_k < 101)) {
          if (!muDoubleScalarIsNaN(maxval[b_k - 1])) {
            idx = b_k;
            exitg2 = true;
          } else {
            b_k++;
          }
        }
      }
      if (idx == 0) {
        err_d1 = maxval[0];
      } else {
        err_d1 = maxval[idx - 1];
        i1 = idx + 1;
        for (b_k = i1; b_k < 101; b_k++) {
          d = maxval[b_k - 1];
          if (err_d1 < d) {
            err_d1 = d;
          }
        }
      }
      /*  Feasibility certificate     */
      for (i1 = 0; i1 < 256; i1++) {
        a_tmp[i1] = -Q[i1];
      }
      for (i1 = 0; i1 < 16; i1++) {
        d = 0.0;
        d1 = 0.0;
        for (i2 = 0; i2 < 16; i2++) {
          b_k = i2 + (i1 << 4);
          d += x1[101 * i2] * a_tmp[b_k];
          d1 += w1[100 * i2] * AT[b_k];
        }
        x2[101 * i1] = d + d1;
      }
      for (i1 = 0; i1 < 64; i1++) {
        b_a_tmp[i1] = -R[i1];
      }
      for (i1 = 0; i1 < 8; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 8; i2++) {
          d += u1[100 * i2] * b_a_tmp[i2 + (i1 << 3)];
        }
        d1 = 0.0;
        for (i2 = 0; i2 < 16; i2++) {
          d1 += w1[100 * i2] * BT[i2 + (i1 << 4)];
        }
        u2[100 * i1] = d + d1;
      }
      for (t = 0; t < i; t++) {
        for (i1 = 0; i1 < 16; i1++) {
          d = 0.0;
          d1 = 0.0;
          for (i2 = 0; i2 < 16; i2++) {
            b_k = i2 + (i1 << 4);
            d += x1[(t + 101 * i2) + 1] * a_tmp[b_k];
            d1 += w1[(t + 100 * i2) + 1] * AT[b_k];
          }
          x2[(t + 101 * i1) + 1] = (d - w1[t + 100 * i1]) + d1;
        }
        for (i1 = 0; i1 < 8; i1++) {
          d = 0.0;
          for (i2 = 0; i2 < 8; i2++) {
            d += u1[(t + 100 * i2) + 1] * b_a_tmp[i2 + (i1 << 3)];
          }
          d1 = 0.0;
          for (i2 = 0; i2 < 16; i2++) {
            d1 += w1[(t + 100 * i2) + 1] * BT[i2 + (i1 << 4)];
          }
          u2[(t + 100 * i1) + 1] = d + d1;
        }
      }
      for (b_k = 0; b_k < 16; b_k++) {
        d = 0.0;
        for (i = 0; i < 16; i++) {
          d += x1[(int32_T)N + 101 * i] * a_tmp[i + (b_k << 4)];
        }
        x2[(int32_T)N + 101 * b_k] = d - w1[((int32_T)N + 100 * b_k) - 1];
        d = x_0[b_k] - x1[101 * b_k];
        varargin_2[b_k] = d;
        z1[b_k] = d * muDoubleScalarMax(x2[101 * b_k], 0.0);
      }
      if (!muDoubleScalarIsNaN(z1[0])) {
        idx = 1;
      } else {
        idx = 0;
        b_k = 2;
        exitg2 = false;
        while ((!exitg2) && (b_k < 17)) {
          if (!muDoubleScalarIsNaN(z1[b_k - 1])) {
            idx = b_k;
            exitg2 = true;
          } else {
            b_k++;
          }
        }
      }
      if (idx == 0) {
        sig1 = z1[0];
      } else {
        sig1 = z1[idx - 1];
        i = idx + 1;
        for (b_k = i; b_k < 17; b_k++) {
          d = z1[b_k - 1];
          if (sig1 < d) {
            sig1 = d;
          }
        }
      }
      for (b_k = 0; b_k < 16; b_k++) {
        varargin_2[b_k] *= muDoubleScalarMin(x2[101 * b_k], 0.0);
      }
      if (!muDoubleScalarIsNaN(varargin_2[0])) {
        idx = 1;
      } else {
        idx = 0;
        b_k = 2;
        exitg2 = false;
        while ((!exitg2) && (b_k < 17)) {
          if (!muDoubleScalarIsNaN(varargin_2[b_k - 1])) {
            idx = b_k;
            exitg2 = true;
          } else {
            b_k++;
          }
        }
      }
      if (idx == 0) {
        ex = varargin_2[0];
      } else {
        ex = varargin_2[idx - 1];
        i = idx + 1;
        for (b_k = i; b_k < 17; b_k++) {
          d = varargin_2[b_k - 1];
          if (ex < d) {
            ex = d;
          }
        }
      }
      for (b_k = 0; b_k < 8; b_k++) {
        b_z1[b_k] =
            (u_max - u1[100 * b_k]) * muDoubleScalarMax(u2[100 * b_k], 0.0);
      }
      if (!muDoubleScalarIsNaN(b_z1[0])) {
        idx = 1;
      } else {
        idx = 0;
        b_k = 2;
        exitg2 = false;
        while ((!exitg2) && (b_k < 9)) {
          if (!muDoubleScalarIsNaN(b_z1[b_k - 1])) {
            idx = b_k;
            exitg2 = true;
          } else {
            b_k++;
          }
        }
      }
      if (idx == 0) {
        sig2 = b_z1[0];
      } else {
        sig2 = b_z1[idx - 1];
        i = idx + 1;
        for (b_k = i; b_k < 9; b_k++) {
          d = b_z1[b_k - 1];
          if (sig2 < d) {
            sig2 = d;
          }
        }
      }
      for (b_k = 0; b_k < 8; b_k++) {
        b_z1[b_k] =
            (u_min - u1[100 * b_k]) * muDoubleScalarMin(u2[100 * b_k], 0.0);
      }
      if (!muDoubleScalarIsNaN(b_z1[0])) {
        idx = 1;
      } else {
        idx = 0;
        b_k = 2;
        exitg2 = false;
        while ((!exitg2) && (b_k < 9)) {
          if (!muDoubleScalarIsNaN(b_z1[b_k - 1])) {
            idx = b_k;
            exitg2 = true;
          } else {
            b_k++;
          }
        }
      }
      if (idx == 0) {
        b_ex = b_z1[0];
      } else {
        b_ex = b_z1[idx - 1];
        i = idx + 1;
        for (b_k = i; b_k < 9; b_k++) {
          d = b_z1[b_k - 1];
          if (b_ex < d) {
            b_ex = d;
          }
        }
      }
      for (i = 0; i < 16; i++) {
        d = 0.0;
        for (i1 = 0; i1 < 16; i1++) {
          d += x1[101 * i1] * A[i1 + (i << 4)];
        }
        d1 = 0.0;
        for (i1 = 0; i1 < 8; i1++) {
          d1 += u1[100 * i1] * B[i1 + (i << 3)];
        }
        varargin_2[i] = (x1[101 * i + 1] - d) - d1;
      }
      err_p1 = muDoubleScalarMax(
          muDoubleScalarMax(
              muDoubleScalarMax(
                  muDoubleScalarMax(muDoubleScalarMax(0.0, sig1), ex), sig2),
              b_ex),
          b_norm(varargin_2));
      i = (int32_T)N;
      for (t = 0; t <= i - 2; t++) {
        for (b_k = 0; b_k < 16; b_k++) {
          idx = (t + 101 * b_k) + 1;
          z1[b_k] = (x_max - x1[idx]) * muDoubleScalarMax(x2[idx], 0.0);
        }
        if (!muDoubleScalarIsNaN(z1[0])) {
          idx = 1;
        } else {
          idx = 0;
          b_k = 2;
          exitg2 = false;
          while ((!exitg2) && (b_k < 17)) {
            if (!muDoubleScalarIsNaN(z1[b_k - 1])) {
              idx = b_k;
              exitg2 = true;
            } else {
              b_k++;
            }
          }
        }
        if (idx == 0) {
          sig1 = z1[0];
        } else {
          sig1 = z1[idx - 1];
          i1 = idx + 1;
          for (b_k = i1; b_k < 17; b_k++) {
            d = z1[b_k - 1];
            if (sig1 < d) {
              sig1 = d;
            }
          }
        }
        for (b_k = 0; b_k < 16; b_k++) {
          idx = (t + 101 * b_k) + 1;
          z1[b_k] = (x_min - x1[idx]) * muDoubleScalarMin(x2[idx], 0.0);
        }
        if (!muDoubleScalarIsNaN(z1[0])) {
          idx = 1;
        } else {
          idx = 0;
          b_k = 2;
          exitg2 = false;
          while ((!exitg2) && (b_k < 17)) {
            if (!muDoubleScalarIsNaN(z1[b_k - 1])) {
              idx = b_k;
              exitg2 = true;
            } else {
              b_k++;
            }
          }
        }
        if (idx == 0) {
          ex = z1[0];
        } else {
          ex = z1[idx - 1];
          i1 = idx + 1;
          for (b_k = i1; b_k < 17; b_k++) {
            d = z1[b_k - 1];
            if (ex < d) {
              ex = d;
            }
          }
        }
        for (b_k = 0; b_k < 8; b_k++) {
          idx = (t + 100 * b_k) + 1;
          b_z1[b_k] = (u_max - u1[idx]) * muDoubleScalarMax(u2[idx], 0.0);
        }
        if (!muDoubleScalarIsNaN(b_z1[0])) {
          idx = 1;
        } else {
          idx = 0;
          b_k = 2;
          exitg2 = false;
          while ((!exitg2) && (b_k < 9)) {
            if (!muDoubleScalarIsNaN(b_z1[b_k - 1])) {
              idx = b_k;
              exitg2 = true;
            } else {
              b_k++;
            }
          }
        }
        if (idx == 0) {
          sig2 = b_z1[0];
        } else {
          sig2 = b_z1[idx - 1];
          i1 = idx + 1;
          for (b_k = i1; b_k < 9; b_k++) {
            d = b_z1[b_k - 1];
            if (sig2 < d) {
              sig2 = d;
            }
          }
        }
        for (b_k = 0; b_k < 8; b_k++) {
          idx = (t + 100 * b_k) + 1;
          b_z1[b_k] = (u_min - u1[idx]) * muDoubleScalarMin(u2[idx], 0.0);
        }
        if (!muDoubleScalarIsNaN(b_z1[0])) {
          idx = 1;
        } else {
          idx = 0;
          b_k = 2;
          exitg2 = false;
          while ((!exitg2) && (b_k < 9)) {
            if (!muDoubleScalarIsNaN(b_z1[b_k - 1])) {
              idx = b_k;
              exitg2 = true;
            } else {
              b_k++;
            }
          }
        }
        if (idx == 0) {
          b_ex = b_z1[0];
        } else {
          b_ex = b_z1[idx - 1];
          i1 = idx + 1;
          for (b_k = i1; b_k < 9; b_k++) {
            d = b_z1[b_k - 1];
            if (b_ex < d) {
              b_ex = d;
            }
          }
        }
        for (i1 = 0; i1 < 16; i1++) {
          d = 0.0;
          for (i2 = 0; i2 < 16; i2++) {
            d += x1[(t + 101 * i2) + 1] * A[i2 + (i1 << 4)];
          }
          d1 = 0.0;
          for (i2 = 0; i2 < 8; i2++) {
            d1 += u1[(t + 100 * i2) + 1] * B[i2 + (i1 << 3)];
          }
          varargin_2[i1] = (x1[(t + 101 * i1) + 2] - d) - d1;
        }
        err_p1 = muDoubleScalarMax(
            muDoubleScalarMax(
                muDoubleScalarMax(
                    muDoubleScalarMax(muDoubleScalarMax(err_p1, sig1), ex),
                    sig2),
                b_ex),
            b_norm(varargin_2));
      }
      for (b_k = 0; b_k < 16; b_k++) {
        i = (int32_T)N + 101 * b_k;
        d = x_N[b_k] - x1[i];
        varargin_2[b_k] = d;
        z1[b_k] = d * muDoubleScalarMax(x2[i], 0.0);
      }
      if (!muDoubleScalarIsNaN(z1[0])) {
        idx = 1;
      } else {
        idx = 0;
        b_k = 2;
        exitg2 = false;
        while ((!exitg2) && (b_k < 17)) {
          if (!muDoubleScalarIsNaN(z1[b_k - 1])) {
            idx = b_k;
            exitg2 = true;
          } else {
            b_k++;
          }
        }
      }
      if (idx == 0) {
        sig1 = z1[0];
      } else {
        sig1 = z1[idx - 1];
        i = idx + 1;
        for (b_k = i; b_k < 17; b_k++) {
          d = z1[b_k - 1];
          if (sig1 < d) {
            sig1 = d;
          }
        }
      }
      for (b_k = 0; b_k < 16; b_k++) {
        varargin_2[b_k] *= muDoubleScalarMin(x2[(int32_T)N + 101 * b_k], 0.0);
      }
      if (!muDoubleScalarIsNaN(varargin_2[0])) {
        idx = 1;
      } else {
        idx = 0;
        b_k = 2;
        exitg2 = false;
        while ((!exitg2) && (b_k < 17)) {
          if (!muDoubleScalarIsNaN(varargin_2[b_k - 1])) {
            idx = b_k;
            exitg2 = true;
          } else {
            b_k++;
          }
        }
      }
      if (idx == 0) {
        ex = varargin_2[0];
      } else {
        ex = varargin_2[idx - 1];
        i = idx + 1;
        for (b_k = i; b_k < 17; b_k++) {
          d = varargin_2[b_k - 1];
          if (ex < d) {
            ex = d;
          }
        }
      }
      err_p1 = muDoubleScalarMax(muDoubleScalarMax(err_p1, sig1), ex);
      /*  Infeasibility certificate     */
      for (i = 0; i < 1600; i++) {
        w2[i] = w3[i] - w2[i];
      }
      for (i = 0; i < 16; i++) {
        x2[101 * i] = x_0[i];
      }
      for (i = 0; i < 128; i++) {
        b_BT[i] = -BT[i];
      }
      for (i = 0; i < 8; i++) {
        d = 0.0;
        for (i1 = 0; i1 < 16; i1++) {
          d += w2[100 * i1] * b_BT[i1 + (i << 4)];
        }
        u2[100 * i] = (real_T)(d >= 0.0) * u_min + (real_T)(d < 0.0) * u_max;
      }
      i = (int32_T)N;
      if ((int32_T)N - 2 >= 0) {
        for (i1 = 0; i1 < 128; i1++) {
          b_BT[i1] = -BT[i1];
        }
      }
      for (t = 0; t <= i - 2; t++) {
        for (i1 = 0; i1 < 16; i1++) {
          d = 0.0;
          for (i2 = 0; i2 < 16; i2++) {
            d += w2[(t + 100 * i2) + 1] * AT[i2 + (i1 << 4)];
          }
          d = w2[t + 100 * i1] - d;
          x2[(t + 101 * i1) + 1] =
              (real_T)(d >= 0.0) * x_min + (real_T)(d < 0.0) * x_max;
        }
        for (i1 = 0; i1 < 8; i1++) {
          d = 0.0;
          for (i2 = 0; i2 < 16; i2++) {
            d += w2[(t + 100 * i2) + 1] * b_BT[i2 + (i1 << 4)];
          }
          u2[(t + 100 * i1) + 1] =
              (real_T)(d >= 0.0) * u_min + (real_T)(d < 0.0) * u_max;
        }
      }
      for (i = 0; i < 16; i++) {
        x2[(int32_T)N + 101 * i] = x_N[i];
      }
      err_d2 = 0.0;
      i = (int32_T)N;
      for (t = 0; t < i; t++) {
        for (i1 = 0; i1 < 16; i1++) {
          d = 0.0;
          for (i2 = 0; i2 < 16; i2++) {
            d += x2[t + 101 * i2] * A[i2 + (i1 << 4)];
          }
          d1 = 0.0;
          for (i2 = 0; i2 < 8; i2++) {
            d1 += u2[t + 100 * i2] * B[i2 + (i1 << 3)];
          }
          varargin_2[i1] = w2[t + 100 * i1];
          z1[i1] = (x2[(t + 101 * i1) + 1] - d) - d1;
        }
        err_d2 += dot(varargin_2, z1);
      }
      /*  Test for primal dual feasibility */
      if (err_p1 <= eps_feas) {
        mexPrintf("\nexPIPG DVEC converged in %.0f iterations: PRIMAL DUAL "
                  "FEASIBLE\n",
                  (real_T)k + 1.0);
        *exit_flag = 1.0;
        exitg1 = true;
      } else if (err_d2 >= -eps_infeas) {
        mexPrintf(
            "\nexPIPG DVEC converged in %.0f iterations: PRIMAL INFEASIBLE\n",
            (real_T)k + 1.0);
        *exit_flag = 0.0;
        /*  Primal Infeasible */
        exitg1 = true;
      } else {
        k++;
      }
    } else {
      k++;
    }
  }
  sig1 = toc() * 1000.0;
  if (*exit_flag == -1.0) {
    mexPrintf("\nexPIPG DVEC did not converge in %.0f iterations: MAX "
              "ITERATIONS REACHED\n",
              k_max);
  }
  mexPrintf("Solve time   : %5.1f ms\n", sig1);
  validate_print_arguments(err_p1, err_d1, err_d2, validatedHoleFilling);
  mexPrintf(
      "Feas. cert.  : %9.2e\nDual error   : %9.2e\nInfeas. cert.: %9.2e\n",
      validatedHoleFilling[0], validatedHoleFilling[1],
      validatedHoleFilling[2]);
}

/* End of code generation (expipg_dvec_v3.c) */
