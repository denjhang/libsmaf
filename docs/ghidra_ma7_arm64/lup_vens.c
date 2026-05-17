/* lup_vens @ 0024cadc 1144B */


/* YAMAHA::lup_vens(unsigned char) */

void YAMAHA::lup_vens(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined *puVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  
  puVar7 = PTR_lgsendoff_00567b48;
  puVar10 = PTR_lprm_00567530;
  if (param_1 == '\x02') {
LAB_0024cb2c:
    if (*(short *)(PTR_lprm_00567530 + 0x30a) != 0) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0;
    }
    puVar10 = PTR_lprm_00567530;
    *(undefined2 *)(PTR_lprm_00567530 + 0xb2) = 0x28;
    *(undefined2 *)(puVar10 + 0xb6) = 0x30;
    return;
  }
  if (2 < param_1) {
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
      puVar7 = PTR_ltavpi_mix_00567e78;
      puVar10 = PTR_lprm_00567530;
      if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
        iVar12 = 0x80 - uVar9;
      }
      else {
        iVar12 = 1;
        uVar9 = 0x7f;
      }
      sVar5 = *(short *)(PTR_ltb_wet_00567b98 + (long)iVar12 * 2);
      sVar6 = *(short *)(PTR_ltb_wet_00567b98 + (long)(int)uVar9 * 2);
      bVar1 = *PTR_ltavpi_mix_00567e78;
      bVar2 = PTR_ltavpi_mix_00567e78[2];
      *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavpi_mix_00567e78[1] * 2 + 0x26) =
           sVar5 >> 2;
      bVar3 = puVar7[3];
      *(short *)(puVar10 + (long)(int)(uint)bVar1 * 2 + 0x26) = sVar5 >> 2;
      uVar8 = lcal_adj_var((short)((ulong)(long)sVar6 >> 2));
      *(undefined2 *)(puVar10 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar8;
      *(undefined2 *)(puVar10 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar8;
      LSendCoef('\x04',puVar7);
      return;
    }
    if (param_1 != 0xff) {
      return;
    }
    *(undefined2 *)(PTR_lprm_00567530 + 0xf6) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xf2) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xb4) = 0x8000;
    *(undefined2 *)(puVar10 + 0xb0) = 0x8000;
    *(undefined2 *)(puVar10 + 0x8a) = 0x8000;
    *(undefined2 *)(puVar10 + 0x86) = 0x8000;
    *(undefined2 *)(puVar10 + 0x54) = 0x8000;
    *(undefined2 *)(puVar10 + 0x52) = 0x8000;
    *(undefined2 *)(puVar10 + 0xe2) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xdc) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xd6) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xc0) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xba) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xac) = 0x7fff;
    *(undefined2 *)(puVar10 + 100) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x5e) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x6e) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x58) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x7c) = 0xc000;
    *(undefined2 *)(puVar10 + 0x74) = 0xc000;
    *(undefined2 *)(puVar10 + 0x6a) = 0xc000;
    *(undefined2 *)(puVar10 + 0x8e) = 0xc000;
    *(undefined2 *)(puVar10 + 0x5a) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x50) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x66) = 0x3200;
    *(undefined2 *)(puVar10 + 0x60) = 0x3200;
    *(undefined2 *)(puVar10 + 0x68) = 0x2e00;
    *(undefined2 *)(puVar10 + 0x62) = 0x2e00;
    *(undefined2 *)(puVar10 + 0x84) = 0x7fff;
    *(undefined2 *)(puVar10 + 0xfa) = 0;
    *puVar7 = 1;
    *(undefined2 *)(puVar10 + 0x82) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x72) = 0x7fff;
    *(undefined2 *)(puVar10 + 0x70) = 0x7fff;
    lup_vens('\0');
    lup_vens('\x01');
    lup_vens('\x02');
    lup_vens('\t');
    *puVar7 = 0;
    return;
  }
  if (param_1 != '\0') {
    if (param_1 != '\x01') {
      return;
    }
    if (*(short *)(PTR_lprm_00567530 + 0x308) != 0) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0;
    }
    puVar10 = PTR_lprm_00567530;
    *(undefined2 *)(PTR_lprm_00567530 + 0x88) = 0x28;
    *(undefined2 *)(puVar10 + 0x8c) = 0x30;
    goto LAB_0024cb2c;
  }
  uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x306);
  if (uVar4 < 0xe) {
    iVar11 = 100;
    *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0xe;
    iVar12 = 0;
LAB_0024cd1c:
    puVar10 = PTR_lprm_00567530;
    bVar1 = PTR_ltavpi_frq_00567c08[1];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavpi_frq_00567c08 * 2 + 0x26) = 0x40f;
    *(undefined2 *)(puVar10 + (ulong)bVar1 * 2 + 0x26) = 0x3d4;
    bVar1 = PTR_ltavpi_lhalf_00567120[3];
    bVar2 = *PTR_ltavpi_lhalf_00567120;
    bVar3 = PTR_ltavpi_lhalf_00567120[2];
    *(undefined2 *)(puVar10 + (ulong)(byte)PTR_ltavpi_lhalf_00567120[1] * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar10 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar10 + (ulong)bVar1 * 2 + 0x26) = 0xc000;
    *(undefined2 *)(puVar10 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0xc000;
    iVar11 = *(int *)(PTR_ltb_fine_wgt_005679e0 + (long)iVar11 * 4);
    iVar12 = *(int *)(PTR_ltb_fine_wgt_005679e0 + (long)iVar12 * 4);
  }
  else {
    if (uVar4 < 0x73) {
      uVar9 = (uint)uVar4;
      if (uVar4 < 0x40) {
        iVar12 = uVar9 - 0xe;
        iVar11 = 0x72 - uVar9;
        goto LAB_0024cd1c;
      }
      if (uVar9 == 0x40) {
        bVar1 = PTR_ltavpi_ldp_00567130[2];
        bVar2 = PTR_ltavpi_ldp_00567130[1];
        bVar3 = *PTR_ltavpi_ldp_00567130;
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavpi_ldp_00567130[3] * 2 + 0x26) = 0;
        *(undefined2 *)(puVar10 + (long)(int)(uint)bVar1 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar10 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0;
        *(undefined2 *)(puVar10 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0;
        goto LAB_0024cde8;
      }
      iVar12 = uVar9 - 0xe;
      iVar11 = 0x72 - uVar9;
    }
    else {
      iVar12 = 100;
      *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x72;
      iVar11 = 0;
    }
    puVar10 = PTR_lprm_00567530;
    bVar1 = PTR_ltavpi_frq_00567c08[1];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavpi_frq_00567c08 * 2 + 0x26) = 0x3d4;
    *(undefined2 *)(puVar10 + (ulong)bVar1 * 2 + 0x26) = 0x40f;
    bVar1 = PTR_ltavpi_lhalf_00567120[3];
    bVar2 = *PTR_ltavpi_lhalf_00567120;
    bVar3 = PTR_ltavpi_lhalf_00567120[2];
    *(undefined2 *)(puVar10 + (ulong)(byte)PTR_ltavpi_lhalf_00567120[1] * 2 + 0x26) = 0xc000;
    *(undefined2 *)(puVar10 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0xc000;
    *(undefined2 *)(puVar10 + (ulong)bVar1 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar10 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x4000;
    iVar11 = *(int *)(PTR_ltb_fine_wgt_005679e0 + (long)iVar11 * 4);
    iVar12 = *(int *)(PTR_ltb_fine_wgt_005679e0 + (long)iVar12 * 4);
  }
  bVar1 = PTR_ltavpi_ldp_00567130[3];
  bVar2 = *PTR_ltavpi_ldp_00567130;
  bVar3 = PTR_ltavpi_ldp_00567130[2];
  uVar8 = (undefined2)(((ulong)(uint)(iVar11 * 0x1e00) << 0x21) >> 0x30);
  *(undefined2 *)(puVar10 + (ulong)(byte)PTR_ltavpi_ldp_00567130[1] * 2 + 0x26) = uVar8;
  *(undefined2 *)(puVar10 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar8;
  uVar8 = (undefined2)(((ulong)(uint)(iVar12 * 0x1e00) << 0x21) >> 0x30);
  *(undefined2 *)(puVar10 + (ulong)bVar1 * 2 + 0x26) = uVar8;
  *(undefined2 *)(puVar10 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar8;
LAB_0024cde8:
  LSendCoef('\x02',PTR_ltavpi_frq_00567c08);
  LSendCoef('\x04',PTR_ltavpi_lhalf_00567120);
  LSendCoef('\x04',PTR_ltavpi_ldp_00567130);
  return;
}

