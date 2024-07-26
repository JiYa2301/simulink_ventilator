/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_mode.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t183, NeDsMethodOutput *out)
{
  real_T Check_Valve_2_Valve_rho_R;
  real_T Expiratory_Tube_Dp_BI_choked;
  real_T Inspiratory_Tube_Dp_AI_choked;
  real_T Trachea_Dp_AI_choked;
  real_T Trachea_gamma_AI;
  real_T Trachea_gamma_BI;
  real_T intrm_sf_mf_207;
  real_T intrm_sf_mf_244;
  real_T intrm_sf_mf_250;
  real_T intrm_sf_mf_253;
  real_T intrm_sf_mf_299;
  real_T intrm_sf_mf_300;
  real_T intrm_sf_mf_437;
  real_T intrm_sf_mf_483;
  real_T intrm_sf_mf_54;
  real_T intrm_sf_mf_82;
  real_T intrm_sf_mf_9;
  real_T t1;
  real_T t114;
  real_T t15;
  real_T t152;
  real_T t18;
  real_T t21;
  real_T t29;
  real_T t32;
  real_T t36;
  real_T t39;
  real_T t40;
  real_T t43;
  real_T t46;
  real_T t50;
  real_T t52;
  real_T t53;
  real_T t54;
  real_T t55;
  real_T t59;
  real_T t61;
  real_T t69;
  real_T t76;
  real_T t77;
  real_T t81;
  real_T t86;
  real_T t99;
  (void)LC;
  if (t183->mX.mX[1UL] * 0.0001 <= 5.0E-11) {
    t152 = 5.0E-11;
  } else if (t183->mX.mX[1UL] * 0.0001 >= 7.1078533787469073E-5) {
    t152 = 7.1078533787469073E-5;
  } else {
    t152 = t183->mX.mX[1UL] * 0.0001;
  }

  t114 = t152 / 7.8539816339744827E-5;
  if (t183->mX.mX[35UL] <= 0.0) {
    t152 = 0.0;
  } else {
    t152 = t183->mX.mX[35UL] >= 1.0 ? 1.0 : t183->mX.mX[35UL];
  }

  intrm_sf_mf_9 = (1.0 - t152) * 287.047 + t152 * 461.523;
  t29 = t183->mX.mX[33UL] * intrm_sf_mf_9;
  t99 = t183->mX.mX[34UL] / (t183->mX.mX[27UL] == 0.0 ? 1.0E-16 : t183->mX.mX
    [27UL]) * (t183->mX.mX[36UL] / (t183->mX.mX[33UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[33UL]));
  t32 = t183->mX.mX[34UL] / (t183->mX.mX[2UL] == 0.0 ? 1.0E-16 : t183->mX.mX[2UL])
    * (t183->mX.mX[37UL] / (t183->mX.mX[33UL] == 0.0 ? 1.0E-16 : t183->mX.mX
        [33UL]));
  Check_Valve_2_Valve_rho_R = (t183->mX.mX[2UL] + t183->mX.mX[27UL]) / 2.0 *
    0.0010000000000000009;
  t36 = (1.0 - t114) * (1.0 - t114);
  intrm_sf_mf_54 = Check_Valve_2_Valve_rho_R * t36;
  Expiratory_Tube_Dp_BI_choked = (t114 + 1.0) * (1.0 - t114 * t99) - (1.0 - t114
    * t32) * t114 * 2.0;
  intrm_sf_mf_82 = (t183->mX.mX[27UL] - t183->mX.mX[2UL]) *
    (Expiratory_Tube_Dp_BI_choked >= t36 ? Expiratory_Tube_Dp_BI_choked : t36);
  Expiratory_Tube_Dp_BI_choked = (t183->mX.mX[27UL] - t183->mX.mX[2UL]) /
    (Check_Valve_2_Valve_rho_R == 0.0 ? 1.0E-16 : Check_Valve_2_Valve_rho_R);
  t39 = Expiratory_Tube_Dp_BI_choked * Expiratory_Tube_Dp_BI_choked * 3.0 -
    Expiratory_Tube_Dp_BI_choked * Expiratory_Tube_Dp_BI_choked *
    Expiratory_Tube_Dp_BI_choked * 2.0;
  if (t183->mX.mX[27UL] - t183->mX.mX[2UL] <= 0.0) {
    Expiratory_Tube_Dp_BI_choked = intrm_sf_mf_54;
  } else if (t183->mX.mX[27UL] - t183->mX.mX[2UL] >= Check_Valve_2_Valve_rho_R)
  {
    Expiratory_Tube_Dp_BI_choked = intrm_sf_mf_82;
  } else {
    Expiratory_Tube_Dp_BI_choked = (1.0 - t39) * intrm_sf_mf_54 + intrm_sf_mf_82
      * t39;
  }

  intrm_sf_mf_82 = (t114 + 1.0) * (1.0 - t114 * t32) - (1.0 - t114 * t99) * t114
    * 2.0;
  t114 = (t183->mX.mX[2UL] - t183->mX.mX[27UL]) * (intrm_sf_mf_82 >= t36 ?
    intrm_sf_mf_82 : t36);
  t99 = (t183->mX.mX[2UL] - t183->mX.mX[27UL]) / (Check_Valve_2_Valve_rho_R ==
    0.0 ? 1.0E-16 : Check_Valve_2_Valve_rho_R);
  t32 = t99 * t99 * 3.0 - t99 * t99 * t99 * 2.0;
  if (t183->mX.mX[2UL] - t183->mX.mX[27UL] <= 0.0) {
    t99 = intrm_sf_mf_54;
  } else if (t183->mX.mX[2UL] - t183->mX.mX[27UL] >= Check_Valve_2_Valve_rho_R)
  {
    t99 = t114;
  } else {
    t99 = (1.0 - t32) * intrm_sf_mf_54 + t114 * t32;
  }

  if (t183->mX.mX[27UL] > t183->mX.mX[2UL]) {
    t114 = Expiratory_Tube_Dp_BI_choked;
  } else {
    t114 = t183->mX.mX[27UL] < t183->mX.mX[2UL] ? t99 : intrm_sf_mf_54;
  }

  if (t183->mX.mX[33UL] <= 216.59999999999997) {
    t99 = 216.59999999999997;
  } else {
    t99 = t183->mX.mX[33UL] >= 623.15 ? 623.15 : t183->mX.mX[33UL];
  }

  t40 = t99 * t99;
  t32 = ((1026.6477992877929 + t99 * -0.17751557357783998) + t40 *
         0.00036658178515919438) * (1.0 - t152) + ((1479.6504774710256 + t99 *
    1.2002114337051653) + t40 * -0.00038614513167858997) * t152;
  Check_Valve_2_Valve_rho_R = t32 - intrm_sf_mf_9;
  t152 = t32 / (Check_Valve_2_Valve_rho_R == 0.0 ? 1.0E-16 :
                Check_Valve_2_Valve_rho_R);
  if (t183->mX.mX[3UL] * 0.0001 <= 5.0E-11) {
    t99 = 5.0E-11;
  } else if (t183->mX.mX[3UL] * 0.0001 >= 7.1078533787469073E-5) {
    t99 = 7.1078533787469073E-5;
  } else {
    t99 = t183->mX.mX[3UL] * 0.0001;
  }

  t32 = t99 / 7.8539816339744827E-5;
  if (t183->mX.mX[50UL] <= 0.0) {
    t99 = 0.0;
  } else {
    t99 = t183->mX.mX[50UL] >= 1.0 ? 1.0 : t183->mX.mX[50UL];
  }

  t36 = (1.0 - t99) * 287.047 + t99 * 461.523;
  t43 = t183->mX.mX[48UL] * t36;
  intrm_sf_mf_54 = t183->mX.mX[49UL] / (t183->mX.mX[2UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[2UL]) * (t183->mX.mX[51UL] / (t183->mX.mX[48UL] == 0.0 ? 1.0E-16
    : t183->mX.mX[48UL]));
  Expiratory_Tube_Dp_BI_choked = t183->mX.mX[49UL] / (t183->mX.mX[44UL] == 0.0 ?
    1.0E-16 : t183->mX.mX[44UL]) * (t183->mX.mX[52UL] / (t183->mX.mX[48UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[48UL]));
  t39 = (t183->mX.mX[2UL] + t183->mX.mX[44UL]) / 2.0 * 0.0010000000000000009;
  intrm_sf_mf_82 = (1.0 - t32) * (1.0 - t32);
  t40 = t39 * intrm_sf_mf_82;
  Check_Valve_2_Valve_rho_R = (t32 + 1.0) * (1.0 - t32 * intrm_sf_mf_54) - (1.0
    - t32 * Expiratory_Tube_Dp_BI_choked) * t32 * 2.0;
  t46 = (t183->mX.mX[2UL] - t183->mX.mX[44UL]) * (Check_Valve_2_Valve_rho_R >=
    intrm_sf_mf_82 ? Check_Valve_2_Valve_rho_R : intrm_sf_mf_82);
  Check_Valve_2_Valve_rho_R = (t183->mX.mX[2UL] - t183->mX.mX[44UL]) / (t39 ==
    0.0 ? 1.0E-16 : t39);
  t50 = Check_Valve_2_Valve_rho_R * Check_Valve_2_Valve_rho_R * 3.0 -
    Check_Valve_2_Valve_rho_R * Check_Valve_2_Valve_rho_R *
    Check_Valve_2_Valve_rho_R * 2.0;
  if (t183->mX.mX[2UL] - t183->mX.mX[44UL] <= 0.0) {
    Check_Valve_2_Valve_rho_R = t40;
  } else if (t183->mX.mX[2UL] - t183->mX.mX[44UL] >= t39) {
    Check_Valve_2_Valve_rho_R = t46;
  } else {
    Check_Valve_2_Valve_rho_R = (1.0 - t50) * t40 + t46 * t50;
  }

  t46 = (t32 + 1.0) * (1.0 - t32 * Expiratory_Tube_Dp_BI_choked) - (1.0 - t32 *
    intrm_sf_mf_54) * t32 * 2.0;
  t32 = (t183->mX.mX[44UL] - t183->mX.mX[2UL]) * (t46 >= intrm_sf_mf_82 ? t46 :
    intrm_sf_mf_82);
  intrm_sf_mf_54 = (t183->mX.mX[44UL] - t183->mX.mX[2UL]) / (t39 == 0.0 ?
    1.0E-16 : t39);
  Expiratory_Tube_Dp_BI_choked = intrm_sf_mf_54 * intrm_sf_mf_54 * 3.0 -
    intrm_sf_mf_54 * intrm_sf_mf_54 * intrm_sf_mf_54 * 2.0;
  if (t183->mX.mX[44UL] - t183->mX.mX[2UL] <= 0.0) {
    intrm_sf_mf_54 = t40;
  } else if (t183->mX.mX[44UL] - t183->mX.mX[2UL] >= t39) {
    intrm_sf_mf_54 = t32;
  } else {
    intrm_sf_mf_54 = (1.0 - Expiratory_Tube_Dp_BI_choked) * t40 + t32 *
      Expiratory_Tube_Dp_BI_choked;
  }

  if (t183->mX.mX[2UL] > t183->mX.mX[44UL]) {
    t32 = Check_Valve_2_Valve_rho_R;
  } else {
    t32 = t183->mX.mX[2UL] < t183->mX.mX[44UL] ? intrm_sf_mf_54 : t40;
  }

  if (t183->mX.mX[48UL] <= 216.59999999999997) {
    intrm_sf_mf_54 = 216.59999999999997;
  } else {
    intrm_sf_mf_54 = t183->mX.mX[48UL] >= 623.15 ? 623.15 : t183->mX.mX[48UL];
  }

  t52 = intrm_sf_mf_54 * intrm_sf_mf_54;
  Expiratory_Tube_Dp_BI_choked = ((1026.6477992877929 + intrm_sf_mf_54 *
    -0.17751557357783998) + t52 * 0.00036658178515919438) * (1.0 - t99) +
    ((1479.6504774710256 + intrm_sf_mf_54 * 1.2002114337051653) + t52 *
     -0.00038614513167858997) * t99;
  t55 = Expiratory_Tube_Dp_BI_choked - t36;
  if (t183->mX.mX[7UL] <= 0.0) {
    intrm_sf_mf_82 = 0.0;
  } else {
    intrm_sf_mf_82 = t183->mX.mX[7UL] >= 1.0 ? 1.0 : t183->mX.mX[7UL];
  }

  t39 = (1.0 - intrm_sf_mf_82) * 287.047 + intrm_sf_mf_82 * 461.523;
  if (t183->mX.mX[66UL] <= 216.59999999999997) {
    t40 = 216.59999999999997;
  } else {
    t40 = t183->mX.mX[66UL] >= 623.15 ? 623.15 : t183->mX.mX[66UL];
  }

  t53 = t40 * t40;
  Check_Valve_2_Valve_rho_R = ((1026.6477992877929 + t40 * -0.17751557357783998)
    + t53 * 0.00036658178515919438) * (1.0 - intrm_sf_mf_82) +
    ((1479.6504774710256 + t40 * 1.2002114337051653) + t53 *
     -0.00038614513167858997) * intrm_sf_mf_82;
  t86 = Check_Valve_2_Valve_rho_R - t39;
  t40 = Check_Valve_2_Valve_rho_R / (t86 == 0.0 ? 1.0E-16 : t86);
  if (t183->mX.mX[68UL] <= 216.59999999999997) {
    Check_Valve_2_Valve_rho_R = 216.59999999999997;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[68UL] >= 623.15 ? 623.15 :
      t183->mX.mX[68UL];
  }

  t54 = Check_Valve_2_Valve_rho_R * Check_Valve_2_Valve_rho_R;
  t46 = ((1026.6477992877929 + Check_Valve_2_Valve_rho_R * -0.17751557357783998)
         + t54 * 0.00036658178515919438) * (1.0 - intrm_sf_mf_82) +
    ((1479.6504774710256 + Check_Valve_2_Valve_rho_R * 1.2002114337051653) + t54
     * -0.00038614513167858997) * intrm_sf_mf_82;
  Inspiratory_Tube_Dp_AI_choked = t46 - t39;
  intrm_sf_mf_82 = t46 / (Inspiratory_Tube_Dp_AI_choked == 0.0 ? 1.0E-16 :
    Inspiratory_Tube_Dp_AI_choked);
  t59 = t183->mX.mX[6UL] * t39;
  if (t183->mX.mX[45UL] <= 0.0) {
    t46 = 0.0;
  } else {
    t46 = t183->mX.mX[45UL] >= 1.0 ? 1.0 : t183->mX.mX[45UL];
  }

  t50 = (1.0 - t46) * 287.047 + t46 * 461.523;
  if (t183->mX.mX[59UL] <= 0.0) {
    t46 = 0.0;
  } else {
    t46 = t183->mX.mX[59UL] >= 1.0 ? 1.0 : t183->mX.mX[59UL];
  }

  t52 = (1.0 - t46) * 287.047 + t46 * 461.523;
  t46 = t183->mU.mX[0UL] * 10000.0;
  if (t46 * 0.0001 <= 1.0E-10) {
    t53 = 1.0E-10;
  } else if (t46 * 0.0001 >= 6.3617251235193318E-5) {
    t53 = 6.3617251235193318E-5;
  } else {
    t53 = t46 * 0.0001;
  }

  t46 = t53 / 7.8539816339744827E-5;
  if (t183->mX.mX[83UL] <= 0.0) {
    t53 = 0.0;
  } else {
    t53 = t183->mX.mX[83UL] >= 1.0 ? 1.0 : t183->mX.mX[83UL];
  }

  t54 = (1.0 - t53) * 287.047 + t53 * 461.523;
  t61 = t183->mX.mX[81UL] * t54;
  t86 = t183->mX.mX[82UL] / 1.01325 * (t183->mX.mX[84UL] / (t183->mX.mX[81UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[81UL]));
  Inspiratory_Tube_Dp_AI_choked = t183->mX.mX[82UL] / (t183->mX.mX[58UL] == 0.0 ?
    1.0E-16 : t183->mX.mX[58UL]) * (t183->mX.mX[85UL] / (t183->mX.mX[81UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[81UL]));
  Check_Valve_2_Valve_rho_R = (t183->mX.mX[58UL] + 1.01325) / 2.0 *
    0.0010000000000000009;
  t99 = (1.0 - t46) * (1.0 - t46);
  t69 = Check_Valve_2_Valve_rho_R * t99;
  intrm_sf_mf_299 = (t46 + 1.0) * (1.0 - t46 * t86) - (1.0 - t46 *
    Inspiratory_Tube_Dp_AI_choked) * t46 * 2.0;
  intrm_sf_mf_300 = (1.01325 - t183->mX.mX[58UL]) * (intrm_sf_mf_299 >= t99 ?
    intrm_sf_mf_299 : t99);
  intrm_sf_mf_299 = (1.01325 - t183->mX.mX[58UL]) / (Check_Valve_2_Valve_rho_R ==
    0.0 ? 1.0E-16 : Check_Valve_2_Valve_rho_R);
  intrm_sf_mf_54 = intrm_sf_mf_299 * intrm_sf_mf_299 * 3.0 - intrm_sf_mf_299 *
    intrm_sf_mf_299 * intrm_sf_mf_299 * 2.0;
  if (1.01325 - t183->mX.mX[58UL] <= 0.0) {
    intrm_sf_mf_299 = t69;
  } else if (1.01325 - t183->mX.mX[58UL] >= Check_Valve_2_Valve_rho_R) {
    intrm_sf_mf_299 = intrm_sf_mf_300;
  } else {
    intrm_sf_mf_299 = (1.0 - intrm_sf_mf_54) * t69 + intrm_sf_mf_300 *
      intrm_sf_mf_54;
  }

  intrm_sf_mf_300 = (t46 + 1.0) * (1.0 - t46 * Inspiratory_Tube_Dp_AI_choked) -
    (1.0 - t46 * t86) * t46 * 2.0;
  t46 = (t183->mX.mX[58UL] - 1.01325) * (intrm_sf_mf_300 >= t99 ?
    intrm_sf_mf_300 : t99);
  t86 = (t183->mX.mX[58UL] - 1.01325) / (Check_Valve_2_Valve_rho_R == 0.0 ?
    1.0E-16 : Check_Valve_2_Valve_rho_R);
  Inspiratory_Tube_Dp_AI_choked = t86 * t86 * 3.0 - t86 * t86 * t86 * 2.0;
  if (t183->mX.mX[58UL] - 1.01325 <= 0.0) {
    t86 = t69;
  } else if (t183->mX.mX[58UL] - 1.01325 >= Check_Valve_2_Valve_rho_R) {
    t86 = t46;
  } else {
    t86 = (1.0 - Inspiratory_Tube_Dp_AI_choked) * t69 + t46 *
      Inspiratory_Tube_Dp_AI_choked;
  }

  if (t183->mX.mX[58UL] < 1.01325) {
    t46 = intrm_sf_mf_299;
  } else {
    t46 = t183->mX.mX[58UL] > 1.01325 ? t86 : t69;
  }

  if (t183->mX.mX[81UL] <= 216.59999999999997) {
    t86 = 216.59999999999997;
  } else {
    t86 = t183->mX.mX[81UL] >= 623.15 ? 623.15 : t183->mX.mX[81UL];
  }

  t15 = t86 * t86;
  Inspiratory_Tube_Dp_AI_choked = ((1026.6477992877929 + t86 *
    -0.17751557357783998) + t15 * 0.00036658178515919438) * (1.0 - t53) +
    ((1479.6504774710256 + t86 * 1.2002114337051653) + t15 *
     -0.00038614513167858997) * t53;
  t18 = Inspiratory_Tube_Dp_AI_choked - t54;
  t53 = Inspiratory_Tube_Dp_AI_choked / (t18 == 0.0 ? 1.0E-16 : t18);
  t86 = t183->mU.mX[1UL] * 0.0011972999228658597;
  if (t183->mX.mX[10UL] <= 0.0) {
    Inspiratory_Tube_Dp_AI_choked = 0.0;
  } else {
    Inspiratory_Tube_Dp_AI_choked = t183->mX.mX[10UL] >= 1.0 ? 1.0 : t183->
      mX.mX[10UL];
  }

  if (t183->mX.mX[13UL] <= 0.0) {
    t69 = 0.0;
  } else {
    t69 = t183->mX.mX[13UL] >= 1.0 ? 1.0 : t183->mX.mX[13UL];
  }

  intrm_sf_mf_299 = (1.0 - t69) * 287.047 + t69 * 461.523;
  if (t183->mX.mX[124UL] <= 216.59999999999997) {
    intrm_sf_mf_300 = 216.59999999999997;
  } else {
    intrm_sf_mf_300 = t183->mX.mX[124UL] >= 623.15 ? 623.15 : t183->mX.mX[124UL];
  }

  t18 = intrm_sf_mf_300 * intrm_sf_mf_300;
  intrm_sf_mf_54 = ((1026.6477992877929 + intrm_sf_mf_300 * -0.17751557357783998)
                    + t18 * 0.00036658178515919438) * (1.0 - t69) +
    ((1479.6504774710256 + intrm_sf_mf_300 * 1.2002114337051653) + t18 *
     -0.00038614513167858997) * t69;
  t21 = intrm_sf_mf_54 - intrm_sf_mf_299;
  intrm_sf_mf_300 = intrm_sf_mf_54 / (t21 == 0.0 ? 1.0E-16 : t21);
  if (t183->mX.mX[126UL] <= 216.59999999999997) {
    intrm_sf_mf_54 = 216.59999999999997;
  } else {
    intrm_sf_mf_54 = t183->mX.mX[126UL] >= 623.15 ? 623.15 : t183->mX.mX[126UL];
  }

  t21 = intrm_sf_mf_54 * intrm_sf_mf_54;
  t15 = ((1026.6477992877929 + intrm_sf_mf_54 * -0.17751557357783998) + t21 *
         0.00036658178515919438) * (1.0 - t69) + ((1479.6504774710256 +
    intrm_sf_mf_54 * 1.2002114337051653) + t21 * -0.00038614513167858997) * t69;
  Check_Valve_2_Valve_rho_R = t15 - intrm_sf_mf_299;
  t69 = t15 / (Check_Valve_2_Valve_rho_R == 0.0 ? 1.0E-16 :
               Check_Valve_2_Valve_rho_R);
  t76 = t183->mX.mX[12UL] * intrm_sf_mf_299;
  if (t183->mX.mX[105UL] <= 0.0) {
    t15 = 0.0;
  } else {
    t15 = t183->mX.mX[105UL] >= 1.0 ? 1.0 : t183->mX.mX[105UL];
  }

  t18 = (1.0 - t15) * 287.047 + t15 * 461.523;
  if (t183->mX.mX[28UL] <= 0.0) {
    t15 = 0.0;
  } else {
    t15 = t183->mX.mX[28UL] >= 1.0 ? 1.0 : t183->mX.mX[28UL];
  }

  t21 = (1.0 - t15) * 287.047 + t15 * 461.523;
  if (t183->mX.mX[15UL] <= 0.0) {
    t15 = 0.0;
  } else {
    t15 = t183->mX.mX[15UL] >= 1.0 ? 1.0 : t183->mX.mX[15UL];
  }

  if (t183->mX.mX[18UL] <= 0.0) {
    Trachea_Dp_AI_choked = 0.0;
  } else {
    Trachea_Dp_AI_choked = t183->mX.mX[18UL] >= 1.0 ? 1.0 : t183->mX.mX[18UL];
  }

  intrm_sf_mf_437 = (1.0 - Trachea_Dp_AI_choked) * 287.047 +
    Trachea_Dp_AI_choked * 461.523;
  if (t183->mX.mX[148UL] <= 0.0) {
    Trachea_Dp_AI_choked = 0.0;
  } else {
    Trachea_Dp_AI_choked = t183->mX.mX[148UL] >= 1.0 ? 1.0 : t183->mX.mX[148UL];
  }

  if (t183->mX.mX[21UL] <= 0.0) {
    Trachea_gamma_BI = 0.0;
  } else {
    Trachea_gamma_BI = t183->mX.mX[21UL] >= 1.0 ? 1.0 : t183->mX.mX[21UL];
  }

  intrm_sf_mf_483 = (1.0 - Trachea_gamma_BI) * 287.047 + Trachea_gamma_BI *
    461.523;
  if (t183->mX.mX[174UL] <= 216.59999999999997) {
    Trachea_gamma_AI = 216.59999999999997;
  } else {
    Trachea_gamma_AI = t183->mX.mX[174UL] >= 623.15 ? 623.15 : t183->mX.mX[174UL];
  }

  Check_Valve_2_Valve_rho_R = Trachea_gamma_AI * Trachea_gamma_AI;
  Check_Valve_2_Valve_rho_R = ((1026.6477992877929 + Trachea_gamma_AI *
    -0.17751557357783998) + Check_Valve_2_Valve_rho_R * 0.00036658178515919438) *
    (1.0 - Trachea_gamma_BI) + ((1479.6504774710256 + Trachea_gamma_AI *
    1.2002114337051653) + Check_Valve_2_Valve_rho_R * -0.00038614513167858997) *
    Trachea_gamma_BI;
  t77 = Check_Valve_2_Valve_rho_R - intrm_sf_mf_483;
  Trachea_gamma_AI = Check_Valve_2_Valve_rho_R / (t77 == 0.0 ? 1.0E-16 : t77);
  if (t183->mX.mX[176UL] <= 216.59999999999997) {
    Check_Valve_2_Valve_rho_R = 216.59999999999997;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[176UL] >= 623.15 ? 623.15 :
      t183->mX.mX[176UL];
  }

  t77 = Check_Valve_2_Valve_rho_R * Check_Valve_2_Valve_rho_R;
  Check_Valve_2_Valve_rho_R = ((1026.6477992877929 + Check_Valve_2_Valve_rho_R *
    -0.17751557357783998) + t77 * 0.00036658178515919438) * (1.0 -
    Trachea_gamma_BI) + ((1479.6504774710256 + Check_Valve_2_Valve_rho_R *
    1.2002114337051653) + t77 * -0.00038614513167858997) * Trachea_gamma_BI;
  t99 = Check_Valve_2_Valve_rho_R - intrm_sf_mf_483;
  Trachea_gamma_BI = Check_Valve_2_Valve_rho_R / (t99 == 0.0 ? 1.0E-16 : t99);
  intrm_sf_mf_54 = t183->mX.mX[20UL] * intrm_sf_mf_483;
  if (t183->mX.mX[135UL] <= 0.0) {
    Check_Valve_2_Valve_rho_R = 0.0;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[135UL] >= 1.0 ? 1.0 : t183->mX.mX
      [135UL];
  }

  t1 = (1.0 - Check_Valve_2_Valve_rho_R) * 287.047 + Check_Valve_2_Valve_rho_R *
    461.523;
  if (t183->mX.mX[189UL] <= 0.0) {
    Check_Valve_2_Valve_rho_R = 0.0;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[189UL] >= 1.0 ? 1.0 : t183->mX.mX
      [189UL];
  }

  t77 = (1.0 - Check_Valve_2_Valve_rho_R) * 287.047 + Check_Valve_2_Valve_rho_R *
    461.523;
  if (t183->mX.mX[30UL] <= 0.0) {
    Check_Valve_2_Valve_rho_R = 0.0;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[30UL] >= 1.0 ? 1.0 : t183->mX.mX
      [30UL];
  }

  if (t183->mX.mX[80UL] <= 0.0) {
    t99 = 0.0;
  } else {
    t99 = t183->mX.mX[80UL] >= 1.0 ? 1.0 : t183->mX.mX[80UL];
  }

  intrm_sf_mf_207 = (1.0 - t99) * 287.047 + t99 * 461.523;
  t99 = (1.0 - Check_Valve_2_Valve_rho_R) * 287.047 + Check_Valve_2_Valve_rho_R *
    461.523;
  if (t183->mX.mX[89UL] <= 0.0) {
    Check_Valve_2_Valve_rho_R = 0.0;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[89UL] >= 1.0 ? 1.0 : t183->mX.mX
      [89UL];
  }

  intrm_sf_mf_244 = (1.0 - Check_Valve_2_Valve_rho_R) * 287.047 +
    Check_Valve_2_Valve_rho_R * 461.523;
  if (t183->mX.mX[96UL] <= 0.0) {
    Check_Valve_2_Valve_rho_R = 0.0;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[96UL] >= 1.0 ? 1.0 : t183->mX.mX
      [96UL];
  }

  intrm_sf_mf_250 = (1.0 - Check_Valve_2_Valve_rho_R) * 287.047 +
    Check_Valve_2_Valve_rho_R * 461.523;
  if (t183->mX.mX[91UL] <= 0.0) {
    Check_Valve_2_Valve_rho_R = 0.0;
  } else {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[91UL] >= 1.0 ? 1.0 : t183->mX.mX
      [91UL];
  }

  intrm_sf_mf_253 = (1.0 - Check_Valve_2_Valve_rho_R) * 287.047 +
    Check_Valve_2_Valve_rho_R * 461.523;
  Check_Valve_2_Valve_rho_R = (t86 - -5.0E-7) / 1.0E-6;
  t81 = Check_Valve_2_Valve_rho_R * Check_Valve_2_Valve_rho_R * 3.0 -
    Check_Valve_2_Valve_rho_R * Check_Valve_2_Valve_rho_R *
    Check_Valve_2_Valve_rho_R * 2.0;
  if (t86 <= -5.0E-7) {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[9UL];
  } else if (t86 >= 5.0E-7) {
    Check_Valve_2_Valve_rho_R = t183->mX.mX[88UL];
  } else {
    Check_Valve_2_Valve_rho_R = (1.0 - t81) * t183->mX.mX[9UL] + t183->mX.mX
      [88UL] * t81;
  }

  if (t183->mX.mX[42UL] <= 0.0) {
    t86 = 0.0;
  } else {
    t86 = t183->mX.mX[42UL] >= 1.0 ? 1.0 : t183->mX.mX[42UL];
  }

  t81 = (1.0 - t86) * 287.047 + t86 * 461.523;
  if (t183->mX.mX[165UL] <= 0.0) {
    t86 = 0.0;
  } else {
    t86 = t183->mX.mX[165UL] >= 1.0 ? 1.0 : t183->mX.mX[165UL];
  }

  out->mMODE.mX[0UL] = (int32_T)(t183->mX.mX[26UL] * t21 / (t183->mX.mX[27UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[27UL]) >= 0.0);
  out->mMODE.mX[1UL] = (int32_T)(t183->mX.mX[29UL] * t99 / (t183->mX.mX[2UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[2UL]) >= 0.0);
  out->mMODE.mX[2UL] = (int32_T)(t183->mX.mX[49UL] * t183->mX.mX[49UL] *
    (Expiratory_Tube_Dp_BI_choked / (t55 == 0.0 ? 1.0E-16 : t55)) / (t36 == 0.0 ?
    1.0E-16 : t36) / (t183->mX.mX[48UL] == 0.0 ? 1.0E-16 : t183->mX.mX[48UL]) >=
    0.0);
  out->mMODE.mX[3UL] = (int32_T)(t183->mX.mX[87UL] >= 216.59999999999997);
  out->mMODE.mX[4UL] = (int32_T)(t183->mX.mX[87UL] <= 623.15);
  out->mMODE.mX[5UL] = (int32_T)(t183->mX.mX[9UL] >= 0.01);
  out->mMODE.mX[6UL] = (int32_T)(t183->mX.mX[9UL] <= pmf_get_inf());
  out->mMODE.mX[7UL] = (int32_T)(t183->mX.mX[90UL] >= 216.59999999999997);
  out->mMODE.mX[8UL] = (int32_T)(t183->mX.mX[90UL] <= 623.15);
  out->mMODE.mX[9UL] = (int32_T)(t183->mX.mX[8UL] >= 216.59999999999997);
  out->mMODE.mX[10UL] = (int32_T)(t183->mX.mX[8UL] <= 623.15);
  out->mMODE.mX[11UL] = (int32_T)(t183->mX.mX[104UL] >= 216.59999999999997);
  out->mMODE.mX[12UL] = (int32_T)(t183->mX.mX[104UL] <= 623.15);
  out->mMODE.mX[13UL] = (int32_T)(t183->mX.mX[51UL] * t36 / (t183->mX.mX[2UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[2UL]) >= 0.0);
  out->mMODE.mX[14UL] = (int32_T)(t183->mX.mX[11UL] >= 0.01);
  out->mMODE.mX[15UL] = (int32_T)(t183->mX.mX[11UL] <= pmf_get_inf());
  out->mMODE.mX[16UL] = (int32_T)(t183->mX.mX[12UL] >= 216.59999999999997);
  out->mMODE.mX[17UL] = (int32_T)(t183->mX.mX[12UL] <= 623.15);
  out->mMODE.mX[18UL] = (int32_T)(t183->mX.mX[16UL] + 1.0E-6 > 1.0E-10);
  out->mMODE.mX[19UL] = (int32_T)(t183->mX.mX[14UL] >= 0.01);
  out->mMODE.mX[20UL] = (int32_T)(t183->mX.mX[14UL] <= pmf_get_inf());
  out->mMODE.mX[21UL] = (int32_T)(t183->mX.mX[0UL] >= 216.59999999999997);
  out->mMODE.mX[22UL] = (int32_T)(t183->mX.mX[0UL] <= 623.15);
  out->mMODE.mX[23UL] = (int32_T)(t183->mX.mX[17UL] >= 216.59999999999997);
  out->mMODE.mX[24UL] = (int32_T)(t183->mX.mX[52UL] * t36 / (t183->mX.mX[44UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[44UL]) >= 0.0);
  out->mMODE.mX[25UL] = (int32_T)(t183->mX.mX[17UL] <= 623.15);
  out->mMODE.mX[26UL] = (int32_T)(t183->mX.mX[134UL] >= 216.59999999999997);
  out->mMODE.mX[27UL] = (int32_T)(t183->mX.mX[134UL] <= 623.15);
  out->mMODE.mX[28UL] = (int32_T)(t183->mX.mX[147UL] >= 216.59999999999997);
  out->mMODE.mX[29UL] = (int32_T)(t183->mX.mX[147UL] <= 623.15);
  out->mMODE.mX[30UL] = (int32_T)(t183->mX.mX[19UL] >= 0.01);
  out->mMODE.mX[31UL] = (int32_T)(t183->mX.mX[19UL] <= pmf_get_inf());
  out->mMODE.mX[32UL] = (int32_T)(t183->mX.mX[20UL] >= 216.59999999999997);
  out->mMODE.mX[33UL] = (int32_T)(t183->mX.mX[20UL] <= 623.15);
  out->mMODE.mX[34UL] = (int32_T)(t183->mX.mX[164UL] >= 216.59999999999997);
  out->mMODE.mX[35UL] = (int32_T)(t43 / (t183->mX.mX[49UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[49UL]) >= 0.0);
  out->mMODE.mX[36UL] = (int32_T)(t183->mX.mX[164UL] <= 623.15);
  out->mMODE.mX[37UL] = (int32_T)(t183->mX.mX[43UL] * t50 / (t183->mX.mX[44UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[44UL]) >= 0.0);
  out->mMODE.mX[38UL] = (int32_T)(t183->mX.mX[57UL] * t52 / (t183->mX.mX[58UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[58UL]) >= 0.0);
  out->mMODE.mX[39UL] = (int32_T)(t183->mX.mX[60UL] - t183->mX.mX[5UL] >= 0.0);
  out->mMODE.mX[40UL] = (int32_T)(t183->mX.mX[5UL] / (t59 == 0.0 ? 1.0E-16 : t59)
    >= 0.0);
  out->mMODE.mX[41UL] = (int32_T)(t183->mX.mX[61UL] - t183->mX.mX[5UL] >= 0.0);
  out->mMODE.mX[42UL] = (int32_T)(t183->mX.mX[60UL] * t183->mX.mX[60UL] * t40 /
    (t39 == 0.0 ? 1.0E-16 : t39) / (t183->mX.mX[66UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[66UL]) <= 0.0);
  out->mMODE.mX[43UL] = (int32_T)(t183->mX.mX[34UL] / (t29 == 0.0 ? 1.0E-16 :
    t29) * 2.0 / (t114 == 0.0 ? 1.0E-16 : t114) >= 0.0);
  out->mMODE.mX[44UL] = (int32_T)(t183->mX.mX[61UL] * t183->mX.mX[61UL] *
    intrm_sf_mf_82 / (t39 == 0.0 ? 1.0E-16 : t39) / (t183->mX.mX[68UL] == 0.0 ?
    1.0E-16 : t183->mX.mX[68UL]) <= 0.0);
  out->mMODE.mX[45UL] = (int32_T)(t183->mX.mX[66UL] * t39 / (t183->mX.mX[67UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[67UL]) >= 0.0);
  out->mMODE.mX[46UL] = (int32_T)(t183->mX.mX[68UL] * t39 / (t183->mX.mX[70UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[70UL]) >= 0.0);
  out->mMODE.mX[47UL] = (int32_T)(t59 / (t183->mX.mX[5UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[5UL]) >= 0.0);
  out->mMODE.mX[48UL] = (int32_T)(t183->mX.mX[79UL] * intrm_sf_mf_207 / 1.01325 >=
    0.0);
  out->mMODE.mX[49UL] = (int32_T)(t183->mX.mX[82UL] / (t61 == 0.0 ? 1.0E-16 :
    t61) * 2.0 / (t46 == 0.0 ? 1.0E-16 : t46) >= 0.0);
  out->mMODE.mX[50UL] = (int32_T)(t183->mX.mX[82UL] * t183->mX.mX[82UL] * t53 /
    (t54 == 0.0 ? 1.0E-16 : t54) / (t183->mX.mX[81UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[81UL]) >= 0.0);
  out->mMODE.mX[51UL] = (int32_T)(t183->mX.mX[84UL] * t54 / 1.01325 >= 0.0);
  out->mMODE.mX[52UL] = (int32_T)(t183->mX.mX[85UL] * t54 / (t183->mX.mX[58UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[58UL]) >= 0.0);
  out->mMODE.mX[53UL] = (int32_T)(t183->mX.mX[34UL] * t183->mX.mX[34UL] * t152 /
    (intrm_sf_mf_9 == 0.0 ? 1.0E-16 : intrm_sf_mf_9) / (t183->mX.mX[33UL] == 0.0
    ? 1.0E-16 : t183->mX.mX[33UL]) >= 0.0);
  out->mMODE.mX[54UL] = (int32_T)(t61 / (t183->mX.mX[82UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[82UL]) >= 0.0);
  out->mMODE.mX[55UL] = (int32_T)(t183->mX.mX[87UL] * intrm_sf_mf_244 /
    (t183->mX.mX[88UL] == 0.0 ? 1.0E-16 : t183->mX.mX[88UL]) >= 0.0);
  out->mMODE.mX[56UL] = (int32_T)(t183->mX.mX[90UL] * intrm_sf_mf_253 /
    (t183->mX.mX[9UL] == 0.0 ? 1.0E-16 : t183->mX.mX[9UL]) >= 0.0);
  out->mMODE.mX[57UL] = (int32_T)(t183->mX.mX[93UL] * intrm_sf_mf_250 /
    (Check_Valve_2_Valve_rho_R == 0.0 ? 1.0E-16 : Check_Valve_2_Valve_rho_R) >=
    0.0);
  out->mMODE.mX[58UL] = (int32_T)(t183->mU.mX[2UL] <= 216.59999999999997);
  out->mMODE.mX[59UL] = (int32_T)(t183->mU.mX[2UL] >= 623.15);
  out->mMODE.mX[60UL] = (int32_T)(t183->mX.mX[104UL] * t18 / (t183->mX.mX[9UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[9UL]) >= 0.0);
  out->mMODE.mX[61UL] = (int32_T)(t183->mX.mX[8UL] * ((1.0 -
    Inspiratory_Tube_Dp_AI_choked) * 287.047 + Inspiratory_Tube_Dp_AI_choked *
    461.523) / (t183->mX.mX[9UL] == 0.0 ? 1.0E-16 : t183->mX.mX[9UL]) >= 0.0);
  out->mMODE.mX[62UL] = (int32_T)(t183->mX.mX[107UL] * 295.17959023120517 /
    1.01325 >= 0.0);
  out->mMODE.mX[63UL] = (int32_T)(t183->mX.mX[36UL] * intrm_sf_mf_9 /
    (t183->mX.mX[27UL] == 0.0 ? 1.0E-16 : t183->mX.mX[27UL]) >= 0.0);
  out->mMODE.mX[64UL] = (int32_T)(t183->mX.mX[119UL] - t183->mX.mX[11UL] >= 0.0);
  out->mMODE.mX[65UL] = (int32_T)(t183->mX.mX[11UL] / (t76 == 0.0 ? 1.0E-16 :
    t76) >= 0.0);
  out->mMODE.mX[66UL] = (int32_T)(t183->mX.mX[120UL] - t183->mX.mX[11UL] >= 0.0);
  out->mMODE.mX[67UL] = (int32_T)(t183->mX.mX[119UL] * t183->mX.mX[119UL] *
    intrm_sf_mf_300 / (intrm_sf_mf_299 == 0.0 ? 1.0E-16 : intrm_sf_mf_299) /
    (t183->mX.mX[124UL] == 0.0 ? 1.0E-16 : t183->mX.mX[124UL]) <= 0.0);
  out->mMODE.mX[68UL] = (int32_T)(t183->mX.mX[120UL] * t183->mX.mX[120UL] * t69 /
    (intrm_sf_mf_299 == 0.0 ? 1.0E-16 : intrm_sf_mf_299) / (t183->mX.mX[126UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[126UL]) <= 0.0);
  out->mMODE.mX[69UL] = (int32_T)(t183->mX.mX[124UL] * intrm_sf_mf_299 /
    (t183->mX.mX[125UL] == 0.0 ? 1.0E-16 : t183->mX.mX[125UL]) >= 0.0);
  out->mMODE.mX[70UL] = (int32_T)(t183->mX.mX[126UL] * intrm_sf_mf_299 /
    (t183->mX.mX[127UL] == 0.0 ? 1.0E-16 : t183->mX.mX[127UL]) >= 0.0);
  out->mMODE.mX[71UL] = (int32_T)(t76 / (t183->mX.mX[11UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[11UL]) >= 0.0);
  out->mMODE.mX[72UL] = (int32_T)(t183->mX.mX[37UL] * intrm_sf_mf_9 /
    (t183->mX.mX[2UL] == 0.0 ? 1.0E-16 : t183->mX.mX[2UL]) >= 0.0);
  out->mMODE.mX[73UL] = (int32_T)(t183->mX.mX[134UL] * t1 / (t183->mX.mX[14UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[14UL]) >= 0.0);
  out->mMODE.mX[74UL] = (int32_T)(t183->mX.mX[0UL] * ((1.0 - t15) * 287.047 +
    t15 * 461.523) / (t183->mX.mX[14UL] == 0.0 ? 1.0E-16 : t183->mX.mX[14UL]) >=
    0.0);
  out->mMODE.mX[75UL] = (int32_T)(t183->mX.mX[147UL] * ((1.0 -
    Trachea_Dp_AI_choked) * 287.047 + Trachea_Dp_AI_choked * 461.523) /
    (t183->mX.mX[2UL] == 0.0 ? 1.0E-16 : t183->mX.mX[2UL]) >= 0.0);
  out->mMODE.mX[76UL] = (int32_T)(t183->mX.mX[41UL] * t81 / (t183->mX.mX[2UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[2UL]) >= 0.0);
  out->mMODE.mX[77UL] = (int32_T)(t183->mX.mX[17UL] * intrm_sf_mf_437 /
    (t183->mX.mX[2UL] == 0.0 ? 1.0E-16 : t183->mX.mX[2UL]) >= 0.0);
  out->mMODE.mX[78UL] = (int32_T)(t183->mX.mX[164UL] * ((1.0 - t86) * 287.047 +
    t86 * 461.523) / 1.01325 >= 0.0);
  out->mMODE.mX[79UL] = (int32_T)(t29 / (t183->mX.mX[34UL] == 0.0 ? 1.0E-16 :
    t183->mX.mX[34UL]) >= 0.0);
  out->mMODE.mX[80UL] = (int32_T)(t183->mX.mX[169UL] - t183->mX.mX[19UL] >= 0.0);
  out->mMODE.mX[81UL] = (int32_T)(t183->mX.mX[19UL] / (intrm_sf_mf_54 == 0.0 ?
    1.0E-16 : intrm_sf_mf_54) >= 0.0);
  out->mMODE.mX[82UL] = (int32_T)(t183->mX.mX[170UL] - t183->mX.mX[19UL] >= 0.0);
  out->mMODE.mX[83UL] = (int32_T)(t183->mX.mX[169UL] * t183->mX.mX[169UL] *
    Trachea_gamma_AI / (intrm_sf_mf_483 == 0.0 ? 1.0E-16 : intrm_sf_mf_483) /
    (t183->mX.mX[174UL] == 0.0 ? 1.0E-16 : t183->mX.mX[174UL]) <= 0.0);
  out->mMODE.mX[84UL] = (int32_T)(t183->mX.mX[170UL] * t183->mX.mX[170UL] *
    Trachea_gamma_BI / (intrm_sf_mf_483 == 0.0 ? 1.0E-16 : intrm_sf_mf_483) /
    (t183->mX.mX[176UL] == 0.0 ? 1.0E-16 : t183->mX.mX[176UL]) <= 0.0);
  out->mMODE.mX[85UL] = (int32_T)(t183->mX.mX[174UL] * intrm_sf_mf_483 /
    (t183->mX.mX[175UL] == 0.0 ? 1.0E-16 : t183->mX.mX[175UL]) >= 0.0);
  out->mMODE.mX[86UL] = (int32_T)(t183->mX.mX[176UL] * intrm_sf_mf_483 /
    (t183->mX.mX[177UL] == 0.0 ? 1.0E-16 : t183->mX.mX[177UL]) >= 0.0);
  out->mMODE.mX[87UL] = (int32_T)(intrm_sf_mf_54 / (t183->mX.mX[19UL] == 0.0 ?
    1.0E-16 : t183->mX.mX[19UL]) >= 0.0);
  out->mMODE.mX[88UL] = (int32_T)(t183->mX.mX[187UL] * t77 / (t183->mX.mX[88UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[88UL]) >= 0.0);
  out->mMODE.mX[89UL] = (int32_T)(t183->mX.mX[184UL] * t77 / 1.01325 >= 0.0);
  out->mMODE.mX[90UL] = (int32_T)(t183->mX.mX[186UL] * t77 / 1.01325 >= 0.0);
  out->mMODE.mX[91UL] = (int32_T)(t183->mX.mX[185UL] * t77 / (t183->mX.mX[88UL] ==
    0.0 ? 1.0E-16 : t183->mX.mX[88UL]) >= 0.0);
  out->mMODE.mX[92UL] = (int32_T)(t183->mX.mX[27UL] >= 0.01);
  out->mMODE.mX[93UL] = (int32_T)(t183->mX.mX[27UL] <= pmf_get_inf());
  out->mMODE.mX[94UL] = (int32_T)(t183->mX.mX[26UL] >= 216.59999999999997);
  out->mMODE.mX[95UL] = (int32_T)(t183->mX.mX[26UL] <= 623.15);
  out->mMODE.mX[96UL] = (int32_T)(t183->mX.mX[2UL] >= 0.01);
  out->mMODE.mX[97UL] = (int32_T)(t183->mX.mX[2UL] <= pmf_get_inf());
  out->mMODE.mX[98UL] = (int32_T)(t183->mX.mX[29UL] >= 216.59999999999997);
  out->mMODE.mX[99UL] = (int32_T)(t183->mX.mX[29UL] <= 623.15);
  out->mMODE.mX[100UL] = (int32_T)(t183->mX.mX[41UL] >= 216.59999999999997);
  out->mMODE.mX[101UL] = (int32_T)(t183->mX.mX[41UL] <= 623.15);
  out->mMODE.mX[102UL] = (int32_T)(t183->mX.mX[44UL] >= 0.01);
  out->mMODE.mX[103UL] = (int32_T)(t183->mX.mX[44UL] <= pmf_get_inf());
  out->mMODE.mX[104UL] = (int32_T)(t183->mX.mX[43UL] >= 216.59999999999997);
  out->mMODE.mX[105UL] = (int32_T)(t183->mX.mX[43UL] <= 623.15);
  out->mMODE.mX[106UL] = (int32_T)(t183->mX.mX[58UL] >= 0.01);
  out->mMODE.mX[107UL] = (int32_T)(t183->mX.mX[58UL] <= pmf_get_inf());
  out->mMODE.mX[108UL] = (int32_T)(t183->mX.mX[49UL] / (t43 == 0.0 ? 1.0E-16 :
    t43) * 2.0 / (t32 == 0.0 ? 1.0E-16 : t32) >= 0.0);
  out->mMODE.mX[109UL] = (int32_T)(t183->mX.mX[57UL] >= 216.59999999999997);
  out->mMODE.mX[110UL] = (int32_T)(t183->mX.mX[57UL] <= 623.15);
  out->mMODE.mX[111UL] = (int32_T)(t183->mX.mX[5UL] >= 0.01);
  out->mMODE.mX[112UL] = (int32_T)(t183->mX.mX[5UL] <= pmf_get_inf());
  out->mMODE.mX[113UL] = (int32_T)(t183->mX.mX[6UL] >= 216.59999999999997);
  out->mMODE.mX[114UL] = (int32_T)(t183->mX.mX[6UL] <= 623.15);
  out->mMODE.mX[115UL] = (int32_T)(t183->mX.mX[79UL] >= 216.59999999999997);
  out->mMODE.mX[116UL] = (int32_T)(t183->mX.mX[79UL] <= 623.15);
  out->mMODE.mX[117UL] = (int32_T)(t183->mX.mX[88UL] >= 0.01);
  out->mMODE.mX[118UL] = (int32_T)(t183->mX.mX[88UL] <= pmf_get_inf());
  (void)LC;
  (void)out;
  return 0;
}
