/* lup_vflange @ 0024aa9c 1332B */


/* YAMAHA::lup_vflange(unsigned char) */

void YAMAHA::lup_vflange(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uchar uVar6;
  ushort uVar7;
  short sVar8;
  undefined2 uVar9;
  short sVar10;
  uint uVar11;
  
  puVar5 = PTR_lgsendoff_00567b48;
  puVar4 = PTR_lprm_00567530;
  if (param_1 < 9) {
    if (6 < param_1) {
      lchk_prm(0,7);
      lset_iir('\x01','\x03',PTR_lprm_00567530[0x314],PTR_lprm_00567530[0x316],'\0',
               PTR_ltavm1_eq2_005678a0,PTR_ltavm1_eq5_00567c20);
      return;
    }
    if (param_1 == '\x02') {
      uVar7 = *(ushort *)(PTR_lprm_00567530 + 0x30a);
      if (uVar7 == 0) {
        uVar7 = 1;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 1;
      }
      else if (0x7f < uVar7) {
        uVar7 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x7f;
      }
      puVar4 = PTR_ltavm1_fb_00567110;
      bVar1 = *PTR_ltavm1_fb_00567110;
      bVar2 = PTR_ltavm1_fb_00567110[1];
      uVar9 = lcal_fb(uVar7);
      puVar5 = PTR_lprm_00567530;
      *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar9;
      *(undefined2 *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar9;
      LSendCoef('\x02',puVar4);
      return;
    }
    if (param_1 < 3) {
      if (param_1 == '\0') goto LAB_0024ab80;
      if (param_1 == '\x01') {
        if (*(ushort *)(PTR_lprm_00567530 + 0x308) < 0x80) {
          bVar1 = *PTR_ltavm1_ldp_005673c0;
          bVar2 = PTR_ltavm1_ldp_005673c0[1];
          uVar9 = (undefined2)
                  ((((uint)*(ushort *)(PTR_lprm_00567530 + 0x308) * 0x80) / 0x7f & 0xfff) << 4);
        }
        else {
          *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0x7f;
          uVar9 = 0x800;
          bVar1 = *PTR_ltavm1_ldp_005673c0;
          bVar2 = PTR_ltavm1_ldp_005673c0[1];
        }
        puVar4 = PTR_lprm_00567530;
        *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar9;
        *(undefined2 *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar9;
        LSendCoef('\x02',PTR_ltavm1_ldp_005673c0);
        return;
      }
    }
    else {
      if (param_1 == '\x03') {
        uVar11 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x30c);
        if (0x68 < *(ushort *)(PTR_lprm_00567530 + 0x30c)) {
          uVar11 = 0x68;
          *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0x68;
        }
        puVar4 = PTR_ltb_dly50_00567a80;
        uVar7 = lcal_dly10(*(ushort *)(PTR_ltb_dly50_00567a80 + (long)(int)uVar11 * 2));
        sVar10 = 0x17e0;
        if (uVar7 < 0x2fb) {
          sVar10 = lcal_dly10(*(ushort *)
                               (puVar4 + (long)(int)(uint)*(ushort *)(PTR_lprm_00567530 + 0x30c) * 2
                               ));
          sVar10 = (sVar10 + 1) * 8;
        }
        puVar5 = PTR_lprm_00567530;
        puVar4 = PTR_ltavm1_pm_00567270;
        bVar1 = PTR_ltavm1_pm_00567270[1];
        bVar2 = PTR_ltavm1_pm_00567270[2];
        bVar3 = PTR_ltavm1_pm_00567270[3];
        *(short *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavm1_pm_00567270 * 2 + 0x26) = sVar10;
        *(short *)(puVar5 + (ulong)bVar1 * 2 + 0x26) = sVar10;
        *(short *)(puVar5 + (ulong)bVar2 * 2 + 0x26) = sVar10;
        *(short *)(puVar5 + (ulong)bVar3 * 2 + 0x26) = sVar10;
        LSendCoef('\x04',puVar4);
        lup_vflange('\x05');
        lup_vflange('\a');
        lup_vflange('\n');
LAB_0024ad6c:
        uVar7 = *(ushort *)(PTR_lprm_00567530 + 0x318);
        uVar11 = (uint)uVar7;
        if (uVar7 == 0) {
          uVar11 = 1;
          *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
        }
        else if (0x7f < uVar7) {
          uVar11 = 0x7f;
          *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
        }
        puVar5 = PTR_ltavm1_mix_005677b0;
        puVar4 = PTR_lprm_00567530;
        if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
          sVar10 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(0x80 - uVar11) * 2) >> 2;
          sVar8 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar11 * 2) >> 2;
        }
        else {
          sVar10 = 0;
          sVar8 = 0x4000;
        }
        bVar1 = *PTR_ltavm1_mix_005677b0;
        bVar2 = PTR_ltavm1_mix_005677b0[4];
        bVar3 = PTR_ltavm1_mix_005677b0[1];
        *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm1_mix_005677b0[3] * 2 + 0x26) = sVar10;
        *(short *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar10;
        uVar9 = lcal_adj_var(sVar8);
        *(undefined2 *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar9;
        *(undefined2 *)(puVar4 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar9;
        LSendCoef('\x02',puVar5);
        LSendCoef('\x02',puVar5 + 3);
        return;
      }
      if (4 < param_1) {
        lchk_prm(1,5);
        lset_iir('\x01','\x02',PTR_lprm_00567530[0x310],PTR_lprm_00567530[0x312],'\0',
                 PTR_ltavm1_eq0_00567fa8,PTR_ltavm1_eq3_00567558);
        return;
      }
    }
  }
  else {
    if (param_1 < 0xd) {
      if (param_1 < 10) goto LAB_0024ad6c;
      lchk_prm(2,10);
      lset_iir('\x02','\n',PTR_lprm_00567530[0x31a],PTR_lprm_00567530[0x31c],
               PTR_lprm_00567530[0x31e],PTR_ltavm1_eq1_00567bc0,PTR_ltavm1_eq4_00567168);
LAB_0024ab80:
      if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x80) {
        uVar6 = (uchar)*(ushort *)(PTR_lprm_00567530 + 0x306);
      }
      else {
        uVar6 = '\x7f';
        *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
      }
      lset_lfo(uVar6,PTR_ltavm1_lfo_00567648,PTR_ltavm1_lfo_00567648);
      return;
    }
    if (param_1 == '\r') {
      uVar7 = *(ushort *)(PTR_lprm_00567530 + 800);
      if (uVar7 < 4) {
        uVar6 = '\x04';
        *(undefined2 *)(PTR_lprm_00567530 + 800) = 4;
      }
      else if (uVar7 < 0x7d) {
        uVar6 = (uchar)uVar7;
      }
      else {
        uVar6 = '|';
        *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x7c;
      }
      lset_lfoph(uVar6,PTR_ltavm1_lph_00567eb8,PTR_ltavm1_lph_00567eb8);
      return;
    }
    if (param_1 == 0xff) {
      *PTR_lgsendoff_00567b48 = 1;
      *(undefined2 *)(puVar4 + 0x6c) = 0x8000;
      *(undefined2 *)(puVar4 + 0xd8) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xd2) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xc2) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xbc) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x9c) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x96) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x82) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x7c) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x56) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x5e) = 0x8000;
      *(undefined2 *)(puVar4 + 0xe8) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xec) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x288) = 2;
      lup_vflange('\0');
      lup_vflange('\x01');
      lup_vflange('\x02');
      lup_vflange('\x03');
      lup_vflange('\r');
      *puVar5 = 0;
    }
  }
  return;
}

