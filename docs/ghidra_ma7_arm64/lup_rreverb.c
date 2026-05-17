/* lup_rreverb @ 00245de8 2052B */


/* YAMAHA::lup_rreverb(unsigned char) */

void YAMAHA::lup_rreverb(uchar param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined2 uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uchar local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  long local_8;
  
  puVar12 = PTR_lgsendoff_00567b48;
  puVar11 = PTR_ltarr_fb_00567888;
  puVar10 = PTR_lprm_00567530;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == '\n') {
    uVar15 = *(uint *)PTR_lprm_00567530;
    uVar18 = (ulong)uVar15;
  }
  else {
    if (10 < param_1) {
      if (param_1 != '\r') {
        if (param_1 < 0xe) {
          if (param_1 == '\v') {
            uVar14 = *(ushort *)(PTR_lprm_00567530 + 0x2fc);
            if (3 < uVar14) {
              uVar14 = 3;
              *(undefined2 *)(PTR_lprm_00567530 + 0x2fc) = 3;
            }
            puVar10 = PTR_ltarr_apfg_00567940;
            lset_apf(uVar14,*(ushort *)(PTR_lprm_00567530 + 0x2e8),
                     *(ushort *)(PTR_lrev_fixprm_00567e28 + (ulong)*(uint *)PTR_lprm_00567530 * 2),
                     '\f',PTR_ltarr_apfg_00567940,PTR_ltarr_apfd_00567c68,'\x03');
            LSendCoef('\f',puVar10);
          }
          else if (param_1 == '\f') {
            uVar14 = *(ushort *)(PTR_lprm_00567530 + 0x2fe);
            if (uVar14 == 0) {
              iVar17 = 0x7f;
              *(undefined2 *)(PTR_lprm_00567530 + 0x2fe) = 1;
              uVar15 = 1;
            }
            else {
              uVar15 = (uint)uVar14;
              if (uVar14 < 0x80) {
                iVar17 = 0x80 - uVar15;
              }
              else {
                iVar17 = 1;
                *(undefined2 *)(PTR_lprm_00567530 + 0x2fe) = 0x7f;
                uVar15 = 0x7f;
              }
            }
            puVar11 = PTR_ltarr_er_00567808;
            puVar10 = PTR_lprm_00567530;
            bVar3 = PTR_ltarr_er_00567808[9];
            uVar13 = *(undefined2 *)(PTR_ltb_wet2_00567188 + (long)(int)uVar15 * 2);
            bVar4 = *PTR_ltarr_er_00567808;
            uVar9 = (undefined2)
                    (((ulong)((int)*(short *)(PTR_ltb_wet2_00567188 + (long)iVar17 * 2) *
                             (uint)*(ushort *)
                                    (PTR_ltb_rer_gain_005673b0 +
                                    (ulong)*(uint *)PTR_lprm_00567530 * 2)) << 0x21) >> 0x30);
            *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltarr_er_00567808[1] * 2 + 0x26) =
                 uVar9;
            *(undefined2 *)(puVar10 + (long)(int)(uint)bVar4 * 2 + 0x26) = uVar9;
            *(undefined2 *)(puVar10 + (ulong)bVar3 * 2 + 0x26) = uVar13;
            *(undefined2 *)(puVar10 + (long)(int)(uint)(byte)puVar11[8] * 2 + 0x26) = uVar13;
            *(undefined2 *)(puVar10 + (long)(int)(uint)(byte)puVar11[7] * 2 + 0x26) = uVar13;
            *(undefined2 *)(puVar10 + (long)(int)(uint)(byte)puVar11[6] * 2 + 0x26) = uVar13;
            bVar3 = puVar11[4];
            *(undefined2 *)(puVar10 + (long)(int)(uint)(byte)puVar11[5] * 2 + 0x26) = uVar13;
            bVar4 = puVar11[3];
            bVar5 = puVar11[2];
            *(undefined2 *)(puVar10 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar13;
            *(undefined2 *)(puVar10 + (long)(int)(uint)bVar4 * 2 + 0x26) = uVar13;
            *(undefined2 *)(puVar10 + (long)(int)(uint)bVar5 * 2 + 0x26) = uVar13;
            LSendCoef('\n',puVar11);
          }
        }
        else if (param_1 == '\x0e') {
          bVar3 = *PTR_ltarr_fb_00567888;
          *(undefined2 *)(PTR_lprm_00567530 + 0x302) = 0x40;
          uVar13 = lcal_fb(0x40);
          *(undefined2 *)(puVar10 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar13;
          LSendCoef('\x01',puVar11);
        }
        else if (param_1 == 0xff) {
          *(undefined2 *)(PTR_lprm_00567530 + 0x192) = 0x7fff;
          *(undefined2 *)(puVar10 + 0x17e) = 0x7fff;
          *(undefined2 *)(puVar10 + 0x19c) = 0x940;
          *(undefined2 *)(puVar10 + 0x17a) = 0x1280;
          *(undefined2 *)(puVar10 + 0x178) = 0x940;
          *(undefined2 *)(puVar10 + 0x176) = 0;
          *(undefined2 *)(puVar10 + 0x182) = 0x7fc0;
          *(undefined2 *)(puVar10 + 0x180) = 0xdb40;
          *(undefined2 *)(puVar10 + 0x162) = 0x4100;
          *(undefined2 *)(puVar10 + 0x15e) = 0x40c0;
          *(undefined2 *)(puVar10 + 0x1be) = 0x3f00;
          *(undefined2 *)(puVar10 + 0x160) = 0x3f00;
          *(undefined2 *)(puVar10 + 0x168) = 0x4100;
          *(undefined2 *)(puVar10 + 0x164) = 0x40c0;
          *(undefined2 *)(puVar10 + 0x166) = 0x3f00;
          *puVar12 = 1;
          lup_rreverb('\0');
          lup_rreverb('\x01');
          lup_rreverb('\x03');
          lup_rreverb('\x04');
          lup_rreverb('\v');
          lup_rreverb('\f');
          lup_rreverb('\x0e');
          local_10 = *PTR_ltarr_combd_00567bc8;
          local_f = PTR_ltarr_combd_00567bc8[1];
          local_e = PTR_ltarr_combd_00567bc8[4];
          local_d = PTR_ltarr_combd_00567bc8[5];
          local_c = PTR_ltarr_combd_00567bc8[8];
          local_b = PTR_ltarr_combd_00567bc8[9];
          local_a = PTR_ltarr_combd_00567bc8[0xc];
          local_9 = PTR_ltarr_combd_00567bc8[0xd];
          LSendAdrs('\b',&local_10);
          LSendAdrs('\x01',PTR_ltarr_dly_00567cd8);
          LSendAdrs('\x06',PTR_ltarr_apfd_00567c68);
          *puVar12 = 0;
        }
        goto LAB_00245e70;
      }
      uVar14 = *(ushort *)(PTR_lprm_00567530 + 0x2e6);
LAB_002462a8:
      if (*(ushort *)(PTR_lprm_00567530 + 0x300) == 0) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x300) = 1;
      }
      else if (10 < *(ushort *)(PTR_lprm_00567530 + 0x300)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x300) = 10;
      }
      puVar11 = PTR_ltarr_combg_005678d8;
      puVar10 = PTR_lprm_00567530;
      lset_combg(uVar14,*(ushort *)
                         (PTR_lrev_fixprm_00567e28 + (ulong)*(uint *)PTR_lprm_00567530 * 2),
                 PTR_ltarr_combg_005678d8);
      lVar1 = (ulong)(byte)puVar11[1] + 0x10;
      iVar2 = *(int *)(PTR_ltb_hd_cf_005672c0 + (long)(int)(*(ushort *)(puVar10 + 0x300) - 1) * 4);
      sVar8 = *(short *)(puVar10 + lVar1 * 2 + 6);
      iVar17 = sVar8 * iVar2 >> 0xe;
      if (iVar17 < 0x8000) {
        bVar3 = puVar11[2];
        *(short *)(puVar10 + lVar1 * 2 + 6) = (short)iVar17;
        *(short *)(puVar10 + (ulong)bVar3 * 2 + 0x26) =
             (short)((int)sVar8 * (0x8000 - iVar2) >> 0xe);
      }
      else {
        bVar3 = puVar11[2];
        *(undefined2 *)(puVar10 + lVar1 * 2 + 6) = 0x7fff;
        *(undefined2 *)(puVar10 + (ulong)bVar3 * 2 + 0x26) = 0;
      }
      puVar10 = PTR_lprm_00567530;
      lVar1 = (ulong)(byte)PTR_ltarr_combg_005678d8[4] + 0x10;
      sVar8 = *(short *)(PTR_lprm_00567530 + lVar1 * 2 + 6);
      iVar17 = sVar8 * iVar2 >> 0xe;
      if (iVar17 < 0x8000) {
        bVar3 = PTR_ltarr_combg_005678d8[5];
        *(short *)(PTR_lprm_00567530 + lVar1 * 2 + 6) = (short)iVar17;
        *(short *)(puVar10 + (ulong)bVar3 * 2 + 0x26) =
             (short)((int)sVar8 * (0x8000 - iVar2) >> 0xe);
      }
      else {
        bVar3 = PTR_ltarr_combg_005678d8[5];
        *(undefined2 *)(PTR_lprm_00567530 + lVar1 * 2 + 6) = 0x7fff;
        *(undefined2 *)(puVar10 + (ulong)bVar3 * 2 + 0x26) = 0;
      }
      puVar10 = PTR_lprm_00567530;
      lVar1 = (ulong)(byte)PTR_ltarr_combg_005678d8[7] + 0x10;
      sVar8 = *(short *)(PTR_lprm_00567530 + lVar1 * 2 + 6);
      iVar17 = sVar8 * iVar2 >> 0xe;
      if (iVar17 < 0x8000) {
        bVar3 = PTR_ltarr_combg_005678d8[8];
        *(short *)(PTR_lprm_00567530 + lVar1 * 2 + 6) = (short)iVar17;
        *(short *)(puVar10 + (ulong)bVar3 * 2 + 0x26) =
             (short)((int)sVar8 * (0x8000 - iVar2) >> 0xe);
      }
      else {
        bVar3 = PTR_ltarr_combg_005678d8[8];
        *(undefined2 *)(PTR_lprm_00567530 + lVar1 * 2 + 6) = 0x7fff;
        *(undefined2 *)(puVar10 + (ulong)bVar3 * 2 + 0x26) = 0;
      }
      puVar10 = PTR_lprm_00567530;
      lVar1 = (ulong)(byte)PTR_ltarr_combg_005678d8[10] + 0x10;
      sVar8 = *(short *)(PTR_lprm_00567530 + lVar1 * 2 + 6);
      iVar17 = sVar8 * iVar2 >> 0xe;
      if (iVar17 < 0x8000) {
        bVar3 = PTR_ltarr_combg_005678d8[0xb];
        *(short *)(PTR_lprm_00567530 + lVar1 * 2 + 6) = (short)iVar17;
        *(short *)(puVar10 + (ulong)bVar3 * 2 + 0x26) =
             (short)((int)sVar8 * (0x8000 - iVar2) >> 0xe);
      }
      else {
        bVar3 = PTR_ltarr_combg_005678d8[0xb];
        *(undefined2 *)(PTR_lprm_00567530 + lVar1 * 2 + 6) = 0x7fff;
        *(undefined2 *)(puVar10 + (ulong)bVar3 * 2 + 0x26) = 0;
      }
      LSendCoef('\f',PTR_ltarr_combg_005678d8);
      goto LAB_00245e70;
    }
    if (param_1 != '\x02') {
      if (2 < param_1) {
        if (param_1 == '\x03') {
          lchk_prm(3,3);
          lset_iir('\x01','\x01',PTR_lprm_00567530[0x2ec],
                   PTR_lrrev_hpf_adj_005672b0[*(uint *)PTR_lprm_00567530] + '@','\0',
                   PTR_ltarr_eq0_00567d20,PTR_ltarr_eq0_00567d20);
        }
        else if (param_1 == '\x04') {
          lchk_prm(4,4);
          lset_iir('\x01','\0',PTR_lprm_00567530[0x2ee],'@','\0',PTR_ltarr_eq1_00567988,
                   PTR_ltarr_eq1_00567988);
        }
        goto LAB_00245e70;
      }
      if (param_1 == '\0') {
        uVar14 = *(ushort *)(PTR_lprm_00567530 + 0x2e6);
        if (0x45 < uVar14) {
          uVar14 = 0x45;
          *(undefined2 *)(PTR_lprm_00567530 + 0x2e6) = 0x45;
        }
        goto LAB_002462a8;
      }
      if (param_1 != '\x01') goto LAB_00245e70;
      if (10 < *(ushort *)(PTR_lprm_00567530 + 0x2e8)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x2e8) = 10;
      }
    }
    uVar15 = *(uint *)PTR_lprm_00567530;
    uVar18 = (ulong)uVar15;
    if ((ushort)(byte)(&DAT_00536060)[uVar18] < *(ushort *)(PTR_lprm_00567530 + 0x2ea)) {
      *(ushort *)(PTR_lprm_00567530 + 0x2ea) = (ushort)(byte)(&DAT_00536060)[uVar18];
    }
  }
  if ((ushort)(byte)(&DAT_00536070)[uVar18] < *(ushort *)(PTR_lprm_00567530 + 0x2fa)) {
    *(ushort *)(PTR_lprm_00567530 + 0x2fa) = (ushort)(byte)(&DAT_00536070)[uVar18];
  }
  puVar11 = PTR_ltarr_combd_00567bc8;
  puVar10 = PTR_lprm_00567530;
  lset_combd(*(ushort *)(PTR_lprm_00567530 + 0x2e8),
             *(ushort *)(PTR_lrev_fixprm_00567e28 + (ulong)uVar15 * 2),PTR_ltarr_combd_00567bc8);
  local_10 = puVar11[2];
  local_f = puVar11[3];
  local_e = puVar11[6];
  local_d = puVar11[7];
  local_c = puVar11[10];
  local_a = puVar11[0xe];
  local_9 = puVar11[0xf];
  local_b = puVar11[0xb];
  LSendAdrs('\b',&local_10);
  puVar12 = PTR_ltarr_dly_00567cd8;
  puVar11 = PTR_ltb_dly200_005676a0;
  uVar14 = *(ushort *)(puVar10 + (ulong)(byte)*PTR_ltarr_dly_00567cd8 * 2 + 0x266);
  uVar15 = lcal_dly10(*(ushort *)
                       (PTR_ltb_dly200_005676a0 + (long)(int)(uint)*(ushort *)(puVar10 + 0x2ea) * 2)
                     );
  uVar6 = *(ushort *)(puVar10 + 0x2e8);
  uVar7 = *(ushort *)(puVar11 + (long)(int)(uint)*(ushort *)(puVar10 + 0x2fa) * 2);
  uVar15 = (uVar15 & 0xffff) / 3 + (uint)uVar14;
  bVar3 = puVar12[3];
  uVar13 = (short)uVar15;
  if (0xffe < (uVar15 & 0xffff)) {
    uVar13 = 0xfff;
  }
  *(undefined2 *)(puVar10 + (ulong)(byte)puVar12[2] * 2 + 0x266) = uVar13;
  uVar16 = (uVar15 & 0xffff) + (byte)PTR_ltb_edif_00567ac0[uVar6] / 3;
  uVar13 = (undefined2)uVar16;
  if (0xffe < (uVar16 & 0xffff)) {
    uVar13 = 0xfff;
  }
  *(undefined2 *)(puVar10 + (ulong)bVar3 * 2 + 0x266) = uVar13;
  uVar16 = lcal_dly10(uVar7);
  uVar15 = (uVar16 & 0xffff) / 3 + (uVar15 & 0xffff);
  uVar13 = (undefined2)uVar15;
  if (0xffe < (uVar15 & 0xffff)) {
    uVar13 = 0xfff;
  }
  *(undefined2 *)(puVar10 + (ulong)(byte)puVar12[1] * 2 + 0x266) = uVar13;
  LSendAdrs('\x03',puVar12 + 1);
  LSendReverb();
LAB_00245e70:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

