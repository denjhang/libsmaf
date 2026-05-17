/* lup_vchorus @ 0024a44c 1616B */


/* YAMAHA::lup_vchorus(unsigned char) */

void YAMAHA::lup_vchorus(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uchar uVar7;
  ushort uVar8;
  undefined2 uVar9;
  uint uVar10;
  uchar *puVar11;
  undefined2 uVar12;
  short sVar13;
  short sVar14;
  
  puVar6 = PTR_lgsendoff_00567b48;
  puVar5 = PTR_lprm_00567530;
  puVar4 = PTR_ltavm1_ldp_005673c0;
  if (param_1 < 9) {
    if (6 < param_1) {
      lchk_prm(0,7);
      lset_iir('\x01','\x03',PTR_lprm_00567530[0x314],PTR_lprm_00567530[0x316],'\0',
               PTR_ltavm1_eq2_005678a0,PTR_ltavm1_eq5_00567c20);
      return;
    }
    if (param_1 == '\x02') {
      uVar8 = *(ushort *)(PTR_lprm_00567530 + 0x30a);
      if (uVar8 == 0) {
        uVar8 = 1;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 1;
      }
      else if (0x7f < uVar8) {
        uVar8 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x7f;
      }
      puVar11 = PTR_ltavm1_fb_00567110;
      bVar1 = *PTR_ltavm1_fb_00567110;
      bVar2 = PTR_ltavm1_fb_00567110[1];
      uVar9 = lcal_fb_cho(uVar8);
      puVar4 = PTR_lprm_00567530;
      *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar9;
      uVar7 = '\x02';
      *(undefined2 *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar9;
      goto LAB_0024a6d0;
    }
    if (param_1 < 3) {
      if (param_1 == '\0') {
        if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x80) {
          uVar7 = (uchar)*(ushort *)(PTR_lprm_00567530 + 0x306);
        }
        else {
          uVar7 = '\x7f';
          *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
        }
        lset_lfo(uVar7,PTR_ltavm1_lfo_00567648,PTR_ltavm1_lfo_00567648);
        return;
      }
      if (param_1 != '\x01') {
        return;
      }
      if (*(ushort *)(PTR_lprm_00567530 + 0x308) < 0x80) {
        bVar1 = *PTR_ltavm1_ldp_005673c0;
        uVar9 = (undefined2)(((*(ushort *)(PTR_lprm_00567530 + 0x308) & 0x7f) * 0x100) / 0x7f << 3);
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm1_ldp_005673c0[1] * 2 + 0x26) =
             uVar9;
        *(undefined2 *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar9;
        LSendCoef('\x02',puVar4);
        if (*(uint *)(puVar5 + 0xc) < 6) {
          return;
        }
        bVar1 = puVar4[2];
      }
      else {
        *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0x7f;
        puVar4 = PTR_ltavm1_ldp_005673c0;
        bVar1 = *PTR_ltavm1_ldp_005673c0;
        *(undefined2 *)(puVar5 + (ulong)(byte)PTR_ltavm1_ldp_005673c0[1] * 2 + 0x26) = 0x800;
        *(undefined2 *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = 0x800;
        LSendCoef('\x02',puVar4);
        if (*(uint *)(puVar5 + 0xc) < 6) {
          return;
        }
        bVar1 = puVar4[2];
        uVar9 = 0x800;
      }
      *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar9;
      uVar7 = '\x01';
      puVar11 = PTR_ltavm1_ldp_005673c0 + 2;
      goto LAB_0024a6d0;
    }
    if (param_1 != '\x03') {
      if (param_1 < 5) {
        return;
      }
      lchk_prm(1,5);
      lset_iir('\x01','\x02',PTR_lprm_00567530[0x310],PTR_lprm_00567530[0x312],'\0',
               PTR_ltavm1_eq0_00567fa8,PTR_ltavm1_eq3_00567558);
      return;
    }
    uVar10 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x30c);
    if (0x68 < *(ushort *)(PTR_lprm_00567530 + 0x30c)) {
      uVar10 = 0x68;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0x68;
    }
LAB_0024a704:
    if (1 < *(ushort *)(PTR_lprm_00567530 + 0x322)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x322) = 1;
    }
    puVar4 = PTR_ltb_dly50_00567a80;
    uVar8 = lcal_dly10(*(ushort *)(PTR_ltb_dly50_00567a80 + (long)(int)uVar10 * 2));
    if (uVar8 < 0x2ba) {
      uVar10 = lcal_dly10(*(ushort *)
                           (puVar4 + (long)(int)(uint)*(ushort *)(PTR_lprm_00567530 + 0x30c) * 2));
      uVar10 = uVar10 & 0xffff;
      sVar13 = (short)(uVar10 + 1);
      uVar9 = (undefined2)((uVar10 + 1 & 0x1fff) << 3);
      uVar12 = (undefined2)((uVar10 + 0x42 & 0x1fff) << 3);
    }
    else {
      uVar12 = 0x17e0;
      uVar9 = 0x15d8;
      sVar13 = 699;
      uVar10 = 0x2ba;
    }
    puVar4 = PTR_lprm_00567530;
    sVar14 = *(short *)(PTR_lprm_00567530 + 0x322);
    bVar1 = PTR_ltavm1_pm_00567270[1];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavm1_pm_00567270 * 2 + 0x26) = uVar9;
    *(undefined2 *)(puVar4 + (ulong)bVar1 * 2 + 0x26) = uVar12;
    if (sVar14 == 0) {
      sVar13 = (short)(uVar10 - 0x3ff);
      uVar9 = (undefined2)((uVar10 - 0x3ff & 0x1fff) << 3);
      bVar1 = PTR_ltavm1_iw_00567870[1];
      *(undefined2 *)(puVar4 + (ulong)(byte)*PTR_ltavm1_iw_00567870 * 2 + 0x26) = 0x4000;
      *(undefined2 *)(puVar4 + (ulong)bVar1 * 2 + 0x26) = 0x4000;
    }
    else {
      bVar1 = PTR_ltavm1_iw_00567870[1];
      *(undefined2 *)(puVar4 + (ulong)(byte)*PTR_ltavm1_iw_00567870 * 2 + 0x26) = 0x7fff;
      *(undefined2 *)(puVar4 + (ulong)bVar1 * 2 + 0x26) = 0;
    }
    puVar5 = PTR_lprm_00567530;
    puVar4 = PTR_ltavm1_pm_00567270;
    bVar1 = PTR_ltavm1_pm_00567270[3];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm1_pm_00567270[2] * 2 + 0x26) = uVar9;
    *(short *)(puVar5 + (ulong)bVar1 * 2 + 0x26) = (sVar13 + 0x41) * 8;
    LSendCoef('\x02',PTR_ltavm1_iw_00567870);
    LSendCoef('\x04',puVar4);
    lup_vchorus('\x05');
    lup_vchorus('\a');
    lup_vchorus('\n');
  }
  else {
    if (0xc < param_1) {
      if (param_1 != '\x0e') {
        if (param_1 != 0xff) {
          return;
        }
        uVar10 = *(uint *)(PTR_lprm_00567530 + 0xc);
        *(undefined2 *)(PTR_lprm_00567530 + 0x6c) = 0x8000;
        *(undefined2 *)(puVar5 + 0xd8) = 0x7fff;
        uVar9 = 0x7fff;
        if (5 < uVar10) {
          uVar9 = 0xaa80;
        }
        uVar12 = 0;
        if (5 < uVar10) {
          uVar12 = 0x5540;
        }
        *(undefined2 *)(puVar5 + 0xd2) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xc2) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xbc) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x9c) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x96) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x82) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x7c) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x56) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x5e) = 0x8000;
        *(undefined2 *)(puVar5 + 0x58) = uVar9;
        *(undefined2 *)(puVar5 + 0x5a) = uVar12;
        *(undefined2 *)(puVar5 + 0xe8) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x6e) = 0x148;
        *(undefined2 *)(puVar5 + 0x68) = 0x148;
        *(undefined2 *)(puVar5 + 100) = 0x548;
        *(undefined2 *)(puVar5 + 0x6a) = 0x548;
        *puVar6 = 1;
        lup_vchorus('\0');
        lup_vchorus('\x01');
        lup_vchorus('\x02');
        lup_vchorus('\x03');
        *puVar6 = 0;
        return;
      }
      uVar10 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x30c);
      goto LAB_0024a704;
    }
    if (9 < param_1) {
      lchk_prm(2,10);
      lset_iir('\x02','\n',PTR_lprm_00567530[0x31a],PTR_lprm_00567530[0x31c],
               PTR_lprm_00567530[0x31e],PTR_ltavm1_eq1_00567bc0,PTR_ltavm1_eq4_00567168);
      return;
    }
  }
  uVar8 = *(ushort *)(PTR_lprm_00567530 + 0x318);
  uVar10 = (uint)uVar8;
  if (uVar8 == 0) {
    uVar10 = 1;
    *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
  }
  else if (0x7f < uVar8) {
    uVar10 = 0x7f;
    *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
  }
  puVar5 = PTR_ltavm1_mix_005677b0;
  puVar4 = PTR_lprm_00567530;
  if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
    sVar13 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(0x80 - uVar10) * 2) >> 2;
    sVar14 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar10 * 2) >> 2;
  }
  else {
    sVar14 = 0x4000;
    sVar13 = 0;
  }
  bVar1 = *PTR_ltavm1_mix_005677b0;
  bVar2 = PTR_ltavm1_mix_005677b0[1];
  bVar3 = PTR_ltavm1_mix_005677b0[4];
  *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm1_mix_005677b0[3] * 2 + 0x26) = sVar13;
  *(short *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar13;
  uVar9 = lcal_adj_var(sVar14);
  *(undefined2 *)(puVar4 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar9;
  *(undefined2 *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar9;
  LSendCoef('\x02',puVar5);
  LSendCoef('\x02',puVar5 + 3);
  if (*(uint *)(puVar4 + 0xc) < 6) {
    return;
  }
  bVar1 = puVar5[5];
  bVar2 = puVar5[2];
  uVar9 = lcal_adj_var(sVar14);
  *(undefined2 *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar9;
  *(undefined2 *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar9;
  LSendCoef('\x01',puVar5 + 2);
  uVar7 = '\x01';
  puVar11 = puVar5 + 5;
LAB_0024a6d0:
  LSendCoef(uVar7,puVar11);
  return;
}

