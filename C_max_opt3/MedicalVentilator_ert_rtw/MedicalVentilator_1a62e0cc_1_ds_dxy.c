/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_dxy.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_dxy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t27, NeDsMethodOutput *out)
{
  real_T intermediate_der1203;
  real_T intermediate_der1206;
  real_T intermediate_der1207;
  real_T intermediate_der1208;
  real_T t26;
  (void)LC;
  if (t27->mX.mX[148UL] <= 0.0) {
    intermediate_der1206 = 0.0;
  } else {
    intermediate_der1206 = t27->mX.mX[148UL] >= 1.0 ? 1.0 : t27->mX.mX[148UL];
  }

  intermediate_der1207 = (1.0 - intermediate_der1206) * 287.047 +
    intermediate_der1206 * 461.523;
  intermediate_der1206 = t27->mX.mX[2UL] / (intermediate_der1207 == 0.0 ?
    1.0E-16 : intermediate_der1207) / (t27->mX.mX[147UL] == 0.0 ? 1.0E-16 :
    t27->mX.mX[147UL]);
  if (t27->mX.mX[148UL] <= 0.0) {
    intermediate_der1208 = 0.0;
  } else {
    intermediate_der1208 = (real_T)!(t27->mX.mX[148UL] >= 1.0);
  }

  intermediate_der1203 = -intermediate_der1208 * 287.047 + intermediate_der1208 *
    461.523;
  intermediate_der1208 = 1.0 / (intermediate_der1207 == 0.0 ? 1.0E-16 :
    intermediate_der1207) / (t27->mX.mX[147UL] == 0.0 ? 1.0E-16 : t27->mX.mX
    [147UL]);
  t26 = intermediate_der1207 * intermediate_der1207;
  intermediate_der1203 = -t27->mX.mX[2UL] / (t26 == 0.0 ? 1.0E-16 : t26) *
    intermediate_der1203 / (t27->mX.mX[147UL] == 0.0 ? 1.0E-16 : t27->mX.mX
    [147UL]);
  t26 = t27->mX.mX[147UL] * t27->mX.mX[147UL];
  intermediate_der1207 = -(t27->mX.mX[2UL] / (intermediate_der1207 == 0.0 ?
    1.0E-16 : intermediate_der1207)) / (t26 == 0.0 ? 1.0E-16 : t26);
  t26 = intermediate_der1206 * intermediate_der1206;
  intermediate_der1207 = t27->mX.mX[154UL] / (t26 == 0.0 ? 1.0E-16 : t26) *
    intermediate_der1207 * 10.0;
  out->mDXY.mX[0UL] = 99999.999999999985;
  out->mDXY.mX[1UL] = t27->mX.mX[154UL] / (t26 == 0.0 ? 1.0E-16 : t26) *
    intermediate_der1208 * 10.0 * 0.060000000000000012;
  out->mDXY.mX[2UL] = 1.0;
  out->mDXY.mX[3UL] = intermediate_der1207 * 0.060000000000000012;
  out->mDXY.mX[4UL] = t27->mX.mX[154UL] / (t26 == 0.0 ? 1.0E-16 : t26) *
    intermediate_der1203 * 10.0 * 0.060000000000000012;
  out->mDXY.mX[5UL] = -1.0 / (intermediate_der1206 == 0.0 ? 1.0E-16 :
    intermediate_der1206) * 10.0 * 0.060000000000000012;
  (void)LC;
  (void)out;
  return 0;
}
