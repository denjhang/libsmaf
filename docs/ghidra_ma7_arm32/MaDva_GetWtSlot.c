/* MaDva_GetWtSlot @ 00088b00 952B */


/* YAMAHA::MaDva_GetWtSlot(unsigned int, unsigned int, unsigned int, unsigned int,
   _MADVA_GETSLOTINFO*) */

void YAMAHA::MaDva_GetWtSlot
               (uint param_1,uint param_2,uint param_3,uint param_4,_MADVA_GETSLOTINFO *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  iVar4 = param_2 + param_1 * 0x10;
  piVar9 = *(int **)(DAT_00088eb8 + 0x88b16);
  *(undefined4 *)(param_5 + 4) = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  *(undefined4 *)param_5 = 1;
  if (param_4 == 1) {
LAB_00088c0a:
    iVar5 = iVar4 + param_3 * 0x40;
LAB_00088c0e:
    iVar6 = piVar9[iVar4 * 3 + 0x325];
  }
  else {
    if (param_4 != 2) {
      if ((piVar9[iVar4 * 3 + 0x325] != 0) || (piVar9[iVar4 * 3 + 0x327] < 1)) {
LAB_00088c52:
        iVar5 = iVar4 + param_3 * 0x40;
        *(undefined1 *)((int)piVar9 + iVar5 + 0xf94) = 0;
        piVar8 = *(int **)piVar9[0xd6c];
        if ((int *)piVar9[0xd6e] == piVar8) {
          piVar8 = (int *)*piVar8;
        }
        *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar8 + 5);
        if (piVar8[4] == 1) {
          uVar10 = piVar8[2];
          if (piVar8[3] == 1) {
            *(byte *)((int)piVar9 + uVar10 + 0xf94) = *(byte *)((int)piVar9 + uVar10 + 0xf94) & 0x7f
            ;
          }
          else {
            piVar9[(uVar10 & 0x3f) * 3 + 0x327] = 0;
          }
        }
        piVar9[iVar4 * 3 + 0x325] = 0;
        piVar9[iVar4 * 3 + 0x327] = 1;
        *(undefined1 *)(piVar9 + iVar4 * 3 + 0x326) = 0x40;
        piVar8[4] = 1;
        *(int *)piVar8[1] = *piVar8;
        *(int *)(*piVar8 + 4) = piVar8[1];
        puVar3 = *(undefined4 **)(piVar9[0xd70] + 4);
        *puVar3 = piVar8;
        piVar8[1] = (int)puVar3;
        iVar6 = piVar9[0xd70];
        *(int **)(iVar6 + 4) = piVar8;
        piVar8[3] = 0;
        *piVar8 = iVar6;
        piVar8[2] = iVar5;
        *(char *)((int)piVar9 + iVar4 * 0xc + 0xc99) = (char)piVar8[5];
        return;
      }
      if ((char)piVar9[iVar4 * 3 + 0x326] != '@') {
        bVar1 = *(byte *)((int)piVar9 + iVar4 * 0xc + 0xc99);
        *(undefined4 *)param_5 = 3;
        *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar9 + (uint)bVar1 * 6 + 6);
        if (piVar9[(uint)bVar1 * 6 + 5] == 1) {
          piVar9[(uint)bVar1 * 6 + 5] = 0;
          *(int *)piVar9[(uint)bVar1 * 6 + 2] = piVar9[(uint)bVar1 * 6 + 1];
          *(int *)(piVar9[(uint)bVar1 * 6 + 1] + 4) = piVar9[(uint)bVar1 * 6 + 2];
          puVar3 = *(undefined4 **)(piVar9[0xd6d] + 4);
          *puVar3 = piVar9 + (uint)bVar1 * 6 + 1;
          piVar9[(uint)bVar1 * 6 + 2] = (int)puVar3;
          iVar5 = piVar9[0xd6d];
          *(int **)(iVar5 + 4) = piVar9 + (uint)bVar1 * 6 + 1;
          piVar9[(uint)bVar1 * 6 + 1] = iVar5;
        }
        goto LAB_00088c52;
      }
      bVar1 = *(byte *)((int)piVar9 + iVar4 * 0xc + 0xc99);
      *(undefined4 *)param_5 = 2;
      piVar8 = piVar9 + (uint)bVar1 * 6;
      *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar8 + 0x198);
      piVar9[iVar4 * 3 + 0x327] = piVar9[iVar4 * 3 + 0x327] + 1;
      piVar8[0x197] = 1;
      goto LAB_00088bda;
    }
    uVar10 = (uint)*(byte *)(DAT_00088ebc + 0x88b3c + param_3);
    if (uVar10 == 0) goto LAB_00088c0a;
    if (*piVar9 == 1) {
      iVar5 = iVar4 + param_3 * 0x40;
      piVar9[uVar10 + 0xbe5] = iVar5;
      goto LAB_00088c0e;
    }
    bVar1 = *(byte *)(DAT_00088ebc + 0x88b3c + param_3 + 0x80);
    piVar9[iVar4 + uVar10 * 0x40 + 0xbeb] = iVar4 + param_3 * 0x40;
    iVar5 = iVar4 + (uint)bVar1 * 0x40;
    iVar6 = piVar9[iVar4 * 3 + 0x325];
  }
  if ((iVar6 == 0) && (0 < piVar9[iVar4 * 3 + 0x327])) {
    piVar9[iVar4 * 3 + 0x327] = 0;
    if ((char)piVar9[iVar4 * 3 + 0x326] == '@') {
      piVar9[iVar4 * 3 + 0x325] = param_4;
      bVar1 = *(byte *)((int)piVar9 + iVar4 * 0xc + 0xc99);
      bVar2 = *(byte *)(piVar9 + (uint)bVar1 * 6 + 0x198);
      piVar9[(uint)bVar1 * 6 + 0x195] = iVar5;
      piVar9[(uint)bVar1 * 6 + 0x196] = 1;
      *(uint *)(param_5 + 4) = (uint)bVar2;
      piVar8 = (int *)piVar9[(uint)bVar1 * 6 + 0x194];
      iVar4 = piVar9[(uint)bVar1 * 6 + 0x193];
      piVar9[(uint)bVar1 * 6 + 0x197] = 1;
      *piVar8 = iVar4;
      *(int *)(piVar9[(uint)bVar1 * 6 + 0x193] + 4) = piVar9[(uint)bVar1 * 6 + 0x194];
      piVar8 = *(int **)(piVar9[0xd70] + 4);
      *piVar8 = (int)(piVar9 + (uint)bVar1 * 6 + 0x193);
      piVar9[(uint)bVar1 * 6 + 0x194] = (int)piVar8;
      iVar6 = piVar9[0xd70];
      *(int **)(iVar6 + 4) = piVar9 + (uint)bVar1 * 6 + 0x193;
      iVar4 = piVar9[(uint)bVar1 * 6 + 0x198];
      piVar9[(uint)bVar1 * 6 + 0x193] = iVar6;
      *(char *)((int)piVar9 + iVar5 + 0xf94) = (char)iVar4 + -0x40;
      return;
    }
    bVar1 = *(byte *)((int)piVar9 + iVar4 * 0xc + 0xc99);
    *(undefined4 *)param_5 = 3;
    *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar9 + (uint)bVar1 * 6 + 0x198);
    if (piVar9[(uint)bVar1 * 6 + 0x197] == 1) {
      piVar9[(uint)bVar1 * 6 + 0x197] = 0;
      *(int *)piVar9[(uint)bVar1 * 6 + 0x194] = piVar9[(uint)bVar1 * 6 + 0x193];
      *(int *)(piVar9[(uint)bVar1 * 6 + 0x193] + 4) = piVar9[(uint)bVar1 * 6 + 0x194];
      piVar8 = *(int **)(piVar9[0xd6d] + 4);
      *piVar8 = (int)(piVar9 + (uint)bVar1 * 6 + 0x193);
      piVar9[(uint)bVar1 * 6 + 0x194] = (int)piVar8;
      iVar6 = piVar9[0xd6d];
      *(int **)(iVar6 + 4) = piVar9 + (uint)bVar1 * 6 + 0x193;
      piVar9[(uint)bVar1 * 6 + 0x193] = iVar6;
    }
  }
  piVar9[iVar4 * 3 + 0x325] = param_4;
  uVar10 = (uint)*(byte *)((int)piVar9 + iVar5 + 0xf94);
  if ((uVar10 & 0xc0) == 0x80) {
    uVar10 = uVar10 & 0x3f;
    *(undefined4 *)param_5 = 3;
    *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar9 + uVar10 * 6 + 6);
    if (piVar9[uVar10 * 6 + 5] == 1) {
      piVar9[uVar10 * 6 + 5] = 0;
      *(int *)piVar9[uVar10 * 6 + 2] = piVar9[uVar10 * 6 + 1];
      *(int *)(piVar9[uVar10 * 6 + 1] + 4) = piVar9[uVar10 * 6 + 2];
      piVar8 = *(int **)(piVar9[0xd6d] + 4);
      *piVar8 = (int)(piVar9 + uVar10 * 6 + 1);
      piVar9[uVar10 * 6 + 2] = (int)piVar8;
      iVar4 = piVar9[0xd6d];
      *(int **)(iVar4 + 4) = piVar9 + uVar10 * 6 + 1;
      piVar9[uVar10 * 6 + 1] = iVar4;
    }
  }
  else if ((uVar10 & 0xc0) == 0xc0) {
    piVar8 = piVar9 + (uVar10 & 0x3f) * 6;
    *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar8 + 0x198);
    piVar8[0x197] = 1;
