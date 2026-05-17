/* lset_lfoad @ 000f9478 100B */


/* YAMAHA::lset_lfoad(signed char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfoad(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (param_1 == 0x7f) {
    sVar2 = -0x8000;
  }
  else if (param_1 == -0x7f) {
    sVar2 = 0x7fff;
  }
  else {
    sVar2 = -(short)((param_1 * 0x8000) / 0x7f);
  }
  bVar1 = *param_2;
  iVar3 = *(int *)(DAT_000f94dc + 0xf94bc);
  *(short *)(iVar3 + (uint)*param_3 * 2 + 0x26) = sVar2;
  *(short *)(iVar3 + (uint)bVar1 * 2 + 0x26) = sVar2;
  LSendCoef('\x01',param_2);
  LSendCoef('\x01',param_3);
  return;
}

