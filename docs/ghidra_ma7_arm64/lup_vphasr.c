/* lup_vphasr @ 0024cf54 1592B */


/* YAMAHA::lup_vphasr(unsigned char) */

void YAMAHA::lup_vphasr(uchar param_1)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uchar uVar10;
  ushort uVar11;
  undefined2 uVar12;
  short sVar13;
  uchar uVar14;
  int iVar15;
  uchar *puVar16;
  uchar uVar17;
  short sVar18;
  uint uVar19;
  
  puVar9 = PTR_lgsendoff_00567b48;
  puVar8 = PTR_lprm_00567530;
  if (param_1 < 7) {
    if (4 < param_1) {
      lchk_prm(1,5);
      uVar14 = '\x02';
      uVar10 = PTR_lprm_00567530[0x310];
      uVar17 = PTR_lprm_00567530[0x312];
      puVar16 = PTR_ltavp_eq0_00567728;
LAB_0024d26c:
      lset_iir('\x01',uVar14,uVar10,uVar17,'\0',puVar16,puVar16);
      return;
    }
    if (param_1 == '\x01') {
      uVar19 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x308);
      if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x308)) {
        uVar19 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0x7f;
      }
    }
    else {
      if (param_1 == '\0') {
        if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x80) {
          uVar10 = (uchar)*(ushort *)(PTR_lprm_00567530 + 0x306);
        }
        else {
          uVar10 = '\x7f';
          *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
        }
        lset_lfo(uVar10,PTR_ltavp_lfo_005678a8,PTR_ltavp_lfo_005678a8);
        return;
      }
      if (param_1 != '\x02') {
        if (param_1 != '\x03') {
          return;
        }
        uVar11 = *(ushort *)(PTR_lprm_00567530 + 0x30c);
        if (uVar11 == 0) {
          uVar11 = 1;
          *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 1;
        }
        else if (0x7f < uVar11) {
          uVar11 = 0x7f;
          *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0x7f;
        }
        puVar16 = PTR_ltavp_fb_00567e50;
        bVar2 = *PTR_ltavp_fb_00567e50;
        uVar12 = lcal_fb(uVar11);
        *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar12;
        uVar10 = '\x01';
        goto LAB_0024d1a0;
      }
      uVar19 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x308);
    }
    if (*(ushort *)(PTR_lprm_00567530 + 0x30a) < 0x80) {
      uVar7 = *(ushort *)(PTR_lprm_00567530 + 0x30a) & 0xff;
      sVar13 = (short)uVar7 * -0x100;
      iVar15 = uVar7 * -0x100 + 0x7fff;
    }
    else {
      iVar15 = 0xff;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x7f;
      sVar13 = -0x7f00;
    }
    puVar9 = PTR_ltavp_lof_00567e38;
    puVar8 = PTR_lprm_00567530;
    *(short *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavp_lof_00567e38 * 2 + 0x26) = sVar13;
    puVar16 = PTR_ltavp_ldp_00567628;
    *(short *)(puVar8 + (ulong)(byte)*PTR_ltavp_ldp_00567628 * 2 + 0x26) =
         (short)((int)(uVar19 * iVar15) / 0x7f);
    LSendCoef('\x01',puVar9);
    uVar10 = '\x01';
    goto LAB_0024d1a0;
  }
  if (param_1 == '\t') {
    if (*(ushort *)(PTR_lprm_00567530 + 0x318) == 0) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
    }
    else if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x318)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
    }
  }
  else {
    if (param_1 < 9) {
      lchk_prm(0,7);
      uVar14 = '\x03';
      uVar10 = PTR_lprm_00567530[0x314];
      uVar17 = PTR_lprm_00567530[0x316];
      puVar16 = PTR_ltavp_eq1_00567380;
      goto LAB_0024d26c;
    }
    if (param_1 != '\v') {
      if (10 < param_1) {
        if (param_1 == 0xff) {
          *(undefined2 *)(PTR_lprm_00567530 + 0xd6) = 0x8000;
          *(undefined2 *)(puVar8 + 0x9a) = 0x4000;
          *(undefined2 *)(puVar8 + 0x98) = 0x4000;
          *(undefined2 *)(puVar8 + 0xfe) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xf2) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xe8) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xdc) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xd2) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xc6) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xc2) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xba) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xb4) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xae) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xa8) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xa0) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x9c) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x94) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x8e) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x8a) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x84) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x7c) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x7a) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x74) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x6e) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x68) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x60) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x5c) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xac) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xf4) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x92) = 0x7fff;
          *puVar9 = 1;
          *(undefined2 *)(puVar8 + 0xde) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x88) = 0x7fff;
          *(undefined2 *)(puVar8 + 200) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x82) = 0x7fff;
          *(undefined2 *)(puVar8 + 0xb0) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x78) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x96) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x72) = 0x7fff;
          *(undefined2 *)(puVar8 + 0x7e) = 0x7fff;
          lup_vphasr('\0');
          lup_vphasr('\x01');
          lup_vphasr('\x03');
          lup_vphasr('\x05');
          lup_vphasr('\a');
          lup_vphasr('\t');
          lup_vphasr('\n');
          *puVar9 = 0;
        }
        return;
      }
      uVar11 = *(ushort *)(PTR_lprm_00567530 + 0x31a);
      if (uVar11 < 4) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 4;
