/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_zc.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_zc(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t206, NeDsMethodOutput *out)
{
  real_T Expiratory_Tube_Dp_BI_choked;
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
  real_T intrm_sf_mf_82;
  real_T intrm_sf_mf_83;
  real_T t155;
  real_T t157;
  real_T t161;
  real_T t172;
  real_T t173;
  real_T t174;
  real_T t192;
  real_T t30;
  real_T t37;
  real_T t41;
  real_T t44;
  real_T t47;
  real_T t51;
  real_T t53;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t57;
  real_T t58;
  real_T t60;
  real_T t62;
  real_T t64;
  real_T t70;
  real_T t73;
  real_T t74;
  real_T t77;
  real_T t78;
  real_T t82;
  real_T t85;
  (void)LC;
  if (t206->mX.mX[1UL] * 0.0001 <= 5.0E-11) {
    t155 = 5.0E-11;
  } else if (t206->mX.mX[1UL] * 0.0001 >= 7.1078533787469073E-5) {
    t155 = 7.1078533787469073E-5;
  } else {
    t155 = t206->mX.mX[1UL] * 0.0001;
  }

  t192 = t155 / 7.8539816339744827E-5;
  if (t206->mX.mX[35UL] <= 0.0) {
    t155 = 0.0;
  } else {
    t155 = t206->mX.mX[35UL] >= 1.0 ? 1.0 : t206->mX.mX[35UL];
  }

  t157 = (1.0 - t155) * 287.047 + t155 * 461.523;
  t30 = t206->mX.mX[33UL] * t157;
  t161 = t206->mX.mX[34UL] / (t206->mX.mX[27UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [27UL]) * (t206->mX.mX[36UL] / (t206->mX.mX[33UL] == 0.0 ? 1.0E-16 :
    t206->mX.mX[33UL]));
  t172 = t206->mX.mX[34UL] / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]) * (t206->mX.mX[37UL] / (t206->mX.mX[33UL] == 0.0 ? 1.0E-16 :
    t206->mX.mX[33UL]));
  t173 = (t206->mX.mX[2UL] + t206->mX.mX[27UL]) / 2.0 * 0.0010000000000000009;
  t37 = (1.0 - t192) * (1.0 - t192);
  t174 = t173 * t37;
  Expiratory_Tube_Dp_BI_choked = (t192 + 1.0) * (1.0 - t192 * t161) - (1.0 -
    t192 * t172) * t192 * 2.0;
  intrm_sf_mf_82 = (t206->mX.mX[27UL] - t206->mX.mX[2UL]) *
    (Expiratory_Tube_Dp_BI_choked >= t37 ? Expiratory_Tube_Dp_BI_choked : t37);
  Expiratory_Tube_Dp_BI_choked = (t206->mX.mX[27UL] - t206->mX.mX[2UL]) / (t173 ==
    0.0 ? 1.0E-16 : t173);
  intrm_sf_mf_83 = Expiratory_Tube_Dp_BI_choked * Expiratory_Tube_Dp_BI_choked *
    3.0 - Expiratory_Tube_Dp_BI_choked * Expiratory_Tube_Dp_BI_choked *
    Expiratory_Tube_Dp_BI_choked * 2.0;
  if (t206->mX.mX[27UL] - t206->mX.mX[2UL] <= 0.0) {
    Expiratory_Tube_Dp_BI_choked = t174;
  } else if (t206->mX.mX[27UL] - t206->mX.mX[2UL] >= t173) {
    Expiratory_Tube_Dp_BI_choked = intrm_sf_mf_82;
  } else {
    Expiratory_Tube_Dp_BI_choked = (1.0 - intrm_sf_mf_83) * t174 +
      intrm_sf_mf_82 * intrm_sf_mf_83;
  }

  intrm_sf_mf_82 = (t192 + 1.0) * (1.0 - t192 * t172) - (1.0 - t192 * t161) *
    t192 * 2.0;
  t192 = (t206->mX.mX[2UL] - t206->mX.mX[27UL]) * (intrm_sf_mf_82 >= t37 ?
    intrm_sf_mf_82 : t37);
  t161 = (t206->mX.mX[2UL] - t206->mX.mX[27UL]) / (t173 == 0.0 ? 1.0E-16 : t173);
  t172 = t161 * t161 * 3.0 - t161 * t161 * t161 * 2.0;
  if (t206->mX.mX[2UL] - t206->mX.mX[27UL] <= 0.0) {
    t161 = t174;
  } else if (t206->mX.mX[2UL] - t206->mX.mX[27UL] >= t173) {
    t161 = t192;
  } else {
    t161 = (1.0 - t172) * t174 + t192 * t172;
  }

  if (t206->mX.mX[27UL] > t206->mX.mX[2UL]) {
    t192 = Expiratory_Tube_Dp_BI_choked;
  } else {
    t192 = t206->mX.mX[27UL] < t206->mX.mX[2UL] ? t161 : t174;
  }

  if (t206->mX.mX[33UL] <= 216.59999999999997) {
    t161 = 216.59999999999997;
  } else {
    t161 = t206->mX.mX[33UL] >= 623.15 ? 623.15 : t206->mX.mX[33UL];
  }

  t41 = t161 * t161;
  t172 = ((1026.6477992877929 + t161 * -0.17751557357783998) + t41 *
          0.00036658178515919438) * (1.0 - t155) + ((1479.6504774710256 + t161 *
    1.2002114337051653) + t41 * -0.00038614513167858997) * t155;
  t173 = t172 - t157;
  t155 = t172 / (t173 == 0.0 ? 1.0E-16 : t173);
  if (t206->mX.mX[3UL] * 0.0001 <= 5.0E-11) {
    t161 = 5.0E-11;
  } else if (t206->mX.mX[3UL] * 0.0001 >= 7.1078533787469073E-5) {
    t161 = 7.1078533787469073E-5;
  } else {
    t161 = t206->mX.mX[3UL] * 0.0001;
  }

  t172 = t161 / 7.8539816339744827E-5;
  if (t206->mX.mX[50UL] <= 0.0) {
    t161 = 0.0;
  } else {
    t161 = t206->mX.mX[50UL] >= 1.0 ? 1.0 : t206->mX.mX[50UL];
  }

  t37 = (1.0 - t161) * 287.047 + t161 * 461.523;
  t44 = t206->mX.mX[48UL] * t37;
  t174 = t206->mX.mX[49UL] / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]) * (t206->mX.mX[51UL] / (t206->mX.mX[48UL] == 0.0 ? 1.0E-16 :
    t206->mX.mX[48UL]));
  Expiratory_Tube_Dp_BI_choked = t206->mX.mX[49UL] / (t206->mX.mX[44UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[44UL]) * (t206->mX.mX[52UL] / (t206->mX.mX[48UL] ==
    0.0 ? 1.0E-16 : t206->mX.mX[48UL]));
  intrm_sf_mf_83 = (t206->mX.mX[2UL] + t206->mX.mX[44UL]) / 2.0 *
    0.0010000000000000009;
  intrm_sf_mf_82 = (1.0 - t172) * (1.0 - t172);
  t41 = intrm_sf_mf_83 * intrm_sf_mf_82;
  t173 = (t172 + 1.0) * (1.0 - t172 * t174) - (1.0 - t172 *
    Expiratory_Tube_Dp_BI_choked) * t172 * 2.0;
  t47 = (t206->mX.mX[2UL] - t206->mX.mX[44UL]) * (t173 >= intrm_sf_mf_82 ? t173 :
    intrm_sf_mf_82);
  t173 = (t206->mX.mX[2UL] - t206->mX.mX[44UL]) / (intrm_sf_mf_83 == 0.0 ?
    1.0E-16 : intrm_sf_mf_83);
  t51 = t173 * t173 * 3.0 - t173 * t173 * t173 * 2.0;
  if (t206->mX.mX[2UL] - t206->mX.mX[44UL] <= 0.0) {
    t173 = t41;
  } else if (t206->mX.mX[2UL] - t206->mX.mX[44UL] >= intrm_sf_mf_83) {
    t173 = t47;
  } else {
    t173 = (1.0 - t51) * t41 + t47 * t51;
  }

  t47 = (t172 + 1.0) * (1.0 - t172 * Expiratory_Tube_Dp_BI_choked) - (1.0 - t172
    * t174) * t172 * 2.0;
  t172 = (t206->mX.mX[44UL] - t206->mX.mX[2UL]) * (t47 >= intrm_sf_mf_82 ? t47 :
    intrm_sf_mf_82);
  t174 = (t206->mX.mX[44UL] - t206->mX.mX[2UL]) / (intrm_sf_mf_83 == 0.0 ?
    1.0E-16 : intrm_sf_mf_83);
  Expiratory_Tube_Dp_BI_choked = t174 * t174 * 3.0 - t174 * t174 * t174 * 2.0;
  if (t206->mX.mX[44UL] - t206->mX.mX[2UL] <= 0.0) {
    t174 = t41;
  } else if (t206->mX.mX[44UL] - t206->mX.mX[2UL] >= intrm_sf_mf_83) {
    t174 = t172;
  } else {
    t174 = (1.0 - Expiratory_Tube_Dp_BI_choked) * t41 + t172 *
      Expiratory_Tube_Dp_BI_choked;
  }

  if (t206->mX.mX[2UL] > t206->mX.mX[44UL]) {
    t172 = t173;
  } else {
    t172 = t206->mX.mX[2UL] < t206->mX.mX[44UL] ? t174 : t41;
  }

  if (t206->mX.mX[48UL] <= 216.59999999999997) {
    t174 = 216.59999999999997;
  } else {
    t174 = t206->mX.mX[48UL] >= 623.15 ? 623.15 : t206->mX.mX[48UL];
  }

  t53 = t174 * t174;
  Expiratory_Tube_Dp_BI_choked = ((1026.6477992877929 + t174 *
    -0.17751557357783998) + t53 * 0.00036658178515919438) * (1.0 - t161) +
    ((1479.6504774710256 + t174 * 1.2002114337051653) + t53 *
     -0.00038614513167858997) * t161;
  t56 = Expiratory_Tube_Dp_BI_choked - t37;
  out->mZC.mX[41UL] = t206->mX.mX[60UL] - t206->mX.mX[5UL];
  out->mZC.mX[42UL] = t206->mX.mX[61UL] - t206->mX.mX[5UL];
  if (t206->mX.mX[7UL] <= 0.0) {
    intrm_sf_mf_82 = 0.0;
  } else {
    intrm_sf_mf_82 = t206->mX.mX[7UL] >= 1.0 ? 1.0 : t206->mX.mX[7UL];
  }

  intrm_sf_mf_83 = (1.0 - intrm_sf_mf_82) * 287.047 + intrm_sf_mf_82 * 461.523;
  if (t206->mX.mX[66UL] <= 216.59999999999997) {
    t41 = 216.59999999999997;
  } else {
    t41 = t206->mX.mX[66UL] >= 623.15 ? 623.15 : t206->mX.mX[66UL];
  }

  t54 = t41 * t41;
  t173 = ((1026.6477992877929 + t41 * -0.17751557357783998) + t54 *
          0.00036658178515919438) * (1.0 - intrm_sf_mf_82) +
    ((1479.6504774710256 + t41 * 1.2002114337051653) + t54 *
     -0.00038614513167858997) * intrm_sf_mf_82;
  t57 = t173 - intrm_sf_mf_83;
  t41 = t173 / (t57 == 0.0 ? 1.0E-16 : t57);
  if (t206->mX.mX[68UL] <= 216.59999999999997) {
    t173 = 216.59999999999997;
  } else {
    t173 = t206->mX.mX[68UL] >= 623.15 ? 623.15 : t206->mX.mX[68UL];
  }

  t55 = t173 * t173;
  t47 = ((1026.6477992877929 + t173 * -0.17751557357783998) + t55 *
         0.00036658178515919438) * (1.0 - intrm_sf_mf_82) + ((1479.6504774710256
    + t173 * 1.2002114337051653) + t55 * -0.00038614513167858997) *
    intrm_sf_mf_82;
  t58 = t47 - intrm_sf_mf_83;
  intrm_sf_mf_82 = t47 / (t58 == 0.0 ? 1.0E-16 : t58);
  t60 = t206->mX.mX[6UL] * intrm_sf_mf_83;
  out->mZC.mX[45UL] = t206->mX.mX[5UL] / (t60 == 0.0 ? 1.0E-16 : t60);
  if (t206->mX.mX[45UL] <= 0.0) {
    t47 = 0.0;
  } else {
    t47 = t206->mX.mX[45UL] >= 1.0 ? 1.0 : t206->mX.mX[45UL];
  }

  t51 = (1.0 - t47) * 287.047 + t47 * 461.523;
  if (t206->mX.mX[59UL] <= 0.0) {
    t47 = 0.0;
  } else {
    t47 = t206->mX.mX[59UL] >= 1.0 ? 1.0 : t206->mX.mX[59UL];
  }

  t53 = (1.0 - t47) * 287.047 + t47 * 461.523;
  t47 = t206->mU.mX[0UL] * 10000.0;
  if (t47 * 0.0001 <= 1.0E-10) {
    t54 = 1.0E-10;
  } else if (t47 * 0.0001 >= 6.3617251235193318E-5) {
    t54 = 6.3617251235193318E-5;
  } else {
    t54 = t47 * 0.0001;
  }

  t47 = t54 / 7.8539816339744827E-5;
  if (t206->mX.mX[83UL] <= 0.0) {
    t54 = 0.0;
  } else {
    t54 = t206->mX.mX[83UL] >= 1.0 ? 1.0 : t206->mX.mX[83UL];
  }

  t55 = (1.0 - t54) * 287.047 + t54 * 461.523;
  t62 = t206->mX.mX[81UL] * t55;
  t57 = t206->mX.mX[82UL] / 1.01325 * (t206->mX.mX[84UL] / (t206->mX.mX[81UL] ==
    0.0 ? 1.0E-16 : t206->mX.mX[81UL]));
  t58 = t206->mX.mX[82UL] / (t206->mX.mX[58UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [58UL]) * (t206->mX.mX[85UL] / (t206->mX.mX[81UL] == 0.0 ? 1.0E-16 :
    t206->mX.mX[81UL]));
  t173 = (t206->mX.mX[58UL] + 1.01325) / 2.0 * 0.0010000000000000009;
  t64 = (1.0 - t47) * (1.0 - t47);
  t70 = t173 * t64;
  intrm_sf_mf_299 = (t47 + 1.0) * (1.0 - t47 * t57) - (1.0 - t47 * t58) * t47 *
    2.0;
  intrm_sf_mf_300 = (1.01325 - t206->mX.mX[58UL]) * (intrm_sf_mf_299 >= t64 ?
    intrm_sf_mf_299 : t64);
  intrm_sf_mf_299 = (1.01325 - t206->mX.mX[58UL]) / (t173 == 0.0 ? 1.0E-16 :
    t173);
  t174 = intrm_sf_mf_299 * intrm_sf_mf_299 * 3.0 - intrm_sf_mf_299 *
    intrm_sf_mf_299 * intrm_sf_mf_299 * 2.0;
  if (1.01325 - t206->mX.mX[58UL] <= 0.0) {
    intrm_sf_mf_299 = t70;
  } else if (1.01325 - t206->mX.mX[58UL] >= t173) {
    intrm_sf_mf_299 = intrm_sf_mf_300;
  } else {
    intrm_sf_mf_299 = (1.0 - t174) * t70 + intrm_sf_mf_300 * t174;
  }

  intrm_sf_mf_300 = (t47 + 1.0) * (1.0 - t47 * t58) - (1.0 - t47 * t57) * t47 *
    2.0;
  t47 = (t206->mX.mX[58UL] - 1.01325) * (intrm_sf_mf_300 >= t64 ?
    intrm_sf_mf_300 : t64);
  t57 = (t206->mX.mX[58UL] - 1.01325) / (t173 == 0.0 ? 1.0E-16 : t173);
  t58 = t57 * t57 * 3.0 - t57 * t57 * t57 * 2.0;
  if (t206->mX.mX[58UL] - 1.01325 <= 0.0) {
    t57 = t70;
  } else if (t206->mX.mX[58UL] - 1.01325 >= t173) {
    t57 = t47;
  } else {
    t57 = (1.0 - t58) * t70 + t47 * t58;
  }

  if (t206->mX.mX[58UL] < 1.01325) {
    t47 = intrm_sf_mf_299;
  } else {
    t47 = t206->mX.mX[58UL] > 1.01325 ? t57 : t70;
  }

  if (t206->mX.mX[81UL] <= 216.59999999999997) {
    t57 = 216.59999999999997;
  } else {
    t57 = t206->mX.mX[81UL] >= 623.15 ? 623.15 : t206->mX.mX[81UL];
  }

  t85 = t57 * t57;
  t58 = ((1026.6477992877929 + t57 * -0.17751557357783998) + t85 *
         0.00036658178515919438) * (1.0 - t54) + ((1479.6504774710256 + t57 *
    1.2002114337051653) + t85 * -0.00038614513167858997) * t54;
  t73 = t58 - t55;
  t54 = t58 / (t73 == 0.0 ? 1.0E-16 : t73);
  t57 = t206->mU.mX[1UL] * 0.0011972999228658597;
  if (t206->mX.mX[10UL] <= 0.0) {
    t58 = 0.0;
  } else {
    t58 = t206->mX.mX[10UL] >= 1.0 ? 1.0 : t206->mX.mX[10UL];
  }

  out->mZC.mX[53UL] = t206->mX.mX[119UL] - t206->mX.mX[11UL];
  out->mZC.mX[54UL] = t206->mX.mX[120UL] - t206->mX.mX[11UL];
  if (t206->mX.mX[13UL] <= 0.0) {
    t70 = 0.0;
  } else {
    t70 = t206->mX.mX[13UL] >= 1.0 ? 1.0 : t206->mX.mX[13UL];
  }

  intrm_sf_mf_299 = (1.0 - t70) * 287.047 + t70 * 461.523;
  if (t206->mX.mX[124UL] <= 216.59999999999997) {
    intrm_sf_mf_300 = 216.59999999999997;
  } else {
    intrm_sf_mf_300 = t206->mX.mX[124UL] >= 623.15 ? 623.15 : t206->mX.mX[124UL];
  }

  t73 = intrm_sf_mf_300 * intrm_sf_mf_300;
  t174 = ((1026.6477992877929 + intrm_sf_mf_300 * -0.17751557357783998) + t73 *
          0.00036658178515919438) * (1.0 - t70) + ((1479.6504774710256 +
    intrm_sf_mf_300 * 1.2002114337051653) + t73 * -0.00038614513167858997) * t70;
  t74 = t174 - intrm_sf_mf_299;
  intrm_sf_mf_300 = t174 / (t74 == 0.0 ? 1.0E-16 : t74);
  if (t206->mX.mX[126UL] <= 216.59999999999997) {
    t174 = 216.59999999999997;
  } else {
    t174 = t206->mX.mX[126UL] >= 623.15 ? 623.15 : t206->mX.mX[126UL];
  }

  t74 = t174 * t174;
  t85 = ((1026.6477992877929 + t174 * -0.17751557357783998) + t74 *
         0.00036658178515919438) * (1.0 - t70) + ((1479.6504774710256 + t174 *
    1.2002114337051653) + t74 * -0.00038614513167858997) * t70;
  t173 = t85 - intrm_sf_mf_299;
  t70 = t85 / (t173 == 0.0 ? 1.0E-16 : t173);
  t77 = t206->mX.mX[12UL] * intrm_sf_mf_299;
  out->mZC.mX[57UL] = t206->mX.mX[11UL] / (t77 == 0.0 ? 1.0E-16 : t77);
  if (t206->mX.mX[105UL] <= 0.0) {
    t85 = 0.0;
  } else {
    t85 = t206->mX.mX[105UL] >= 1.0 ? 1.0 : t206->mX.mX[105UL];
  }

  t73 = (1.0 - t85) * 287.047 + t85 * 461.523;
  if (t206->mX.mX[28UL] <= 0.0) {
    t85 = 0.0;
  } else {
    t85 = t206->mX.mX[28UL] >= 1.0 ? 1.0 : t206->mX.mX[28UL];
  }

  t74 = (1.0 - t85) * 287.047 + t85 * 461.523;
  if (t206->mX.mX[15UL] <= 0.0) {
    t85 = 0.0;
  } else {
    t85 = t206->mX.mX[15UL] >= 1.0 ? 1.0 : t206->mX.mX[15UL];
  }

  if (t206->mX.mX[18UL] <= 0.0) {
    Trachea_Dp_AI_choked = 0.0;
  } else {
    Trachea_Dp_AI_choked = t206->mX.mX[18UL] >= 1.0 ? 1.0 : t206->mX.mX[18UL];
  }

  intrm_sf_mf_437 = (1.0 - Trachea_Dp_AI_choked) * 287.047 +
    Trachea_Dp_AI_choked * 461.523;
  if (t206->mX.mX[148UL] <= 0.0) {
    Trachea_Dp_AI_choked = 0.0;
  } else {
    Trachea_Dp_AI_choked = t206->mX.mX[148UL] >= 1.0 ? 1.0 : t206->mX.mX[148UL];
  }

  out->mZC.mX[69UL] = t206->mX.mX[169UL] - t206->mX.mX[19UL];
  out->mZC.mX[70UL] = t206->mX.mX[170UL] - t206->mX.mX[19UL];
  if (t206->mX.mX[21UL] <= 0.0) {
    Trachea_gamma_BI = 0.0;
  } else {
    Trachea_gamma_BI = t206->mX.mX[21UL] >= 1.0 ? 1.0 : t206->mX.mX[21UL];
  }

  intrm_sf_mf_483 = (1.0 - Trachea_gamma_BI) * 287.047 + Trachea_gamma_BI *
    461.523;
  if (t206->mX.mX[174UL] <= 216.59999999999997) {
    Trachea_gamma_AI = 216.59999999999997;
  } else {
    Trachea_gamma_AI = t206->mX.mX[174UL] >= 623.15 ? 623.15 : t206->mX.mX[174UL];
  }

  t173 = Trachea_gamma_AI * Trachea_gamma_AI;
  t173 = ((1026.6477992877929 + Trachea_gamma_AI * -0.17751557357783998) + t173 *
          0.00036658178515919438) * (1.0 - Trachea_gamma_BI) +
    ((1479.6504774710256 + Trachea_gamma_AI * 1.2002114337051653) + t173 *
     -0.00038614513167858997) * Trachea_gamma_BI;
  t78 = t173 - intrm_sf_mf_483;
  Trachea_gamma_AI = t173 / (t78 == 0.0 ? 1.0E-16 : t78);
  if (t206->mX.mX[176UL] <= 216.59999999999997) {
    t173 = 216.59999999999997;
  } else {
    t173 = t206->mX.mX[176UL] >= 623.15 ? 623.15 : t206->mX.mX[176UL];
  }

  t78 = t173 * t173;
  t173 = ((1026.6477992877929 + t173 * -0.17751557357783998) + t78 *
          0.00036658178515919438) * (1.0 - Trachea_gamma_BI) +
    ((1479.6504774710256 + t173 * 1.2002114337051653) + t78 *
     -0.00038614513167858997) * Trachea_gamma_BI;
  t174 = t173 - intrm_sf_mf_483;
  Trachea_gamma_BI = t173 / (t174 == 0.0 ? 1.0E-16 : t174);
  t161 = t206->mX.mX[20UL] * intrm_sf_mf_483;
  out->mZC.mX[73UL] = t206->mX.mX[19UL] / (t161 == 0.0 ? 1.0E-16 : t161);
  if (t206->mX.mX[135UL] <= 0.0) {
    t173 = 0.0;
  } else {
    t173 = t206->mX.mX[135UL] >= 1.0 ? 1.0 : t206->mX.mX[135UL];
  }

  t64 = (1.0 - t173) * 287.047 + t173 * 461.523;
  if (t206->mX.mX[189UL] <= 0.0) {
    t173 = 0.0;
  } else {
    t173 = t206->mX.mX[189UL] >= 1.0 ? 1.0 : t206->mX.mX[189UL];
  }

  t78 = (1.0 - t173) * 287.047 + t173 * 461.523;
  if (t206->mX.mX[30UL] <= 0.0) {
    t173 = 0.0;
  } else {
    t173 = t206->mX.mX[30UL] >= 1.0 ? 1.0 : t206->mX.mX[30UL];
  }

  if (t206->mX.mX[80UL] <= 0.0) {
    t174 = 0.0;
  } else {
    t174 = t206->mX.mX[80UL] >= 1.0 ? 1.0 : t206->mX.mX[80UL];
  }

  intrm_sf_mf_207 = (1.0 - t174) * 287.047 + t174 * 461.523;
  t174 = (1.0 - t173) * 287.047 + t173 * 461.523;
  if (t206->mX.mX[89UL] <= 0.0) {
    t173 = 0.0;
  } else {
    t173 = t206->mX.mX[89UL] >= 1.0 ? 1.0 : t206->mX.mX[89UL];
  }

  intrm_sf_mf_244 = (1.0 - t173) * 287.047 + t173 * 461.523;
  if (t206->mX.mX[96UL] <= 0.0) {
    t173 = 0.0;
  } else {
    t173 = t206->mX.mX[96UL] >= 1.0 ? 1.0 : t206->mX.mX[96UL];
  }

  intrm_sf_mf_250 = (1.0 - t173) * 287.047 + t173 * 461.523;
  if (t206->mX.mX[91UL] <= 0.0) {
    t173 = 0.0;
  } else {
    t173 = t206->mX.mX[91UL] >= 1.0 ? 1.0 : t206->mX.mX[91UL];
  }

  intrm_sf_mf_253 = (1.0 - t173) * 287.047 + t173 * 461.523;
  t173 = (t57 - -5.0E-7) / 1.0E-6;
  t82 = t173 * t173 * 3.0 - t173 * t173 * t173 * 2.0;
  if (t57 <= -5.0E-7) {
    t173 = t206->mX.mX[9UL];
  } else if (t57 >= 5.0E-7) {
    t173 = t206->mX.mX[88UL];
  } else {
    t173 = (1.0 - t82) * t206->mX.mX[9UL] + t206->mX.mX[88UL] * t82;
  }

  if (t206->mX.mX[42UL] <= 0.0) {
    t57 = 0.0;
  } else {
    t57 = t206->mX.mX[42UL] >= 1.0 ? 1.0 : t206->mX.mX[42UL];
  }

  t82 = (1.0 - t57) * 287.047 + t57 * 461.523;
  if (t206->mX.mX[165UL] <= 0.0) {
    t57 = 0.0;
  } else {
    t57 = t206->mX.mX[165UL] >= 1.0 ? 1.0 : t206->mX.mX[165UL];
  }

  if (t206->mM.mX[58UL] == 0) {
    out->mZC.mX[99UL] = t206->mU.mX[2UL] - 623.15;
  } else {
    out->mZC.mX[99UL] = 0.0;
  }

  out->mZC.mX[0UL] = (t206->mX.mX[16UL] + 1.0E-6) - 1.0E-10;
  out->mZC.mX[1UL] = t206->mX.mX[14UL] - 0.01;
  out->mZC.mX[2UL] = pmf_get_inf() - t206->mX.mX[14UL];
  out->mZC.mX[3UL] = t206->mX.mX[0UL] - 216.59999999999997;
  out->mZC.mX[4UL] = 623.15 - t206->mX.mX[0UL];
  out->mZC.mX[5UL] = t206->mX.mX[0UL] * ((1.0 - t85) * 287.047 + t85 * 461.523) /
    (t206->mX.mX[14UL] == 0.0 ? 1.0E-16 : t206->mX.mX[14UL]);
  out->mZC.mX[6UL] = t206->mX.mX[34UL] * t206->mX.mX[34UL] * t155 / (t157 == 0.0
    ? 1.0E-16 : t157) / (t206->mX.mX[33UL] == 0.0 ? 1.0E-16 : t206->mX.mX[33UL]);
  out->mZC.mX[7UL] = t206->mX.mX[34UL] / (t30 == 0.0 ? 1.0E-16 : t30) * 2.0 /
    (t192 == 0.0 ? 1.0E-16 : t192);
  out->mZC.mX[8UL] = t206->mX.mX[36UL] * t157 / (t206->mX.mX[27UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[27UL]);
  out->mZC.mX[9UL] = t206->mX.mX[37UL] * t157 / (t206->mX.mX[2UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[2UL]);
  out->mZC.mX[10UL] = t30 / (t206->mX.mX[34UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [34UL]);
  out->mZC.mX[11UL] = t206->mX.mX[27UL] - 0.01;
  out->mZC.mX[12UL] = pmf_get_inf() - t206->mX.mX[27UL];
  out->mZC.mX[13UL] = t206->mX.mX[26UL] - 216.59999999999997;
  out->mZC.mX[14UL] = 623.15 - t206->mX.mX[26UL];
  out->mZC.mX[15UL] = t206->mX.mX[2UL] - 0.01;
  out->mZC.mX[16UL] = pmf_get_inf() - t206->mX.mX[2UL];
  out->mZC.mX[17UL] = t206->mX.mX[29UL] - 216.59999999999997;
  out->mZC.mX[18UL] = 623.15 - t206->mX.mX[29UL];
  out->mZC.mX[19UL] = t206->mX.mX[49UL] * t206->mX.mX[49UL] *
    (Expiratory_Tube_Dp_BI_choked / (t56 == 0.0 ? 1.0E-16 : t56)) / (t37 == 0.0 ?
    1.0E-16 : t37) / (t206->mX.mX[48UL] == 0.0 ? 1.0E-16 : t206->mX.mX[48UL]);
  out->mZC.mX[20UL] = t206->mX.mX[49UL] / (t44 == 0.0 ? 1.0E-16 : t44) * 2.0 /
    (t172 == 0.0 ? 1.0E-16 : t172);
  out->mZC.mX[21UL] = t206->mX.mX[51UL] * t37 / (t206->mX.mX[2UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[2UL]);
  out->mZC.mX[22UL] = t206->mX.mX[52UL] * t37 / (t206->mX.mX[44UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[44UL]);
  out->mZC.mX[23UL] = t44 / (t206->mX.mX[49UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [49UL]);
  out->mZC.mX[24UL] = t206->mX.mX[41UL] - 216.59999999999997;
  out->mZC.mX[25UL] = 623.15 - t206->mX.mX[41UL];
  out->mZC.mX[26UL] = t206->mX.mX[44UL] - 0.01;
  out->mZC.mX[27UL] = pmf_get_inf() - t206->mX.mX[44UL];
  out->mZC.mX[28UL] = t206->mX.mX[43UL] - 216.59999999999997;
  out->mZC.mX[29UL] = 623.15 - t206->mX.mX[43UL];
  out->mZC.mX[30UL] = t206->mX.mX[82UL] * t206->mX.mX[82UL] * t54 / (t55 == 0.0 ?
    1.0E-16 : t55) / (t206->mX.mX[81UL] == 0.0 ? 1.0E-16 : t206->mX.mX[81UL]);
  out->mZC.mX[31UL] = t206->mX.mX[82UL] / (t62 == 0.0 ? 1.0E-16 : t62) * 2.0 /
    (t47 == 0.0 ? 1.0E-16 : t47);
  out->mZC.mX[32UL] = t206->mX.mX[84UL] * t55 / 1.01325;
  out->mZC.mX[33UL] = t206->mX.mX[85UL] * t55 / (t206->mX.mX[58UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[58UL]);
  out->mZC.mX[34UL] = t62 / (t206->mX.mX[82UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [82UL]);
  out->mZC.mX[35UL] = t206->mX.mX[79UL] - 216.59999999999997;
  out->mZC.mX[36UL] = 623.15 - t206->mX.mX[79UL];
  out->mZC.mX[37UL] = t206->mX.mX[58UL] - 0.01;
  out->mZC.mX[38UL] = pmf_get_inf() - t206->mX.mX[58UL];
  out->mZC.mX[39UL] = t206->mX.mX[57UL] - 216.59999999999997;
  out->mZC.mX[40UL] = 623.15 - t206->mX.mX[57UL];
  out->mZC.mX[43UL] = -(t206->mX.mX[60UL] * t206->mX.mX[60UL] * t41 /
                        (intrm_sf_mf_83 == 0.0 ? 1.0E-16 : intrm_sf_mf_83) /
                        (t206->mX.mX[66UL] == 0.0 ? 1.0E-16 : t206->mX.mX[66UL]));
  out->mZC.mX[44UL] = -(t206->mX.mX[61UL] * t206->mX.mX[61UL] * intrm_sf_mf_82 /
                        (intrm_sf_mf_83 == 0.0 ? 1.0E-16 : intrm_sf_mf_83) /
                        (t206->mX.mX[68UL] == 0.0 ? 1.0E-16 : t206->mX.mX[68UL]));
  out->mZC.mX[46UL] = t206->mX.mX[66UL] * intrm_sf_mf_83 / (t206->mX.mX[67UL] ==
    0.0 ? 1.0E-16 : t206->mX.mX[67UL]);
  out->mZC.mX[47UL] = t206->mX.mX[68UL] * intrm_sf_mf_83 / (t206->mX.mX[70UL] ==
    0.0 ? 1.0E-16 : t206->mX.mX[70UL]);
  out->mZC.mX[48UL] = t206->mX.mX[5UL] - 0.01;
  out->mZC.mX[49UL] = pmf_get_inf() - t206->mX.mX[5UL];
  out->mZC.mX[50UL] = t206->mX.mX[6UL] - 216.59999999999997;
  out->mZC.mX[51UL] = 623.15 - t206->mX.mX[6UL];
  out->mZC.mX[52UL] = t60 / (t206->mX.mX[5UL] == 0.0 ? 1.0E-16 : t206->mX.mX[5UL]);
  out->mZC.mX[55UL] = -(t206->mX.mX[119UL] * t206->mX.mX[119UL] *
                        intrm_sf_mf_300 / (intrm_sf_mf_299 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_299) / (t206->mX.mX[124UL] == 0.0 ? 1.0E-16 : t206->mX.mX[124UL]));
  out->mZC.mX[56UL] = -(t206->mX.mX[120UL] * t206->mX.mX[120UL] * t70 /
                        (intrm_sf_mf_299 == 0.0 ? 1.0E-16 : intrm_sf_mf_299) /
                        (t206->mX.mX[126UL] == 0.0 ? 1.0E-16 : t206->mX.mX[126UL]));
  out->mZC.mX[58UL] = t206->mX.mX[124UL] * intrm_sf_mf_299 / (t206->mX.mX[125UL]
    == 0.0 ? 1.0E-16 : t206->mX.mX[125UL]);
  out->mZC.mX[59UL] = t206->mX.mX[126UL] * intrm_sf_mf_299 / (t206->mX.mX[127UL]
    == 0.0 ? 1.0E-16 : t206->mX.mX[127UL]);
  out->mZC.mX[60UL] = t206->mX.mX[9UL] - 0.01;
  out->mZC.mX[61UL] = pmf_get_inf() - t206->mX.mX[9UL];
  out->mZC.mX[62UL] = t206->mX.mX[104UL] - 216.59999999999997;
  out->mZC.mX[63UL] = 623.15 - t206->mX.mX[104UL];
  out->mZC.mX[64UL] = t206->mX.mX[11UL] - 0.01;
  out->mZC.mX[65UL] = pmf_get_inf() - t206->mX.mX[11UL];
  out->mZC.mX[66UL] = t206->mX.mX[12UL] - 216.59999999999997;
  out->mZC.mX[67UL] = 623.15 - t206->mX.mX[12UL];
  out->mZC.mX[68UL] = t77 / (t206->mX.mX[11UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [11UL]);
  out->mZC.mX[71UL] = -(t206->mX.mX[169UL] * t206->mX.mX[169UL] *
                        Trachea_gamma_AI / (intrm_sf_mf_483 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_483) / (t206->mX.mX[174UL] == 0.0 ? 1.0E-16 : t206->mX.mX[174UL]));
  out->mZC.mX[72UL] = -(t206->mX.mX[170UL] * t206->mX.mX[170UL] *
                        Trachea_gamma_BI / (intrm_sf_mf_483 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_483) / (t206->mX.mX[176UL] == 0.0 ? 1.0E-16 : t206->mX.mX[176UL]));
  out->mZC.mX[74UL] = t206->mX.mX[174UL] * intrm_sf_mf_483 / (t206->mX.mX[175UL]
    == 0.0 ? 1.0E-16 : t206->mX.mX[175UL]);
  out->mZC.mX[75UL] = t206->mX.mX[176UL] * intrm_sf_mf_483 / (t206->mX.mX[177UL]
    == 0.0 ? 1.0E-16 : t206->mX.mX[177UL]);
  out->mZC.mX[76UL] = t206->mX.mX[134UL] - 216.59999999999997;
  out->mZC.mX[77UL] = 623.15 - t206->mX.mX[134UL];
  out->mZC.mX[78UL] = t206->mX.mX[147UL] - 216.59999999999997;
  out->mZC.mX[79UL] = 623.15 - t206->mX.mX[147UL];
  out->mZC.mX[80UL] = t206->mX.mX[19UL] - 0.01;
  out->mZC.mX[81UL] = pmf_get_inf() - t206->mX.mX[19UL];
  out->mZC.mX[82UL] = t206->mX.mX[20UL] - 216.59999999999997;
  out->mZC.mX[83UL] = 623.15 - t206->mX.mX[20UL];
  out->mZC.mX[84UL] = t161 / (t206->mX.mX[19UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [19UL]);
  out->mZC.mX[85UL] = t206->mX.mX[93UL] * intrm_sf_mf_250 / (t173 == 0.0 ?
    1.0E-16 : t173);
  out->mZC.mX[86UL] = t206->mX.mX[88UL] - 0.01;
  out->mZC.mX[87UL] = pmf_get_inf() - t206->mX.mX[88UL];
  out->mZC.mX[88UL] = t206->mX.mX[87UL] - 216.59999999999997;
  out->mZC.mX[89UL] = 623.15 - t206->mX.mX[87UL];
  out->mZC.mX[90UL] = t206->mX.mX[90UL] - 216.59999999999997;
  out->mZC.mX[91UL] = 623.15 - t206->mX.mX[90UL];
  out->mZC.mX[92UL] = t206->mX.mX[8UL] - 216.59999999999997;
  out->mZC.mX[93UL] = 623.15 - t206->mX.mX[8UL];
  out->mZC.mX[94UL] = t206->mX.mX[8UL] * ((1.0 - t58) * 287.047 + t58 * 461.523)
    / (t206->mX.mX[9UL] == 0.0 ? 1.0E-16 : t206->mX.mX[9UL]);
  out->mZC.mX[95UL] = t206->mX.mX[17UL] - 216.59999999999997;
  out->mZC.mX[96UL] = 623.15 - t206->mX.mX[17UL];
  out->mZC.mX[97UL] = t206->mX.mX[17UL] * intrm_sf_mf_437 / (t206->mX.mX[2UL] ==
    0.0 ? 1.0E-16 : t206->mX.mX[2UL]);
  out->mZC.mX[98UL] = 216.59999999999997 - t206->mU.mX[2UL];
  out->mZC.mX[100UL] = t206->mX.mX[164UL] - 216.59999999999997;
  out->mZC.mX[101UL] = 623.15 - t206->mX.mX[164UL];
  t155 = t206->mX.mX[134UL] * t64;
  out->mZC.mX[102UL] = t155 / (t206->mX.mX[14UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [14UL]);
  t157 = t206->mX.mX[26UL] * t74;
  out->mZC.mX[103UL] = t157 / (t206->mX.mX[27UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [27UL]);
  t64 = t206->mX.mX[29UL] * t174;
  out->mZC.mX[104UL] = t64 / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]);
  t161 = t206->mX.mX[41UL] * t82;
  out->mZC.mX[105UL] = t161 / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]);
  t172 = t206->mX.mX[43UL] * t51;
  out->mZC.mX[106UL] = t172 / (t206->mX.mX[44UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [44UL]);
  out->mZC.mX[107UL] = t172 / (t206->mX.mX[44UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [44UL]);
  t172 = t206->mX.mX[57UL] * t53;
  out->mZC.mX[108UL] = t172 / (t206->mX.mX[58UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [58UL]);
  t37 = t206->mX.mX[79UL] * intrm_sf_mf_207;
  out->mZC.mX[109UL] = t37 / 1.01325;
  out->mZC.mX[110UL] = t172 / (t206->mX.mX[58UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [58UL]);
  t172 = t206->mX.mX[87UL] * intrm_sf_mf_244;
  out->mZC.mX[111UL] = t172 / (t206->mX.mX[88UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [88UL]);
  t174 = t206->mX.mX[90UL] * intrm_sf_mf_253;
  out->mZC.mX[112UL] = t174 / (t206->mX.mX[9UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [9UL]);
  out->mZC.mX[113UL] = t174 / (t206->mX.mX[9UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [9UL]);
  t174 = t206->mX.mX[104UL] * t73;
  out->mZC.mX[114UL] = t174 / (t206->mX.mX[9UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [9UL]);
  out->mZC.mX[115UL] = t206->mX.mX[107UL] * 295.17959023120517 / 1.01325;
  out->mZC.mX[116UL] = t174 / (t206->mX.mX[9UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [9UL]);
  out->mZC.mX[117UL] = t157 / (t206->mX.mX[27UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [27UL]);
  t173 = t206->mX.mX[147UL] * ((1.0 - Trachea_Dp_AI_choked) * 287.047 +
    Trachea_Dp_AI_choked * 461.523);
  out->mZC.mX[118UL] = t173 / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]);
  out->mZC.mX[119UL] = t161 / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]);
  out->mZC.mX[120UL] = t64 / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]);
  out->mZC.mX[121UL] = t37 / 1.01325;
  t192 = t206->mX.mX[164UL] * ((1.0 - t57) * 287.047 + t57 * 461.523);
  out->mZC.mX[122UL] = t192 / 1.01325;
  out->mZC.mX[123UL] = t155 / (t206->mX.mX[14UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [14UL]);
  out->mZC.mX[124UL] = t173 / (t206->mX.mX[2UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [2UL]);
  out->mZC.mX[125UL] = t192 / 1.01325;
  out->mZC.mX[126UL] = t172 / (t206->mX.mX[88UL] == 0.0 ? 1.0E-16 : t206->mX.mX
    [88UL]);
  out->mZC.mX[127UL] = t206->mX.mX[184UL] * t78 / 1.01325;
  out->mZC.mX[128UL] = t206->mX.mX[187UL] * t78 / (t206->mX.mX[88UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[88UL]);
  out->mZC.mX[129UL] = t206->mX.mX[185UL] * t78 / (t206->mX.mX[88UL] == 0.0 ?
    1.0E-16 : t206->mX.mX[88UL]);
  out->mZC.mX[130UL] = t206->mX.mX[186UL] * t78 / 1.01325;
  (void)LC;
  (void)out;
  return 0;
}
