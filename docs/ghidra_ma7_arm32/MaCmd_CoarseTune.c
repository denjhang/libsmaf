/* MaCmd_CoarseTune @ 000ee080 404B */


/* YAMAHA::MaCmd_CoarseTune(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_CoarseTune(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  uVar4 = param_3 & 0x1f;
  iVar8 = param_1 * 0x65d0 + DAT_000ee214 + 0xee096;
  uVar1 = *(ushort *)(DAT_000ee218 + (param_4 & 0x7f) * 2 + 0xee8e8);
  uVar13 = (uint)uVar1;
  iVar11 = iVar8 + uVar4 * 0x1e;
  uVar5 = (uint)*(ushort *)(iVar11 + 0x1a);
  *(ushort *)(iVar11 + 0x18) = uVar1;
  if (uVar5 != 0x400) {
    uVar13 = uVar5 * uVar13;
  }
  if (uVar5 != 0x400) {
    uVar13 = uVar13 >> 10;
  }
  uVar5 = ((uint)*(ushort *)(iVar8 + 0x3cc) * (uint)*(ushort *)(iVar8 + 0x3ce) >> 10) * uVar13 >> 10
  ;
  *(short *)(iVar11 + 0x16) = (short)uVar5;
  if (0xf < uVar4) {
    iVar8 = MaCmd_Nop(param_2,0,param_5);
    return iVar8;
  }
  uVar5 = uVar5 & 0xffff;
  if (*(ushort *)(iVar11 + 0x14) != 0x400) {
    uVar5 = *(ushort *)(iVar11 + 0x14) * uVar5 >> 10;
  }
  if (0x3ffe < uVar5) {
    uVar5 = 0x3fff;
  }
  if (param_2 < 0) {
    *param_5 = 0x8b;
    param_5[1] = (char)uVar4 + (char)(param_1 << 4) | 0x80;
    iVar11 = 5;
    iVar8 = 4;
    iVar7 = 3;
    iVar6 = 2;
  }
  else {
    if (param_2 < 0x80) {
      iVar11 = 7;
      iVar8 = 6;
      iVar7 = 5;
      iVar9 = 3;
      iVar10 = 2;
      iVar12 = 1;
      iVar6 = 4;
      uVar13 = 0;
    }
    else {
      uVar3 = 0;
      do {
        param_5[uVar3] = (byte)param_2 & 0x7f;
        uVar13 = uVar3 + 1;
        iVar2 = param_2 >> 7;
        if (iVar2 < 0x80 || 1 < uVar13) break;
        param_5[uVar13] = (byte)iVar2 & 0x7f;
        uVar13 = uVar3 + 2;
        iVar2 = param_2 >> 0xe;
        if (iVar2 < 0x80 || 1 < uVar13) break;
        param_5[uVar13] = (byte)iVar2 & 0x7f;
        uVar13 = uVar3 + 3;
        iVar2 = param_2 >> 0x15;
        if (iVar2 < 0x80 || 1 < uVar13) break;
        param_5[uVar13] = (byte)iVar2 & 0x7f;
        uVar3 = uVar3 + 4;
        param_2 = param_2 >> 0x1c;
        iVar2 = param_2;
        uVar13 = uVar3;
      } while (0x7f < param_2 && uVar3 < 2);
      iVar12 = uVar13 + 1;
      iVar10 = uVar13 + 2;
      iVar9 = uVar13 + 3;
      iVar7 = uVar13 + 5;
      iVar8 = uVar13 + 6;
      iVar11 = uVar13 + 7;
      iVar6 = uVar13 + 4;
      param_2 = iVar2;
    }
    param_5[uVar13] = (byte)param_2 | 0x80;
    param_5[iVar12] = 0x8b;
    param_5[iVar10] = (char)uVar4 + (char)(param_1 << 4) | 0x80;
    param_5[iVar9] = 0x80;
  }
  param_5[iVar6] = 0x90;
  param_5[iVar7] = (uchar)(uVar5 >> 7);
  param_5[iVar8] = (byte)uVar5 | 0x80;
  return iVar11;
}

