/* lup_vring @ 000fe6d4 542B */


/* YAMAHA::lup_vring(unsigned char) */

void YAMAHA::lup_vring(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined2 uVar7;
  uchar uVar8;
  uchar uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  undefined1 *puVar14;
  uchar *puVar15;
  
  iVar13 = DAT_000fe8f8;
  iVar11 = DAT_000fe8f4 + 0xfe6e2;
  if (param_1 == '\x05') {
    lchk_prm(5,5);
    uVar8 = '\x01';
    puVar15 = *(uchar **)(iVar11 + DAT_000fe91c);
    uVar9 = *(uchar *)(*(int *)(iVar11 + DAT_000fe8f8) + 0x310);
    iVar13 = DAT_000fe920;
  }
  else {
    if (param_1 < 6) {
      if (param_1 == '\0') {
        iVar13 = *(int *)(iVar11 + DAT_000fe8f8);
        if (0x7f < *(ushort *)(iVar13 + 0x306)) {
          *(undefined2 *)(iVar13 + 0x306) = 0x7f;
        }
      }
      else {
        if (param_1 != '\x01') {
          return;
        }
        iVar13 = *(int *)(iVar11 + DAT_000fe8f8);
      }
      iVar5 = DAT_000fe900;
      iVar4 = DAT_000fe8fc;
      if (0x7f < *(ushort *)(iVar13 + 0x308)) {
        *(undefined2 *)(iVar13 + 0x308) = 0x7f;
      }
      lset_lfo2('\x01',*(uchar **)(iVar11 + iVar4));
      lset_lfo2('\x01',*(uchar **)(iVar11 + iVar5));
      LSendCoef('\x02',*(uchar **)(iVar11 + DAT_000fe904));
      return;
    }
    if (param_1 == '\t') {
      iVar13 = *(int *)(iVar11 + DAT_000fe8f8);
      uVar10 = (uint)*(ushort *)(iVar13 + 0x318);
      if (uVar10 == 0) {
        uVar10 = 1;
        *(undefined2 *)(iVar13 + 0x318) = 1;
      }
      else if (0x7f < uVar10) {
        uVar10 = 0x7f;
        *(undefined2 *)(iVar13 + 0x318) = 0x7f;
      }
      if ((int)((uint)*(ushort *)(iVar13 + 0x358) << 0x1f) < 0) {
        sVar6 = 0x4000;
        uVar7 = 0;
      }
      else {
        sVar6 = (short)((uint)((int)*(short *)(*(int *)(iVar11 + DAT_000fe908) + uVar10 * 2) << 0xe)
                       >> 0x10);
        uVar7 = (undefined2)
                (((int)*(short *)(*(int *)(iVar11 + DAT_000fe908) + (0x80 - uVar10) * 2) & 0x3ffffU)
                >> 2);
      }
      pbVar12 = *(byte **)(iVar11 + DAT_000fe90c);
      bVar1 = *pbVar12;
      bVar2 = pbVar12[2];
      bVar3 = pbVar12[5];
      *(undefined2 *)(iVar13 + (uint)pbVar12[3] * 2 + 0x26) = uVar7;
      *(undefined2 *)(iVar13 + (uint)bVar1 * 2 + 0x26) = uVar7;
      uVar7 = lcal_adj_var(sVar6);
      *(undefined2 *)(iVar13 + (uint)bVar3 * 2 + 0x26) = uVar7;
      *(undefined2 *)(iVar13 + (uint)bVar2 * 2 + 0x26) = uVar7;
      LSendCoef('\x01',pbVar12);
      LSendCoef('\x01',pbVar12 + 3);
      LSendCoef('\x01',pbVar12 + 2);
      LSendCoef('\x01',pbVar12 + 5);
      return;
    }
    if (param_1 == 0xff) {
      puVar14 = *(undefined1 **)(iVar11 + DAT_000fe918);
      *puVar14 = 1;
      iVar13 = *(int *)(iVar11 + iVar13);
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
      *(undefined2 *)(iVar13 + 0xac) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x52) = 0x7fff;
      *(undefined2 *)(iVar13 + 0x58) = 0x8000;
      *(undefined2 *)(iVar13 + 0xb4) = 0x8000;
      *(undefined2 *)(iVar13 + 0x92) = 0x8000;
      *(undefined2 *)(iVar13 + 0xb6) = 8;
      *(undefined2 *)(iVar13 + 0x94) = 8;
      *(undefined2 *)(iVar13 + 0x70) = 0x4000;
      *(undefined2 *)(iVar13 + 0x5e) = 0x4000;
      *(undefined2 *)(iVar13 + 0xa6) = 0x2000;
      *(undefined2 *)(iVar13 + 0x8e) = 0x2000;
      lup_vring('\0');
      lup_vring('\x05');
      lup_vring('\x06');
      lup_vring('\t');
      *puVar14 = 0;
      return;
    }
    if (param_1 != '\x06') {
      return;
    }
    lchk_prm(6,6);
    uVar8 = '\0';
    puVar15 = *(uchar **)(iVar11 + DAT_000fe910);
    uVar9 = *(uchar *)(*(int *)(iVar11 + DAT_000fe8f8) + 0x312);
    iVar13 = DAT_000fe914;
  }
  lset_iir('\x01',uVar8,uVar9,'@','\0',puVar15,*(uchar **)(iVar11 + iVar13));
  return;
}

