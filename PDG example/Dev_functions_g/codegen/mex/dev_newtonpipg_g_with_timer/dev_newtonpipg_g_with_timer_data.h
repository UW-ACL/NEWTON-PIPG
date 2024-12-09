//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_with_timer_data.h
//
// Code generation for function 'dev_newtonpipg_g_with_timer_data'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern boolean_T isMexOutdated;
extern const char_T *c_dev_newtonpipg_g_with_timer_c;
extern const char_T *dev_HZ_g_complete_name;
extern const char_T *dev_HtZ_g_complete_name;
extern const char_T *c_dev_xpipg_onestep_g_complete_;
extern const char_T *c_proj_D_with_affinejacobian_co;
extern const char_T *c_proj_D_unit_with_affinejacobi;
extern const char_T *proj_box_complete_name;
extern const char_T *jacob_box_complete_name;
extern const char_T *proj_ball_complete_name;
extern const char_T *proj_soc_complete_name;
extern const char_T *c_proj_k_polar_with_jacobian_co;
extern const char_T *c_dev_g_newton_pipg_update_with;
extern const char_T *dev_S_inv_g_complete_name;
extern const char_T *jacob_D_unit_complete_name;
extern const char_T *dev_jacob_box_complete_name;
extern const char_T *dev_jacob_ball_complete_name;
extern const char_T *dev_jacob_soc_complete_name;
extern const char_T *constructMatrix_complete_name;
extern const char_T *dev_g_A_Q_D_complete_name;
extern const char_T *dev_A_Q_D_unit_complete_name;
extern const char_T *dev_H_sinv_Ht_complete_name;
extern const char_T *c_dev_g_multiply_symmetric_comp;
extern const char_T *c_dev_Y_Q_Q_D_sum_unit_complete;
extern const char_T *c_dev_g_multiply_J_k_complete_n;
extern const char_T *processMatrix_complete_name;
extern const char_T *c_dev_cholesky_special_complete;
extern const char_T *c_small_lower_triangular_solve_;
extern const char_T *c_dev_multiply_symmetric_comple;
extern const char_T *c_dev_g_Q_multi_vector_complete;
extern const char_T *Q_v_unit_complete_name;
extern const char_T *c_dev_Y_multi_vector_complete_n;
extern const char_T *dev_solve_Lv_complete_name;
extern const char_T *dev_solve_LTv_complete_name;
extern const char_T *c_upper_triangular_solve_comple;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo r_emlrtRSI;
extern emlrtRSInfo v_emlrtRSI;
extern emlrtRSInfo w_emlrtRSI;
extern emlrtRSInfo x_emlrtRSI;
extern emlrtRSInfo db_emlrtRSI;
extern emlrtRSInfo eb_emlrtRSI;
extern emlrtRSInfo fb_emlrtRSI;
extern emlrtRSInfo qb_emlrtRSI;
extern emlrtRSInfo hc_emlrtRSI;
extern emlrtRSInfo de_emlrtRSI;
extern emlrtRSInfo ee_emlrtRSI;
extern emlrtRSInfo wg_emlrtRSI;
extern emlrtRSInfo xg_emlrtRSI;
extern emlrtRSInfo yg_emlrtRSI;
extern emlrtRSInfo ah_emlrtRSI;
extern emlrtRSInfo bh_emlrtRSI;
extern emlrtRSInfo ch_emlrtRSI;
extern emlrtRSInfo dh_emlrtRSI;
extern emlrtRSInfo ai_emlrtRSI;
extern emlrtMCInfo emlrtMCI;
extern emlrtRTEInfo c_emlrtRTEI;
extern emlrtRTEInfo f_emlrtRTEI;
extern emlrtRTEInfo g_emlrtRTEI;
extern emlrtRTEInfo i_emlrtRTEI;
extern emlrtECInfo x_emlrtECI;
extern emlrtDCInfo v_emlrtDCI;
extern emlrtBCInfo gb_emlrtBCI;
extern emlrtRTEInfo n_emlrtRTEI;
extern emlrtRTEInfo p_emlrtRTEI;
extern emlrtRTEInfo q_emlrtRTEI;
extern emlrtECInfo jc_emlrtECI;
extern emlrtECInfo kc_emlrtECI;
extern emlrtECInfo lc_emlrtECI;
extern emlrtBCInfo pc_emlrtBCI;
extern emlrtDCInfo ob_emlrtDCI;
extern emlrtDCInfo pb_emlrtDCI;
extern emlrtDCInfo qb_emlrtDCI;
extern emlrtBCInfo qc_emlrtBCI;
extern emlrtBCInfo sc_emlrtBCI;
extern emlrtBCInfo tc_emlrtBCI;
extern emlrtBCInfo uc_emlrtBCI;
extern emlrtBCInfo wc_emlrtBCI;
extern emlrtRTEInfo y_emlrtRTEI;
extern emlrtRTEInfo ec_emlrtRTEI;
extern emlrtRTEInfo ld_emlrtRTEI;
extern emlrtRTEInfo md_emlrtRTEI;
extern emlrtRTEInfo nd_emlrtRTEI;
extern emlrtRTEInfo od_emlrtRTEI;
extern emlrtRTEInfo pd_emlrtRTEI;
extern emlrtRTEInfo je_emlrtRTEI;
extern emlrtRTEInfo ke_emlrtRTEI;
extern emlrtRTEInfo le_emlrtRTEI;
extern emlrtRTEInfo me_emlrtRTEI;
extern emlrtRTEInfo oe_emlrtRTEI;
extern emlrtRTEInfo hh_emlrtRTEI;
extern emlrtRTEInfo mh_emlrtRTEI;
extern emlrtRTEInfo oh_emlrtRTEI;
extern emlrtRTEInfo qh_emlrtRTEI;
extern emlrtRTEInfo rh_emlrtRTEI;
extern emlrtRTEInfo th_emlrtRTEI;
extern emlrtRTEInfo uh_emlrtRTEI;
extern emlrtRTEInfo vh_emlrtRTEI;
extern const char_T cv[26];
extern emlrtRSInfo pi_emlrtRSI;
extern emlrtRSInfo qi_emlrtRSI;
extern emlrtRSInfo si_emlrtRSI;

// End of code generation (dev_newtonpipg_g_with_timer_data.h)
