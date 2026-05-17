/* lset_combd @ 0024dfc0 1464B */


/* YAMAHA::lset_combd(unsigned short, unsigned short, unsigned char const*) */

void YAMAHA::lset_combd(ushort param_1,ushort param_2,uchar *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  
  puVar9 = PTR_ltb_combd_00567f00;
  puVar8 = PTR_lprm_00567530;
  iVar6 = (uint)param_2 << 3;
  uVar10 = (ulong)param_3[1];
  uVar5 = *(ushort *)(PTR_ltb_combd_00567f00 + (long)iVar6 * 2);
  bVar3 = PTR_ltb_rdif_00567640[param_1];
  uVar1 = (int)((uint)*(ushort *)PTR_ltb_difd_00567cb8 * (uint)bVar3) >> 7;
  uVar7 = (ushort)((ulong)uVar5 * 0x7ae1 >> 0x10);
  sVar4 = *(short *)(PTR_lprm_00567530 + (ulong)*param_3 * 2 + 0x266);
  if ((byte)PTR_lprm_00567530[uVar10 + 0x226] < 2) {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)*(ushort *)(PTR_ltb_combd_00567f00 + (long)iVar6 * 2 + 2) * 0x7ae1
                        >> 0x10);
    uVar10 = (ulong)param_3[2];
    bVar2 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  else {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         (short)(((ulong)*(ushort *)(PTR_ltb_combd_00567f00 + (long)iVar6 * 2 + 2) * 0x7ae1) /
                0x30000) + sVar4;
    uVar10 = (ulong)param_3[2];
    bVar2 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  PTR_lprm_00567530 = puVar8;
  if (bVar2 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = sVar4 + uVar7;
    uVar10 = (ulong)param_3[3];
    bVar2 = puVar8[uVar10 + 0x226];
  }
  else {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = uVar7 / 3 + sVar4;
    uVar10 = (ulong)param_3[3];
    bVar2 = puVar8[uVar10 + 0x226];
  }
  if (bVar2 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = (short)uVar1 + sVar4 + uVar7;
  }
  else {
    *(short *)(puVar8 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)((long)(int)((int)((ulong)uVar5 * 0x7ae1 >> 0x10) + (uVar1 & 0xffff)
                                            ) * 0x55555556) >> 0x20);
  }
  puVar8 = PTR_lprm_00567530;
  uVar10 = (ulong)param_3[5];
  uVar5 = *(ushort *)(puVar9 + (long)iVar6 * 2 + 4);
  uVar1 = (int)((uint)*(ushort *)(PTR_ltb_difd_00567cb8 + 2) * (uint)bVar3) >> 7;
  uVar7 = (ushort)((ulong)uVar5 * 0x7ae1 >> 0x10);
  sVar4 = *(short *)(PTR_lprm_00567530 + (ulong)param_3[4] * 2 + 0x266);
  if ((byte)PTR_lprm_00567530[uVar10 + 0x226] < 2) {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)*(ushort *)(puVar9 + (long)iVar6 * 2 + 6) * 0x7ae1 >> 0x10);
    uVar10 = (ulong)param_3[6];
    bVar2 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  else {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         (short)(((ulong)*(ushort *)(puVar9 + (long)iVar6 * 2 + 6) * 0x7ae1) / 0x30000) + sVar4;
    uVar10 = (ulong)param_3[6];
    bVar2 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  PTR_lprm_00567530 = puVar8;
  if (bVar2 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = sVar4 + (short)uVar1 + uVar7;
    uVar10 = (ulong)param_3[7];
    bVar2 = puVar8[uVar10 + 0x226];
  }
  else {
    *(short *)(puVar8 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)((long)(int)((int)((ulong)uVar5 * 0x7ae1 >> 0x10) + (uVar1 & 0xffff)
                                            ) * 0x55555556) >> 0x20);
    uVar10 = (ulong)param_3[7];
    bVar2 = puVar8[uVar10 + 0x226];
  }
  if (bVar2 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = sVar4 + uVar7;
  }
  else {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = uVar7 / 3 + sVar4;
  }
  puVar8 = PTR_lprm_00567530;
  uVar10 = (ulong)param_3[9];
  uVar5 = *(ushort *)(puVar9 + (long)iVar6 * 2 + 8);
  uVar1 = (int)((uint)*(ushort *)(PTR_ltb_difd_00567cb8 + 4) * (uint)bVar3) >> 7;
  uVar7 = (ushort)((ulong)uVar5 * 0x7ae1 >> 0x10);
  sVar4 = *(short *)(PTR_lprm_00567530 + (ulong)param_3[8] * 2 + 0x266);
  if ((byte)PTR_lprm_00567530[uVar10 + 0x226] < 2) {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)*(ushort *)(puVar9 + (long)iVar6 * 2 + 10) * 0x7ae1 >> 0x10);
    uVar10 = (ulong)param_3[10];
    bVar2 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  else {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         (short)(((ulong)*(ushort *)(puVar9 + (long)iVar6 * 2 + 10) * 0x7ae1) / 0x30000) + sVar4;
    uVar10 = (ulong)param_3[10];
    bVar2 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  PTR_lprm_00567530 = puVar8;
  if (bVar2 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = sVar4 + uVar7;
    uVar10 = (ulong)param_3[0xb];
    bVar2 = puVar8[uVar10 + 0x226];
  }
  else {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = uVar7 / 3 + sVar4;
    uVar10 = (ulong)param_3[0xb];
    bVar2 = puVar8[uVar10 + 0x226];
  }
  if (bVar2 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = sVar4 + (short)uVar1 + uVar7;
  }
  else {
    *(short *)(puVar8 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)((long)(int)((int)((ulong)uVar5 * 0x7ae1 >> 0x10) + (uVar1 & 0xffff)
                                            ) * 0x55555556) >> 0x20);
  }
  puVar8 = PTR_lprm_00567530;
  uVar10 = (ulong)param_3[0xd];
  uVar5 = *(ushort *)(puVar9 + (long)iVar6 * 2 + 0xc);
  uVar1 = (int)((uint)*(ushort *)(PTR_ltb_difd_00567cb8 + 6) * (uint)bVar3) >> 7;
  uVar7 = (ushort)((ulong)uVar5 * 0x7ae1 >> 0x10);
  sVar4 = *(short *)(PTR_lprm_00567530 + (ulong)param_3[0xc] * 2 + 0x266);
  if ((byte)PTR_lprm_00567530[uVar10 + 0x226] < 2) {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)*(ushort *)(puVar9 + (long)iVar6 * 2 + 0xe) * 0x7ae1 >> 0x10);
    uVar10 = (ulong)param_3[0xe];
    bVar3 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  else {
    *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
         (short)(((ulong)*(ushort *)(puVar9 + (long)iVar6 * 2 + 0xe) * 0x7ae1) / 0x30000) + sVar4;
    uVar10 = (ulong)param_3[0xe];
    bVar3 = puVar8[uVar10 + 0x226];
    puVar8 = PTR_lprm_00567530;
  }
  PTR_lprm_00567530 = puVar8;
  if (bVar3 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = sVar4 + (short)uVar1 + uVar7;
    uVar10 = (ulong)param_3[0xf];
    bVar3 = puVar8[uVar10 + 0x226];
  }
  else {
    *(short *)(puVar8 + uVar10 * 2 + 0x266) =
         sVar4 + (short)((ulong)((long)(int)((int)((ulong)uVar5 * 0x7ae1 >> 0x10) + (uVar1 & 0xffff)
                                            ) * 0x55555556) >> 0x20);
    uVar10 = (ulong)param_3[0xf];
    bVar3 = puVar8[uVar10 + 0x226];
  }
  if (bVar3 < 2) {
    *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = sVar4 + uVar7;
    return;
  }
  *(ushort *)(puVar8 + uVar10 * 2 + 0x266) = uVar7 / 3 + sVar4;
  return;
}

