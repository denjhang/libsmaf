/* lset_lfopd @ 00245224 188B */


/* YAMAHA::lset_lfopd(unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfopd(uchar param_1,uchar *param_2,uchar *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_lprm_00567530;
  if ((uint)*param_3 != (uint)*param_2) {
    *(short *)(PTR_lprm_00567530 + (long)(int)(uint)*param_2 * 2 + 0x26) =
         (short)(((uint)param_1 * 0x400) / 0x7f);
    *(undefined2 *)(puVar1 + (ulong)*param_3 * 2 + 0x26) =
         *(undefined2 *)(puVar1 + (ulong)*param_2 * 2 + 0x26);
    LSendCoef('\x01',param_2);
    LSendCoef('\x01',param_3);
    return;
  }
  *(short *)(PTR_lprm_00567530 + (long)(int)(uint)*param_3 * 2 + 0x26) =
       (short)(((uint)param_1 * 0x400) / 0x7f);
  LSendCoef('\x01',param_2);
  return;
}

