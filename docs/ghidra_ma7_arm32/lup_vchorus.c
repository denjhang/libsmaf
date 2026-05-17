/* lup_vchorus @ 000fd53c 1092B */


/* YAMAHA::lup_vchorus(unsigned char) */

void YAMAHA::lup_vchorus(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uchar uVar7;
  ushort uVar8;
  undefined2 uVar9;
  short sVar10;
  uint uVar11;
  uchar uVar12;
  byte *pbVar13;
  uchar uVar14;
  uchar uVar15;
  short sVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  undefined1 *puVar20;
  uchar *puVar21;
  int iVar22;
  short sVar23;
  undefined2 uVar24;
  short sVar25;
  uchar uVar26;
  
  iVar6 = DAT_000fd9bc;
  iVar5 = DAT_000fd99c;
  iVar22 = DAT_000fd990;
  iVar19 = DAT_000fd984;
  iVar17 = DAT_000fd980 + 0xfd54c;
  if (param_1 < 9) {
    if (param_1 < 7) {
      if (param_1 == '\x02') {
        iVar19 = *(int *)(iVar17 + DAT_000fd984);
        uVar8 = *(ushort *)(iVar19 + 0x30a);
        if (uVar8 == 0) {
          uVar8 = 1;
          *(undefined2 *)(iVar19 + 0x30a) = 1;
        }
        else if (0x7f < uVar8) {
          uVar8 = 0x7f;
          *(undefined2 *)(iVar19 + 0x30a) = 0x7f;
        }
        pbVar18 = *(byte **)(iVar17 + DAT_000fd998);
        bVar2 = *pbVar18;
        bVar1 = pbVar18[1];
        uVar9 = lcal_fb_cho(uVar8);
        *(undefined2 *)(iVar19 + (uint)bVar1 * 2 + 0x26) = uVar9;
        *(undefined2 *)(iVar19 + (uint)bVar2 * 2 + 0x26) = uVar9;
        LSendCoef('\x02',pbVar18);
        return;
      }
      if (param_1 < 3) {
        if (param_1 == '\0') {
          uVar8 = *(ushort *)(*(int *)(iVar17 + DAT_000fd984) + 0x306);
          if (uVar8 < 0x80) {
            uVar14 = (uchar)uVar8;
          }
          else {
            uVar14 = '\x7f';
            *(undefined2 *)(*(int *)(iVar17 + DAT_000fd984) + 0x306) = 0x7f;
          }
          lset_lfo(uVar14,*(uchar **)(iVar17 + iVar5),*(uchar **)(iVar17 + iVar5));
          return;
        }
        if (param_1 != '\x01') {
          return;
        }
        iVar19 = *(int *)(iVar17 + DAT_000fd984);
        if (*(ushort *)(iVar19 + 0x308) < 0x80) {
          uVar11 = ((int)((ulonglong)
                          ((longlong)(int)((*(ushort *)(iVar19 + 0x308) & 0x7f) * 0x100) *
                          0x81020409) >> 0x20) << 0xd) >> 0x10 & 0xfffffff8;
          uVar9 = (undefined2)uVar11;
          if (0x7ff < uVar11) {
            uVar9 = 0x800;
          }
        }
        else {
          uVar9 = 0x800;
          *(undefined2 *)(iVar19 + 0x308) = 0x7f;
        }
        pbVar18 = *(byte **)(iVar17 + DAT_000fd988);
        bVar1 = *pbVar18;
        *(undefined2 *)(iVar19 + (uint)pbVar18[1] * 2 + 0x26) = uVar9;
        *(undefined2 *)(iVar19 + (uint)bVar1 * 2 + 0x26) = uVar9;
        LSendCoef('\x02',pbVar18);
        if (*(uint *)(iVar19 + 0xc) < 6) {
          return;
        }
        pbVar18 = pbVar18 + 2;
        *(undefined2 *)(iVar19 + (uint)*pbVar18 * 2 + 0x26) = uVar9;
        goto LAB_000fd5d6;
      }
      if (param_1 == '\x03') {
        iVar19 = *(int *)(iVar17 + DAT_000fd984);
        uVar11 = (uint)*(ushort *)(iVar19 + 0x30c);
        if (0x68 < uVar11) {
          uVar11 = 0x68;
          *(undefined2 *)(iVar19 + 0x30c) = 0x68;
        }
        goto LAB_000fd746;
      }
      if (param_1 < 5) {
        return;
      }
      lchk_prm(1,5);
      uVar26 = '\0';
      uVar7 = '\x01';
      puVar21 = *(uchar **)(iVar17 + DAT_000fd994);
      uVar12 = '\x02';
      uVar14 = *(uchar *)(*(int *)(iVar17 + iVar19) + 0x310);
      uVar15 = *(uchar *)(*(int *)(iVar17 + iVar19) + 0x312);
    }
    else {
      lchk_prm(0,7);
      uVar7 = '\x01';
      uVar12 = '\x03';
      uVar26 = '\0';
      puVar21 = *(uchar **)(iVar17 + DAT_000fd9b4);
      uVar14 = *(uchar *)(*(int *)(iVar17 + DAT_000fd984) + 0x314);
      uVar15 = *(uchar *)(*(int *)(iVar17 + DAT_000fd984) + 0x316);
      iVar22 = DAT_000fd9b8;
    }
LAB_000fd6bc:
    lset_iir(uVar7,uVar12,uVar14,uVar15,uVar26,puVar21,*(uchar **)(iVar17 + iVar22));
  }
  else {
    if (param_1 < 0xd) {
      if (9 < param_1) {
        lchk_prm(2,10);
        iVar19 = *(int *)(iVar17 + iVar19);
        uVar7 = '\x02';
        uVar12 = '\n';
        uVar26 = *(uchar *)(iVar19 + 0x31e);
        uVar14 = *(uchar *)(iVar19 + 0x31a);
        uVar15 = *(uchar *)(iVar19 + 0x31c);
        puVar21 = *(uchar **)(iVar17 + iVar6);
        iVar22 = DAT_000fd9c0;
        goto LAB_000fd6bc;
      }
      iVar19 = *(int *)(iVar17 + DAT_000fd984);
    }
    else {
      if (param_1 != '\x0e') {
        if (param_1 != 0xff) {
          return;
        }
        puVar20 = *(undefined1 **)(iVar17 + DAT_000fd98c);
        uVar24 = 0xaa80;
        uVar9 = 0x5540;
        *puVar20 = 1;
        iVar19 = *(int *)(iVar17 + iVar19);
        *(undefined2 *)(iVar19 + 0xd8) = 0x7fff;
        *(undefined2 *)(iVar19 + 0xd2) = 0x7fff;
        if (*(uint *)(iVar19 + 0xc) < 6) {
          uVar9 = 0;
          uVar24 = 0x7fff;
        }
        *(undefined2 *)(iVar19 + 0xc2) = 0x7fff;
        *(undefined2 *)(iVar19 + 0xbc) = 0x7fff;
        *(undefined2 *)(iVar19 + 0x9c) = 0x7fff;
        *(undefined2 *)(iVar19 + 0x96) = 0x7fff;
        *(undefined2 *)(iVar19 + 0x82) = 0x7fff;
        *(undefined2 *)(iVar19 + 0x7c) = 0x7fff;
        *(undefined2 *)(iVar19 + 0x56) = 0x7fff;
        *(undefined2 *)(iVar19 + 0xe8) = 0x7fff;
        *(undefined2 *)(iVar19 + 0x58) = uVar24;
        *(undefined2 *)(iVar19 + 0x5a) = uVar9;
        *(undefined2 *)(iVar19 + 0x6c) = 0x8000;
        *(undefined2 *)(iVar19 + 0x5e) = 0x8000;
        *(undefined2 *)(iVar19 + 0x6e) = 0x148;
        *(undefined2 *)(iVar19 + 0x68) = 0x148;
        *(undefined2 *)(iVar19 + 100) = 0x548;
        *(undefined2 *)(iVar19 + 0x6a) = 0x548;
        lup_vchorus('\0');
        lup_vchorus('\x01');
        lup_vchorus('\x02');
        lup_vchorus('\x03');
        *puVar20 = 0;
        return;
      }
      iVar19 = *(int *)(iVar17 + DAT_000fd984);
      uVar11 = (uint)*(ushort *)(iVar19 + 0x30c);
LAB_000fd746:
      iVar22 = DAT_000fd9a0;
      if (1 < *(ushort *)(iVar19 + 0x322)) {
        *(undefined2 *)(iVar19 + 0x322) = 1;
      }
      iVar22 = *(int *)(iVar17 + iVar22);
      uVar11 = lcal_dly10(*(ushort *)(iVar22 + uVar11 * 2));
      if (uVar11 < 0x2ba) {
        sVar10 = lcal_dly10(*(ushort *)(iVar22 + (uint)*(ushort *)(iVar19 + 0x30c) * 2));
        sVar23 = sVar10 + 1;
        sVar16 = sVar23 * 8;
        sVar25 = (sVar10 + 0x42) * 8;
      }
      else {
        sVar25 = 0x17e0;
        sVar16 = 0x15d8;
        sVar23 = 699;
        sVar10 = 0x2ba;
      }
      sVar4 = *(short *)(iVar19 + 0x322);
      pbVar18 = *(byte **)(iVar17 + DAT_000fd9a4);
      bVar1 = pbVar18[1];
      *(short *)(iVar19 + (uint)*pbVar18 * 2 + 0x26) = sVar16;
      *(short *)(iVar19 + (uint)bVar1 * 2 + 0x26) = sVar25;
      if (sVar4 == 0) {
        sVar23 = sVar10 + -0x3ff;
        sVar16 = sVar23 * 8;
        pbVar13 = *(byte **)(iVar17 + DAT_000fd9a8);
        bVar1 = pbVar13[1];
        *(undefined2 *)(iVar19 + (uint)*pbVar13 * 2 + 0x26) = 0x4000;
        *(undefined2 *)(iVar19 + (uint)bVar1 * 2 + 0x26) = 0x4000;
      }
      else {
        pbVar13 = *(byte **)(iVar17 + DAT_000fd9a8);
        bVar1 = pbVar13[1];
        *(undefined2 *)(iVar19 + (uint)*pbVar13 * 2 + 0x26) = 0x7fff;
        *(undefined2 *)(iVar19 + (bVar1 + 0x10) * 2 + 6) = 0;
      }
      bVar1 = pbVar18[3];
      *(short *)(iVar19 + (uint)pbVar18[2] * 2 + 0x26) = sVar16;
      *(short *)(iVar19 + (uint)bVar1 * 2 + 0x26) = (sVar23 + 0x41) * 8;
      LSendCoef('\x02',pbVar13);
      LSendCoef('\x04',pbVar18);
      lup_vchorus('\x05');
      lup_vchorus('\a');
      lup_vchorus('\n');
    }
    uVar11 = (uint)*(ushort *)(iVar19 + 0x318);
    if (uVar11 == 0) {
      uVar11 = 1;
      *(undefined2 *)(iVar19 + 0x318) = 1;
    }
    else if (0x7f < uVar11) {
      uVar11 = 0x7f;
      *(undefined2 *)(iVar19 + 0x318) = 0x7f;
    }
    if ((int)((uint)*(ushort *)(iVar19 + 0x358) << 0x1f) < 0) {
      sVar16 = 0x4000;
      uVar9 = 0;
    }
    else {
      sVar16 = (short)((uint)((int)*(short *)(*(int *)(iVar17 + DAT_000fd9ac) + uVar11 * 2) << 0xe)
                      >> 0x10);
      uVar9 = (undefined2)
              (((int)*(short *)(*(int *)(iVar17 + DAT_000fd9ac) + (0x80 - uVar11) * 2) & 0x3ffffU)
              >> 2);
    }
    pbVar18 = *(byte **)(iVar17 + DAT_000fd9b0);
    bVar2 = *pbVar18;
    bVar3 = pbVar18[1];
    bVar1 = pbVar18[4];
    *(undefined2 *)(iVar19 + (uint)pbVar18[3] * 2 + 0x26) = uVar9;
    *(undefined2 *)(iVar19 + (uint)bVar2 * 2 + 0x26) = uVar9;
    uVar9 = lcal_adj_var(sVar16);
    *(undefined2 *)(iVar19 + (uint)bVar1 * 2 + 0x26) = uVar9;
    *(undefined2 *)(iVar19 + (uint)bVar3 * 2 + 0x26) = uVar9;
    LSendCoef('\x02',pbVar18);
    LSendCoef('\x02',pbVar18 + 3);
    if (5 < *(uint *)(iVar19 + 0xc)) {
      bVar1 = pbVar18[2];
      bVar2 = pbVar18[5];
      uVar9 = lcal_adj_var(sVar16);
      *(undefined2 *)(iVar19 + (uint)bVar2 * 2 + 0x26) = uVar9;
      *(undefined2 *)(iVar19 + (uint)bVar1 * 2 + 0x26) = uVar9;
      LSendCoef('\x01',pbVar18 + 2);
      pbVar18 = pbVar18 + 5;
LAB_000fd5d6:
      LSendCoef('\x01',pbVar18);
      return;
    }
  }
  return;
}

