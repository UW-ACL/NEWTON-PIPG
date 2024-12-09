//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_with_timer_initialize.cpp
//
// Code generation for function 'dev_newtonpipg_g_with_timer_initialize'
//

// Include files
#include "dev_newtonpipg_g_with_timer_initialize.h"
#include "_coder_dev_newtonpipg_g_with_timer_mex.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include <emmintrin.h>

// Function Declarations
static void c_dev_newtonpipg_g_with_timer_o();

// Function Definitions
static void c_dev_newtonpipg_g_with_timer_o()
{
  static const int32_T lineInfo[106]{
      20,  21,  22,  23,  24,  25,  27,  28,  29,  30,  31,  32,  33,  34,
      35,  36,  37,  40,  41,  42,  43,  44,  45,  46,  50,  51,  53,  54,
      55,  56,  57,  58,  59,  63,  64,  65,  66,  67,  69,  70,  71,  72,
      73,  74,  75,  76,  78,  79,  80,  81,  82,  83,  84,  85,  86,  88,
      90,  91,  92,  93,  94,  96,  97,  98,  99,  100, 103, 105, 107, 108,
      109, 110, 111, 112, 113, 116, 117, 119, 120, 121, 122, 124, 125, 126,
      128, 129, 130, 131, 132, 133, 134, 135, 137, 138, 139, 141, 144, 145,
      146, 147, 148, 149, 151, 154, 155, 156};
  static const int32_T g_lineInfo[42]{
      12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 25, 26, 27,
      29, 30, 31, 32, 33, 34, 35, 36, 37, 39, 40, 41, 43, 44,
      45, 47, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 59, 60};
  static const int32_T o_lineInfo[30]{30, 31, 32, 33, 35, 36, 37, 38, 40, 41,
                                      42, 43, 44, 45, 46, 47, 49, 53, 54, 55,
                                      56, 57, 58, 60, 62, 63, 64, 65, 66, 67};
  static const int32_T l_lineInfo[26]{6,  7,  8,  9,  11, 12, 13, 14, 16,
                                      17, 18, 19, 20, 21, 22, 23, 25, 29,
                                      30, 31, 33, 35, 36, 37, 38, 39};
  static const int32_T f_lineInfo[22]{3,  4,  5,  6,  7,  8,  9,  10,
                                      11, 12, 13, 14, 15, 16, 17, 18,
                                      19, 20, 21, 23, 24, 25};
  static const int32_T i_lineInfo[20]{31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                                      41, 42, 43, 44, 45, 46, 47, 49, 50, 51};
  static const int32_T j_lineInfo[20]{3,  4,  5,  6,  7,  8,  9,  10, 11, 12,
                                      13, 14, 15, 16, 17, 18, 19, 20, 21, 24};
  static const int32_T h_lineInfo[19]{4,  5,  6,  7,  8,  9,  10, 11, 12, 13,
                                      14, 15, 16, 17, 18, 19, 20, 21, 27};
  static const int32_T r_lineInfo[18]{7,  8,  9,  10, 13, 17, 20, 21, 22,
                                      23, 25, 28, 29, 30, 31, 32, 33, 37};
  static const int32_T u_lineInfo[17]{20, 21, 22, 23, 24, 25, 26, 27, 28,
                                      29, 30, 31, 33, 34, 35, 37, 38};
  static const int32_T c_lineInfo[16]{5,  6,  7,  8,  10, 11, 12, 13,
                                      14, 15, 16, 17, 18, 19, 20, 21};
  static const int32_T e_lineInfo[13]{4,  5,  7,  8,  9,  10, 11,
                                      12, 13, 14, 15, 16, 17};
  static const int32_T p_lineInfo[13]{3,  4,  5,  7,  8,  9, 10,
                                      11, 12, 13, 14, 15, 17};
  static const int32_T s_lineInfo[13]{2,  3,  4,  6,  7,  8, 9,
                                      10, 11, 12, 13, 14, 15};
  static const int32_T v_lineInfo[13]{2,  3,  5,  7,  8,  9, 10,
                                      11, 12, 13, 14, 15, 16};
  static const int32_T n_lineInfo[12]{3,  4,  6,  9,  10, 11,
                                      12, 13, 15, 16, 17, 18};
  static const int32_T t_lineInfo[12]{3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 16};
  static const int32_T b_lineInfo[11]{8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19};
  static const int32_T m_lineInfo[11]{9,  10, 11, 14, 16, 17,
                                      18, 19, 20, 21, 24};
  static const int32_T q_lineInfo[10]{20, 21, 22, 23, 24, 28, 29, 30, 31, 32};
  static const int32_T d_lineInfo[8]{8, 9, 11, 12, 13, 14, 15, 16};
  static const int32_T k_lineInfo[8]{32, 35, 38, 41, 44, 48, 50, 51};
  static const int32_T b_offsets[4]{0, 1, 2, 3};
  static const int32_T c_offsets[4]{0, 1, 2, 3};
  static const int32_T d_offsets[4]{0, 1, 2, 3};
  static const int32_T e_offsets[4]{0, 1, 2, 3};
  static const int32_T f_offsets[4]{0, 1, 2, 3};
  static const int32_T g_offsets[4]{0, 1, 2, 3};
  static const int32_T offsets[4]{0, 1, 2, 3};
  __m128i r;
  __m128i r1;
  __m128i r2;
  __m128i r3;
  __m128i r4;
  int32_T iv6[17];
  int32_T iv4[15];
  int32_T iv2[13];
  int32_T iv3[12];
  int32_T iv1[7];
  int32_T iv5[6];
  int32_T iv[2];
  mex_InitInfAndNan();
  c_upper_triangular_solve_comple =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\devnewton_code\\upper_triangular_solve.m>upper_triangular_"
      "solve(codegen)";
  dev_solve_LTv_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\devnewton_code\\dev_solve_LTv.m>dev_solve_LTv(codegen)";
  dev_solve_Lv_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\devnewton_code\\dev_solve_Lv.m>dev_solve_Lv(codegen)";
  c_dev_Y_multi_vector_complete_n = "C:\\Users\\HP\\Documents\\MATLAB\\general "
                                    "newtonpipg\\Dev_functions_g\\dev_Y_multi_"
                                    "vector.m>dev_Y_multi_vector(codegen)";
  Q_v_unit_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m>Q_v_unit(codegen)";
  c_dev_g_Q_multi_vector_complete =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m>dev_g_Q_multi_"
      "vector(codegen)";
  c_dev_multiply_symmetric_comple =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\devnewton_code\\dev_multiply_symmetric.m>dev_multiply_"
      "symmetric(codegen)";
  c_small_lower_triangular_solve_ =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\devnewton_code\\small_lower_triangular_solve.m>small_lower_"
      "triangular_solv"
      "e(codegen)";
  c_dev_cholesky_special_complete = "C:\\Users\\HP\\Documents\\MATLAB\\general "
                                    "newtonpipg\\devnewton_code\\dev_cholesky_"
                                    "special.m>dev_cholesky_special(codegen)";
  processMatrix_complete_name = "C:\\Users\\HP\\Documents\\MATLAB\\general "
                                "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_"
                                "k.m>processMatrix(codegen)";
  c_dev_g_multiply_J_k_complete_n =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m>dev_g_multiply_J_k("
      "codegen)";
  c_dev_Y_Q_Q_D_sum_unit_complete = "C:\\Users\\HP\\Documents\\MATLAB\\general "
                                    "newtonpipg\\Dev_functions_g\\dev_H_sinv_"
                                    "Ht.m>dev_Y_Q_Q_D_sum_unit(codegen)";
  c_dev_g_multiply_symmetric_comp =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m>dev_g_multiply_"
      "symmetric(codeg"
      "en)";
  dev_H_sinv_Ht_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m>dev_H_sinv_Ht(codegen)";
  dev_A_Q_D_unit_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m>dev_A_Q_D_unit(codegen)";
  dev_g_A_Q_D_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_g_A_Q_D.m>dev_g_A_Q_D(codegen)";
  constructMatrix_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m>constructMatrix(codegen)";
  dev_jacob_soc_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m>dev_jacob_soc(codegen)";
  dev_jacob_ball_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m>dev_jacob_ball(codegen)";
  dev_jacob_box_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m>dev_jacob_box(codegen)";
  jacob_D_unit_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m>jacob_D_unit(codegen)";
  dev_S_inv_g_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m>dev_S_inv_g(codegen)";
  c_dev_g_newton_pipg_update_with =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m>dev_g_"
      "newton_pipg_up"
      "date_withtimer(codegen)";
  c_proj_k_polar_with_jacobian_co =
      "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
      "test\\proj_k_polar_with_jacobian.m>proj_k_polar_with_jacobian"
      "(codegen)";
  proj_soc_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
      "test\\proj_soc.m>proj_soc(codegen)";
  proj_ball_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
      "test\\proj_ball.m>proj_ball(codegen)";
  jacob_box_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
      "test\\proj_D_unit_with_affinejacobian.m>jacob_box(codegen)";
  proj_box_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
      "test\\proj_box.m>proj_box(codegen)";
  c_proj_D_unit_with_affinejacobi =
      "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
      "test\\proj_D_unit_with_affinejacobian.m>proj_D_unit_with_affi"
      "nejacobian(codegen)";
  c_proj_D_with_affinejacobian_co =
      "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
      "test\\proj_D_with_affinejacobian.m>proj_D_with_affinejacobian"
      "(codegen)";
  c_dev_xpipg_onestep_g_complete_ = "C:\\Users\\HP\\Documents\\MATLAB\\general "
                                    "newtonpipg\\Dev_functions_g\\dev_xpipg_"
                                    "onestep_g.m>dev_xpipg_onestep_g(codegen)";
  dev_HtZ_g_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m>dev_HtZ_g(codegen)";
  dev_HZ_g_complete_name =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_HZ_g.m>dev_HZ_g(codegen)";
  c_dev_newtonpipg_g_with_timer_c =
      "C:\\Users\\HP\\Documents\\MATLAB\\general "
      "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m>dev_"
      "newtonpipg_g_with_timer"
      "(codegen)";
  isMexOutdated = emlrtProfilerCheckMEXOutdated();
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_newtonpipg_g_with_timer_c,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m",
      (char_T *)"dev_newtonpipg_g_with_timer", 106, &lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_HZ_g_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_HZ_g.m",
      (char_T *)"dev_HZ_g", 11, &b_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_HtZ_g_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m",
      (char_T *)"dev_HtZ_g", 16, &c_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_xpipg_onestep_g_complete_,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m",
      (char_T *)"dev_xpipg_onestep_g", 8, &d_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_proj_D_with_affinejacobian_co,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other "
                "solver test\\proj_D_with_affinejacobian.m",
      (char_T *)"proj_D_with_affinejacobian", 13, &e_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_proj_D_unit_with_affinejacobi,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other "
                "solver test\\proj_D_unit_with_affinejacobian.m",
      (char_T *)"proj_D_unit_with_affinejacobian", 22, &f_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  iv[0] = 2;
  iv[1] = 3;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)proj_box_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other "
                "solver test\\proj_box.m",
      (char_T *)"proj_box", 2, &iv[0], static_cast<boolean_T>(isMexOutdated));
  iv[0] = 28;
  iv[1] = 29;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)jacob_box_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other "
                "solver test\\proj_D_unit_with_affinejacobian.m",
      (char_T *)"proj_D_unit_with_affinejacobian>jacob_box", 2, &iv[0],
      static_cast<boolean_T>(isMexOutdated));
  r = _mm_set1_epi32(0);
  _mm_storeu_si128(
      (__m128i *)&iv1[0],
      _mm_add_epi32(
          _mm_set1_epi32(3),
          _mm_add_epi32(r, _mm_loadu_si128((const __m128i *)&offsets[0]))));
  iv1[4] = 7;
  iv1[5] = 8;
  iv1[6] = 9;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)proj_ball_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other "
                "solver test\\proj_ball.m",
      (char_T *)"proj_ball", 7, &iv1[0], static_cast<boolean_T>(isMexOutdated));
  r1 = _mm_set1_epi32(2);
  r2 = _mm_loadu_si128((const __m128i *)&b_offsets[0]);
  _mm_storeu_si128((__m128i *)&iv2[0], _mm_add_epi32(r1, _mm_add_epi32(r, r2)));
  r3 = _mm_set1_epi32(4);
  _mm_storeu_si128((__m128i *)&iv2[4],
                   _mm_add_epi32(r1, _mm_add_epi32(r3, r2)));
  r4 = _mm_set1_epi32(8);
  _mm_storeu_si128((__m128i *)&iv2[8],
                   _mm_add_epi32(r1, _mm_add_epi32(r4, r2)));
  iv2[12] = 14;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)proj_soc_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other "
                "solver test\\proj_soc.m",
      (char_T *)"proj_soc", 13, &iv2[0], static_cast<boolean_T>(isMexOutdated));
  r2 = _mm_loadu_si128((const __m128i *)&c_offsets[0]);
  _mm_storeu_si128((__m128i *)&iv3[0], _mm_add_epi32(r3, _mm_add_epi32(r, r2)));
  _mm_storeu_si128((__m128i *)&iv3[4],
                   _mm_add_epi32(r3, _mm_add_epi32(r3, r2)));
  _mm_storeu_si128((__m128i *)&iv3[8],
                   _mm_add_epi32(r3, _mm_add_epi32(r4, r2)));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_proj_k_polar_with_jacobian_co,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other "
                "solver test\\proj_k_polar_with_jacobian.m",
      (char_T *)"proj_k_polar_with_jacobian", 12, &iv3[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_g_newton_pipg_update_with,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_"
                "withtimer.m",
      (char_T *)"dev_g_newton_pipg_update_withtimer", 42, &g_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_S_inv_g_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m",
      (char_T *)"dev_S_inv_g", 19, &h_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)jacob_D_unit_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m",
      (char_T *)"dev_S_inv_g>jacob_D_unit", 20, &i_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  _mm_storeu_si128(
      (__m128i *)&iv1[0],
      _mm_add_epi32(
          _mm_set1_epi32(54),
          _mm_add_epi32(r, _mm_loadu_si128((const __m128i *)&d_offsets[0]))));
  iv1[4] = 58;
  iv1[5] = 59;
  iv1[6] = 60;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_jacob_box_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m",
      (char_T *)"dev_S_inv_g>dev_jacob_box", 7, &iv1[0],
      static_cast<boolean_T>(isMexOutdated));
  r2 = _mm_loadu_si128((const __m128i *)&e_offsets[0]);
  _mm_storeu_si128((__m128i *)&iv4[0], _mm_add_epi32(r1, _mm_add_epi32(r, r2)));
  _mm_storeu_si128((__m128i *)&iv4[4],
                   _mm_add_epi32(r1, _mm_add_epi32(r3, r2)));
  _mm_storeu_si128((__m128i *)&iv4[8],
                   _mm_add_epi32(r1, _mm_add_epi32(r4, r2)));
  iv4[12] = 14;
  iv4[13] = 15;
  iv4[14] = 16;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_jacob_ball_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m",
      (char_T *)"dev_jacob_ball", 15, &iv4[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_jacob_soc_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m",
      (char_T *)"dev_jacob_soc", 20, &j_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)constructMatrix_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m",
      (char_T *)"dev_jacob_soc>constructMatrix", 8, &k_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  _mm_storeu_si128(
      (__m128i *)&iv5[0],
      _mm_add_epi32(r1, _mm_add_epi32(r, _mm_loadu_si128(
                                             (const __m128i *)&f_offsets[0]))));
  iv5[4] = 6;
  iv5[5] = 7;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_g_A_Q_D_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_g_A_Q_D.m",
      (char_T *)"dev_g_A_Q_D", 6, &iv5[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_A_Q_D_unit_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m",
      (char_T *)"dev_A_Q_D_unit", 26, &l_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_H_sinv_Ht_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m",
      (char_T *)"dev_H_sinv_Ht", 11, &m_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_g_multiply_symmetric_comp,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m",
      (char_T *)"dev_g_multiply_symmetric", 12, &n_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_Y_Q_Q_D_sum_unit_complete,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m",
      (char_T *)"dev_H_sinv_Ht>dev_Y_Q_Q_D_sum_unit", 30, &o_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_g_multiply_J_k_complete_n,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m",
      (char_T *)"dev_g_multiply_J_k", 13, &p_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)processMatrix_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_g_multiply_J_k.m",
      (char_T *)"dev_g_multiply_J_k>processMatrix", 10, &q_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_cholesky_special_complete,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\devnewton_code\\dev_cholesky_special.m",
      (char_T *)"dev_cholesky_special", 18, &r_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_small_lower_triangular_solve_,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\devnewton_code\\small_lower_triangular_solve.m",
      (char_T *)"small_lower_triangular_solve", 13, &s_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_multiply_symmetric_comple,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\devnewton_code\\dev_multiply_symmetric.m",
      (char_T *)"dev_multiply_symmetric", 12, &n_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_g_Q_multi_vector_complete,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m",
      (char_T *)"dev_g_Q_multi_vector", 12, &t_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)Q_v_unit_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m",
      (char_T *)"dev_g_Q_multi_vector>Q_v_unit", 17, &u_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  r2 = _mm_loadu_si128((const __m128i *)&g_offsets[0]);
  _mm_storeu_si128((__m128i *)&iv6[0], _mm_add_epi32(r1, _mm_add_epi32(r, r2)));
  _mm_storeu_si128((__m128i *)&iv6[4],
                   _mm_add_epi32(r1, _mm_add_epi32(r3, r2)));
  _mm_storeu_si128((__m128i *)&iv6[8],
                   _mm_add_epi32(r1, _mm_add_epi32(r4, r2)));
  _mm_storeu_si128((__m128i *)&iv6[12],
                   _mm_add_epi32(r1, _mm_add_epi32(_mm_set1_epi32(12), r2)));
  iv6[16] = 18;
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_dev_Y_multi_vector_complete_n,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m",
      (char_T *)"dev_Y_multi_vector", 17, &iv6[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_solve_Lv_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\devnewton_code\\dev_solve_Lv.m",
      (char_T *)"dev_solve_Lv", 13, &v_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)dev_solve_LTv_complete_name,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\devnewton_code\\dev_solve_LTv.m",
      (char_T *)"dev_solve_LTv", 13, &v_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  emlrtProfilerRegisterMEXFcn(
      (char_T *)c_upper_triangular_solve_comple,
      (char_T *)"C:\\Users\\HP\\Documents\\MATLAB\\general "
                "newtonpipg\\devnewton_code\\upper_triangular_solve.m",
      (char_T *)"upper_triangular_solve", 13, &s_lineInfo[0],
      static_cast<boolean_T>(isMexOutdated));
  timeKeeper_init();
}

void dev_newtonpipg_g_with_timer_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    c_dev_newtonpipg_g_with_timer_o();
  }
  emlrtCheckProfilerStatus();
}

// End of code generation (dev_newtonpipg_g_with_timer_initialize.cpp)
