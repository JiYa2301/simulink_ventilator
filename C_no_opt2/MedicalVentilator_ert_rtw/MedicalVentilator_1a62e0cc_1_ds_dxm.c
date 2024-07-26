/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_dxm.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_dxm(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t224, NeDsMethodOutput *out)
{
  real_T t0[76];
  real_T t10[4];
  real_T t11[4];
  real_T t12[4];
  real_T t13[4];
  real_T t14[4];
  real_T t15[4];
  real_T t16[4];
  real_T t17[4];
  real_T t18[4];
  real_T t19[4];
  real_T t20[4];
  real_T t21[4];
  real_T t22[4];
  real_T t23[4];
  real_T t24[4];
  real_T t25[4];
  real_T t7[4];
  real_T t8[4];
  real_T t9[4];
  real_T Humidifier_Moist_Air_Volume_rho_I;
  real_T Inspiratory_Tube_rho_I;
  real_T Lungs_rho_I;
  real_T Mask_rho_I;
  real_T Trachea_rho_I;
  real_T intermediate_der1064;
  real_T intermediate_der1065;
  real_T intermediate_der1067;
  real_T intermediate_der1137;
  real_T intermediate_der1138;
  real_T intermediate_der1140;
  real_T intermediate_der1224;
  real_T intermediate_der1249;
  real_T intermediate_der1251;
  real_T intermediate_der1690;
  real_T intermediate_der1710;
  real_T intermediate_der1711;
  real_T intermediate_der1816;
  real_T intermediate_der1822;
  real_T intermediate_der1823;
  real_T intermediate_der1834;
  real_T intermediate_der1835;
  real_T intermediate_der258;
  real_T intermediate_der285;
  real_T intermediate_der689;
  real_T intermediate_der690;
  real_T intermediate_der692;
  real_T intermediate_der764;
  real_T intermediate_der789;
  real_T intermediate_der791;
  real_T intrm_sf_mf_161;
  real_T intrm_sf_mf_265;
  real_T intrm_sf_mf_283;
  real_T intrm_sf_mf_299;
  real_T intrm_sf_mf_377;
  real_T intrm_sf_mf_421;
  real_T intrm_sf_mf_433;
  real_T intrm_sf_mf_437;
  real_T intrm_sf_mf_461;
  real_T intrm_sf_mf_483;
  real_T intrm_sf_mf_561;
  real_T t101;
  real_T t104;
  real_T t106;
  real_T t108;
  real_T t110;
  real_T t112;
  real_T t114;
  real_T t116;
  real_T t119;
  real_T t123;
  real_T t124;
  real_T t128;
  real_T t129;
  real_T t133;
  real_T t134;
  real_T t138;
  real_T t139;
  real_T t143;
  real_T t144;
  real_T t147;
  real_T t155;
  real_T t158;
  real_T t160;
  real_T t163;
  real_T t167;
  real_T t175;
  real_T t220;
  real_T t223;
  real_T t53;
  real_T t56;
  real_T t59;
  real_T t62;
  real_T t65;
  real_T t68;
  real_T t89;
  real_T t92;
  real_T t95;
  real_T t98;
  size_t t44;
  (void)LC;
  if (t224->mX.mX[7UL] <= 0.0) {
    t223 = 0.0;
  } else {
    t223 = t224->mX.mX[7UL] >= 1.0 ? 1.0 : t224->mX.mX[7UL];
  }

  t220 = (1.0 - t223) * 287.047 + t223 * 461.523;
  t106 = t224->mX.mX[6UL] * t220;
  t175 = t224->mX.mX[5UL] / (t106 == 0.0 ? 1.0E-16 : t106);
  if (t224->mX.mX[6UL] <= 216.59999999999997) {
    t167 = 216.59999999999997;
  } else {
    t167 = t224->mX.mX[6UL] >= 623.15 ? 623.15 : t224->mX.mX[6UL];
  }

  t53 = t167 * t167;
  if (t224->mX.mX[10UL] <= 0.0) {
    intermediate_der1710 = 0.0;
  } else {
    intermediate_der1710 = t224->mX.mX[10UL] >= 1.0 ? 1.0 : t224->mX.mX[10UL];
  }

  intrm_sf_mf_265 = (1.0 - intermediate_der1710) * 287.047 +
    intermediate_der1710 * 461.523;
  t108 = t224->mX.mX[8UL] * intrm_sf_mf_265;
  Humidifier_Moist_Air_Volume_rho_I = t224->mX.mX[9UL] / (t108 == 0.0 ? 1.0E-16 :
    t108);
  if (t224->mX.mX[8UL] <= 216.59999999999997) {
    intermediate_der1690 = 216.59999999999997;
  } else {
    intermediate_der1690 = t224->mX.mX[8UL] >= 623.15 ? 623.15 : t224->mX.mX[8UL];
  }

  t56 = intermediate_der1690 * intermediate_der1690;
  if (t224->mX.mX[13UL] <= 0.0) {
    intermediate_der1816 = 0.0;
  } else {
    intermediate_der1816 = t224->mX.mX[13UL] >= 1.0 ? 1.0 : t224->mX.mX[13UL];
  }

  intrm_sf_mf_299 = (1.0 - intermediate_der1816) * 287.047 +
    intermediate_der1816 * 461.523;
  t110 = t224->mX.mX[12UL] * intrm_sf_mf_299;
  Inspiratory_Tube_rho_I = t224->mX.mX[11UL] / (t110 == 0.0 ? 1.0E-16 : t110);
  if (t224->mX.mX[12UL] <= 216.59999999999997) {
    intermediate_der1711 = 216.59999999999997;
  } else {
    intermediate_der1711 = t224->mX.mX[12UL] >= 623.15 ? 623.15 : t224->mX.mX
      [12UL];
  }

  t59 = intermediate_der1711 * intermediate_der1711;
  if (t224->mX.mX[15UL] <= 0.0) {
    intermediate_der1822 = 0.0;
  } else {
    intermediate_der1822 = t224->mX.mX[15UL] >= 1.0 ? 1.0 : t224->mX.mX[15UL];
  }

  intrm_sf_mf_421 = (1.0 - intermediate_der1822) * 287.047 +
    intermediate_der1822 * 461.523;
  t112 = t224->mX.mX[0UL] * intrm_sf_mf_421;
  Lungs_rho_I = t224->mX.mX[14UL] / (t112 == 0.0 ? 1.0E-16 : t112);
  if (t224->mX.mX[0UL] <= 216.59999999999997) {
    t155 = 216.59999999999997;
  } else {
    t155 = t224->mX.mX[0UL] >= 623.15 ? 623.15 : t224->mX.mX[0UL];
  }

  t62 = t155 * t155;
  if (t224->mX.mX[18UL] <= 0.0) {
    intermediate_der1834 = 0.0;
  } else {
    intermediate_der1834 = t224->mX.mX[18UL] >= 1.0 ? 1.0 : t224->mX.mX[18UL];
  }

  intrm_sf_mf_437 = (1.0 - intermediate_der1834) * 287.047 +
    intermediate_der1834 * 461.523;
  t114 = t224->mX.mX[17UL] * intrm_sf_mf_437;
  Mask_rho_I = t224->mX.mX[2UL] / (t114 == 0.0 ? 1.0E-16 : t114);
  if (t224->mX.mX[17UL] <= 216.59999999999997) {
    intermediate_der1823 = 216.59999999999997;
  } else {
    intermediate_der1823 = t224->mX.mX[17UL] >= 623.15 ? 623.15 : t224->mX.mX
      [17UL];
  }

  t65 = intermediate_der1823 * intermediate_der1823;
  if (t224->mX.mX[21UL] <= 0.0) {
    t147 = 0.0;
  } else {
    t147 = t224->mX.mX[21UL] >= 1.0 ? 1.0 : t224->mX.mX[21UL];
  }

  intrm_sf_mf_483 = (1.0 - t147) * 287.047 + t147 * 461.523;
  t116 = t224->mX.mX[20UL] * intrm_sf_mf_483;
  Trachea_rho_I = t224->mX.mX[19UL] / (t116 == 0.0 ? 1.0E-16 : t116);
  if (t224->mX.mX[20UL] <= 216.59999999999997) {
    intermediate_der1835 = 216.59999999999997;
  } else {
    intermediate_der1835 = t224->mX.mX[20UL] >= 623.15 ? 623.15 : t224->mX.mX
      [20UL];
  }

  t68 = intermediate_der1835 * intermediate_der1835;
  intrm_sf_mf_161 = ((1026.6477992877929 + t167 * -0.17751557357783998) + t53 *
                     0.00036658178515919438) * (1.0 - t223) +
    ((1479.6504774710256 + t167 * 1.2002114337051653) + t53 *
     -0.00038614513167858997) * t223;
  intrm_sf_mf_283 = ((1026.6477992877929 + intermediate_der1690 *
                      -0.17751557357783998) + t56 * 0.00036658178515919438) *
    (1.0 - intermediate_der1710) + ((1479.6504774710256 + intermediate_der1690 *
    1.2002114337051653) + t56 * -0.00038614513167858997) * intermediate_der1710;
  intrm_sf_mf_377 = ((1026.6477992877929 + intermediate_der1711 *
                      -0.17751557357783998) + t59 * 0.00036658178515919438) *
    (1.0 - intermediate_der1816) + ((1479.6504774710256 + intermediate_der1711 *
    1.2002114337051653) + t59 * -0.00038614513167858997) * intermediate_der1816;
  intrm_sf_mf_433 = ((1026.6477992877929 + t155 * -0.17751557357783998) + t62 *
                     0.00036658178515919438) * (1.0 - intermediate_der1822) +
    ((1479.6504774710256 + t155 * 1.2002114337051653) + t62 *
     -0.00038614513167858997) * intermediate_der1822;
  intrm_sf_mf_461 = ((1026.6477992877929 + intermediate_der1823 *
                      -0.17751557357783998) + t65 * 0.00036658178515919438) *
    (1.0 - intermediate_der1834) + ((1479.6504774710256 + intermediate_der1823 *
    1.2002114337051653) + t65 * -0.00038614513167858997) * intermediate_der1834;
  intrm_sf_mf_561 = ((1026.6477992877929 + intermediate_der1835 *
                      -0.17751557357783998) + t68 * 0.00036658178515919438) *
    (1.0 - t147) + ((1479.6504774710256 + intermediate_der1835 *
                     1.2002114337051653) + t68 * -0.00038614513167858997) * t147;
  if (t224->mX.mX[7UL] <= 0.0) {
    t158 = 0.0;
  } else {
    t158 = (real_T)!(t224->mX.mX[7UL] >= 1.0);
  }

  intermediate_der258 = -t158 * 287.047 + t158 * 461.523;
  t163 = 1.0 / (t106 == 0.0 ? 1.0E-16 : t106);
  t119 = t224->mX.mX[6UL] * t224->mX.mX[6UL] * t220 * t220;
  t106 = -t224->mX.mX[5UL] / (t119 == 0.0 ? 1.0E-16 : t119) * t224->mX.mX[6UL] *
    intermediate_der258;
  intermediate_der285 = -t224->mX.mX[5UL] / (t119 == 0.0 ? 1.0E-16 : t119) *
    t220;
  if (t224->mX.mX[6UL] <= 216.59999999999997) {
    t160 = 0.0;
  } else {
    t160 = (real_T)!(t224->mX.mX[6UL] >= 623.15);
  }

  t89 = t167 * t160 * 2.0;
  if (t224->mX.mX[10UL] <= 0.0) {
    t119 = 0.0;
  } else {
    t119 = (real_T)!(t224->mX.mX[10UL] >= 1.0);
  }

  intermediate_der689 = -t119 * 287.047 + t119 * 461.523;
  intermediate_der690 = 1.0 / (t108 == 0.0 ? 1.0E-16 : t108);
  t124 = t224->mX.mX[8UL] * t224->mX.mX[8UL] * intrm_sf_mf_265 * intrm_sf_mf_265;
  t108 = -t224->mX.mX[9UL] / (t124 == 0.0 ? 1.0E-16 : t124) * intrm_sf_mf_265;
  intermediate_der692 = -t224->mX.mX[9UL] / (t124 == 0.0 ? 1.0E-16 : t124) *
    t224->mX.mX[8UL] * intermediate_der689;
  if (t224->mX.mX[8UL] <= 216.59999999999997) {
    t123 = 0.0;
  } else {
    t123 = (real_T)!(t224->mX.mX[8UL] >= 623.15);
  }

  t92 = intermediate_der1690 * t123 * 2.0;
  if (t224->mX.mX[13UL] <= 0.0) {
    t124 = 0.0;
  } else {
    t124 = (real_T)!(t224->mX.mX[13UL] >= 1.0);
  }

  intermediate_der764 = -t124 * 287.047 + t124 * 461.523;
  intermediate_der789 = 1.0 / (t110 == 0.0 ? 1.0E-16 : t110);
  t129 = t224->mX.mX[12UL] * t224->mX.mX[12UL] * intrm_sf_mf_299 *
    intrm_sf_mf_299;
  t110 = -t224->mX.mX[11UL] / (t129 == 0.0 ? 1.0E-16 : t129) * t224->mX.mX[12UL]
    * intermediate_der764;
  intermediate_der791 = -t224->mX.mX[11UL] / (t129 == 0.0 ? 1.0E-16 : t129) *
    intrm_sf_mf_299;
  if (t224->mX.mX[12UL] <= 216.59999999999997) {
    t128 = 0.0;
  } else {
    t128 = (real_T)!(t224->mX.mX[12UL] >= 623.15);
  }

  t95 = intermediate_der1711 * t128 * 2.0;
  if (t224->mX.mX[15UL] <= 0.0) {
    t129 = 0.0;
  } else {
    t129 = (real_T)!(t224->mX.mX[15UL] >= 1.0);
  }

  intermediate_der1064 = -t129 * 287.047 + t129 * 461.523;
  intermediate_der1065 = 1.0 / (t112 == 0.0 ? 1.0E-16 : t112);
  t134 = t224->mX.mX[0UL] * t224->mX.mX[0UL] * intrm_sf_mf_421 * intrm_sf_mf_421;
  t112 = -t224->mX.mX[14UL] / (t134 == 0.0 ? 1.0E-16 : t134) * t224->mX.mX[0UL] *
    intermediate_der1064;
  intermediate_der1067 = -t224->mX.mX[14UL] / (t134 == 0.0 ? 1.0E-16 : t134) *
    intrm_sf_mf_421;
  if (t224->mX.mX[0UL] <= 216.59999999999997) {
    t133 = 0.0;
  } else {
    t133 = (real_T)!(t224->mX.mX[0UL] >= 623.15);
  }

  t98 = t155 * t133 * 2.0;
  if (t224->mX.mX[18UL] <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = (real_T)!(t224->mX.mX[18UL] >= 1.0);
  }

  intermediate_der1137 = -t134 * 287.047 + t134 * 461.523;
  intermediate_der1138 = 1.0 / (t114 == 0.0 ? 1.0E-16 : t114);
  t139 = t224->mX.mX[17UL] * t224->mX.mX[17UL] * intrm_sf_mf_437 *
    intrm_sf_mf_437;
  t114 = -t224->mX.mX[2UL] / (t139 == 0.0 ? 1.0E-16 : t139) * t224->mX.mX[17UL] *
    intermediate_der1137;
  intermediate_der1140 = -t224->mX.mX[2UL] / (t139 == 0.0 ? 1.0E-16 : t139) *
    intrm_sf_mf_437;
  if (t224->mX.mX[17UL] <= 216.59999999999997) {
    t138 = 0.0;
  } else {
    t138 = (real_T)!(t224->mX.mX[17UL] >= 623.15);
  }

  t101 = intermediate_der1823 * t138 * 2.0;
  if (t224->mX.mX[21UL] <= 0.0) {
    t139 = 0.0;
  } else {
    t139 = (real_T)!(t224->mX.mX[21UL] >= 1.0);
  }

  intermediate_der1224 = -t139 * 287.047 + t139 * 461.523;
  intermediate_der1249 = 1.0 / (t116 == 0.0 ? 1.0E-16 : t116);
  t144 = t224->mX.mX[20UL] * t224->mX.mX[20UL] * intrm_sf_mf_483 *
    intrm_sf_mf_483;
  t116 = -t224->mX.mX[19UL] / (t144 == 0.0 ? 1.0E-16 : t144) * t224->mX.mX[20UL]
    * intermediate_der1224;
  intermediate_der1251 = -t224->mX.mX[19UL] / (t144 == 0.0 ? 1.0E-16 : t144) *
    intrm_sf_mf_483;
  if (t224->mX.mX[20UL] <= 216.59999999999997) {
    t143 = 0.0;
  } else {
    t143 = (real_T)!(t224->mX.mX[20UL] >= 623.15);
  }

  t104 = intermediate_der1835 * t143 * 2.0;
  t144 = -t158 * ((1026.6477992877929 + t167 * -0.17751557357783998) + t53 *
                  0.00036658178515919438) + ((1479.6504774710256 + t167 *
    1.2002114337051653) + t53 * -0.00038614513167858997) * t158;
  t167 = (t160 * -0.17751557357783998 + t89 * 0.00036658178515919438) * (1.0 -
    t223) + (t160 * 1.2002114337051653 + t89 * -0.00038614513167858997) * t223;
  t223 = -t119 * ((1026.6477992877929 + intermediate_der1690 *
                   -0.17751557357783998) + t56 * 0.00036658178515919438) +
    ((1479.6504774710256 + intermediate_der1690 * 1.2002114337051653) + t56 *
     -0.00038614513167858997) * t119;
  intermediate_der1690 = (t123 * -0.17751557357783998 + t92 *
    0.00036658178515919438) * (1.0 - intermediate_der1710) + (t123 *
    1.2002114337051653 + t92 * -0.00038614513167858997) * intermediate_der1710;
  intermediate_der1710 = -t124 * ((1026.6477992877929 + intermediate_der1711 *
    -0.17751557357783998) + t59 * 0.00036658178515919438) + ((1479.6504774710256
    + intermediate_der1711 * 1.2002114337051653) + t59 * -0.00038614513167858997)
    * t124;
  intermediate_der1711 = (t128 * -0.17751557357783998 + t95 *
    0.00036658178515919438) * (1.0 - intermediate_der1816) + (t128 *
    1.2002114337051653 + t95 * -0.00038614513167858997) * intermediate_der1816;
  intermediate_der1816 = -t129 * ((1026.6477992877929 + t155 *
    -0.17751557357783998) + t62 * 0.00036658178515919438) + ((1479.6504774710256
    + t155 * 1.2002114337051653) + t62 * -0.00038614513167858997) * t129;
  t158 = t224->mX.mX[0UL] * t224->mX.mX[0UL];
  t7[0UL] = (-(1.0 / (t224->mX.mX[0UL] == 0.0 ? 1.0E-16 : t224->mX.mX[0UL])) *
             intermediate_der1067 + -(-1.0 / (t158 == 0.0 ? 1.0E-16 : t158)) *
             Lungs_rho_I) * (t224->mX.mX[16UL] + 1.0E-6) * 100000.0 /
    1.2922971759239461;
  t7[1UL] = ((intrm_sf_mf_433 - intrm_sf_mf_421) * intermediate_der1067 +
             Lungs_rho_I * ((t133 * -0.17751557357783998 + t98 *
    0.00036658178515919438) * (1.0 - intermediate_der1822) + (t133 *
    1.2002114337051653 + t98 * -0.00038614513167858997) * intermediate_der1822))
    * (t224->mX.mX[16UL] + 1.0E-6) * 100.0 / 101.325;
  t7[2UL] = 1.0 / (t224->mX.mX[14UL] == 0.0 ? 1.0E-16 : t224->mX.mX[14UL]) *
    (t224->mX.mX[16UL] + 1.0E-6) * intermediate_der1067 * 100000.0 /
    1.2922971759239461;
  t7[3UL] = (t224->mX.mX[16UL] + 1.0E-6) * intermediate_der1067 * 100000.0;
  t155 = t224->mX.mX[2UL] * t224->mX.mX[2UL];
  t8[0UL] = (1.0 / (t224->mX.mX[2UL] == 0.0 ? 1.0E-16 : t224->mX.mX[2UL]) *
             intermediate_der1138 + -1.0 / (t155 == 0.0 ? 1.0E-16 : t155) *
             Mask_rho_I) * 20.0;
  t8[1UL] = -(1.0 / (t224->mX.mX[17UL] == 0.0 ? 1.0E-16 : t224->mX.mX[17UL])) *
    intermediate_der1138 * 20.0;
  t8[2UL] = (intrm_sf_mf_461 - intrm_sf_mf_437) * intermediate_der1138 * 0.02 /
    78.406888049999992;
  t8[3UL] = intermediate_der1138 * 20.0;
  t158 = t224->mX.mX[5UL] * t224->mX.mX[5UL];
  t9[0UL] = (1.0 / (t224->mX.mX[5UL] == 0.0 ? 1.0E-16 : t224->mX.mX[5UL]) * t163
             + -1.0 / (t158 == 0.0 ? 1.0E-16 : t158) * t175) *
    7.8539816339744828;
  t9[1UL] = -(1.0 / (t224->mX.mX[6UL] == 0.0 ? 1.0E-16 : t224->mX.mX[6UL])) *
    t163 * 7.8539816339744828;
  t9[2UL] = (intrm_sf_mf_161 - t220) * t163 * 0.0078539816339744835 /
    78.406888049999992;
  t9[3UL] = t163 * 7.8539816339744828;
  t10[0UL] = 1.0 / (t224->mX.mX[5UL] == 0.0 ? 1.0E-16 : t224->mX.mX[5UL]) *
    intermediate_der285 * 7.8539816339744828;
  t163 = t224->mX.mX[6UL] * t224->mX.mX[6UL];
  t10[1UL] = (-(1.0 / (t224->mX.mX[6UL] == 0.0 ? 1.0E-16 : t224->mX.mX[6UL])) *
              intermediate_der285 + -(-1.0 / (t163 == 0.0 ? 1.0E-16 : t163)) *
              t175) * 7.8539816339744828;
  t10[2UL] = ((intrm_sf_mf_161 - t220) * intermediate_der285 + t175 * t167) *
    0.0078539816339744835 / 78.406888049999992;
  t10[3UL] = intermediate_der285 * 7.8539816339744828;
  t11[0UL] = 1.0 / (t224->mX.mX[5UL] == 0.0 ? 1.0E-16 : t224->mX.mX[5UL]) * t106
    * 7.8539816339744828;
  t11[1UL] = -(1.0 / (t224->mX.mX[6UL] == 0.0 ? 1.0E-16 : t224->mX.mX[6UL])) *
    t106 * 7.8539816339744828;
  t11[2UL] = ((intrm_sf_mf_161 - t220) * t106 + (t144 - intermediate_der258) *
              t175) * 0.0078539816339744835 / 78.406888049999992;
  t11[3UL] = t106 * 7.8539816339744828;
  t175 = t224->mX.mX[8UL] * t224->mX.mX[8UL];
  t12[0UL] = (-(1.0 / (t224->mX.mX[8UL] == 0.0 ? 1.0E-16 : t224->mX.mX[8UL])) *
              t108 + -(-1.0 / (t175 == 0.0 ? 1.0E-16 : t175)) *
              Humidifier_Moist_Air_Volume_rho_I) * 100.0;
  t12[1UL] = ((intrm_sf_mf_283 - intrm_sf_mf_265) * t108 +
              Humidifier_Moist_Air_Volume_rho_I * intermediate_der1690) * 0.1 /
    78.406888049999992;
  t12[2UL] = 1.0 / (t224->mX.mX[9UL] == 0.0 ? 1.0E-16 : t224->mX.mX[9UL]) * t108
    * 100.0;
  t12[3UL] = t108 * 100.0;
  t13[0UL] = -(1.0 / (t224->mX.mX[8UL] == 0.0 ? 1.0E-16 : t224->mX.mX[8UL])) *
    intermediate_der690 * 100.0;
  t13[1UL] = (intrm_sf_mf_283 - intrm_sf_mf_265) * intermediate_der690 * 0.1 /
    78.406888049999992;
  t175 = t224->mX.mX[9UL] * t224->mX.mX[9UL];
  t13[2UL] = (1.0 / (t224->mX.mX[9UL] == 0.0 ? 1.0E-16 : t224->mX.mX[9UL]) *
              intermediate_der690 + -1.0 / (t175 == 0.0 ? 1.0E-16 : t175) *
              Humidifier_Moist_Air_Volume_rho_I) * 100.0;
  t13[3UL] = intermediate_der690 * 100.0;
  t14[0UL] = -(1.0 / (t224->mX.mX[8UL] == 0.0 ? 1.0E-16 : t224->mX.mX[8UL])) *
    intermediate_der692 * 100.0;
  t14[1UL] = ((intrm_sf_mf_283 - intrm_sf_mf_265) * intermediate_der692 + (t223
    - intermediate_der689) * Humidifier_Moist_Air_Volume_rho_I) * 0.1 /
    78.406888049999992;
  t14[2UL] = 1.0 / (t224->mX.mX[9UL] == 0.0 ? 1.0E-16 : t224->mX.mX[9UL]) *
    intermediate_der692 * 100.0;
  t14[3UL] = intermediate_der692 * 100.0;
  t223 = t224->mX.mX[11UL] * t224->mX.mX[11UL];
  t15[0UL] = (1.0 / (t224->mX.mX[11UL] == 0.0 ? 1.0E-16 : t224->mX.mX[11UL]) *
              intermediate_der789 + -1.0 / (t223 == 0.0 ? 1.0E-16 : t223) *
              Inspiratory_Tube_rho_I) * 7.8539816339744828;
  t15[1UL] = -(1.0 / (t224->mX.mX[12UL] == 0.0 ? 1.0E-16 : t224->mX.mX[12UL])) *
    intermediate_der789 * 7.8539816339744828;
  t15[2UL] = (intrm_sf_mf_377 - intrm_sf_mf_299) * intermediate_der789 *
    0.0078539816339744835 / 78.406888049999992;
  t15[3UL] = intermediate_der789 * 7.8539816339744828;
  t16[0UL] = 1.0 / (t224->mX.mX[11UL] == 0.0 ? 1.0E-16 : t224->mX.mX[11UL]) *
    intermediate_der791 * 7.8539816339744828;
  t220 = t224->mX.mX[12UL] * t224->mX.mX[12UL];
  t16[1UL] = (-(1.0 / (t224->mX.mX[12UL] == 0.0 ? 1.0E-16 : t224->mX.mX[12UL])) *
              intermediate_der791 + -(-1.0 / (t220 == 0.0 ? 1.0E-16 : t220)) *
              Inspiratory_Tube_rho_I) * 7.8539816339744828;
  t16[2UL] = ((intrm_sf_mf_377 - intrm_sf_mf_299) * intermediate_der791 +
              Inspiratory_Tube_rho_I * intermediate_der1711) *
    0.0078539816339744835 / 78.406888049999992;
  t16[3UL] = intermediate_der791 * 7.8539816339744828;
  t17[0UL] = 1.0 / (t224->mX.mX[11UL] == 0.0 ? 1.0E-16 : t224->mX.mX[11UL]) *
    t110 * 7.8539816339744828;
  t17[1UL] = -(1.0 / (t224->mX.mX[12UL] == 0.0 ? 1.0E-16 : t224->mX.mX[12UL])) *
    t110 * 7.8539816339744828;
  t17[2UL] = ((intrm_sf_mf_377 - intrm_sf_mf_299) * t110 + (intermediate_der1710
    - intermediate_der764) * Inspiratory_Tube_rho_I) * 0.0078539816339744835 /
    78.406888049999992;
  t17[3UL] = t110 * 7.8539816339744828;
  t18[0UL] = -(1.0 / (t224->mX.mX[0UL] == 0.0 ? 1.0E-16 : t224->mX.mX[0UL])) *
    (t224->mX.mX[16UL] + 1.0E-6) * intermediate_der1065 * 100000.0 /
    1.2922971759239461;
  t18[1UL] = (intrm_sf_mf_433 - intrm_sf_mf_421) * (t224->mX.mX[16UL] + 1.0E-6) *
    intermediate_der1065 * 100.0 / 101.325;
  t223 = t224->mX.mX[14UL] * t224->mX.mX[14UL];
  t18[2UL] = (1.0 / (t224->mX.mX[14UL] == 0.0 ? 1.0E-16 : t224->mX.mX[14UL]) *
              intermediate_der1065 + -1.0 / (t223 == 0.0 ? 1.0E-16 : t223) *
              Lungs_rho_I) * (t224->mX.mX[16UL] + 1.0E-6) * 100000.0 /
    1.2922971759239461;
  t18[3UL] = (t224->mX.mX[16UL] + 1.0E-6) * intermediate_der1065 * 100000.0;
  t19[0UL] = -(1.0 / (t224->mX.mX[0UL] == 0.0 ? 1.0E-16 : t224->mX.mX[0UL])) *
    (t224->mX.mX[16UL] + 1.0E-6) * t112 * 100000.0 / 1.2922971759239461;
  t19[1UL] = ((intrm_sf_mf_433 - intrm_sf_mf_421) * t112 + (intermediate_der1816
    - intermediate_der1064) * Lungs_rho_I) * (t224->mX.mX[16UL] + 1.0E-6) *
    100.0 / 101.325;
  t19[2UL] = 1.0 / (t224->mX.mX[14UL] == 0.0 ? 1.0E-16 : t224->mX.mX[14UL]) *
    (t224->mX.mX[16UL] + 1.0E-6) * t112 * 100000.0 / 1.2922971759239461;
  t19[3UL] = (t224->mX.mX[16UL] + 1.0E-6) * t112 * 100000.0;
  t20[0UL] = -(1.0 / (t224->mX.mX[0UL] == 0.0 ? 1.0E-16 : t224->mX.mX[0UL])) *
    Lungs_rho_I * 100000.0 / 1.2922971759239461;
  t20[1UL] = (intrm_sf_mf_433 - intrm_sf_mf_421) * Lungs_rho_I * 100.0 / 101.325;
  t20[2UL] = 1.0 / (t224->mX.mX[14UL] == 0.0 ? 1.0E-16 : t224->mX.mX[14UL]) *
    Lungs_rho_I * 100000.0 / 1.2922971759239461;
  t20[3UL] = Lungs_rho_I * 100000.0;
  t21[0UL] = 1.0 / (t224->mX.mX[2UL] == 0.0 ? 1.0E-16 : t224->mX.mX[2UL]) *
    intermediate_der1140 * 20.0;
  t223 = t224->mX.mX[17UL] * t224->mX.mX[17UL];
  t21[1UL] = (-(1.0 / (t224->mX.mX[17UL] == 0.0 ? 1.0E-16 : t224->mX.mX[17UL])) *
              intermediate_der1140 + -(-1.0 / (t223 == 0.0 ? 1.0E-16 : t223)) *
              Mask_rho_I) * 20.0;
  t21[2UL] = ((intrm_sf_mf_461 - intrm_sf_mf_437) * intermediate_der1140 +
              Mask_rho_I * ((t138 * -0.17751557357783998 + t101 *
    0.00036658178515919438) * (1.0 - intermediate_der1834) + (t138 *
    1.2002114337051653 + t101 * -0.00038614513167858997) * intermediate_der1834))
    * 0.02 / 78.406888049999992;
  t21[3UL] = intermediate_der1140 * 20.0;
  t22[0UL] = 1.0 / (t224->mX.mX[2UL] == 0.0 ? 1.0E-16 : t224->mX.mX[2UL]) * t114
    * 20.0;
  t22[1UL] = -(1.0 / (t224->mX.mX[17UL] == 0.0 ? 1.0E-16 : t224->mX.mX[17UL])) *
    t114 * 20.0;
  t22[2UL] = ((intrm_sf_mf_461 - intrm_sf_mf_437) * t114 + ((-t134 *
    ((1026.6477992877929 + intermediate_der1823 * -0.17751557357783998) + t65 *
     0.00036658178515919438) + ((1479.6504774710256 + intermediate_der1823 *
    1.2002114337051653) + t65 * -0.00038614513167858997) * t134) -
    intermediate_der1137) * Mask_rho_I) * 0.02 / 78.406888049999992;
  t22[3UL] = t114 * 20.0;
  t223 = t224->mX.mX[19UL] * t224->mX.mX[19UL];
  t23[0UL] = (1.0 / (t224->mX.mX[19UL] == 0.0 ? 1.0E-16 : t224->mX.mX[19UL]) *
              intermediate_der1249 + -1.0 / (t223 == 0.0 ? 1.0E-16 : t223) *
              Trachea_rho_I) * 2.6507188014663878;
  t23[1UL] = -(1.0 / (t224->mX.mX[20UL] == 0.0 ? 1.0E-16 : t224->mX.mX[20UL])) *
    intermediate_der1249 * 2.6507188014663878;
  t23[2UL] = (intrm_sf_mf_561 - intrm_sf_mf_483) * intermediate_der1249 *
    0.0026507188014663879 / 78.406888049999992;
  t23[3UL] = intermediate_der1249 * 2.6507188014663878;
  t24[0UL] = 1.0 / (t224->mX.mX[19UL] == 0.0 ? 1.0E-16 : t224->mX.mX[19UL]) *
    intermediate_der1251 * 2.6507188014663878;
  t220 = t224->mX.mX[20UL] * t224->mX.mX[20UL];
  t24[1UL] = (-(1.0 / (t224->mX.mX[20UL] == 0.0 ? 1.0E-16 : t224->mX.mX[20UL])) *
              intermediate_der1251 + -(-1.0 / (t220 == 0.0 ? 1.0E-16 : t220)) *
              Trachea_rho_I) * 2.6507188014663878;
  t24[2UL] = ((intrm_sf_mf_561 - intrm_sf_mf_483) * intermediate_der1251 +
              Trachea_rho_I * ((t143 * -0.17751557357783998 + t104 *
    0.00036658178515919438) * (1.0 - t147) + (t143 * 1.2002114337051653 + t104 *
    -0.00038614513167858997) * t147)) * 0.0026507188014663879 /
    78.406888049999992;
  t24[3UL] = intermediate_der1251 * 2.6507188014663878;
  t25[0UL] = 1.0 / (t224->mX.mX[19UL] == 0.0 ? 1.0E-16 : t224->mX.mX[19UL]) *
    t116 * 2.6507188014663878;
  t25[1UL] = -(1.0 / (t224->mX.mX[20UL] == 0.0 ? 1.0E-16 : t224->mX.mX[20UL])) *
    t116 * 2.6507188014663878;
  t25[2UL] = ((intrm_sf_mf_561 - intrm_sf_mf_483) * t116 + ((-t139 *
    ((1026.6477992877929 + intermediate_der1835 * -0.17751557357783998) + t68 *
     0.00036658178515919438) + ((1479.6504774710256 + intermediate_der1835 *
    1.2002114337051653) + t68 * -0.00038614513167858997) * t139) -
    intermediate_der1224) * Trachea_rho_I) * 0.0026507188014663879 /
    78.406888049999992;
  t25[3UL] = t116 * 2.6507188014663878;
  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44] = t7[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 4UL] = t8[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 8UL] = t9[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 12UL] = t10[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 16UL] = t11[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 20UL] = t12[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 24UL] = t13[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 28UL] = t14[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 32UL] = t15[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 36UL] = t16[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 40UL] = t17[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 44UL] = t18[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 48UL] = t19[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 52UL] = t20[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 56UL] = t21[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 60UL] = t22[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 64UL] = t23[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 68UL] = t24[t44];
  }

  for (t44 = 0UL; t44 < 4UL; t44++) {
    t0[t44 + 72UL] = t25[t44];
  }

  out->mDXM.mX[0] = t0[0];
  out->mDXM.mX[1] = t0[1];
  out->mDXM.mX[2] = t0[2];
  out->mDXM.mX[3] = t0[3];
  out->mDXM.mX[4] = t0[4];
  out->mDXM.mX[5] = t0[5];
  out->mDXM.mX[6] = t0[6];
  out->mDXM.mX[7] = t0[7];
  out->mDXM.mX[8] = t0[8];
  out->mDXM.mX[9] = t0[9];
  out->mDXM.mX[10] = t0[10];
  out->mDXM.mX[11] = t0[11];
  out->mDXM.mX[12] = t0[12];
  out->mDXM.mX[13] = t0[13];
  out->mDXM.mX[14] = t0[14];
  out->mDXM.mX[15] = t0[15];
  out->mDXM.mX[16] = t0[16];
  out->mDXM.mX[17] = t0[17];
  out->mDXM.mX[18] = t0[18];
  out->mDXM.mX[19] = t0[19];
  out->mDXM.mX[20] = t0[20];
  out->mDXM.mX[21] = t0[21];
  out->mDXM.mX[22] = t0[22];
  out->mDXM.mX[23] = t0[23];
  out->mDXM.mX[24] = t0[24];
  out->mDXM.mX[25] = t0[25];
  out->mDXM.mX[26] = t0[26];
  out->mDXM.mX[27] = t0[27];
  out->mDXM.mX[28] = t0[28];
  out->mDXM.mX[29] = t0[29];
  out->mDXM.mX[30] = t0[30];
  out->mDXM.mX[31] = t0[31];
  out->mDXM.mX[32] = t0[32];
  out->mDXM.mX[33] = t0[33];
  out->mDXM.mX[34] = t0[34];
  out->mDXM.mX[35] = t0[35];
  out->mDXM.mX[36] = t0[36];
  out->mDXM.mX[37] = t0[37];
  out->mDXM.mX[38] = t0[38];
  out->mDXM.mX[39] = t0[39];
  out->mDXM.mX[40] = t0[40];
  out->mDXM.mX[41] = t0[41];
  out->mDXM.mX[42] = t0[42];
  out->mDXM.mX[43] = t0[43];
  out->mDXM.mX[44] = t0[44];
  out->mDXM.mX[45] = t0[45];
  out->mDXM.mX[46] = t0[46];
  out->mDXM.mX[47] = t0[47];
  out->mDXM.mX[48] = t0[48];
  out->mDXM.mX[49] = t0[49];
  out->mDXM.mX[50] = t0[50];
  out->mDXM.mX[51] = t0[51];
  out->mDXM.mX[52] = t0[52];
  out->mDXM.mX[53] = t0[53];
  out->mDXM.mX[54] = t0[54];
  out->mDXM.mX[55] = t0[55];
  out->mDXM.mX[56] = t0[56];
  out->mDXM.mX[57] = t0[57];
  out->mDXM.mX[58] = t0[58];
  out->mDXM.mX[59] = t0[59];
  out->mDXM.mX[60] = t0[60];
  out->mDXM.mX[61] = t0[61];
  out->mDXM.mX[62] = t0[62];
  out->mDXM.mX[63] = t0[63];
  out->mDXM.mX[64] = t0[64];
  out->mDXM.mX[65] = t0[65];
  out->mDXM.mX[66] = t0[66];
  out->mDXM.mX[67] = t0[67];
  out->mDXM.mX[68] = t0[68];
  out->mDXM.mX[69] = t0[69];
  out->mDXM.mX[70] = t0[70];
  out->mDXM.mX[71] = t0[71];
  out->mDXM.mX[72] = t0[72];
  out->mDXM.mX[73] = t0[73];
  out->mDXM.mX[74] = t0[74];
  out->mDXM.mX[75] = t0[75];
  (void)LC;
  (void)out;
  return 0;
}
