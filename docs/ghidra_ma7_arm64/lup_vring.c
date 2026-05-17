/* lup_vring @ 0024bcec 808B */


/* YAMAHA::lup_vring(unsigned char) */

void YAMAHA::lup_vring(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  undefined2 uVar8;
  uint uVar9;
  short sVar10;
  
  puVar6 = PTR_lgsendoff_00567b48;
  puVar5 = PTR_lprm_00567530;
  if (param_1 == '\x05') {
    lchk_prm(5,5);
    lset_iir('\x01','\x01',PTR_lprm_00567530[0x310],'@','\0',PTR_ltavm2_eq0_00567c60,
             PTR_ltavm2_eq2_00567520);
    return;
  }
  if (param_1 < 6) {
    if (param_1 == '\0') {
      if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x306)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
      }
    }
    else if (param_1 != '\x01') {
      return;
    }
    if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x308)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0x7f;
    }
    lset_lfo2('\x01',PTR_ltavm2_lw0_005670f8);
    lset_lfo2('\x01',PTR_ltavm2_lw1_005673d8);
    LSendCoef('\x02',PTR_ltavm2_lfo_00567968);
    return;
  }
  if (param_1 == '\t') {
    uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x318);
    uVar9 = (uint)uVar4;
    if (uVar4 == 0) {
      uVar9 = 1;
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
    }
    else if (0x7f < uVar4) {
      uVar9 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
    }
    puVar6 = PTR_ltavm2_mix_00567a88;
    puVar5 = PTR_lprm_00567530;
    if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
      sVar10 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(0x80 - uVar9) * 2) >> 2;
      sVar7 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar9 * 2) >> 2;
    }
    else {
      sVar7 = 0x4000;
      sVar10 = 0;
    }
    bVar1 = *PTR_ltavm2_mix_00567a88;
    bVar2 = PTR_ltavm2_mix_00567a88[2];
    bVar3 = PTR_ltavm2_mix_00567a88[5];
    *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm2_mix_00567a88[3] * 2 + 0x26) = sVar10;
    *(short *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar10;
    uVar8 = lcal_adj_var(sVar7);
    *(undefined2 *)(puVar5 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar8;
    *(undefined2 *)(puVar5 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar8;
    LSendCoef('\x01',puVar6);
    LSendCoef('\x01',puVar6 + 3);
    LSendCoef('\x01',puVar6 + 2);
    LSendCoef('\x01',puVar6 + 5);
    return;
  }
  if (param_1 != 0xff) {
    if (param_1 != '\x06') {
      return;
    }
    lchk_prm(6,6);
    lset_iir('\x01','\0',PTR_lprm_00567530[0x312],'@','\0',PTR_ltavm2_eq1_005678c8,
             PTR_ltavm2_eq3_00567170);
    return;
  }
  *(undefined2 *)(PTR_lprm_00567530 + 0x70) = 0x4000;
  *puVar6 = 1;
  *(undefined2 *)(puVar5 + 0x5e) = 0x4000;
  *(undefined2 *)(puVar5 + 0xa6) = 0x2000;
  *(undefined2 *)(puVar5 + 0x8e) = 0x2000;
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
  *(undefined2 *)(puVar5 + 0xac) = 0x7fff;
  *(undefined2 *)(puVar5 + 0x52) = 0x7fff;
  lup_vring('\0');
  lup_vring('\x05');
  lup_vring('\x06');
  lup_vring('\t');
  *puVar6 = 0;
  return;
}

