/* lup_dbex @ 000f84c0 1760B */


/* YAMAHA::lup_dbex(unsigned char) */

void YAMAHA::lup_dbex(uchar param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  char in_r1;
  uchar uVar10;
  char cVar11;
  uchar uVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  char unaff_r5;
  undefined1 *puVar18;
  char cVar19;
  undefined4 uVar20;
  uchar *puVar21;
  undefined1 *puVar22;
  
  iVar8 = DAT_000f8bbc;
  iVar9 = DAT_000f8bb8;
  iVar16 = DAT_000f8ba8;
  iVar15 = DAT_000f8ba0 + 0xf84ce;
  if (param_1 == '\a') {
    iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
    uVar6 = *(ushort *)(iVar16 + 0x314);
    if (uVar6 < 0x22) {
      uVar12 = '\"';
      *(undefined2 *)(iVar16 + 0x314) = 0x22;
    }
    else if (uVar6 < 0x34) {
      uVar12 = (uchar)uVar6;
    }
    else {
      uVar12 = '3';
      *(undefined2 *)(iVar16 + 0x314) = 0x33;
    }
    uVar10 = '\x05';
    puVar21 = *(uchar **)(iVar15 + DAT_000f8bc8);
    iVar16 = DAT_000f8bcc;
    goto LAB_000f870e;
  }
  if (param_1 < 8) {
    if (param_1 == '\x03') {
      iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
      if (*(ushort *)(iVar16 + 0x30c) < 0x65) {
        uVar14 = (uint)((ulonglong)
                        ((longlong)(int)((uint)*(ushort *)(iVar16 + 0x30c) * 0xa18) * 0x51eb851f) >>
                       0x23);
      }
      else {
        uVar14 = 0x2860;
        *(undefined2 *)(iVar16 + 0x30c) = 100;
      }
      uVar13 = (undefined2)(*(int *)(iVar16 + 0x20) * uVar14 * 8 >> 0x10);
      *(undefined2 *)(iVar16 + 0xe2) = uVar13;
      *(undefined2 *)(iVar16 + 0x1a6) = uVar13;
      LSendDspCoef(0x5e,0x5e);
      uVar14 = 0xc0;
    }
    else {
      if (3 < param_1) {
        if (param_1 == '\x05') {
          iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
          uVar6 = *(ushort *)(iVar16 + 0x310);
          if (uVar6 < 0x14) {
            uVar12 = '\x14';
            *(undefined2 *)(iVar16 + 0x310) = 0x14;
          }
          else if (uVar6 < 0x23) {
            uVar12 = (uchar)uVar6;
          }
          else {
            uVar12 = '\"';
            *(undefined2 *)(iVar16 + 0x310) = 0x22;
          }
          uVar10 = '\x11';
          puVar21 = *(uchar **)(iVar15 + DAT_000f8bd0);
          iVar16 = DAT_000f8bd4;
        }
        else {
          if (5 < param_1) {
            iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
            if (*(ushort *)(iVar16 + 0x312) < 0x65) {
              uVar14 = (uint)((ulonglong)
                              ((longlong)(int)((uint)*(ushort *)(iVar16 + 0x312) * 0xb53) *
                              0x51eb851f) >> 0x23);
            }
            else {
              uVar14 = 0x2d4c;
              *(undefined2 *)(iVar16 + 0x312) = 100;
            }
            uVar13 = (undefined2)(*(int *)(iVar16 + 0x20) * uVar14 * 8 >> 0x10);
            *(undefined2 *)(iVar16 + 0xe4) = uVar13;
            *(undefined2 *)(iVar16 + 0x1a8) = uVar13;
            LSendDspCoef(0x5f,0x5f);
            uVar14 = 0xc1;
            goto LAB_000f86ce;
          }
          iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
          uVar6 = *(ushort *)(iVar16 + 0x30e);
          if (uVar6 < 0xe) {
            uVar12 = '\x0e';
            *(undefined2 *)(iVar16 + 0x30e) = 0xe;
          }
          else if (uVar6 < 0x1e) {
            uVar12 = (uchar)uVar6;
          }
          else {
            uVar12 = '\x1d';
            *(undefined2 *)(iVar16 + 0x30e) = 0x1d;
          }
          uVar10 = '\x05';
          puVar21 = *(uchar **)(iVar15 + DAT_000f8bac);
          iVar16 = DAT_000f8bb0;
        }
LAB_000f870e:
        lset_iir('\x02',uVar10,uVar12,'@','\a',puVar21,*(uchar **)(iVar15 + iVar16));
        return;
      }
      if (param_1 == '\x01') {
        iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
        if (*(ushort *)(iVar16 + 0x308) < 0x65) {
          uVar13 = (undefined2)
                   (((uint)((ulonglong)
                            ((longlong)(int)((uint)*(ushort *)(iVar16 + 0x308) << 0xc) * 0x51eb851f)
                           >> 0x20) & 0x7ffff) >> 3);
        }
        else {
          *(undefined2 *)(iVar16 + 0x308) = 100;
          uVar13 = 0x4000;
        }
        *(undefined2 *)(iVar16 + 0xf0) = uVar13;
        if (*(short *)(iVar16 + 0x322) != 1) {
          uVar13 = 0;
        }
        *(undefined2 *)(iVar16 + 0x1b4) = uVar13;
        LSendDspCoef(0x65,0x65);
        uVar14 = 199;
      }
      else {
        if (1 < param_1) {
          iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
          uVar6 = *(ushort *)(iVar16 + 0x30a);
          if (uVar6 < 0xe) {
            uVar12 = '\x0e';
            *(undefined2 *)(iVar16 + 0x30a) = 0xe;
          }
          else if (uVar6 < 0x1e) {
            uVar12 = (uchar)uVar6;
          }
          else {
            uVar12 = '\x1d';
            *(undefined2 *)(iVar16 + 0x30a) = 0x1d;
          }
          uVar10 = '\x11';
          puVar21 = *(uchar **)(iVar15 + DAT_000f8bdc);
          iVar16 = DAT_000f8be0;
          goto LAB_000f870e;
        }
        iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
        if (*(ushort *)(iVar16 + 0x306) < 0x65) {
          uVar14 = (uint)((ulonglong)
                          ((longlong)(int)((uint)*(ushort *)(iVar16 + 0x306) << 0xc) * 0x51eb851f)
                         >> 0x27);
        }
        else {
          uVar14 = 0x400;
          *(undefined2 *)(iVar16 + 0x306) = 100;
        }
        uVar13 = (undefined2)(*(int *)(iVar16 + 0x20) * uVar14 * 8 >> 0x10);
        *(undefined2 *)(iVar16 + 0xee) = uVar13;
        if (*(short *)(iVar16 + 0x322) != 1) {
          uVar13 = 0;
        }
        *(undefined2 *)(iVar16 + 0x1b2) = uVar13;
        LSendDspCoef(100,100);
        uVar14 = 0xc6;
      }
    }
LAB_000f86ce:
    LSendDspCoef(uVar14,uVar14);
    return;
  }
  if (param_1 == '\v') {
    uVar12 = '\v';
    uVar6 = *(ushort *)(*(int *)(iVar15 + DAT_000f8ba8) + 0x31c);
    if (uVar6 < 0x19) {
      cVar11 = (char)uVar6;
    }
    else {
      cVar11 = '\x18';
      *(undefined2 *)(*(int *)(iVar15 + DAT_000f8ba8) + 0x31c) = 0x18;
    }
    iVar16 = *(int *)(iVar15 + iVar9);
    if (uVar6 < 0x19) {
      cVar19 = cVar11 + '0';
      cVar11 = cVar11 + 'U';
    }
    else {
      cVar19 = 'H';
      unaff_r5 = 'm';
    }
    if (uVar6 < 0x19) {
      unaff_r5 = cVar11;
    }
    *(char *)(iVar16 + 0x1c3) = cVar19;
    *(byte *)(iVar16 + 0x1c2) = *(byte *)(iVar16 + 0x1c2) & 0xfe;
    iVar16 = *(int *)(iVar15 + iVar8);
    *(char *)(iVar16 + 0x1bd) = unaff_r5;
    *(byte *)(iVar16 + 0x1bc) = *(byte *)(iVar16 + 0x1bc) & 0xfe;
    goto LAB_000f87be;
  }
  if (param_1 < 0xc) {
    if (param_1 == '\t') {
      iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
      if (*(ushort *)(iVar16 + 0x318) < 0x65) {
        uVar14 = (uint)((ulonglong)
                        ((longlong)(int)((uint)*(ushort *)(iVar16 + 0x318) * 0xb53) * 0x51eb851f) >>
                       0x23);
      }
      else {
        uVar14 = 0x2d4c;
        *(undefined2 *)(iVar16 + 0x318) = 100;
      }
      uVar13 = (undefined2)(*(int *)(iVar16 + 0x20) * uVar14 * 8 >> 0x10);
      *(undefined2 *)(iVar16 + 0xe6) = uVar13;
      *(undefined2 *)(iVar16 + 0x1aa) = uVar13;
      LSendDspCoef(0x60,0x60);
      uVar14 = 0xc2;
      goto LAB_000f86ce;
    }
    if (param_1 < 10) {
      iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
      uVar6 = *(ushort *)(iVar16 + 0x316);
      if (uVar6 < 0x2c) {
        uVar12 = ',';
        *(undefined2 *)(iVar16 + 0x316) = 0x2c;
      }
      else if (uVar6 < 0x3b) {
        uVar12 = (uchar)uVar6;
      }
      else {
        uVar12 = ':';
        *(undefined2 *)(iVar16 + 0x316) = 0x3a;
      }
      uVar10 = '\x04';
      puVar21 = *(uchar **)(iVar15 + DAT_000f8bc0);
      iVar16 = DAT_000f8bc4;
      goto LAB_000f870e;
    }
    uVar6 = *(ushort *)(*(int *)(iVar15 + DAT_000f8ba8) + 0x31a);
    if (uVar6 < 2) {
      cVar11 = (char)uVar6;
    }
    else {
      cVar11 = '\x01';
      *(undefined2 *)(*(int *)(iVar15 + DAT_000f8ba8) + 0x31a) = 1;
    }
    iVar16 = *(int *)(iVar15 + iVar9);
    if (uVar6 < 2) {
      cVar19 = cVar11 + '\x1e';
      cVar11 = cVar11 + '\x17';
    }
    else {
      cVar19 = '\x1f';
      in_r1 = '\x18';
    }
    if (uVar6 < 2) {
      in_r1 = cVar11;
    }
    *(char *)(iVar16 + 0x1e7) = cVar19;
    uVar12 = '\n';
    *(byte *)(iVar16 + 0x1e6) = *(byte *)(iVar16 + 0x1e6) & 0xfe;
    iVar16 = *(int *)(iVar15 + iVar8);
    *(char *)(iVar16 + 0x1e1) = in_r1;
    *(byte *)(iVar16 + 0x1e0) = *(byte *)(iVar16 + 0x1e0) & 0xfe;
    goto LAB_000f87be;
  }
  if (param_1 != '\r') {
    if (param_1 < 0xd) {
      uVar12 = '\f';
      uVar6 = *(ushort *)(*(int *)(iVar15 + DAT_000f8ba8) + 0x31e);
      if (uVar6 < 9) {
        cVar11 = (char)uVar6;
      }
      else {
        cVar11 = '\b';
        *(undefined2 *)(*(int *)(iVar15 + DAT_000f8ba8) + 0x31e) = 8;
      }
      iVar16 = *(int *)(iVar15 + iVar9);
      if (uVar6 < 9) {
        cVar19 = cVar11 + ' ';
        cVar11 = cVar11 + -9;
      }
      else {
        cVar19 = '(';
        unaff_r5 = -1;
      }
      if (uVar6 < 9) {
        unaff_r5 = cVar11;
      }
      *(char *)(iVar16 + 0x1c9) = cVar19;
      *(byte *)(iVar16 + 0x1c8) = *(byte *)(iVar16 + 0x1c8) & 0xfe;
      iVar16 = *(int *)(iVar15 + iVar8);
      *(char *)(iVar16 + 0x1c3) = unaff_r5;
      *(byte *)(iVar16 + 0x1c2) = *(byte *)(iVar16 + 0x1c2) & 0xfe | 1;
      goto LAB_000f87be;
    }
    if (param_1 != '\x0e') {
      if (param_1 == 0xff) {
        puVar18 = *(undefined1 **)(iVar15 + DAT_000f8ba4);
        *puVar18 = 1;
        iVar16 = *(int *)(iVar15 + iVar16);
        *(undefined2 *)(iVar16 + 0x50) = 0x8000;
        *(undefined2 *)(iVar16 + 0x116) = 0x8000;
        *(undefined2 *)(iVar16 + 0x52) = 0xc000;
        *(undefined2 *)(iVar16 + 0x7e) = 0xc000;
        *(undefined2 *)(iVar16 + 0x80) = 0xc000;
        *(undefined2 *)(iVar16 + 0xa0) = 0xc000;
        *(undefined2 *)(iVar16 + 0xac) = 0xc000;
        *(undefined2 *)(iVar16 + 0xae) = 0xc000;
        *(undefined2 *)(iVar16 + 0xb4) = 0xc000;
        *(undefined2 *)(iVar16 + 0xb6) = 0xc000;
        *(undefined2 *)(iVar16 + 0xc6) = 0xc000;
        *(undefined2 *)(iVar16 + 0xcc) = 0xc000;
        *(undefined2 *)(iVar16 + 0x6e) = 0x4000;
        *(undefined2 *)(iVar16 + 0x70) = 0x4000;
        *(undefined2 *)(iVar16 + 0x72) = 0x4000;
        *(undefined2 *)(iVar16 + 0x8e) = 0x4000;
        *(undefined2 *)(iVar16 + 0x9a) = 0x4000;
        *(undefined2 *)(iVar16 + 0x9c) = 0x4000;
        *(undefined2 *)(iVar16 + 0x9e) = 0x4000;
        *(undefined2 *)(iVar16 + 0xa2) = 0x4000;
        *(undefined2 *)(iVar16 + 0xa4) = 0x4000;
        *(undefined2 *)(iVar16 + 0xa8) = 0x4000;
        *(undefined2 *)(iVar16 + 0xaa) = 0x4000;
        *(undefined2 *)(iVar16 + 0xbe) = 0x4000;
        *(undefined2 *)(iVar16 + 0xc2) = 0x4000;
        *(undefined2 *)(iVar16 + 200) = 0x4000;
        *(undefined2 *)(iVar16 + 0xca) = 0x4000;
        *(undefined2 *)(iVar16 + 0xce) = 0x4000;
        *(undefined2 *)(iVar16 + 0xd0) = 0x4000;
        *(undefined2 *)(iVar16 + 0xa6) = 0x7fff;
        *(undefined2 *)(iVar16 + 0x118) = 0xc000;
        *(undefined2 *)(iVar16 + 0x142) = 0xc000;
        *(undefined2 *)(iVar16 + 0x144) = 0xc000;
        *(undefined2 *)(iVar16 + 0x164) = 0xc000;
        *(undefined2 *)(iVar16 + 0x170) = 0xc000;
        *(undefined2 *)(iVar16 + 0x172) = 0xc000;
        *(undefined2 *)(iVar16 + 0x178) = 0xc000;
        *(undefined2 *)(iVar16 + 0x17a) = 0xc000;
        *(undefined2 *)(iVar16 + 0x18a) = 0xc000;
        *(undefined2 *)(iVar16 + 400) = 0xc000;
        *(undefined2 *)(iVar16 + 0x11a) = 0xe000;
        *(undefined2 *)(iVar16 + 0x132) = 0x4000;
        *(undefined2 *)(iVar16 + 0x134) = 0x4000;
        *(undefined2 *)(iVar16 + 0x136) = 0x4000;
        *(undefined2 *)(iVar16 + 0x152) = 0x4000;
        *(undefined2 *)(iVar16 + 0x15e) = 0x4000;
        *(undefined2 *)(iVar16 + 0x160) = 0x4000;
        *(undefined2 *)(iVar16 + 0x162) = 0x4000;
        *(undefined2 *)(iVar16 + 0x166) = 0x4000;
        *(undefined2 *)(iVar16 + 0x168) = 0x4000;
        *(undefined2 *)(iVar16 + 0x16a) = 0x7fff;
        *(undefined2 *)(iVar16 + 0x16c) = 0x4000;
        *(undefined2 *)(iVar16 + 0x16e) = 0x4000;
        *(undefined2 *)(iVar16 + 0x182) = 0x4000;
        *(undefined2 *)(iVar16 + 0x186) = 0x4000;
        *(undefined2 *)(iVar16 + 0x18c) = 0x4000;
        *(undefined2 *)(iVar16 + 0x18e) = 0x4000;
        *(undefined2 *)(iVar16 + 0x192) = 0x4000;
        *(undefined2 *)(iVar16 + 0x194) = 0x4000;
        lup_dbex('\0');
        lup_dbex('\x01');
        lup_dbex('\x02');
        lup_dbex('\x03');
        lup_dbex('\x04');
        lup_dbex('\x05');
        lup_dbex('\x06');
        lup_dbex('\a');
        lup_dbex('\b');
        lup_dbex('\t');
        lup_dbex('\n');
        lup_dbex('\v');
        lup_dbex('\f');
        lup_dbex('\r');
        lup_dbex('\x0e');
        *puVar18 = 0;
      }
      return;
    }
    iVar16 = *(int *)(iVar15 + DAT_000f8ba8);
    if (*(ushort *)(iVar16 + 0x322) < 2) {
      *(undefined2 *)(iVar16 + 0x58) = 0xa18;
      if (*(ushort *)(iVar16 + 0x322) == 1) goto LAB_000f89b8;
      lup_dbex('\0');
      lup_dbex('\x01');
      *(undefined2 *)(iVar16 + 0x4c) = 0x2000;
      *(undefined2 *)(iVar16 + 0x114) = 0;
      *(undefined2 *)(iVar16 + 0x4e) = 0x2000;
      *(undefined2 *)(iVar16 + 0x1b0) = 0x1000;
      LSendDspCoef(0x77,0x77);
      LSendDspCoef(0x13,0x19);
      iVar16 = DAT_000f8bbc;
      LSendDspCoef(0xc5,0xc5);
      puVar18 = *(undefined1 **)(iVar15 + iVar16);
      puVar22 = *(undefined1 **)(iVar15 + DAT_000f8be4);
      uVar1 = puVar22[1];
      uVar2 = puVar22[2];
      uVar3 = puVar22[3];
      uVar4 = puVar22[4];
      uVar5 = puVar22[5];
      *puVar18 = *puVar22;
      puVar18[1] = uVar1;
      puVar18[2] = uVar2;
      puVar18[3] = uVar3;
      puVar18[4] = uVar4;
      puVar18[5] = uVar5;
    }
    else {
      *(undefined2 *)(iVar16 + 0x322) = 1;
      *(undefined2 *)(iVar16 + 0x58) = 0xa18;
LAB_000f89b8:
      *(undefined2 *)(iVar16 + 0x4c) = 0x4000;
      *(undefined2 *)(iVar16 + 0x114) = 0xa18;
      *(undefined2 *)(iVar16 + 0x4e) = 0;
      *(undefined2 *)(iVar16 + 0x1b0) = 0;
      LSendDspCoef(0xc5,0xc5);
      iVar16 = DAT_000f8bd8;
      LSendDspCoef(0x13,0x19);
      LSendDspCoef(0x77,0x77);
      puVar17 = *(undefined4 **)(iVar15 + DAT_000f8bbc);
      uVar13 = *(undefined2 *)(*(undefined4 **)(iVar15 + iVar16) + 1);
      *puVar17 = **(undefined4 **)(iVar15 + iVar16);
      *(undefined2 *)(puVar17 + 1) = uVar13;
      lup_dbex('\0');
      lup_dbex('\x01');
    }
    uVar12 = '\x0e';
    goto LAB_000f87be;
  }
  uVar6 = *(ushort *)(*(int *)(iVar15 + DAT_000f8ba8) + 800);
  if (uVar6 < 2) {
    if (uVar6 != 0) goto LAB_000f8736;
    puVar17 = *(undefined4 **)(iVar15 + DAT_000f8bb4);
    iVar16 = *(int *)(iVar15 + DAT_000f8bb8);
    uVar20 = *(undefined4 *)((int)puVar17 + 6);
    uVar13 = *(undefined2 *)(puVar17 + 1);
    *(undefined4 *)(iVar16 + 0x150) = *puVar17;
    uVar7 = *(undefined2 *)((int)puVar17 + 10);
    *(undefined2 *)(iVar16 + 0x154) = uVar13;
    iVar16 = *(int *)(iVar15 + iVar8);
    *(undefined2 *)(iVar16 + 0x14e) = uVar7;
    *(undefined4 *)(iVar16 + 0x14a) = uVar20;
  }
  else {
    *(undefined2 *)(*(int *)(iVar15 + DAT_000f8ba8) + 800) = 1;
LAB_000f8736:
    iVar16 = DAT_000f8bbc;
    iVar9 = *(int *)(iVar15 + DAT_000f8bb8);
    uVar20 = *(undefined4 *)(*(int *)(iVar15 + DAT_000f8bb4) + 0xc);
    uVar13 = *(undefined2 *)(*(int *)(iVar15 + DAT_000f8bb4) + 0x10);
    *(undefined4 *)(iVar9 + 0x150) = uVar20;
    *(undefined2 *)(iVar9 + 0x154) = uVar13;
    iVar16 = *(int *)(iVar15 + iVar16);
    *(undefined4 *)(iVar16 + 0x14a) = uVar20;
    *(undefined2 *)(iVar16 + 0x14e) = uVar13;
  }
  uVar12 = '\r';
LAB_000f87be:
  LSendDbex(uVar12);
  return;
}

