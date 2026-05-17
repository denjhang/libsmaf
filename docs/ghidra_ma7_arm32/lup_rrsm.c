/* lup_rrsm @ 000fa3e8 2638B */


/* YAMAHA::lup_rrsm(unsigned char) */

void YAMAHA::lup_rrsm(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined2 uVar20;
  uint uVar21;
  ushort uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  byte *pbVar30;
  byte *pbVar31;
  uchar *puVar32;
  undefined1 *puVar33;
  uchar *puVar34;
  int iVar35;
  uint uVar36;
  uchar local_38;
  uchar local_37;
  uchar local_36;
  uchar local_35;
  uchar local_34;
  uchar local_33;
  uchar local_32;
  uchar local_31;
  int local_2c;
  
  iVar19 = DAT_000fae88;
  iVar18 = DAT_000fae84;
  iVar17 = DAT_000fae80;
  iVar16 = DAT_000fae7c;
  iVar15 = DAT_000fae74;
  iVar14 = DAT_000fae70;
  iVar13 = DAT_000fae6c;
  iVar35 = DAT_000fae68;
  iVar29 = DAT_000fae64;
  iVar27 = DAT_000fae60;
  iVar24 = DAT_000fae50;
  iVar23 = DAT_000fae40;
  iVar28 = DAT_000fae38 + 0xfa3fe;
  piVar25 = *(int **)(iVar28 + DAT_000fae3c);
  local_2c = *piVar25;
  if (param_1 == '\x06') {
    piVar26 = *(int **)(iVar28 + DAT_000fae40);
    uVar22 = *(ushort *)((int)piVar26 + 0x2f2);
    if (0x34 < uVar22) {
      uVar22 = 0x34;
      *(undefined2 *)((int)piVar26 + 0x2f2) = 0x34;
    }
    pbVar31 = *(byte **)(iVar28 + iVar19);
    iVar35 = *(int *)(iVar28 + iVar29);
    iVar29 = *(int *)(iVar28 + iVar18);
    lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),*(short *)(iVar29 + (uint)*pbVar31 * 0xc + 8),
                   uVar22,(uchar *)(iVar35 + 3));
    pbVar30 = *(byte **)(iVar28 + DAT_000fae80);
    iVar27 = *(int *)(iVar28 + DAT_000fae7c);
    iVar24 = *(int *)(iVar28 + DAT_000fae60);
    lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)((uint)*pbVar30 + iVar27 + 1),
                   *(ushort *)((int)piVar26 + 0x2f2),(uchar *)(iVar24 + 4));
    LSendAdrs('\x03',(uchar *)(iVar24 + 5));
    LSendCoef('\x03',(uchar *)(iVar35 + 3));
    iVar23 = *piVar26;
    if (iVar23 == 9) {
      lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),*(short *)(iVar29 + (uint)*pbVar31 * 0xc + 8)
                     ,(ushort)(byte)(*(char *)((int)piVar26 + 0x2f2) +
                                    *(char *)((int)piVar26 + 0x2f6)),(uchar *)(iVar35 + 9));
      lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)((uint)*pbVar30 + iVar27 + 3),
                     (ushort)(byte)(*(char *)((int)piVar26 + 0x2f2) +
                                   *(char *)((int)piVar26 + 0x2f6)),(uchar *)(iVar24 + 0xc));
      LSendAdrs('\x03',(uchar *)(iVar24 + 0xd));
      LSendCoef('\x03',(uchar *)(iVar35 + 9));
      iVar23 = *piVar26;
    }
    if (iVar23 == 0xb) {
      lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),*(short *)(iVar29 + (uint)*pbVar31 * 0xc + 8)
                     ,(ushort)(byte)(*(char *)((int)piVar26 + 0x2f2) +
                                    *(char *)((int)piVar26 + 0x2f6)),(uchar *)(iVar35 + 9));
      lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)(iVar27 + (uint)*pbVar30 + 3),
                     (ushort)(byte)(*(char *)((int)piVar26 + 0x2f2) +
                                   *(char *)((int)piVar26 + 0x2f6)),(uchar *)(iVar24 + 0xc));
      LSendAdrs('\x03',(uchar *)(iVar24 + 0xd));
      LSendCoef('\x03',(uchar *)(iVar35 + 9));
    }
