/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_dxm_p.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_dxm_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[191] = { 0, 4, 4, 8, 8, 8, 12, 16, 20, 24, 28, 32,
    36, 40, 44, 48, 52, 56, 60, 64, 68, 72, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76, 76,
    76, 76, 76, 76, 76, 76, 76, 76 };

  static int32_T _cg_const_2[76] = { 0, 1, 18, 19, 3, 21, 22, 23, 6, 7, 8, 9, 6,
    7, 8, 9, 6, 7, 8, 9, 10, 11, 12, 13, 10, 11, 12, 13, 10, 11, 12, 13, 14, 15,
    16, 17, 14, 15, 16, 17, 14, 15, 16, 17, 0, 1, 18, 19, 0, 1, 18, 19, 0, 1, 18,
    19, 3, 21, 22, 23, 3, 21, 22, 23, 24, 25, 26, 27, 24, 25, 26, 27, 24, 25, 26,
    27 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXM_P.mNumCol = 190UL;
  out->mDXM_P.mNumRow = 29UL;
  for (i = 0; i < 191; i++) {
    out->mDXM_P.mJc[i] = _cg_const_1[i];
  }

  out->mDXM_P.mIr[0] = _cg_const_2[0];
  out->mDXM_P.mIr[1] = _cg_const_2[1];
  out->mDXM_P.mIr[2] = _cg_const_2[2];
  out->mDXM_P.mIr[3] = _cg_const_2[3];
  out->mDXM_P.mIr[4] = _cg_const_2[4];
  out->mDXM_P.mIr[5] = _cg_const_2[5];
  out->mDXM_P.mIr[6] = _cg_const_2[6];
  out->mDXM_P.mIr[7] = _cg_const_2[7];
  out->mDXM_P.mIr[8] = _cg_const_2[8];
  out->mDXM_P.mIr[9] = _cg_const_2[9];
  out->mDXM_P.mIr[10] = _cg_const_2[10];
  out->mDXM_P.mIr[11] = _cg_const_2[11];
  out->mDXM_P.mIr[12] = _cg_const_2[12];
  out->mDXM_P.mIr[13] = _cg_const_2[13];
  out->mDXM_P.mIr[14] = _cg_const_2[14];
  out->mDXM_P.mIr[15] = _cg_const_2[15];
  out->mDXM_P.mIr[16] = _cg_const_2[16];
  out->mDXM_P.mIr[17] = _cg_const_2[17];
  out->mDXM_P.mIr[18] = _cg_const_2[18];
  out->mDXM_P.mIr[19] = _cg_const_2[19];
  out->mDXM_P.mIr[20] = _cg_const_2[20];
  out->mDXM_P.mIr[21] = _cg_const_2[21];
  out->mDXM_P.mIr[22] = _cg_const_2[22];
  out->mDXM_P.mIr[23] = _cg_const_2[23];
  out->mDXM_P.mIr[24] = _cg_const_2[24];
  out->mDXM_P.mIr[25] = _cg_const_2[25];
  out->mDXM_P.mIr[26] = _cg_const_2[26];
  out->mDXM_P.mIr[27] = _cg_const_2[27];
  out->mDXM_P.mIr[28] = _cg_const_2[28];
  out->mDXM_P.mIr[29] = _cg_const_2[29];
  out->mDXM_P.mIr[30] = _cg_const_2[30];
  out->mDXM_P.mIr[31] = _cg_const_2[31];
  out->mDXM_P.mIr[32] = _cg_const_2[32];
  out->mDXM_P.mIr[33] = _cg_const_2[33];
  out->mDXM_P.mIr[34] = _cg_const_2[34];
  out->mDXM_P.mIr[35] = _cg_const_2[35];
  out->mDXM_P.mIr[36] = _cg_const_2[36];
  out->mDXM_P.mIr[37] = _cg_const_2[37];
  out->mDXM_P.mIr[38] = _cg_const_2[38];
  out->mDXM_P.mIr[39] = _cg_const_2[39];
  out->mDXM_P.mIr[40] = _cg_const_2[40];
  out->mDXM_P.mIr[41] = _cg_const_2[41];
  out->mDXM_P.mIr[42] = _cg_const_2[42];
  out->mDXM_P.mIr[43] = _cg_const_2[43];
  out->mDXM_P.mIr[44] = _cg_const_2[44];
  out->mDXM_P.mIr[45] = _cg_const_2[45];
  out->mDXM_P.mIr[46] = _cg_const_2[46];
  out->mDXM_P.mIr[47] = _cg_const_2[47];
  out->mDXM_P.mIr[48] = _cg_const_2[48];
  out->mDXM_P.mIr[49] = _cg_const_2[49];
  out->mDXM_P.mIr[50] = _cg_const_2[50];
  out->mDXM_P.mIr[51] = _cg_const_2[51];
  out->mDXM_P.mIr[52] = _cg_const_2[52];
  out->mDXM_P.mIr[53] = _cg_const_2[53];
  out->mDXM_P.mIr[54] = _cg_const_2[54];
  out->mDXM_P.mIr[55] = _cg_const_2[55];
  out->mDXM_P.mIr[56] = _cg_const_2[56];
  out->mDXM_P.mIr[57] = _cg_const_2[57];
  out->mDXM_P.mIr[58] = _cg_const_2[58];
  out->mDXM_P.mIr[59] = _cg_const_2[59];
  out->mDXM_P.mIr[60] = _cg_const_2[60];
  out->mDXM_P.mIr[61] = _cg_const_2[61];
  out->mDXM_P.mIr[62] = _cg_const_2[62];
  out->mDXM_P.mIr[63] = _cg_const_2[63];
  out->mDXM_P.mIr[64] = _cg_const_2[64];
  out->mDXM_P.mIr[65] = _cg_const_2[65];
  out->mDXM_P.mIr[66] = _cg_const_2[66];
  out->mDXM_P.mIr[67] = _cg_const_2[67];
  out->mDXM_P.mIr[68] = _cg_const_2[68];
  out->mDXM_P.mIr[69] = _cg_const_2[69];
  out->mDXM_P.mIr[70] = _cg_const_2[70];
  out->mDXM_P.mIr[71] = _cg_const_2[71];
  out->mDXM_P.mIr[72] = _cg_const_2[72];
  out->mDXM_P.mIr[73] = _cg_const_2[73];
  out->mDXM_P.mIr[74] = _cg_const_2[74];
  out->mDXM_P.mIr[75] = _cg_const_2[75];
  (void)LC;
  (void)out;
  return 0;
}
