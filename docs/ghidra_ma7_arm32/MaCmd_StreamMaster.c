/* MaCmd_StreamMaster @ 000ead2c 756B */


/* YAMAHA::MaCmd_StreamMaster(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int*) */

int YAMAHA::MaCmd_StreamMaster
              (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
              uint param_7,uint param_8,uint param_9,uchar *param_10,uint *param_11)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  int iVar8;
  undefined4 *unaff_r5;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  byte bVar15;
  undefined1 uVar16;
  int iVar18;
  uint local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  uint uVar17;
  
  iVar4 = DAT_000eb02c;
  uVar6 = param_3 & 0x1f;
  iVar3 = param_1 * 0x65d0 + DAT_000eb020 + 0xead3c;
  iVar8 = DAT_000eb024 + 0xead52;
  local_40 = (uint)*(byte *)((uint)*(byte *)(iVar3 + 0x3c3) + iVar8 + -0xf8) +
             (uint)*(byte *)(iVar8 + (uint)*(byte *)(iVar3 + 0x3c2) + -0xf8) +
             (uint)*(byte *)((param_5 & 0x7f) + iVar8 + -0xf8);
  if (*(char *)(iVar3 + 0x3c7) == '\x01') {
    if (local_40 < 0x18) {
      local_40 = 0;
      goto LAB_000ead82;
    }
    local_40 = local_40 - 0x18;
  }
  if (0xbf < local_40) {
    local_40 = 0xc0;
  }
LAB_000ead82:
  uVar17 = param_7 & 0x80;
  uVar16 = (undefined1)uVar17;
  if (uVar17 == 0) {
    iVar8 = uVar6 * 0x10;
    bVar13 = *(byte *)(iVar3 + uVar6 * 0x1e);
    if ((bVar13 & 0x40) == 0) {
      bVar13 = 0x80;
    }
    else {
      bVar13 = (byte)((bVar13 & 0x3f) >> 4) | 0xc0;
    }
  }
  else {
    iVar8 = uVar6 << 4;
    bVar13 = 0xa0;
  }
  if (param_6 == 0x80) {
    bVar15 = 1;
  }
  else if (param_6 == 0xff) {
    bVar15 = *(byte *)(iVar3 + (iVar8 - uVar6) * 2 + 10) & 0x7c;
  }
  else {
    bVar15 = (byte)param_6 & 0x7c;
  }
  puVar7 = param_10;
  if (-1 < param_2) {
    iVar10 = DAT_000eb028 + 0xeadf8 + *(int *)(DAT_000eb028 + 0xeadf8) * 0x1c;
    unaff_r5 = (undefined4 *)(iVar10 + 4);
    puVar7 = (uchar *)(iVar10 + 0x13);
  }
  puVar7[3] = bVar15;
  iVar3 = iVar3 + (iVar8 - uVar6) * 2;
  bVar2 = (byte)param_9;
  bVar15 = *(byte *)(local_40 + iVar4 + 0xeada0);
  puVar7[5] = (byte)((param_8 << 0x13) >> 0x1a);
  puVar7[2] = (byte)param_7 & 0x43;
  puVar7[1] = bVar2;
  puVar7[6] = (byte)param_8 & 0x7f;
  puVar7[4] = bVar15 & 0x7c;
  *puVar7 = 0xdd;
  puVar7[7] = 0x80;
  *param_11 = (bVar15 & 0x7f) >> 2;
  iVar4 = 0xf9;
  bVar15 = *(byte *)(iVar3 + 8);
  puVar7[0xc] = bVar13;
  puVar7[0xb] = 0xf9;
  puVar7[9] = bVar2 + 4;
  puVar7[8] = 0xf2;
  if (param_2 < 0) {
    iVar4 = 0xd;
  }
  puVar7[10] = bVar15 & 0x7c | 0x81;
  iVar8 = DAT_000eb030;
  if (param_2 >= 0) {
    uVar1 = *(undefined1 *)(iVar3 + 1);
    *unaff_r5 = 0xd;
    unaff_r5[1] = 1;
    *(byte *)(unaff_r5 + 2) = bVar2;
    iVar3 = *(int *)(iVar8 + 0xeae9e);
    if (uVar17 != 0) {
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_r5 + 3) = uVar1;
    uVar6 = iVar3 + 1;
    uVar17 = *param_11;
    *(undefined1 *)((int)unaff_r5 + 0xe) = uVar16;
    if (0x7f < uVar6) {
      uVar6 = 0;
    }
    *(char *)((int)unaff_r5 + 0xd) = (char)uVar17;
    *(uint *)(iVar8 + 0xeae9e) = uVar6;
    if (param_2 < 0x80) {
      local_28 = 0xb;
      local_2c = 10;
      local_30 = 9;
      iVar8 = 1;
      iVar4 = 0xe;
      iVar9 = 0xd;
      local_40 = 6;
      local_3c = 7;
      local_38 = 8;
      iVar10 = 0xc;
      iVar11 = 5;
      iVar12 = 4;
      iVar18 = 3;
      iVar14 = 2;
      uVar6 = 0;
    }
    else {
      uVar17 = 0;
      do {
        param_10[uVar17] = (byte)param_2 & 0x7f;
        uVar6 = uVar17 + 1;
        iVar5 = param_2 >> 7;
        if (iVar5 < 0x80 || 1 < uVar6) break;
        param_10[uVar6] = (byte)iVar5 & 0x7f;
        uVar6 = uVar17 + 2;
        iVar5 = param_2 >> 0xe;
        if (iVar5 < 0x80 || 1 < uVar6) break;
        param_10[uVar6] = (byte)iVar5 & 0x7f;
        uVar6 = uVar17 + 3;
        iVar5 = param_2 >> 0x15;
        if (iVar5 < 0x80 || 1 < uVar6) break;
        param_10[uVar6] = (byte)iVar5 & 0x7f;
        uVar17 = uVar17 + 4;
        param_2 = param_2 >> 0x1c;
        iVar5 = param_2;
        uVar6 = uVar17;
      } while (0x7f < param_2 && uVar17 < 2);
      local_40 = uVar6 + 6;
      local_3c = uVar6 + 7;
      local_38 = uVar6 + 8;
      local_30 = uVar6 + 9;
      iVar14 = uVar6 + 2;
      local_2c = uVar6 + 10;
      local_28 = uVar6 + 0xb;
      iVar18 = uVar6 + 3;
      iVar12 = uVar6 + 4;
      iVar11 = uVar6 + 5;
      iVar10 = uVar6 + 0xc;
      iVar9 = uVar6 + 0xd;
      iVar4 = uVar6 + 0xe;
      iVar8 = uVar6 + 1;
      param_2 = iVar5;
    }
    param_10[uVar6] = (byte)param_2 | 0x80;
    param_10[iVar8] = 0xa7;
    param_10[iVar14] = 0x80;
    param_10[iVar18] = 0x80;
    param_10[iVar12] = 0xa7;
    param_10[iVar11] = 0x80;
    param_10[local_40] = 0x80;
    param_10[local_3c] = 0xa2;
    param_10[local_38] = '\x0f';
    param_10[local_30] = (byte)iVar3 | 0x80;
    param_10[local_2c] = 0x80;
    param_10[local_28] = 0x98;
    param_10[iVar10] = bVar2 & 3 | 0xc;
    param_10[iVar9] = (byte)param_4 | 0x80;
  }
  return iVar4;
}

