/* lup_vpan @ 0024b8c4 1064B */


/* YAMAHA::lup_vpan(unsigned char) */

void YAMAHA::lup_vpan(uchar param_1)

{
  uchar *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uchar uVar8;
  uchar uVar9;
  undefined2 uVar10;
  int iVar11;
  short sVar12;
  ulong uVar13;
  
  puVar7 = PTR_lgsendoff_00567b48;
  puVar6 = PTR_ltavm2_mix_00567a88;
  puVar5 = PTR_lprm_00567530;
  if (6 < param_1) {
    if (param_1 == '\t') {
      bVar2 = PTR_ltavm2_mix_00567a88[1];
      bVar3 = PTR_ltavm2_mix_00567a88[4];
      sVar12 = 0x4000;
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
        sVar12 = 0x2000;
      }
      uVar10 = lcal_adj_var(sVar12);
      *(undefined2 *)(puVar5 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar10;
      *(undefined2 *)(puVar5 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar10;
      LSendCoef('\x01',puVar6 + 1);
      LSendCoef('\x01',puVar6 + 4);
      return;
    }
    if (8 < param_1) {
      if (param_1 == 0xff) {
        *PTR_lgsendoff_00567b48 = 1;
        *(undefined2 *)(puVar5 + 0xf6) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xf2) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xe2) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xde) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xce) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xba) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xb0) = 0x7fff;
        *(undefined2 *)(puVar5 + 0xa8) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x9e) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x90) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x86) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x7e) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x74) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x72) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x6a) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x60) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x54) = 0x7fff;
        *(undefined2 *)(puVar5 + 0x58) = 0x8000;
        *(undefined2 *)(puVar5 + 0xb4) = 0x8000;
        *(undefined2 *)(puVar5 + 0x92) = 0x8000;
        *(undefined2 *)(puVar5 + 0xb6) = 8;
        *(undefined2 *)(puVar5 + 0x94) = 8;
        *(undefined2 *)(puVar5 + 0xfe) = 0x4000;
        *(undefined2 *)(puVar5 + 0x100) = 0x4000;
        *(undefined2 *)(puVar5 + 0x274) = 2;
        *(undefined2 *)(puVar5 + 0x282) = 2;
        *(undefined2 *)(puVar5 + 0x276) = 3;
        *(undefined2 *)(puVar5 + 0x284) = 3;
        lup_vpan('\0');
        lup_vpan('\x03');
        lup_vpan('\x05');
        lup_vpan('\a');
        lup_vpan('\t');
        *puVar7 = 0;
      }
      return;
    }
    lchk_prm(0,7);
    lset_iir('\x01','\x03',PTR_lprm_00567530[0x314],PTR_lprm_00567530[0x316],'\0',
             PTR_ltavm2_eq1_005678c8,PTR_ltavm2_eq3_00567170);
    return;
  }
  if (4 < param_1) {
    lchk_prm(1,5);
    lset_iir('\x01','\x02',PTR_lprm_00567530[0x310],PTR_lprm_00567530[0x312],'\0',
             PTR_ltavm2_eq0_00567c60,PTR_ltavm2_eq2_00567520);
    return;
  }
  if (param_1 == '\x01') {
    if (*(ushort *)(PTR_lprm_00567530 + 0x308) < 0x80) {
      iVar11 = (int)(char)*(ushort *)(PTR_lprm_00567530 + 0x308);
    }
    else {
      iVar11 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0x7f;
    }
    lset_lfoad(iVar11,PTR_ltavm2_ldp_00567740,PTR_ltavm2_ldp_00567740 + 2);
    return;
  }
  if (param_1 == '\0') {
    if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x80) {
      uVar8 = (uchar)*(ushort *)(PTR_lprm_00567530 + 0x306);
    }
    else {
      uVar8 = '\x7f';
      *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
    }
    lset_lfo(uVar8,PTR_ltavm2_lfo_00567968,PTR_ltavm2_lfo_00567968);
    if (4 < *(ushort *)(PTR_lprm_00567530 + 0x30c)) {
      return;
    }
    lset_lfowf('\x01',PTR_lprm_00567530[0x306],PTR_ltavm2_lw0_005670f8,PTR_ltavm2_lw1_005673d8);
    return;
  }
  if (param_1 == '\x02') goto LAB_0024b974;
  if (param_1 != '\x03') {
    return;
  }
  uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x30c);
  if (uVar4 < 6) {
    if (uVar4 == 5) goto LAB_0024b924;
    if (uVar4 == 4) {
      uVar8 = '^';
      uVar9 = '@';
    }
    else {
      uVar9 = (&DAT_005360e0)[uVar4];
      uVar8 = (&DAT_005360f0)[uVar4];
    }
    puVar1 = PTR_ltavm2_lph_005678e0 + 1;
    lset_lfoph(uVar9,PTR_ltavm2_lph_005678e0,puVar1);
    lset_lfoph(uVar8,puVar1,puVar1);
    uVar8 = '\x01';
  }
  else {
    *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 5;
LAB_0024b924:
    puVar5 = PTR_ltavm2_lph_005678e0;
    lset_lfoph('@',PTR_ltavm2_lph_005678e0,PTR_ltavm2_lph_005678e0);
    lset_lfoph('|',puVar5 + 1,puVar5 + 1);
    uVar8 = '\x02';
  }
  lset_lfowf(uVar8,PTR_lprm_00567530[0x306],PTR_ltavm2_lw0_005670f8,PTR_ltavm2_lw1_005673d8);
  lup_vpan('\x01');
LAB_0024b974:
  uVar13 = (ulong)*(ushort *)(PTR_lprm_00567530 + 0x30a);
  if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x30a)) {
    uVar13 = 0x7f;
    *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x7f;
  }
  uVar8 = (uchar)(uVar13 >> 1);
  if (1 < (ushort)(*(short *)(PTR_lprm_00567530 + 0x30c) - 3U)) {
    uVar8 = '\0';
  }
  lset_lfopd(uVar8,PTR_ltavm2_ldp_00567740 + 1,PTR_ltavm2_ldp_00567740 + 3);
  return;
}

