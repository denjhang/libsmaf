/* lup_dbex @ 00243f20 2520B */


/* YAMAHA::lup_dbex(unsigned char) */

void YAMAHA::lup_dbex(uchar param_1)

{
  byte *pbVar1;
  short *psVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  ushort uVar13;
  undefined2 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  uchar uVar19;
  uint uVar20;
  char cVar21;
  undefined2 uVar22;
  int iVar23;
  char cVar24;
  
  puVar18 = PTR_lgsendoff_00567b48;
  puVar17 = PTR_gabProgDBEX_SFX1_00567aa0;
  puVar16 = PTR_gabProgDBEX_SFX0_00567708;
  puVar15 = PTR_lprm_00567530;
  if (param_1 == '\a') {
    uVar13 = *(ushort *)(PTR_lprm_00567530 + 0x314);
    if (uVar13 < 0x22) {
      uVar19 = '\"';
      *(undefined2 *)(PTR_lprm_00567530 + 0x314) = 0x22;
    }
    else if (uVar13 < 0x34) {
      uVar19 = (uchar)uVar13;
    }
    else {
      uVar19 = '3';
      *(undefined2 *)(PTR_lprm_00567530 + 0x314) = 0x33;
    }
    lset_iir('\x02','\x05',uVar19,'@','\a',PTR_ltadbex_eq4L_00567a78,PTR_ltadbex_eq4R_00567298);
    return;
  }
  if (param_1 < 8) {
    if (param_1 == '\x03') {
      if (*(ushort *)(PTR_lprm_00567530 + 0x30c) < 0x65) {
        uVar20 = (uint)((ulong)((long)(int)((uint)*(ushort *)(PTR_lprm_00567530 + 0x30c) * 0xa18) *
                               0x51eb851f) >> 0x23);
      }
      else {
        uVar20 = 0x2860;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 100;
      }
      puVar15 = PTR_lprm_00567530;
      uVar22 = (undefined2)(((ulong)(uVar20 * *(int *)(PTR_lprm_00567530 + 0x20)) << 0x23) >> 0x30);
      *(undefined2 *)(PTR_lprm_00567530 + 0xe2) = uVar22;
      *(undefined2 *)(puVar15 + 0x1a6) = uVar22;
      LSendDspCoef(0x5e,0x5e);
      uVar20 = 0xc0;
    }
    else if (param_1 < 4) {
      if (param_1 == '\x01') {
        if (*(ushort *)(PTR_lprm_00567530 + 0x308) < 0x65) {
          uVar22 = (undefined2)
                   (uint)((ulong)((long)(int)((uint)*(ushort *)(PTR_lprm_00567530 + 0x308) << 0xc) *
                                 0x51eb851f) >> 0x23);
        }
        else {
          uVar22 = 0x4000;
          *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 100;
        }
        puVar15 = PTR_lprm_00567530;
        psVar2 = (short *)(PTR_lprm_00567530 + 0x322);
        *(undefined2 *)(PTR_lprm_00567530 + 0xf0) = uVar22;
        if (*psVar2 != 1) {
          uVar22 = 0;
        }
        *(undefined2 *)(puVar15 + 0x1b4) = uVar22;
        LSendDspCoef(0x65,0x65);
        uVar20 = 199;
      }
      else {
        if (1 < param_1) {
          uVar13 = *(ushort *)(PTR_lprm_00567530 + 0x30a);
          if (uVar13 < 0xe) {
            uVar19 = '\x0e';
            *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0xe;
          }
          else if (uVar13 < 0x1e) {
            uVar19 = (uchar)uVar13;
          }
          else {
            uVar19 = '\x1d';
            *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x1d;
          }
          lset_iir('\x02','\x11',uVar19,'@','\a',PTR_ltadbex_eq0L_00567460,PTR_ltadbex_eq0R_005677c8
                  );
          return;
        }
        if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x65) {
          iVar23 = (int)(uint)((ulong)((long)(int)((uint)*(ushort *)(PTR_lprm_00567530 + 0x306) <<
                                                  0xc) * 0x51eb851f) >> 0x25) >> 2;
        }
        else {
          iVar23 = 0x400;
          *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 100;
        }
        puVar15 = PTR_lprm_00567530;
        psVar2 = (short *)(PTR_lprm_00567530 + 0x322);
        uVar22 = (undefined2)
                 (((ulong)(uint)(iVar23 * *(int *)(PTR_lprm_00567530 + 0x20)) << 0x23) >> 0x30);
        *(undefined2 *)(PTR_lprm_00567530 + 0xee) = uVar22;
        if (*psVar2 != 1) {
          uVar22 = 0;
        }
        *(undefined2 *)(puVar15 + 0x1b2) = uVar22;
        LSendDspCoef(100,100);
        uVar20 = 0xc6;
      }
    }
    else {
      if (param_1 == '\x05') {
        uVar13 = *(ushort *)(PTR_lprm_00567530 + 0x310);
        if (uVar13 < 0x14) {
          uVar19 = '\x14';
          *(undefined2 *)(PTR_lprm_00567530 + 0x310) = 0x14;
        }
        else if (uVar13 < 0x23) {
          uVar19 = (uchar)uVar13;
        }
        else {
          uVar19 = '\"';
          *(undefined2 *)(PTR_lprm_00567530 + 0x310) = 0x22;
        }
        lset_iir('\x02','\x11',uVar19,'@','\a',PTR_ltadbex_eq1L_00567b38,PTR_ltadbex_eq1R_00567448);
        return;
      }
      if (param_1 < 6) {
        uVar13 = *(ushort *)(PTR_lprm_00567530 + 0x30e);
        if (uVar13 < 0xe) {
          uVar19 = '\x0e';
          *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0xe;
        }
        else if (uVar13 < 0x1e) {
          uVar19 = (uchar)uVar13;
        }
        else {
          uVar19 = '\x1d';
          *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0x1d;
        }
        lset_iir('\x02','\x05',uVar19,'@','\a',PTR_ltadbex_eq2L_00567c48,PTR_ltadbex_eq2R_00567518);
        return;
      }
      if (*(ushort *)(PTR_lprm_00567530 + 0x312) < 0x65) {
        uVar20 = (uint)((ulong)((long)(int)((uint)*(ushort *)(PTR_lprm_00567530 + 0x312) * 0xb53) *
                               0x51eb851f) >> 0x23);
      }
      else {
        uVar20 = 0x2d4c;
        *(undefined2 *)(PTR_lprm_00567530 + 0x312) = 100;
      }
      puVar15 = PTR_lprm_00567530;
      uVar22 = (undefined2)(((ulong)(uVar20 * *(int *)(PTR_lprm_00567530 + 0x20)) << 0x23) >> 0x30);
      *(undefined2 *)(PTR_lprm_00567530 + 0xe4) = uVar22;
      *(undefined2 *)(puVar15 + 0x1a8) = uVar22;
      LSendDspCoef(0x5f,0x5f);
      uVar20 = 0xc1;
    }
LAB_00244360:
    LSendDspCoef(uVar20,uVar20);
    return;
  }
  if (param_1 == '\v') {
    if (*(ushort *)(PTR_lprm_00567530 + 0x31c) < 0x19) {
      cVar24 = (char)*(ushort *)(PTR_lprm_00567530 + 0x31c);
      cVar21 = cVar24 + '0';
      cVar24 = cVar24 + 'U';
    }
    else {
      cVar24 = 'm';
      *(undefined2 *)(PTR_lprm_00567530 + 0x31c) = 0x18;
      cVar21 = 'H';
    }
    puVar16 = PTR_gabProgDBEX_SFX1_00567aa0;
    puVar15 = PTR_gabProgDBEX_SFX0_00567708;
    pbVar1 = PTR_gabProgDBEX_SFX1_00567aa0 + 0x1c2;
    bVar6 = PTR_gabProgDBEX_SFX0_00567708[0x1bc];
    PTR_gabProgDBEX_SFX1_00567aa0[0x1c3] = cVar21;
    puVar16[0x1c2] = *pbVar1 & 0xfe;
    puVar15[0x1bd] = cVar24;
    puVar15[0x1bc] = bVar6 & 0xfe;
    LSendDbex('\v');
    return;
  }
  if (param_1 < 0xc) {
    if (param_1 != '\t') {
      if (param_1 < 10) {
        uVar13 = *(ushort *)(PTR_lprm_00567530 + 0x316);
        if (uVar13 < 0x2c) {
          uVar19 = ',';
          *(undefined2 *)(PTR_lprm_00567530 + 0x316) = 0x2c;
        }
        else if (uVar13 < 0x3b) {
          uVar19 = (uchar)uVar13;
        }
        else {
          uVar19 = ':';
          *(undefined2 *)(PTR_lprm_00567530 + 0x316) = 0x3a;
        }
        lset_iir('\x02','\x04',uVar19,'@','\a',PTR_ltadbex_eq3L_00567970,PTR_ltadbex_eq3R_005671c8);
        return;
      }
      if (*(ushort *)(PTR_lprm_00567530 + 0x31a) < 2) {
        cVar24 = (char)*(ushort *)(PTR_lprm_00567530 + 0x31a);
        cVar21 = cVar24 + '\x1e';
        cVar24 = cVar24 + '\x17';
      }
      else {
        cVar24 = '\x18';
        *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 1;
        cVar21 = '\x1f';
      }
      puVar16 = PTR_gabProgDBEX_SFX1_00567aa0;
      puVar15 = PTR_gabProgDBEX_SFX0_00567708;
      bVar6 = PTR_gabProgDBEX_SFX1_00567aa0[0x1e6];
      bVar7 = PTR_gabProgDBEX_SFX0_00567708[0x1e0];
      PTR_gabProgDBEX_SFX1_00567aa0[0x1e7] = cVar21;
      puVar15[0x1e1] = cVar24;
      puVar16[0x1e6] = bVar6 & 0xfe;
      puVar15[0x1e0] = bVar7 & 0xfe;
      LSendDbex('\n');
      return;
    }
    if (*(ushort *)(PTR_lprm_00567530 + 0x318) < 0x65) {
      uVar20 = (uint)((ulong)((long)(int)((uint)*(ushort *)(PTR_lprm_00567530 + 0x318) * 0xb53) *
                             0x51eb851f) >> 0x23);
    }
    else {
      uVar20 = 0x2d4c;
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 100;
    }
    puVar15 = PTR_lprm_00567530;
    uVar22 = (undefined2)(((ulong)(uVar20 * *(int *)(PTR_lprm_00567530 + 0x20)) << 0x23) >> 0x30);
    *(undefined2 *)(PTR_lprm_00567530 + 0xe6) = uVar22;
    *(undefined2 *)(puVar15 + 0x1aa) = uVar22;
    LSendDspCoef(0x60,0x60);
    uVar20 = 0xc2;
    goto LAB_00244360;
  }
  if (param_1 == '\r') {
    if (*(ushort *)(PTR_lprm_00567530 + 800) < 2) {
      if (*(ushort *)(PTR_lprm_00567530 + 800) == 0) {
        puVar4 = (undefined4 *)(PTR_gabProgDBEX_SFX0_00567708 + 0x14a);
        uVar22 = *(undefined2 *)(PTR_gabProgDBEX_MidSw_00567e90 + 4);
        uVar5 = *(undefined4 *)(PTR_gabProgDBEX_MidSw_00567e90 + 6);
        uVar14 = *(undefined2 *)(PTR_gabProgDBEX_MidSw_00567e90 + 10);
        *(undefined4 *)(PTR_gabProgDBEX_SFX1_00567aa0 + 0x150) =
             *(undefined4 *)PTR_gabProgDBEX_MidSw_00567e90;
        *(undefined2 *)(puVar17 + 0x154) = uVar22;
        *puVar4 = uVar5;
        *(undefined2 *)(puVar16 + 0x14e) = uVar14;
        goto LAB_00244238;
      }
    }
    else {
      *(undefined2 *)(PTR_lprm_00567530 + 800) = 1;
    }
    puVar16 = PTR_gabProgDBEX_SFX1_00567aa0;
    puVar15 = PTR_gabProgDBEX_SFX0_00567708;
    puVar4 = (undefined4 *)(PTR_gabProgDBEX_SFX0_00567708 + 0x14a);
    uVar5 = *(undefined4 *)(PTR_gabProgDBEX_MidSw_00567e90 + 0xc);
    uVar22 = *(undefined2 *)(PTR_gabProgDBEX_MidSw_00567e90 + 0x10);
    *(undefined4 *)(PTR_gabProgDBEX_SFX1_00567aa0 + 0x150) = uVar5;
    *(undefined2 *)(puVar16 + 0x154) = uVar22;
    *puVar4 = uVar5;
    *(undefined2 *)(puVar15 + 0x14e) = uVar22;
LAB_00244238:
    LSendDbex('\r');
    return;
  }
  if (param_1 < 0xd) {
    if (*(ushort *)(PTR_lprm_00567530 + 0x31e) < 9) {
      cVar24 = (char)*(ushort *)(PTR_lprm_00567530 + 0x31e);
      cVar21 = cVar24 + ' ';
      cVar24 = cVar24 + -9;
    }
    else {
      cVar24 = -1;
      *(undefined2 *)(PTR_lprm_00567530 + 0x31e) = 8;
      cVar21 = '(';
    }
    puVar16 = PTR_gabProgDBEX_SFX1_00567aa0;
    puVar15 = PTR_gabProgDBEX_SFX0_00567708;
    pbVar1 = PTR_gabProgDBEX_SFX1_00567aa0 + 0x1c8;
    bVar6 = PTR_gabProgDBEX_SFX0_00567708[0x1c2];
    PTR_gabProgDBEX_SFX1_00567aa0[0x1c9] = cVar21;
    puVar16[0x1c8] = *pbVar1 & 0xfe;
    puVar15[0x1c2] = bVar6 | 1;
    puVar15[0x1c3] = cVar24;
    LSendDbex('\f');
    return;
  }
  if (param_1 != '\x0e') {
    if (param_1 == 0xff) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x50) = 0x8000;
      *(undefined2 *)(puVar15 + 0x52) = 0xc000;
      *(undefined2 *)(puVar15 + 0xa6) = 0x7fff;
      *(undefined2 *)(puVar15 + 0x7e) = 0xc000;
      *(undefined2 *)(puVar15 + 0x80) = 0xc000;
      *(undefined2 *)(puVar15 + 0xa0) = 0xc000;
      *(undefined2 *)(puVar15 + 0xac) = 0xc000;
      *(undefined2 *)(puVar15 + 0xae) = 0xc000;
      *(undefined2 *)(puVar15 + 0xb4) = 0xc000;
      *(undefined2 *)(puVar15 + 0xb6) = 0xc000;
      *(undefined2 *)(puVar15 + 0xc6) = 0xc000;
      *(undefined2 *)(puVar15 + 0xcc) = 0xc000;
      *(undefined2 *)(puVar15 + 0x116) = 0x8000;
      *(undefined2 *)(puVar15 + 0x6e) = 0x4000;
      *(undefined2 *)(puVar15 + 0x70) = 0x4000;
      *(undefined2 *)(puVar15 + 0x72) = 0x4000;
      *(undefined2 *)(puVar15 + 0x8e) = 0x4000;
      *(undefined2 *)(puVar15 + 0x9a) = 0x4000;
      *(undefined2 *)(puVar15 + 0x9c) = 0x4000;
      *(undefined2 *)(puVar15 + 0x9e) = 0x4000;
      *(undefined2 *)(puVar15 + 0xa2) = 0x4000;
      *(undefined2 *)(puVar15 + 0xa4) = 0x4000;
      *(undefined2 *)(puVar15 + 0xa8) = 0x4000;
      *(undefined2 *)(puVar15 + 0xaa) = 0x4000;
      *(undefined2 *)(puVar15 + 0xbe) = 0x4000;
      *(undefined2 *)(puVar15 + 0xc2) = 0x4000;
      *(undefined2 *)(puVar15 + 200) = 0x4000;
      *(undefined2 *)(puVar15 + 0xca) = 0x4000;
      *(undefined2 *)(puVar15 + 0xce) = 0x4000;
      *(undefined2 *)(puVar15 + 0xd0) = 0x4000;
      *puVar18 = 1;
      *(undefined2 *)(puVar15 + 0x118) = 0xc000;
      *(undefined2 *)(puVar15 + 0x11a) = 0xe000;
      *(undefined2 *)(puVar15 + 0x16a) = 0x7fff;
      *(undefined2 *)(puVar15 + 0x142) = 0xc000;
      *(undefined2 *)(puVar15 + 0x144) = 0xc000;
      *(undefined2 *)(puVar15 + 0x164) = 0xc000;
      *(undefined2 *)(puVar15 + 0x170) = 0xc000;
      *(undefined2 *)(puVar15 + 0x172) = 0xc000;
      *(undefined2 *)(puVar15 + 0x178) = 0xc000;
      *(undefined2 *)(puVar15 + 0x17a) = 0xc000;
      *(undefined2 *)(puVar15 + 0x18a) = 0xc000;
      *(undefined2 *)(puVar15 + 400) = 0xc000;
      *(undefined2 *)(puVar15 + 0x132) = 0x4000;
      *(undefined2 *)(puVar15 + 0x134) = 0x4000;
      *(undefined2 *)(puVar15 + 0x136) = 0x4000;
      *(undefined2 *)(puVar15 + 0x152) = 0x4000;
      *(undefined2 *)(puVar15 + 0x15e) = 0x4000;
      *(undefined2 *)(puVar15 + 0x160) = 0x4000;
      *(undefined2 *)(puVar15 + 0x162) = 0x4000;
      *(undefined2 *)(puVar15 + 0x166) = 0x4000;
      *(undefined2 *)(puVar15 + 0x168) = 0x4000;
      *(undefined2 *)(puVar15 + 0x16c) = 0x4000;
      *(undefined2 *)(puVar15 + 0x16e) = 0x4000;
      *(undefined2 *)(puVar15 + 0x182) = 0x4000;
      *(undefined2 *)(puVar15 + 0x186) = 0x4000;
      *(undefined2 *)(puVar15 + 0x18c) = 0x4000;
      *(undefined2 *)(puVar15 + 0x18e) = 0x4000;
      *(undefined2 *)(puVar15 + 0x192) = 0x4000;
      *(undefined2 *)(puVar15 + 0x194) = 0x4000;
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
  puVar3 = (ushort *)(PTR_lprm_00567530 + 0x322);
  if (*puVar3 < 2) {
    *(undefined2 *)(PTR_lprm_00567530 + 0x58) = 0xa18;
    if (*puVar3 != 1) {
      lup_dbex('\0');
      lup_dbex('\x01');
      *(undefined2 *)(puVar15 + 0x114) = 0;
      *(undefined2 *)(puVar15 + 0x4c) = 0x2000;
      *(undefined2 *)(puVar15 + 0x4e) = 0x2000;
      *(undefined2 *)(puVar15 + 0x1b0) = 0x1000;
      LSendDspCoef(0x77,0x77);
      LSendDspCoef(0x13,0x19);
      LSendDspCoef(0xc5,0xc5);
      puVar15 = PTR_gabProgDBEX_SFX0_00567708;
      uVar8 = PTR_gabProgSkipDBEX_00567210[1];
      uVar9 = PTR_gabProgSkipDBEX_00567210[2];
      uVar10 = PTR_gabProgSkipDBEX_00567210[3];
      uVar11 = PTR_gabProgSkipDBEX_00567210[4];
      uVar12 = PTR_gabProgSkipDBEX_00567210[5];
      *PTR_gabProgDBEX_SFX0_00567708 = *PTR_gabProgSkipDBEX_00567210;
      puVar15[1] = uVar8;
      puVar15[2] = uVar9;
      puVar15[3] = uVar10;
      puVar15[4] = uVar11;
      puVar15[5] = uVar12;
      goto LAB_00244460;
    }
  }
  else {
    *(undefined2 *)(PTR_lprm_00567530 + 0x322) = 1;
    *(undefined2 *)(puVar15 + 0x58) = 0xa18;
  }
  puVar15 = PTR_lprm_00567530;
  *(undefined2 *)(PTR_lprm_00567530 + 0x4c) = 0x4000;
  *(undefined2 *)(puVar15 + 0x4e) = 0;
  *(undefined2 *)(puVar15 + 0x114) = 0xa18;
  *(undefined2 *)(puVar15 + 0x1b0) = 0;
  LSendDspCoef(0xc5,0xc5);
  LSendDspCoef(0x13,0x19);
  LSendDspCoef(0x77,0x77);
  puVar15 = PTR_gabProgDBEX_SFX0_00567708;
  uVar22 = *(undefined2 *)(PTR_gabProgDBEX_00567df8 + 4);
  *(undefined4 *)PTR_gabProgDBEX_SFX0_00567708 = *(undefined4 *)PTR_gabProgDBEX_00567df8;
  *(undefined2 *)(puVar15 + 4) = uVar22;
  lup_dbex('\0');
  lup_dbex('\x01');
LAB_00244460:
  LSendDbex('\x0e');
  return;
}

