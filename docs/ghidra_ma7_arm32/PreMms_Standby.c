/* PreMms_Standby @ 00033e08 24B */


/* PreMms_Standby(int, unsigned int, unsigned int) */

void PreMms_Standby(int param_1,uint param_2,uint param_3)

{
  CPreMms::Standby(*(CPreMms **)(DAT_00033e20 + 0x33e1a),param_1,param_2,param_3);
  return;
}

