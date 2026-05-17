/* PreMms_Seek @ 00033e38 16B */


/* PreMms_Seek(int, unsigned int) */

void PreMms_Seek(int param_1,uint param_2)

{
  CPreMms::Seek(*(int *)(DAT_00033e48 + 0x33e44),param_1);
  return;
}

