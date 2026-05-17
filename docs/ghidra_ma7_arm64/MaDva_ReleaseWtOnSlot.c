/* MaDva_ReleaseWtOnSlot @ 001a5fb4 404B */


/* YAMAHA::MaDva_ReleaseWtOnSlot(unsigned int, unsigned int, _MADVA_SLOTMAP*) */

void YAMAHA::MaDva_ReleaseWtOnSlot(uint param_1,uint param_2,_MADVA_SLOTMAP *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar4 = DAT_005d87a0;
  uVar1 = param_2 + param_1 * 0x10;
  plVar9 = *(long **)(DAT_005d87a0 + 0x3a08);
  plVar7 = (long *)**(undefined8 **)(DAT_005d87a0 + 0x39f8);
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  if (plVar7 != plVar9) {
    do {
      plVar8 = (long *)*plVar7;
      if ((*(uint *)(plVar7 + 2) & 0x3f) == uVar1) {
        if (*(int *)((long)plVar7 + 0x14) == 1) {
          lVar10 = lVar4 + (ulong)*(uint *)(plVar7 + 2);
          *(byte *)(lVar10 + 0x13c8) = *(byte *)(lVar10 + 0x13c8) & 0x7f;
          if (*(int *)(lVar4 + (ulong)uVar1 * 0xc + 0x10c8) == 2) {
            iVar2 = (int)plVar7[3];
            bVar3 = (&DAT_0048c250)[(ulong)(*(uint *)(plVar7 + 2) >> 6) & 0x7f];
            *(undefined4 *)(lVar4 + (ulong)bVar3 * 4 + 0x33c8) = 0xffffffff;
            *(undefined4 *)(lVar4 + (ulong)(uVar1 + (uint)bVar3 * 0x40) * 4 + 0x33e0) = 0xffffffff;
          }
          else {
            iVar2 = (int)plVar7[3];
          }
          if (iVar2 == 1) {
            plVar9 = (long *)plVar7[1];
            *(undefined4 *)(plVar7 + 3) = 0;
            lVar11 = *(long *)(lVar4 + 0x39f8);
            *plVar9 = *plVar7;
            lVar6 = *plVar7;
            lVar10 = lVar11;
            goto LAB_001a60b0;
          }
LAB_001a6058:
          bVar3 = *(byte *)((long)plVar7 + 0x1c);
        }
        else {
          lVar10 = plVar7[3];
          *(undefined4 *)(lVar4 + (ulong)uVar1 * 0xc + 0x10d0) = 0;
          if ((int)lVar10 != 1) goto LAB_001a6058;
          plVar9 = (long *)plVar7[1];
          *(undefined4 *)(plVar7 + 3) = 0;
          lVar10 = *(long *)(lVar4 + 0x39f8);
          *plVar9 = (long)plVar8;
          lVar11 = *(long *)(lVar4 + 0x39f8);
          lVar6 = *plVar7;
LAB_001a60b0:
          *(long **)(lVar6 + 8) = plVar9;
          puVar5 = *(undefined8 **)(lVar10 + 8);
          *puVar5 = plVar7;
          plVar7[1] = (long)puVar5;
          *(long **)(lVar11 + 8) = plVar7;
          *plVar7 = lVar11;
          bVar3 = *(byte *)((long)plVar7 + 0x1c);
        }
        if (bVar3 < 0x20) {
          plVar9 = *(long **)(lVar4 + 0x3a08);
          *(uint *)param_3 = *(uint *)param_3 | (uint)(1L << ((ulong)bVar3 & 0x3f));
        }
        else {
          plVar9 = *(long **)(lVar4 + 0x3a08);
          *(uint *)(param_3 + 4) =
               *(uint *)(param_3 + 4) | (uint)(1L << ((ulong)(bVar3 - 0x20) & 0x3f));
        }
      }
      plVar7 = plVar8;
    } while (plVar8 != plVar9);
  }
  return;
}

