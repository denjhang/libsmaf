/* lset_lfoph @ 000f9364 140B */


/* YAMAHA::lset_lfoph(unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfoph(uchar param_1,uchar *param_2,uchar *param_3)

{
  int iVar1;
  
  if ((uint)*param_3 != (uint)*param_2) {
    iVar1 = *(int *)(DAT_000f93f0 + 0xf938c);
    *(short *)(iVar1 + (uint)*param_2 * 2 + 0x26) = (short)((int)((param_1 - 0x40) * 0x7fff) / 0x3c)
    ;
    *(undefined2 *)(iVar1 + (uint)*param_3 * 2 + 0x26) =
         *(undefined2 *)(iVar1 + (uint)*param_2 * 2 + 0x26);
    LSendCoef('\x01',param_2);
    LSendCoef('\x01',param_3);
    return;
  }
  *(short *)(*(int *)(DAT_000f93f4 + 0xf93dc) + (uint)*param_3 * 2 + 0x26) =
       (short)((int)((param_1 - 0x40) * 0x7fff) / 0x3c);
  LSendCoef('\x01',param_2);
  return;
}

