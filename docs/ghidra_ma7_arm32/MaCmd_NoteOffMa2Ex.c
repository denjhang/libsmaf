/* MaCmd_NoteOffMa2Ex @ 000ecf64 438B */


/* YAMAHA::MaCmd_NoteOffMa2Ex(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_NoteOffMa2Ex(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int local_38;
  int local_34;
  _MASNDVOICE a_Stack_30 [12];
  
  iVar2 = MaCmd_GetVoiceInfo(param_1,param_3 & 0xf,0x40,a_Stack_30);
  iVar8 = DAT_000ed11c + 0xecf94 + param_1 * 0x65d0 + (param_3 & 0xf) * 0x1e;
  if ((iVar2 < 0) || ((int)((uint)*(byte *)(iVar8 + 3) << 0x19) < 0)) {
    iVar2 = MaCmd_Nop(param_2,0,param_5);
    return iVar2;
  }
  uVar14 = (param_4 & 0x1fff) >> 10;
  uVar12 = (param_4 & 0x3ff) * 0x10911;
  uVar3 = uVar12 >> 0x10;
  uVar6 = uVar14;
  if (0x3ff < uVar3) {
    uVar6 = uVar14 + 1;
    uVar3 = uVar12 >> 0x11;
    if (uVar14 == 7) {
      uVar6 = 7;
    }
  }
  uVar12 = 0;
  *(undefined1 *)(iVar8 + 2) = 0;
  if (param_2 < 0) {
    *param_5 = 0x80;
    bVar1 = *(byte *)(iVar8 + 3);
    param_5[3] = 0x80;
    iVar4 = 7;
    param_5[2] = 0x8a;
    param_5[1] = bVar1 | 0x80;
    iVar2 = 6;
    iVar9 = 5;
    iVar5 = 4;
  }
  else {
    if (param_2 < 0x80) {
      iVar4 = 10;
      local_38 = 5;
      local_34 = 6;
      iVar2 = 9;
      iVar9 = 8;
      iVar13 = 2;
      iVar11 = 3;
      iVar15 = 1;
      iVar5 = 7;
      iVar10 = 4;
    }
    else {
      do {
        param_5[uVar12] = (byte)param_2 & 0x7f;
        uVar14 = uVar12 + 1;
        iVar7 = param_2 >> 7;
        if (iVar7 < 0x80 || 1 < uVar14) break;
        param_5[uVar14] = (byte)iVar7 & 0x7f;
        uVar14 = uVar12 + 2;
        iVar7 = param_2 >> 0xe;
        if (iVar7 < 0x80 || 1 < uVar14) break;
        param_5[uVar14] = (byte)iVar7 & 0x7f;
        uVar14 = uVar12 + 3;
        iVar7 = param_2 >> 0x15;
        if (iVar7 < 0x80 || 1 < uVar14) break;
        param_5[uVar14] = (byte)iVar7 & 0x7f;
        uVar12 = uVar12 + 4;
        param_2 = param_2 >> 0x1c;
        uVar14 = uVar12;
        iVar7 = param_2;
      } while (0x7f < param_2 && uVar12 < 2);
      local_38 = uVar14 + 5;
      local_34 = uVar14 + 6;
      iVar10 = uVar14 + 4;
      iVar15 = uVar14 + 1;
      iVar11 = uVar14 + 3;
      iVar13 = uVar14 + 2;
      iVar9 = uVar14 + 8;
      iVar2 = uVar14 + 9;
      iVar4 = uVar14 + 10;
      iVar5 = uVar14 + 7;
      uVar12 = uVar14;
      param_2 = iVar7;
    }
    param_5[uVar12] = (byte)param_2 | 0x80;
    param_5[iVar15] = 0x80;
    param_5[iVar13] = *(byte *)(iVar8 + 3) | 0x80;
    param_5[iVar11] = 0x80;
    param_5[iVar10] = 0x8a;
    param_5[local_38] = 0x80;
    param_5[local_34] = 0x80;
  }
  param_5[iVar5] = 0x87;
  param_5[iVar9] = (uchar)(((uVar6 & 7) << 10 | uVar3) >> 7);
  param_5[iVar2] = (byte)uVar3 | 0x80;
  return iVar4;
}

