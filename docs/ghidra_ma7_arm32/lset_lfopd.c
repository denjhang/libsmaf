/* lset_lfopd @ 000f93f8 118B */


/* YAMAHA::lset_lfopd(unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfopd(uchar param_1,uchar *param_2,uchar *param_3)

{
  int iVar1;
  
  if ((uint)*param_3 != (uint)*param_2) {
    iVar1 = *(int *)(DAT_000f9470 + 0xf941a);
    *(short *)(iVar1 + (uint)*param_2 * 2 + 0x26) = (short)(((uint)param_1 * 0x400) / 0x7f);
    *(undefined2 *)(iVar1 + (uint)*param_3 * 2 + 0x26) =
         *(undefined2 *)(iVar1 + (uint)*param_2 * 2 + 0x26);
    LSendCoef('\x01',param_2);
    LSendCoef('\x01',param_3);
    return;
  }
  *(short *)(*(int *)(DAT_000f9474 + 0xf945a) + (uint)*param_3 * 2 + 0x26) =
       (short)(((uint)param_1 * 0x400) / 0x7f);
  LSendCoef('\x01',param_2);
  return;
}

