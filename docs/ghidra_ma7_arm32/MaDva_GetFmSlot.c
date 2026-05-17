/* MaDva_GetFmSlot @ 00088738 960B */


/* YAMAHA::MaDva_GetFmSlot(unsigned int, unsigned int, unsigned int, unsigned int,
   _MADVA_GETSLOTINFO*) */

void YAMAHA::MaDva_GetFmSlot
               (uint param_1,uint param_2,uint param_3,uint param_4,_MADVA_GETSLOTINFO *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
  iVar4 = param_2 + param_1 * 0x10;
  piVar6 = *(int **)(DAT_00088af8 + 0x8874e);
  *(undefined4 *)(param_5 + 4) = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  *(undefined4 *)param_5 = 1;
  if (param_4 == 1) {
LAB_00088870:
    iVar5 = iVar4 + param_3 * 0x40;
  }
  else {
    if (param_4 != 2) {
      if ((piVar6[iVar4 * 3 + 0x325] == 0) && (0 < piVar6[iVar4 * 3 + 0x327])) {
        if ((char)piVar6[iVar4 * 3 + 0x326] == '\0') {
          bVar1 = *(byte *)((int)piVar6 + iVar4 * 0xc + 0xc99);
          *(undefined4 *)param_5 = 2;
          *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar6 + (uint)bVar1 * 6 + 6);
          piVar6[iVar4 * 3 + 0x327] = piVar6[iVar4 * 3 + 0x327] + 1;
          piVar6[(uint)bVar1 * 6 + 5] = 1;
          *(int *)piVar6[(uint)bVar1 * 6 + 2] = piVar6[(uint)bVar1 * 6 + 1];
          *(int *)(piVar6[(uint)bVar1 * 6 + 1] + 4) = piVar6[(uint)bVar1 * 6 + 2];
          piVar8 = *(int **)(piVar6[0xd6f] + 4);
          *piVar8 = (int)(piVar6 + (uint)bVar1 * 6 + 1);
          piVar6[(uint)bVar1 * 6 + 2] = (int)piVar8;
          iVar4 = piVar6[0xd6f];
          *(int **)(iVar4 + 4) = piVar6 + (uint)bVar1 * 6 + 1;
          piVar6[(uint)bVar1 * 6 + 1] = iVar4;
          return;
        }
        bVar1 = *(byte *)((int)piVar6 + iVar4 * 0xc + 0xc99);
        *(undefined4 *)param_5 = 3;
        *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar6 + (uint)bVar1 * 6 + 0x198);
        if (piVar6[(uint)bVar1 * 6 + 0x197] == 1) {
          piVar6[(uint)bVar1 * 6 + 0x197] = 0;
          *(int *)piVar6[(uint)bVar1 * 6 + 0x194] = piVar6[(uint)bVar1 * 6 + 0x193];
          *(int *)(piVar6[(uint)bVar1 * 6 + 0x193] + 4) = piVar6[(uint)bVar1 * 6 + 0x194];
          puVar3 = *(undefined4 **)(piVar6[0xd6e] + 4);
          *puVar3 = piVar6 + (uint)bVar1 * 6 + 0x193;
          piVar6[(uint)bVar1 * 6 + 0x194] = (int)puVar3;
          iVar5 = piVar6[0xd6e];
          *(int **)(iVar5 + 4) = piVar6 + (uint)bVar1 * 6 + 0x193;
          piVar6[(uint)bVar1 * 6 + 0x193] = iVar5;
        }
      }
      iVar5 = iVar4 + param_3 * 0x40;
      *(undefined1 *)((int)piVar6 + iVar5 + 0xf94) = 0;
      piVar8 = *(int **)piVar6[0xd6b];
      if ((int *)piVar6[0xd6d] == piVar8) {
        piVar8 = (int *)*piVar8;
      }
      *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar8 + 5);
      if (piVar8[4] == 1) {
        uVar9 = piVar8[2];
        if (piVar8[3] == 1) {
          *(byte *)((int)piVar6 + uVar9 + 0xf94) = *(byte *)((int)piVar6 + uVar9 + 0xf94) & 0x7f;
        }
        else {
          piVar6[(uVar9 & 0x3f) * 3 + 0x327] = 0;
        }
      }
      piVar6[iVar4 * 3 + 0x325] = 0;
      *(undefined1 *)(piVar6 + iVar4 * 3 + 0x326) = 0;
      piVar6[iVar4 * 3 + 0x327] = 1;
      piVar8[4] = 1;
      *(int *)piVar8[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar8[1];
      puVar3 = *(undefined4 **)(piVar6[0xd6f] + 4);
      *puVar3 = piVar8;
      piVar8[1] = (int)puVar3;
      iVar7 = piVar6[0xd6f];
      *(int **)(iVar7 + 4) = piVar8;
      piVar8[3] = 0;
      *piVar8 = iVar7;
      piVar8[2] = iVar5;
      *(char *)((int)piVar6 + iVar4 * 0xc + 0xc99) = (char)piVar8[5];
      return;
    }
    uVar9 = (uint)*(byte *)(DAT_00088afc + 0x88778 + param_3);
    if (uVar9 == 0) goto LAB_00088870;
    if (*piVar6 != 1) {
      bVar1 = *(byte *)(DAT_00088afc + 0x88778 + param_3 + 0x80);
      piVar6[iVar4 + uVar9 * 0x40 + 0xbeb] = iVar4 + param_3 * 0x40;
      iVar5 = iVar4 + (uint)bVar1 * 0x40;
      iVar7 = piVar6[iVar4 * 3 + 0x325];
      goto joined_r0x00088878;
    }
    iVar5 = iVar4 + param_3 * 0x40;
    piVar6[uVar9 + 0xbe5] = iVar5;
  }
  iVar7 = piVar6[iVar4 * 3 + 0x325];
