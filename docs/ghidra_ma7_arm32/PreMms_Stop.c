/* PreMms_Stop @ 00033e88 14B */


/* PreMms_Stop(int) */

void PreMms_Stop(int param_1)

{
  CPreMms::Stop(*(CPreMms **)(DAT_00033e98 + 0x33e92),param_1);
  return;
}

