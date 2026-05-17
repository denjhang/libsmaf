/* MaCmd_NoteOff @ 000ec604 350B */


/* YAMAHA::MaCmd_NoteOff(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_NoteOff(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  
  iVar8 = DAT_000ec764 + 0xec61c + param_1 * 0x65d0;
  if ((*(char *)(iVar8 + 0x3c5) == '\x03') &&
     (uVar6 = (uint)*(byte *)(iVar8 + 0x3c9), uVar6 == (param_3 & 0xf))) {
    iVar8 = DAT_000ec764 + 0xec61c + param_1 * 0x65d0 + uVar6 * 0x1e;
    cVar1 = *(char *)(iVar8 + 2);
    if ((cVar1 != '\0') && (*(char *)(iVar8 + 2) = cVar1 + -1, cVar1 != '\x01')) {
LAB_000ec73a:
      iVar8 = MaCmd_Nop(param_2,0,param_5);
      return iVar8;
    }
    bVar10 = *(byte *)(param_1 * 0x65d0 + DAT_000ec768 + 0xecadc);
  }
  else {
    iVar8 = MaDva_ReleaseSlot(param_1,param_3 & 0xf,param_4 & 0x7f);
    if (iVar8 < 0) {
      if (param_2 < 1) {
        return 0;
      }
      goto LAB_000ec73a;
    }
    bVar10 = (byte)iVar8;
  }
  if (param_2 < 0) {
    param_5[1] = bVar10 | 0x80;
    *param_5 = 0x80;
    param_5[2] = 0x8a;
    param_5[3] = 0x80;
    return 4;
  }
  if (param_2 < 0x80) {
    iVar2 = 6;
    iVar9 = 5;
    iVar4 = 3;
    iVar8 = 2;
    iVar11 = 1;
    iVar3 = 4;
    uVar6 = 0;
  }
  else {
    uVar5 = 0;
    do {
      param_5[uVar5] = (byte)param_2 & 0x7f;
      uVar6 = uVar5 + 1;
      iVar7 = param_2 >> 7;
      if (iVar7 < 0x80 || 1 < uVar6) break;
      param_5[uVar6] = (byte)iVar7 & 0x7f;
      uVar6 = uVar5 + 2;
      iVar7 = param_2 >> 0xe;
      if (iVar7 < 0x80 || 1 < uVar6) break;
      param_5[uVar6] = (byte)iVar7 & 0x7f;
      uVar6 = uVar5 + 3;
      iVar7 = param_2 >> 0x15;
      if (iVar7 < 0x80 || 1 < uVar6) break;
      param_5[uVar6] = (byte)iVar7 & 0x7f;
      uVar5 = uVar5 + 4;
      param_2 = param_2 >> 0x1c;
      uVar6 = uVar5;
      iVar7 = param_2;
    } while (0x7f < param_2 && uVar5 < 2);
    iVar11 = uVar6 + 1;
    iVar8 = uVar6 + 2;
    iVar4 = uVar6 + 3;
    iVar9 = uVar6 + 5;
    iVar2 = uVar6 + 6;
    iVar3 = uVar6 + 4;
    param_2 = iVar7;
  }
  param_5[uVar6] = (byte)param_2 | 0x80;
  param_5[iVar11] = 0x80;
  param_5[iVar8] = bVar10 | 0x80;
  param_5[iVar4] = 0x80;
  param_5[iVar3] = 0x8a;
  param_5[iVar9] = 0x80;
  return iVar2;
}

