/* MaDva_ReleaseSlot @ 00088ec0 408B */


/* YAMAHA::MaDva_ReleaseSlot(unsigned int, unsigned int, unsigned int) */

uint YAMAHA::MaDva_ReleaseSlot(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  byte *pbVar10;
  
  iVar4 = param_2 + param_1 * 0x10;
  piVar7 = *(int **)(DAT_00089058 + 0x88ecc);
  if (piVar7[iVar4 * 3 + 0x325] == 1) {
    iVar4 = iVar4 + param_3 * 0x40;
    bVar2 = *(byte *)((int)piVar7 + iVar4 + 0xf94);
    if (-1 < (int)((uint)bVar2 << 0x18)) {
      return 0xffffffff;
    }
    bVar1 = bVar2 & 0x40;
    uVar9 = bVar2 & 0x3f;
    *(byte *)((int)piVar7 + iVar4 + 0xf94) = bVar2 & 0x7f;
  }
  else {
    if (piVar7[iVar4 * 3 + 0x325] == 2) {
      if (*piVar7 == 1) {
        iVar4 = iVar4 + param_3 * 0x40;
        pbVar10 = (byte *)((int)piVar7 + iVar4 + 0xf94);
        if (-1 < *(char *)((int)piVar7 + iVar4 + 0xf94)) {
          return 0xffffffff;
        }
        uVar9 = (uint)*(byte *)(DAT_00089064 + 0x89014 + param_3);
        if (uVar9 != 0) {
          piVar7[uVar9 + 0xbe5] = -1;
        }
      }
      else {
        uVar9 = (uint)*(byte *)(DAT_0008905c + 0x88f2c + param_3);
        iVar5 = iVar4 + uVar9 * 0x40;
        if (((uVar9 != 0) && (piVar7[iVar5 + 0xbeb] != iVar4 + param_3 * 0x40)) ||
           (iVar4 = iVar4 + (uint)*(byte *)(param_3 + DAT_00089060 + 0x88fbe) * 0x40,
           pbVar10 = (byte *)((int)piVar7 + iVar4 + 0xf94),
           -1 < *(char *)((int)piVar7 + iVar4 + 0xf94))) {
          return 0xffffffff;
        }
        piVar7[iVar5 + 0xbeb] = -1;
      }
      bVar2 = *pbVar10;
      bVar1 = bVar2 & 0x40;
      uVar6 = bVar2 & 0x40;
      uVar9 = bVar2 & 0x3f;
      *pbVar10 = bVar2 & 0x7f;
      goto joined_r0x00088f7e;
    }
    if (piVar7[iVar4 * 3 + 0x327] < 1) {
      return 0xffffffff;
    }
    iVar5 = piVar7[iVar4 * 3 + 0x327] + -1;
    piVar7[iVar4 * 3 + 0x327] = iVar5;
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    uVar9 = (uint)*(byte *)((int)piVar7 + iVar4 * 0xc + 0xc99);
    bVar1 = *(byte *)(piVar7 + iVar4 * 3 + 0x326);
  }
  uVar6 = 0;
joined_r0x00088f7e:
  if (bVar1 == 0) {
    uVar3 = (uint)*(byte *)(piVar7 + uVar9 * 6 + 6);
    if (piVar7[uVar9 * 6 + 5] == 1) {
      piVar7[uVar9 * 6 + 5] = uVar6;
      *(int *)piVar7[uVar9 * 6 + 2] = piVar7[uVar9 * 6 + 1];
      *(int *)(piVar7[uVar9 * 6 + 1] + 4) = piVar7[uVar9 * 6 + 2];
      piVar8 = *(int **)(piVar7[0xd6d] + 4);
      *piVar8 = (int)(piVar7 + uVar9 * 6 + 1);
      piVar7[uVar9 * 6 + 2] = (int)piVar8;
      iVar4 = piVar7[0xd6d];
      *(int **)(iVar4 + 4) = piVar7 + uVar9 * 6 + 1;
      piVar7[uVar9 * 6 + 1] = iVar4;
    }
  }
  else {
    uVar3 = *(byte *)(piVar7 + uVar9 * 6 + 0x198) + 0x40;
    if (piVar7[uVar9 * 6 + 0x197] == 1) {
      piVar7[uVar9 * 6 + 0x197] = 0;
      *(int *)piVar7[uVar9 * 6 + 0x194] = piVar7[uVar9 * 6 + 0x193];
      *(int *)(piVar7[uVar9 * 6 + 0x193] + 4) = piVar7[uVar9 * 6 + 0x194];
      piVar8 = *(int **)(piVar7[0xd6e] + 4);
      *piVar8 = (int)(piVar7 + uVar9 * 6 + 0x193);
      piVar7[uVar9 * 6 + 0x194] = (int)piVar8;
      iVar4 = piVar7[0xd6e];
      *(int **)(iVar4 + 4) = piVar7 + uVar9 * 6 + 0x193;
      piVar7[uVar9 * 6 + 0x193] = iVar4;
    }
  }
  return uVar3;
}

