/* lset_lfoad @ 002452e0 156B */


/* YAMAHA::lset_lfoad(signed char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfoad(char param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  short sVar4;
  
  puVar3 = PTR_lprm_00567530;
  iVar2 = (int)param_1;
  if (iVar2 == 0x7f) {
    sVar4 = -0x8000;
  }
  else if (iVar2 == -0x7f) {
    sVar4 = 0x7fff;
  }
  else {
    sVar4 = -(short)((iVar2 * 0x8000) / 0x7f);
  }
  bVar1 = *param_2;
  *(short *)(PTR_lprm_00567530 + (ulong)*param_3 * 2 + 0x26) = sVar4;
  *(short *)(puVar3 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar4;
  LSendCoef('\x01',param_2);
  LSendCoef('\x01',param_3);
  return;
}

