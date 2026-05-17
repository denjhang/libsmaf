/* MaDva_ReleaseWtOnSlot @ 00089174 262B */


/* YAMAHA::MaDva_ReleaseWtOnSlot(unsigned int, unsigned int, _MADVA_SLOTMAP*) */

void YAMAHA::MaDva_ReleaseWtOnSlot(uint param_1,uint param_2,_MADVA_SLOTMAP *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  uVar3 = param_2 + param_1 * 0x10;
  iVar2 = *(int *)(DAT_0008927c + 0x89182);
  iVar6 = DAT_00089280 + 0x8919a;
  iVar9 = iVar2 + uVar3 * 0xc;
  piVar4 = (int *)**(int **)(iVar2 + 0x35b8);
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  iVar10 = *(int *)(iVar2 + 0x35c0);
  do {
    do {
      piVar5 = piVar4;
      if (piVar5 == (int *)iVar10) {
        return;
      }
      piVar4 = (int *)*piVar5;
    } while ((piVar5[2] & 0x3fU) != uVar3);
    if (piVar5[3] == 1) {
      iVar10 = piVar5[2] + iVar2;
      *(byte *)(iVar10 + 0xf94) = *(byte *)(iVar10 + 0xf94) & 0x7f;
      if (*(int *)(iVar9 + 0xc94) != 2) goto LAB_000891e8;
      uVar7 = (uint)*(byte *)(iVar6 + ((piVar5[2] & 0x1fffU) >> 6));
      *(undefined4 *)(iVar2 + (uVar7 + 0xbe4) * 4 + 4) = 0xffffffff;
      *(undefined4 *)(iVar2 + (uVar3 + uVar7 * 0x40 + 0xbea) * 4 + 4) = 0xffffffff;
      iVar10 = piVar5[4];
    }
    else {
      *(undefined4 *)(iVar9 + 0xc9c) = 0;
LAB_000891e8:
      iVar10 = piVar5[4];
    }
    if (iVar10 == 1) {
      piVar5[4] = 0;
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      piVar8 = *(int **)(*(int *)(iVar2 + 0x35b8) + 4);
      *piVar8 = (int)piVar5;
      piVar5[1] = (int)piVar8;
      iVar10 = *(int *)(iVar2 + 0x35b8);
      *(int **)(iVar10 + 4) = piVar5;
      *piVar5 = iVar10;
    }
    bVar1 = *(byte *)(piVar5 + 5);
    if (bVar1 < 0x20) {
      *(uint *)param_3 = *(uint *)param_3 | 1 << (uint)bVar1;
    }
    else {
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1 << (uint)(byte)(bVar1 - 0x20);
    }
    iVar10 = *(int *)(iVar2 + 0x35c0);
  } while( true );
}

