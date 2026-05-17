/* lup_vwah @ 0024d58c 1116B */


/* YAMAHA::lup_vwah(unsigned char) */

void YAMAHA::lup_vwah(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uchar uVar8;
  short sVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  
  puVar6 = PTR_lgsendoff_00567b48;
  puVar5 = PTR_lprm_00567530;
  if (6 < param_1) {
    if (param_1 == '\t') {
      uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x318);
      uVar12 = (uint)uVar4;
      if (uVar4 == 0) {
        uVar12 = 1;
        *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
      }
      else if (0x7f < uVar4) {
        uVar12 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
      }
      puVar6 = PTR_lprm_00567530;
      puVar5 = PTR_ltavw_mix_00567490;
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
        sVar13 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(0x80 - uVar12) * 2) >> 2;
        sVar9 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar12 * 2) >> 2;
      }
      else {
        sVar9 = 0x4000;
        sVar13 = 0;
      }
      bVar1 = PTR_ltavw_mix_00567490[2];
      bVar2 = PTR_ltavw_mix_00567490[4];
      bVar3 = PTR_ltavw_mix_00567490[5];
      *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavw_mix_00567490[3] * 2 + 0x26) = sVar13;
      *(short *)(puVar6 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar13;
      uVar10 = lcal_adj_var(sVar9);
      *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar10;
      *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar10;
      LSendCoef('\x04',puVar5 + 2);
      return;
    }
    if (8 < param_1) {
      if (param_1 == 0xff) {
        *PTR_lgsendoff_00567b48 = 1;
        *(undefined2 *)(puVar5 + 0xea) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xe8) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xe4) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xe0) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xd0) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xcc) = 0x7fff;
        *(undefined2 *)(puVar5 + 200) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xc4) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xc0) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xbc) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x7a) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x76) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x72) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x6e) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x6a) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x50) = 0x4000;
        *(undefined2 *)(puVar5 + 0x52) = 0x80;
        *(undefined2 *)(puVar5 + 0x5c) = 0x2000;
        *(undefined2 *)(puVar5 + 0x5a) = 0x2000;
        *(undefined2 *)(puVar5 + 0x7c) = 0x8000;
        *(undefined2 *)(puVar5 + 0x78) = 0x8000;
        *(undefined2 *)(puVar5 + 0xb2) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xae) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x9e) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x9a) = 0x7fff;
        *(undefined2 *)(puVar5 + 100) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x62) = 0;
        *(undefined2 *)(puVar5 + 0xd6) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xd4) = 0;
        *(undefined2 *)(puVar5 + 0xec) = 0x8000;
        lup_vwah('\0');
        lup_vwah('\x01');
        lup_vwah('\x03');
        lup_vwah('\x05');
        lup_vwah('\a');
        lup_vwah('\t');
        *puVar6 = 0;
      }
      return;
    }
    lchk_prm(0,7);
    lset_iir('\x01','\x03',PTR_lprm_00567530[0x314],PTR_lprm_00567530[0x316],'\0',
             PTR_ltavw_eq1_005671f8,PTR_ltavw_eq3_00567638);
    return;
  }
  if (4 < param_1) {
    lchk_prm(1,5);
    lset_iir('\x01','\x02',PTR_lprm_00567530[0x310],PTR_lprm_00567530[0x312],'\0',
             PTR_ltavw_eq0_00567cc0,PTR_ltavw_eq2_00567ac8);
    return;
  }
  if (param_1 == '\x01') {
    uVar12 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x308);
    if (0x7f < uVar12) {
      uVar12 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0x7f;
    }
  }
  else {
    if (param_1 == '\0') {
      if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x80) {
        uVar8 = (uchar)*(ushort *)(PTR_lprm_00567530 + 0x306);
      }
      else {
        uVar8 = '\x7f';
        *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
      }
      lset_lfo(uVar8,PTR_ltavw_lfo_00567498,PTR_ltavw_lfo_00567498);
      return;
    }
    if (param_1 != '\x02') {
      if (param_1 != '\x03') {
        return;
      }
      uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x30c);
      if (uVar4 < 0x79) {
        if (uVar4 < 10) {
          *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 10;
        }
        else if (uVar4 != 10) {
          uVar10 = 0;
          if (uVar4 != 0) {
            uVar10 = (undefined2)(-0x50000 / (int)(uint)uVar4);
          }
          goto LAB_0024d5f4;
        }
        uVar10 = 0x8000;
      }
      else {
        uVar10 = 0xf556;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0x78;
      }
LAB_0024d5f4:
      puVar5 = PTR_lprm_00567530;
      bVar1 = *PTR_ltavw_reso_00567620;
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavw_reso_00567620[1] * 2 + 0x26) =
           uVar10;
      *(undefined2 *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar10;
      LSendCoef('\x02',PTR_ltavw_reso_00567620);
      return;
    }
    uVar12 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x308);
  }
  uVar11 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x30a);
  if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x30a)) {
    uVar11 = 0x7f;
    *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x7f;
  }
  puVar7 = PTR_ltavw_lof_00567710;
  puVar6 = PTR_lprm_00567530;
  sVar13 = *(short *)(PTR_ltb_wah_fc_00567798 + (long)(int)uVar11 * 2);
  *(short *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavw_lof_00567710 * 2 + 0x26) = -sVar13;
  puVar5 = PTR_ltavw_ldp_005672d8;
  *(short *)(puVar6 + (ulong)(byte)*PTR_ltavw_ldp_005672d8 * 2 + 0x26) =
       (short)(((sVar13 + 0x8000) * uVar12) / 0x7f);
  LSendCoef('\x01',puVar7);
  LSendCoef('\x01',puVar5);
  return;
}

