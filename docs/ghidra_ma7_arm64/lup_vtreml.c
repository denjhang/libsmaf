/* lup_vtreml @ 0024b434 1168B */


/* YAMAHA::lup_vtreml(unsigned char) */

void YAMAHA::lup_vtreml(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uchar uVar6;
  undefined2 uVar7;
  int iVar8;
  short sVar9;
  
  puVar5 = PTR_lgsendoff_00567b48;
  puVar4 = PTR_lprm_00567530;
  if (param_1 < 9) {
    if (param_1 < 7) {
      if (param_1 == '\x02') {
        if (*(ushort *)(PTR_lprm_00567530 + 0x30a) < 0x80) {
          uVar6 = (uchar)(*(ushort *)(PTR_lprm_00567530 + 0x30a) >> 1);
        }
        else {
          uVar6 = '?';
          *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x7f;
        }
        lset_lfopd(uVar6,PTR_ltavm2_ldp_00567740 + 1,PTR_ltavm2_ldp_00567740 + 3);
        return;
      }
      if (2 < param_1) {
        if (param_1 < 5) {
          return;
        }
        lchk_prm(1,5);
        lset_iir('\x01','\x02',PTR_lprm_00567530[0x310],PTR_lprm_00567530[0x312],'\0',
                 PTR_ltavm2_eq0_00567c60,PTR_ltavm2_eq2_00567520);
        return;
      }
      if (param_1 == '\0') {
        if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x80) {
          uVar6 = (uchar)*(ushort *)(PTR_lprm_00567530 + 0x306);
        }
        else {
          uVar6 = '\x7f';
          *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
        }
        lset_lfo(uVar6,PTR_ltavm2_lfo_00567968,PTR_ltavm2_lfo_00567968);
        lset_lfowf('\x01',PTR_lprm_00567530[0x306],PTR_ltavm2_lw0_005670f8,PTR_ltavm2_lw1_005673d8);
        return;
      }
      if (param_1 != '\x01') {
        return;
      }
      if (*(ushort *)(PTR_lprm_00567530 + 0x308) < 0x80) {
        iVar8 = (int)(char)*(ushort *)(PTR_lprm_00567530 + 0x308);
      }
      else {
        iVar8 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0x7f;
      }
      lset_lfoad(iVar8,PTR_ltavm2_ldp_00567740,PTR_ltavm2_ldp_00567740 + 2);
      return;
    }
    goto LAB_0024b684;
  }
  if (param_1 == '\r') {
    uVar3 = *(ushort *)(PTR_lprm_00567530 + 800);
    if (uVar3 < 4) {
      uVar6 = '\x04';
      *(undefined2 *)(PTR_lprm_00567530 + 800) = 4;
    }
    else if (uVar3 < 0x7d) {
      uVar6 = (uchar)uVar3;
    }
    else {
      uVar6 = '|';
      *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x7c;
    }
    lset_lfoph(uVar6,PTR_ltavm2_lph_005678e0 + 1,PTR_ltavm2_lph_005678e0 + 1);
    return;
  }
  if (param_1 < 0xe) {
    if (param_1 != '\t') {
      return;
    }
    if (*(ushort *)(PTR_lprm_00567530 + 0x318) == 0) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
    }
    else if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x318)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
    }
    puVar5 = PTR_ltavm2_mix_00567a88;
    puVar4 = PTR_lprm_00567530;
    sVar9 = 0x4000;
    if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
      sVar9 = 0x2000;
    }
    bVar1 = PTR_ltavm2_mix_00567a88[1];
    bVar2 = PTR_ltavm2_mix_00567a88[4];
    uVar7 = lcal_adj_var(sVar9);
    *(undefined2 *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar7;
    *(undefined2 *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar7;
    LSendCoef('\x01',puVar5 + 1);
    LSendCoef('\x01',puVar5 + 4);
    return;
  }
  if (param_1 != '\x0e') {
    if (param_1 != 0xff) {
      return;
    }
    *PTR_lgsendoff_00567b48 = 1;
    *(undefined2 *)(puVar4 + 0xf6) = 0x7fff;
    *(undefined2 *)(puVar4 + 0xf2) = 0x7fff;
    *(undefined2 *)(puVar4 + 0xe2) = 0x7fff;
    *(undefined2 *)(puVar4 + 0xde) = 0x7fff;
    *(undefined2 *)(puVar4 + 0xce) = 0x7fff;
    *(undefined2 *)(puVar4 + 0xba) = 0x7fff;
    *(undefined2 *)(puVar4 + 0xb0) = 0x7fff;
    *(undefined2 *)(puVar4 + 0xa8) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x9e) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x90) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x86) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x7e) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x74) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x72) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x6a) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x60) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x54) = 0x7fff;
    *(undefined2 *)(puVar4 + 0x58) = 0x8000;
    *(undefined2 *)(puVar4 + 0xb4) = 0x8000;
    *(undefined2 *)(puVar4 + 0x92) = 0x8000;
    *(undefined2 *)(puVar4 + 0xb6) = 8;
    *(undefined2 *)(puVar4 + 0x94) = 8;
    *(undefined2 *)(puVar4 + 0x282) = 2;
    *(undefined2 *)(puVar4 + 0x284) = 3;
    lup_vtreml('\0');
    lup_vtreml('\x01');
    lup_vtreml('\x02');
    lup_vtreml('\t');
    lup_vtreml('\r');
    lup_vtreml('\x0e');
    *puVar5 = 0;
    return;
  }
  if (*(ushort *)(PTR_lprm_00567530 + 0x322) < 2) {
    if (*(ushort *)(PTR_lprm_00567530 + 0x322) != 0) goto LAB_0024b620;
    bVar1 = *PTR_ltavm2_iw_00567860;
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm2_iw_00567860[1] * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar4 + (ulong)(byte)PTR_ltavm2_pm_00567bb8[1] * 2 + 0x26) = 0xe008;
  }
  else {
    *(undefined2 *)(PTR_lprm_00567530 + 0x322) = 1;
LAB_0024b620:
    puVar4 = PTR_lprm_00567530;
    bVar1 = PTR_ltavm2_iw_00567860[1];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavm2_iw_00567860 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar4 + (ulong)bVar1 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar4 + (ulong)(byte)PTR_ltavm2_pm_00567bb8[1] * 2 + 0x26) = 8;
  }
  LSendCoef('\x02',PTR_ltavm2_iw_00567860);
  LSendCoef('\x01',PTR_ltavm2_pm_00567bb8 + 1);
  lup_vtreml('\x05');
LAB_0024b684:
  lchk_prm(0,7);
  lset_iir('\x01','\x03',PTR_lprm_00567530[0x314],PTR_lprm_00567530[0x316],'\0',
           PTR_ltavm2_eq1_005678c8,PTR_ltavm2_eq3_00567170);
  return;
}

