/* lset_combd @ 0010020c 400B */


/* YAMAHA::lset_combd(unsigned short, unsigned short, unsigned char const*) */

void YAMAHA::lset_combd(ushort param_1,ushort param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  short sVar4;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ushort *local_30;
  uint uVar5;
  
  bVar1 = *(byte *)(*(int *)(DAT_0010039c + 0x100220) + (uint)param_1);
  local_30 = (ushort *)(*(int *)(DAT_001003a4 + 0x10022e) + -2);
  iVar9 = *(int *)(DAT_001003a8 + 0x100238);
  pbVar12 = param_3 + 3;
  pbVar8 = param_3 + 2;
  bVar7 = 0;
  puVar3 = (ushort *)(*(int *)(DAT_001003a0 + 0x100228) + (uint)param_2 * 0x10);
  do {
    local_30 = local_30 + 1;
    uVar19 = (uint)*puVar3 * 0x7ae1;
    uVar17 = (uint)*(byte *)(iVar9 + (uint)param_3[1] + 0x226);
    uVar16 = (uint)puVar3[1] * 0x7ae1 >> 0x10;
    uVar18 = uVar17;
    if (1 < uVar17) {
      uVar18 = 0xaaaaaaab;
    }
    iVar20 = (int)uVar19 >> 0x10;
    uVar10 = *(ushort *)(iVar9 + (uint)*param_3 * 2 + 0x266);
    uVar11 = (uint)uVar10;
    uVar15 = ((uint)bVar1 * (uint)*local_30 & 0x7fffff) >> 7;
    uVar5 = uVar19 >> 0x10;
    sVar4 = (short)(uVar19 >> 0x10);
    if (1 < uVar17) {
      uVar16 = (uint)((ulonglong)uVar18 * (ulonglong)uVar16 >> 0x21);
    }
    *(ushort *)(iVar9 + (uint)param_3[1] * 2 + 0x266) = (short)uVar16 + uVar10;
    uVar16 = (uint)*pbVar8;
    bVar2 = *(byte *)(iVar9 + uVar16 + 0x226);
    if ((bVar7 & 1) == 0) {
      if (1 < bVar2) {
        sVar4 = (short)(uVar5 / 3);
      }
      *(ushort *)(iVar9 + uVar16 * 2 + 0x266) = sVar4 + uVar10;
      bVar2 = *(byte *)(iVar9 + (uint)*pbVar12 + 0x226);
      if (bVar2 < 2) {
        uVar11 = uVar11 + uVar15;
        iVar13 = uVar5 + uVar11;
      }
      else {
        iVar20 = iVar20 + uVar15;
        iVar13 = 0x55555556;
      }
      iVar6 = iVar9 + (uint)*pbVar12 * 2;
      if (bVar2 < 2) {
        *(short *)(iVar6 + 0x266) = (short)iVar13;
      }
      else {
        *(short *)(iVar6 + 0x266) =
             (short)uVar11 + (short)((ulonglong)((longlong)iVar13 * (longlong)iVar20) >> 0x20);
      }
    }
    else {
      if (bVar2 < 2) {
        sVar14 = (short)uVar15 + uVar10 + sVar4;
      }
      else {
        sVar14 = (short)((ulonglong)((longlong)(int)(uVar15 + iVar20) * 0x55555556) >> 0x20);
      }
      if (1 < bVar2) {
        sVar14 = sVar14 + uVar10;
      }
      *(short *)(iVar9 + uVar16 * 2 + 0x266) = sVar14;
      uVar16 = (uint)*(byte *)(iVar9 + (uint)*pbVar12 + 0x226);
      if (uVar16 < 2) {
        uVar10 = uVar10 + sVar4;
        uVar18 = uVar16;
      }
      else {
        uVar18 = 0xaaaaaaab;
      }
      iVar20 = iVar9 + (uint)*pbVar12 * 2;
      if (uVar16 < 2) {
        *(ushort *)(iVar20 + 0x266) = uVar10;
      }
      else {
        *(ushort *)(iVar20 + 0x266) =
             uVar10 + (short)(uint)((ulonglong)uVar18 * (ulonglong)uVar5 >> 0x21);
      }
    }
    bVar7 = bVar7 + 1;
    pbVar12 = pbVar12 + 4;
    pbVar8 = pbVar8 + 4;
    puVar3 = puVar3 + 2;
    param_3 = param_3 + 4;
  } while (bVar7 != 4);
  return;
}

