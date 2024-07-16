/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf_p.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_duf_p(const NeDynamicSystem
  *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[27] = { 75, 76, 79, 6, 7, 8, 80, 81, 82, 83, 84, 85,
    90, 91, 99, 104, 155, 156, 157, 180, 181, 182, 183, 184, 185, 186, 88 };

  static int32_T _cg_const_1[4] = { 0, 3, 26, 27 };

  (void)t1;
  (void)LC;
  out->mDUF_P.mNumCol = 3UL;
  out->mDUF_P.mNumRow = 190UL;
  out->mDUF_P.mJc[0] = _cg_const_1[0];
  out->mDUF_P.mJc[1] = _cg_const_1[1];
  out->mDUF_P.mJc[2] = _cg_const_1[2];
  out->mDUF_P.mJc[3] = _cg_const_1[3];
  out->mDUF_P.mIr[0] = _cg_const_2[0];
  out->mDUF_P.mIr[1] = _cg_const_2[1];
  out->mDUF_P.mIr[2] = _cg_const_2[2];
  out->mDUF_P.mIr[3] = _cg_const_2[3];
  out->mDUF_P.mIr[4] = _cg_const_2[4];
  out->mDUF_P.mIr[5] = _cg_const_2[5];
  out->mDUF_P.mIr[6] = _cg_const_2[6];
  out->mDUF_P.mIr[7] = _cg_const_2[7];
  out->mDUF_P.mIr[8] = _cg_const_2[8];
  out->mDUF_P.mIr[9] = _cg_const_2[9];
  out->mDUF_P.mIr[10] = _cg_const_2[10];
  out->mDUF_P.mIr[11] = _cg_const_2[11];
  out->mDUF_P.mIr[12] = _cg_const_2[12];
  out->mDUF_P.mIr[13] = _cg_const_2[13];
  out->mDUF_P.mIr[14] = _cg_const_2[14];
  out->mDUF_P.mIr[15] = _cg_const_2[15];
  out->mDUF_P.mIr[16] = _cg_const_2[16];
  out->mDUF_P.mIr[17] = _cg_const_2[17];
  out->mDUF_P.mIr[18] = _cg_const_2[18];
  out->mDUF_P.mIr[19] = _cg_const_2[19];
  out->mDUF_P.mIr[20] = _cg_const_2[20];
  out->mDUF_P.mIr[21] = _cg_const_2[21];
  out->mDUF_P.mIr[22] = _cg_const_2[22];
  out->mDUF_P.mIr[23] = _cg_const_2[23];
  out->mDUF_P.mIr[24] = _cg_const_2[24];
  out->mDUF_P.mIr[25] = _cg_const_2[25];
  out->mDUF_P.mIr[26] = _cg_const_2[26];
  (void)LC;
  (void)out;
  return 0;
}
