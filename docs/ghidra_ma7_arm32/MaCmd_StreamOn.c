/* MaCmd_StreamOn @ 000ea6f8 792B */


/* YAMAHA::MaCmd_StreamOn(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int*) */

uint YAMAHA::MaCmd_StreamOn
               (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,uchar *param_10,uint *param_11)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uchar *puVar8;
  int iVar9;
  undefined4 *unaff_r5;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  byte bVar16;
  undefined1 uVar17;
  int iVar19;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  uint uVar18;
  
  uVar6 = param_3 & 0x1f;
  iVar4 = param_1 * 0x65d0 + DAT_000eaa10 + 0xea708;
  iVar9 = DAT_000eaa14 + 0xea71e;
  uVar12 = (uint)*(byte *)((uint)*(byte *)(iVar4 + 0x3c3) + iVar9 + -0xf8) +
           (uint)*(byte *)(iVar9 + (uint)*(byte *)(iVar4 + 0x3c2) + -0xf8) +
           (uint)*(byte *)((param_5 & 0x7f) + iVar9 + -0xf8);
  if (*(char *)(iVar4 + 0x3c7) == '\x01') {
    if (uVar12 < 0x18) {
      uVar12 = 0;
      goto LAB_000ea74c;
    }
    uVar12 = uVar12 - 0x18;
  }
  if (0xbf < uVar12) {
    uVar12 = 0xc0;
  }
