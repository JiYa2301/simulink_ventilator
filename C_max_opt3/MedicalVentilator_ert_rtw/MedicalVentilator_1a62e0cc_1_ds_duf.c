/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilator/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilator_1a62e0cc_1_ds_duf.h"
#include "MedicalVentilator_1a62e0cc_1_ds.h"
#include "MedicalVentilator_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilator_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilator_1a62e0cc_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t346, NeDsMethodOutput *out)
{
  ETTSf3049b48 t1;
  ETTSf3049b48 t8;
  real_T t89[23];
  real_T t65[1];
  real_T t85[1];
  real_T t86[1];
  real_T Flow_Resistance_MA_convection_A_mdot;
  real_T Humidifier_Moist_Air_Volume_u_a_I;
  real_T intermediate_der2107;
  real_T intermediate_der2284;
  real_T intermediate_der2629;
  real_T intermediate_der556;
  real_T intermediate_der656;
  real_T intermediate_der659;
  real_T intrm_sf_mf_262;
  real_T t103;
  real_T t105;
  real_T t115;
  real_T t116;
  real_T t117;
  real_T t120;
  real_T t121;
  real_T t123;
  real_T t124;
  real_T t125;
  real_T t129;
  real_T t132;
  real_T t133;
  real_T t139;
  real_T t140;
  real_T t145;
  real_T t148;
  real_T t152;
  real_T t153;
  real_T t165;
  real_T t166;
  real_T t173;
  real_T t266;
  real_T t293;
  real_T t304;
  real_T t306;
  real_T t308;
  real_T t310;
  real_T t313;
  real_T t314;
  real_T t315;
  real_T t316;
  real_T t317;
  real_T t319;
  real_T t320;
  real_T t331;
  real_T t333;
  real_T t96;
  real_T t98;
  real_T zc_int112;
  real_T zc_int148;
  real_T zc_int56;
  real_T zc_int57;
  real_T zc_int65;
  real_T zc_int70;
  size_t t10[1];
  size_t t11[1];
  size_t t91;
  t333 = t346->mU.mX[0UL] * 10000.0;
  if (t333 * 0.0001 <= 1.0E-10) {
    t103 = 1.0E-10;
  } else if (t333 * 0.0001 >= 6.3617251235193318E-5) {
    t103 = 6.3617251235193318E-5;
  } else {
    t103 = t333 * 0.0001;
  }

  intermediate_der656 = t103 / 7.8539816339744827E-5;
  if (t346->mX.mX[83UL] <= 0.0) {
    t319 = 0.0;
  } else {
    t319 = t346->mX.mX[83UL] >= 1.0 ? 1.0 : t346->mX.mX[83UL];
  }

  t310 = (1.0 - t319) * 287.047 + t319 * 461.523;
  t105 = t346->mX.mX[81UL] * t310;
  t331 = t346->mX.mX[82UL] / (t105 == 0.0 ? 1.0E-16 : t105);
  t315 = t346->mX.mX[82UL] / 1.01325 * (t346->mX.mX[84UL] / (t346->mX.mX[81UL] ==
    0.0 ? 1.0E-16 : t346->mX.mX[81UL]));
  t313 = t346->mX.mX[82UL] / (t346->mX.mX[58UL] == 0.0 ? 1.0E-16 : t346->mX.mX
    [58UL]) * (t346->mX.mX[85UL] / (t346->mX.mX[81UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[81UL]));
  t320 = (t346->mX.mX[58UL] + 1.01325) / 2.0 * 0.0010000000000000009;
  intermediate_der659 = (1.0 - intermediate_der656) * (1.0 - intermediate_der656);
  t304 = t320 * intermediate_der659;
  t166 = (intermediate_der656 + 1.0) * (1.0 - intermediate_der656 * t315) - (1.0
    - intermediate_der656 * t313) * intermediate_der656 * 2.0;
  intermediate_der2107 = (1.01325 - t346->mX.mX[58UL]) * (t166 >=
    intermediate_der659 ? t166 : intermediate_der659);
  Flow_Resistance_MA_convection_A_mdot = (1.01325 - t346->mX.mX[58UL]) / (t320 ==
    0.0 ? 1.0E-16 : t320);
  intermediate_der2284 = Flow_Resistance_MA_convection_A_mdot *
    Flow_Resistance_MA_convection_A_mdot * 3.0 -
    Flow_Resistance_MA_convection_A_mdot * Flow_Resistance_MA_convection_A_mdot *
    Flow_Resistance_MA_convection_A_mdot * 2.0;
  if (1.01325 - t346->mX.mX[58UL] <= 0.0) {
    Flow_Resistance_MA_convection_A_mdot = t304;
  } else if (1.01325 - t346->mX.mX[58UL] >= t320) {
    Flow_Resistance_MA_convection_A_mdot = intermediate_der2107;
  } else {
    Flow_Resistance_MA_convection_A_mdot = (1.0 - intermediate_der2284) * t304 +
      intermediate_der2107 * intermediate_der2284;
  }

  intermediate_der2107 = (intermediate_der656 + 1.0) * (1.0 -
    intermediate_der656 * t313) - (1.0 - intermediate_der656 * t315) *
    intermediate_der656 * 2.0;
  t306 = (t346->mX.mX[58UL] - 1.01325) * (intermediate_der2107 >=
    intermediate_der659 ? intermediate_der2107 : intermediate_der659);
  t317 = (t346->mX.mX[58UL] - 1.01325) / (t320 == 0.0 ? 1.0E-16 : t320);
  t115 = t317 * t317 * 3.0 - t317 * t317 * t317 * 2.0;
  if (t346->mX.mX[58UL] - 1.01325 <= 0.0) {
    t317 = t304;
  } else if (t346->mX.mX[58UL] - 1.01325 >= t320) {
    t317 = t306;
  } else {
    t317 = (1.0 - t115) * t304 + t306 * t115;
  }

  if (t346->mX.mX[58UL] < 1.01325) {
    t306 = Flow_Resistance_MA_convection_A_mdot;
  } else {
    t306 = t346->mX.mX[58UL] > 1.01325 ? t317 : t304;
  }

  if (t346->mX.mX[81UL] <= 216.59999999999997) {
    t304 = 216.59999999999997;
  } else {
    t304 = t346->mX.mX[81UL] >= 623.15 ? 623.15 : t346->mX.mX[81UL];
  }

  t314 = t304 * t304;
  Flow_Resistance_MA_convection_A_mdot = ((1026.6477992877929 + t304 *
    -0.17751557357783998) + t314 * 0.00036658178515919438) * (1.0 - t319) +
    ((1479.6504774710256 + t304 * 1.2002114337051653) + t314 *
     -0.00038614513167858997) * t319;
  t116 = Flow_Resistance_MA_convection_A_mdot - t310;
  t117 = t346->mX.mX[82UL] * t346->mX.mX[82UL] *
    (Flow_Resistance_MA_convection_A_mdot / (t116 == 0.0 ? 1.0E-16 : t116));
  t319 = pmf_sqrt(fabs(t117 / (t310 == 0.0 ? 1.0E-16 : t310) / (t346->mX.mX[81UL]
    == 0.0 ? 1.0E-16 : t346->mX.mX[81UL]))) * t103 * 0.8;
  t120 = t331 * 2.0;
  t304 = (1.01325 - t346->mX.mX[58UL]) * pmf_sqrt(fabs(t120 / (t306 == 0.0 ?
    1.0E-16 : t306))) * t103 * 0.8;
  Flow_Resistance_MA_convection_A_mdot = t346->mU.mX[1UL] *
    0.0011972999228658597;
  t317 = pmf_sqrt(Flow_Resistance_MA_convection_A_mdot *
                  Flow_Resistance_MA_convection_A_mdot + 1.6318057656437105E-13);
  t65[0UL] = t346->mX.mX[8UL];
  t10[0] = 52UL;
  t11[0] = 1UL;
  tlu2_linear_linear_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  t98 = t85[0UL];
  if (t346->mX.mX[10UL] <= 0.0) {
    t314 = 0.0;
  } else {
    t314 = t346->mX.mX[10UL] >= 1.0 ? 1.0 : t346->mX.mX[10UL];
  }

  t116 = (1.0 - t314) * 287.047 + t314 * 461.523;
  tlu2_1d_linear_linear_value(&t85[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  t314 = ((1.0 - t314) * t85[0UL] + t98 * t314) - t346->mX.mX[8UL] * t116 *
    0.001;
  Humidifier_Moist_Air_Volume_u_a_I = t85[0UL] - t346->mX.mX[8UL] *
    0.28704700000000005;
  t316 = t98 - t346->mX.mX[8UL] * 0.461523;
  if (t346->mX.mX[189UL] <= 0.0) {
    t98 = 0.0;
  } else {
    t98 = t346->mX.mX[189UL] >= 1.0 ? 1.0 : t346->mX.mX[189UL];
  }

  intermediate_der2629 = (1.0 - t98) * 287.047 + t98 * 461.523;
  t65[0UL] = t346->mX.mX[184UL];
  tlu2_linear_linear_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t86[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  t96 = (1.0 - t98) * t85[0UL] + t86[0UL] * t98;
  t65[0UL] = t346->mX.mX[187UL];
  tlu2_linear_linear_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t86[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  t308 = (1.0 - t98) * t85[0UL] + t86[0UL] * t98;
  t65[0UL] = t346->mX.mX[185UL];
  tlu2_linear_linear_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t86[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  zc_int56 = (1.0 - t98) * t85[0UL] + t86[0UL] * t98;
  t65[0UL] = t346->mX.mX[186UL];
  tlu2_linear_linear_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t86[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  zc_int57 = (1.0 - t98) * t85[0UL] + t86[0UL] * t98;
  if (t346->mX.mX[89UL] <= 0.0) {
    t98 = 0.0;
  } else {
    t98 = t346->mX.mX[89UL] >= 1.0 ? 1.0 : t346->mX.mX[89UL];
  }

  zc_int148 = (1.0 - t98) * 287.047 + t98 * 461.523;
  t65[0UL] = t346->mX.mX[87UL];
  tlu2_linear_linear_prelookup(&t1.mField0[0UL], &t1.mField1[0UL], &t1.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t86[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  zc_int65 = (1.0 - t98) * t85[0UL] + t86[0UL] * t98;
  if (t346->mX.mX[96UL] <= 0.0) {
    t98 = 0.0;
  } else {
    t98 = t346->mX.mX[96UL] >= 1.0 ? 1.0 : t346->mX.mX[96UL];
  }

  t293 = (1.0 - t98) * 287.047 + t98 * 461.523;
  if (t346->mX.mX[91UL] <= 0.0) {
    t98 = 0.0;
  } else {
    t98 = t346->mX.mX[91UL] >= 1.0 ? 1.0 : t346->mX.mX[91UL];
  }

  zc_int70 = (1.0 - t98) * 287.047 + t98 * 461.523;
  t65[0UL] = t346->mX.mX[90UL];
  tlu2_linear_linear_prelookup(&t1.mField0[0UL], &t1.mField1[0UL], &t1.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t86[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  intermediate_der556 = (1.0 - t98) * t85[0UL] + t86[0UL] * t98;
  t98 = (Flow_Resistance_MA_convection_A_mdot - -5.0E-7) / 1.0E-6;
  t121 = t98 * t98 * 3.0 - t98 * t98 * t98 * 2.0;
  if (Flow_Resistance_MA_convection_A_mdot <= -5.0E-7) {
    intrm_sf_mf_262 = t346->mX.mX[9UL];
  } else if (Flow_Resistance_MA_convection_A_mdot >= 5.0E-7) {
    intrm_sf_mf_262 = t346->mX.mX[88UL];
  } else {
    intrm_sf_mf_262 = (1.0 - t121) * t346->mX.mX[9UL] + t346->mX.mX[88UL] * t121;
  }

  if (t346->mX.mX[165UL] <= 0.0) {
    t121 = 0.0;
  } else {
    t121 = t346->mX.mX[165UL] >= 1.0 ? 1.0 : t346->mX.mX[165UL];
  }

  zc_int112 = (1.0 - t121) * 287.047 + t121 * 461.523;
  t65[0UL] = t346->mX.mX[164UL];
  tlu2_linear_linear_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t85[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t86[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  t266 = (1.0 - t121) * t85[0UL] + t86[0UL] * t121;
  t121 = t346->mX.mX[9UL] / (zc_int70 == 0.0 ? 1.0E-16 : zc_int70) /
    (t346->mX.mX[90UL] == 0.0 ? 1.0E-16 : t346->mX.mX[90UL]);
  t125 = t346->mX.mX[164UL] * zc_int112;
  zc_int112 = ((real_T)(t346->mM.mX[78UL] != 0) * 2.0 - 1.0) * (t125 / 1.01325) *
    (t125 / 1.01325) * (-Flow_Resistance_MA_convection_A_mdot /
                        7.8539816339744827E-5) *
    (-Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t266;
  t123 = ((real_T)(t346->mM.mX[78UL] != 0) * 2.0 - 1.0) * (t125 / 1.01325) *
    (t125 / 1.01325) * (Flow_Resistance_MA_convection_A_mdot /
                        7.8539816339744827E-5) *
    (Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t266;
  t133 = t346->mX.mX[87UL] * zc_int148;
  t140 = t346->mX.mX[187UL] * intermediate_der2629;
  t266 = ((real_T)(t346->mM.mX[88UL] != 0) * 2.0 - 1.0) * (t140 / (t346->mX.mX
    [88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (t140 / (t346->mX.mX[88UL] ==
    0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t308;
  t145 = t346->mX.mX[184UL] * intermediate_der2629;
  t308 = ((real_T)(t346->mM.mX[89UL] != 0) * 2.0 - 1.0) * (t145 / 1.01325) *
    (t145 / 1.01325) * (Flow_Resistance_MA_convection_A_mdot /
                        7.8539816339744827E-5) *
    (Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + t96;
  t148 = t346->mX.mX[186UL] * intermediate_der2629;
  t96 = ((real_T)(t346->mM.mX[90UL] != 0) * 2.0 - 1.0) * (t148 / 1.01325) *
    (t148 / 1.01325) * (-Flow_Resistance_MA_convection_A_mdot /
                        7.8539816339744827E-5) *
    (-Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + zc_int57;
  t153 = t346->mX.mX[185UL] * intermediate_der2629;
  intermediate_der2629 = ((real_T)(t346->mM.mX[91UL] != 0) * 2.0 - 1.0) * (t153 /
    (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (t153 /
    (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) *
    (-Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) *
    (-Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + zc_int56;
  zc_int56 = (1.01325 - t346->mX.mX[58UL]) * pmf_sqrt(((real_T)(t346->mM.mX[49UL]
    != 0) * 2.0 - 1.0) * (t120 / (t306 == 0.0 ? 1.0E-16 : t306))) * t103 * 0.8;
  zc_int57 = pmf_sqrt(((real_T)(t346->mM.mX[50UL] != 0) * 2.0 - 1.0) * (t117 /
    (t310 == 0.0 ? 1.0E-16 : t310) / (t346->mX.mX[81UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[81UL]))) * t103 * 0.8;
  t165 = zc_int57 - zc_int57 * 0.95;
  t124 = (zc_int56 - zc_int57 * 0.95) / (t165 == 0.0 ? 1.0E-16 : t165);
  t129 = t124 * t124 * 3.0 - t124 * t124 * t124 * 2.0;
  t132 = (-zc_int56 - zc_int57 * 0.95) / (t165 == 0.0 ? 1.0E-16 : t165);
  t139 = t132 * t132 * 3.0 - t132 * t132 * t132 * 2.0;
  t173 = t346->mX.mX[90UL] * zc_int70;
  if (t346->mM.mX[58UL] != 0) {
    zc_int70 = 216.59999999999997;
  } else {
    zc_int70 = t346->mM.mX[59UL] != 0 ? 623.15 : t346->mU.mX[2UL];
  }

  t65[0UL] = t346->mX.mX[98UL] * -1.25E-9 <= 0.0 ? zc_int70 : t346->mX.mX[8UL];
  if (t333 * 0.0001 <= 1.0E-10) {
    t152 = 0.0;
  } else if (t333 * 0.0001 >= 6.3617251235193318E-5) {
    t152 = 0.0;
  } else {
    t152 = 1.0;
  }

  t333 = t152 / 7.8539816339744827E-5;
  if (t346->mX.mX[69UL] > 0.0) {
    zc_int148 = t103 * t103;
    out->mDUF.mX[1UL] = (((intermediate_der656 + 1.0) * (t346->mX.mX[69UL] / 0.8
      / (t103 == 0.0 ? 1.0E-16 : t103) * (-(t346->mX.mX[69UL] / 0.8) /
      (zc_int148 == 0.0 ? 1.0E-16 : zc_int148)) * t152 * 2.0 / 2.0 / (t331 ==
      0.0 ? 1.0E-16 : t331)) + t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 :
      t103) * (t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 : t103)) / 2.0 /
                          (t331 == 0.0 ? 1.0E-16 : t331) * t333) * (1.0 -
      intermediate_der656 * t315) + -(t315 * t333) * (intermediate_der656 + 1.0)
                         * (t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 :
      t103) * (t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 : t103)) / 2.0 /
      (t331 == 0.0 ? 1.0E-16 : t331))) * 9.9999999999999991E-11;
  } else if (t346->mX.mX[69UL] < 0.0) {
    zc_int148 = t103 * t103;
    out->mDUF.mX[1UL] = (((intermediate_der656 + 1.0) * (t346->mX.mX[69UL] / 0.8
      / (t103 == 0.0 ? 1.0E-16 : t103) * (-(t346->mX.mX[69UL] / 0.8) /
      (zc_int148 == 0.0 ? 1.0E-16 : zc_int148)) * t152 * 2.0 / 2.0 / (t331 ==
      0.0 ? 1.0E-16 : t331)) + t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 :
      t103) * (t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 : t103)) / 2.0 /
                          (t331 == 0.0 ? 1.0E-16 : t331) * t333) * (1.0 -
      intermediate_der656 * t313) + -(t313 * t333) * (intermediate_der656 + 1.0)
                         * (t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 :
      t103) * (t346->mX.mX[69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 : t103)) / 2.0 /
      (t331 == 0.0 ? 1.0E-16 : t331))) * 9.9999999999999991E-11;
  } else {
    out->mDUF.mX[1UL] = 0.0;
  }

  zc_int148 = -t333 * (1.0 - intermediate_der656) * 2.0;
  zc_int70 = t320 * zc_int148;
  t166 = (1.01325 - t346->mX.mX[58UL]) * (t166 >= intermediate_der659 ? ((1.0 -
    intermediate_der656 * t315) * t333 + -(t315 * t333) * (intermediate_der656 +
    1.0)) - ((1.0 - intermediate_der656 * t313) * t333 * 2.0 + -(t313 * t333) *
             intermediate_der656 * 2.0) : zc_int148);
  if (1.01325 - t346->mX.mX[58UL] <= 0.0) {
    t166 = zc_int70;
  } else if (1.01325 - t346->mX.mX[58UL] >= t320) {
  } else {
    t166 = (1.0 - intermediate_der2284) * zc_int70 + t166 * intermediate_der2284;
  }

  t333 = (t346->mX.mX[58UL] - 1.01325) * (intermediate_der2107 >=
    intermediate_der659 ? ((1.0 - intermediate_der656 * t313) * t333 + -(t313 *
    t333) * (intermediate_der656 + 1.0)) - ((1.0 - intermediate_der656 * t315) *
    t333 * 2.0 + -(t315 * t333) * intermediate_der656 * 2.0) : zc_int148);
  if (t346->mX.mX[58UL] - 1.01325 <= 0.0) {
    intermediate_der656 = zc_int70;
  } else if (t346->mX.mX[58UL] - 1.01325 >= t320) {
    intermediate_der656 = t333;
  } else {
    intermediate_der656 = (1.0 - t115) * zc_int70 + t333 * t115;
  }

  if (t346->mX.mX[58UL] < 1.01325) {
    t333 = t166;
  } else {
    t333 = t346->mX.mX[58UL] > 1.01325 ? intermediate_der656 : zc_int70;
  }

  zc_int148 = pmf_sqrt(Flow_Resistance_MA_convection_A_mdot *
                       Flow_Resistance_MA_convection_A_mdot +
                       2.2359761898049833E-13) * 2.0;
  t315 = 1.0 / (zc_int148 == 0.0 ? 1.0E-16 : zc_int148) *
    Flow_Resistance_MA_convection_A_mdot * 0.0011972999228658597 * 2.0;
  zc_int70 = pmf_sqrt(Flow_Resistance_MA_convection_A_mdot *
                      Flow_Resistance_MA_convection_A_mdot +
                      1.6318057656437105E-13) * 2.0;
  t313 = 1.0 / (zc_int70 == 0.0 ? 1.0E-16 : zc_int70) *
    Flow_Resistance_MA_convection_A_mdot * 0.0011972999228658597 * 2.0;
  intermediate_der659 = 1.0 / (zc_int148 == 0.0 ? 1.0E-16 : zc_int148) *
    Flow_Resistance_MA_convection_A_mdot * 0.0011972999228658597 * 2.0;
  t320 = 1.0 / (zc_int70 == 0.0 ? 1.0E-16 : zc_int70) *
    Flow_Resistance_MA_convection_A_mdot * 0.0011972999228658597 * 2.0;
  intermediate_der2107 = 1197.2999228658598 * t98 * 6.0 - t98 * t98 *
    1197.2999228658598 * 6.0;
  if (Flow_Resistance_MA_convection_A_mdot <= -5.0E-7) {
    t166 = 0.0;
  } else if (Flow_Resistance_MA_convection_A_mdot >= 5.0E-7) {
    t166 = 0.0;
  } else {
    t166 = -intermediate_der2107 * t346->mX.mX[9UL] + t346->mX.mX[88UL] *
      intermediate_der2107;
  }

  t98 = ((real_T)(t346->mM.mX[88UL] != 0) * 2.0 - 1.0) * (t140 / (t346->mX.mX
    [88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (t140 / (t346->mX.mX[88UL] ==
    0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * 15.244496087011726 * 2.0 / 2.0 *
    9.999999999999999E-14;
  zc_int70 = ((real_T)(t346->mM.mX[90UL] != 0) * 2.0 - 1.0) * (t148 / 1.01325) *
    (t148 / 1.01325) * (-Flow_Resistance_MA_convection_A_mdot /
                        7.8539816339744827E-5) * -15.244496087011726 * 2.0 / 2.0
    * 9.999999999999999E-14;
  if (Flow_Resistance_MA_convection_A_mdot >= 0.0) {
    t89[20UL] = (t266 - t308) * 0.0011972999228658597 + (t98 - ((real_T)
      (t346->mM.mX[89UL] != 0) * 2.0 - 1.0) * (t145 / 1.01325) * (t145 / 1.01325)
      * (Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) *
      15.244496087011726 * 2.0 / 2.0 * 9.999999999999999E-14) *
      Flow_Resistance_MA_convection_A_mdot;
  } else {
    t89[20UL] = -((t96 - intermediate_der2629) * 0.0011972999228658597) -
      (zc_int70 - ((real_T)(t346->mM.mX[91UL] != 0) * 2.0 - 1.0) * (t153 /
        (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (t153 /
        (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) *
       (-Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) *
       -15.244496087011726 * 2.0 / 2.0 * 9.999999999999999E-14) *
      Flow_Resistance_MA_convection_A_mdot;
  }

  t96 = pmf_sqrt(((real_T)(t346->mM.mX[49UL] != 0) * 2.0 - 1.0) * (t120 / (t306 ==
    0.0 ? 1.0E-16 : t306)));
  t266 = t306 * t306;
  t331 = (1.01325 - t346->mX.mX[58UL]) * pmf_sqrt(((real_T)(t346->mM.mX[49UL] !=
    0) * 2.0 - 1.0) * (t120 / (t306 == 0.0 ? 1.0E-16 : t306))) * t152 * 0.8 +
    (1.01325 - t346->mX.mX[58UL]) * ((real_T)(t346->mM.mX[49UL] != 0) * 2.0 -
    1.0) * (-(t331 * 2.0) / (t266 == 0.0 ? 1.0E-16 : t266)) * (1.0 / (t96 == 0.0
    ? 1.0E-16 : t96)) * t333 * t103 * 0.4;
  t333 = pmf_sqrt(((real_T)(t346->mM.mX[50UL] != 0) * 2.0 - 1.0) * (t117 / (t310
    == 0.0 ? 1.0E-16 : t310) / (t346->mX.mX[81UL] == 0.0 ? 1.0E-16 : t346->
    mX.mX[81UL]))) * t152 * 0.8;
  t266 = (zc_int57 - zc_int57 * 0.95) * (zc_int57 - zc_int57 * 0.95);
  t310 = (t333 - t333 * 0.95) * (-(zc_int56 - zc_int57 * 0.95) / (t266 == 0.0 ?
    1.0E-16 : t266)) + (t331 - t333 * 0.95) / (t165 == 0.0 ? 1.0E-16 : t165);
  t306 = t310 * t124 * 6.0 - t124 * t124 * t310 * 6.0;
  if (t304 <= t319 * 0.95) {
    t310 = t331 * 100000.0;
  } else if (t304 >= t319) {
    t310 = t333 * 100000.0;
  } else {
    t310 = (((-t306 * zc_int56 + (1.0 - t129) * t331) + t306 * zc_int57) + t333 *
            t129) * 100000.0;
  }

  t306 = (t333 - t333 * 0.95) * (-(-zc_int56 - zc_int57 * 0.95) / (t266 == 0.0 ?
    1.0E-16 : t266)) + (-t331 - t333 * 0.95) / (t165 == 0.0 ? 1.0E-16 : t165);
  intermediate_der2629 = t306 * t132 * 6.0 - t132 * t132 * t306 * 6.0;
  if (-t304 <= t319 * 0.95) {
    t306 = t331 * 100000.0;
  } else if (-t304 >= t319) {
    t306 = -t333 * 100000.0;
  } else {
    t306 = (((-intermediate_der2629 * zc_int56 + (1.0 - t139) * t331) +
             -zc_int57 * intermediate_der2629) + -t333 * t139) * 100000.0;
  }

  t308 = t346->mX.mX[93UL] * t293;
  zc_int56 = -(t346->mX.mX[93UL] * t293);
  zc_int57 = intrm_sf_mf_262 * intrm_sf_mf_262;
  t293 = (((real_T)(t346->mM.mX[57UL] != 0) * 2.0 - 1.0) * (t308 /
           (intrm_sf_mf_262 == 0.0 ? 1.0E-16 : intrm_sf_mf_262)) * (zc_int56 /
           (zc_int57 == 0.0 ? 1.0E-16 : zc_int57)) * t166 + ((real_T)
           (t346->mM.mX[57UL] != 0) * 2.0 - 1.0) * (t308 / (intrm_sf_mf_262 ==
            0.0 ? 1.0E-16 : intrm_sf_mf_262)) * (zc_int56 / (zc_int57 == 0.0 ?
            1.0E-16 : zc_int57)) * t166) * (Flow_Resistance_MA_convection_A_mdot
    / 7.8539816339744827E-5) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) + ((real_T)(t346->mM.mX[57UL] != 0) * 2.0 - 1.0) *
    (t308 / (intrm_sf_mf_262 == 0.0 ? 1.0E-16 : intrm_sf_mf_262)) * (t308 /
    (intrm_sf_mf_262 == 0.0 ? 1.0E-16 : intrm_sf_mf_262)) *
    (Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) *
    15.244496087011726 * 2.0;
  if (t346->mM.mX[58UL] != 0) {
    t166 = 0.0;
  } else {
    t166 = (real_T)(t346->mM.mX[59UL] == 0);
  }

  tlu2_linear_linear_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], ((_NeDynamicSystem*)(LC))->mField1, &t65[0UL], &t10[0UL], &t11[0UL]);
  tlu2_1d_linear_linear_value(&t65[0UL], &t8.mField1[0UL], &t8.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t10[0UL], &t11[0UL]);
  t166 = t65[0UL] * (t346->mX.mX[98UL] * -1.25E-9 <= 0.0 ? t166 : 0.0);
  out->mDUF.mX[0UL] = t304 >= 0.0 ? -t310 : -t306;
  t310 = t103 * t103;
  out->mDUF.mX[2UL] = -(((real_T)(t346->mM.mX[54UL] != 0) * 2.0 - 1.0) * (t105 /
    (t346->mX.mX[82UL] == 0.0 ? 1.0E-16 : t346->mX.mX[82UL])) * (t105 /
    (t346->mX.mX[82UL] == 0.0 ? 1.0E-16 : t346->mX.mX[82UL])) * (t346->mX.mX
    [69UL] / 0.8 / (t103 == 0.0 ? 1.0E-16 : t103)) * (-(t346->mX.mX[69UL] / 0.8)
    / (t310 == 0.0 ? 1.0E-16 : t310)) * t152 * 2.0 / 2.0 * 9.999999999999999E-14);
  t89[0UL] = -(-(t346->mX.mX[10UL] * 0.0011972999228658597) * (-174.476 / (t116 ==
    0.0 ? 1.0E-16 : t116)));
  t89[1UL] = -((-(t346->mX.mX[10UL] * 0.0011972999228658597) * (t316 -
    Humidifier_Moist_Air_Volume_u_a_I) + t314 * 0.0011972999228658597) /
               78.406888049999992);
  t89[2UL] = -(t346->mX.mX[10UL] * 0.0011972999228658597);
  t304 = Flow_Resistance_MA_convection_A_mdot + t317;
  t89[3UL] = -(((0.0011972999228658597 + t313) / 2.0 * (((real_T)(t346->mM.mX
    [55UL] != 0) * 2.0 - 1.0) * (t133 / (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[88UL])) * (t133 / (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[88UL])) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int65) + t304 /
                2.0 * (((real_T)(t346->mM.mX[55UL] != 0) * 2.0 - 1.0) * (t133 /
    (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (t133 /
    (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) *
                       (Flow_Resistance_MA_convection_A_mdot /
                        7.8539816339744827E-5) * 15.244496087011726 * 2.0 / 2.0 *
                       9.999999999999999E-14)) - (t313 - 0.0011972999228658597) /
               2.0 * t346->mX.mX[94UL]);
  t89[4UL] = -((0.0011972999228658597 + t315) / 2.0 * t346->mX.mX[89UL] - (t315
    - 0.0011972999228658597) / 2.0 * t346->mX.mX[96UL]);
  t316 = -Flow_Resistance_MA_convection_A_mdot + t317;
  t89[5UL] = -(((-0.0011972999228658597 + t320) / 2.0 * (((real_T)(t346->mM.mX
    [56UL] != 0) * 2.0 - 1.0) * (t173 / (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[9UL])) * (t173 / (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[9UL])) * (-Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * (-Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + intermediate_der556)
                + t316 / 2.0 * (((real_T)(t346->mM.mX[56UL] != 0) * 2.0 - 1.0) *
    (t173 / (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 : t346->mX.mX[9UL])) * (t173 /
    (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 : t346->mX.mX[9UL])) *
    (-Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) *
    -15.244496087011726 * 2.0 / 2.0 * 9.999999999999999E-14)) - (t320 -
    -0.0011972999228658597) / 2.0 * t346->mX.mX[94UL]) / 223.50549793871085;
  t89[6UL] = -((-0.0011972999228658597 + intermediate_der659) / 2.0 *
               t346->mX.mX[91UL] - (intermediate_der659 - -0.0011972999228658597)
               / 2.0 * t346->mX.mX[96UL]);
  t333 = pmf_sqrt(Flow_Resistance_MA_convection_A_mdot *
                  Flow_Resistance_MA_convection_A_mdot + 2.5E-13) * 2.0;
  t89[7UL] = -((pmf_sqrt(Flow_Resistance_MA_convection_A_mdot *
    Flow_Resistance_MA_convection_A_mdot + 2.5E-13) * 0.0011972999228658597 *
                4.0E+8 + 1.0 / (t333 == 0.0 ? 1.0E-16 : t333) *
                Flow_Resistance_MA_convection_A_mdot *
                Flow_Resistance_MA_convection_A_mdot * 0.0011972999228658597 *
                8.0E+8) * 1.0E-5);
  t89[8UL] = t293 / 2.0 * 9.999999999999999E-14 / 1.0063114645401017;
  t89[9UL] = -(((0.0011972999228658597 + t313) / 2.0 * (((real_T)(t346->mM.mX
    [56UL] != 0) * 2.0 - 1.0) * (t173 / (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[9UL])) * (t173 / (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[9UL])) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + intermediate_der556)
                + t304 / 2.0 * (((real_T)(t346->mM.mX[56UL] != 0) * 2.0 - 1.0) *
    (t173 / (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 : t346->mX.mX[9UL])) * (t173 /
    (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 : t346->mX.mX[9UL])) *
    (Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) *
    15.244496087011726 * 2.0 / 2.0 * 9.999999999999999E-14)) - (t313 -
    0.0011972999228658597) / 2.0 * t346->mX.mX[111UL]) / 223.50549793871085;
  t89[10UL] = -((0.0011972999228658597 + t315) / 2.0 * t346->mX.mX[91UL] - (t315
    - 0.0011972999228658597) / 2.0 * t346->mX.mX[112UL]);
  t333 = t346->mX.mX[8UL] * t116;
  t89[11UL] = -(((real_T)(t346->mM.mX[61UL] != 0) * 2.0 - 1.0) * (t333 /
    (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 : t346->mX.mX[9UL])) * (t333 /
    (t346->mX.mX[9UL] == 0.0 ? 1.0E-16 : t346->mX.mX[9UL])) *
                (Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5) *
                15.244496087011726 * 2.0 / 2.0 * 9.999999999999999E-14) /
    1.0056921124739802;
  t89[12UL] = -(0.0011972999228658597 / (t121 == 0.0 ? 1.0E-16 : t121) * 10.0) /
    849880.08882309415;
  t89[13UL] = -(((-0.0011972999228658597 + t320) / 2.0 * zc_int112 + t316 / 2.0 *
                 (((real_T)(t346->mM.mX[78UL] != 0) * 2.0 - 1.0) * (t125 /
    1.01325) * (t125 / 1.01325) * (-Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * -15.244496087011726 * 2.0 / 2.0 *
                  9.999999999999999E-14)) - (t320 - -0.0011972999228658597) /
                2.0 * t346->mX.mX[167UL]) / 223.50549793871085;
  t89[14UL] = -((-0.0011972999228658597 + intermediate_der659) / 2.0 *
                t346->mX.mX[165UL] - intermediate_der659 / 2.0 *
                0.001437117735346688);
  t89[15UL] = -(-Flow_Resistance_MA_convection_A_mdot / 7.8539816339744827E-5 *
                -15.244496087011726 * 1.3817866578447271E+10 / 2.0 *
                9.999999999999999E-14);
  t89[16UL] = -(((0.0011972999228658597 + t313) / 2.0 * t123 + t304 / 2.0 *
                 (((real_T)(t346->mM.mX[78UL] != 0) * 2.0 - 1.0) * (t125 /
    1.01325) * (t125 / 1.01325) * (Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * 15.244496087011726 * 2.0 / 2.0 *
                  9.999999999999999E-14)) - (t313 - 0.0011972999228658597) / 2.0
                * t346->mX.mX[188UL]) / 223.50549793871085;
  t89[17UL] = -((0.0011972999228658597 + t315) / 2.0 * t346->mX.mX[165UL] -
                (t315 - 0.0011972999228658597) / 2.0 * t346->mX.mX[189UL]);
  t89[18UL] = -(((-0.0011972999228658597 + t320) / 2.0 * (((real_T)(t346->mM.mX
    [55UL] != 0) * 2.0 - 1.0) * (t133 / (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[88UL])) * (t133 / (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 :
    t346->mX.mX[88UL])) * (-Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * (-Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int65) + t316 /
                 2.0 * (((real_T)(t346->mM.mX[55UL] != 0) * 2.0 - 1.0) * (t133 /
    (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) * (t133 /
    (t346->mX.mX[88UL] == 0.0 ? 1.0E-16 : t346->mX.mX[88UL])) *
                        (-Flow_Resistance_MA_convection_A_mdot /
    7.8539816339744827E-5) * -15.244496087011726 * 2.0 / 2.0 *
                        9.999999999999999E-14)) - (t320 - -0.0011972999228658597)
                / 2.0 * t346->mX.mX[188UL]);
  t89[19UL] = -((-0.0011972999228658597 + intermediate_der659) / 2.0 *
                t346->mX.mX[89UL] - (intermediate_der659 -
    -0.0011972999228658597) / 2.0 * t346->mX.mX[189UL]);
  t89[21UL] = zc_int70 / 1.0063114645401017;
  t89[22UL] = t98;
  for (t91 = 0UL; t91 < 23UL; t91++) {
    out->mDUF.mX[t91 + 3UL] = t89[t91];
  }

  out->mDUF.mX[26UL] = -(t346->mX.mX[98UL] * t166 * -1.25E-9);
  (void)LC;
  (void)out;
  return 0;
}
