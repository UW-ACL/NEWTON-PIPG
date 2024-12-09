//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipgupdate.cpp
//
// Code generation for function 'dev_newtonpipgupdate'
//

// Include files
#include "dev_newtonpipgupdate.h"
#include "chol.h"
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "dev_newtonpipg_pcg_data.h"
#include "dev_newtonpipg_pcg_types.h"
#include "dev_solve_LTv.h"
#include "dev_solve_Lv.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo jb_emlrtRSI{
    8,                      // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    12,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    14,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    19,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    28,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    29,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo fc_emlrtRSI{
    12,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo gc_emlrtRSI{
    27,                     // lineNo
    "dev_cholesky_special", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pathName
};

static emlrtRSInfo hc_emlrtRSI{
    15,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    22,                     // lineNo
    5,                      // colNo
    "dev_newtonpipgupdate", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pName
};

static emlrtECInfo i_emlrtECI{
    -1,                     // nDims
    12,                     // lineNo
    2,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pName
};

static emlrtECInfo j_emlrtECI{
    -1,                     // nDims
    31,                     // lineNo
    5,                      // colNo
    "dev_cholesky_special", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_cholesky_special.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    16,     // lineNo
    5,      // colNo
    "chol", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m" // pName
};

static emlrtRSInfo fd_emlrtRSI{
    22,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_newtonpipgupdate.m" // pathName
};

// Function Declarations
static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

// Function Definitions
static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, nullptr, 1, &pArray, "disp", true,
                        location);
}

