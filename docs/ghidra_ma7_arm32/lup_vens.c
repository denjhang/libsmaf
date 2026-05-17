/* lup_vens @ 000ff18c 962B */


/* YAMAHA::lup_vens(unsigned char) */

void YAMAHA::lup_vens(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  int iVar17;
  int unaff_lr;
  bool bVar18;
  
  iVar17 = DAT_000ff568;
  iVar9 = DAT_000ff564;
  iVar13 = DAT_000ff554;
  iVar12 = DAT_000ff550 + 0xff198;
  if (param_1 == '\x02') {
    iVar13 = *(int *)(iVar12 + DAT_000ff554);
LAB_000ff1c4:
    if (*(short *)(iVar13 + 0x30a) != 0) {
      *(undefined2 *)(iVar13 + 0x30a) = 0;
    }
    *(undefined2 *)(iVar13 + 0xb2) = 0x28;
    *(undefined2 *)(iVar13 + 0xb6) = 0x30;
    return;
  }
  if (2 < param_1) {
    if (param_1 == '\t') {
      iVar13 = *(int *)(iVar12 + DAT_000ff554);
      uVar10 = (uint)*(ushort *)(iVar13 + 0x318);
      if (uVar10 == 0) {
        uVar10 = 1;
        *(undefined2 *)(iVar13 + 0x318) = 1;
      }
      else if (0x7f < uVar10) {
        uVar10 = 0x7f;
        *(undefined2 *)(iVar13 + 0x318) = 0x7f;
      }
      bVar18 = -1 < (int)((uint)*(ushort *)(iVar13 + 0x358) << 0x1f);
      pbVar11 = *(byte **)(iVar12 + DAT_000ff55c);
      if (bVar18) {
        unaff_lr = 0x80 - uVar10;
      }
      if (!bVar18) {
        uVar10 = 0x7f;
      }
      if (!bVar18) {
        unaff_lr = 1;
      }
      bVar1 = *pbVar11;
      sVar4 = *(short *)(*(int *)(iVar12 + DAT_000ff560) + uVar10 * 2);
      bVar2 = pbVar11[2];
      bVar3 = pbVar11[3];
      uVar8 = (undefined2)
              ((uint)((int)*(short *)(*(int *)(iVar12 + DAT_000ff560) + unaff_lr * 2) << 0xe) >>
              0x10);
      *(undefined2 *)(iVar13 + (uint)pbVar11[1] * 2 + 0x26) = uVar8;
      *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = uVar8;
      uVar8 = lcal_adj_var(sVar4 >> 2);
      *(undefined2 *)(iVar13 + (uint)bVar3 * 2 + 0x26) = uVar8;
      *(undefined2 *)(iVar13 + (uint)bVar2 * 2 + 0x26) = uVar8;
      LSendCoef('\x04',pbVar11);
      return;
    }
    if (param_1 == 0xff) {
      puVar16 = *(undefined1 **)(iVar12 + DAT_000ff558);
      *puVar16 = 1;
      iVar13 = *(int *)(iVar12 + iVar13);
      *(undefined2 *)(iVar13 + 0xb4) = 0x8000;
      *(undefined2 *)(iVar13 + 0xb0) = 0x8000;
      *(undefined2 *)(iVar13 + 0x8a) = 0x8000;
      *(undefined2 *)(iVar13 + 0x86) = 0x8000;
      *(undefined2 *)(iVar13 + 0x54) = 0x8000;
      *(undefined2 *)(iVar13 + 0x52) = 0x8000;
      *(undefined2 *)(iVar13 + 0x66) = 0x3200;
      *(undefined2 *)(iVar13 + 0x60) = 0x3200;
      *(undefined2 *)(iVar13 + 0xf6) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xf2) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xe2) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xdc) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xd6) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xc0) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xba) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xac) = 0x7fff;
      *(undefined2 *)(iVar13 + 100) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x5e) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x6e) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x58) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x5a) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x50) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x84) = 0x7fff;
      *(undefined2 *)(iVar13 + 0xfa) = 0;
      *(undefined2 *)(iVar13 + 0x7c) = 0xc000;
      *(undefined2 *)(iVar13 + 0x74) = 0xc000;
      *(undefined2 *)(iVar13 + 0x6a) = 0xc000;
      *(undefined2 *)(iVar13 + 0x8e) = 0xc000;
      *(undefined2 *)(iVar13 + 0x68) = 0x2e00;
      *(undefined2 *)(iVar13 + 0x62) = 0x2e00;
      *(undefined2 *)(iVar13 + 0x82) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x72) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x70) = 0x7fff;
      lup_vens('\0');
      lup_vens('\x01');
      lup_vens('\x02');
      lup_vens('\t');
      *puVar16 = 0;
      return;
    }
    return;
  }
  if (param_1 != '\0') {
    if (param_1 != '\x01') {
      return;
    }
    iVar13 = *(int *)(iVar12 + DAT_000ff554);
    if (*(short *)(iVar13 + 0x308) != 0) {
      *(undefined2 *)(iVar13 + 0x308) = 0;
    }
    *(undefined2 *)(iVar13 + 0x88) = 0x28;
    *(undefined2 *)(iVar13 + 0x8c) = 0x30;
    goto LAB_000ff1c4;
  }
  iVar13 = *(int *)(iVar12 + DAT_000ff554);
  uVar10 = (uint)*(ushort *)(iVar13 + 0x306);
  if (uVar10 < 0xe) {
    iVar17 = 100;
    *(undefined2 *)(iVar13 + 0x306) = 0xe;
    iVar9 = 0;
LAB_000ff34c:
    iVar7 = DAT_000ff570;
    iVar6 = DAT_000ff56c;
    iVar5 = DAT_000ff568;
    pbVar11 = *(byte **)(iVar12 + DAT_000ff564);
    bVar1 = pbVar11[1];
    *(undefined2 *)(iVar13 + (uint)*pbVar11 * 2 + 0x26) = 0x40f;
    *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = 0x3d4;
    pbVar15 = *(byte **)(iVar12 + iVar5);
    bVar1 = *pbVar15;
    bVar2 = pbVar15[3];
    bVar3 = pbVar15[2];
    *(undefined2 *)(iVar13 + (uint)pbVar15[1] * 2 + 0x26) = 0x4000;
    *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(iVar13 + (uint)bVar2 * 2 + 0x26) = 0xc000;
    *(undefined2 *)(iVar13 + (uint)bVar3 * 2 + 0x26) = 0xc000;
    pbVar14 = *(byte **)(iVar12 + iVar6);
    bVar1 = *pbVar14;
    bVar2 = pbVar14[3];
    bVar3 = pbVar14[2];
    iVar9 = *(int *)(*(int *)(iVar12 + iVar7) + iVar9 * 4);
    uVar8 = (undefined2)((uint)(*(int *)(*(int *)(iVar12 + iVar7) + iVar17 * 4) * 0x3c00) >> 0x10);
    *(undefined2 *)(iVar13 + (uint)pbVar14[1] * 2 + 0x26) = uVar8;
    *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = uVar8;
    uVar8 = (undefined2)((uint)(iVar9 * 0x3c00) >> 0x10);
    *(undefined2 *)(iVar13 + (uint)bVar2 * 2 + 0x26) = uVar8;
    *(undefined2 *)(iVar13 + (uint)bVar3 * 2 + 0x26) = uVar8;
  }
  else {
    if (uVar10 < 0x73) {
      if (uVar10 < 0x40) {
        iVar17 = 0x72 - uVar10;
        iVar9 = uVar10 - 0xe;
        goto LAB_000ff34c;
      }
      if (uVar10 == 0x40) {
        pbVar14 = *(byte **)(iVar12 + DAT_000ff56c);
        bVar1 = pbVar14[2];
        bVar2 = pbVar14[1];
        bVar3 = *pbVar14;
        *(undefined2 *)(iVar13 + (uint)pbVar14[3] * 2 + 0x26) = 0;
        *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = 0;
        *(undefined2 *)(iVar13 + (uint)bVar2 * 2 + 0x26) = 0;
        *(undefined2 *)(iVar13 + (uint)bVar3 * 2 + 0x26) = 0;
        pbVar11 = *(byte **)(iVar12 + iVar9);
        pbVar15 = *(byte **)(iVar12 + iVar17);
        goto LAB_000ff3fe;
      }
      iVar9 = 0x72 - uVar10;
      iVar17 = uVar10 - 0xe;
    }
    else {
      iVar17 = 100;
      *(undefined2 *)(iVar13 + 0x306) = 0x72;
      iVar9 = 0;
    }
    iVar7 = DAT_000ff570;
    iVar6 = DAT_000ff56c;
    iVar5 = DAT_000ff568;
    pbVar11 = *(byte **)(iVar12 + DAT_000ff564);
    bVar1 = pbVar11[1];
    *(undefined2 *)(iVar13 + (uint)*pbVar11 * 2 + 0x26) = 0x3d4;
    *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = 0x40f;
    pbVar15 = *(byte **)(iVar12 + iVar5);
    bVar1 = *pbVar15;
    bVar2 = pbVar15[3];
    bVar3 = pbVar15[2];
    *(undefined2 *)(iVar13 + (uint)pbVar15[1] * 2 + 0x26) = 0xc000;
    *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = 0xc000;
    *(undefined2 *)(iVar13 + (uint)bVar2 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(iVar13 + (uint)bVar3 * 2 + 0x26) = 0x4000;
    pbVar14 = *(byte **)(iVar12 + iVar6);
    bVar1 = *pbVar14;
    bVar2 = pbVar14[3];
    bVar3 = pbVar14[2];
    iVar17 = *(int *)(*(int *)(iVar12 + iVar7) + iVar17 * 4);
    uVar8 = (undefined2)((uint)(*(int *)(*(int *)(iVar12 + iVar7) + iVar9 * 4) * 0x3c00) >> 0x10);
    *(undefined2 *)(iVar13 + (uint)pbVar14[1] * 2 + 0x26) = uVar8;
    *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = uVar8;
    uVar8 = (undefined2)((uint)(iVar17 * 0x3c00) >> 0x10);
    *(undefined2 *)(iVar13 + (uint)bVar2 * 2 + 0x26) = uVar8;
    *(undefined2 *)(iVar13 + (uint)bVar3 * 2 + 0x26) = uVar8;
  }
LAB_000ff3fe:
  LSendCoef('\x02',pbVar11);
  LSendCoef('\x04',pbVar15);
  LSendCoef('\x04',pbVar14);
  return;
}