joined_r0x00088878:
  if ((iVar7 == 0) && (0 < piVar6[iVar4 * 3 + 0x327])) {
    piVar6[iVar4 * 3 + 0x327] = 0;
    if ((char)piVar6[iVar4 * 3 + 0x326] == '\0') {
      piVar6[iVar4 * 3 + 0x325] = param_4;
      bVar2 = *(byte *)((int)piVar6 + iVar4 * 0xc + 0xc99);
      bVar1 = *(byte *)(piVar6 + (uint)bVar2 * 6 + 6);
      piVar6[(uint)bVar2 * 6 + 3] = iVar5;
      piVar6[(uint)bVar2 * 6 + 4] = 1;
      *(uint *)(param_5 + 4) = (uint)bVar1;
      piVar8 = (int *)piVar6[(uint)bVar2 * 6 + 2];
      iVar4 = piVar6[(uint)bVar2 * 6 + 1];
      piVar6[(uint)bVar2 * 6 + 5] = 1;
      *piVar8 = iVar4;
      *(int *)(piVar6[(uint)bVar2 * 6 + 1] + 4) = piVar6[(uint)bVar2 * 6 + 2];
      piVar8 = *(int **)(piVar6[0xd6f] + 4);
      *piVar8 = (int)(piVar6 + (uint)bVar2 * 6 + 1);
      piVar6[(uint)bVar2 * 6 + 2] = (int)piVar8;
      iVar7 = piVar6[0xd6f];
      *(int **)(iVar7 + 4) = piVar6 + (uint)bVar2 * 6 + 1;
      iVar4 = piVar6[(uint)bVar2 * 6 + 6];
      piVar6[(uint)bVar2 * 6 + 1] = iVar7;
      *(char *)((int)piVar6 + iVar5 + 0xf94) = (char)iVar4 + -0x80;
      return;
    }
    bVar1 = *(byte *)((int)piVar6 + iVar4 * 0xc + 0xc99);
    *(undefined4 *)param_5 = 3;
    *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar6 + (uint)bVar1 * 6 + 0x198);
    if (piVar6[(uint)bVar1 * 6 + 0x197] == 1) {
      piVar6[(uint)bVar1 * 6 + 0x197] = 0;
      *(int *)piVar6[(uint)bVar1 * 6 + 0x194] = piVar6[(uint)bVar1 * 6 + 0x193];
      *(int *)(piVar6[(uint)bVar1 * 6 + 0x193] + 4) = piVar6[(uint)bVar1 * 6 + 0x194];
      puVar3 = *(undefined4 **)(piVar6[0xd6e] + 4);
      *puVar3 = piVar6 + (uint)bVar1 * 6 + 0x193;
      piVar6[(uint)bVar1 * 6 + 0x194] = (int)puVar3;
      iVar7 = piVar6[0xd6e];
      *(int **)(iVar7 + 4) = piVar6 + (uint)bVar1 * 6 + 0x193;
      piVar6[(uint)bVar1 * 6 + 0x193] = iVar7;
    }
  }
  piVar6[iVar4 * 3 + 0x325] = param_4;
  uVar9 = (uint)*(byte *)((int)piVar6 + iVar5 + 0xf94);
  if ((uVar9 & 0xc0) != 0x80) {
    if ((uVar9 & 0xc0) == 0xc0) {
      uVar9 = uVar9 & 0x3f;
      *(undefined4 *)param_5 = 3;
      *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar6 + uVar9 * 6 + 0x198);
      if (piVar6[uVar9 * 6 + 0x197] == 1) {
        piVar6[uVar9 * 6 + 0x197] = 0;
        *(int *)piVar6[uVar9 * 6 + 0x194] = piVar6[uVar9 * 6 + 0x193];
        *(int *)(piVar6[uVar9 * 6 + 0x193] + 4) = piVar6[uVar9 * 6 + 0x194];
        piVar8 = *(int **)(piVar6[0xd6e] + 4);
        *piVar8 = (int)(piVar6 + uVar9 * 6 + 0x193);
        piVar6[uVar9 * 6 + 0x194] = (int)piVar8;
        iVar4 = piVar6[0xd6e];
        *(int **)(iVar4 + 4) = piVar6 + uVar9 * 6 + 0x193;
        piVar6[uVar9 * 6 + 0x193] = iVar4;
      }
    }
    piVar8 = *(int **)piVar6[0xd6b];
    if ((int *)piVar6[0xd6d] == piVar8) {
      piVar8 = (int *)*piVar8;
    }
    *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar8 + 5);
    if (piVar8[4] == 1) {
      uVar9 = piVar8[2];
      if (piVar8[3] == 1) {
        *(byte *)((int)piVar6 + uVar9 + 0xf94) = *(byte *)((int)piVar6 + uVar9 + 0xf94) & 0x7f;
      }
      else {
        piVar6[(uVar9 & 0x3f) * 3 + 0x327] = 0;
      }
    }
    piVar8[4] = 1;
    *(int *)piVar8[1] = *piVar8;
    *(int *)(*piVar8 + 4) = piVar8[1];
    puVar3 = *(undefined4 **)(piVar6[0xd6f] + 4);
    *puVar3 = piVar8;
    piVar8[1] = (int)puVar3;
    iVar4 = piVar6[0xd6f];
    *(int **)(iVar4 + 4) = piVar8;
    *piVar8 = iVar4;
    *(char *)((int)piVar6 + iVar5 + 0xf94) = (char)piVar8[5] + -0x80;
    piVar8[3] = 1;
    piVar8[2] = iVar5;
    return;
  }
  uVar9 = uVar9 & 0x3f;
  *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar6 + uVar9 * 6 + 6);
  piVar6[uVar9 * 6 + 5] = 1;
  *(int *)piVar6[uVar9 * 6 + 2] = piVar6[uVar9 * 6 + 1];
  *(int *)(piVar6[uVar9 * 6 + 1] + 4) = piVar6[uVar9 * 6 + 2];
  piVar8 = *(int **)(piVar6[0xd6f] + 4);
  *piVar8 = (int)(piVar6 + uVar9 * 6 + 1);
  piVar6[uVar9 * 6 + 2] = (int)piVar8;
  iVar4 = piVar6[0xd6f];
  *(int **)(iVar4 + 4) = piVar6 + uVar9 * 6 + 1;
  piVar6[uVar9 * 6 + 1] = iVar4;
  return;
}

