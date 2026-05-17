/* lup_vstr3eq @ 0024b160 724B */


/* YAMAHA::lup_vstr3eq(unsigned char) */

void YAMAHA::lup_vstr3eq(uchar param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uchar uVar6;
  uchar uVar7;
  undefined2 uVar8;
  
  puVar5 = PTR_lgsendoff_00567b48;
  puVar4 = PTR_ltavm1_mix_005677b0;
  puVar3 = PTR_lprm_00567530;
  if (param_1 == '\x04') {
    uVar6 = PTR_lprm_00567530[0x312];
LAB_0024b338:
    uVar2 = *(ushort *)(PTR_lprm_00567530 + 0x30e);
    if (uVar2 < 0x4d) {
      if (uVar2 < 0x34) {
        uVar7 = '4';
        *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0x34;
      }
      else {
        uVar7 = (uchar)uVar2;
      }
    }
    else {
      uVar7 = 'L';
      *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0x4c;
    }
    lset_iir('\x01','\x03',uVar6,uVar7,'\0',PTR_ltavm1_eq2_005678a0,PTR_ltavm1_eq5_00567c20);
    return;
  }
  if (param_1 < 5) {
    if (param_1 != '\0') {
      lchk_prm(2,1);
      lset_iir('\x02','\n',PTR_lprm_00567530[0x308],PTR_lprm_00567530[0x30a],
               PTR_lprm_00567530[0x30c],PTR_ltavm1_eq1_00567bc0,PTR_ltavm1_eq4_00567168);
      return;
    }
    uVar6 = PTR_lprm_00567530[0x310];
  }
  else {
    if (param_1 == '\x06') {
      uVar2 = *(ushort *)(PTR_lprm_00567530 + 0x312);
      if (uVar2 < 0x3b) {
        if (uVar2 < 0x1c) {
          uVar6 = '\x1c';
          *(undefined2 *)(PTR_lprm_00567530 + 0x312) = 0x1c;
        }
        else {
          uVar6 = (uchar)uVar2;
        }
      }
      else {
        uVar6 = ':';
        *(undefined2 *)(PTR_lprm_00567530 + 0x312) = 0x3a;
      }
      goto LAB_0024b338;
    }
    if (5 < param_1) {
      if (param_1 != '\t') {
        if (param_1 == 0xff) {
          *(undefined2 *)(PTR_lprm_00567530 + 0x6c) = 0x8000;
          *(undefined2 *)(puVar3 + 0xd8) = 0x7fff;
          *(undefined2 *)(puVar3 + 0xd2) = 0x7fff;
          *(undefined2 *)(puVar3 + 0xc2) = 0x7fff;
          *(undefined2 *)(puVar3 + 0xbc) = 0x7fff;
          *(undefined2 *)(puVar3 + 0x9c) = 0x7fff;
          *(undefined2 *)(puVar3 + 0x96) = 0x7fff;
          *(undefined2 *)(puVar3 + 0x82) = 0x7fff;
          *(undefined2 *)(puVar3 + 0x7c) = 0x7fff;
          *(undefined2 *)(puVar3 + 0x56) = 0x7fff;
          *puVar5 = 1;
          lup_vstr3eq('\0');
          lup_vstr3eq('\x01');
          lup_vstr3eq('\x04');
          lup_vstr3eq('\t');
          *puVar5 = 0;
        }
        return;
      }
      bVar1 = *PTR_ltavm1_mix_005677b0;
      uVar8 = 0x4000;
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
        uVar8 = 0x2000;
      }
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm1_mix_005677b0[3] * 2 + 0x26) =
           uVar8;
      *(undefined2 *)(puVar3 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar8;
      LSendCoef('\x01',puVar4);
      LSendCoef('\x01',puVar4 + 3);
      return;
    }
    uVar2 = *(ushort *)(PTR_lprm_00567530 + 0x310);
    if (uVar2 < 0x29) {
      if (uVar2 < 8) {
        uVar6 = '\b';
        *(undefined2 *)(PTR_lprm_00567530 + 0x310) = 8;
      }
      else {
        uVar6 = (uchar)uVar2;
      }
    }
    else {
      uVar6 = '(';
      *(undefined2 *)(PTR_lprm_00567530 + 0x310) = 0x28;
    }
  }
  uVar2 = *(ushort *)(PTR_lprm_00567530 + 0x306);
  if (uVar2 < 0x4d) {
    if (uVar2 < 0x34) {
      uVar7 = '4';
      *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x34;
    }
    else {
      uVar7 = (uchar)uVar2;
    }
  }
  else {
    uVar7 = 'L';
    *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x4c;
  }
  lset_iir('\x01','\x02',uVar6,uVar7,'\0',PTR_ltavm1_eq0_00567fa8,PTR_ltavm1_eq3_00567558);
  return;
}

