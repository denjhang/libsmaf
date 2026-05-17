/* MaCmd_PitchBend @ 000f248c 350B */


/* YAMAHA::MaCmd_PitchBend(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_PitchBend(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar5 = param_3 & 0x1f;
  iVar10 = param_1 * 0x65d0 + DAT_000f25ec + 0xf24a4 + uVar5 * 0x1e;
  uVar1 = *(ushort *)
           (DAT_000f25f0 + (((param_4 & 0x3fff) >> 7) + (uint)*(byte *)(iVar10 + 0xe) * 0x80) * 2 +
           0xf2816);
  uVar9 = (uint)uVar1;
  *(ushort *)(iVar10 + 0x14) = uVar1;
  if (0xf < uVar5) {
    iVar10 = MaCmd_Nop(param_2,0,param_5);
    return iVar10;
  }
  if ((*(ushort *)(iVar10 + 0x16) != 0x400) &&
     (uVar9 = *(ushort *)(iVar10 + 0x16) * uVar9 >> 10, 0x3ffe < uVar9)) {
    uVar9 = 0x3fff;
  }
  if (param_2 < 0) {
    *param_5 = 0x8b;
    param_5[1] = (char)uVar5 + (char)(param_1 << 4) | 0x80;
    iVar10 = 5;
    iVar8 = 4;
    iVar7 = 3;
    iVar6 = 2;
  }
  else {
    if (param_2 < 0x80) {
      iVar10 = 7;
      iVar8 = 6;
      iVar7 = 5;
      iVar11 = 3;
      iVar12 = 2;
      iVar13 = 1;
      iVar6 = 4;
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      do {
        param_5[uVar3] = (byte)param_2 & 0x7f;
        uVar4 = uVar3 + 1;
        iVar2 = param_2 >> 7;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar2 & 0x7f;
        uVar4 = uVar3 + 2;
        iVar2 = param_2 >> 0xe;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar2 & 0x7f;
        uVar4 = uVar3 + 3;
        iVar2 = param_2 >> 0x15;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar2 & 0x7f;
        uVar3 = uVar3 + 4;
        param_2 = param_2 >> 0x1c;
        iVar2 = param_2;
        uVar4 = uVar3;
      } while (0x7f < param_2 && uVar3 < 2);
      iVar13 = uVar4 + 1;
      iVar12 = uVar4 + 2;
      iVar11 = uVar4 + 3;
      iVar7 = uVar4 + 5;
      iVar8 = uVar4 + 6;
      iVar10 = uVar4 + 7;
      iVar6 = uVar4 + 4;
      param_2 = iVar2;
    }
    param_5[uVar4] = (byte)param_2 | 0x80;
    param_5[iVar13] = 0x8b;
    param_5[iVar12] = (char)uVar5 + (char)(param_1 << 4) | 0x80;
    param_5[iVar11] = 0x80;
  }
  param_5[iVar6] = 0x90;
  param_5[iVar7] = (byte)((uVar9 << 0x12) >> 0x19);
  param_5[iVar8] = (byte)uVar9 | 0x80;
  return iVar10;
}

