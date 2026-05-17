/* lup_vamb @ 0024c014 860B */


/* YAMAHA::lup_vamb(unsigned char) */

void YAMAHA::lup_vamb(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  
  puVar5 = PTR_lgsendoff_00567b48;
  puVar4 = PTR_lprm_00567530;
  if (param_1 < 7) {
    if (4 < param_1) {
      lchk_prm(1,5);
      lset_iir('\x01','\x02',PTR_lprm_00567530[0x310],PTR_lprm_00567530[0x312],'\0',
               PTR_ltavm2_eq0_00567c60,PTR_ltavm2_eq2_00567520);
      return;
    }
    if (param_1 == '\0') {
      uVar9 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x306);
      if (0x6c < *(ushort *)(PTR_lprm_00567530 + 0x306)) {
        uVar9 = 0x6c;
        *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x6c;
      }
      uVar7 = lcal_dly10(*(ushort *)(PTR_ltb_dly50_00567a80 + (long)(int)uVar9 * 2));
      puVar5 = PTR_ltavm2_pm_00567bb8;
      puVar4 = PTR_lprm_00567530;
      if (0x3fe < uVar7) {
        uVar7 = 0x3fe;
      }
      sVar8 = (uVar7 + 1) * 8;
      *(short *)(PTR_lprm_00567530 + 0xb6) = sVar8;
      *(short *)(puVar4 + 0x94) = sVar8;
      LSendCoef('\x02',puVar5);
      return;
    }
    if (param_1 != '\x01') {
      return;
    }
    if (1 < *(ushort *)(PTR_lprm_00567530 + 0x308)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 1;
    }
  }
  else if (param_1 != '\t') {
    if (param_1 < 9) {
      lchk_prm(0,7);
      lset_iir('\x01','\x03',PTR_lprm_00567530[0x314],PTR_lprm_00567530[0x316],'\0',
               PTR_ltavm2_eq1_005678c8,PTR_ltavm2_eq3_00567170);
      return;
    }
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
    *(undefined2 *)(puVar4 + 0x100) = 0x4000;
    *(undefined2 *)(puVar4 + 0xfe) = 0x4000;
    lup_vamb('\0');
    lup_vamb('\x01');
    lup_vamb('\x05');
    lup_vamb('\a');
    *puVar5 = 0;
    return;
  }
  uVar7 = *(ushort *)(PTR_lprm_00567530 + 0x318);
  uVar9 = (uint)uVar7;
  if (uVar7 == 0) {
    *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
    uVar9 = 1;
    uVar7 = *(ushort *)(PTR_lprm_00567530 + 0x358);
    puVar4 = PTR_lprm_00567530;
  }
  else {
    if (0x7f < uVar7) {
      uVar9 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
    }
    uVar7 = *(ushort *)(PTR_lprm_00567530 + 0x358);
    puVar4 = PTR_lprm_00567530;
  }
  if ((uVar7 & 1) == 0) {
    sVar8 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(0x80 - uVar9) * 2) >> 2;
    sVar6 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar9 * 2) >> 2;
  }
  else {
    sVar6 = 0x4000;
    sVar8 = 0;
  }
  bVar1 = *PTR_ltavm2_mix_00567a88;
  bVar2 = PTR_ltavm2_mix_00567a88[1];
  bVar3 = PTR_ltavm2_mix_00567a88[4];
  PTR_lprm_00567530 = puVar4;
  *(short *)(puVar4 + (ulong)(byte)PTR_ltavm2_mix_00567a88[3] * 2 + 0x26) = sVar8;
  *(short *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar8;
  sVar6 = lcal_adj_var(sVar6);
  sVar8 = *(short *)(puVar4 + 0x308);
  *(short *)(puVar4 + (long)(int)(uint)bVar3 * 2 + 0x26) = sVar6;
  *(short *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = sVar6;
  if (sVar8 == 0) {
    if (-1 < *(short *)(puVar4 + (long)(int)(uint)bVar3 * 2 + 0x26)) {
      *(short *)(puVar4 + (long)(int)(uint)bVar3 * 2 + 0x26) =
           -*(short *)(puVar4 + (long)(int)(uint)bVar3 * 2 + 0x26);
    }
  }
  else if ((sVar8 == 1) && (-1 < sVar6)) {
    *(short *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = -sVar6;
  }
  puVar4 = PTR_ltavm2_mix_00567a88;
  LSendCoef('\x01',PTR_ltavm2_mix_00567a88);
  LSendCoef('\x01',puVar4 + 3);
  LSendCoef('\x01',puVar4 + 1);
  LSendCoef('\x01',puVar4 + 4);
  return;
}

