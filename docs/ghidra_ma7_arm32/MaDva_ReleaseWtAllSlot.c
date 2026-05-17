/* MaDva_ReleaseWtAllSlot @ 000893b0 290B */


/* YAMAHA::MaDva_ReleaseWtAllSlot(unsigned int, unsigned int, _MADVA_SLOTMAP*) */

void YAMAHA::MaDva_ReleaseWtAllSlot(uint param_1,uint param_2,_MADVA_SLOTMAP *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  uVar1 = param_2 + param_1 * 0x10;
  iVar4 = *(int *)(DAT_000894d4 + 0x893be);
  iVar9 = *(int *)(DAT_000894d8 + 0x893ca);
  piVar2 = (int *)**(undefined4 **)(iVar4 + 0x35b0);
  iVar5 = DAT_000894dc + 0x893ea;
  if (*(int **)(iVar4 + 0x35b8) == piVar2) {
    piVar2 = (int *)*piVar2;
  }
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  piVar10 = *(int **)(iVar4 + 0x35c0);
  while (piVar3 = piVar2, piVar3 != piVar10) {
    piVar2 = (int *)*piVar3;
    if (*(int **)(iVar4 + 0x35b8) == piVar2) {
      piVar2 = (int *)*piVar2;
    }
    if (((piVar3[2] & 0x3fU) == uVar1) && (piVar3[4] != 2)) {
      if (piVar3[3] == 1) {
        iVar7 = piVar3[2] + iVar4;
        *(byte *)(iVar7 + 0xf94) = *(byte *)(iVar7 + 0xf94) & 0x7f;
        if (*(int *)(iVar4 + uVar1 * 0xc + 0xc94) == 2) {
          uVar8 = (uint)*(byte *)(iVar5 + ((piVar3[2] & 0x1fffU) >> 6));
          *(undefined4 *)(iVar9 + (uVar8 + 0xbe4) * 4 + 4) = 0xffffffff;
          *(undefined4 *)(iVar4 + (uVar1 + uVar8 * 0x40 + 0xbea) * 4 + 4) = 0xffffffff;
        }
      }
      else {
        *(undefined4 *)(iVar4 + uVar1 * 0xc + 0xc9c) = 0;
      }
      piVar3[4] = 2;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      iVar7 = **(int **)(iVar4 + 0x35b0);
      *(int **)(iVar7 + 4) = piVar3;
      *piVar3 = iVar7;
      puVar6 = *(undefined4 **)(iVar4 + 0x35b0);
      *puVar6 = piVar3;
      uVar8 = (uint)*(byte *)(piVar3 + 5);
      piVar3[1] = (int)puVar6;
      iVar4 = iVar9;
      if (uVar8 < 0x20) {
        *(uint *)param_3 = *(uint *)param_3 | 1 << uVar8;
        piVar10 = *(int **)(iVar9 + 0x35c0);
      }
      else {
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1 << (uVar8 - 0x20 & 0xff);
        piVar10 = *(int **)(iVar9 + 0x35c0);
      }
    }
  }
  return;
}

