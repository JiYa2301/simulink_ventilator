/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_dnf_p.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_dnf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[725] = { 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13,
    13, 13, 13, 13, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 18, 18, 18, 18, 19, 19, 19,
    19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
    21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 22, 22,
    22, 22, 22, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
    23, 23, 23, 23, 23, 23, 23, 23, 23, 24, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 29, 30, 30, 30,
    30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 31, 31, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32, 32, 32, 32, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
    33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 35, 35, 35, 35, 35, 35, 35, 35,
    35, 35, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
    36, 36, 36, 36, 36, 36, 36, 36, 36, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 38, 38, 38, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
    39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 40, 40, 40, 40, 40, 40, 40,
    40, 40, 40, 40, 40, 40, 40, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41 };

  static int32_T _cg_const_2[41] = { 188, 187, 103, 186, 167, 166, 46, 36, 163,
    163, 177, 179, 185, 147, 149, 151, 76, 109, 109, 109, 85, 58, 184, 163, 100,
    102, 76, 123, 125, 54, 57, 54, 112, 68, 70, 54, 46, 113, 135, 36, 29 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mDNF_P.mNumCol = 724UL;
  out->mDNF_P.mNumRow = 190UL;
  for (i = 0; i < 725; i++) {
    out->mDNF_P.mJc[i] = _cg_const_1[i];
  }

  out->mDNF_P.mIr[0] = _cg_const_2[0];
  out->mDNF_P.mIr[1] = _cg_const_2[1];
  out->mDNF_P.mIr[2] = _cg_const_2[2];
  out->mDNF_P.mIr[3] = _cg_const_2[3];
  out->mDNF_P.mIr[4] = _cg_const_2[4];
  out->mDNF_P.mIr[5] = _cg_const_2[5];
  out->mDNF_P.mIr[6] = _cg_const_2[6];
  out->mDNF_P.mIr[7] = _cg_const_2[7];
  out->mDNF_P.mIr[8] = _cg_const_2[8];
  out->mDNF_P.mIr[9] = _cg_const_2[9];
  out->mDNF_P.mIr[10] = _cg_const_2[10];
  out->mDNF_P.mIr[11] = _cg_const_2[11];
  out->mDNF_P.mIr[12] = _cg_const_2[12];
  out->mDNF_P.mIr[13] = _cg_const_2[13];
  out->mDNF_P.mIr[14] = _cg_const_2[14];
  out->mDNF_P.mIr[15] = _cg_const_2[15];
  out->mDNF_P.mIr[16] = _cg_const_2[16];
  out->mDNF_P.mIr[17] = _cg_const_2[17];
  out->mDNF_P.mIr[18] = _cg_const_2[18];
  out->mDNF_P.mIr[19] = _cg_const_2[19];
  out->mDNF_P.mIr[20] = _cg_const_2[20];
  out->mDNF_P.mIr[21] = _cg_const_2[21];
  out->mDNF_P.mIr[22] = _cg_const_2[22];
  out->mDNF_P.mIr[23] = _cg_const_2[23];
  out->mDNF_P.mIr[24] = _cg_const_2[24];
  out->mDNF_P.mIr[25] = _cg_const_2[25];
  out->mDNF_P.mIr[26] = _cg_const_2[26];
  out->mDNF_P.mIr[27] = _cg_const_2[27];
  out->mDNF_P.mIr[28] = _cg_const_2[28];
  out->mDNF_P.mIr[29] = _cg_const_2[29];
  out->mDNF_P.mIr[30] = _cg_const_2[30];
  out->mDNF_P.mIr[31] = _cg_const_2[31];
  out->mDNF_P.mIr[32] = _cg_const_2[32];
  out->mDNF_P.mIr[33] = _cg_const_2[33];
  out->mDNF_P.mIr[34] = _cg_const_2[34];
  out->mDNF_P.mIr[35] = _cg_const_2[35];
  out->mDNF_P.mIr[36] = _cg_const_2[36];
  out->mDNF_P.mIr[37] = _cg_const_2[37];
  out->mDNF_P.mIr[38] = _cg_const_2[38];
  out->mDNF_P.mIr[39] = _cg_const_2[39];
  out->mDNF_P.mIr[40] = _cg_const_2[40];
  (void)LC;
  (void)out;
  return 0;
}
