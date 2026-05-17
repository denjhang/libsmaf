/* MaDva_ReleaseFmAllSlot @ 00089284 288B */


/* YAMAHA::MaDva_ReleaseFmAllSlot(unsigned int, unsigned int, _MADVA_SLOTMAP*) */

void YAMAHA::MaDva_ReleaseFmAllSlot(uint param_1,uint param_2,_MADVA_SLOTMAP *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  uVar1 = param_2 + param_1 * 0x10;
  iVar5 = *(int *)(DAT_000893a4 + 0x89292);
  iVar9 = *(int *)(DAT_000893a8 + 0x8929e);
  piVar2 = (int *)**(undefined4 **)(iVar5 + 0x35ac);
  iVar6 = DAT_000893ac + 0x892b8;
  if (*(int **)(iVar5 + 0x35b4) == piVar2) {
    piVar2 = (int *)*piVar2;
  }
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  piVar10 = *(int **)(iVar5 + 0x35bc);
  while (piVar3 = piVar2, piVar3 != piVar10) {
    piVar2 = (int *)*piVar3;
    if (*(int **)(iVar5 + 0x35b4) == piVar2) {
      piVar2 = (int *)*piVar2;
    }
    if (((piVar3[2] & 0x3fU) == uVar1) && (piVar3[4] != 2)) {
      if (piVar3[3] == 1) {
        iVar7 = piVar3[2] + iVar5;
        *(byte *)(iVar7 + 0xf94) = *(byte *)(iVar7 + 0xf94) & 0x7f;
        if (*(int *)(iVar5 + uVar1 * 0xc + 0xc94) == 2) {
          uVar8 = (uint)*(byte *)(iVar6 + ((piVar3[2] & 0x1fffU) >> 6));
          *(undefined4 *)(iVar9 + (uVar8 + 0xbe4) * 4 + 4) = 0xffffffff;
          *(undefined4 *)(iVar5 + (uVar1 + uVar8 * 0x40 + 0xbea) * 4 + 4) = 0xffffffff;
        }
      }
      else {
        *(undefined4 *)(iVar5 + uVar1 * 0xc + 0xc9c) = 0;
      }
      piVar3[4] = 2;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      iVar7 = **(int **)(iVar5 + 0x35ac);
      *(int **)(iVar7 + 4) = piVar3;
      *piVar3 = iVar7;
      puVar4 = *(undefined4 **)(iVar5 + 0x35ac);
      *puVar4 = piVar3;
      uVar8 = (uint)*(byte *)(piVar3 + 5);
      piVar3[1] = (int)puVar4;
      iVar5 = iVar9;
      if (uVar8 < 0x20) {
        *(uint *)param_3 = *(uint *)param_3 | 1 << uVar8;
        piVar10 = *(int **)(iVar9 + 0x35bc);
      }
      else {
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1 << (uVar8 - 0x20 & 0xff);
        piVar10 = *(int **)(iVar9 + 0x35bc);
      }
    }
  }
  return;
}

