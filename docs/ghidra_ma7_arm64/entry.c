/* entry @ 00127d70 116B */


void entry(long param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  short *psVar9;
  ulong uVar10;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1e20);
  uVar4 = *(undefined4 *)(param_1 + 0x1e24);
  psVar9 = param_2;
  do {
    psVar1 = psVar9 + 3;
    uVar10 = *(ulong *)(param_1 + ((long)*psVar9 + 4) * 8);
    uVar5 = (uint)(uVar10 >> 0x1c) & 0x1fff;
    sVar2 = (short)uVar4;
    if ((uVar10 & 0x400000000000) == 0) {
      sVar2 = (short)uVar3;
    }
    uVar6 = (uint)(*(ulong *)(param_1 + ((long)psVar9[1] + 4) * 8) >> 0x1c) & 0x1fff;
    sVar8 = (short)uVar5;
    sVar7 = (short)uVar6;
    sVar2 = (sVar8 + sVar2) - sVar7;
    if (uVar6 <= uVar5) {
      sVar2 = sVar8 - sVar7;
    }
    *(short *)(param_1 + ((long)psVar9[2] + 0x4000) * 2 + 0x19a6) = sVar2;
    psVar9 = psVar1;
  } while (psVar1 != param_2 + 6);
  return;
}

