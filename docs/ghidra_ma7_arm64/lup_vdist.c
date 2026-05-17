/* lup_vdist @ 00249118 1372B */


/* YAMAHA::lup_vdist(unsigned char) */

void YAMAHA::lup_vdist(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uchar uVar10;
  ushort uVar11;
  short sVar12;
  undefined2 local_38 [2];
  undefined2 local_34;
  int local_30 [4];
  int local_20 [4];
  uchar local_10 [8];
  long local_8;
  
  puVar3 = PTR_lprm_00567530;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 < 9) {
    if (5 < param_1) {
      lchk_prm(2,6);
      lset_iir('\x02','\n',PTR_lprm_00567530[0x312],PTR_lprm_00567530[0x314],
               PTR_lprm_00567530[0x316],PTR_ltavd_eq3_00567b30,PTR_ltavd_eq3_00567b30);
      goto LAB_002492b4;
    }
    if (param_1 < 3) {
      if (param_1 != '\0') {
        lchk_prm(1,1);
        lset_iir('\x01','\x02',PTR_lprm_00567530[0x308],PTR_lprm_00567530[0x30a],'\0',
                 PTR_ltavd_eq4_00567778,PTR_ltavd_eq4_00567778);
        goto LAB_002492b4;
      }
      if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x306)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x7f;
      }
    }
    else {
      if (param_1 == '\x03') {
        lchk_prm(6,3);
        lset_iir('\x01','\0',PTR_lprm_00567530[0x30c],'@','\0',PTR_ltavd_eq2_00567f70,
                 PTR_ltavd_eq2_00567f70);
        goto LAB_002492b4;
      }
      if (param_1 != '\x04') goto LAB_002492b4;
    }
    uVar8 = *(ushort *)(PTR_lprm_00567530 + 0x30e);
    if (0x7f < uVar8) {
      uVar8 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0x7f;
    }
