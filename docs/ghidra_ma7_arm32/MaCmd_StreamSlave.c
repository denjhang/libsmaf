/* MaCmd_StreamSlave @ 000eaa24 756B */


/* YAMAHA::MaCmd_StreamSlave(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int*) */

uint YAMAHA::MaCmd_StreamSlave
               (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,uchar *param_10,uint *param_11)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 *unaff_r5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  undefined1 uVar15;
  int iVar17;
  uint uVar18;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  uint uVar16;
  
  iVar17 = DAT_000ead24;
  uVar4 = param_3 & 0x1f;
  iVar2 = param_1 * 0x65d0 + DAT_000ead18 + 0xeaa34;
  iVar6 = DAT_000ead1c + 0xeaa44;
  uVar18 = (uint)*(byte *)((uint)*(byte *)(iVar2 + 0x3c3) + iVar6 + -0xf8) +
           (uint)*(byte *)(iVar6 + (uint)*(byte *)(iVar2 + 0x3c2) + -0xf8) +
           (uint)*(byte *)((param_5 & 0x7f) + iVar6 + -0xf8);
  if (*(char *)(iVar2 + 0x3c7) == '\x01') {
    if (uVar18 < 0x18) {
      uVar18 = 0;
      goto LAB_000eaa80;
    }
    uVar18 = uVar18 - 0x18;
  }
  if (0xbf < uVar18) {
    uVar18 = 0xc0;
  }
LAB_000eaa80:
  uVar16 = param_7 & 0x80;
  uVar15 = (undefined1)uVar16;
  if (uVar16 == 0) {
    iVar6 = uVar4 * 0x10;
    bVar11 = *(byte *)(iVar2 + uVar4 * 0x1e);
    if ((bVar11 & 0x40) == 0) {
      bVar11 = 0x80;
    }
    else {
      bVar11 = (byte)((bVar11 & 0x3f) >> 4) | 0xc0;
    }
  }
  else {
    iVar6 = uVar4 << 4;
    bVar11 = 0xa0;
  }
  if (param_6 == 0x80) {
    bVar13 = 1;
  }
  else if (param_6 == 0xff) {
    bVar13 = *(byte *)(iVar2 + (iVar6 - uVar4) * 2 + 10) & 0x7c;
  }
  else {
    bVar13 = (byte)param_6 & 0x7c;
  }
  puVar5 = param_10;
  if (-1 < param_2) {
    iVar8 = DAT_000ead20 + 0xeaaf2 + *(int *)(DAT_000ead20 + 0xeaaf2) * 0x1c;
    unaff_r5 = (undefined4 *)(iVar8 + 4);
    puVar5 = (uchar *)(iVar8 + 0x13);
  }
  uVar1 = (uchar)param_9;
  puVar5[3] = bVar13;
  puVar5[2] = (byte)param_7 & 0x43;
  puVar5[1] = uVar1;
  bVar13 = *(byte *)(iVar17 + uVar18 + 0xeaa8e);
  puVar5[6] = (byte)param_8 & 0x7f;
  puVar5[4] = bVar13 & 0x7c;
  *puVar5 = 0xdd;
  puVar5[5] = (byte)((param_8 << 0x13) >> 0x1a);
  puVar5[7] = 0x80;
  *param_11 = (bVar13 & 0x7f) >> 2;
  bVar13 = *(byte *)(iVar2 + (iVar6 - uVar4) * 2 + 8);
  puVar5[0xc] = bVar11;
  puVar5[9] = uVar1 + '\x04';
  uVar4 = bVar13 & 0x7c | 0xffffff81;
  puVar5[8] = 0xf2;
  puVar5[10] = (uchar)uVar4;
  if (param_2 < 0) {
    uVar4 = 0xd;
  }
  puVar5[0xb] = 0xf9;
  iVar17 = DAT_000ead28;
  if (param_2 >= 0) {
    *(uchar *)(unaff_r5 + 2) = uVar1;
    *unaff_r5 = 0xd;
    unaff_r5[1] = 2;
    iVar2 = *(int *)(iVar17 + 0xeab9c);
    if (uVar16 != 0) {
      uVar15 = 1;
    }
    uVar18 = iVar2 + 1;
    uVar4 = *param_11;
    if (0x7f < uVar18) {
      uVar18 = 0;
    }
    *(undefined1 *)((int)unaff_r5 + 0xe) = uVar15;
    *(char *)((int)unaff_r5 + 0xd) = (char)uVar4;
    *(uint *)(iVar17 + 0xeab9c) = uVar18;
    if (param_2 < 0x80) {
      local_28 = 0xb;
      iVar17 = 1;
      local_2c = 10;
      local_34 = 9;
      uVar4 = 0xe;
      local_38 = 8;
      iVar7 = 0xd;
      local_3c = 7;
      iVar6 = 0xc;
      iVar9 = 6;
      iVar10 = 5;
      iVar8 = 4;
      iVar12 = 3;
      iVar14 = 2;
      uVar18 = 0;
    }
    else {
      uVar4 = 0;
      do {
        param_10[uVar4] = (byte)param_2 & 0x7f;
        uVar18 = uVar4 + 1;
        iVar3 = param_2 >> 7;
        if (iVar3 < 0x80 || 1 < uVar18) break;
        param_10[uVar18] = (byte)iVar3 & 0x7f;
        uVar18 = uVar4 + 2;
        iVar3 = param_2 >> 0xe;
        if (iVar3 < 0x80 || 1 < uVar18) break;
        param_10[uVar18] = (byte)iVar3 & 0x7f;
        uVar18 = uVar4 + 3;
        iVar3 = param_2 >> 0x15;
        if (iVar3 < 0x80 || 1 < uVar18) break;
        param_10[uVar18] = (byte)iVar3 & 0x7f;
        uVar4 = uVar4 + 4;
        param_2 = param_2 >> 0x1c;
        iVar3 = param_2;
        uVar18 = uVar4;
      } while (0x7f < param_2 && uVar4 < 2);
      local_3c = uVar18 + 7;
      local_38 = uVar18 + 8;
      iVar14 = uVar18 + 2;
      local_34 = uVar18 + 9;
      local_2c = uVar18 + 10;
      local_28 = uVar18 + 0xb;
      iVar12 = uVar18 + 3;
      iVar8 = uVar18 + 4;
      iVar10 = uVar18 + 5;
      iVar9 = uVar18 + 6;
      iVar6 = uVar18 + 0xc;
      iVar7 = uVar18 + 0xd;
      uVar4 = uVar18 + 0xe;
      iVar17 = uVar18 + 1;
      param_2 = iVar3;
    }
    param_10[uVar18] = (byte)param_2 | 0x80;
    param_10[iVar17] = 0xa7;
    param_10[iVar14] = 0x80;
    param_10[iVar12] = 0x80;
    param_10[iVar8] = 0xa7;
    param_10[iVar10] = 0x80;
    param_10[iVar9] = 0x80;
    param_10[local_3c] = 0xa2;
    param_10[local_38] = '\x0f';
    param_10[local_34] = (byte)iVar2 | 0x80;
    param_10[local_2c] = 0x80;
    param_10[local_28] = 0xa0;
    param_10[iVar6] = '\0';
    param_10[iVar7] = (byte)param_4 | 0x80;
  }
  return uVar4;
}

