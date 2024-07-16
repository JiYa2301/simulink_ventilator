/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxf_p.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_tdxf_p(const
  NeDynamicSystem *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[887] = { 12, 13, 14, 29, 126, 130, 134, 30, 35, 36,
    39, 16, 17, 18, 30, 33, 35, 36, 38, 40, 41, 45, 46, 47, 136, 138, 140, 142,
    146, 148, 150, 158, 161, 165, 167, 40, 45, 46, 49, 189, 3, 4, 5, 55, 56, 57,
    58, 59, 60, 63, 67, 69, 3, 4, 5, 54, 55, 56, 59, 60, 63, 67, 69, 3, 4, 5, 55,
    56, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 6, 7, 8, 88, 94, 98, 99,
    101, 6, 7, 8, 82, 84, 85, 90, 92, 94, 98, 99, 101, 104, 105, 110, 112, 6, 7,
    8, 94, 95, 96, 97, 98, 99, 100, 101, 102, 9, 10, 11, 110, 111, 112, 113, 114,
    115, 118, 122, 124, 9, 10, 11, 109, 110, 111, 114, 115, 118, 122, 124, 9, 10,
    11, 110, 111, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 12,
    13, 14, 127, 129, 130, 134, 159, 164, 166, 12, 13, 14, 130, 131, 132, 133,
    134, 135, 12, 13, 14, 16, 17, 18, 142, 146, 148, 150, 16, 17, 18, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 19, 20, 21, 164, 165, 166, 167, 168,
    169, 172, 176, 178, 19, 20, 21, 163, 164, 165, 168, 169, 172, 176, 178, 19,
    20, 21, 164, 165, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    13, 29, 13, 126, 20, 163, 31, 107, 109, 30, 31, 35, 36, 37, 107, 111, 113,
    31, 32, 107, 108, 109, 33, 140, 33, 34, 140, 141, 0, 30, 9, 10, 11, 16, 17,
    18, 31, 32, 33, 34, 35, 36, 37, 38, 39, 107, 108, 109, 111, 115, 117, 124,
    140, 141, 150, 35, 36, 39, 35, 36, 39, 32, 34, 35, 36, 37, 38, 39, 35, 36,
    37, 35, 36, 38, 10, 17, 31, 33, 107, 140, 31, 33, 37, 38, 39, 9, 10, 11, 16,
    17, 18, 32, 34, 108, 141, 41, 138, 41, 42, 138, 139, 43, 50, 54, 40, 43, 45,
    46, 48, 50, 55, 57, 43, 44, 50, 51, 54, 1, 40, 3, 4, 5, 16, 17, 18, 41, 42,
    43, 44, 45, 46, 47, 48, 49, 50, 51, 54, 55, 59, 61, 67, 138, 139, 148, 45,
    46, 49, 45, 46, 49, 42, 44, 45, 46, 47, 48, 49, 45, 46, 47, 45, 46, 48, 4,
    17, 41, 43, 50, 138, 41, 43, 47, 48, 49, 3, 4, 5, 16, 17, 18, 42, 44, 51,
    139, 2, 12, 13, 15, 22, 189, 52, 54, 73, 52, 56, 58, 73, 75, 76, 78, 52, 53,
    54, 73, 74, 55, 57, 59, 56, 58, 60, 65, 63, 54, 55, 56, 59, 60, 64, 4, 54,
    55, 59, 61, 55, 57, 59, 61, 56, 60, 62, 3, 4, 5, 52, 53, 54, 56, 60, 62, 69,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 152, 153, 154, 56, 58, 60, 62, 4, 52, 71,
    73, 152, 50, 61, 67, 51, 68, 52, 62, 69, 3, 4, 5, 53, 72, 74, 153, 53, 70,
    23, 66, 66, 71, 152, 71, 72, 152, 153, 75, 76, 79, 75, 76, 79, 72, 74, 75,
    76, 77, 78, 79, 75, 76, 77, 75, 76, 78, 71, 73, 77, 78, 79, 80, 182, 80, 84,
    85, 182, 184, 186, 187, 188, 80, 81, 182, 183, 82, 90, 104, 82, 83, 90, 91,
    104, 7, 80, 82, 90, 182, 184, 85, 80, 82, 85, 6, 7, 8, 81, 83, 91, 156, 181,
    183, 81, 83, 85, 10, 109, 6, 7, 8, 87, 88, 87, 104, 86, 98, 86, 89, 86, 95,
    98, 86, 87, 92, 105, 109, 92, 93, 105, 106, 109, 7, 88, 103, 96, 98, 94, 98,
    7, 10, 92, 105, 90, 99, 91, 100, 92, 101, 6, 7, 8, 9, 10, 11, 92, 93, 101,
    105, 106, 109, 110, 114, 116, 122, 6, 7, 8, 9, 10, 11, 93, 106, 93, 102, 24,
    97, 97, 110, 112, 114, 111, 113, 115, 120, 118, 109, 110, 111, 114, 115, 119,
    110, 114, 116, 110, 112, 114, 116, 111, 115, 117, 111, 113, 115, 117, 105,
    116, 122, 106, 123, 107, 117, 124, 108, 125, 25, 121, 121, 127, 159, 163,
    127, 128, 159, 160, 163, 132, 130, 131, 13, 20, 127, 159, 127, 134, 12, 13,
    14, 19, 20, 21, 127, 128, 134, 159, 160, 163, 164, 168, 170, 176, 12, 13, 14,
    19, 20, 21, 128, 160, 128, 135, 129, 189, 26, 133, 133, 136, 158, 161, 163,
    136, 137, 158, 161, 162, 163, 144, 142, 143, 17, 20, 136, 161, 136, 146, 16,
    17, 18, 19, 20, 21, 136, 137, 146, 161, 162, 163, 165, 169, 171, 178, 16, 17,
    18, 19, 20, 21, 137, 162, 137, 147, 138, 148, 139, 149, 140, 150, 141, 151,
    27, 145, 145, 152, 154, 155, 180, 155, 156, 180, 181, 155, 180, 184, 155,
    157, 158, 164, 166, 168, 165, 167, 169, 174, 172, 163, 164, 165, 168, 169,
    173, 164, 168, 170, 164, 166, 168, 170, 165, 169, 171, 165, 167, 169, 171,
    159, 170, 176, 160, 177, 161, 171, 178, 162, 179, 28, 175, 175, 184, 187,
    184, 188, 184, 185, 188, 184, 186, 187, 180, 182, 185, 186, 181, 183, 184,
    185, 186, 187, 188 };

  static int32_T _cg_const_1[191] = { 0, 7, 11, 35, 39, 40, 52, 63, 80, 88, 104,
    116, 128, 139, 156, 166, 175, 178, 185, 198, 210, 221, 238, 238, 240, 242,
    244, 247, 255, 260, 262, 266, 268, 293, 296, 299, 306, 309, 312, 318, 323,
    333, 335, 339, 342, 350, 355, 357, 382, 385, 388, 395, 398, 401, 407, 412,
    422, 428, 431, 438, 443, 446, 449, 450, 451, 457, 459, 462, 466, 469, 491,
    495, 500, 503, 505, 508, 515, 517, 519, 520, 522, 526, 529, 532, 539, 542,
    545, 550, 552, 560, 564, 567, 572, 578, 579, 582, 591, 594, 596, 601, 603,
    605, 607, 610, 612, 615, 620, 622, 623, 625, 627, 631, 633, 635, 637, 653,
    661, 663, 665, 666, 669, 672, 673, 674, 680, 683, 687, 690, 694, 697, 699,
    702, 704, 706, 707, 710, 715, 716, 717, 718, 722, 724, 740, 748, 750, 752,
    754, 755, 759, 765, 766, 767, 768, 772, 774, 790, 798, 800, 802, 804, 806,
    808, 810, 811, 813, 815, 819, 822, 824, 825, 828, 831, 832, 833, 839, 842,
    846, 849, 853, 856, 858, 861, 863, 865, 866, 868, 870, 873, 876, 880, 887 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mTDXF_P.mNumCol = 190UL;
  out->mTDXF_P.mNumRow = 190UL;
  for (i = 0; i < 191; i++) {
    out->mTDXF_P.mJc[i] = _cg_const_1[i];
  }

  for (i = 0; i < 887; i++) {
    out->mTDXF_P.mIr[i] = _cg_const_2[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
