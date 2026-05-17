/* lset_pitch @ 0024c428 292B */


/* YAMAHA::lset_pitch(unsigned char, unsigned short) */

void YAMAHA::lset_pitch(uchar param_1,ushort param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uchar *puVar5;
  int iVar6;
  
  puVar5 = PTR_ltavpi_ldp_00567130;
  if (param_1 == '\0') {
    bVar1 = *PTR_ltavpi_ldp_00567130;
    bVar2 = PTR_ltavpi_ldp_00567130[1];
    uVar4 = lcal_pitch(param_2);
  }
  else {
    bVar1 = PTR_ltavpi_ldp_00567130[2];
    bVar2 = PTR_ltavpi_ldp_00567130[3];
    uVar4 = lcal_pitch(param_2);
    puVar5 = puVar5 + 2;
  }
  puVar3 = PTR_lprm_00567530;
  *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar4;
  *(undefined2 *)(puVar3 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar4;
  LSendCoef('\x02',puVar5);
  puVar3 = PTR_lprm_00567530;
  iVar6 = (uint)param_1 * 2;
  if (*(ushort *)(PTR_lprm_00567530 + 0x306) == 0x40) {
    uVar4 = 0x4000;
    if (param_2 < 0x41) {
      uVar4 = 0xc000;
    }
    bVar1 = PTR_ltavpi_lhalf_00567120[iVar6];
    *(undefined2 *)
     (PTR_lprm_00567530 + (ulong)(byte)PTR_ltavpi_lhalf_00567120[iVar6 + 1] * 2 + 0x26) = uVar4;
    *(undefined2 *)(puVar3 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar4;
  }
  else {
    if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x41) {
      uVar4 = 0xc000;
    }
    else {
      uVar4 = 0x4000;
    }
    bVar1 = PTR_ltavpi_lhalf_00567120[iVar6];
    *(undefined2 *)
     (PTR_lprm_00567530 + (ulong)(byte)PTR_ltavpi_lhalf_00567120[iVar6 + 1] * 2 + 0x26) = uVar4;
    *(undefined2 *)(puVar3 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar4;
  }
  LSendCoef('\x02',PTR_ltavpi_lhalf_00567120 + iVar6);
  return;
}

