/* lup_v3bndeq @ 00249c04 952B */


/* YAMAHA::lup_v3bndeq(unsigned char) */

void YAMAHA::lup_v3bndeq(uchar param_1)

{
  uchar *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uchar uVar6;
  undefined2 uVar7;
  uchar uVar8;
  char cVar9;
  
  puVar5 = PTR_lgsendoff_00567b48;
  puVar4 = PTR_lprm_00567530;
  if (param_1 == '\x04') {
    uVar6 = PTR_lprm_00567530[0x312];
LAB_00249e64:
    uVar3 = *(ushort *)(PTR_lprm_00567530 + 0x30e);
    if (uVar3 < 0x4d) {
      if (uVar3 < 0x34) {
        cVar9 = -6;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0x34;
        uVar8 = ':';
      }
      else {
        cVar9 = (char)((int)(uVar3 - 0x40) / 2);
        uVar8 = cVar9 + '@';
      }
    }
    else {
      cVar9 = '\x06';
      *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0x4c;
      uVar8 = 'F';
    }
    lset_iir('\x01','\x03',uVar6,uVar8,'\0',PTR_ltavd_eq2_00567f70,PTR_ltavd_eq2_00567f70);
    lset_iir('\x01','\x03',PTR_lprm_00567530[0x312],
             (char)*(undefined2 *)(PTR_lprm_00567530 + 0x30e) - cVar9,'\0',PTR_ltavd_eq4_00567778,
             PTR_ltavd_eq4_00567778);
    return;
  }
  if (param_1 < 5) {
    if (param_1 != '\0') {
      lchk_prm(2,1);
      lset_iir('\x02','\n',PTR_lprm_00567530[0x308],PTR_lprm_00567530[0x30a],
               PTR_lprm_00567530[0x30c],PTR_ltavd_eq3_00567b30,PTR_ltavd_eq3_00567b30);
      return;
    }
    uVar6 = PTR_lprm_00567530[0x310];
  }
  else {
    if (param_1 == '\x06') {
      uVar3 = *(ushort *)(PTR_lprm_00567530 + 0x312);
      if (uVar3 < 0x3b) {
        if (uVar3 < 0x1c) {
          uVar6 = '\x1c';
          *(undefined2 *)(PTR_lprm_00567530 + 0x312) = 0x1c;
        }
        else {
          uVar6 = (uchar)uVar3;
        }
      }
      else {
        uVar6 = ':';
        *(undefined2 *)(PTR_lprm_00567530 + 0x312) = 0x3a;
      }
      goto LAB_00249e64;
    }
    if (5 < param_1) {
      if (param_1 != '\t') {
        if (param_1 == 0xff) {
          *(undefined2 *)(PTR_lprm_00567530 + 0xa8) = 0x7fff;
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
          *(undefined2 *)(puVar4 + 0x5a) = 0x2000;
          *(undefined2 *)(puVar4 + 0xf8) = 0x2000;
          *(undefined2 *)(puVar4 + 0xee) = 0x2000;
          *(undefined2 *)(puVar4 + 0xe4) = 0x2000;
          *(undefined2 *)(puVar4 + 0xda) = 0x2000;
          *(undefined2 *)(puVar4 + 0xd0) = 0x2000;
          *(undefined2 *)(puVar4 + 0xc4) = 0x2000;
          *(undefined2 *)(puVar4 + 0xb6) = 0x2000;
          *(undefined2 *)(puVar4 + 0xaa) = 0x2000;
          *(undefined2 *)(puVar4 + 0xa0) = 0x2000;
          *(undefined2 *)(puVar4 + 0x94) = 0x2000;
          *(undefined2 *)(puVar4 + 0x50) = 0x7fff;
          *(undefined2 *)(puVar4 + 0x9a) = 0x80;
          *(undefined2 *)(puVar4 + 0x5c) = 0;
          *(undefined2 *)(puVar4 + 0x5e) = 0;
          *(undefined2 *)(puVar4 + 0x60) = 0;
          *(undefined2 *)(puVar4 + 0x90) = 0;
          *(undefined2 *)(puVar4 + 0x92) = 0;
          *(undefined2 *)(puVar4 + 0x9c) = 0;
          *puVar5 = 1;
          *(undefined2 *)(puVar4 + 0x9e) = 0;
          *(undefined2 *)(puVar4 + 0x78) = 0x1000;
          *(undefined2 *)(puVar4 + 0x82) = 0x1000;
          lup_v3bndeq('\0');
          lup_v3bndeq('\x01');
          lup_v3bndeq('\x04');
          lup_v3bndeq('\t');
          *puVar5 = 0;
        }
        return;
      }
      puVar1 = PTR_ltavd_mix_00567268 + 2;
      bVar2 = PTR_ltavd_mix_00567268[2];
      uVar7 = 0x4000;
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
        uVar7 = 0x2000;
      }
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_mix_00567268[3] * 2 + 0x26) = uVar7
      ;
      *(undefined2 *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar7;
      LSendCoef('\x02',puVar1);
      return;
    }
    uVar3 = *(ushort *)(PTR_lprm_00567530 + 0x310);
    if (uVar3 < 0x29) {
      if (uVar3 < 8) {
        uVar6 = '\b';
        *(undefined2 *)(PTR_lprm_00567530 + 0x310) = 8;
      }
      else {
        uVar6 = (uchar)uVar3;
      }
    }
    else {
      uVar6 = '(';
      *(undefined2 *)(PTR_lprm_00567530 + 0x310) = 0x28;
    }
  }
  uVar3 = *(ushort *)(PTR_lprm_00567530 + 0x306);
  if (uVar3 < 0x4d) {
    if (uVar3 < 0x34) {
      cVar9 = -6;
      *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x34;
      uVar8 = ':';
    }
    else {
      cVar9 = (char)((int)(uVar3 - 0x40) / 2);
      uVar8 = cVar9 + '@';
    }
  }
  else {
    cVar9 = '\x06';
    *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x4c;
    uVar8 = 'F';
  }
  lset_iir('\0','\x02',uVar6,uVar8,'\0',PTR_ltavd_eq0_00567768,PTR_ltavd_eq0_00567768);
  lset_iir('\0','\x02',PTR_lprm_00567530[0x310],
           (char)*(undefined2 *)(PTR_lprm_00567530 + 0x306) - cVar9,'\0',PTR_ltavd_eq1_005673e0,
           PTR_ltavd_eq1_005673e0);
  return;
}