LAB_00088bda:
    *(int *)piVar8[0x194] = piVar8[0x193];
    *(int *)(piVar8[0x193] + 4) = piVar8[0x194];
    piVar7 = *(int **)(piVar9[0xd70] + 4);
    *piVar7 = (int)(piVar8 + 0x193);
    piVar8[0x194] = (int)piVar7;
    iVar4 = piVar9[0xd70];
    *(int **)(iVar4 + 4) = piVar8 + 0x193;
    piVar8[0x193] = iVar4;
    return;
  }
  piVar8 = *(int **)piVar9[0xd6c];
  if ((int *)piVar9[0xd6e] == piVar8) {
    piVar8 = (int *)*piVar8;
  }
  *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar8 + 5);
  if (piVar8[4] == 1) {
    uVar10 = piVar8[2];
    if (piVar8[3] == 1) {
      *(byte *)((int)piVar9 + uVar10 + 0xf94) = *(byte *)((int)piVar9 + uVar10 + 0xf94) & 0x7f;
    }
    else {
      piVar9[(uVar10 & 0x3f) * 3 + 0x327] = 0;
    }
  }
  piVar8[4] = 1;
  *(int *)piVar8[1] = *piVar8;
  *(int *)(*piVar8 + 4) = piVar8[1];
  puVar3 = *(undefined4 **)(piVar9[0xd70] + 4);
  *puVar3 = piVar8;
  piVar8[1] = (int)puVar3;
  iVar4 = piVar9[0xd70];
  *(int **)(iVar4 + 4) = piVar8;
  *piVar8 = iVar4;
  *(char *)((int)piVar9 + iVar5 + 0xf94) = (char)piVar8[5] + -0x40;
  piVar8[3] = 1;
  piVar8[2] = iVar5;
  return;
}

