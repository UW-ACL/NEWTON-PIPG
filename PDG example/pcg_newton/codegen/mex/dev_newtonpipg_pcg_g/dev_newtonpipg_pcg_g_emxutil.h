/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_newtonpipg_pcg_g_emxutil.h
 *
 * Code generation for function 'dev_newtonpipg_pcg_g_emxutil'
 *
 */

#pragma once

/* Include files */
#include "dev_newtonpipg_pcg_g_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emxEnsureCapacity_boolean_T(const emlrtStack *sp,
                                 emxArray_boolean_T *emxArray, int32_T oldNumel,
                                 const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_creal_T(const emlrtStack *sp, emxArray_creal_T *emxArray,
                               int32_T oldNumel,
                               const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_int16_T(const emlrtStack *sp, emxArray_int16_T *emxArray,
                               int32_T oldNumel,
                               const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_int32_T(const emlrtStack *sp, emxArray_int32_T *emxArray,
                               int32_T oldNumel,
                               const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_int8_T(const emlrtStack *sp, emxArray_int8_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxFreeMatrix_cell_wrap_6(const emlrtStack *sp, cell_wrap_6 pMatrix[2]);

void emxFreeStruct_cell_wrap_6(const emlrtStack *sp, cell_wrap_6 *pStruct);

void emxFreeStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct);

void emxFree_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray);

void emxFree_creal_T(const emlrtStack *sp, emxArray_creal_T **pEmxArray);

void emxFree_int16_T(const emlrtStack *sp, emxArray_int16_T **pEmxArray);

void emxFree_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray);

void emxFree_int8_T(const emlrtStack *sp, emxArray_int8_T **pEmxArray);

void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);

void emxInitMatrix_cell_wrap_6(const emlrtStack *sp, cell_wrap_6 pMatrix[2],
                               const emlrtRTEInfo *srcLocation);

void emxInitStruct_cell_wrap_6(const emlrtStack *sp, cell_wrap_6 *pStruct,
                               const emlrtRTEInfo *srcLocation);

void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
                             const emlrtRTEInfo *srcLocation);

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
                       const emlrtRTEInfo *srcLocation);

void emxInit_creal_T(const emlrtStack *sp, emxArray_creal_T **pEmxArray,
                     int32_T numDimensions, const emlrtRTEInfo *srcLocation);

void emxInit_int16_T(const emlrtStack *sp, emxArray_int16_T **pEmxArray,
                     const emlrtRTEInfo *srcLocation);

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
                     int32_T numDimensions, const emlrtRTEInfo *srcLocation);

void emxInit_int8_T(const emlrtStack *sp, emxArray_int8_T **pEmxArray,
                    const emlrtRTEInfo *srcLocation);

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation);

/* End of code generation (dev_newtonpipg_pcg_g_emxutil.h) */
