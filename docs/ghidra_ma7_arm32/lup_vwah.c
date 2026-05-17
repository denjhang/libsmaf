/* lup_vwah @ 000ffa4c 788B */


/* YAMAHA::lup_vwah(unsigned char) */

void YAMAHA::lup_vwah(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined2 uVar8;
  uchar uVar9;
  byte *pbVar10;
  uchar uVar11;
  uint uVar12;
  uchar uVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uchar *puVar20;
  
  iVar5 = DAT_000ffd8c;
  iVar16 = DAT_000ffd7c;
  iVar17 = DAT_000ffd64;
  iVar14 = DAT_000ffd60 + 0xffa5a;
  if (6 < param_1) {
    if (param_1 == '\t') {
      iVar17 = *(int *)(iVar14 + DAT_000ffd64);
      uVar18 = (uint)*(ushort *)(iVar17 + 0x318);
      if (uVar18 == 0) {
        uVar18 = 1;
        *(undefined2 *)(iVar17 + 0x318) = 1;
      }
      else if (0x7f < uVar18) {
        uVar18 = 0x7f;
        *(undefined2 *)(iVar17 + 0x318) = 0x7f;
      }
      if ((int)((uint)*(ushort *)(iVar17 + 0x358) << 0x1f) < 0) {
        sVar7 = 0x4000;
        uVar8 = 0;
      }
      else {
        sVar7 = (short)((uint)((int)*(short *)(*(int *)(iVar14 + DAT_000ffd84) + uVar18 * 2) << 0xe)
                       >> 0x10);
        uVar8 = (undefined2)
                (((int)*(short *)(*(int *)(iVar14 + DAT_000ffd84) + (0x80 - uVar18) * 2) & 0x3ffffU)
                >> 2);
      }
      iVar16 = *(int *)(iVar14 + DAT_000ffd88);
      bVar3 = *(byte *)(iVar16 + 2);
      bVar1 = *(byte *)(iVar16 + 4);
      bVar2 = *(byte *)(iVar16 + 5);
      *(undefined2 *)(iVar17 + (uint)*(byte *)(iVar16 + 3) * 2 + 0x26) = uVar8;
      *(undefined2 *)(iVar17 + (uint)bVar3 * 2 + 0x26) = uVar8;
      uVar8 = lcal_adj_var(sVar7);
      *(undefined2 *)(iVar17 + (uint)bVar2 * 2 + 0x26) = uVar8;
      *(undefined2 *)(iVar17 + (uint)bVar1 * 2 + 0x26) = uVar8;
      LSendCoef('\x04',(uchar *)(iVar16 + 2));
      return;
    }
    if (8 < param_1) {
      if (param_1 == 0xff) {
        puVar19 = *(undefined1 **)(iVar14 + DAT_000ffd6c);
        *puVar19 = 1;
        iVar17 = *(int *)(iVar14 + iVar17);
        *(undefined2 *)(iVar17 + 0x52) = 0x80;
        *(undefined2 *)(iVar17 + 0xea) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xe8) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xe4) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xe0) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xd0) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xcc) = 0x7fff;
        *(undefined2 *)(iVar17 + 200) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xc4) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xc0) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xbc) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x7a) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x76) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x72) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x6e) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x6a) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xb2) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xae) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x9e) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x9a) = 0x7fff;
        *(undefined2 *)(iVar17 + 100) = 0x7fff;
        *(undefined2 *)(iVar17 + 0xd6) = 0x7fff;
        *(undefined2 *)(iVar17 + 0x5c) = 0x2000;
        *(undefined2 *)(iVar17 + 0x5a) = 0x2000;
        *(undefined2 *)(iVar17 + 0x7c) = 0x8000;
        *(undefined2 *)(iVar17 + 0x78) = 0x8000;
        *(undefined2 *)(iVar17 + 0xec) = 0x8000;
        *(undefined2 *)(iVar17 + 0x50) = 0x4000;
        *(undefined2 *)(iVar17 + 0x62) = 0;
        *(undefined2 *)(iVar17 + 0xd4) = 0;
        lup_vwah('\0');
        lup_vwah('\x01');
        lup_vwah('\x03');
        lup_vwah('\x05');
        lup_vwah('\a');
        lup_vwah('\t');
        *puVar19 = 0;
      }
      return;
    }
    lchk_prm(0,7);
    iVar17 = *(int *)(iVar14 + iVar17);
    uVar9 = '\x03';
    uVar11 = *(uchar *)(iVar17 + 0x314);
    puVar20 = *(uchar **)(iVar14 + iVar16);
    uVar13 = *(uchar *)(iVar17 + 0x316);
    iVar17 = DAT_000ffd80;