LAB_000ea74c:
  uVar18 = param_7 & 0x80;
  uVar17 = (undefined1)uVar18;
  if (uVar18 == 0) {
    iVar9 = uVar6 * 0x10;
    bVar14 = *(byte *)(iVar4 + uVar6 * 0x1e);
    if ((bVar14 & 0x40) == 0) {
      bVar14 = 0x80;
    }
    else {
      bVar14 = (byte)((bVar14 & 0x3f) >> 4) | 0xc0;
    }
  }
  else {
    iVar9 = uVar6 << 4;
    bVar14 = 0xa0;
  }
  if (param_6 == 0x80) {
    bVar16 = 1;
  }
  else if (param_6 == 0xff) {
    bVar16 = *(byte *)(iVar4 + (iVar9 - uVar6) * 2 + 10) & 0x7c;
  }
  else {
    bVar16 = (byte)param_6 & 0x7c;
  }
  puVar8 = param_10;
  if (-1 < param_2) {
    iVar7 = DAT_000eaa18 + 0xea7c2 + *(int *)(DAT_000eaa18 + 0xea7c2) * 0x1c;
    unaff_r5 = (undefined4 *)(iVar7 + 4);
    puVar8 = (uchar *)(iVar7 + 0x13);
  }
  iVar4 = iVar4 + (iVar9 - uVar6) * 2;
  iVar9 = uVar12 + DAT_000eaa1c;
  puVar8[3] = bVar16;
  bVar3 = (byte)param_9;
  bVar16 = *(byte *)(iVar9 + 0xea75a);
  puVar8[7] = 0x80;
  puVar8[4] = bVar16 & 0x7c;
  puVar8[2] = (byte)param_7 & 0x43;
  *puVar8 = 0xdd;
  puVar8[5] = (uchar)((param_8 & 0x1fff) >> 7);
  puVar8[1] = bVar3;
  puVar8[6] = (byte)param_8 & 0x7f;
  *param_11 = (bVar16 & 0x7f) >> 2;
  bVar16 = *(byte *)(iVar4 + 8);
  puVar8[0xc] = bVar14;
  puVar8[9] = bVar3 + 4;
  uVar6 = bVar16 & 0x7c | 0xffffff81;
  puVar8[8] = 0xf2;
  puVar8[10] = (uchar)uVar6;
  if (param_2 < 0) {
    uVar6 = 0xd;
  }
  puVar8[0xb] = 0xf9;
  iVar9 = DAT_000eaa20;
  if (param_2 >= 0) {
    uVar1 = *(undefined1 *)(iVar4 + 1);
    iVar7 = 0xd;
    bVar2 = *(byte *)(iVar4 + 0x12);
    bVar14 = *(byte *)(iVar4 + 0x11);
    uVar12 = 0;
    bVar16 = *(byte *)(iVar4 + 0x13);
    *unaff_r5 = 0xd;
    *(byte *)((int)unaff_r5 + 9) = bVar14 & 0x7c;
    *(byte *)((int)unaff_r5 + 0xb) = bVar16 & 0x7c;
    if (uVar18 != 0) {
      uVar17 = 1;
    }
    iVar4 = *(int *)(iVar9 + 0xea870);
    *(undefined1 *)(unaff_r5 + 3) = uVar1;
    uVar6 = iVar4 + 1;
    *(byte *)(unaff_r5 + 2) = bVar3;
    *(byte *)((int)unaff_r5 + 10) = bVar2 & 0x7c;
    if (0x7f < uVar6) {
      uVar6 = 0;
    }
    unaff_r5[1] = 0;
    uVar18 = *param_11;
    *(undefined1 *)((int)unaff_r5 + 0xe) = uVar17;
    *(uint *)(iVar9 + 0xea870) = uVar6;
    *(char *)((int)unaff_r5 + 0xd) = (char)uVar18;
    if (param_2 < 0x80) {
      local_28 = 0xc;
      local_2c = 0xb;
      iVar9 = 1;
      local_30 = 10;
      uVar6 = 0xe;
      iVar19 = 3;
      iVar15 = 2;
      local_40 = 7;
      local_3c = 8;
      local_38 = 9;
      iVar10 = 6;
      iVar11 = 5;
      iVar13 = 4;
    }
    else {
      do {
        param_10[uVar12] = (byte)param_2 & 0x7f;
        uVar18 = uVar12 + 1;
        iVar5 = param_2 >> 7;
        if (iVar5 < 0x80 || 1 < uVar18) break;
        param_10[uVar18] = (byte)iVar5 & 0x7f;
        uVar18 = uVar12 + 2;
        iVar5 = param_2 >> 0xe;
        if (iVar5 < 0x80 || 1 < uVar18) break;
        param_10[uVar18] = (byte)iVar5 & 0x7f;
        uVar18 = uVar12 + 3;
        iVar5 = param_2 >> 0x15;
        if (iVar5 < 0x80 || 1 < uVar18) break;
        param_10[uVar18] = (byte)iVar5 & 0x7f;
        uVar12 = uVar12 + 4;
        param_2 = param_2 >> 0x1c;
        iVar5 = param_2;
        uVar18 = uVar12;
      } while (0x7f < param_2 && uVar12 < 2);
      local_40 = uVar18 + 7;
      local_3c = uVar18 + 8;
      local_30 = uVar18 + 10;
      local_38 = uVar18 + 9;
      local_28 = uVar18 + 0xc;
      local_2c = uVar18 + 0xb;
      iVar15 = uVar18 + 2;
      iVar19 = uVar18 + 3;
      iVar13 = uVar18 + 4;
      iVar11 = uVar18 + 5;
      iVar10 = uVar18 + 6;
      iVar7 = uVar18 + 0xd;
      uVar6 = uVar18 + 0xe;
      iVar9 = uVar18 + 1;
      param_2 = iVar5;
      uVar12 = uVar18;
    }
    param_10[uVar12] = (byte)param_2 | 0x80;
    param_10[iVar9] = 0xa7;
    param_10[iVar15] = 0x80;
    param_10[iVar19] = 0x80;
    param_10[iVar13] = 0xa7;
    param_10[iVar11] = 0x80;
    param_10[iVar10] = 0x80;
    param_10[local_40] = 0xa2;
    param_10[local_3c] = '\x0f';
    param_10[local_38] = (byte)iVar4 | 0x80;
    param_10[local_30] = 0x80;
    param_10[local_2c] = 0x98;
    param_10[local_28] = bVar3 & 0xb | 4;
    param_10[iVar7] = (byte)param_4 | 0x80;
  }
  return uVar6;
}

