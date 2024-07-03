/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m_p.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_m_p(const NeDynamicSystem
  *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[191] = { 0, 2, 3, 4, 5, 6, 7, 9, 10, 12, 13, 14, 15,
    17, 18, 19, 20, 21, 23, 24, 25, 27, 28, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29 };

  static int32_T _cg_const_2[29] = { 12, 13, 0, 16, 1, 2, 3, 3, 4, 5, 6, 7, 6, 8,
    9, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 19, 20, 21, 22 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mM_P.mNumCol = 190UL;
  out->mM_P.mNumRow = 190UL;
  for (i = 0; i < 191; i++) {
    out->mM_P.mJc[i] = _cg_const_1[i];
  }

  out->mM_P.mIr[0] = _cg_const_2[0];
  out->mM_P.mIr[1] = _cg_const_2[1];
  out->mM_P.mIr[2] = _cg_const_2[2];
  out->mM_P.mIr[3] = _cg_const_2[3];
  out->mM_P.mIr[4] = _cg_const_2[4];
  out->mM_P.mIr[5] = _cg_const_2[5];
  out->mM_P.mIr[6] = _cg_const_2[6];
  out->mM_P.mIr[7] = _cg_const_2[7];
  out->mM_P.mIr[8] = _cg_const_2[8];
  out->mM_P.mIr[9] = _cg_const_2[9];
  out->mM_P.mIr[10] = _cg_const_2[10];
  out->mM_P.mIr[11] = _cg_const_2[11];
  out->mM_P.mIr[12] = _cg_const_2[12];
  out->mM_P.mIr[13] = _cg_const_2[13];
  out->mM_P.mIr[14] = _cg_const_2[14];
  out->mM_P.mIr[15] = _cg_const_2[15];
  out->mM_P.mIr[16] = _cg_const_2[16];
  out->mM_P.mIr[17] = _cg_const_2[17];
  out->mM_P.mIr[18] = _cg_const_2[18];
  out->mM_P.mIr[19] = _cg_const_2[19];
  out->mM_P.mIr[20] = _cg_const_2[20];
  out->mM_P.mIr[21] = _cg_const_2[21];
  out->mM_P.mIr[22] = _cg_const_2[22];
  out->mM_P.mIr[23] = _cg_const_2[23];
  out->mM_P.mIr[24] = _cg_const_2[24];
  out->mM_P.mIr[25] = _cg_const_2[25];
  out->mM_P.mIr[26] = _cg_const_2[26];
  out->mM_P.mIr[27] = _cg_const_2[27];
  out->mM_P.mIr[28] = _cg_const_2[28];
  (void)LC;
  (void)out;
  return 0;
}
