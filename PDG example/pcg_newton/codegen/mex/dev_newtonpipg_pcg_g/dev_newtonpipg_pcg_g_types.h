/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_newtonpipg_pcg_g_types.h
 *
 * Code generation for function 'dev_newtonpipg_pcg_g'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T newtonratio;
  real_T newtonactive;
  real_T linesearch_step;
  real_T linsearch_amount;
  real_T newtonwaitlinear;
  real_T newtonwaitexp;
  real_T newtonwait_factor;
  real_T pcg_max_iter;
  real_T pcg_max_tol;
  real_T linesearch_amount;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  boolean_T converge;
  emxArray_real_T *xi;
  emxArray_real_T *eta;
  real_T solve_time;
  real_T ntime;
  real_T pcgtime;
  real_T k;
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T
struct emxArray_int8_T {
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int8_T */
#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T
typedef struct emxArray_int8_T emxArray_int8_T;
#endif /* typedef_emxArray_int8_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct {
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_creal_T;
#endif /* typedef_emxArray_creal_T */

#ifndef typedef_cell_wrap_6
#define typedef_cell_wrap_6
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_6;
#endif /* typedef_cell_wrap_6 */

#ifndef struct_emxArray_int16_T
#define struct_emxArray_int16_T
struct emxArray_int16_T {
  int16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int16_T */
#ifndef typedef_emxArray_int16_T
#define typedef_emxArray_int16_T
typedef struct emxArray_int16_T emxArray_int16_T;
#endif /* typedef_emxArray_int16_T */

#ifndef c_typedef_b_dev_g_PCG_newton_pi
#define c_typedef_b_dev_g_PCG_newton_pi
typedef struct {
  real_T Y[5800];
} b_dev_g_PCG_newton_pipg_update;
#endif /* c_typedef_b_dev_g_PCG_newton_pi */

#ifndef typedef_b_dev_newtonpipg_pcg_g
#define typedef_b_dev_newtonpipg_pcg_g
typedef struct {
  real_T L[5800];
} b_dev_newtonpipg_pcg_g;
#endif /* typedef_b_dev_newtonpipg_pcg_g */

#ifndef c_typedef_dev_newtonpipg_pcg_gS
#define c_typedef_dev_newtonpipg_pcg_gS
typedef struct {
  b_dev_g_PCG_newton_pipg_update f0;
  b_dev_newtonpipg_pcg_g f1;
} dev_newtonpipg_pcg_gStackData;
#endif /* c_typedef_dev_newtonpipg_pcg_gS */

/* End of code generation (dev_newtonpipg_pcg_g_types.h) */
