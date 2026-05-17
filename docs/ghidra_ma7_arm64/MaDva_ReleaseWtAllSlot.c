/* MaDva_ReleaseWtAllSlot @ 001a62fc 436B */


/* YAMAHA::MaDva_ReleaseWtAllSlot(unsigned int, unsigned int, _MADVA_SLOTMAP*) */

void YAMAHA::MaDva_ReleaseWtAllSlot(uint param_1,uint param_2,_MADVA_SLOTMAP *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  lVar5 = DAT_005d87a0;
  uVar2 = param_2 + param_1 * 0x10;
  plVar6 = (long *)**(undefined8 **)(DAT_005d87a0 + 0x39e8);
  if (*(long **)(DAT_005d87a0 + 0x39f8) == plVar6) {
    plVar6 = (long *)*plVar6;
  }
  plVar8 = *(long **)(DAT_005d87a0 + 0x3a08);
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  lVar4 = DAT_005d87a0;
  if (plVar6 != plVar8) {
    do {
      plVar9 = (long *)*plVar6;
      plVar10 = plVar9;
      if (*(long **)(lVar5 + 0x39f8) == plVar9) {
        plVar10 = (long *)*plVar9;
      }
      if (((*(uint *)(plVar6 + 2) & 0x3f) == uVar2) && ((int)plVar6[3] != 2)) {
        if (*(int *)((long)plVar6 + 0x14) == 1) {
          lVar1 = lVar5 + (ulong)*(uint *)(plVar6 + 2);
          *(byte *)(lVar1 + 0x13c8) = *(byte *)(lVar1 + 0x13c8) & 0x7f;
          if (*(int *)(lVar5 + (ulong)uVar2 * 0xc + 0x10c8) == 2) {
            bVar3 = (&DAT_0048c250)[(ulong)(*(uint *)(plVar6 + 2) >> 6) & 0x7f];
            *(undefined4 *)(lVar4 + (ulong)bVar3 * 4 + 0x33c8) = 0xffffffff;
            *(undefined4 *)(lVar5 + (ulong)(uVar2 + (uint)bVar3 * 0x40) * 4 + 0x33e0) = 0xffffffff;
          }
          plVar9 = (long *)plVar6[1];
          *(undefined4 *)(plVar6 + 3) = 2;
          *plVar9 = *plVar6;
          plVar8 = *(long **)(lVar5 + 0x39e8);
          lVar5 = *plVar8;
          *(long **)(*plVar6 + 8) = plVar9;
          *(long **)(lVar5 + 8) = plVar6;
          *plVar6 = lVar5;
          *plVar8 = (long)plVar6;
          plVar6[1] = (long)plVar8;
        }
        else {
          puVar7 = (undefined8 *)plVar6[1];
          plVar8 = *(long **)(lVar5 + 0x39e8);
          *(undefined4 *)(lVar5 + (ulong)uVar2 * 0xc + 0x10d0) = 0;
          *(undefined4 *)(plVar6 + 3) = 2;
          *puVar7 = plVar9;
          lVar5 = *plVar8;
          *(undefined8 **)(*plVar6 + 8) = puVar7;
          *(long **)(lVar5 + 8) = plVar6;
          *plVar6 = lVar5;
          *plVar8 = (long)plVar6;
          plVar6[1] = (long)plVar8;
        }
        bVar3 = *(byte *)((long)plVar6 + 0x1c);
        lVar5 = lVar4;
        if (bVar3 < 0x20) {
          plVar8 = *(long **)(lVar4 + 0x3a08);
          *(uint *)param_3 = *(uint *)param_3 | (uint)(1L << ((ulong)bVar3 & 0x3f));
        }
        else {
          plVar8 = *(long **)(lVar4 + 0x3a08);
          *(uint *)(param_3 + 4) =
               *(uint *)(param_3 + 4) | (uint)(1L << ((ulong)(bVar3 - 0x20) & 0x3f));
        }
      }
      plVar6 = plVar10;
    } while (plVar10 != plVar8);
  }
  return;
}