LAB_000fa8c4:
    LSendReverb();
    goto LAB_000fa526;
  }
  if (param_1 < 7) {
    if (param_1 == '\x02') {
      piVar26 = *(int **)(iVar28 + DAT_000fae40);
      iVar23 = *piVar26;
      bVar2 = *(byte *)(DAT_000fae90 + 0xfaa9c + iVar23);
      uVar21 = (uint)*(ushort *)((int)piVar26 + 0x2ea);
      if ((uint)bVar2 < (uint)*(ushort *)((int)piVar26 + 0x2ea)) {
        *(ushort *)((int)piVar26 + 0x2ea) = (ushort)bVar2;
        uVar21 = (uint)bVar2;
      }
LAB_000fa42e:
      iVar27 = DAT_000fae4c;
      iVar24 = DAT_000fae48;
      bVar2 = *(byte *)(iVar23 + DAT_000fae44 + 0xfa446);
      if ((ushort)bVar2 < *(ushort *)((int)piVar26 + 0x2fa)) {
        *(ushort *)((int)piVar26 + 0x2fa) = (ushort)bVar2;
      }
      pbVar30 = *(byte **)(iVar28 + iVar24);
      iVar23 = *(int *)(iVar28 + iVar27);
      uVar22 = *(ushort *)((int)piVar26 + (uint)*pbVar30 * 2 + 0x266);
      uVar21 = lcal_dly10(*(ushort *)(iVar23 + uVar21 * 2));
      uVar36 = (uint)uVar22 + uVar21 / 3;
      uVar21 = uVar36 & 0xffff;
      uVar20 = (undefined2)uVar36;
      if (uVar21 < 0xfff) {
        bVar2 = pbVar30[2];
      }
      else {
        bVar2 = pbVar30[2];
        uVar20 = 0xfff;
      }
      uVar22 = *(ushort *)((int)piVar26 + 0x2fa);
      *(undefined2 *)((int)piVar26 + (uint)pbVar30[3] * 2 + 0x266) = uVar20;
      uVar22 = *(ushort *)(iVar23 + (uint)uVar22 * 2);
      *(undefined2 *)((int)piVar26 + (uint)bVar2 * 2 + 0x266) = uVar20;
      uVar36 = lcal_dly10(uVar22);
      uVar21 = uVar21 + uVar36 / 3;
      uVar20 = (undefined2)uVar21;
      if (0xffe < (uVar21 & 0xffff)) {
        uVar20 = 0xfff;
      }
      *(undefined2 *)((int)piVar26 + (uint)pbVar30[1] * 2 + 0x266) = uVar20;
      LSendAdrs('\x03',pbVar30 + 1);
      LSendReverb();
      goto LAB_000fa526;
    }
    if (2 < param_1) {
      if (param_1 == '\x04') {
        lchk_prm(4,4);
        lset_iir('\x01','\0',*(uchar *)(*(int *)(iVar28 + iVar23) + 0x2ee),'@','\0',
                 *(uchar **)(iVar28 + DAT_000fae78),*(uchar **)(iVar28 + DAT_000fae78));
      }
      else if (param_1 < 5) {
        lchk_prm(3,3);
        lset_iir('\x01','\x01',*(uchar *)(*(int *)(iVar28 + DAT_000fae40) + 0x2ec),'@','\0',
                 *(uchar **)(iVar28 + iVar24),*(uchar **)(iVar28 + iVar24));
      }
      else {
        iVar23 = *(int *)(iVar28 + DAT_000fae40);
        uVar22 = *(ushort *)(iVar23 + 0x2f0);
        if (0x21 < uVar22) {
          uVar22 = 0x21;
          *(undefined2 *)(iVar23 + 0x2f0) = 0x21;
        }
        puVar32 = *(uchar **)(iVar28 + iVar29);
        lset_rsm_combg(*(ushort *)(iVar23 + 0x2e6),
                       *(short *)(*(int *)(iVar28 + iVar18) +
                                  (uint)**(byte **)(iVar28 + iVar19) * 0xc + 6),uVar22,puVar32);
        puVar34 = *(uchar **)(iVar28 + iVar27);
        lset_rsm_combd(*(ushort *)(iVar23 + 0x2e8),'\0',*(ushort *)(iVar23 + 0x2f0),puVar34);
        LSendAdrs('\x03',puVar34 + 1);
        LSendCoef('\x03',puVar32);
        LSendReverb();
      }
      goto LAB_000fa526;
    }
    if (param_1 == '\0') {
      piVar26 = *(int **)(iVar28 + DAT_000fae40);
      uVar22 = *(ushort *)((int)piVar26 + 0x2e6);
      if (0x45 < uVar22) {
        uVar22 = 0x45;
        *(undefined2 *)((int)piVar26 + 0x2e6) = 0x45;
      }
      pbVar30 = *(byte **)(iVar28 + iVar19);
      iVar24 = *(int *)(iVar28 + iVar18);
      puVar34 = *(uchar **)(iVar28 + iVar29);
      lset_rsm_combg(uVar22,*(short *)(iVar24 + (uint)*pbVar30 * 0xc + 6),
                     *(ushort *)(piVar26 + 0xbc),puVar34);
      lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),*(short *)(iVar24 + (uint)*pbVar30 * 0xc + 8)
                     ,*(ushort *)((int)piVar26 + 0x2f2),puVar34 + 3);
      lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),
                     *(short *)(iVar24 + (uint)*pbVar30 * 0xc + 10),*(ushort *)(piVar26 + 0xbd),
                     puVar34 + 6);
      iVar23 = *piVar26;
      if (iVar23 == 10) {
        lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),
                       *(short *)(iVar24 + (uint)*pbVar30 * 0xc + 10),
                       (ushort)(byte)((char)piVar26[0xbd] + *(char *)((int)piVar26 + 0x2f6)),
                       puVar34 + 9);
      }
      else if ((iVar23 == 0xb) || (iVar23 == 9)) {
        lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),
                       *(short *)(iVar24 + (uint)*pbVar30 * 0xc + 8),
                       (ushort)(byte)(*(char *)((int)piVar26 + 0x2f2) +
                                     *(char *)((int)piVar26 + 0x2f6)),puVar34 + 9);
      }
      LSendCoef('\f',puVar34);
      goto LAB_000fa526;
    }
    if (param_1 != '\x01') goto LAB_000fa526;
    piVar26 = *(int **)(iVar28 + DAT_000fae40);
    uVar22 = *(ushort *)(piVar26 + 0xba);
    if (10 < uVar22) {
      uVar22 = 10;
      *(undefined2 *)(piVar26 + 0xba) = 10;
    }
    puVar34 = *(uchar **)(iVar28 + iVar27);
    lset_rsm_combd(uVar22,'\0',*(ushort *)(piVar26 + 0xbc),puVar34);
    iVar24 = *(int *)(iVar28 + iVar16);
    pbVar30 = *(byte **)(iVar28 + DAT_000fae80);
    lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)((uint)*pbVar30 + iVar24 + 1),
                   *(ushort *)((int)piVar26 + 0x2f2),puVar34 + 4);
    lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)((uint)*pbVar30 + iVar24 + 2),
                   *(ushort *)(piVar26 + 0xbd),puVar34 + 8);
    iVar23 = *piVar26;
    if (iVar23 == 10) {
      bVar2 = *pbVar30;
      cVar10 = *(char *)((int)piVar26 + 0x2f6);
      cVar11 = (char)piVar26[0xbd];
LAB_000fac50:
      lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)(iVar24 + (uint)bVar2 + 3),
                     (ushort)(byte)(cVar11 + cVar10),puVar34 + 0xc);
    }
    else if ((iVar23 == 0xb) || (iVar23 == 9)) {
      bVar2 = *pbVar30;
      cVar10 = *(char *)((int)piVar26 + 0x2f6);
      cVar11 = *(char *)((int)piVar26 + 0x2f2);
      goto LAB_000fac50;
    }
    local_34 = puVar34[10];
    local_33 = puVar34[0xb];
    local_38 = puVar34[2];
    local_37 = puVar34[3];
    local_36 = puVar34[6];
    local_35 = puVar34[7];
    local_32 = puVar34[0xe];
    local_31 = puVar34[0xf];
    LSendAdrs('\b',&local_38);
    lset_apf(*(ushort *)(piVar26 + 0xbf),*(ushort *)(piVar26 + 0xba),
             *(ushort *)(*(int *)(iVar28 + DAT_000fae6c) + *piVar26 * 2),'\f',
             *(uchar **)(iVar28 + DAT_000fae68),*(uchar **)(iVar28 + DAT_000fae70),'\x03');
    LSendReverb();
    goto LAB_000fa526;
  }
  if (param_1 == '\v') {
    piVar26 = *(int **)(iVar28 + DAT_000fae40);
    uVar22 = *(ushort *)(piVar26 + 0xbf);
    if (3 < uVar22) {
      uVar22 = 3;
      *(undefined2 *)(piVar26 + 0xbf) = 3;
    }
    puVar34 = *(uchar **)(iVar28 + iVar35);
    lset_apf(uVar22,*(ushort *)(piVar26 + 0xba),
             *(ushort *)(*(int *)(iVar28 + iVar13) + *piVar26 * 2),'\f',puVar34,
             *(uchar **)(iVar28 + iVar14),'\x03');
    LSendCoef('\f',puVar34);
    goto LAB_000fa526;
  }
  if (0xb < param_1) {
    if (param_1 == '\x0e') {
      iVar23 = *(int *)(iVar28 + DAT_000fae40);
      *(undefined2 *)(iVar23 + 0x302) = 0x40;
      pbVar30 = *(byte **)(iVar28 + iVar15);
      bVar2 = *pbVar30;
      uVar20 = lcal_fb(0x40);
      *(undefined2 *)(iVar23 + (uint)bVar2 * 2 + 0x26) = uVar20;
      LSendCoef('\x01',pbVar30);
    }
    else if (param_1 == 0xff) {
      puVar33 = *(undefined1 **)(iVar28 + DAT_000fae8c);
      *puVar33 = 1;
      piVar26 = *(int **)(iVar28 + iVar23);
      *(undefined2 *)((int)piVar26 + 0x192) = 0x7fff;
      *(undefined2 *)((int)piVar26 + 0x17e) = 0x7fff;
      iVar24 = *piVar26;
      **(char **)(iVar28 + iVar19) = (char)iVar24 + -9;
      iVar23 = DAT_000fae60;
      **(char **)(iVar28 + iVar17) = (char)(iVar24 << 2) + -0x24;
      lup_rrsm('\0');
      lup_rrsm('\x01');
      lup_rrsm('\x02');
      lup_rrsm('\x03');
      lup_rrsm('\x04');
      lup_rrsm('\x05');
      lup_rrsm('\x06');
      lup_rrsm('\a');
      lup_rrsm('\b');
      lup_rrsm('\v');
      lup_rrsm('\f');
      lup_rrsm('\x0e');
      puVar34 = *(uchar **)(iVar28 + iVar23);
      local_38 = *puVar34;
      local_37 = puVar34[4];
      local_36 = puVar34[8];
      local_35 = puVar34[0xc];
      LSendAdrs('\x04',&local_38);
      iVar23 = DAT_000fae70;
      LSendAdrs('\x01',*(uchar **)(iVar28 + DAT_000fae48));
      LSendAdrs('\x06',*(uchar **)(iVar28 + iVar23));
      *puVar33 = 0;
      *(undefined2 *)((int)piVar26 + 0x17a) = 0x1280;
      *(undefined2 *)((int)piVar26 + 0x182) = 0x7fc0;
      *(undefined2 *)(piVar26 + 0x60) = 0xdb40;
      *(undefined2 *)((int)piVar26 + 0x176) = 0;
      *(undefined2 *)(piVar26 + 0x67) = 0x940;
      *(undefined2 *)(piVar26 + 0x5e) = 0x940;
      *(undefined2 *)((int)piVar26 + 0x162) = 0x4100;
      *(undefined2 *)(piVar26 + 0x5a) = 0x4100;
      *(undefined2 *)((int)piVar26 + 0x15e) = 0x40c0;
      *(undefined2 *)(piVar26 + 0x59) = 0x40c0;
      *(undefined2 *)((int)piVar26 + 0x1be) = 0x3f00;
      *(undefined2 *)(piVar26 + 0x58) = 0x3f00;
      *(undefined2 *)((int)piVar26 + 0x166) = 0x3f00;
    }
    else if (param_1 == '\f') {
      piVar26 = *(int **)(iVar28 + DAT_000fae40);
      uVar21 = (uint)*(ushort *)((int)piVar26 + 0x2fe);
      if (uVar21 == 0) {
        uVar21 = 1;
        iVar23 = 0x7f;
        *(undefined2 *)((int)piVar26 + 0x2fe) = 1;
      }
      else if (uVar21 < 0x80) {
        iVar23 = 0x80 - uVar21;
      }
      else {
        uVar21 = 0x7f;
        iVar23 = 1;
        *(undefined2 *)((int)piVar26 + 0x2fe) = 0x7f;
      }
      pbVar30 = *(byte **)(iVar28 + DAT_000fae5c);
      bVar3 = pbVar30[9];
      bVar4 = pbVar30[8];
      bVar2 = *pbVar30;
      uVar20 = *(undefined2 *)(*(int *)(iVar28 + DAT_000fae54) + uVar21 * 2);
      bVar5 = pbVar30[7];
      bVar6 = pbVar30[6];
      bVar7 = pbVar30[5];
      bVar8 = pbVar30[4];
      bVar9 = pbVar30[3];
      bVar1 = pbVar30[2];
      uVar12 = (undefined2)
               ((uint)*(ushort *)(*(int *)(iVar28 + DAT_000fae58) + *piVar26 * 2) *
                (int)*(short *)(*(int *)(iVar28 + DAT_000fae54) + iVar23 * 2) * 2 >> 0x10);
      *(undefined2 *)((int)piVar26 + (uint)pbVar30[1] * 2 + 0x26) = uVar12;
      *(undefined2 *)((int)piVar26 + (uint)bVar2 * 2 + 0x26) = uVar12;
      *(undefined2 *)((int)piVar26 + (uint)bVar3 * 2 + 0x26) = uVar20;
      *(undefined2 *)((int)piVar26 + (uint)bVar4 * 2 + 0x26) = uVar20;
      *(undefined2 *)((int)piVar26 + (uint)bVar5 * 2 + 0x26) = uVar20;
      *(undefined2 *)((int)piVar26 + (uint)bVar6 * 2 + 0x26) = uVar20;
      *(undefined2 *)((int)piVar26 + (uint)bVar7 * 2 + 0x26) = uVar20;
      *(undefined2 *)((int)piVar26 + (uint)bVar8 * 2 + 0x26) = uVar20;
      *(undefined2 *)((int)piVar26 + (uint)bVar9 * 2 + 0x26) = uVar20;
      *(undefined2 *)((int)piVar26 + (uint)bVar1 * 2 + 0x26) = uVar20;
      LSendCoef('\n',pbVar30);
    }
    goto LAB_000fa526;
  }
  if (param_1 != '\b') {
    if (param_1 < 8) {
      piVar26 = *(int **)(iVar28 + DAT_000fae40);
      uVar22 = *(ushort *)(piVar26 + 0xbd);
      if (0x46 < uVar22) {
        uVar22 = 0x46;
        *(undefined2 *)(piVar26 + 0xbd) = 0x46;
      }
      iVar24 = *(int *)(iVar28 + iVar18);
      pbVar31 = *(byte **)(iVar28 + iVar19);
      iVar23 = *(int *)(iVar28 + iVar29);
      puVar34 = (uchar *)(iVar23 + 6);
      lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),
                     *(short *)(iVar24 + (uint)*pbVar31 * 0xc + 10),uVar22,puVar34);
      pbVar30 = *(byte **)(iVar28 + DAT_000fae80);
      iVar27 = *(int *)(iVar28 + DAT_000fae7c);
      iVar29 = *(int *)(iVar28 + DAT_000fae60);
      lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)((uint)*pbVar30 + iVar27 + 2),
                     *(ushort *)(piVar26 + 0xbd),(uchar *)(iVar29 + 8));
      LSendAdrs('\x03',(uchar *)(iVar29 + 9));
      LSendCoef('\x03',puVar34);
      if (*piVar26 == 10) {
        puVar34 = (uchar *)(iVar23 + 9);
        lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),
                       *(short *)(iVar24 + (uint)*pbVar31 * 0xc + 10),
                       (ushort)(byte)(*(char *)((int)piVar26 + 0x2f6) + (char)piVar26[0xbd]),puVar34
                      );
        lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)((uint)*pbVar30 + iVar27 + 3),
                       (ushort)(byte)((char)piVar26[0xbd] + *(char *)((int)piVar26 + 0x2f6)),
                       (uchar *)(iVar29 + 0xc));
        LSendAdrs('\x03',(uchar *)(iVar29 + 0xd));
        LSendCoef('\x03',puVar34);
      }
      goto LAB_000fa8c4;
    }
    if (param_1 != '\n') goto LAB_000fa526;
    piVar26 = *(int **)(iVar28 + DAT_000fae40);
    iVar23 = *piVar26;
    uVar21 = (uint)*(ushort *)((int)piVar26 + 0x2ea);
    goto LAB_000fa42e;
  }
  piVar26 = *(int **)(iVar28 + DAT_000fae40);
  uVar22 = *(ushort *)((int)piVar26 + 0x2f6);
  iVar23 = *piVar26;
  if (0x10 < uVar22) {
    uVar22 = 0x10;
    *(undefined2 *)((int)piVar26 + 0x2f6) = 0x10;
  }
  if (iVar23 == 10) {
    iVar24 = *(int *)(iVar28 + DAT_000fae64);
    lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),
                   *(short *)(*(int *)(iVar28 + DAT_000fae84) +
                              (uint)**(byte **)(iVar28 + DAT_000fae88) * 0xc + 10),
                   uVar22 + *(byte *)(piVar26 + 0xbd) & 0xff,(uchar *)(iVar24 + 9));
    iVar23 = *(int *)(iVar28 + DAT_000fae7c);
    cVar10 = *(char *)((int)piVar26 + 0x2f6);
    bVar2 = **(byte **)(iVar28 + DAT_000fae80);
    cVar11 = (char)piVar26[0xbd];
