/* lup_vampsim @ 00249674 1424B */


/* YAMAHA::lup_vampsim(unsigned char) */

void YAMAHA::lup_vampsim(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  ushort uVar12;
  uchar uVar13;
  short sVar14;
  undefined2 local_38 [2];
  undefined2 local_34;
  int local_30 [4];
  int local_20 [4];
  uchar local_10 [8];
  long local_8;
  
  puVar5 = PTR_lgsendoff_00567b48;
  puVar4 = PTR_lprm_00567530;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == '\n') {
    if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x31a)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 0x7f;
    }
    ldistsub2();
    goto LAB_00249890;
  }
  if (param_1 < 0xb) {
    if (param_1 == '\x02') {
      lchk_prm(6,2);
      if (*(short *)(PTR_lprm_00567530 + 0x308) == 1) {
        uVar13 = '8';
      }
      else {
        uVar13 = '?';
        if (*(short *)(PTR_lprm_00567530 + 0x308) != 3) {
          uVar13 = '@';
        }
      }
      lset_iir('\x01','\0',PTR_lprm_00567530[0x30a],uVar13,'\0',PTR_ltavd_eq2_00567f70,
               PTR_ltavd_eq2_00567f70);
      goto LAB_00249890;
    }
    if (param_1 < 3) {
      if (param_1 != '\0') {
        if (param_1 == '\x01') {
          uVar11 = (ulong)*(ushort *)(PTR_lprm_00567530 + 0x308);
          if (3 < *(ushort *)(PTR_lprm_00567530 + 0x308)) {
            uVar11 = 3;
            *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 3;
          }
          puVar5 = PTR_ltb_asim_00567e60;
          lVar3 = uVar11 * 0xd;
          lset_iir('\0',PTR_ltb_asim_00567e60[lVar3],PTR_ltb_asim_00567e60[lVar3 + 2],
                   PTR_ltb_asim_00567e60[lVar3 + 1] + '\x06','\0',PTR_ltavd_eq0_00567768,
                   PTR_ltavd_eq0_00567768);
          puVar4 = PTR_lprm_00567530;
          uVar9 = *(ushort *)(PTR_lprm_00567530 + 0x308);
          lset_iir('\0',puVar5[(ulong)uVar9 * 0xd + 3],puVar5[(ulong)uVar9 * 0xd + 5],
                   puVar5[(ulong)uVar9 * 0xd + 4] + '\t','\0',PTR_ltavd_eq1_005673e0,
                   PTR_ltavd_eq1_005673e0);
          uVar9 = *(ushort *)(puVar4 + 0x308);
          lset_iir('\x01',puVar5[(ulong)uVar9 * 0xd + 6],puVar5[(ulong)uVar9 * 0xd + 8],
                   puVar5[(ulong)uVar9 * 0xd + 7],'\0',PTR_ltavd_eq4_00567778,PTR_ltavd_eq4_00567778
                  );
          uVar9 = *(ushort *)(puVar4 + 0x308);
          lset_iir('\x02',puVar5[(ulong)uVar9 * 0xd + 9],puVar5[(ulong)uVar9 * 0xd + 0xb],
                   puVar5[(ulong)uVar9 * 0xd + 10],puVar5[(ulong)uVar9 * 0xd + 0xc],
                   PTR_ltavd_eq3_00567b30,PTR_ltavd_eq3_00567b30);
          lup_vampsim('\x02');
        }
        goto LAB_00249890;
      }
      if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x306)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
      }
    }
    else if (param_1 != '\x03') {
      if (param_1 != '\t') goto LAB_00249890;
      if (*(ushort *)(PTR_lprm_00567530 + 0x318) == 0) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
      }
      else if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x318)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
      }
