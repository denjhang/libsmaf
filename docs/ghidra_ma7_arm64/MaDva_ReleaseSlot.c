/* MaDva_ReleaseSlot @ 001a5c10 528B */


/* YAMAHA::MaDva_ReleaseSlot(unsigned int, unsigned int, unsigned int) */

uint YAMAHA::MaDva_ReleaseSlot(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  
  piVar5 = DAT_005d87a0;
  uVar1 = param_2 + param_1 * 0x10;
  if (DAT_005d87a0[(ulong)uVar1 * 3 + 0x432] == 1) {
    uVar1 = uVar1 + param_3 * 0x40;
    bVar3 = *(byte *)((long)DAT_005d87a0 + (ulong)uVar1 + 0x13c8);
    if (-1 < (char)bVar3) {
      return 0xffffffff;
    }
    bVar2 = bVar3 & 0x40;
    uVar9 = (ulong)(bVar3 & 0x3f);
    *(byte *)((long)DAT_005d87a0 + (ulong)uVar1 + 0x13c8) = bVar3 & 0x7f;
  }
  else {
    if (DAT_005d87a0[(ulong)uVar1 * 3 + 0x432] == 2) {
      if (*DAT_005d87a0 == 1) {
        uVar9 = (ulong)(uVar1 + param_3 * 0x40);
        pbVar10 = (byte *)((long)DAT_005d87a0 + uVar9 + 0x13c8);
        if (-1 < *(char *)((long)DAT_005d87a0 + uVar9 + 0x13c8)) {
          return 0xffffffff;
        }
        if ((byte)(&DAT_0048c250)[param_3] != 0) {
          DAT_005d87a0[(long)(int)(uint)(byte)(&DAT_0048c250)[param_3] + 0xcf2] = -1;
        }
      }
      else {
        uVar6 = uVar1 + (uint)(byte)(&DAT_0048c250)[param_3] * 0x40;
        if ((((byte)(&DAT_0048c250)[param_3] != 0) &&
            (DAT_005d87a0[(ulong)uVar6 + 0xcf8] != uVar1 + param_3 * 0x40)) ||
           (uVar9 = (ulong)(uVar1 + (uint)(byte)(&DAT_0048c2d0)[param_3] * 0x40),
           pbVar10 = (byte *)((long)DAT_005d87a0 + uVar9 + 0x13c8),
           -1 < *(char *)((long)DAT_005d87a0 + uVar9 + 0x13c8))) {
          return 0xffffffff;
        }
        DAT_005d87a0[(ulong)uVar6 + 0xcf8] = -1;
      }
      bVar3 = *pbVar10;
      bVar2 = bVar3 & 0x40;
      uVar1 = bVar3 & 0x40;
      *pbVar10 = bVar3 & 0x7f;
      uVar9 = (ulong)(bVar3 & 0x3f);
      goto joined_r0x001a5cfc;
    }
    if (DAT_005d87a0[(ulong)uVar1 * 3 + 0x434] < 1) {
      return 0xffffffff;
    }
    iVar4 = DAT_005d87a0[(ulong)uVar1 * 3 + 0x434] + -1;
    DAT_005d87a0[(ulong)uVar1 * 3 + 0x434] = iVar4;
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    uVar9 = (ulong)*(byte *)((long)piVar5 + (ulong)uVar1 * 0xc + 0x10cd);
    bVar2 = *(byte *)(piVar5 + (ulong)uVar1 * 3 + 0x433);
  }
  uVar1 = 0;
joined_r0x001a5cfc:
  if (bVar2 == 0) {
    uVar6 = (uint)*(byte *)(piVar5 + uVar9 * 8 + 9);
    if (piVar5[uVar9 * 8 + 8] == 1) {
      puVar11 = *(undefined8 **)(piVar5 + uVar9 * 8 + 4);
      piVar5[uVar9 * 8 + 8] = uVar1;
      lVar7 = *(long *)(piVar5 + 0xe7c);
      *puVar11 = *(undefined8 *)(piVar5 + uVar9 * 8 + 2);
      *(undefined8 **)(*(long *)(piVar5 + uVar9 * 8 + 2) + 8) = puVar11;
      plVar8 = *(long **)(lVar7 + 8);
      *plVar8 = (long)(piVar5 + uVar9 * 8 + 2);
      *(long **)(piVar5 + uVar9 * 8 + 4) = plVar8;
      lVar7 = *(long *)(piVar5 + 0xe7c);
      *(int **)(lVar7 + 8) = piVar5 + uVar9 * 8 + 2;
      *(long *)(piVar5 + uVar9 * 8 + 2) = lVar7;
      return uVar6;
    }
  }
  else {
    uVar6 = *(byte *)(piVar5 + uVar9 * 8 + 0x221) + 0x40;
    if (piVar5[uVar9 * 8 + 0x220] == 1) {
      puVar11 = *(undefined8 **)(piVar5 + uVar9 * 8 + 0x21c);
      piVar5[uVar9 * 8 + 0x220] = 0;
      lVar7 = *(long *)(piVar5 + 0xe7e);
      *puVar11 = *(undefined8 *)(piVar5 + uVar9 * 8 + 0x21a);
      *(undefined8 **)(*(long *)(piVar5 + uVar9 * 8 + 0x21a) + 8) = puVar11;
      plVar8 = *(long **)(lVar7 + 8);
      *plVar8 = (long)(piVar5 + uVar9 * 8 + 0x21a);
      *(long **)(piVar5 + uVar9 * 8 + 0x21c) = plVar8;
      *(int **)(lVar7 + 8) = piVar5 + uVar9 * 8 + 0x21a;
      *(long *)(piVar5 + uVar9 * 8 + 0x21a) = lVar7;
      return uVar6;
    }
  }
  return uVar6;
}

