/* lup_vpan @ 000fe3c8 724B */


/* YAMAHA::lup_vpan(unsigned char) */

void YAMAHA::lup_vpan(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uchar uVar6;
  char cVar7;
  short sVar8;
  undefined2 uVar9;
  uchar uVar10;
  uchar uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uchar *puVar17;
  
  iVar5 = DAT_000fe6cc;
  iVar4 = DAT_000fe6c0;
  iVar14 = DAT_000fe6b0;
  iVar13 = DAT_000fe6a0;
  iVar12 = DAT_000fe69c + 0xfe3d6;
  if (6 < param_1) {
    if (param_1 == '\t') {
      iVar14 = *(int *)(iVar12 + DAT_000fe6a0);
      iVar13 = *(int *)(iVar12 + DAT_000fe6c8);
      bVar2 = *(byte *)(iVar13 + 1);
      bVar1 = *(byte *)(iVar13 + 4);
      if ((*(ushort *)(iVar14 + 0x358) & 1) == 0) {
        sVar8 = 0x2000;
      }
      else {
        sVar8 = 0x4000;
      }
      uVar9 = lcal_adj_var(sVar8);
      *(undefined2 *)(iVar14 + (uint)bVar1 * 2 + 0x26) = uVar9;
      *(undefined2 *)(iVar14 + (uint)bVar2 * 2 + 0x26) = uVar9;
      LSendCoef('\x01',(uchar *)(iVar13 + 1));
      LSendCoef('\x01',(uchar *)(iVar13 + 4));
      return;
    }
    if (8 < param_1) {
      if (param_1 != 0xff) {
        return;
      }
      puVar16 = *(undefined1 **)(iVar12 + DAT_000fe6bc);
      *puVar16 = 1;
      iVar13 = *(int *)(iVar12 + iVar13);
      *(undefined2 *)(iVar13 + 0xf6) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xf2) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xe2) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xde) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xce) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xba) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xb0) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xa8) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x9e) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x90) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x86) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x7e) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x74) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x72) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x6a) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x60) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x54) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x58) = 0x8000;
      *(undefined2 *)(iVar13 + 0xb4) = 0x8000;
      *(undefined2 *)(iVar13 + 0x92) = 0x8000;
      *(undefined2 *)(iVar13 + 0xb6) = 8;
      *(undefined2 *)(iVar13 + 0x94) = 8;
      *(undefined2 *)(iVar13 + 0xfe) = 0x4000;
      *(undefined2 *)(iVar13 + 0x100) = 0x4000;
      *(undefined2 *)(iVar13 + 0x274) = 2;
      *(undefined2 *)(iVar13 + 0x282) = 2;
      *(undefined2 *)(iVar13 + 0x276) = 3;
      *(undefined2 *)(iVar13 + 0x284) = 3;
      lup_vpan('\0');
      lup_vpan('\x03');
      lup_vpan('\x05');
      lup_vpan('\a');
      lup_vpan('\t');
      *puVar16 = 0;
      return;
    }
    lchk_prm(0,7);
    uVar10 = '\x03';
    puVar17 = *(uchar **)(iVar12 + DAT_000fe6b4);
    uVar6 = *(uchar *)(*(int *)(iVar12 + iVar13) + 0x314);
    uVar11 = *(uchar *)(*(int *)(iVar12 + iVar13) + 0x316);
    iVar13 = DAT_000fe6b8;