void b_dev_newtonpipgupdate(dev_newtonpipg_pcgStackData *SD,
                            const emlrtStack *sp, const real_T A[256],
                            const real_T B[128], const real_T At[256],
                            const real_T Bt[128], const coder::sparse *P_diag,
                            const real_T Id[496], real_T R[816], real_T alpha,
                            real_T beta, real_T rho, real_T *flag,
                            real_T L[10240])
{
  static const int32_T iv2[2]{1, 61};
  static const char_T u[61]{
      'T', 'h', 'e', ' ', 'n', 'e', 'w', 't', 'o', 'n', ' ', 's', 't',
      'e', 'p', ' ', 'i', 's', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a',
      't', 'e', 'd', ' ', 'a', 's', ' ', 'w', 'e', ' ', 'h', 'a', 'v',
      'e', ' ', 'a', ' ', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', ' ',
      'j', 'a', 'c', 'o', 'b', 'i', 'a', 'n', '.'};
  coder::sparse r;
  coder::sparse r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T HPA[5120];
  real_T HPB[2560];
  real_T A_inv[496];
  real_T A_invRx[496];
  real_T b_P_diag[496];
  real_T c_P_diag[480];
  real_T d_P_diag[480];
  real_T b[320];
  real_T dw[320];
  real_T C[256];
  real_T b_A[256];
  real_T b_C[256];
  real_T c_B[256];
  real_T b_B[128];
  real_T a;
  real_T b_alpha;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T HPA_tmp;
  int32_T b_i;
  int32_T i;
  int32_T k;
  int32_T t;
  boolean_T jd[496];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  R = pipg(z,w) - (z,w)
  //  P must be a vector
  //  L:
  for (i = 0; i < 816; i++) {
    R[i] /= rho;
  }
  for (b_i = 0; b_i < 496; b_i++) {
    jd[b_i] = (Id[b_i] == 0.0);
  }
  st.site = &jb_emlrtRSI;
  P_diag->b_times(&st, jd, &r);
  st.site = &jb_emlrtRSI;
  r.times(&st, alpha, &r1);
  for (i = 0; i < 496; i++) {
    A_invRx[i] = 1.0 - static_cast<real_T>(jd[i]);
  }
  r1.b_plus(A_invRx, A_inv);
  for (i = 0; i < 496; i++) {
    A_inv[i] = 1.0 / A_inv[i];
  }
  // vector%%may be deleta diag(P)
  a = 2.0 * beta;
  st.site = &kb_emlrtRSI;
  dev_HZ(&st, A, B, &R[0], b);
  for (b_i = 0; b_i < 496; b_i++) {
    A_invRx[b_i] = A_inv[b_i] * R[b_i];
  }
  st.site = &lb_emlrtRSI;
  dev_HZ(&st, A, B, A_invRx, dw);
  for (b_i = 0; b_i < 496; b_i++) {
    b_P_diag[b_i] = A_inv[b_i] * static_cast<real_T>(jd[b_i]);
  }
  //  we assume that H is [-A, -B, I] if not, change the sign of A and B
  //  the out matrix is a 4 dimensional matrix. t is for the t th row
  //  the third index is for the location. 1 for diag and 2 for off-diag
  for (i = 0; i < 256; i++) {
    b_A[i] = -A[i];
  }
  // we use -A
  for (i = 0; i < 128; i++) {
    b_B[i] = -B[i];
  }
  // we use -B
  // T rows in totald
  // P will have the following shape(Pa, Pb.....Pa, pb, pa)
  //  Check if T is an integer
  std::copy(&b_P_diag[0], &b_P_diag[480], &c_P_diag[0]);
  for (i = 0; i < 24; i++) {
    for (HPA_tmp = 0; HPA_tmp < 20; HPA_tmp++) {
      d_P_diag[HPA_tmp + 20 * i] = c_P_diag[i + 24 * HPA_tmp];
    }
  }
  //  I want to make sure that each row is the consequtive vector.
  // disp(P)
  for (t = 0; t < 20; t++) {
    //  Get the size of the matrices
    //  Set default value for axis if missing
    //  Initialize the resulting matrix C
    //  Calculate the product based on the value of axis
    //  Check if P and A are compatible for multiplication
    //  Calculate the product of the matrix A and the diagonal matrix P
    for (b_i = 0; b_i < 16; b_i++) {
      for (int32_T j{0}; j < 16; j++) {
        HPA_tmp = b_i + (j << 4);
        HPA[HPA_tmp + (t << 8)] = b_A[HPA_tmp] * d_P_diag[t + 20 * j];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    //  A *P
    //  Get the size of the matrices
    //  Set default value for axis if missing
    //  Initialize the resulting matrix C
    //  Calculate the product based on the value of axis
    //  Check if P and A are compatible for multiplication
    //  Calculate the product of the matrix A and the diagonal matrix P
    for (b_i = 0; b_i < 16; b_i++) {
      for (int32_T j{0}; j < 8; j++) {
        HPA_tmp = b_i + (j << 4);
        HPB[HPA_tmp + (t << 7)] = b_B[HPA_tmp] * d_P_diag[t + 20 * (j + 16)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    // B* p
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  std::memset(&SD->f0.left[0], 0, 10240U * sizeof(real_T));
  for (t = 0; t < 20; t++) {
    if (t + 1 < 20) {
      real_T d_B[128];
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 16; HPA_tmp++) {
          c_B[HPA_tmp + (i << 4)] = b_A[i + (HPA_tmp << 4)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (b_i = 0; b_i < 16; b_i++) {
        for (int32_T j{0}; j <= b_i; j++) {
          i = j << 4;
          HPA_tmp = b_i + i;
          b_alpha = C[HPA_tmp];
          for (k = 0; k < 16; k++) {
            b_alpha += HPA[(b_i + (k << 4)) + (t << 8)] * c_B[k + i];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          C[HPA_tmp] = b_alpha;
          //  Use the computed value for the symmetric element
          C[j + (b_i << 4)] = C[HPA_tmp];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 8; HPA_tmp++) {
          d_B[HPA_tmp + (i << 3)] = b_B[i + (HPA_tmp << 4)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&b_C[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (b_i = 0; b_i < 16; b_i++) {
        for (int32_T j{0}; j <= b_i; j++) {
          i = b_i + (j << 4);
          b_alpha = b_C[i];
          for (k = 0; k < 8; k++) {
            b_alpha += HPB[(b_i + (k << 4)) + (t << 7)] * d_B[k + (j << 3)];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          b_C[i] = b_alpha;
          //  Use the computed value for the symmetric element
          b_C[j + (b_i << 4)] = b_C[i];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 256; i++) {
        SD->f0.left[i + t * 512] = C[i] + b_C[i];
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      //  Calculate the product of the diagonal matrix P and matrix A
      for (b_i = 0; b_i < 16; b_i++) {
        HPA_tmp = (b_i + (b_i << 4)) + (t << 9);
        SD->f0.left[HPA_tmp] += d_P_diag[(t + 20 * b_i) + 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      // didn't use symmetry
    } else {
      real_T d_B[128];
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 16; HPA_tmp++) {
          c_B[HPA_tmp + (i << 4)] = b_A[i + (HPA_tmp << 4)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (b_i = 0; b_i < 16; b_i++) {
        for (int32_T j{0}; j <= b_i; j++) {
          i = j << 4;
          HPA_tmp = b_i + i;
          b_alpha = C[HPA_tmp];
          for (k = 0; k < 16; k++) {
            b_alpha += HPA[(b_i + (k << 4)) + 4864] * c_B[k + i];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          C[HPA_tmp] = b_alpha;
          //  Use the computed value for the symmetric element
          C[j + (b_i << 4)] = C[HPA_tmp];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 8; HPA_tmp++) {
          d_B[HPA_tmp + (i << 3)] = b_B[i + (HPA_tmp << 4)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&b_C[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (b_i = 0; b_i < 16; b_i++) {
        for (int32_T j{0}; j <= b_i; j++) {
          i = b_i + (j << 4);
          b_alpha = b_C[i];
          for (k = 0; k < 8; k++) {
            b_alpha += HPB[(b_i + (k << 4)) + 2432] * d_B[k + (j << 3)];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          b_C[i] = b_alpha;
          //  Use the computed value for the symmetric element
          b_C[j + (b_i << 4)] = b_C[i];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 256; i++) {
        SD->f0.left[i + 9728] = C[i] + b_C[i];
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      //  Calculate the product of the diagonal matrix P and matrix A
      for (b_i = 0; b_i < 16; b_i++) {
        HPA_tmp = (b_i + (b_i << 4)) + 9728;
        SD->f0.left[HPA_tmp] += b_P_diag[b_i + 480];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      //  no diag.
    }
    if (t + 1 > 1) {
      std::copy(
          &HPA[t * 256],
          &HPA[static_cast<int32_T>(static_cast<uint32_T>(t * 256) + 256U)],
          &SD->f0.left[t * 512 + 256]);
      // don't need this
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //      HPA(:,:,1) = zeros(size(HPA(:,:,1)));
  //      out(:,:,2,:) = HPA;%This will add 0.003ms to the cost.
  st.site = &mb_emlrtRSI;
  //  has the sameshape as the aout put of dev_compute_HPHT
  //  the Y matrix is a 4 dimensional matrix. t is for the t th row YTT and
  //  Yt(t-1)
  //  the third index is for the location. 1 for diag and 2 for off-diag
  std::memset(&L[0], 0, 10240U * sizeof(real_T));
  //  Compute L_11
  b_st.site = &fc_emlrtRSI;
  std::copy(&SD->f0.left[0], &SD->f0.left[256], &b_A[0]);
  c_st.site = &hc_emlrtRSI;
  coder::internal::chol(&c_st, b_A, &t, &HPA_tmp);
  if (HPA_tmp > 16) {
    emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  iv[0] = 16;
  iv[1] = 16;
  if (HPA_tmp < 1) {
    iv1[0] = 0;
    iv1[1] = 0;
  } else {
    iv1[0] = HPA_tmp;
    iv1[1] = HPA_tmp;
  }
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &i_emlrtECI, &st);
  std::copy(&b_A[0], &b_A[256], &L[0]);
  //  Compute remaining L's
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 < 19)) {
    real_T d[16];
    boolean_T b_y;
    boolean_T exitg2;
    //  Compute L_{i+1,i} if i < T
    for (k = 0; k < 16; k++) {
      d[k] = L[(k + (k << 4)) + ((b_i - 1) << 9)];
    }
    b_y = false;
    k = 0;
    exitg2 = false;
    while ((!exitg2) && (k < 16)) {
      if (d[k] == 0.0) {
        b_y = true;
        exitg2 = true;
      } else {
        k++;
      }
    }
    if (b_y) {
      t = 1;
      exitg1 = true;
    } else {
      //  Replace the division by the for loop implementation
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 16; HPA_tmp++) {
          c_B[HPA_tmp + (i << 4)] =
              SD->f0.left[((i + (HPA_tmp << 4)) + (b_i << 9)) + 256];
        }
      }
      std::memset(&b_C[0], 0, 256U * sizeof(real_T));
      for (k = 0; k < 16; k++) {
        HPA_tmp = k << 4;
        for (int32_T c_i{0}; c_i < 16; c_i++) {
          t = c_i + HPA_tmp;
          b_C[t] = c_B[t];
          for (int32_T j{0}; j < c_i; j++) {
            b_C[t] -= L[(c_i + (j << 4)) + ((b_i - 1) << 9)] * b_C[j + HPA_tmp];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          b_C[t] /= L[(c_i + (c_i << 4)) + ((b_i - 1) << 9)];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 16; HPA_tmp++) {
          L[((HPA_tmp + (i << 4)) + (b_i << 9)) + 256] =
              b_C[i + (HPA_tmp << 4)];
        }
      }
      //  Compute L_{i,i}
      b_st.site = &gc_emlrtRSI;
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 16; HPA_tmp++) {
          c_B[HPA_tmp + (i << 4)] =
              L[((i + (HPA_tmp << 4)) + (b_i << 9)) + 256];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (int32_T c_i{0}; c_i < 16; c_i++) {
        for (int32_T j{0}; j <= c_i; j++) {
          i = j << 4;
          HPA_tmp = c_i + i;
          b_alpha = C[HPA_tmp];
          for (k = 0; k < 16; k++) {
            b_alpha += L[((c_i + (k << 4)) + (b_i << 9)) + 256] * c_B[k + i];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&b_st);
            }
          }
          C[HPA_tmp] = b_alpha;
          //  Use the computed value for the symmetric element
          C[j + (c_i << 4)] = C[HPA_tmp];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&b_st);
        }
      }
      for (i = 0; i < 16; i++) {
        for (HPA_tmp = 0; HPA_tmp < 16; HPA_tmp++) {
          t = HPA_tmp + (i << 4);
          C[t] = SD->f0.left[t + (b_i << 9)] - C[t];
        }
      }
      c_st.site = &hc_emlrtRSI;
      coder::internal::chol(&c_st, C, &t, &HPA_tmp);
      if (HPA_tmp > 16) {
        emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      if (t != 0) {
        exitg1 = true;
      } else {
        iv[0] = 16;
        iv[1] = 16;
        if (HPA_tmp < 1) {
          iv1[0] = 0;
          iv1[1] = 0;
        } else {
          iv1[0] = HPA_tmp;
          iv1[1] = HPA_tmp;
        }
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &j_emlrtECI, &st);
        for (i = 0; i < 16; i++) {
          std::copy(
              &C[i * 16],
              &C[static_cast<int32_T>(static_cast<uint32_T>(i * 16) + 16U)],
              &L[i * 16 + b_i * 512]);
        }
        b_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
  }
  *flag = t;
  // no purtbation
  if (t != 0) {
    //  used to test infeasibility
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 61, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &fd_emlrtRSI;
    disp(&st, y, &emlrtMCI);
  } else {
    // lfull = restore_big_lower_triangular_matrix(L);%%check!
    b_alpha = alpha * beta;
    for (i = 0; i < 320; i++) {
      dw[i] = ((R[i + 496] - a * b[i]) + beta * dw[i]) / b_alpha;
    }
    st.site = &nb_emlrtRSI;
    dev_solve_Lv(&st, L, dw, b);
    st.site = &nb_emlrtRSI;
    dev_solve_LTv(&st, L, b, dw);
    st.site = &ob_emlrtRSI;
    dev_HtZ(&st, At, Bt, dw, b_P_diag);
    for (b_i = 0; b_i < 496; b_i++) {
      b_alpha = A_invRx[b_i] - alpha * A_inv[b_i] *
                                   static_cast<real_T>(jd[b_i]) * b_P_diag[b_i];
      A_invRx[b_i] = b_alpha;
      R[b_i] = b_alpha;
    }
    std::copy(&dw[0], &dw[320], &R[496]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_newtonpipgupdate.cpp)