LAB_000facb6:
    iVar27 = *(int *)(iVar28 + DAT_000fae60);
    lset_rsm_combd(*(ushort *)(piVar26 + 0xba),*(uchar *)(iVar23 + (uint)bVar2 + 3),
                   (ushort)(byte)(cVar11 + cVar10),(uchar *)(iVar27 + 0xc));
  }
  else {
    if ((iVar23 == 0xb) || (iVar23 == 9)) {
      iVar24 = *(int *)(iVar28 + DAT_000fae64);
      lset_rsm_combg(*(ushort *)((int)piVar26 + 0x2e6),
                     *(short *)(*(int *)(iVar28 + DAT_000fae84) +
                                (uint)**(byte **)(iVar28 + DAT_000fae88) * 0xc + 8),
                     uVar22 + *(byte *)((int)piVar26 + 0x2f2) & 0xff,(uchar *)(iVar24 + 9));
      iVar23 = *(int *)(iVar28 + DAT_000fae7c);
      cVar10 = *(char *)((int)piVar26 + 0x2f6);
      bVar2 = **(byte **)(iVar28 + DAT_000fae80);
      cVar11 = *(char *)((int)piVar26 + 0x2f2);
      goto LAB_000facb6;
    }
    iVar27 = *(int *)(iVar28 + DAT_000fae60);
    iVar24 = *(int *)(iVar28 + DAT_000fae64);
  }
  LSendAdrs('\x03',(uchar *)(iVar27 + 0xd));
  LSendCoef('\x03',(uchar *)(iVar24 + 9));
  LSendReverb();
LAB_000fa526:
  if (local_2c == *piVar25) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

