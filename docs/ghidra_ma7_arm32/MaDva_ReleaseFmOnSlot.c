/* MaDva_ReleaseFmOnSlot @ 00089068 258B */


/* YAMAHA::MaDva_ReleaseFmOnSlot(unsigned int, unsigned int, _MADVA_SLOTMAP*) */

void YAMAHA::MaDva_ReleaseFmOnSlot(uint param_1,uint param_2,_MADVA_SLOTMAP *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar3 = param_2 + param_1 * 0x10;
  iVar8 = *(int *)(DAT_0008916c + 0x89076);
  iVar2 = DAT_00089170 + 0x89082;
  iVar9 = iVar8 + uVar3 * 0xc;
  piVar4 = (int *)**(int **)(iVar8 + 0x35b4);
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  iVar10 = *(int *)(iVar8 + 0x35bc);
  do {
    do {
      piVar5 = piVar4;
      if (piVar5 == (int *)iVar10) {
        return;
      }
      piVar4 = (int *)*piVar5;
    } while ((piVar5[2] & 0x3fU) != uVar3);
    if (piVar5[3] == 1) {
      iVar10 = piVar5[2] + iVar8;
      *(byte *)(iVar10 + 0xf94) = *(byte *)(iVar10 + 0xf94) & 0x7f;
      if (*(int *)(iVar9 + 0xc94) != 2) goto LAB_000890d8;
      uVar6 = (uint)*(byte *)(iVar2 + ((piVar5[2] & 0x1fffU) >> 6));
      *(undefined4 *)(iVar8 + (uVar6 + 0xbe4) * 4 + 4) = 0xffffffff;
      *(undefined4 *)(iVar8 + (uVar3 + uVar6 * 0x40 + 0xbea) * 4 + 4) = 0xffffffff;
      iVar10 = piVar5[4];
    }
    else {
      *(undefined4 *)(iVar9 + 0xc9c) = 0;
LAB_000890d8:
      iVar10 = piVar5[4];
    }
    if (iVar10 == 1) {
      piVar5[4] = 0;
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      piVar7 = *(int **)(*(int *)(iVar8 + 0x35b4) + 4);
      *piVar7 = (int)piVar5;
      piVar5[1] = (int)piVar7;
      iVar10 = *(int *)(iVar8 + 0x35b4);
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
    iVar10 = *(int *)(iVar8 + 0x35bc);
  } while( true );
}

