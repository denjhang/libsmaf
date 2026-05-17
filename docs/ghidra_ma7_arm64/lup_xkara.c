/* lup_xkara @ 0024dc68 856B */


/* YAMAHA::lup_xkara(unsigned char) */

void YAMAHA::lup_xkara(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined2 uVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  uchar local_10 [8];
  long local_8;
  
  puVar10 = PTR_ltaxk_apfd_00567de0;
  puVar9 = PTR_lgsendoff_00567b48;
  puVar8 = PTR_lprm_00567530;
  puVar7 = PTR_ltaxk_apfg_005672e8;
  local_10[0] = '}';
  local_10[1] = 0x7e;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 != '\t') {
    if (param_1 < 10) {
      if (param_1 == '\0') {
        uVar13 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x2e6);
        if (0x48 < *(ushort *)(PTR_lprm_00567530 + 0x2e6)) {
          uVar13 = 0x48;
          *(undefined2 *)(PTR_lprm_00567530 + 0x2e6) = 0x48;
        }
        uVar13 = lcal_dly10(*(ushort *)(PTR_ltb_dly400_00567200 + (long)(int)uVar13 * 2));
        puVar7 = PTR_lprm_00567530;
        sVar14 = (short)((uVar13 & 0xffff) / 3);
        if (0xe65 < (uVar13 & 0xffff) / 3) {
          sVar14 = 0xe65;
        }
        *(short *)(PTR_lprm_00567530 + 0x120) = sVar14 * 8;
        *(short *)(puVar7 + 0x122) = sVar14 * 8 + 8;
        LSendCoef('\x02',local_10);
      }
      else if (param_1 == '\x01') {
        uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x2e8);
        if (uVar4 == 0) {
          *(undefined2 *)(PTR_lprm_00567530 + 0x2e8) = 1;
          sVar14 = -0x7b0c;
        }
        else if (uVar4 < 0x80) {
          sVar14 = (uVar4 - 0x40) * 500;
        }
        else {
          sVar14 = 0x7b0c;
          *(undefined2 *)(PTR_lprm_00567530 + 0x2e8) = 0x7f;
        }
        puVar7 = PTR_ltaxk_fb_00567d90;
        *(short *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltaxk_fb_00567d90 * 2 + 0x26) = sVar14;
        LSendCoef('\x01',puVar7);
      }
    }
    else if (param_1 == '\n') {
      uVar4 = *(ushort *)(PTR_lrev_fixprm_00567e28 + 6);
      uVar6 = -(short)*(undefined4 *)PTR_lprm_00567530 & 3;
      *(ushort *)(PTR_lprm_00567530 + 0x2fa) = uVar6;
      lset_apf(uVar6,10,uVar4,'\0',puVar7,puVar10,'\x02');
      LSendCoef('\b',puVar7);
    }
    else if (param_1 == 0xff) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x134) = 0x100;
      *(undefined2 *)(puVar8 + 0x132) = 0x100;
      *(undefined2 *)(puVar8 + 0x112) = 0x4000;
      *(undefined2 *)(puVar8 + 0x150) = 0x7fff;
      *(undefined2 *)(puVar8 + 0x146) = 0xc80;
      *(undefined2 *)(puVar8 + 0x11a) = 0xc80;
      *(undefined2 *)(puVar8 + 0x13a) = 0x1900;
      *(undefined2 *)(puVar8 + 0x118) = 0x1900;
      *(undefined2 *)(puVar8 + 0x116) = 0xc80;
      *(undefined2 *)(puVar8 + 0x114) = 0;
      *(undefined2 *)(puVar8 + 0x140) = 0x78c0;
      *(undefined2 *)(puVar8 + 0x11e) = 0x78c0;
      *(undefined2 *)(puVar8 + 0x142) = 0xd540;
      *(undefined2 *)(puVar8 + 0x11c) = 0xd540;
      *(undefined2 *)(puVar8 + 0x148) = 0x4b00;
      *(undefined2 *)(puVar8 + 0x14a) = 0x4b00;
      *(undefined2 *)(puVar8 + 0x144) = 0x3500;
      *(undefined2 *)(puVar8 + 0x14c) = 0x3500;
      *(undefined2 *)(puVar8 + 0x13c) = 0x4000;
      *(undefined2 *)(puVar8 + 0x13e) = 0x4000;
      *puVar9 = 1;
      lup_xkara('\0');
      lup_xkara('\x01');
      lup_xkara('\t');
      lup_xkara('\n');
      *puVar9 = 0;
    }
    goto LAB_0024dcf0;
  }
  uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x2f8);
  if (uVar4 == 0) {
    bVar11 = true;
    iVar15 = 0x7f;
    *(undefined2 *)(PTR_lprm_00567530 + 0x2f8) = 1;
    uVar13 = 1;
LAB_0024de74:
    if ((*(short *)(PTR_ltb_wet2_00567188 + (long)iVar15 * 2) >> 1 != 0) || (sVar14 = 1, !bVar11)) {
      sVar14 = *(short *)(PTR_ltb_wet2_00567188 + (long)iVar15 * 2) >> 1;
    }
  }
  else {
    uVar13 = (uint)uVar4;
    if (uVar4 < 0x80) {
      bVar11 = uVar13 != 0x7f;
      iVar15 = 0x80 - uVar13;
      goto LAB_0024de74;
    }
    *(undefined2 *)(PTR_lprm_00567530 + 0x2f8) = 0x7f;
    uVar13 = 0x7f;
    sVar14 = *(short *)(PTR_ltb_wet2_00567188 + 2) >> 1;
  }
  puVar8 = PTR_lprm_00567530;
  puVar7 = PTR_ltaxk_mix_00567218;
  sVar5 = *(short *)(PTR_ltb_wet2_00567188 + (long)(int)uVar13 * 2);
  bVar1 = *PTR_ltaxk_mix_00567218;
  bVar2 = PTR_ltaxk_mix_00567218[2];
  bVar3 = PTR_ltaxk_mix_00567218[3];
  *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltaxk_mix_00567218[1] * 2 + 0x26) = sVar14;
  *(short *)(puVar8 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar14;
  uVar12 = lcal_adj_ext((short)((ulong)(long)sVar5 >> 1));
  *(undefined2 *)(puVar8 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar12;
  *(undefined2 *)(puVar8 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar12;
  LSendCoef('\x04',puVar7);
LAB_0024dcf0:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

