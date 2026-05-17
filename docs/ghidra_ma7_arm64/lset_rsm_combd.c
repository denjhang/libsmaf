/* lset_rsm_combd @ 0024e69c 516B */


/* YAMAHA::lset_rsm_combd(unsigned short, unsigned char, unsigned short, unsigned char const*) */

void YAMAHA::lset_rsm_combd(ushort param_1,uchar param_2,ushort param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar7 = PTR_lprm_00567530;
  uVar9 = (ulong)*(ushort *)(PTR_ltb_rsm_dly_00567fb0 + (long)(int)(uint)param_3 * 2) * 0x7ae1;
  uVar1 = (int)((uint)*(ushort *)(PTR_ltb_difd_00567cb8 + (long)(int)(uint)param_2 * 2) *
               (uint)(byte)PTR_ltb_rdif_00567640[param_1]) >> 7;
  uVar2 = (int)(uVar9 >> 0x10) >> 1;
  sVar4 = *(short *)(PTR_lprm_00567530 + (ulong)*param_4 * 2 + 0x266);
  if ((byte)PTR_lprm_00567530[(ulong)param_4[1] + 0x226] < 2) {
    sVar6 = (short)(uVar9 >> 0x10);
  }
  else {
    sVar6 = (short)(uVar9 / 0x30000);
  }
  *(short *)(PTR_lprm_00567530 + (ulong)param_4[1] * 2 + 0x266) = sVar6 + sVar4;
  puVar8 = PTR_lprm_00567530;
  sVar6 = (short)uVar2;
  if ((param_2 & 1) != 0) {
    uVar9 = (ulong)param_4[2];
    if ((byte)puVar7[uVar9 + 0x226] < 2) {
      sVar5 = sVar6 + sVar4 + (short)uVar1;
    }
    else {
      sVar5 = sVar4 + (short)((ulong)((long)(int)(uVar2 + (uVar1 & 0xffff)) * 0x55555556) >> 0x20);
    }
    *(short *)(PTR_lprm_00567530 + uVar9 * 2 + 0x266) = sVar5;
    uVar9 = (ulong)param_4[3];
    if ((byte)puVar8[uVar9 + 0x226] < 2) {
      *(short *)(puVar8 + uVar9 * 2 + 0x266) = sVar6 + sVar4;
      return;
    }
    *(short *)(puVar8 + uVar9 * 2 + 0x266) = (short)(uVar2 / 3) + sVar4;
    return;
  }
  uVar9 = (ulong)param_4[2];
  if ((byte)puVar7[uVar9 + 0x226] < 2) {
    *(short *)(PTR_lprm_00567530 + uVar9 * 2 + 0x266) = sVar6 + sVar4;
    uVar9 = (ulong)param_4[3];
    bVar3 = puVar8[uVar9 + 0x226];
  }
  else {
    *(short *)(PTR_lprm_00567530 + uVar9 * 2 + 0x266) = (short)(uVar2 / 3) + sVar4;
    uVar9 = (ulong)param_4[3];
    bVar3 = puVar8[uVar9 + 0x226];
  }
  if (1 < bVar3) {
    *(short *)(puVar8 + uVar9 * 2 + 0x266) =
         sVar4 + (short)((ulong)((long)(int)(uVar2 + (uVar1 & 0xffff)) * 0x55555556) >> 0x20);
    return;
  }
  *(short *)(puVar8 + uVar9 * 2 + 0x266) = sVar6 + sVar4 + (short)uVar1;
  return;
}