LAB_0024d4a4:
        puVar8 = PTR_lprm_00567530;
        bVar2 = PTR_ltavp_tap_00567ba8[1];
        bVar3 = PTR_ltavp_tap_00567ba8[2];
        bVar4 = PTR_ltavp_tap_00567ba8[3];
        bVar5 = PTR_ltavp_tap_00567ba8[4];
        bVar6 = PTR_ltavp_tap_00567ba8[5];
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavp_tap_00567ba8 * 2 + 0x26) =
             0x7fff;
        *(undefined2 *)(puVar8 + (ulong)bVar2 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar8 + (ulong)bVar3 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar8 + (ulong)bVar4 * 2 + 0x26) = 0x7fff;
        *(undefined2 *)(puVar8 + (ulong)bVar5 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar8 + (ulong)bVar6 * 2 + 0x26) = 0;
      }
      else {
        if (uVar11 < 7) {
          if (uVar11 == 5) {
            bVar2 = PTR_ltavp_tap_00567ba8[1];
            bVar3 = PTR_ltavp_tap_00567ba8[2];
            bVar4 = PTR_ltavp_tap_00567ba8[3];
            bVar5 = PTR_ltavp_tap_00567ba8[4];
            bVar6 = PTR_ltavp_tap_00567ba8[5];
            *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavp_tap_00567ba8 * 2 + 0x26) = 0
            ;
            *(undefined2 *)(puVar8 + (ulong)bVar2 * 2 + 0x26) = 0x7fff;
            *(undefined2 *)(puVar8 + (ulong)bVar3 * 2 + 0x26) = 0;
            *(undefined2 *)(puVar8 + (ulong)bVar4 * 2 + 0x26) = 0;
            *(undefined2 *)(puVar8 + (ulong)bVar5 * 2 + 0x26) = 0x7fff;
            *(undefined2 *)(puVar8 + (ulong)bVar6 * 2 + 0x26) = 0;
            goto LAB_0024d230;
          }
          if (uVar11 != 6) goto LAB_0024d4a4;
        }
        else {
          *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 6;
        }
        puVar8 = PTR_lprm_00567530;
        bVar2 = PTR_ltavp_tap_00567ba8[1];
        bVar3 = PTR_ltavp_tap_00567ba8[2];
        bVar4 = PTR_ltavp_tap_00567ba8[3];
        bVar5 = PTR_ltavp_tap_00567ba8[4];
        bVar6 = PTR_ltavp_tap_00567ba8[5];
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavp_tap_00567ba8 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar8 + (ulong)bVar2 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar8 + (ulong)bVar3 * 2 + 0x26) = 0x7fff;
        *(undefined2 *)(puVar8 + (ulong)bVar4 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar8 + (ulong)bVar5 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar8 + (ulong)bVar6 * 2 + 0x26) = 0x7fff;
      }
LAB_0024d230:
      uVar10 = '\x06';
      puVar16 = PTR_ltavp_tap_00567ba8;
LAB_0024d1a0:
      LSendCoef(uVar10,puVar16);
      return;
    }
  }
  puVar8 = PTR_lprm_00567530;
  uVar11 = *(ushort *)(PTR_lprm_00567530 + 0x31c);
  puVar1 = (ushort *)(PTR_lprm_00567530 + 0x358);
  if (uVar11 < 2) {
    if ((*puVar1 & 1) == 0) goto LAB_0024d3e4;
    sVar13 = 0x4000;
    sVar18 = 0;
LAB_0024d2f8:
    puVar9 = PTR_ltavp_mix_00567a20;
    puVar8 = PTR_lprm_00567530;
    bVar2 = *PTR_ltavp_mix_00567a20;
    *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavp_mix_00567a20[1] * 2 + 0x26) = sVar18;
    *(short *)(puVar8 + (long)(int)(uint)bVar2 * 2 + 0x26) = sVar18;
    if (uVar11 == 0) {
      bVar2 = puVar9[3];
      bVar3 = puVar9[4];
      *(undefined2 *)(puVar8 + (ulong)(byte)puVar9[2] * 2 + 0x26) = 0;
      uVar12 = lcal_adj_var(sVar13);
      *(undefined2 *)(puVar8 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar12;
      *(undefined2 *)(puVar8 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar12;
      goto LAB_0024d360;
    }
  }
  else {
    *(undefined2 *)(PTR_lprm_00567530 + 0x31c) = 1;
    if ((*puVar1 & 1) == 0) {
      uVar11 = 1;
LAB_0024d3e4:
      sVar13 = *(short *)(PTR_ltb_wet_00567b98 +
                         (long)(int)(uint)*(ushort *)(PTR_lprm_00567530 + 0x318) * 2) >> 2;
      sVar18 = *(short *)(PTR_ltb_wet_00567b98 +
                         (long)(int)(0x80 - (uint)*(ushort *)(PTR_lprm_00567530 + 0x318)) * 2) >> 2;
      goto LAB_0024d2f8;
    }
    sVar13 = 0x4000;
    bVar2 = *PTR_ltavp_mix_00567a20;
    *(undefined2 *)(puVar8 + (ulong)(byte)PTR_ltavp_mix_00567a20[1] * 2 + 0x26) = 0;
    *(undefined2 *)(puVar8 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0;
  }
  puVar9 = PTR_ltavp_mix_00567a20;
  bVar2 = PTR_ltavp_mix_00567a20[2];
  uVar12 = lcal_adj_var(sVar13);
  puVar8 = PTR_lprm_00567530;
  *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar12;
  bVar2 = puVar9[3];
  sVar13 = lcal_adj_var(sVar13);
  bVar3 = puVar9[4];
  *(short *)(puVar8 + (long)(int)(uint)bVar2 * 2 + 0x26) = -sVar13;
  *(undefined2 *)(puVar8 + (ulong)bVar3 * 2 + 0x26) = 0;
LAB_0024d360:
  LSendCoef('\x05',PTR_ltavp_mix_00567a20);
  return;
}

