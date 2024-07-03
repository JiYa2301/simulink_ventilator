/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_a(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t258, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[8] = { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T _cg_const_2[8] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T _cg_const_3[8] = { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T _cg_const_4[8] = { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 };

  static real_T _cg_const_5[8] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 };

  real_T intermediate_der669[8];
  real_T intermediate_der670[8];
  real_T intermediate_der671[8];
  real_T intermediate_der672[8];
  real_T intermediate_der673[8];
  real_T t1[8];
  real_T t2[8];
  real_T t3[8];
  real_T t4[8];
  real_T t5[8];
  real_T t41[7];
  real_T t23[6];
  real_T t25[6];
  real_T t28[6];
  real_T t30[6];
  real_T t40[6];
  real_T t34[5];
  real_T t37[5];
  real_T t12[4];
  real_T t16[4];
  real_T t31[4];
  real_T t45[4];
  real_T t47[4];
  real_T t52[4];
  real_T t54[4];
  real_T t57[4];
  real_T t59[4];
  real_T t7[4];
  real_T t230;
  real_T t231;
  size_t t116;
  (void)t258;
  (void)LC;
  t5[0] = _cg_const_1[0];
  t5[1] = _cg_const_1[1];
  t5[2] = _cg_const_1[2];
  t5[3] = _cg_const_1[3];
  t5[4] = _cg_const_1[4];
  t5[5] = _cg_const_1[5];
  t5[6] = _cg_const_1[6];
  t5[7] = _cg_const_1[7];
  t4[0] = _cg_const_2[0];
  t4[1] = _cg_const_2[1];
  t4[2] = _cg_const_2[2];
  t4[3] = _cg_const_2[3];
  t4[4] = _cg_const_2[4];
  t4[5] = _cg_const_2[5];
  t4[6] = _cg_const_2[6];
  t4[7] = _cg_const_2[7];
  t3[0] = _cg_const_3[0];
  t3[1] = _cg_const_3[1];
  t3[2] = _cg_const_3[2];
  t3[3] = _cg_const_3[3];
  t3[4] = _cg_const_3[4];
  t3[5] = _cg_const_3[5];
  t3[6] = _cg_const_3[6];
  t3[7] = _cg_const_3[7];
  t2[0] = _cg_const_4[0];
  t2[1] = _cg_const_4[1];
  t2[2] = _cg_const_4[2];
  t2[3] = _cg_const_4[3];
  t2[4] = _cg_const_4[4];
  t2[5] = _cg_const_4[5];
  t2[6] = _cg_const_4[6];
  t2[7] = _cg_const_4[7];
  t1[0] = _cg_const_5[0];
  t1[1] = _cg_const_5[1];
  t1[2] = _cg_const_5[2];
  t1[3] = _cg_const_5[3];
  t1[4] = _cg_const_5[4];
  t1[5] = _cg_const_5[5];
  t1[6] = _cg_const_5[6];
  t1[7] = _cg_const_5[7];
  memcpy(&intermediate_der669[0], &t4[0], 64U);
  memcpy(&intermediate_der670[0], &t3[0], 64U);
  memcpy(&intermediate_der671[0], &t1[0], 64U);
  memcpy(&intermediate_der672[0], &t5[0], 64U);
  memcpy(&intermediate_der673[0], &t2[0], 64U);
  t7[0UL] = 1.0;
  t7[1UL] = 1.0;
  t7[2UL] = -0.56115880123717143;
  t7[3UL] = -0.56115880123717143;
  t230 = intermediate_der670[0UL] - t3[0UL];
  t231 = intermediate_der672[0UL] - t5[0UL];
  t12[0UL] = 1.0;
  t12[1UL] = 1.0;
  t12[2UL] = -0.56115880123717143;
  t12[3UL] = -0.56115880123717143;
  t16[0UL] = 1.0;
  t16[1UL] = 1.0;
  t16[2UL] = -0.90329988198550637;
  t16[3UL] = -0.90329988198550637;
  t23[0UL] = -0.01275398150430739;
  t23[1UL] = 0.01275398150430739;
  t23[2UL] = 1.0;
  t23[3UL] = -0.0044741628694709677;
  t23[4UL] = -1.0;
  t23[5UL] = 0.0044741628694709677;
  t25[0UL] = -1.0;
  t25[1UL] = 1.0;
  t25[2UL] = 1.0;
  t25[3UL] = -1.0;
  t25[4UL] = -1.0;
  t25[5UL] = 1.0;
  t28[0UL] = 0.01275398150430739;
  t28[1UL] = -0.01275398150430739;
  t28[2UL] = 0.0044741628694709677;
  t28[3UL] = -1.0;
  t28[4UL] = 1.0;
  t28[5UL] = -0.0044741628694709677;
  t30[0UL] = 1.0;
  t30[1UL] = -1.0;
  t30[2UL] = 1.0;
  t30[3UL] = -1.0;
  t30[4UL] = 1.0;
  t30[5UL] = -1.0;
  t31[0UL] = -5.0985810648896409E-6;
  t31[1UL] = 5.0985810648896409E-6;
  t31[2UL] = 5.0985810648896409E-6;
  t31[3UL] = 1.0197162129779282E-6;
  t34[0UL] = 0.01275398150430739;
  t34[1UL] = 1.0;
  t34[2UL] = 0.0044741628694709677;
  t34[3UL] = -1.0;
  t34[4UL] = -0.0044741628694709677;
  t37[0UL] = 1.0;
  t37[1UL] = 1.0;
  t37[2UL] = 1.0;
  t37[3UL] = -1.0;
  t37[4UL] = -1.0;
  t40[0UL] = 0.01275398150430739;
  t40[1UL] = 1.0;
  t40[2UL] = -0.0044741628694709677;
  t40[3UL] = 0.0044741628694709677;
  t40[4UL] = -1.0;
  t40[5UL] = -1.0;
  t41[0UL] = 1.0;
  t41[1UL] = 1.0;
  t41[2UL] = -1.0;
  t41[3UL] = 1.0;
  t41[4UL] = -1.0;
  t41[5UL] = 1.0;
  t41[6UL] = -1.0;
  t45[0UL] = 0.01275398150430739;
  t45[1UL] = -0.01275398150430739;
  t45[2UL] = 0.0044741628694709677;
  t45[3UL] = -0.0044741628694709677;
  t47[0UL] = 1.0;
  t47[1UL] = -1.0;
  t47[2UL] = 1.0;
  t47[3UL] = -1.0;
  t52[0UL] = 0.0098692326671601278;
  t52[1UL] = -0.01275398150430739;
  t52[2UL] = 0.0044741628694709677;
  t52[3UL] = -0.0044741628694709677;
  t54[0UL] = 1.0;
  t54[1UL] = -1.0;
  t54[2UL] = 1.0;
  t54[3UL] = -1.0;
  t57[0UL] = 0.01275398150430739;
  t57[1UL] = -0.01275398150430739;
  t57[2UL] = 0.0044741628694709677;
  t57[3UL] = -0.0044741628694709677;
  t59[0UL] = 1.0;
  t59[1UL] = -1.0;
  t59[2UL] = 1.0;
  t59[3UL] = -1.0;
  out->mA.mX[0UL] = -1.0;
  out->mA.mX[1UL] = 1.0;
  out->mA.mX[2UL] = 1.0;
  out->mA.mX[3UL] = 1.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 4UL] = t7[t116];
  }

  out->mA.mX[8UL] = -1.0;
  out->mA.mX[9UL] = -1.0;
  out->mA.mX[10UL] = -6.3769907521536954E-6;
  out->mA.mX[11UL] = t230 / 100000.0;
  out->mA.mX[12UL] = -1.0;
  out->mA.mX[13UL] = -1.0;
  out->mA.mX[14UL] = -1.0;
  out->mA.mX[15UL] = -1.0;
  out->mA.mX[16UL] = t231 / 100000.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 17UL] = t12[t116];
  }

  out->mA.mX[21UL] = -1.0;
  out->mA.mX[22UL] = -1.0;
  out->mA.mX[23UL] = 1.0;
  out->mA.mX[24UL] = -1.0;
  out->mA.mX[25UL] = -1.0;
  out->mA.mX[26UL] = -1.0;
  out->mA.mX[27UL] = -1.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 28UL] = t16[t116];
  }

  out->mA.mX[32UL] = -1.0;
  out->mA.mX[33UL] = -1.0;
  out->mA.mX[34UL] = -0.0098692326671601278;
  out->mA.mX[35UL] = 1.0;
  out->mA.mX[36UL] = -0.0098692326671601278;
  out->mA.mX[37UL] = 0.625;
  out->mA.mX[38UL] = 0.01275398150430739;
  out->mA.mX[39UL] = 1.0;
  out->mA.mX[40UL] = 1.0;
  out->mA.mX[41UL] = 1.0;
  out->mA.mX[42UL] = -1.0;
  out->mA.mX[43UL] = 1.0;
  out->mA.mX[44UL] = 1.0;
  for (t116 = 0UL; t116 < 6UL; t116++) {
    out->mA.mX[t116 + 45UL] = t23[t116];
  }

  out->mA.mX[51UL] = 1.0;
  out->mA.mX[52UL] = 0.99372812020681278;
  out->mA.mX[53UL] = 1.0;
  for (t116 = 0UL; t116 < 6UL; t116++) {
    out->mA.mX[t116 + 54UL] = t25[t116];
  }

  out->mA.mX[60UL] = 1.0;
  out->mA.mX[61UL] = 1.0;
  out->mA.mX[62UL] = 1.0;
  out->mA.mX[63UL] = -1.0;
  out->mA.mX[64UL] = 1.0;
  for (t116 = 0UL; t116 < 6UL; t116++) {
    out->mA.mX[t116 + 65UL] = t28[t116];
  }

  out->mA.mX[71UL] = 0.99372812020681278;
  out->mA.mX[72UL] = 1.0;
  out->mA.mX[73UL] = 1.0;
  for (t116 = 0UL; t116 < 6UL; t116++) {
    out->mA.mX[t116 + 74UL] = t30[t116];
  }

  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 80UL] = t31[t116];
  }

  out->mA.mX[84UL] = 0.56115880123717143;
  out->mA.mX[85UL] = 0.56115880123717143;
  out->mA.mX[86UL] = -8.0135629195904384E-6;
  out->mA.mX[87UL] = -0.00062831853071795862;
  out->mA.mX[88UL] = -1.0;
  out->mA.mX[89UL] = 1.0;
  out->mA.mX[90UL] = 0.000718558867673344;
  out->mA.mX[91UL] = -1.0;
  for (t116 = 0UL; t116 < 5UL; t116++) {
    out->mA.mX[t116 + 92UL] = t34[t116];
  }

  out->mA.mX[97UL] = 1.0;
  out->mA.mX[98UL] = 0.99434010428899788;
  out->mA.mX[99UL] = 1.0;
  out->mA.mX[100UL] = 1.0;
  out->mA.mX[101UL] = 0.99434010428899788;
  for (t116 = 0UL; t116 < 5UL; t116++) {
    out->mA.mX[t116 + 102UL] = t37[t116];
  }

  out->mA.mX[107UL] = 1.0;
  out->mA.mX[108UL] = 1.0;
  out->mA.mX[109UL] = -1.0;
  out->mA.mX[110UL] = 1.0;
  out->mA.mX[111UL] = 0.99372812020681278;
  out->mA.mX[112UL] = 1.0;
  out->mA.mX[113UL] = 1.0;
  out->mA.mX[114UL] = 1.0;
  for (t116 = 0UL; t116 < 6UL; t116++) {
    out->mA.mX[t116 + 115UL] = t40[t116];
  }

  out->mA.mX[121UL] = -0.99372812020681278;
  for (t116 = 0UL; t116 < 7UL; t116++) {
    out->mA.mX[t116 + 122UL] = t41[t116];
  }

  out->mA.mX[129UL] = -0.01275398150430739;
  out->mA.mX[130UL] = -1.0;
  out->mA.mX[131UL] = 1.25E-9;
  out->mA.mX[132UL] = 1.25E-9;
  out->mA.mX[133UL] = 1.0;
  out->mA.mX[134UL] = 1.1766365786787527E-6;
  out->mA.mX[135UL] = 1.0E-5;
  out->mA.mX[136UL] = 0.63957720467063428;
  t230 = intermediate_der673[0UL] - t2[0UL];
  out->mA.mX[137UL] = t230 / 100000.0;
  out->mA.mX[138UL] = 1.0;
  out->mA.mX[139UL] = -0.01275398150430739;
  out->mA.mX[140UL] = 1.0;
  t230 = intermediate_der671[0UL] - t1[0UL];
  out->mA.mX[141UL] = t230 / 100000.0;
  t230 = intermediate_der669[0UL] - t4[0UL];
  out->mA.mX[142UL] = t230 / 100000.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 143UL] = t45[t116];
  }

  out->mA.mX[147UL] = 0.99434010428899788;
  out->mA.mX[148UL] = 1.0;
  out->mA.mX[149UL] = 0.99434010428899788;
  out->mA.mX[150UL] = 1.0;
  out->mA.mX[151UL] = -1.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 152UL] = t47[t116];
  }

  out->mA.mX[156UL] = 1.0;
  out->mA.mX[157UL] = 1.0;
  out->mA.mX[158UL] = -1.0;
  out->mA.mX[159UL] = 0.56115880123717143;
  out->mA.mX[160UL] = 0.56115880123717143;
  out->mA.mX[161UL] = -1.0;
  out->mA.mX[162UL] = -1.0;
  out->mA.mX[163UL] = 1.0;
  out->mA.mX[164UL] = 0.99434010428899788;
  out->mA.mX[165UL] = 1.0;
  out->mA.mX[166UL] = 1.0;
  out->mA.mX[167UL] = 0.99434010428899788;
  out->mA.mX[168UL] = 1.0;
  out->mA.mX[169UL] = 1.0;
  out->mA.mX[170UL] = -1.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 171UL] = t52[t116];
  }

  out->mA.mX[175UL] = 0.99434010428899788;
  out->mA.mX[176UL] = 0.77381582087342715;
  out->mA.mX[177UL] = -1.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 178UL] = t54[t116];
  }

  out->mA.mX[182UL] = 1.0;
  out->mA.mX[183UL] = 1.0E-5;
  out->mA.mX[184UL] = 1.0197162129779282E-6;
  out->mA.mX[185UL] = 1.0;
  out->mA.mX[186UL] = -1.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 187UL] = t57[t116];
  }

  out->mA.mX[191UL] = 0.99434010428899788;
  out->mA.mX[192UL] = 1.0;
  out->mA.mX[193UL] = -1.0;
  for (t116 = 0UL; t116 < 4UL; t116++) {
    out->mA.mX[t116 + 194UL] = t59[t116];
  }

  out->mA.mX[198UL] = 1.0;
  out->mA.mX[199UL] = 0.99434010428899788;
  out->mA.mX[200UL] = 1.0;
  out->mA.mX[201UL] = 0.99434010428899788;
  out->mA.mX[202UL] = 1.0;
  out->mA.mX[203UL] = 1.0;
  out->mA.mX[204UL] = -1.0;
  out->mA.mX[205UL] = 1.0;
  out->mA.mX[206UL] = 0.0044741628694709677;
  out->mA.mX[207UL] = -0.0044741628694709677;
  out->mA.mX[208UL] = -1.0;
  out->mA.mX[209UL] = 1.0;
  out->mA.mX[210UL] = 0.90329988198550637;
  out->mA.mX[211UL] = 0.90329988198550637;
  out->mA.mX[212UL] = -1.0;
  out->mA.mX[213UL] = -1.0;
  out->mA.mX[214UL] = 1.0;
  out->mA.mX[215UL] = 0.99434010428899788;
  out->mA.mX[216UL] = 1.0;
  out->mA.mX[217UL] = 1.0;
  out->mA.mX[218UL] = 0.99434010428899788;
  out->mA.mX[219UL] = 1.0;
  out->mA.mX[220UL] = 1.0;
  out->mA.mX[221UL] = -1.0;
  out->mA.mX[222UL] = -0.99372812020681278;
  out->mA.mX[223UL] = -1.0;
  (void)LC;
  (void)out;
  return 0;
}
