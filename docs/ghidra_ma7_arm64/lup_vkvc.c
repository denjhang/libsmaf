/* lup_vkvc @ 00249fbc 972B */


/* YAMAHA::lup_vkvc(unsigned char) */

void YAMAHA::lup_vkvc(uchar param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar *puVar6;
  
  puVar2 = PTR_lgsendoff_00567b48;
  puVar1 = PTR_lprm_00567530;
  if (param_1 != '\x02') {
    if (2 < param_1) {
      if (param_1 == '\x04') {
        if (*(ushort *)(PTR_lprm_00567530 + 0x30e) < 2) {
          if (*(ushort *)(PTR_lprm_00567530 + 0x30e) == 0) {
            lset_iir('\0','\f','\x1e','@','\0',PTR_ltavvc2_eq1_00567478,PTR_ltavvc2_eq1_00567478);
            lset_iir('\x02','\f','\x1e','@','\0',PTR_ltavvc2_eq3_00567b58,PTR_ltavvc2_eq5_00567310);
            lset_iir('\x02','\v','\x1e','@','\0',PTR_ltavvc2_eq2_00567f18,PTR_ltavvc2_eq4_005676a8);
            return;
          }
        }
        else {
          *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 1;
        }
        lup_vkvc('\0');
        lup_vkvc('\x01');
        lup_vkvc('\x02');
      }
      else if (3 < param_1) {
        if (param_1 != 0xff) {
          return;
        }
        *PTR_lgsendoff_00567b48 = 1;
        *(undefined2 *)(puVar1 + 0x4c) = 0x4000;
        *(undefined2 *)(puVar1 + 0x4e) = 0xc000;
        *(undefined2 *)(puVar1 + 0x84) = 0x4000;
        *(undefined2 *)(puVar1 + 0x86) = 0x4000;
        *(undefined2 *)(puVar1 + 0x88) = 0x4000;
        *(undefined2 *)(puVar1 + 0x8a) = 0x4000;
        *(undefined2 *)(puVar1 + 0x8c) = 0x4000;
        *(undefined2 *)(puVar1 + 0x8e) = 0x4000;
        lup_vkvc('\0');
        lup_vkvc('\x01');
        lup_vkvc('\x02');
        lup_vkvc('\x03');
        *puVar2 = 0;
        return;
      }
      puVar1 = PTR_lprm_00567530;
      if (*(short *)(PTR_lprm_00567530 + 0x30c) == 1) {
        if (*(short *)(PTR_lprm_00567530 + 0x30e) == 0) {
          return;
        }
        uVar4 = '\v';
        uVar5 = '\x1e';
        uVar3 = '\0';
      }
      else if (*(short *)(PTR_lprm_00567530 + 0x30c) == 0) {
        uVar4 = '\f';
        uVar5 = '\x1e';
        uVar3 = '\0';
      }
      else {
        lchk_prm(8,3);
        if (*(short *)(puVar1 + 0x30e) == 0) {
          return;
        }
        uVar5 = puVar1[0x30c];
        uVar4 = '\x04';
        uVar3 = '\a';
      }
      lset_iir('\x02',uVar4,uVar5,'@',uVar3,PTR_ltavvc2_eq3_00567b58,PTR_ltavvc2_eq5_00567310);
      return;
    }
    if (param_1 == '\0') {
      puVar6 = PTR_ltavvc2_eq0_00567570;
      if (*(short *)(PTR_lprm_00567530 + 0x306) == 1) {
        uVar3 = '\v';
        uVar5 = '\x1e';
      }
      else if (*(short *)(PTR_lprm_00567530 + 0x306) == 0) {
        uVar3 = '\f';
        uVar5 = '\x1e';
      }
      else {
        lchk_prm(5,0);
        if (*(short *)(puVar1 + 0x30e) == 0) {
          return;
        }
        uVar5 = puVar1[0x306];
        uVar3 = '\x01';
        puVar6 = PTR_ltavvc2_eq0_00567570;
      }
    }
    else {
      if (param_1 != '\x01') {
        return;
      }
      puVar6 = PTR_ltavvc2_eq1_00567478;
      if (*(short *)(PTR_lprm_00567530 + 0x308) == 1) {
        if (*(short *)(PTR_lprm_00567530 + 0x30e) == 0) {
          return;
        }
        uVar3 = '\v';
        uVar5 = '\x1e';
      }
      else if (*(short *)(PTR_lprm_00567530 + 0x308) == 0) {
        uVar3 = '\f';
        uVar5 = '\x1e';
      }
      else {
        lchk_prm(6,1);
        if (*(short *)(puVar1 + 0x30e) == 0) {
          return;
        }
        uVar5 = puVar1[0x308];
        uVar3 = '\0';
        puVar6 = PTR_ltavvc2_eq1_00567478;
      }
    }
    lset_iir('\0',uVar3,uVar5,'@','\0',puVar6,puVar6);
    return;
  }
  if (*(short *)(PTR_lprm_00567530 + 0x30a) == 1) {
    uVar4 = '\v';
    uVar5 = '\x1e';
    uVar3 = '\0';
  }
  else if (*(short *)(PTR_lprm_00567530 + 0x30a) == 0) {
    if (*(short *)(PTR_lprm_00567530 + 0x30e) == 0) {
      return;
    }
    uVar4 = '\f';
    uVar5 = '\x1e';
    uVar3 = '\0';
  }
  else {
    lchk_prm(7,2);
    if (*(short *)(puVar1 + 0x30e) == 0) {
      return;
    }
    uVar5 = puVar1[0x30a];
    uVar4 = '\x05';
    uVar3 = '\a';
  }
  lset_iir('\x02',uVar4,uVar5,'@',uVar3,PTR_ltavvc2_eq2_00567f18,PTR_ltavvc2_eq4_005676a8);
  return;
}

