/* PreMms_WaitReady @ 00033eb0 16B */


/* PreMms_WaitReady(int, int) */

void PreMms_WaitReady(int param_1,int param_2)

{
  CPreMms::WaitReady(*(int *)(DAT_00033ec0 + 0x33ebc),param_1);
  return;
}

