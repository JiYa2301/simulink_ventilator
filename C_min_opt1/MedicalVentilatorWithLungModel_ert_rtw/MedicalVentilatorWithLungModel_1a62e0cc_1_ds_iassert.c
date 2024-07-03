/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_iassert.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_iassert(const
  NeDynamicSystem *LC, const NeDynamicSystemInput *t41, NeDsMethodOutput *out)
{
  ETTSf3049b48 t5;
  real_T t31[1];
  real_T t40[1];
  real_T Expiratory_Tube_p_ws_ratio_I;
  real_T Humidifier_Moist_Air_Volume_p_ws_ratio_I;
  real_T Inspiratory_Tube_p_ws_ratio_I;
  real_T Lungs_p_ws_ratio_I;
  real_T Mask_p_ws_ratio_I;
  real_T Trachea_p_ws_ratio_I;
  size_t t7[1];
  size_t t8[1];
  t31[0UL] = t41->mX.mX[6UL];
  t7[0] = 52UL;
  t8[0] = 1UL;
  tlu2_linear_linear_prelookup(&t5.mField0[0UL], &t5.mField1[0UL], &t5.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t31[0UL], &t7[0UL], &t8[0UL]);
  tlu2_1d_linear_linear_value(&t40[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t7[0UL], &t8[0UL]);
  Expiratory_Tube_p_ws_ratio_I = pmf_exp(pmf_log(t41->mX.mX[5UL] * 100000.0) -
    t40[0UL]);
  t31[0UL] = t41->mX.mX[8UL];
  tlu2_linear_linear_prelookup(&t5.mField0[0UL], &t5.mField1[0UL], &t5.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t31[0UL], &t7[0UL], &t8[0UL]);
  tlu2_1d_linear_linear_value(&t40[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t7[0UL], &t8[0UL]);
  Humidifier_Moist_Air_Volume_p_ws_ratio_I = pmf_exp(pmf_log(t41->mX.mX[9UL] *
    100000.0) - t40[0UL]);
  t31[0UL] = t41->mX.mX[12UL];
  tlu2_linear_linear_prelookup(&t5.mField0[0UL], &t5.mField1[0UL], &t5.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t31[0UL], &t7[0UL], &t8[0UL]);
  tlu2_1d_linear_linear_value(&t40[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t7[0UL], &t8[0UL]);
  Inspiratory_Tube_p_ws_ratio_I = pmf_exp(pmf_log(t41->mX.mX[11UL] * 100000.0) -
    t40[0UL]);
  t31[0UL] = t41->mX.mX[0UL];
  tlu2_linear_linear_prelookup(&t5.mField0[0UL], &t5.mField1[0UL], &t5.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t31[0UL], &t7[0UL], &t8[0UL]);
  tlu2_1d_linear_linear_value(&t40[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t7[0UL], &t8[0UL]);
  Lungs_p_ws_ratio_I = pmf_exp(pmf_log(t41->mX.mX[14UL] * 100000.0) - t40[0UL]);
  t31[0UL] = t41->mX.mX[17UL];
  tlu2_linear_linear_prelookup(&t5.mField0[0UL], &t5.mField1[0UL], &t5.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t31[0UL], &t7[0UL], &t8[0UL]);
  tlu2_1d_linear_linear_value(&t40[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t7[0UL], &t8[0UL]);
  Mask_p_ws_ratio_I = pmf_exp(pmf_log(t41->mX.mX[2UL] * 100000.0) - t40[0UL]);
  t31[0UL] = t41->mX.mX[20UL];
  tlu2_linear_linear_prelookup(&t5.mField0[0UL], &t5.mField1[0UL], &t5.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t31[0UL], &t7[0UL], &t8[0UL]);
  tlu2_1d_linear_linear_value(&t31[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t7[0UL], &t8[0UL]);
  Trachea_p_ws_ratio_I = pmf_exp(pmf_log(t41->mX.mX[19UL] * 100000.0) - t31[0UL]);
  out->mIASSERT.mX[0UL] = (int32_T)(t41->mX.mX[63UL] <=
    Expiratory_Tube_p_ws_ratio_I);
  out->mIASSERT.mX[1UL] = (int32_T)(t41->mX.mX[63UL] <= 1.0);
  out->mIASSERT.mX[2UL] = (int32_T)(t41->mX.mX[7UL] <= 1.0);
  out->mIASSERT.mX[3UL] = (int32_T)(1.0 - t41->mX.mX[7UL] >= 0.0);
  out->mIASSERT.mX[4UL] = (int32_T)(t41->mX.mX[109UL] <=
    Humidifier_Moist_Air_Volume_p_ws_ratio_I);
  out->mIASSERT.mX[5UL] = (int32_T)(t41->mX.mX[109UL] <= 1.0);
  out->mIASSERT.mX[6UL] = (int32_T)(t41->mX.mX[10UL] <= 1.0);
  out->mIASSERT.mX[7UL] = (int32_T)(1.0 - t41->mX.mX[10UL] >= 0.0);
  out->mIASSERT.mX[8UL] = (int32_T)(t41->mX.mX[122UL] <=
    Inspiratory_Tube_p_ws_ratio_I);
  out->mIASSERT.mX[9UL] = (int32_T)(t41->mX.mX[122UL] <= 1.0);
  out->mIASSERT.mX[10UL] = (int32_T)(t41->mX.mX[13UL] <= 1.0);
  out->mIASSERT.mX[11UL] = (int32_T)(1.0 - t41->mX.mX[13UL] >= 0.0);
  out->mIASSERT.mX[12UL] = (int32_T)(t41->mX.mX[137UL] <= Lungs_p_ws_ratio_I);
  out->mIASSERT.mX[13UL] = (int32_T)(t41->mX.mX[137UL] <= 1.0);
  out->mIASSERT.mX[14UL] = (int32_T)(t41->mX.mX[15UL] <= 1.0);
  out->mIASSERT.mX[15UL] = (int32_T)(1.0 - t41->mX.mX[15UL] >= 0.0);
  out->mIASSERT.mX[16UL] = (int32_T)(t41->mX.mX[150UL] <= Mask_p_ws_ratio_I);
  out->mIASSERT.mX[17UL] = (int32_T)(t41->mX.mX[150UL] <= 1.0);
  out->mIASSERT.mX[18UL] = (int32_T)(t41->mX.mX[18UL] <= 1.0);
  out->mIASSERT.mX[19UL] = (int32_T)(1.0 - t41->mX.mX[18UL] >= 0.0);
  out->mIASSERT.mX[20UL] = (int32_T)(t41->mX.mX[172UL] <= Trachea_p_ws_ratio_I);
  out->mIASSERT.mX[21UL] = (int32_T)(t41->mX.mX[172UL] <= 1.0);
  out->mIASSERT.mX[22UL] = (int32_T)(t41->mX.mX[21UL] <= 1.0);
  out->mIASSERT.mX[23UL] = (int32_T)(1.0 - t41->mX.mX[21UL] >= 0.0);
  (void)LC;
  (void)out;
  return 0;
}
