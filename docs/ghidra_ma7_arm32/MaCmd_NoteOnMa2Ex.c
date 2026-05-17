/* MaCmd_NoteOnMa2Ex @ 000ec3ac 596B */


/* YAMAHA::MaCmd_NoteOnMa2Ex(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   char*) */

int YAMAHA::MaCmd_NoteOnMa2Ex
              (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int local_28;
  char local_22;
  
  uVar9 = param_3 & 0xf;
  iVar3 = MaCmd_GetVoiceInfo(param_1,uVar9,0x40,(_MASNDVOICE *)&local_28);
  if ((iVar3 < 0) || (local_22 != '\0')) {
    iVar3 = MaCmd_Nop(param_2,0,param_6);
    return iVar3;
  }
  uVar11 = (param_4 & 0x1fff) >> 10;
  uVar4 = (param_4 & 0x3ff) * 0x10911;
  uVar8 = uVar4 >> 0x10;
  uVar10 = uVar11;
  if (0x3ff < uVar8) {
    uVar10 = uVar11 + 1;
    uVar8 = uVar4 >> 0x11;
    if (uVar11 == 7) {
      uVar10 = 7;
    }
  }
  uVar10 = (uVar10 & 7) << 10 | uVar8;
  iVar3 = DAT_000ec600 + 0xec420 + param_1 * 0x65d0 + uVar9 * 0x1e;
  *(char *)(iVar3 + 2) = *(char *)(iVar3 + 2) + '\x01';
  if (param_2 < 0) {
    cVar1 = *(char *)(iVar3 + 4);
    iVar6 = 2;
    iVar12 = 1;
    iVar5 = 0;
  }
  else {
    if (param_2 < 0x80) {
      iVar6 = 3;
      iVar12 = 2;
      iVar5 = 1;
      uVar4 = 0;
      iVar7 = param_2;
    }
    else {
      uVar11 = 0;
      iVar12 = param_2;
      do {
        param_6[uVar11] = (byte)iVar12 & 0x7f;
        uVar4 = uVar11 + 1;
        iVar7 = iVar12 >> 7;
        if (iVar7 < 0x80 || 1 < uVar4) break;
        param_6[uVar4] = (byte)iVar7 & 0x7f;
        uVar4 = uVar11 + 2;
        iVar7 = iVar12 >> 0xe;
        if (iVar7 < 0x80 || 1 < uVar4) break;
        param_6[uVar4] = (byte)iVar7 & 0x7f;
        uVar4 = uVar11 + 3;
        iVar7 = iVar12 >> 0x15;
        if (iVar7 < 0x80 || 1 < uVar4) break;
        param_6[uVar4] = (byte)iVar7 & 0x7f;
        uVar11 = uVar11 + 4;
        iVar12 = iVar12 >> 0x1c;
        uVar4 = uVar11;
        iVar7 = iVar12;
      } while (0x7f < iVar12 && uVar11 < 2);
      iVar12 = uVar4 + 2;
      iVar6 = uVar4 + 3;
      iVar5 = uVar4 + 1;
    }
    param_6[uVar4] = (byte)iVar7 | 0x80;
    cVar1 = *(char *)(iVar3 + 4);
  }
  if (cVar1 < '\0') {
    param_6[iVar5] = 0x80;
    param_6[iVar12] = *(byte *)(iVar3 + 3) | 0x80;
    if (param_2 < 0) {
      param_6[iVar6] = 0x8a;
      param_6[iVar5 + 3] = 0x90;
      iVar5 = iVar5 + 4;
    }
    else {
      param_6[iVar6] = 0x80;
      param_6[iVar5 + 5] = 0x80;
      param_6[iVar5 + 3] = 0x8a;
      param_6[iVar5 + 4] = 0x90;
      iVar5 = iVar5 + 6;
    }
    iVar12 = iVar5 + 1;
    *(undefined1 *)(iVar3 + 2) = 1;
    iVar6 = iVar5 + 2;
  }
  bVar2 = (char)uVar9 + (char)param_1 * '\b';
  param_6[iVar5] = 0x80;
  param_6[iVar12] = bVar2 | 0x80;
  if (*(char *)(iVar3 + 2) != '\x01') {
    if (-1 < param_2) {
      param_6[iVar6] = 0x80;
      iVar6 = iVar5 + 3;
    }
    param_6[iVar6] = 0x86;
    param_6[iVar6 + 1] = (byte)param_5 & 0x7c;
    param_6[iVar6 + 2] = (uchar)(uVar10 >> 7);
    param_6[iVar6 + 3] = (byte)uVar8 | 0x80;
    return iVar6 + 4;
  }
  if (-1 < param_2) {
    param_6[iVar6] = 0x80;
    iVar6 = iVar5 + 3;
  }
  param_6[iVar6] = 0x81;
  param_6[iVar6 + 6] = (byte)param_5 & 0x7c;
  param_6[iVar6 + 1] = (byte)((uint)(local_28 << 0xf) >> 0x1e);
  param_6[iVar6 + 2] = (byte)((uint)(local_28 << 0x11) >> 0x19);
  param_6[iVar6 + 7] = (uchar)(uVar10 >> 7);
  param_6[iVar6 + 3] = (byte)local_28 >> 1;
  param_6[iVar6 + 8] = (byte)uVar8 & 0x7f;
  param_6[iVar6 + 4] = '\0';
  param_6[iVar6 + 5] = '\0';
  param_6[iVar6 + 9] = *(uchar *)(iVar3 + 0xf);
  param_6[iVar6 + 10] = *(byte *)(iVar3 + 1) | 0xc0;
  *(byte *)(iVar3 + 3) = bVar2;
  return iVar6 + 0xb;
}

