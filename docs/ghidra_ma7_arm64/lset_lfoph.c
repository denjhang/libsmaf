/* lset_lfoph @ 00245150 212B */


/* YAMAHA::lset_lfoph(unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfoph(uchar param_1,uchar *param_2,uchar *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_lprm_00567530;
  if ((uint)*param_3 != (uint)*param_2) {
    *(short *)(PTR_lprm_00567530 + (long)(int)(uint)*param_2 * 2 + 0x26) =
         (short)((int)((param_1 - 0x40) * 0x7fff) / 0x3c);
    *(undefined2 *)(puVar1 + (ulong)*param_3 * 2 + 0x26) =
         *(undefined2 *)(puVar1 + (ulong)*param_2 * 2 + 0x26);
    LSendCoef('\x01',param_2);
    LSendCoef('\x01',param_3);
    return;
  }
  *(short *)(PTR_lprm_00567530 + (long)(int)(uint)*param_3 * 2 + 0x26) =
       (short)((int)((param_1 - 0x40) * 0x7fff) / 0x3c);
  LSendCoef('\x01',param_2);
  return;
}

