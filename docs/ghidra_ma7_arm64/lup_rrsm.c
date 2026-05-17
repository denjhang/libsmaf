/* lup_rrsm @ 002465ec 3424B */


/* YAMAHA::lup_rrsm(unsigned char) */

void YAMAHA::lup_rrsm(uchar param_1)

{
  uchar *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ushort uVar16;
  undefined2 uVar17;
  uint uVar18;
  byte *pbVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  uchar local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  long local_8;
  
  puVar13 = PTR_lgsendoff_00567b48;
  puVar12 = PTR_ltarr_fb_00567888;
  puVar11 = PTR_lprm_00567530;
  puVar10 = PTR_rsm_type_00567468;
  puVar9 = PTR_rsm_ofst_00567100;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == '\x06') {
    uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2f2);
    if (0x34 < uVar16) {
      uVar16 = 0x34;
      *(undefined2 *)(PTR_lprm_00567530 + 0x2f2) = 0x34;
    }
    puVar13 = PTR_ltb_rsm_fix_00567a70;
    puVar12 = PTR_ltarr_combg_005678d8;
    puVar11 = PTR_lprm_00567530;
    puVar10 = PTR_rsm_type_00567468;
    puVar1 = PTR_ltarr_combg_005678d8 + 3;
    lset_rsm_combg(*(ushort *)(PTR_lprm_00567530 + 0x2e6),
                   *(short *)(PTR_ltb_rsm_fix_00567a70 +
                             (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 8),uVar16,puVar1);
    puVar15 = PTR_ltb_rsm_dly_dif_00567ef8;
    puVar14 = PTR_ltarr_combd_00567bc8;
    puVar9 = PTR_rsm_ofst_00567100;
    lset_rsm_combd(*(ushort *)(puVar11 + 0x2e8),
                   PTR_ltb_rsm_dly_dif_00567ef8[(ulong)(byte)*PTR_rsm_ofst_00567100 + 1],
                   *(ushort *)(puVar11 + 0x2f2),PTR_ltarr_combd_00567bc8 + 4);
    LSendAdrs('\x03',puVar14 + 5);
    LSendCoef('\x03',puVar1);
    iVar21 = *(int *)puVar11;
    if (iVar21 == 9) {
      lset_rsm_combg(*(ushort *)(puVar11 + 0x2e6),
                     *(short *)(puVar13 + (ulong)(byte)*puVar10 * 0xc + 8),
                     (ushort)(byte)(puVar11[0x2f6] + puVar11[0x2f2]),puVar12 + 9);
      lset_rsm_combd(*(ushort *)(puVar11 + 0x2e8),puVar15[(ulong)(byte)*puVar9 + 3],
                     (ushort)(byte)(puVar11[0x2f6] + puVar11[0x2f2]),puVar14 + 0xc);
      LSendAdrs('\x03',puVar14 + 0xd);
      LSendCoef('\x03',puVar12 + 9);
      iVar21 = *(int *)puVar11;
    }
    puVar9 = PTR_lprm_00567530;
    if (iVar21 == 0xb) {
      puVar1 = PTR_ltarr_combg_005678d8 + 9;
      lset_rsm_combg(*(ushort *)(PTR_lprm_00567530 + 0x2e6),
                     *(short *)(PTR_ltb_rsm_fix_00567a70 +
                               (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 8),
                     (ushort)(byte)(PTR_lprm_00567530[0x2f6] + PTR_lprm_00567530[0x2f2]),puVar1);
      puVar10 = PTR_ltarr_combd_00567bc8;
      lset_rsm_combd(*(ushort *)(puVar9 + 0x2e8),
                     PTR_ltb_rsm_dly_dif_00567ef8[(ulong)(byte)*PTR_rsm_ofst_00567100 + 3],
                     (ushort)(byte)(puVar9[0x2f6] + puVar9[0x2f2]),PTR_ltarr_combd_00567bc8 + 0xc);
      LSendAdrs('\x03',puVar10 + 0xd);
      LSendCoef('\x03',puVar1);
      LSendReverb();
      goto LAB_00246794;
    }
LAB_00246ef0:
    LSendReverb();
    goto LAB_00246794;
  }
  if (param_1 < 7) {
    if (param_1 != '\x02') {
      if (param_1 < 3) {
        if (param_1 == '\0') {
          uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2e6);
          if (0x45 < uVar16) {
            uVar16 = 0x45;
            *(undefined2 *)(PTR_lprm_00567530 + 0x2e6) = 0x45;
          }
          puVar12 = PTR_ltb_rsm_fix_00567a70;
          puVar11 = PTR_ltarr_combg_005678d8;
          puVar10 = PTR_lprm_00567530;
          puVar9 = PTR_rsm_type_00567468;
          lset_rsm_combg(uVar16,*(short *)(PTR_ltb_rsm_fix_00567a70 +
                                          (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 6),
                         *(ushort *)(PTR_lprm_00567530 + 0x2f0),PTR_ltarr_combg_005678d8);
          lset_rsm_combg(*(ushort *)(puVar10 + 0x2e6),
                         *(short *)(puVar12 + (ulong)(byte)*puVar9 * 0xc + 8),
                         *(ushort *)(puVar10 + 0x2f2),puVar11 + 3);
          lset_rsm_combg(*(ushort *)(puVar10 + 0x2e6),
                         *(short *)(puVar12 + (ulong)(byte)*puVar9 * 0xc + 10),
                         *(ushort *)(puVar10 + 0x2f4),puVar11 + 6);
          iVar21 = *(int *)puVar10;
          if (iVar21 == 10) {
            lset_rsm_combg(*(ushort *)(puVar10 + 0x2e6),
                           *(short *)(puVar12 + (ulong)(byte)*puVar9 * 0xc + 10),
                           (ushort)(byte)(puVar10[0x2f6] + puVar10[0x2f4]),puVar11 + 9);
          }
          else if ((iVar21 == 0xb) || (iVar21 == 9)) {
            lset_rsm_combg(*(ushort *)(PTR_lprm_00567530 + 0x2e6),
                           *(short *)(PTR_ltb_rsm_fix_00567a70 +
                                     (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 8),
                           (ushort)(byte)(PTR_lprm_00567530[0x2f6] + PTR_lprm_00567530[0x2f2]),
                           PTR_ltarr_combg_005678d8 + 9);
          }
          LSendCoef('\f',PTR_ltarr_combg_005678d8);
        }
        else if (param_1 == '\x01') {
          uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2e8);
          if (10 < uVar16) {
            uVar16 = 10;
            *(undefined2 *)(PTR_lprm_00567530 + 0x2e8) = 10;
          }
          puVar11 = PTR_ltarr_combd_00567bc8;
          puVar10 = PTR_lprm_00567530;
          lset_rsm_combd(uVar16,'\0',*(ushort *)(PTR_lprm_00567530 + 0x2f0),PTR_ltarr_combd_00567bc8
                        );
          puVar12 = PTR_ltb_rsm_dly_dif_00567ef8;
          puVar9 = PTR_rsm_ofst_00567100;
          lset_rsm_combd(*(ushort *)(puVar10 + 0x2e8),
                         PTR_ltb_rsm_dly_dif_00567ef8[(ulong)(byte)*PTR_rsm_ofst_00567100 + 1],
                         *(ushort *)(puVar10 + 0x2f2),puVar11 + 4);
          lset_rsm_combd(*(ushort *)(puVar10 + 0x2e8),puVar12[(ulong)(byte)*puVar9 + 2],
                         *(ushort *)(puVar10 + 0x2f4),puVar11 + 8);
          iVar21 = *(int *)puVar10;
          if (iVar21 == 10) {
            lset_rsm_combd(*(ushort *)(puVar10 + 0x2e8),puVar12[(ulong)(byte)*puVar9 + 3],
                           (ushort)(byte)(puVar10[0x2f6] + puVar10[0x2f4]),puVar11 + 0xc);
          }
          else if ((iVar21 == 0xb) || (iVar21 == 9)) {
            lset_rsm_combd(*(ushort *)(PTR_lprm_00567530 + 0x2e8),
                           PTR_ltb_rsm_dly_dif_00567ef8[(ulong)(byte)*PTR_rsm_ofst_00567100 + 3],
                           (ushort)(byte)(PTR_lprm_00567530[0x2f6] + PTR_lprm_00567530[0x2f2]),
                           PTR_ltarr_combd_00567bc8 + 0xc);
          }
          local_b = PTR_ltarr_combd_00567bc8[0xb];
          local_a = PTR_ltarr_combd_00567bc8[0xe];
          local_10 = PTR_ltarr_combd_00567bc8[2];
          local_f = PTR_ltarr_combd_00567bc8[3];
          local_e = PTR_ltarr_combd_00567bc8[6];
          local_d = PTR_ltarr_combd_00567bc8[7];
          local_c = PTR_ltarr_combd_00567bc8[10];
          local_9 = PTR_ltarr_combd_00567bc8[0xf];
          LSendAdrs('\b',&local_10);
          lset_apf(*(ushort *)(PTR_lprm_00567530 + 0x2fc),*(ushort *)(PTR_lprm_00567530 + 0x2e8),
                   *(ushort *)(PTR_lrev_fixprm_00567e28 + (ulong)*(uint *)PTR_lprm_00567530 * 2),
                   '\f',PTR_ltarr_apfg_00567940,PTR_ltarr_apfd_00567c68,'\x03');
          LSendReverb();
        }
      }
      else if (param_1 == '\x04') {
        lchk_prm(4,4);
        lset_iir('\x01','\0',PTR_lprm_00567530[0x2ee],'@','\0',PTR_ltarr_eq1_00567988,
                 PTR_ltarr_eq1_00567988);
      }
      else if (param_1 < 5) {
        lchk_prm(3,3);
        lset_iir('\x01','\x01',PTR_lprm_00567530[0x2ec],'@','\0',PTR_ltarr_eq0_00567d20,
                 PTR_ltarr_eq0_00567d20);
      }
      else {
        uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2f0);
        if (0x21 < uVar16) {
          uVar16 = 0x21;
          *(undefined2 *)(PTR_lprm_00567530 + 0x2f0) = 0x21;
        }
        puVar10 = PTR_ltarr_combg_005678d8;
        puVar9 = PTR_lprm_00567530;
        lset_rsm_combg(*(ushort *)(PTR_lprm_00567530 + 0x2e6),
                       *(short *)(PTR_ltb_rsm_fix_00567a70 +
                                 (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 6),uVar16,
                       PTR_ltarr_combg_005678d8);
        puVar11 = PTR_ltarr_combd_00567bc8;
        lset_rsm_combd(*(ushort *)(puVar9 + 0x2e8),'\0',*(ushort *)(puVar9 + 0x2f0),
                       PTR_ltarr_combd_00567bc8);
        LSendAdrs('\x03',puVar11 + 1);
        LSendCoef('\x03',puVar10);
        LSendReverb();
      }
      goto LAB_00246794;
    }
    uVar20 = (ulong)*(uint *)PTR_lprm_00567530;
    bVar3 = (&DAT_00536060)[uVar20];
    uVar22 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x2ea);
    if (bVar3 < uVar22) {
      uVar22 = (uint)bVar3;
      *(ushort *)(PTR_lprm_00567530 + 0x2ea) = (ushort)bVar3;
    }
LAB_00246660:
    if ((ushort)(byte)(&DAT_00536070)[uVar20] < *(ushort *)(PTR_lprm_00567530 + 0x2fa)) {
      *(ushort *)(PTR_lprm_00567530 + 0x2fa) = (ushort)(byte)(&DAT_00536070)[uVar20];
    }
    puVar10 = PTR_ltarr_dly_00567cd8;
    uVar16 = *(ushort *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltarr_dly_00567cd8 * 2 + 0x266);
    uVar22 = lcal_dly10(*(ushort *)(PTR_ltb_dly200_005676a0 + (long)(int)uVar22 * 2));
    puVar9 = PTR_lprm_00567530;
    uVar22 = (uVar22 & 0xffff) / 3 + (uint)uVar16;
    uVar17 = (undefined2)uVar22;
    if ((uVar22 & 0xffff) < 0xfff) {
      bVar3 = puVar10[2];
    }
    else {
      bVar3 = puVar10[2];
      uVar17 = 0xfff;
    }
    *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)(byte)puVar10[3] * 2 + 0x266) = uVar17;
    *(undefined2 *)(puVar9 + (long)(int)(uint)bVar3 * 2 + 0x266) = uVar17;
    uVar18 = lcal_dly10(*(ushort *)
                         (PTR_ltb_dly200_005676a0 + (long)(int)(uint)*(ushort *)(puVar9 + 0x2fa) * 2
                         ));
    pbVar19 = PTR_ltarr_dly_00567cd8 + 1;
    uVar22 = (uVar18 & 0xffff) / 3 + (uVar22 & 0xffff);
    uVar17 = (undefined2)uVar22;
    if (0xffe < (uVar22 & 0xffff)) {
      uVar17 = 0xfff;
    }
    *(undefined2 *)(puVar9 + (ulong)*pbVar19 * 2 + 0x266) = uVar17;
    LSendAdrs('\x03',pbVar19);
    LSendReverb();
    goto LAB_00246794;
  }
  if (param_1 == '\v') {
    uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2fc);
    if (3 < uVar16) {
      uVar16 = 3;
      *(undefined2 *)(PTR_lprm_00567530 + 0x2fc) = 3;
    }
    puVar9 = PTR_ltarr_apfg_00567940;
    lset_apf(uVar16,*(ushort *)(PTR_lprm_00567530 + 0x2e8),
             *(ushort *)(PTR_lrev_fixprm_00567e28 + (ulong)*(uint *)PTR_lprm_00567530 * 2),'\f',
             PTR_ltarr_apfg_00567940,PTR_ltarr_apfd_00567c68,'\x03');
    LSendCoef('\f',puVar9);
    goto LAB_00246794;
  }
  if (0xb < param_1) {
    if (param_1 == '\x0e') {
      bVar3 = *PTR_ltarr_fb_00567888;
      *(undefined2 *)(PTR_lprm_00567530 + 0x302) = 0x40;
      uVar17 = lcal_fb(0x40);
      *(undefined2 *)(puVar11 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar17;
      LSendCoef('\x01',puVar12);
    }
    else if (param_1 == 0xff) {
      uVar2 = *(undefined4 *)PTR_lprm_00567530;
      *(undefined2 *)(PTR_lprm_00567530 + 0x192) = 0x7fff;
      *(undefined2 *)(puVar11 + 0x17e) = 0x7fff;
      *puVar13 = 1;
      *puVar10 = (char)uVar2 + -9;
      *puVar9 = ((char)uVar2 + -9) * '\x04';
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
      local_10 = *PTR_ltarr_combd_00567bc8;
      local_e = PTR_ltarr_combd_00567bc8[8];
      local_d = PTR_ltarr_combd_00567bc8[0xc];
      local_f = PTR_ltarr_combd_00567bc8[4];
      LSendAdrs('\x04',&local_10);
      LSendAdrs('\x01',PTR_ltarr_dly_00567cd8);
      LSendAdrs('\x06',PTR_ltarr_apfd_00567c68);
      *(undefined2 *)(puVar11 + 0x176) = 0;
      *(undefined2 *)(puVar11 + 0x19c) = 0x940;
      *(undefined2 *)(puVar11 + 0x17a) = 0x1280;
      *(undefined2 *)(puVar11 + 0x178) = 0x940;
      *(undefined2 *)(puVar11 + 0x182) = 0x7fc0;
      *(undefined2 *)(puVar11 + 0x180) = 0xdb40;
      *(undefined2 *)(puVar11 + 0x162) = 0x4100;
      *(undefined2 *)(puVar11 + 0x15e) = 0x40c0;
      *(undefined2 *)(puVar11 + 0x1be) = 0x3f00;
      *(undefined2 *)(puVar11 + 0x160) = 0x3f00;
      *(undefined2 *)(puVar11 + 0x168) = 0x4100;
      *(undefined2 *)(puVar11 + 0x164) = 0x40c0;
      *(undefined2 *)(puVar11 + 0x166) = 0x3f00;
      *puVar13 = 0;
    }
    else if (param_1 == '\f') {
      uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2fe);
      if (uVar16 == 0) {
        iVar21 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x2fe) = 1;
        uVar22 = 1;
      }
      else {
        uVar22 = (uint)uVar16;
        if (uVar16 < 0x80) {
          iVar21 = 0x80 - uVar22;
        }
        else {
          iVar21 = 1;
          *(undefined2 *)(PTR_lprm_00567530 + 0x2fe) = 0x7f;
          uVar22 = 0x7f;
        }
      }
      puVar10 = PTR_ltarr_er_00567808;
      puVar9 = PTR_lprm_00567530;
      bVar3 = PTR_ltarr_er_00567808[9];
      uVar17 = *(undefined2 *)(PTR_ltb_wet2_00567188 + (long)(int)uVar22 * 2);
      bVar4 = *PTR_ltarr_er_00567808;
      uVar8 = (undefined2)
              (((ulong)((int)*(short *)(PTR_ltb_wet2_00567188 + (long)iVar21 * 2) *
                       (uint)*(ushort *)
                              (PTR_ltb_rer_gain_005673b0 + (ulong)*(uint *)PTR_lprm_00567530 * 2))
               << 0x21) >> 0x30);
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltarr_er_00567808[1] * 2 + 0x26) = uVar8;
      *(undefined2 *)(puVar9 + (long)(int)(uint)bVar4 * 2 + 0x26) = uVar8;
      *(undefined2 *)(puVar9 + (ulong)bVar3 * 2 + 0x26) = uVar17;
      *(undefined2 *)(puVar9 + (long)(int)(uint)(byte)puVar10[8] * 2 + 0x26) = uVar17;
      *(undefined2 *)(puVar9 + (long)(int)(uint)(byte)puVar10[7] * 2 + 0x26) = uVar17;
      *(undefined2 *)(puVar9 + (long)(int)(uint)(byte)puVar10[6] * 2 + 0x26) = uVar17;
      bVar3 = puVar10[4];
      *(undefined2 *)(puVar9 + (long)(int)(uint)(byte)puVar10[5] * 2 + 0x26) = uVar17;
      bVar4 = puVar10[3];
      bVar5 = puVar10[2];
      *(undefined2 *)(puVar9 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar17;
      *(undefined2 *)(puVar9 + (long)(int)(uint)bVar4 * 2 + 0x26) = uVar17;
      *(undefined2 *)(puVar9 + (long)(int)(uint)bVar5 * 2 + 0x26) = uVar17;
      LSendCoef('\n',puVar10);
    }
    goto LAB_00246794;
  }
  if (param_1 != '\b') {
    if (param_1 < 8) {
      uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2f4);
      if (0x46 < uVar16) {
        uVar16 = 0x46;
        *(undefined2 *)(PTR_lprm_00567530 + 0x2f4) = 0x46;
      }
      puVar13 = PTR_ltb_rsm_fix_00567a70;
      puVar12 = PTR_ltarr_combg_005678d8;
      puVar11 = PTR_lprm_00567530;
      puVar10 = PTR_rsm_type_00567468;
      puVar1 = PTR_ltarr_combg_005678d8 + 6;
      lset_rsm_combg(*(ushort *)(PTR_lprm_00567530 + 0x2e6),
                     *(short *)(PTR_ltb_rsm_fix_00567a70 +
                               (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 10),uVar16,puVar1);
      puVar15 = PTR_ltb_rsm_dly_dif_00567ef8;
      puVar14 = PTR_ltarr_combd_00567bc8;
      puVar9 = PTR_rsm_ofst_00567100;
      lset_rsm_combd(*(ushort *)(puVar11 + 0x2e8),
                     PTR_ltb_rsm_dly_dif_00567ef8[(ulong)(byte)*PTR_rsm_ofst_00567100 + 2],
                     *(ushort *)(puVar11 + 0x2f4),PTR_ltarr_combd_00567bc8 + 8);
      LSendAdrs('\x03',puVar14 + 9);
      LSendCoef('\x03',puVar1);
      if (*(int *)puVar11 == 10) {
        lset_rsm_combg(*(ushort *)(puVar11 + 0x2e6),
                       *(short *)(puVar13 + (ulong)(byte)*puVar10 * 0xc + 10),
                       (ushort)(byte)(puVar11[0x2f6] + puVar11[0x2f4]),puVar12 + 9);
        lset_rsm_combd(*(ushort *)(puVar11 + 0x2e8),puVar15[(ulong)(byte)*puVar9 + 3],
                       (ushort)(byte)(puVar11[0x2f6] + puVar11[0x2f4]),puVar14 + 0xc);
        LSendAdrs('\x03',puVar14 + 0xd);
        LSendCoef('\x03',puVar12 + 9);
        LSendReverb();
        goto LAB_00246794;
      }
      goto LAB_00246ef0;
    }
    if (param_1 != '\n') goto LAB_00246794;
    uVar22 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x2ea);
    uVar20 = (ulong)*(uint *)PTR_lprm_00567530;
    goto LAB_00246660;
  }
  uVar16 = *(ushort *)(PTR_lprm_00567530 + 0x2f6);
  if (0x10 < uVar16) {
    uVar16 = 0x10;
    *(undefined2 *)(PTR_lprm_00567530 + 0x2f6) = 0x10;
  }
  puVar9 = PTR_lprm_00567530;
  iVar21 = *(int *)PTR_lprm_00567530;
  if (iVar21 == 10) {
    lset_rsm_combg(*(ushort *)(PTR_lprm_00567530 + 0x2e6),
                   *(short *)(PTR_ltb_rsm_fix_00567a70 +
                             (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 10),
                   (ushort)(byte)((char)uVar16 + PTR_lprm_00567530[0x2f4]),
                   PTR_ltarr_combg_005678d8 + 9);
    cVar6 = puVar9[0x2f6];
    cVar7 = puVar9[0x2f4];
LAB_00247108:
    lset_rsm_combd(*(ushort *)(puVar9 + 0x2e8),
                   PTR_ltb_rsm_dly_dif_00567ef8[(ulong)(byte)*PTR_rsm_ofst_00567100 + 3],
                   (ushort)(byte)(cVar6 + cVar7),PTR_ltarr_combd_00567bc8 + 0xc);
  }
  else if ((iVar21 == 0xb) || (iVar21 == 9)) {
    lset_rsm_combg(*(ushort *)(PTR_lprm_00567530 + 0x2e6),
                   *(short *)(PTR_ltb_rsm_fix_00567a70 +
                             (ulong)(byte)*PTR_rsm_type_00567468 * 0xc + 8),
                   (ushort)(byte)((char)uVar16 + PTR_lprm_00567530[0x2f2]),
                   PTR_ltarr_combg_005678d8 + 9);
    cVar6 = puVar9[0x2f6];
    cVar7 = puVar9[0x2f2];
    goto LAB_00247108;
  }
  LSendAdrs('\x03',PTR_ltarr_combd_00567bc8 + 0xd);
  LSendCoef('\x03',PTR_ltarr_combg_005678d8 + 9);
  LSendReverb();
LAB_00246794:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

