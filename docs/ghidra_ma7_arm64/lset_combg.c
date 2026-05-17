/* lset_combg @ 0024e578 292B */


/* YAMAHA::lset_combg(unsigned short, unsigned short, unsigned char const*) */

void YAMAHA::lset_combg(ushort param_1,ushort param_2,uchar *param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  puVar13 = PTR_ltb_g_00567f38;
  puVar12 = PTR_lprm_00567530;
  puVar11 = PTR_ltb_combg_00567370;
  iVar8 = (uint)param_2 << 2;
  bVar1 = PTR_ltb_rvtc_00567378[param_1];
  lVar9 = ((ulong)((uint)bVar1 + (uint)*(ushort *)(PTR_ltb_combg_00567370 + (long)iVar8 * 2)) &
          0xffff) * 4;
  uVar2 = *(ushort *)(PTR_ltb_combg_00567370 + (long)iVar8 * 2 + 4);
  lVar10 = ((ulong)((uint)bVar1 + (uint)*(ushort *)(PTR_ltb_combg_00567370 + (long)iVar8 * 2 + 2)) &
           0xffff) * 4;
  uVar5 = *(undefined2 *)(PTR_ltb_g_00567f38 + lVar9);
  *(undefined2 *)(PTR_lprm_00567530 + (ulong)*param_3 * 2 + 0x26) =
       *(undefined2 *)(PTR_ltb_g_00567f38 + lVar9 + 2);
  lVar9 = ((ulong)((uint)bVar1 + (uint)uVar2) & 0xffff) * 4;
  uVar6 = *(undefined2 *)(puVar13 + lVar10);
  uVar3 = *(undefined2 *)(puVar13 + lVar10 + 2);
  uVar7 = *(undefined2 *)(puVar13 + lVar9);
  uVar4 = *(undefined2 *)(puVar13 + lVar9 + 2);
  uVar2 = *(ushort *)(puVar11 + (long)iVar8 * 2 + 6);
  *(undefined2 *)(puVar12 + (ulong)param_3[1] * 2 + 0x26) = uVar5;
  lVar9 = ((ulong)((uint)bVar1 + (uint)uVar2) & 0xffff) * 4;
  *(undefined2 *)(puVar12 + (ulong)param_3[2] * 2 + 0x26) = uVar5;
  *(undefined2 *)(puVar12 + (ulong)param_3[3] * 2 + 0x26) = uVar3;
  *(undefined2 *)(puVar12 + (ulong)param_3[4] * 2 + 0x26) = uVar6;
  *(undefined2 *)(puVar12 + (ulong)param_3[5] * 2 + 0x26) = uVar6;
  *(undefined2 *)(puVar12 + (ulong)param_3[6] * 2 + 0x26) = uVar4;
  *(undefined2 *)(puVar12 + (ulong)param_3[7] * 2 + 0x26) = uVar7;
  *(undefined2 *)(puVar12 + (ulong)param_3[8] * 2 + 0x26) = uVar7;
  uVar3 = *(undefined2 *)(puVar13 + lVar9);
  *(undefined2 *)(puVar12 + (ulong)param_3[9] * 2 + 0x26) = *(undefined2 *)(puVar13 + lVar9 + 2);
  *(undefined2 *)(puVar12 + (ulong)param_3[10] * 2 + 0x26) = uVar3;
  *(undefined2 *)(puVar12 + (ulong)param_3[0xb] * 2 + 0x26) = uVar3;
  return;
}

