/* PreMms_Open @ 00033db4 16B */


/* PreMms_Open(int, SMMS_OPENARG const*) */

void PreMms_Open(int param_1,SMMS_OPENARG *param_2)

{
  CPreMms::Open(*(int *)(DAT_00033dc4 + 0x33dc0),(SMMS_OPENARG *)param_1);
  return;
}

