/* lset_lfo @ 000f92f4 98B */


/* YAMAHA::lset_lfo(unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfo(uchar param_1,uchar *param_2,uchar *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000f9358 + 0xf9306;
  if ((uint)*param_3 != (uint)*param_2) {
    iVar3 = *(int *)(iVar2 + DAT_000f9360);
    uVar1 = *(undefined2 *)(*(int *)(iVar2 + DAT_000f935c) + (uint)param_1 * 2);
    *(undefined2 *)(iVar3 + (uint)*param_2 * 2 + 0x26) = uVar1;
    *(undefined2 *)(iVar3 + (uint)*param_3 * 2 + 0x26) = uVar1;
    LSendCoef('\x01',param_2);
    LSendCoef('\x01',param_3);
    return;
  }
  *(undefined2 *)(*(int *)(iVar2 + DAT_000f9360) + (uint)*param_3 * 2 + 0x26) =
       *(undefined2 *)(*(int *)(iVar2 + DAT_000f935c) + (uint)param_1 * 2);
  LSendCoef('\x01',param_2);
  return;
}

