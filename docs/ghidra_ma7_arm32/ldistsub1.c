/* ldistsub1 @ 000fc590 206B */


/* YAMAHA::ldistsub1(unsigned short, unsigned short, unsigned short) */

void YAMAHA::ldistsub1(ushort param_1,ushort param_2,ushort param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar4 = (uint)param_2;
  iVar6 = DAT_000fc660 + 0xfc5ac;
  pbVar5 = *(byte **)(iVar6 + DAT_000fc664);
  iVar8 = *(int *)(iVar6 + DAT_000fc668);
  bVar1 = *pbVar5;
  sVar2 = (short)(((uint)param_1 * 0x7cbf) / 0x7f) + 0x340;
  *(short *)(iVar8 + (uint)pbVar5[1] * 2 + 0x26) = sVar2;
  *(short *)(iVar8 + (uint)bVar1 * 2 + 0x26) = sVar2;
  if (param_3 == 0) {
    if (param_1 < 0xb) {
      iVar3 = __divsi3(0xa900000,(int)sVar2);
      iVar3 = __divsi3(iVar3 << 7,(int)sVar2);
    }
    else {
      iVar3 = 0x7ea;
    }
    uVar9 = *(int *)(*(int *)(iVar6 + DAT_000fc66c) + uVar4 * 4) * iVar3;
    uVar7 = uVar9 & ~((int)uVar9 >> 0x20);
    if ((int)uVar9 < 0) {
      uVar7 = uVar9 + 0x7f;
    }
    uVar7 = (uVar7 & 0x7fffffff) >> 0xf;
    iVar6 = 1 - uVar7;
    if (1 < uVar7) {
      iVar6 = 0;
    }
    if (uVar4 == 0) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = (uint)*(ushort *)(*(int *)(iVar6 + DAT_000fc66c) + uVar4 * 4);
  }
  *(short *)(iVar8 + (uint)pbVar5[4] * 2 + 0x26) = (short)uVar7;
  LSendCoef('\x02',pbVar5);
  LSendCoef('\x01',pbVar5 + 4);
  return;
}

