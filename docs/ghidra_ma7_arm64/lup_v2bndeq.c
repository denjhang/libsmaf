/* lup_v2bndeq @ 0024afd0 400B */


/* YAMAHA::lup_v2bndeq(unsigned char) */

void YAMAHA::lup_v2bndeq(uchar param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  
  puVar4 = PTR_lgsendoff_00567b48;
  puVar3 = PTR_ltavm1_mix_005677b0;
  puVar2 = PTR_lprm_00567530;
  if (3 < param_1) {
    if (param_1 != '\t') {
      if (param_1 == 0xff) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x6c) = 0x8000;
        *puVar4 = 1;
        *(undefined2 *)(puVar2 + 0xd8) = 0x7fff;
        *(undefined2 *)(puVar2 + 0xd2) = 0x7fff;
        *(undefined2 *)(puVar2 + 0xc2) = 0x7fff;
        *(undefined2 *)(puVar2 + 0xbc) = 0x7fff;
        *(undefined2 *)(puVar2 + 0x9c) = 0x7fff;
        *(undefined2 *)(puVar2 + 0x96) = 0x7fff;
        *(undefined2 *)(puVar2 + 0x82) = 0x7fff;
        *(undefined2 *)(puVar2 + 0x7c) = 0x7fff;
        *(undefined2 *)(puVar2 + 0x56) = 0x7fff;
        *(undefined2 *)(puVar2 + 0xa2) = 0x2000;
        *(undefined2 *)(puVar2 + 0x88) = 0x2000;
        lup_v2bndeq('\0');
        lup_v2bndeq('\x02');
        lup_v2bndeq('\t');
        *puVar4 = 0;
      }
      return;
    }
    bVar1 = *PTR_ltavm1_mix_005677b0;
    uVar5 = 0x4000;
    if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
      uVar5 = 0x2000;
    }
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm1_mix_005677b0[3] * 2 + 0x26) = uVar5;
    *(undefined2 *)(puVar2 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar5;
    LSendCoef('\x01',puVar3);
    LSendCoef('\x01',puVar3 + 3);
    return;
  }
  if (param_1 < 2) {
    lchk_prm(1,0);
    lset_iir('\x01','\x02',PTR_lprm_00567530[0x306],PTR_lprm_00567530[0x308],'\0',
             PTR_ltavm1_eq0_00567fa8,PTR_ltavm1_eq3_00567558);
    return;
  }
  lchk_prm(0,2);
  lset_iir('\x01','\x03',PTR_lprm_00567530[0x30a],PTR_lprm_00567530[0x30c],'\0',
           PTR_ltavm1_eq2_005678a0,PTR_ltavm1_eq5_00567c20);
  return;
}

