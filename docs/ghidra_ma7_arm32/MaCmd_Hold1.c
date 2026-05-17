/* MaCmd_Hold1 @ 000ed788 298B */


/* YAMAHA::MaCmd_Hold1(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_Hold1(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  int iVar1;
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
  
  uVar5 = param_3 & 0x1f;
  iVar7 = param_1 * 0x65d0 + DAT_000ed8b4 + 0xed79e + uVar5 * 0x1e;
  *(char *)(iVar7 + 0xd) = (char)param_4;
  if (0xf < uVar5) {
    iVar7 = MaCmd_Nop(param_2,0,param_5);
    return iVar7;
  }
  if (param_2 < 0) {
    *param_5 = 0x8b;
    param_5[1] = (char)uVar5 + (char)(param_1 << 4) | 0x80;
    iVar1 = 4;
    iVar6 = 3;
    iVar8 = 2;
  }
  else {
    if (param_2 < 0x80) {
      iVar1 = 6;
      iVar6 = 5;
      iVar11 = 3;
      iVar9 = 2;
      iVar10 = 1;
      iVar8 = 4;
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
      iVar10 = uVar4 + 1;
      iVar9 = uVar4 + 2;
      iVar11 = uVar4 + 3;
      iVar6 = uVar4 + 5;
      iVar1 = uVar4 + 6;
      iVar8 = uVar4 + 4;
      param_2 = iVar2;
    }
    param_5[uVar4] = (byte)param_2 | 0x80;
    param_5[iVar10] = 0x8b;
    param_5[iVar9] = (char)uVar5 + (char)(param_1 << 4) | 0x80;
    param_5[iVar11] = 0x80;
  }
  param_5[iVar8] = 0x8e;
  param_5[iVar6] = *(byte *)(iVar7 + 0xd) | 0x80 | *(char *)(iVar7 + 0xc) << 4;
  return iVar1;
}