LAB_0024928c:
    uVar11 = *(ushort *)(PTR_lprm_00567530 + 0x31c);
    if (1 < uVar11) {
      uVar11 = 1;
      *(undefined2 *)(PTR_lprm_00567530 + 0x31c) = 1;
    }
    ldistsub1(*(ushort *)(PTR_lprm_00567530 + 0x306),uVar8,uVar11);
    goto LAB_002492b4;
  }
  if (param_1 != '\f') {
    if (0xc < param_1) {
      if (param_1 < 0xf) {
        uVar8 = *(ushort *)(PTR_lprm_00567530 + 800);
        if (uVar8 < 0x43) {
          iVar7 = -0x3c;
          *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x43;
        }
        else if (uVar8 < 0x68) {
          iVar7 = uVar8 - 0x7f;
        }
        else {
          iVar7 = -0x18;
          *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x67;
        }
        uVar9 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x322);
        if (*(ushort *)(PTR_lprm_00567530 + 0x322) < 10) {
          uVar9 = 10;
          *(undefined2 *)(PTR_lprm_00567530 + 0x322) = 10;
        }
        else if (0x7f < uVar9) {
          uVar9 = 0x7f;
          *(undefined2 *)(PTR_lprm_00567530 + 0x322) = 0x7f;
        }
        builtin_memcpy(local_10,"56:;<).",7);
        local_30[0] = 0;
        local_20[0] = 0;
        local_30[1] = 0;
        local_20[1] = 0;
        local_30[2] = 0;
        local_20[2] = 0;
        lcal_exp(iVar7,uVar9,local_30,local_20,(int *)local_38,2);
        puVar3 = PTR_lprm_00567530;
        *(short *)(PTR_lprm_00567530 + 0x90) = (short)local_30[1];
        *(short *)(puVar3 + 0x92) = (short)local_30[2];
        *(short *)(puVar3 + 0x9a) = (short)local_20[0];
        *(short *)(puVar3 + 0x9c) = (short)local_20[1];
        *(short *)(puVar3 + 0x9e) = (short)local_20[2];
        *(undefined2 *)(puVar3 + 0x78) = local_38[0];
        *(undefined2 *)(puVar3 + 0x82) = local_34;
        LSendCoef('\a',local_10);
      }
      else if (param_1 == 0xff) {
        iVar7 = *(int *)(PTR_lprm_00567530 + 0xc);
        *PTR_lgsendoff_00567b48 = 1;
        *(undefined2 *)(puVar3 + 0xa8) = 0x7fff;
        *(undefined2 *)(puVar3 + 0x98) = 0x7fff;
        *(undefined2 *)(puVar3 + 0x70) = 0x7fff;
        *(undefined2 *)(puVar3 + 0x56) = 0x7fff;
        *(undefined2 *)(puVar3 + 0x8e) = 0x4000;
        *(undefined2 *)(puVar3 + 0x6c) = 0x4000;
        *(undefined2 *)(puVar3 + 0x6a) = 0x4000;
        *(undefined2 *)(puVar3 + 0x58) = 0x4000;
        *(undefined2 *)(puVar3 + 0x4e) = 0x4000;
        *(undefined2 *)(puVar3 + 0x4c) = 0x4000;
        *(undefined2 *)(puVar3 + 0x62) = 0xc000;
        *(undefined2 *)(puVar3 + 0x5a) = 0x4000;
        *(undefined2 *)(puVar3 + 0x54) = 0x7fff;
        *(undefined2 *)(puVar3 + 0x52) = 0x7fff;
        *(undefined2 *)(puVar3 + 0x5c) = 0xff0;
        *(undefined2 *)(puVar3 + 0x5e) = 1;
        *(undefined2 *)(puVar3 + 0x60) = 0x3ffb;
        if (iVar7 == 1) {
          lset_iir('\0','\x01','\0','I','\0',PTR_ltavd_eq0_00567768,PTR_ltavd_eq0_00567768);
          uVar10 = '6';
        }
        else {
          lset_iir('\0','\x01','\b','I','\0',PTR_ltavd_eq0_00567768,PTR_ltavd_eq0_00567768);
          uVar10 = ',';
        }
        lset_iir('\0','\0',uVar10,'L','\0',PTR_ltavd_eq1_005673e0,PTR_ltavd_eq1_005673e0);
        lup_vdist('\0');
        lup_vdist('\x01');
        lup_vdist('\x03');
        lup_vdist('\x06');
        lup_vdist('\t');
        lup_vdist('\n');
        lup_vdist('\r');
        *PTR_lgsendoff_00567b48 = 0;
      }
      goto LAB_002492b4;
    }
    if (param_1 == '\n') {
      if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x31a)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 0x7f;
      }
      ldistsub2();
      goto LAB_002492b4;
    }
    if (10 < param_1) {
      uVar8 = *(ushort *)(PTR_lprm_00567530 + 0x30e);
      goto LAB_0024928c;
    }
    if (*(ushort *)(PTR_lprm_00567530 + 0x318) == 0) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
    }
    else if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x318)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
    }
  }
  uVar8 = *(ushort *)(PTR_lprm_00567530 + 0x31e);
  if (1 < uVar8) {
    uVar8 = 1;
    *(undefined2 *)(PTR_lprm_00567530 + 0x31e) = 1;
  }
  puVar3 = PTR_lprm_00567530;
  if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
    uVar11 = *(ushort *)(PTR_lprm_00567530 + 0x318);
    sVar12 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(0x80 - (uint)uVar11) * 2) >> 2;
    if (uVar8 != 1) {
      sVar6 = (short)((ulong)(long)*(short *)(PTR_ltb_wet_00567b98 + (long)(int)(uint)uVar11 * 2) >>
                     4);
      goto LAB_002495d0;
    }
    sVar6 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)(uint)uVar11 * 2);
    bVar1 = PTR_ltavd_mix_00567268[2];
    *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_mix_00567268[3] * 2 + 0x26) = sVar6 >> 2;
    *(short *)(puVar3 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar6 >> 2;
  }
  else {
    sVar6 = 0x1000;
    sVar12 = 0;
LAB_002495d0:
    bVar1 = PTR_ltavd_mix_00567268[2];
    bVar2 = PTR_ltavd_mix_00567268[3];
    uVar5 = lcal_adj_var(sVar6);
    *(undefined2 *)(puVar3 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar5;
    *(undefined2 *)(puVar3 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar5;
  }
  puVar4 = PTR_lprm_00567530;
  puVar3 = PTR_ltavd_mix_00567268;
  bVar1 = *PTR_ltavd_mix_00567268;
  *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_mix_00567268[1] * 2 + 0x26) = sVar12;
  *(short *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar12;
  LSendCoef('\x04',puVar3);
LAB_002492b4:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

