/* lset_combg @ 001003ac 244B */


/* YAMAHA::lset_combg(unsigned short, unsigned short, unsigned char const*) */

void YAMAHA::lset_combg(ushort param_1,ushort param_2,uchar *param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar8 = *(int *)(DAT_001004a0 + 0x1003b8) + (uint)param_2 * 8;
  uVar7 = (ushort)*(byte *)(*(int *)(DAT_001004a4 + 0x1003be) + (uint)param_1);
  iVar10 = *(int *)(DAT_001004a8 + 0x1003d0);
  uVar11 = (uint)(ushort)(*(short *)(*(int *)(DAT_001004a0 + 0x1003b8) + (uint)param_2 * 8) + uVar7)
  ;
  iVar9 = *(int *)(DAT_001004ac + 0x1003e4);
  sVar1 = *(short *)(iVar8 + 6);
  uVar4 = *(undefined2 *)(iVar10 + uVar11 * 4);
  uVar12 = (uint)(ushort)(*(short *)(iVar8 + 4) + uVar7);
  uVar13 = (uint)(ushort)(*(short *)(iVar8 + 2) + uVar7);
  uVar5 = *(undefined2 *)(iVar10 + uVar13 * 4);
  *(undefined2 *)(iVar9 + (uint)*param_3 * 2 + 0x26) = *(undefined2 *)(iVar10 + uVar11 * 4 + 2);
  uVar11 = (uint)(ushort)(uVar7 + sVar1);
  uVar2 = *(undefined2 *)(iVar10 + uVar12 * 4 + 2);
  uVar3 = *(undefined2 *)(iVar10 + uVar13 * 4 + 2);
  uVar6 = *(undefined2 *)(iVar10 + uVar12 * 4);
  *(undefined2 *)(iVar9 + (uint)param_3[1] * 2 + 0x26) = uVar4;
  *(undefined2 *)(iVar9 + (uint)param_3[2] * 2 + 0x26) = uVar4;
  uVar4 = *(undefined2 *)(iVar10 + uVar11 * 4 + 2);
  *(undefined2 *)(iVar9 + (uint)param_3[3] * 2 + 0x26) = uVar3;
  *(undefined2 *)(iVar9 + (uint)param_3[4] * 2 + 0x26) = uVar5;
  *(undefined2 *)(iVar9 + (uint)param_3[5] * 2 + 0x26) = uVar5;
  *(undefined2 *)(iVar9 + (uint)param_3[6] * 2 + 0x26) = uVar2;
  *(undefined2 *)(iVar9 + (uint)param_3[7] * 2 + 0x26) = uVar6;
  *(undefined2 *)(iVar9 + (uint)param_3[8] * 2 + 0x26) = uVar6;
  uVar2 = *(undefined2 *)(iVar10 + uVar11 * 4);
  *(undefined2 *)(iVar9 + (uint)param_3[9] * 2 + 0x26) = uVar4;
  *(undefined2 *)(iVar9 + (uint)param_3[10] * 2 + 0x26) = uVar2;
  *(undefined2 *)(iVar9 + (uint)param_3[0xb] * 2 + 0x26) = uVar2;
  return;
}

