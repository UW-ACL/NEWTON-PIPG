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
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "dev_cholesky_special.h"
#include "dev_multiply_symmetric.h"
#include "dev_newtonzpipg_separatedinput_data.h"
#include "dev_newtonzpipg_separatedinput_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo ib_emlrtRSI{
    11,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    15,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    17,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    22,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    31,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    34,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    10,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pathName
};

static emlrtRSInfo lc_emlrtRSI{
    12,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    10,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo nc_emlrtRSI{
    12,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    13,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    25,                     // lineNo
    5,                      // colNo
    "dev_newtonpipgupdate", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pName
};

static emlrtECInfo g_emlrtECI{
    1,               // nDims
    12,              // lineNo
    22,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pName
};

static emlrtECInfo h_emlrtECI{
    -1,              // nDims
    10,              // lineNo
    13,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m" // pName
};

static emlrtECInfo i_emlrtECI{
    1,              // nDims
    12,             // lineNo
    22,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pName
};

static emlrtECInfo j_emlrtECI{
    -1,             // nDims
    10,             // lineNo
    13,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,              // iFirst
    320,            // iLast
    12,             // lineNo
    46,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m", // pName
    0                                    // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    1,              // iFirst
    320,            // iLast
    10,             // lineNo
    15,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m", // pName
    3                                    // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    1,              // iFirst
    320,            // iLast
    12,             // lineNo
    24,             // colNo
    "v",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m", // pName
    0                                    // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    1,               // iFirst
    320,             // iLast
    12,              // lineNo
    49,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    1,               // iFirst
    320,             // iLast
    10,              // lineNo
    15,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m", // pName
    3                                     // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    1,               // iFirst
    320,             // iLast
    12,              // lineNo
    24,              // colNo
    "v",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_LTv.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    8,                              // lineNo
    25,                             // colNo
    "B",                            // aName
    "small_lower_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\small_lower_triangular_solve.m", // pName
    0                                                    // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    8,                        // lineNo
    25,                       // colNo
    "B",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    1,                        // iFirst
    16,                       // iLast
    10,                       // lineNo
    42,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtRSInfo rc_emlrtRSI{
    26,                 // lineNo
    "dev_compute_HPHt", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    28,                 // lineNo
    "dev_compute_HPHt", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    25,                     // lineNo
    "dev_newtonpipgupdate", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_newtonpipgupdate.m" // pathName
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

real_T b_dev_newtonpipgupdate(c_dev_newtonzpipg_separatedinpu *SD,
                              const emlrtStack *sp, const real_T A[256],
                              const real_T B[128], const real_T At[256],
                              const real_T Bt[128], const coder::sparse *P_diag,
                              const real_T Id[496], real_T R[816], real_T alpha,
                              real_T beta, real_T rho)
{
  static const int32_T iv[2]{1, 61};
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
  real_T X[320];
  real_T dw[320];
  real_T right[320];
  real_T C[256];
  real_T b_A[256];
  real_T c_B[256];
  real_T b_B[128];
  real_T b_X[16];
  real_T b_alpha;
  real_T flag;
  real_T s;
  int32_T aoffset;
  int32_T i;
  int32_T k;
  boolean_T jd[496];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  R = pipg(z,w) - (z,w)
  //  Only for convergence count testing, not the most optimal way in
  //  implementation
  //  P must be a vector
  // purturbation_debug   = 0;
  for (i = 0; i < 816; i++) {
    R[i] /= rho;
  }
  for (int32_T b_i{0}; b_i < 496; b_i++) {
    jd[b_i] = (Id[b_i] == 0.0);
  }
  st.site = &ib_emlrtRSI;
  P_diag->b_times(&st, jd, &r);
  st.site = &ib_emlrtRSI;
  r.times(&st, alpha, &r1);
  for (i = 0; i < 496; i++) {
    A_invRx[i] = 1.0 - static_cast<real_T>(jd[i]);
  }
  r1.b_plus(A_invRx, A_inv);
  for (i = 0; i < 496; i++) {
    A_inv[i] = 1.0 / A_inv[i];
  }
  // vector%%may be deleta diag(P)
  s = 2.0 * beta;
  st.site = &jb_emlrtRSI;
  dev_HZ(&st, A, B, &R[0], right);
  for (int32_T b_i{0}; b_i < 496; b_i++) {
    A_invRx[b_i] = A_inv[b_i] * R[b_i];
  }
  st.site = &kb_emlrtRSI;
  dev_HZ(&st, A, B, A_invRx, dw);
  b_alpha = alpha * beta;
  for (i = 0; i < 320; i++) {
    right[i] = ((R[i + 496] - s * right[i]) + beta * dw[i]) / b_alpha;
  }
  for (int32_T b_i{0}; b_i < 496; b_i++) {
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
    for (aoffset = 0; aoffset < 20; aoffset++) {
      d_P_diag[aoffset + 20 * i] = c_P_diag[i + 24 * aoffset];
    }
  }
  //  I want to make sure that each row is the consequtive vector.
  // disp(P)
  for (int32_T t{0}; t < 20; t++) {
    //  Get the size of the matrices
    //  Set default value for axis if missing
    //  Initialize the resulting matrix C
    //  Calculate the product based on the value of axis
    //  Check if P and A are compatible for multiplication
    //  Calculate the product of the matrix A and the diagonal matrix P
    for (int32_T b_i{0}; b_i < 16; b_i++) {
      for (int32_T j{0}; j < 16; j++) {
        aoffset = b_i + (j << 4);
        HPA[aoffset + (t << 8)] = b_A[aoffset] * d_P_diag[t + 20 * j];
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
    for (int32_T b_i{0}; b_i < 16; b_i++) {
      for (int32_T j{0}; j < 8; j++) {
        aoffset = b_i + (j << 4);
        HPB[aoffset + (t << 7)] = b_B[aoffset] * d_P_diag[t + 20 * (j + 16)];
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
  for (int32_T t{0}; t < 20; t++) {
    if (t + 1 < 20) {
      real_T d_B[128];
      for (i = 0; i < 16; i++) {
        for (aoffset = 0; aoffset < 16; aoffset++) {
          c_B[aoffset + (i << 4)] = b_A[i + (aoffset << 4)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        for (int32_T j{0}; j <= b_i; j++) {
          i = j << 4;
          aoffset = b_i + i;
          s = C[aoffset];
          for (k = 0; k < 16; k++) {
            s += HPA[(b_i + (k << 4)) + (t << 8)] * c_B[k + i];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          C[aoffset] = s;
          //  Use the computed value for the symmetric element
          C[j + (b_i << 4)] = C[aoffset];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 16; i++) {
        for (aoffset = 0; aoffset < 8; aoffset++) {
          d_B[aoffset + (i << 3)] = b_B[i + (aoffset << 4)];
        }
      }
      st.site = &rc_emlrtRSI;
      dev_multiply_symmetric(&st, &HPB[t << 7], d_B, c_B);
      for (i = 0; i < 256; i++) {
        SD->f0.left[i + t * 512] = C[i] + c_B[i];
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      //  Calculate the product of the diagonal matrix P and matrix A
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        aoffset = (b_i + (b_i << 4)) + (t << 9);
        SD->f0.left[aoffset] += d_P_diag[(t + 20 * b_i) + 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      // didn't use symmetry
    } else {
      real_T d_B[128];
      for (i = 0; i < 16; i++) {
        for (aoffset = 0; aoffset < 16; aoffset++) {
          c_B[aoffset + (i << 4)] = b_A[i + (aoffset << 4)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 256U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        for (int32_T j{0}; j <= b_i; j++) {
          i = j << 4;
          aoffset = b_i + i;
          s = C[aoffset];
          for (k = 0; k < 16; k++) {
            s += HPA[(b_i + (k << 4)) + 4864] * c_B[k + i];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          C[aoffset] = s;
          //  Use the computed value for the symmetric element
          C[j + (b_i << 4)] = C[aoffset];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 16; i++) {
        for (aoffset = 0; aoffset < 8; aoffset++) {
          d_B[aoffset + (i << 3)] = b_B[i + (aoffset << 4)];
        }
      }
      st.site = &sc_emlrtRSI;
      dev_multiply_symmetric(&st, &HPB[2432], d_B, c_B);
      for (i = 0; i < 256; i++) {
        SD->f0.left[i + 9728] = C[i] + c_B[i];
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      //  Calculate the product of the diagonal matrix P and matrix A
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        aoffset = (b_i + (b_i << 4)) + 9728;
        SD->f0.left[aoffset] += b_P_diag[b_i + 480];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      //  I don't want diag!!!
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
  st.site = &lb_emlrtRSI;
  dev_cholesky_special(&st, SD->f0.left, SD->f0.L, &flag);
  // no purtbation
  if (flag != 0.0) {
    //  used to test infeasibility
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 61, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &tc_emlrtRSI;
    disp(&st, y, &emlrtMCI);
  } else {
    real_T b_tmp_data[320];
    real_T temp_v[16];
    int32_T idx_size_idx_1;
    int16_T idx_data[320];
    int16_T tmp_data[320];
    // lfull = restore_big_lower_triangular_matrix(L);%%check!
    st.site = &mb_emlrtRSI;
    std::memset(&X[0], 0, 320U * sizeof(real_T));
    for (int32_T t{0}; t < 20; t++) {
      k = (t << 4) + 1;
      aoffset = (t + 1) << 4;
      if (aoffset < k) {
        idx_size_idx_1 = 0;
      } else {
        aoffset -= k;
        idx_size_idx_1 = aoffset + 1;
        for (i = 0; i <= aoffset; i++) {
          idx_data[i] = static_cast<int16_T>(k + i);
        }
      }
      if (t + 1 == 1) {
        for (i = 0; i < idx_size_idx_1; i++) {
          aoffset = idx_data[i];
          if (aoffset > 320) {
            emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &b_emlrtBCI, &st);
          }
          tmp_data[i] = static_cast<int16_T>(aoffset);
        }
        if (idx_size_idx_1 != 16) {
          emlrtSubAssignSizeCheck1dR2017a(idx_size_idx_1, 16, &j_emlrtECI, &st);
        }
        b_st.site = &kc_emlrtRSI;
        std::memset(&b_X[0], 0, 16U * sizeof(real_T));
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          if (b_i + 1 > idx_size_idx_1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, idx_size_idx_1,
                                          &g_emlrtBCI, &b_st);
          }
          b_X[b_i] = right[idx_data[b_i] - 1];
          for (int32_T j{0}; j < b_i; j++) {
            b_X[b_i] -= SD->f0.L[b_i + (j << 4)] * b_X[j];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&b_st);
            }
          }
          b_X[b_i] /= SD->f0.L[b_i + (b_i << 4)];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
        for (i = 0; i < 16; i++) {
          X[tmp_data[i] - 1] = b_X[i];
        }
      } else {
        for (i = 0; i < idx_size_idx_1; i++) {
          aoffset = idx_data[i] - 16;
          if ((aoffset < 1) || (aoffset > 320)) {
            emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &emlrtBCI, &st);
          }
          b_tmp_data[i] = X[aoffset - 1];
        }
        for (i = 0; i < idx_size_idx_1; i++) {
          aoffset = idx_data[i];
          if (aoffset > 320) {
            emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &c_emlrtBCI, &st);
          }
        }
        if ((idx_size_idx_1 != 16) && (idx_size_idx_1 != 1)) {
          emlrtDimSizeImpxCheckR2021b(idx_size_idx_1, 16, &i_emlrtECI, &st);
        }
        b_st.site = &lc_emlrtRSI;
        c_st.site = &u_emlrtRSI;
        if (idx_size_idx_1 != 16) {
          if (idx_size_idx_1 == 1) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &e_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &d_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          s = 0.0;
          for (i = 0; i < 16; i++) {
            s += SD->f0.L[((b_i + (i << 4)) + (t << 9)) + 256] * b_tmp_data[i];
          }
          i = idx_data[b_i];
          temp_v[b_i] = right[i - 1] - s;
          tmp_data[b_i] = static_cast<int16_T>(i);
          b_X[b_i] = 0.0;
        }
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          b_X[b_i] = temp_v[b_i];
          for (int32_T j{0}; j < b_i; j++) {
            b_X[b_i] -= SD->f0.L[(b_i + (j << 4)) + (t << 9)] * b_X[j];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          b_X[b_i] /= SD->f0.L[(b_i + (b_i << 4)) + (t << 9)];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        for (i = 0; i < 16; i++) {
          X[tmp_data[i] - 1] = b_X[i];
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    st.site = &mb_emlrtRSI;
    std::memset(&dw[0], 0, 320U * sizeof(real_T));
    for (int32_T t{0}; t < 20; t++) {
      k = ((19 - t) << 4) + 1;
      aoffset = (20 - t) << 4;
      if (aoffset < k) {
        idx_size_idx_1 = 0;
      } else {
        aoffset -= k;
        idx_size_idx_1 = aoffset + 1;
        for (i = 0; i <= aoffset; i++) {
          idx_data[i] = static_cast<int16_T>(k + i);
        }
      }
      if (20 - t == 20) {
        for (i = 0; i < idx_size_idx_1; i++) {
          aoffset = idx_data[i];
          if (aoffset > 320) {
            emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &e_emlrtBCI, &st);
          }
          tmp_data[i] = static_cast<int16_T>(aoffset);
        }
        if (idx_size_idx_1 != 16) {
          emlrtSubAssignSizeCheck1dR2017a(idx_size_idx_1, 16, &h_emlrtECI, &st);
        }
        b_st.site = &mc_emlrtRSI;
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          for (i = 0; i < 16; i++) {
            c_B[i + (b_i << 4)] = SD->f0.L[(b_i + (i << 4)) + 9728];
          }
          b_X[b_i] = 0.0;
        }
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          if (16 - b_i > idx_size_idx_1) {
            emlrtDynamicBoundsCheckR2012b(16 - b_i, 1, idx_size_idx_1,
                                          &h_emlrtBCI, &b_st);
          }
          b_X[15 - b_i] = X[idx_data[15 - b_i] - 1];
          for (int32_T j{0}; j < b_i; j++) {
            aoffset = (j - b_i) + 16;
            if (aoffset + 1 > 16) {
              emlrtDynamicBoundsCheckR2012b(aoffset + 1, 1, 16, &i_emlrtBCI,
                                            &b_st);
            }
            b_X[15 - b_i] -= c_B[15 - (b_i - (aoffset << 4))] * b_X[aoffset];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&b_st);
            }
          }
          b_X[15 - b_i] /= c_B[(((15 - b_i) << 4) - b_i) + 15];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
        for (i = 0; i < 16; i++) {
          dw[tmp_data[i] - 1] = b_X[i];
        }
      } else {
        for (i = 0; i < idx_size_idx_1; i++) {
          aoffset = idx_data[i] + 16;
          if (aoffset > 320) {
            emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &d_emlrtBCI, &st);
          }
          b_tmp_data[i] = dw[aoffset - 1];
        }
        for (i = 0; i < idx_size_idx_1; i++) {
          aoffset = idx_data[i];
          if (aoffset > 320) {
            emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &f_emlrtBCI, &st);
          }
        }
        if ((idx_size_idx_1 != 16) && (idx_size_idx_1 != 1)) {
          emlrtDimSizeImpxCheckR2021b(idx_size_idx_1, 16, &g_emlrtECI, &st);
        }
        b_st.site = &nc_emlrtRSI;
        c_st.site = &u_emlrtRSI;
        if (idx_size_idx_1 != 16) {
          if (idx_size_idx_1 == 1) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &e_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &d_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          aoffset = b_i << 4;
          s = 0.0;
          for (k = 0; k < 16; k++) {
            i = aoffset + k;
            s +=
                SD->f0.L[((i % 16 + ((i / 16) << 4)) + ((20 - t) << 9)) + 256] *
                b_tmp_data[k];
          }
          b_X[b_i] = s;
        }
        for (i = 0; i < 16; i++) {
          aoffset = idx_data[i];
          temp_v[i] = X[aoffset - 1] - b_X[i];
          tmp_data[i] = static_cast<int16_T>(aoffset);
        }
        b_st.site = &oc_emlrtRSI;
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          for (i = 0; i < 16; i++) {
            c_B[i + (b_i << 4)] = SD->f0.L[(b_i + (i << 4)) + ((19 - t) << 9)];
          }
          b_X[b_i] = 0.0;
        }
        for (int32_T b_i{0}; b_i < 16; b_i++) {
          b_X[15 - b_i] = temp_v[15 - b_i];
          for (int32_T j{0}; j < b_i; j++) {
            aoffset = (j - b_i) + 16;
            if (aoffset + 1 > 16) {
              emlrtDynamicBoundsCheckR2012b(aoffset + 1, 1, 16, &i_emlrtBCI,
                                            &b_st);
            }
            b_X[15 - b_i] -= c_B[15 - (b_i - (aoffset << 4))] * b_X[aoffset];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&b_st);
            }
          }
          b_X[15 - b_i] /= c_B[(((15 - b_i) << 4) - b_i) + 15];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
        for (i = 0; i < 16; i++) {
          dw[tmp_data[i] - 1] = b_X[i];
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    st.site = &nb_emlrtRSI;
    dev_HtZ(&st, At, Bt, dw, b_P_diag);
    for (int32_T b_i{0}; b_i < 496; b_i++) {
      s = A_invRx[b_i] -
          alpha * A_inv[b_i] * static_cast<real_T>(jd[b_i]) * b_P_diag[b_i];
      A_invRx[b_i] = s;
      R[b_i] = s;
    }
    std::copy(&dw[0], &dw[320], &R[496]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return flag;
}

// End of code generation (dev_newtonpipgupdate.cpp)
