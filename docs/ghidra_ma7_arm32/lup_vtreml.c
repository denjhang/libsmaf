/* lup_vtreml @ 000fe08c 768B */


/* YAMAHA::lup_vtreml(unsigned char) */

void YAMAHA::lup_vtreml(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  undefined2 uVar8;
  uint uVar9;
  uchar uVar10;
  int iVar11;
  byte *pbVar12;
  uchar uVar13;
  uchar uVar14;
  int iVar15;
  undefined1 *puVar16;
  uchar *puVar17;
  int iVar18;
  
  iVar5 = DAT_000fe3ac;
  iVar4 = DAT_000fe39c;
  iVar18 = DAT_000fe394;
  iVar11 = DAT_000fe390;
  iVar15 = DAT_000fe38c + 0xfe098;
  if (param_1 < 9) {
    if (param_1 < 7) {
      if (param_1 == '\x02') {
        uVar3 = *(ushort *)(*(int *)(iVar15 + DAT_000fe390) + 0x30a);
        uVar9 = (uint)uVar3;
        uVar14 = (uchar)uVar3;
        if (uVar9 < 0x80) {
          uVar14 = (uchar)((uVar9 & 0x1ff) >> 1);
        }
        else {
          *(undefined2 *)(*(int *)(iVar15 + DAT_000fe390) + 0x30a) = 0x7f;
        }
        iVar11 = *(int *)(iVar15 + iVar18);
        if (0x7f < uVar9) {
          uVar14 = '?';
        }
        lset_lfopd(uVar14,(uchar *)(iVar11 + 1),(uchar *)(iVar11 + 3));
        return;
      }
      if (param_1 < 3) {
        if (param_1 == '\0') {
          iVar11 = *(int *)(iVar15 + DAT_000fe390);
          if (*(ushort *)(iVar11 + 0x306) < 0x80) {
            uVar14 = (uchar)*(ushort *)(iVar11 + 0x306);
          }
          else {
            uVar14 = '\x7f';
            *(undefined2 *)(iVar11 + 0x306) = 0x7f;
          }
          lset_lfo(uVar14,*(uchar **)(iVar15 + iVar4),*(uchar **)(iVar15 + iVar4));
          lset_lfowf('\x01',*(uchar *)(iVar11 + 0x306),*(uchar **)(iVar15 + DAT_000fe3a0),
                     *(uchar **)(iVar15 + DAT_000fe3a4));
          return;
        }
        if (param_1 != '\x01') {
          return;
        }
        uVar3 = *(ushort *)(*(int *)(iVar15 + DAT_000fe390) + 0x308);
        if (uVar3 < 0x80) {
          cVar6 = (char)uVar3;
        }
        else {
          cVar6 = '\x7f';
          *(undefined2 *)(*(int *)(iVar15 + DAT_000fe390) + 0x308) = 0x7f;
        }
        iVar11 = *(int *)(iVar15 + iVar18);
        lset_lfoad((int)cVar6,iVar11,iVar11 + 2);
        return;
      }
      if (param_1 < 5) {
        return;
      }
      lchk_prm(1,5);
      uVar10 = '\x02';
      puVar17 = *(uchar **)(iVar15 + DAT_000fe3bc);
      uVar14 = *(uchar *)(*(int *)(iVar15 + DAT_000fe390) + 0x312);
      uVar13 = *(uchar *)(*(int *)(iVar15 + DAT_000fe390) + 0x310);
      iVar18 = DAT_000fe3c0;
      goto LAB_000fe248;
    }
    iVar11 = *(int *)(iVar15 + DAT_000fe390);
  }
  else {
    if (param_1 == '\r') {
      iVar11 = *(int *)(iVar15 + DAT_000fe390);
      uVar3 = *(ushort *)(iVar11 + 800);
      if (uVar3 < 4) {
        uVar14 = '\x04';
        *(undefined2 *)(iVar11 + 800) = 4;
      }
      else if (uVar3 < 0x7d) {
        uVar14 = (uchar)uVar3;
      }
      else {
        uVar14 = '|';
        *(undefined2 *)(iVar11 + 800) = 0x7c;
      }
      puVar17 = (uchar *)(*(int *)(iVar15 + DAT_000fe3c4) + 1);
      lset_lfoph(uVar14,puVar17,puVar17);
      return;
    }
    if (param_1 < 0xe) {
      if (param_1 != '\t') {
        return;
      }
      iVar11 = *(int *)(iVar15 + DAT_000fe390);
      if (*(ushort *)(iVar11 + 0x318) == 0) {
        *(undefined2 *)(iVar11 + 0x318) = 1;
      }
      else if (0x7f < *(ushort *)(iVar11 + 0x318)) {
        *(undefined2 *)(iVar11 + 0x318) = 0x7f;
      }
      iVar18 = *(int *)(iVar15 + DAT_000fe3b8);
      if ((*(ushort *)(iVar11 + 0x358) & 1) == 0) {
        sVar7 = 0x2000;
      }
      else {
        sVar7 = 0x4000;
      }
      bVar2 = *(byte *)(iVar18 + 1);
      bVar1 = *(byte *)(iVar18 + 4);
      uVar8 = lcal_adj_var(sVar7);
      *(undefined2 *)(iVar11 + (uint)bVar1 * 2 + 0x26) = uVar8;
      *(undefined2 *)(iVar11 + (uint)bVar2 * 2 + 0x26) = uVar8;
      LSendCoef('\x01',(uchar *)(iVar18 + 1));
      LSendCoef('\x01',(uchar *)(iVar18 + 4));
      return;
    }
    if (param_1 != '\x0e') {
      if (param_1 != 0xff) {
        return;
      }
      puVar16 = *(undefined1 **)(iVar15 + DAT_000fe398);
      *puVar16 = 1;
      iVar11 = *(int *)(iVar15 + iVar11);
      *(undefined2 *)(iVar11 + 0x284) = 3;
      *(undefined2 *)(iVar11 + 0xf6) = 0x7fff;
      *(undefined2 *)(iVar11 + 0xf2) = 0x7fff;
      *(undefined2 *)(iVar11 + 0xe2) = 0x7fff;
      *(undefined2 *)(iVar11 + 0xde) = 0x7fff;
      *(undefined2 *)(iVar11 + 0xce) = 0x7fff;
      *(undefined2 *)(iVar11 + 0xba) = 0x7fff;
      *(undefined2 *)(iVar11 + 0xb0) = 0x7fff;
      *(undefined2 *)(iVar11 + 0xa8) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x9e) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x90) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x86) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x7e) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x74) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x72) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x6a) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x60) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x54) = 0x7fff;
      *(undefined2 *)(iVar11 + 0x58) = 0x8000;
      *(undefined2 *)(iVar11 + 0xb4) = 0x8000;
      *(undefined2 *)(iVar11 + 0x92) = 0x8000;
      *(undefined2 *)(iVar11 + 0xb6) = 8;
      *(undefined2 *)(iVar11 + 0x94) = 8;
      *(undefined2 *)(iVar11 + 0x282) = 2;
      lup_vtreml('\0');
      lup_vtreml('\x01');
      lup_vtreml('\x02');
      lup_vtreml('\t');
      lup_vtreml('\r');
      lup_vtreml('\x0e');
      *puVar16 = 0;
      return;
    }
    iVar11 = *(int *)(iVar15 + DAT_000fe390);
    if (*(ushort *)(iVar11 + 0x322) < 2) {
      if (*(ushort *)(iVar11 + 0x322) != 0) goto LAB_000fe1e4;
      pbVar12 = *(byte **)(iVar15 + DAT_000fe3a8);
      bVar2 = *pbVar12;
      *(undefined2 *)(iVar11 + (uint)pbVar12[1] * 2 + 0x26) = 0x4000;
      *(undefined2 *)(iVar11 + (uint)bVar2 * 2 + 0x26) = 0x4000;
      iVar18 = *(int *)(iVar15 + iVar5);
      *(undefined2 *)(iVar11 + (uint)*(byte *)(iVar18 + 1) * 2 + 0x26) = 0xe008;
    }
    else {
      *(undefined2 *)(iVar11 + 0x322) = 1;
LAB_000fe1e4:
      iVar18 = DAT_000fe3ac;
      pbVar12 = *(byte **)(iVar15 + DAT_000fe3a8);
      bVar2 = pbVar12[1];
      *(undefined2 *)(iVar11 + (uint)*pbVar12 * 2 + 0x26) = 0x7fff;
      *(undefined2 *)(iVar11 + (bVar2 + 0x10) * 2 + 6) = 0;
      iVar18 = *(int *)(iVar15 + iVar18);
      *(undefined2 *)(iVar11 + (uint)*(byte *)(iVar18 + 1) * 2 + 0x26) = 8;
    }
    LSendCoef('\x02',pbVar12);
    LSendCoef('\x01',(uchar *)(iVar18 + 1));
    lup_vtreml('\x05');
  }
  iVar18 = DAT_000fe3b4;
  iVar4 = DAT_000fe3b0;
  lchk_prm(0,7);
  uVar13 = *(uchar *)(iVar11 + 0x314);
  uVar14 = *(uchar *)(iVar11 + 0x316);
  puVar17 = *(uchar **)(iVar15 + iVar4);
  uVar10 = '\x03';
LAB_000fe248:
  lset_iir('\x01',uVar10,uVar13,uVar14,'\0',puVar17,*(uchar **)(iVar15 + iVar18));
  return;
}

