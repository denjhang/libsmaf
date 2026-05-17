/* lup_vamb @ 000fe924 598B */


/* YAMAHA::lup_vamb(unsigned char) */

void YAMAHA::lup_vamb(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  undefined1 *puVar16;
  uchar *puVar17;
  short sVar18;
  
  iVar6 = DAT_000feb98;
  iVar15 = DAT_000feb80;
  iVar13 = DAT_000feb7c + 0xfe930;
  if (param_1 < 7) {
    if (4 < param_1) {
      lchk_prm(1,5);
      uVar8 = '\x02';
      puVar17 = *(uchar **)(iVar13 + DAT_000feb90);
      uVar9 = *(uchar *)(*(int *)(iVar13 + DAT_000feb80) + 0x310);
      uVar10 = *(uchar *)(*(int *)(iVar13 + DAT_000feb80) + 0x312);
      iVar15 = DAT_000feb94;
LAB_000feae8:
      lset_iir('\x01',uVar8,uVar9,uVar10,'\0',puVar17,*(uchar **)(iVar13 + iVar15));
      return;
    }
    if (param_1 == '\0') {
      iVar15 = *(int *)(iVar13 + DAT_000feb80);
      uVar12 = (uint)*(ushort *)(iVar15 + 0x306);
      if (0x6c < uVar12) {
        uVar12 = 0x6c;
        *(undefined2 *)(iVar15 + 0x306) = 0x6c;
      }
      uVar7 = lcal_dly10(*(ushort *)(*(int *)(iVar13 + iVar6) + uVar12 * 2));
      iVar6 = DAT_000feb9c;
      uVar12 = 0x3fe;
      if (uVar7 < 0x3fe) {
        uVar12 = uVar7;
      }
      sVar18 = ((short)uVar12 + 1) * 8;
      *(short *)(iVar15 + 0xb6) = sVar18;
      *(short *)(iVar15 + 0x94) = sVar18;
      LSendCoef('\x02',*(uchar **)(iVar13 + iVar6));
      return;
    }
    if (param_1 != '\x01') {
      return;
    }
    iVar15 = *(int *)(iVar13 + DAT_000feb80);
    uVar4 = *(ushort *)(iVar15 + 0x318);
    if (1 < *(ushort *)(iVar15 + 0x308)) {
      *(undefined2 *)(iVar15 + 0x308) = 1;
    }
  }
  else {
    if (param_1 != '\t') {
      if (8 < param_1) {
        if (param_1 != 0xff) {
          return;
        }
        puVar16 = *(undefined1 **)(iVar13 + DAT_000feb8c);
        *puVar16 = 1;
        iVar15 = *(int *)(iVar13 + iVar15);
        *(undefined2 *)(iVar15 + 0xf6) = 0x7fff;
        *(undefined2 *)(iVar15 + 0xf2) = 0x7fff;
        *(undefined2 *)(iVar15 + 0xe2) = 0x7fff;
        *(undefined2 *)(iVar15 + 0xde) = 0x7fff;
        *(undefined2 *)(iVar15 + 0xce) = 0x7fff;
        *(undefined2 *)(iVar15 + 0xba) = 0x7fff;
        *(undefined2 *)(iVar15 + 0xb0) = 0x7fff;
        *(undefined2 *)(iVar15 + 0xa8) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x9e) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x90) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x86) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x7e) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x74) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x72) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x6a) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x60) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x54) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x58) = 0x8000;
        *(undefined2 *)(iVar15 + 0xb4) = 0x8000;
        *(undefined2 *)(iVar15 + 0x92) = 0x8000;
        *(undefined2 *)(iVar15 + 0xb6) = 8;
        *(undefined2 *)(iVar15 + 0x94) = 8;
        *(undefined2 *)(iVar15 + 0x100) = 0x4000;
        *(undefined2 *)(iVar15 + 0xfe) = 0x4000;
        lup_vamb('\0');
        lup_vamb('\x01');
        lup_vamb('\x05');
        lup_vamb('\a');
        *puVar16 = 0;
        return;
      }
      lchk_prm(0,7);
      uVar8 = '\x03';
      puVar17 = *(uchar **)(iVar13 + DAT_000feba0);
      uVar9 = *(uchar *)(*(int *)(iVar13 + DAT_000feb80) + 0x314);
      uVar10 = *(uchar *)(*(int *)(iVar13 + DAT_000feb80) + 0x316);
      iVar15 = DAT_000feba4;
      goto LAB_000feae8;
    }
    iVar15 = *(int *)(iVar13 + DAT_000feb80);
    uVar4 = *(ushort *)(iVar15 + 0x318);
  }
  uVar12 = (uint)uVar4;
  if (uVar12 == 0) {
    uVar12 = 1;
    *(undefined2 *)(iVar15 + 0x318) = 1;
  }
  else if (0x7f < uVar12) {
    uVar12 = 0x7f;
    *(undefined2 *)(iVar15 + 0x318) = 0x7f;
  }
  if ((int)((uint)*(ushort *)(iVar15 + 0x358) << 0x1f) < 0) {
    sVar18 = 0x4000;
    uVar11 = 0;
  }
  else {
    sVar18 = (short)((uint)((int)*(short *)(*(int *)(iVar13 + DAT_000feb84) + uVar12 * 2) << 0xe) >>
                    0x10);
    uVar11 = (undefined2)
             (((int)*(short *)(*(int *)(iVar13 + DAT_000feb84) + (0x80 - uVar12) * 2) & 0x3ffffU) >>
             2);
  }
  pbVar14 = *(byte **)(iVar13 + DAT_000feb88);
  bVar3 = *pbVar14;
  bVar1 = pbVar14[1];
  bVar2 = pbVar14[4];
  *(undefined2 *)(iVar15 + (uint)pbVar14[3] * 2 + 0x26) = uVar11;
  *(undefined2 *)(iVar15 + (uint)bVar3 * 2 + 0x26) = uVar11;
  iVar6 = lcal_adj_var(sVar18);
  sVar18 = *(short *)(iVar15 + 0x308);
  iVar13 = iVar15 + (bVar2 + 0x10) * 2;
  iVar15 = iVar15 + (bVar1 + 0x10) * 2;
  sVar5 = (short)iVar6;
  *(short *)(iVar13 + 6) = sVar5;
  *(short *)(iVar15 + 6) = sVar5;
  if (sVar18 == 0) {
    if (-1 < (int)((uint)*(ushort *)(iVar13 + 6) << 0x10)) {
      *(ushort *)(iVar13 + 6) = -*(ushort *)(iVar13 + 6);
    }
  }
  else if ((sVar18 == 1) && (-1 < iVar6)) {
    *(short *)(iVar15 + 6) = -sVar5;
  }
  LSendCoef('\x01',pbVar14);
  LSendCoef('\x01',pbVar14 + 3);
  LSendCoef('\x01',pbVar14 + 1);
  LSendCoef('\x01',pbVar14 + 4);
  return;
}

