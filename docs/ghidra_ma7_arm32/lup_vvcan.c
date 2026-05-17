/* lup_vvcan @ 000ffd98 430B */


/* YAMAHA::lup_vvcan(unsigned char) */

void YAMAHA::lup_vvcan(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uchar uVar8;
  uchar uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uchar *puVar14;
  undefined1 *puVar15;
  
  iVar6 = DAT_000fff68;
  iVar5 = DAT_000fff64;
  iVar4 = DAT_000fff60;
  iVar12 = DAT_000fff50;
  iVar11 = DAT_000fff48 + 0xffda4;
  if (param_1 == '\n') {
    uVar10 = (uint)*(ushort *)(*(int *)(iVar11 + DAT_000fff50) + 0x31a);
    if (0x1a < uVar10) {
      uVar10 = 0x1a;
      *(undefined2 *)(*(int *)(iVar11 + DAT_000fff50) + 0x31a) = 0x1a;
    }
    lset_iir('\x01','\x01',*(uchar *)(*(int *)(iVar11 + iVar4) + uVar10),'@','\0',
             *(uchar **)(iVar11 + iVar5),*(uchar **)(iVar11 + iVar6));
    return;
  }
  if (param_1 < 0xb) {
    if (param_1 != '\t') {
      return;
    }
    iVar12 = *(int *)(iVar11 + DAT_000fff50);
    pbVar13 = *(byte **)(iVar11 + DAT_000fff5c);
    bVar1 = pbVar13[2];
    bVar2 = pbVar13[3];
    if ((*(ushort *)(iVar12 + 0x358) & 1) == 0) {
      sVar7 = 0x2000;
    }
    else {
      sVar7 = 0x4000;
    }
    sVar7 = lcal_adj_var(sVar7);
    *(short *)(iVar12 + (uint)bVar2 * 2 + 0x26) = -sVar7;
    *(short *)(iVar12 + (uint)bVar1 * 2 + 0x26) = -sVar7;
    LSendCoef('\x02',pbVar13 + 2);
    if ((int)((uint)*(ushort *)(iVar12 + 0x358) << 0x1f) < 0) {
      bVar1 = *pbVar13;
      *(undefined2 *)(iVar12 + (pbVar13[1] + 0x10) * 2 + 6) = 0;
      *(undefined2 *)(iVar12 + (bVar1 + 0x10) * 2 + 6) = 0;
    }
    else {
      bVar1 = *pbVar13;
      *(undefined2 *)(iVar12 + (uint)pbVar13[1] * 2 + 0x26) = 0x2000;
      *(undefined2 *)(iVar12 + (uint)bVar1 * 2 + 0x26) = 0x2000;
    }
    LSendCoef('\x02',pbVar13);
    return;
  }
  if (param_1 != '\v') {
    if (param_1 != 0xff) {
      return;
    }
    puVar15 = *(undefined1 **)(iVar11 + DAT_000fff4c);
    *puVar15 = 1;
    iVar12 = *(int *)(iVar11 + iVar12);
    *(undefined2 *)(iVar12 + 0x50) = 0x4000;
    *(undefined2 *)(iVar12 + 0x52) = 0x80;
    *(undefined2 *)(iVar12 + 0xea) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xe8) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xe4) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xe0) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xd0) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xcc) = 0x7fff;
    *(undefined2 *)(iVar12 + 200) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xc4) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xc0) = 0x7fff;
    *(undefined2 *)(iVar12 + 0xbc) = 0x7fff;
    *(undefined2 *)(iVar12 + 0x7a) = 0x7fff;
    *(undefined2 *)(iVar12 + 0x76) = 0x7fff;
    *(undefined2 *)(iVar12 + 0x72) = 0x7fff;
    *(undefined2 *)(iVar12 + 0x6e) = 0x7fff;
    *(undefined2 *)(iVar12 + 0x6a) = 0x7fff;
    lup_vvcan('\t');
    lup_vvcan('\n');
    lup_vvcan('\v');
    *puVar15 = 0;
    return;
  }
  uVar3 = *(ushort *)(*(int *)(iVar11 + DAT_000fff50) + 0x31c);
  if (uVar3 < 0x1b) {
    if (uVar3 != 0x1a) {
      uVar9 = (char)uVar3 + '\"';
      uVar8 = '\0';
      puVar14 = *(uchar **)(iVar11 + DAT_000fff54);
      goto LAB_000ffe56;
    }
  }
  else {
    *(undefined2 *)(*(int *)(iVar11 + DAT_000fff50) + 0x31c) = 0x1a;
  }
  uVar9 = '<';
  uVar8 = '\v';
  puVar14 = *(uchar **)(iVar11 + DAT_000fff54);
LAB_000ffe56:
  lset_iir('\x01',uVar8,uVar9,'@','\0',puVar14,*(uchar **)(iVar11 + DAT_000fff58));
  return;
}

