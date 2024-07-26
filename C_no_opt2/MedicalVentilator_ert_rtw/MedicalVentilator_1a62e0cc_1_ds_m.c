/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_m.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_m(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t74, NeDsMethodOutput *out)
{
  real_T Expiratory_Tube_rho_I;
  real_T Humidifier_Moist_Air_Volume_rho_I;
  real_T Inspiratory_Tube_rho_I;
  real_T Mask_rho_I;
  real_T Trachea_rho_I;
  real_T intrm_sf_mf_433;
  real_T intrm_sf_mf_437;
  real_T intrm_sf_mf_482;
  real_T intrm_sf_mf_483;
  real_T t15;
  real_T t18;
  real_T t21;
  real_T t24;
  real_T t27;
  real_T t30;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t37;
  real_T t39;
  real_T t41;
  real_T t42;
  real_T t44;
  real_T t46;
  real_T t48;
  real_T t50;
  real_T t54;
  real_T t56;
  real_T t63;
  real_T t73;
  (void)LC;
  if (t74->mX.mX[7UL] <= 0.0) {
    t73 = 0.0;
  } else {
    t73 = t74->mX.mX[7UL] >= 1.0 ? 1.0 : t74->mX.mX[7UL];
  }

  t34 = (1.0 - t73) * 287.047 + t73 * 461.523;
  t44 = t74->mX.mX[6UL] * t34;
  Expiratory_Tube_rho_I = t74->mX.mX[5UL] / (t44 == 0.0 ? 1.0E-16 : t44);
  if (t74->mX.mX[6UL] <= 216.59999999999997) {
    t44 = 216.59999999999997;
  } else {
    t44 = t74->mX.mX[6UL] >= 623.15 ? 623.15 : t74->mX.mX[6UL];
  }

  t15 = t44 * t44;
  if (t74->mX.mX[10UL] <= 0.0) {
    intrm_sf_mf_433 = 0.0;
  } else {
    intrm_sf_mf_433 = t74->mX.mX[10UL] >= 1.0 ? 1.0 : t74->mX.mX[10UL];
  }

  t37 = (1.0 - intrm_sf_mf_433) * 287.047 + intrm_sf_mf_433 * 461.523;
  t46 = t74->mX.mX[8UL] * t37;
  Humidifier_Moist_Air_Volume_rho_I = t74->mX.mX[9UL] / (t46 == 0.0 ? 1.0E-16 :
    t46);
  if (t74->mX.mX[8UL] <= 216.59999999999997) {
    t46 = 216.59999999999997;
  } else {
    t46 = t74->mX.mX[8UL] >= 623.15 ? 623.15 : t74->mX.mX[8UL];
  }

  t18 = t46 * t46;
  if (t74->mX.mX[13UL] <= 0.0) {
    t42 = 0.0;
  } else {
    t42 = t74->mX.mX[13UL] >= 1.0 ? 1.0 : t74->mX.mX[13UL];
  }

  t39 = (1.0 - t42) * 287.047 + t42 * 461.523;
  t48 = t74->mX.mX[12UL] * t39;
  Inspiratory_Tube_rho_I = t74->mX.mX[11UL] / (t48 == 0.0 ? 1.0E-16 : t48);
  if (t74->mX.mX[12UL] <= 216.59999999999997) {
    t48 = 216.59999999999997;
  } else {
    t48 = t74->mX.mX[12UL] >= 623.15 ? 623.15 : t74->mX.mX[12UL];
  }

  t21 = t48 * t48;
  if (t74->mX.mX[15UL] <= 0.0) {
    t33 = 0.0;
  } else {
    t33 = t74->mX.mX[15UL] >= 1.0 ? 1.0 : t74->mX.mX[15UL];
  }

  t35 = (1.0 - t33) * 287.047 + t33 * 461.523;
  t50 = t74->mX.mX[0UL] * t35;
  t50 = t74->mX.mX[14UL] / (t50 == 0.0 ? 1.0E-16 : t50);
  if (t74->mX.mX[0UL] <= 216.59999999999997) {
    t41 = 216.59999999999997;
  } else {
    t41 = t74->mX.mX[0UL] >= 623.15 ? 623.15 : t74->mX.mX[0UL];
  }

  t24 = t41 * t41;
  if (t74->mX.mX[18UL] <= 0.0) {
    t63 = 0.0;
  } else {
    t63 = t74->mX.mX[18UL] >= 1.0 ? 1.0 : t74->mX.mX[18UL];
  }

  intrm_sf_mf_437 = (1.0 - t63) * 287.047 + t63 * 461.523;
  t56 = t74->mX.mX[17UL] * intrm_sf_mf_437;
  Mask_rho_I = t74->mX.mX[2UL] / (t56 == 0.0 ? 1.0E-16 : t56);
  if (t74->mX.mX[17UL] <= 216.59999999999997) {
    t56 = 216.59999999999997;
  } else {
    t56 = t74->mX.mX[17UL] >= 623.15 ? 623.15 : t74->mX.mX[17UL];
  }

  t27 = t56 * t56;
  if (t74->mX.mX[21UL] <= 0.0) {
    intrm_sf_mf_482 = 0.0;
  } else {
    intrm_sf_mf_482 = t74->mX.mX[21UL] >= 1.0 ? 1.0 : t74->mX.mX[21UL];
  }

  intrm_sf_mf_483 = (1.0 - intrm_sf_mf_482) * 287.047 + intrm_sf_mf_482 *
    461.523;
  t54 = t74->mX.mX[20UL] * intrm_sf_mf_483;
  Trachea_rho_I = t74->mX.mX[19UL] / (t54 == 0.0 ? 1.0E-16 : t54);
  if (t74->mX.mX[20UL] <= 216.59999999999997) {
    t54 = 216.59999999999997;
  } else {
    t54 = t74->mX.mX[20UL] >= 623.15 ? 623.15 : t74->mX.mX[20UL];
  }

  t30 = t54 * t54;
  out->mM.mX[0UL] = -(1.0 / (t74->mX.mX[0UL] == 0.0 ? 1.0E-16 : t74->mX.mX[0UL]))
    * t50 * (t74->mX.mX[16UL] + 1.0E-6) * 100000.0 / 1.2922971759239461;
  out->mM.mX[1UL] = ((((1026.6477992877929 + t41 * -0.17751557357783998) + t24 *
                       0.00036658178515919438) * (1.0 - t33) +
                      ((1479.6504774710256 + t41 * 1.2002114337051653) + t24 *
                       -0.00038614513167858997) * t33) - t35) * t50 *
    (t74->mX.mX[16UL] + 1.0E-6) * 100.0 / 101.325;
  out->mM.mX[7UL] = -(1.0 / (t74->mX.mX[6UL] == 0.0 ? 1.0E-16 : t74->mX.mX[6UL]))
    * Expiratory_Tube_rho_I * 7.8539816339744828;
  out->mM.mX[8UL] = ((((1026.6477992877929 + t44 * -0.17751557357783998) + t15 *
                       0.00036658178515919438) * (1.0 - t73) +
                      ((1479.6504774710256 + t44 * 1.2002114337051653) + t15 *
                       -0.00038614513167858997) * t73) - t34) *
    Expiratory_Tube_rho_I * 0.0078539816339744835 / 78.406888049999992;
  out->mM.mX[10UL] = -(1.0 / (t74->mX.mX[8UL] == 0.0 ? 1.0E-16 : t74->mX.mX[8UL]))
    * Humidifier_Moist_Air_Volume_rho_I * 100.0;
  out->mM.mX[11UL] = ((((1026.6477992877929 + t46 * -0.17751557357783998) + t18 *
                        0.00036658178515919438) * (1.0 - intrm_sf_mf_433) +
                       ((1479.6504774710256 + t46 * 1.2002114337051653) + t18 *
                        -0.00038614513167858997) * intrm_sf_mf_433) - t37) *
    Humidifier_Moist_Air_Volume_rho_I * 0.1 / 78.406888049999992;
  out->mM.mX[15UL] = -(1.0 / (t74->mX.mX[12UL] == 0.0 ? 1.0E-16 : t74->mX.mX
    [12UL])) * Inspiratory_Tube_rho_I * 7.8539816339744828;
  out->mM.mX[16UL] = ((((1026.6477992877929 + t48 * -0.17751557357783998) + t21 *
                        0.00036658178515919438) * (1.0 - t42) +
                       ((1479.6504774710256 + t48 * 1.2002114337051653) + t21 *
                        -0.00038614513167858997) * t42) - t39) *
    Inspiratory_Tube_rho_I * 0.0078539816339744835 / 78.406888049999992;
  out->mM.mX[21UL] = -(1.0 / (t74->mX.mX[17UL] == 0.0 ? 1.0E-16 : t74->mX.mX
    [17UL])) * Mask_rho_I * 20.0;
  out->mM.mX[22UL] = ((((1026.6477992877929 + t56 * -0.17751557357783998) + t27 *
                        0.00036658178515919438) * (1.0 - t63) +
                       ((1479.6504774710256 + t56 * 1.2002114337051653) + t27 *
                        -0.00038614513167858997) * t63) - intrm_sf_mf_437) *
    Mask_rho_I * 0.02 / 78.406888049999992;
  out->mM.mX[25UL] = -(1.0 / (t74->mX.mX[20UL] == 0.0 ? 1.0E-16 : t74->mX.mX
    [20UL])) * Trachea_rho_I * 2.6507188014663878;
  out->mM.mX[26UL] = ((((1026.6477992877929 + t54 * -0.17751557357783998) + t30 *
                        0.00036658178515919438) * (1.0 - intrm_sf_mf_482) +
                       ((1479.6504774710256 + t54 * 1.2002114337051653) + t30 *
                        -0.00038614513167858997) * intrm_sf_mf_482) -
                      intrm_sf_mf_483) * Trachea_rho_I * 0.0026507188014663879 /
    78.406888049999992;
  out->mM.mX[2UL] = 0.1;
  out->mM.mX[3UL] = 1.0 / (t74->mX.mX[2UL] == 0.0 ? 1.0E-16 : t74->mX.mX[2UL]) *
    Mask_rho_I * 20.0;
  out->mM.mX[4UL] = 0.1;
  out->mM.mX[5UL] = -1.0;
  out->mM.mX[6UL] = 1.0 / (t74->mX.mX[5UL] == 0.0 ? 1.0E-16 : t74->mX.mX[5UL]) *
    Expiratory_Tube_rho_I * 7.8539816339744828;
  out->mM.mX[9UL] = Expiratory_Tube_rho_I * 7.8539816339744828;
  out->mM.mX[12UL] = 1.0 / (t74->mX.mX[9UL] == 0.0 ? 1.0E-16 : t74->mX.mX[9UL]) *
    Humidifier_Moist_Air_Volume_rho_I * 100.0;
  out->mM.mX[13UL] = Humidifier_Moist_Air_Volume_rho_I * 100.0;
  out->mM.mX[14UL] = 1.0 / (t74->mX.mX[11UL] == 0.0 ? 1.0E-16 : t74->mX.mX[11UL])
    * Inspiratory_Tube_rho_I * 7.8539816339744828;
  out->mM.mX[17UL] = Inspiratory_Tube_rho_I * 7.8539816339744828;
  out->mM.mX[18UL] = 1.0 / (t74->mX.mX[14UL] == 0.0 ? 1.0E-16 : t74->mX.mX[14UL])
    * t50 * (t74->mX.mX[16UL] + 1.0E-6) * 100000.0 / 1.2922971759239461;
  out->mM.mX[19UL] = t50 * (t74->mX.mX[16UL] + 1.0E-6) * 100000.0;
  out->mM.mX[20UL] = 1.0;
  out->mM.mX[23UL] = Mask_rho_I * 20.0;
  out->mM.mX[24UL] = 1.0 / (t74->mX.mX[19UL] == 0.0 ? 1.0E-16 : t74->mX.mX[19UL])
    * Trachea_rho_I * 2.6507188014663878;
  out->mM.mX[27UL] = Trachea_rho_I * 2.6507188014663878;
  out->mM.mX[28UL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