LAB_002497f0:
      uVar9 = *(ushort *)(PTR_lprm_00567530 + 0x31e);
      if (1 < uVar9) {
        uVar9 = 1;
        *(undefined2 *)(PTR_lprm_00567530 + 0x31e) = 1;
      }
      puVar4 = PTR_lprm_00567530;
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
        uVar12 = *(ushort *)(PTR_lprm_00567530 + 0x318);
        sVar14 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(0x80 - (uint)uVar12) * 2) >> 2;
        if (uVar9 != 1) {
          sVar7 = (short)((ulong)(long)*(short *)(PTR_ltb_wet_00567b98 + (long)(int)(uint)uVar12 * 2
                                                 ) >> 4);
          goto LAB_00249b80;
        }
        sVar7 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(uint)uVar12 * 2);
        bVar1 = PTR_ltavd_mix_00567268[2];
        *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_mix_00567268[3] * 2 + 0x26) =
             sVar7 >> 2;
        *(short *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar7 >> 2;
      }
      else {
        sVar7 = 0x1000;
        sVar14 = 0;
LAB_00249b80:
        bVar1 = PTR_ltavd_mix_00567268[2];
        bVar2 = PTR_ltavd_mix_00567268[3];
        uVar6 = lcal_adj_var(sVar7);
        *(undefined2 *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar6;
        *(undefined2 *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar6;
      }
      puVar5 = PTR_lprm_00567530;
      puVar4 = PTR_ltavd_mix_00567268;
      bVar1 = *PTR_ltavd_mix_00567268;
      *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_mix_00567268[1] * 2 + 0x26) = sVar14;
      *(short *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar14;
      LSendCoef('\x04',puVar4);
      goto LAB_00249890;
    }
    uVar9 = *(ushort *)(PTR_lprm_00567530 + 0x30c);
    if (0x7f < uVar9) {
      uVar9 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0x7f;
    }
  }
  else {
    if (0xe < param_1) {
      if (param_1 == 0xff) {
        *PTR_lgsendoff_00567b48 = 1;
        *(undefined2 *)(puVar4 + 0xa8) = 0x7fff;
        *(undefined2 *)(puVar4 + 0x98) = 0x7fff;
        *(undefined2 *)(puVar4 + 0x70) = 0x7fff;
        *(undefined2 *)(puVar4 + 0x56) = 0x7fff;
        *(undefined2 *)(puVar4 + 0x8e) = 0x4000;
        *(undefined2 *)(puVar4 + 0x6c) = 0x4000;
        *(undefined2 *)(puVar4 + 0x6a) = 0x4000;
        *(undefined2 *)(puVar4 + 0x58) = 0x4000;
        *(undefined2 *)(puVar4 + 0x4e) = 0x4000;
        *(undefined2 *)(puVar4 + 0x4c) = 0x4000;
        *(undefined2 *)(puVar4 + 0x62) = 0xc000;
        *(undefined2 *)(puVar4 + 0x5a) = 0x4000;
        *(undefined2 *)(puVar4 + 0x54) = 0x7fff;
        *(undefined2 *)(puVar4 + 0x52) = 0x7fff;
        *(undefined2 *)(puVar4 + 0x5c) = 0xff0;
        *(undefined2 *)(puVar4 + 0x5e) = 1;
        *(undefined2 *)(puVar4 + 0x60) = 0x3ffb;
        lup_vampsim('\0');
        lup_vampsim('\x01');
        lup_vampsim('\t');
        lup_vampsim('\n');
        lup_vdist('\r');
        *puVar5 = 0;
      }
      goto LAB_00249890;
    }
    if (0xc < param_1) {
      uVar9 = *(ushort *)(PTR_lprm_00567530 + 800);
      if (uVar9 < 0x43) {
        iVar8 = -0x3c;
        *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x43;
      }
      else if (uVar9 < 0x68) {
        iVar8 = uVar9 - 0x7f;
      }
      else {
        iVar8 = -0x18;
        *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x67;
      }
      uVar10 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x322);
      if (*(ushort *)(PTR_lprm_00567530 + 0x322) < 10) {
        uVar10 = 10;
        *(undefined2 *)(PTR_lprm_00567530 + 0x322) = 10;
      }
      else if (0x7f < uVar10) {
        uVar10 = 0x7f;
        *(undefined2 *)(PTR_lprm_00567530 + 0x322) = 0x7f;
      }
      builtin_memcpy(local_10,"56:;<).",7);
      local_30[0] = 0;
      local_20[0] = 0;
      local_30[1] = 0;
      local_20[1] = 0;
      local_30[2] = 0;
      local_20[2] = 0;
      lcal_exp(iVar8,uVar10,local_30,local_20,(int *)local_38,2);
      puVar4 = PTR_lprm_00567530;
      *(short *)(PTR_lprm_00567530 + 0x90) = (short)local_30[1];
      *(short *)(puVar4 + 0x92) = (short)local_30[2];
      *(short *)(puVar4 + 0x9a) = (short)local_20[0];
      *(short *)(puVar4 + 0x9c) = (short)local_20[1];
      *(short *)(puVar4 + 0x9e) = (short)local_20[2];
      *(undefined2 *)(puVar4 + 0x78) = local_38[0];
      *(undefined2 *)(puVar4 + 0x82) = local_34;
      LSendCoef('\a',local_10);
      goto LAB_00249890;
    }
    if (param_1 != '\v') {
      if (param_1 != '\f') goto LAB_00249890;
      goto LAB_002497f0;
    }
    uVar9 = *(ushort *)(PTR_lprm_00567530 + 0x30c);
  }
  uVar12 = *(ushort *)(PTR_lprm_00567530 + 0x31c);
  if (1 < uVar12) {
    uVar12 = 1;
    *(undefined2 *)(PTR_lprm_00567530 + 0x31c) = 1;
  }
  ldistsub1(*(ushort *)(PTR_lprm_00567530 + 0x306),uVar9,uVar12);
LAB_00249890:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