LAB_000fe49a:
    lset_iir('\x01',uVar10,uVar6,uVar11,'\0',puVar17,*(uchar **)(iVar12 + iVar13));
    return;
  }
  if (4 < param_1) {
    lchk_prm(1,5);
    uVar10 = '\x02';
    uVar6 = *(uchar *)(*(int *)(iVar12 + iVar13) + 0x310);
    puVar17 = *(uchar **)(iVar12 + iVar4);
    uVar11 = *(uchar *)(*(int *)(iVar12 + iVar13) + 0x312);
    iVar13 = DAT_000fe6c4;
    goto LAB_000fe49a;
  }
  if (param_1 == '\x01') {
    uVar3 = *(ushort *)(*(int *)(iVar12 + DAT_000fe6a0) + 0x308);
    if (uVar3 < 0x80) {
      cVar7 = (char)uVar3;
    }
    else {
      cVar7 = '\x7f';
      *(undefined2 *)(*(int *)(iVar12 + DAT_000fe6a0) + 0x308) = 0x7f;
    }
    lset_lfoad((int)cVar7,*(int *)(iVar12 + iVar14),*(int *)(iVar12 + iVar14) + 2);
    return;
  }
  if (param_1 == '\0') {
    iVar13 = *(int *)(iVar12 + DAT_000fe6a0);
    if (*(ushort *)(iVar13 + 0x306) < 0x80) {
      uVar6 = (uchar)*(ushort *)(iVar13 + 0x306);
    }
    else {
      uVar6 = '\x7f';
      *(undefined2 *)(iVar13 + 0x306) = 0x7f;
    }
    lset_lfo(uVar6,*(uchar **)(iVar12 + iVar5),*(uchar **)(iVar12 + iVar5));
    if (4 < *(ushort *)(iVar13 + 0x30c)) {
      return;
    }
    lset_lfowf('\x01',*(uchar *)(iVar13 + 0x306),*(uchar **)(iVar12 + DAT_000fe6ac),
               *(uchar **)(iVar12 + DAT_000fe6a8));
    return;
  }
  if (param_1 == '\x02') {
    iVar13 = *(int *)(iVar12 + DAT_000fe6a0);
    goto LAB_000fe43a;
  }
  if (param_1 != '\x03') {
    return;
  }
  iVar13 = *(int *)(iVar12 + DAT_000fe6a0);
  uVar15 = (uint)*(ushort *)(iVar13 + 0x30c);
  if (uVar15 < 6) {
    if (uVar15 == 5) goto LAB_000fe406;
    if (uVar15 == 4) {
      uVar11 = '^';
      uVar6 = '@';
    }
    else {
      uVar6 = *(uchar *)(DAT_000fe6d0 + 0xfe68c + uVar15);
      uVar11 = *(uchar *)(DAT_000fe6d0 + 0xfe68c + uVar15 + 4);
    }
    puVar17 = *(uchar **)(iVar12 + DAT_000fe6a4) + 1;
    lset_lfoph(uVar6,*(uchar **)(iVar12 + DAT_000fe6a4),puVar17);
    lset_lfoph(uVar11,puVar17,puVar17);
    lset_lfowf('\x01',*(uchar *)(iVar13 + 0x306),*(uchar **)(iVar12 + DAT_000fe6ac),
               *(uchar **)(iVar12 + DAT_000fe6a8));
  }
  else {
    *(undefined2 *)(iVar13 + 0x30c) = 5;
LAB_000fe406:
    iVar14 = DAT_000fe6a8;
    puVar17 = *(uchar **)(iVar12 + DAT_000fe6a4);
    lset_lfoph('@',puVar17,puVar17);
    lset_lfoph('|',puVar17 + 1,puVar17 + 1);
    lset_lfowf('\x02',*(uchar *)(iVar13 + 0x306),*(uchar **)(iVar12 + DAT_000fe6ac),
               *(uchar **)(iVar12 + iVar14));
  }
  lup_vpan('\x01');
LAB_000fe43a:
  iVar14 = DAT_000fe6b0;
  uVar15 = (uint)*(ushort *)(iVar13 + 0x30a);
  if (0x7f < uVar15) {
    uVar15 = 0x7f;
    *(undefined2 *)(iVar13 + 0x30a) = 0x7f;
  }
  if ((ushort)(*(short *)(iVar13 + 0x30c) - 3U) < 2) {
    uVar6 = (uchar)((uVar15 & 0x1ff) >> 1);
  }
  else {
    uVar6 = '\0';
  }
  lset_lfopd(uVar6,(uchar *)(*(int *)(iVar12 + iVar14) + 1),(uchar *)(*(int *)(iVar12 + iVar14) + 3)
            );
  return;
}