LAB_000ffc40:
    lset_iir('\x01',uVar9,uVar11,uVar13,'\0',puVar20,*(uchar **)(iVar14 + iVar17));
    return;
  }
  if (4 < param_1) {
    lchk_prm(1,5);
    uVar9 = '\x02';
    puVar20 = *(uchar **)(iVar14 + DAT_000ffd90);
    uVar11 = *(uchar *)(*(int *)(iVar14 + DAT_000ffd64) + 0x310);
    uVar13 = *(uchar *)(*(int *)(iVar14 + DAT_000ffd64) + 0x312);
    iVar17 = DAT_000ffd94;
    goto LAB_000ffc40;
  }
  if (param_1 == '\x01') {
    iVar17 = *(int *)(iVar14 + DAT_000ffd64);
    uVar18 = (uint)*(ushort *)(iVar17 + 0x308);
    if (0x7f < uVar18) {
      uVar18 = 0x7f;
      *(undefined2 *)(iVar17 + 0x308) = 0x7f;
    }
LAB_000ffb8e:
    iVar6 = DAT_000ffd78;
    iVar5 = DAT_000ffd74;
    iVar16 = DAT_000ffd70;
    uVar12 = (uint)*(ushort *)(iVar17 + 0x30a);
    if (0x7f < uVar12) {
      uVar12 = 0x7f;
      *(undefined2 *)(iVar17 + 0x30a) = 0x7f;
    }
    pbVar10 = *(byte **)(iVar14 + iVar5);
    sVar7 = *(short *)(*(int *)(iVar14 + iVar16) + uVar12 * 2);
    *(short *)(iVar17 + (uint)*pbVar10 * 2 + 0x26) = -sVar7;
    pbVar15 = *(byte **)(iVar14 + iVar6);
    *(short *)(iVar17 + (uint)*pbVar15 * 2 + 0x26) = (short)((uVar18 * (sVar7 + 0x8000)) / 0x7f);
    LSendCoef('\x01',pbVar10);
    LSendCoef('\x01',pbVar15);
    return;
  }
  if (param_1 == '\0') {
    uVar4 = *(ushort *)(*(int *)(iVar14 + DAT_000ffd64) + 0x306);
    if (uVar4 < 0x80) {
      uVar11 = (uchar)uVar4;
    }
    else {
      uVar11 = '\x7f';
      *(undefined2 *)(*(int *)(iVar14 + DAT_000ffd64) + 0x306) = 0x7f;
    }
    lset_lfo(uVar11,*(uchar **)(iVar14 + iVar5),*(uchar **)(iVar14 + iVar5));
    return;
  }
  if (param_1 == '\x02') {
    iVar17 = *(int *)(iVar14 + DAT_000ffd64);
    uVar18 = (uint)*(ushort *)(iVar17 + 0x308);
    goto LAB_000ffb8e;
  }
  if (param_1 != '\x03') {
    return;
  }
  iVar17 = *(int *)(iVar14 + DAT_000ffd64);
  uVar4 = *(ushort *)(iVar17 + 0x30c);
  if (uVar4 < 0x79) {
    if (uVar4 < 10) {
      *(undefined2 *)(iVar17 + 0x30c) = 10;
    }
    else if (uVar4 != 10) {
      uVar8 = __divsi3(0xfffb0000);
      goto LAB_000ffa8e;
    }
    pbVar10 = *(byte **)(iVar14 + DAT_000ffd68);
    bVar1 = *pbVar10;
    *(undefined2 *)(iVar17 + (uint)pbVar10[1] * 2 + 0x26) = 0x8000;
    *(undefined2 *)(iVar17 + (uint)bVar1 * 2 + 0x26) = 0x8000;
  }
  else {
    uVar8 = 0xf556;
    *(undefined2 *)(iVar17 + 0x30c) = 0x78;
LAB_000ffa8e:
    pbVar10 = *(byte **)(iVar14 + DAT_000ffd68);
    bVar1 = *pbVar10;
    *(undefined2 *)(iVar17 + (uint)pbVar10[1] * 2 + 0x26) = uVar8;
    *(undefined2 *)(iVar17 + (uint)bVar1 * 2 + 0x26) = uVar8;
  }
  LSendCoef('\x02',pbVar10);
  return;
}

