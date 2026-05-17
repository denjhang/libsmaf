/* lup_vvcan @ 0024d9e8 640B */


/* YAMAHA::lup_vvcan(unsigned char) */

void YAMAHA::lup_vvcan(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  uchar uVar7;
  uchar uVar8;
  uchar *puVar9;
  uchar *puVar10;
  uint uVar11;
  
  puVar5 = PTR_lgsendoff_00567b48;
  puVar4 = PTR_lprm_00567530;
  if (param_1 == '\n') {
    uVar11 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x31a);
    if (0x1a < *(ushort *)(PTR_lprm_00567530 + 0x31a)) {
      uVar11 = 0x1a;
      *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 0x1a;
    }
    uVar7 = '\x01';
    uVar8 = PTR_ltb_vcan_low_00567288[(int)uVar11];
    puVar9 = PTR_ltavw_eq0_00567cc0;
    puVar10 = PTR_ltavw_eq2_00567ac8;
LAB_0024dbdc:
    lset_iir('\x01',uVar7,uVar8,'@','\0',puVar9,puVar10);
    return;
  }
  if (param_1 < 0xb) {
    if (param_1 == '\t') {
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
        sVar6 = 0x2000;
      }
      else {
        sVar6 = 0x4000;
      }
      bVar1 = PTR_ltavw_mix_00567490[2];
      bVar2 = PTR_ltavw_mix_00567490[3];
      sVar6 = lcal_adj_var(sVar6);
      *(short *)(puVar4 + (long)(int)(uint)bVar2 * 2 + 0x26) = -sVar6;
      *(short *)(puVar4 + (long)(int)(uint)bVar1 * 2 + 0x26) = -sVar6;
      puVar4 = PTR_ltavw_mix_00567490;
      LSendCoef('\x02',PTR_ltavw_mix_00567490 + 2);
      puVar5 = PTR_lprm_00567530;
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) != 0) {
        bVar1 = *puVar4;
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)puVar4[1] * 2 + 0x26) = 0;
        *(undefined2 *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = 0;
        LSendCoef('\x02',PTR_ltavw_mix_00567490);
        return;
      }
      bVar1 = *puVar4;
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)puVar4[1] * 2 + 0x26) = 0x2000;
      *(undefined2 *)(puVar5 + (long)(int)(uint)bVar1 * 2 + 0x26) = 0x2000;
      LSendCoef('\x02',PTR_ltavw_mix_00567490);
      return;
    }
  }
  else {
    if (param_1 == '\v') {
      uVar3 = *(ushort *)(PTR_lprm_00567530 + 0x31c);
      if (uVar3 < 0x1b) {
        if (uVar3 != 0x1a) {
          lset_iir('\x01','\0',(char)uVar3 + '\"','@','\0',PTR_ltavw_eq1_005671f8,
                   PTR_ltavw_eq3_00567638);
          return;
        }
      }
      else {
        *(undefined2 *)(PTR_lprm_00567530 + 0x31c) = 0x1a;
      }
      uVar7 = '\v';
      uVar8 = '<';
      puVar9 = PTR_ltavw_eq1_005671f8;
      puVar10 = PTR_ltavw_eq3_00567638;
      goto LAB_0024dbdc;
    }
    if (param_1 == 0xff) {
      *(undefined2 *)(PTR_lprm_00567530 + 0xea) = 0x7fff;
      *puVar5 = 1;
      *(undefined2 *)(puVar4 + 0xe8) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xe4) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xe0) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xd0) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xcc) = 0x7fff;
      *(undefined2 *)(puVar4 + 200) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xc4) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xc0) = 0x7fff;
      *(undefined2 *)(puVar4 + 0xbc) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x7a) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x76) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x72) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x6e) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x6a) = 0x7fff;
      *(undefined2 *)(puVar4 + 0x50) = 0x4000;
      *(undefined2 *)(puVar4 + 0x52) = 0x80;
      lup_vvcan('\t');
      lup_vvcan('\n');
      lup_vvcan('\v');
      *puVar5 = 0;
    }
  }
  return;
}

