/* MaDva_GetFmSlot @ 001a5214 1288B */


/* YAMAHA::MaDva_GetFmSlot(unsigned int, unsigned int, unsigned int, unsigned int,
   _MADVA_GETSLOTINFO*) */

void YAMAHA::MaDva_GetFmSlot
               (uint param_1,uint param_2,uint param_3,uint param_4,_MADVA_GETSLOTINFO *param_5)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  
  uVar1 = param_2 + param_1 * 0x10;
  *(undefined4 *)param_5 = 1;
  *(undefined4 *)(param_5 + 4) = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  piVar4 = DAT_005d87a0;
  if (param_4 == 1) goto LAB_001a5278;
  if (param_4 != 2) {
    uVar5 = (ulong)uVar1;
    if ((DAT_005d87a0[uVar5 * 3 + 0x432] != 0) || (DAT_005d87a0[uVar5 * 3 + 0x434] < 1)) {
LAB_001a53dc:
      uVar1 = uVar1 + param_3 * 0x40;
      *(undefined1 *)((long)piVar4 + (ulong)uVar1 + 0x13c8) = 0;
      plVar10 = (long *)**(undefined8 **)(piVar4 + 0xe78);
      if (*(long **)(piVar4 + 0xe7c) == plVar10) {
        plVar10 = (long *)*plVar10;
      }
      lVar11 = plVar10[3];
      *(uint *)(param_5 + 4) = (uint)*(byte *)((long)plVar10 + 0x1c);
      if ((int)lVar11 == 1) {
        uVar6 = (ulong)*(uint *)(plVar10 + 2);
        if (*(int *)((long)plVar10 + 0x14) == 1) {
          *(byte *)((long)piVar4 + uVar6 + 0x13c8) = *(byte *)((long)piVar4 + uVar6 + 0x13c8) & 0x7f
          ;
        }
        else {
          piVar4[(uVar6 & 0x3f) * 3 + 0x434] = 0;
        }
      }
      piVar4[uVar5 * 3 + 0x432] = 0;
      *(undefined1 *)(piVar4 + uVar5 * 3 + 0x433) = 0;
      piVar4[uVar5 * 3 + 0x434] = 1;
      *(undefined4 *)(plVar10 + 3) = 1;
      plVar7 = (long *)plVar10[1];
      lVar11 = *(long *)(piVar4 + 0xe80);
      *plVar7 = *plVar10;
      *(long **)(*plVar10 + 8) = plVar7;
      puVar12 = *(undefined8 **)(lVar11 + 8);
      *puVar12 = plVar10;
      plVar10[1] = (long)puVar12;
      *(long **)(lVar11 + 8) = plVar10;
      *(uint *)(plVar10 + 2) = uVar1;
      *plVar10 = lVar11;
      *(undefined4 *)((long)plVar10 + 0x14) = 0;
      *(undefined1 *)((long)piVar4 + uVar5 * 0xc + 0x10cd) = *(undefined1 *)((long)plVar10 + 0x1c);
      return;
    }
    if ((char)DAT_005d87a0[uVar5 * 3 + 0x433] != '\0') {
      uVar6 = (ulong)*(byte *)((long)DAT_005d87a0 + uVar5 * 0xc + 0x10cd);
      *(undefined4 *)param_5 = 3;
      *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar4 + uVar6 * 8 + 0x221);
      if (piVar4[uVar6 * 8 + 0x220] == 1) {
        piVar4[uVar6 * 8 + 0x220] = 0;
        lVar11 = *(long *)(piVar4 + 0xe7e);
        puVar12 = *(undefined8 **)(piVar4 + uVar6 * 8 + 0x21c);
        *puVar12 = *(undefined8 *)(piVar4 + uVar6 * 8 + 0x21a);
        *(undefined8 **)(*(long *)(piVar4 + uVar6 * 8 + 0x21a) + 8) = puVar12;
        plVar10 = *(long **)(lVar11 + 8);
        *plVar10 = (long)(piVar4 + uVar6 * 8 + 0x21a);
        *(long **)(piVar4 + uVar6 * 8 + 0x21c) = plVar10;
        *(int **)(lVar11 + 8) = piVar4 + uVar6 * 8 + 0x21a;
        *(long *)(piVar4 + uVar6 * 8 + 0x21a) = lVar11;
      }
      goto LAB_001a53dc;
    }
    uVar6 = (ulong)*(byte *)((long)DAT_005d87a0 + uVar5 * 0xc + 0x10cd);
    *(undefined4 *)param_5 = 2;
    lVar11 = uVar6 << 5;
    piVar2 = piVar4 + uVar6 * 8;
    *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar2 + 9);
    piVar4[uVar5 * 3 + 0x434] = piVar4[uVar5 * 3 + 0x434] + 1;
    piVar2[8] = 1;
    goto LAB_001a5510;
  }
  bVar3 = (&DAT_0048c250)[param_3];
  if (bVar3 == 0) {
LAB_001a5278:
    uVar9 = uVar1 + param_3 * 0x40;
  }
  else {
    if (*DAT_005d87a0 != 1) {
      DAT_005d87a0[(ulong)(uVar1 + (uint)bVar3 * 0x40) + 0xcf8] = uVar1 + param_3 * 0x40;
      param_3 = (uint)(byte)(&DAT_0048c2d0)[param_3];
      goto LAB_001a5278;
    }
    uVar9 = uVar1 + param_3 * 0x40;
    DAT_005d87a0[(long)(int)(uint)bVar3 + 0xcf2] = uVar9;
  }
  uVar5 = (ulong)uVar1;
  if ((piVar4[uVar5 * 3 + 0x432] == 0) && (0 < piVar4[uVar5 * 3 + 0x434])) {
    piVar4[uVar5 * 3 + 0x434] = 0;
    if ((char)piVar4[uVar5 * 3 + 0x433] == '\0') {
      uVar6 = (ulong)*(byte *)((long)piVar4 + uVar5 * 0xc + 0x10cd);
      piVar4[uVar5 * 3 + 0x432] = param_4;
      piVar4[uVar6 * 8 + 6] = uVar9;
      piVar4[uVar6 * 8 + 7] = 1;
      *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar4 + uVar6 * 8 + 9);
      piVar4[uVar6 * 8 + 8] = 1;
      puVar12 = *(undefined8 **)(piVar4 + uVar6 * 8 + 4);
      lVar11 = *(long *)(piVar4 + 0xe80);
      *puVar12 = *(undefined8 *)(piVar4 + uVar6 * 8 + 2);
      *(undefined8 **)(*(long *)(piVar4 + uVar6 * 8 + 2) + 8) = puVar12;
      plVar10 = *(long **)(lVar11 + 8);
      *plVar10 = (long)(piVar4 + uVar6 * 8 + 2);
      *(long **)(piVar4 + uVar6 * 8 + 4) = plVar10;
      *(int **)(lVar11 + 8) = piVar4 + uVar6 * 8 + 2;
      *(long *)(piVar4 + uVar6 * 8 + 2) = lVar11;
      *(char *)((long)piVar4 + (ulong)uVar9 + 0x13c8) = (char)piVar4[uVar6 * 8 + 9] + -0x80;
      return;
    }
    uVar6 = (ulong)*(byte *)((long)piVar4 + uVar5 * 0xc + 0x10cd);
    *(undefined4 *)param_5 = 3;
    *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar4 + uVar6 * 8 + 0x221);
    if (piVar4[uVar6 * 8 + 0x220] == 1) {
      piVar4[uVar6 * 8 + 0x220] = 0;
      lVar11 = *(long *)(piVar4 + 0xe7e);
      puVar12 = *(undefined8 **)(piVar4 + uVar6 * 8 + 0x21c);
      *puVar12 = *(undefined8 *)(piVar4 + uVar6 * 8 + 0x21a);
      *(undefined8 **)(*(long *)(piVar4 + uVar6 * 8 + 0x21a) + 8) = puVar12;
      plVar10 = *(long **)(lVar11 + 8);
      *plVar10 = (long)(piVar4 + uVar6 * 8 + 0x21a);
      *(long **)(piVar4 + uVar6 * 8 + 0x21c) = plVar10;
      *(int **)(lVar11 + 8) = piVar4 + uVar6 * 8 + 0x21a;
      *(long *)(piVar4 + uVar6 * 8 + 0x21a) = lVar11;
    }
  }
  piVar4[uVar5 * 3 + 0x432] = param_4;
  bVar3 = *(byte *)((long)piVar4 + (ulong)uVar9 + 0x13c8);
  uVar1 = bVar3 & 0xc0;
  if (uVar1 != 0x80) {
    if (uVar1 == 0xc0) {
      uVar1 = bVar3 & 0x3f;
      *(undefined4 *)param_5 = 3;
      lVar11 = (long)(int)uVar1;
      *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar4 + lVar11 * 8 + 0x221);
      if (piVar4[lVar11 * 8 + 0x220] == 1) {
        piVar4[lVar11 * 8 + 0x220] = 0;
        lVar8 = *(long *)(piVar4 + 0xe7e);
        puVar12 = *(undefined8 **)(piVar4 + (ulong)uVar1 * 8 + 0x21c);
        *puVar12 = *(undefined8 *)(piVar4 + (ulong)uVar1 * 8 + 0x21a);
        *(undefined8 **)(*(long *)(piVar4 + (ulong)uVar1 * 8 + 0x21a) + 8) = puVar12;
        plVar10 = *(long **)(lVar8 + 8);
        *plVar10 = (long)(piVar4 + lVar11 * 8 + 0x21a);
        *(long **)(piVar4 + (ulong)uVar1 * 8 + 0x21c) = plVar10;
        *(int **)(lVar8 + 8) = piVar4 + lVar11 * 8 + 0x21a;
        *(long *)(piVar4 + (ulong)uVar1 * 8 + 0x21a) = lVar8;
      }
    }
    plVar10 = (long *)**(undefined8 **)(piVar4 + 0xe78);
    if (*(long **)(piVar4 + 0xe7c) == plVar10) {
      plVar10 = (long *)*plVar10;
    }
    lVar11 = plVar10[3];
    *(uint *)(param_5 + 4) = (uint)*(byte *)((long)plVar10 + 0x1c);
    if ((int)lVar11 == 1) {
      uVar5 = (ulong)*(uint *)(plVar10 + 2);
      if (*(int *)((long)plVar10 + 0x14) == 1) {
        *(byte *)((long)piVar4 + uVar5 + 0x13c8) = *(byte *)((long)piVar4 + uVar5 + 0x13c8) & 0x7f;
      }
      else {
        piVar4[(uVar5 & 0x3f) * 3 + 0x434] = 0;
      }
    }
    plVar7 = (long *)plVar10[1];
    *(undefined4 *)(plVar10 + 3) = 1;
    *plVar7 = *plVar10;
    lVar11 = *(long *)(piVar4 + 0xe80);
    *(long **)(*plVar10 + 8) = plVar7;
    puVar12 = *(undefined8 **)(lVar11 + 8);
    *puVar12 = plVar10;
    plVar10[1] = (long)puVar12;
    *(long **)(lVar11 + 8) = plVar10;
    *plVar10 = lVar11;
    *(char *)((long)piVar4 + (ulong)uVar9 + 0x13c8) = *(char *)((long)plVar10 + 0x1c) + -0x80;
    *(uint *)(plVar10 + 2) = uVar9;
    *(undefined4 *)((long)plVar10 + 0x14) = 1;
    return;
  }
  uVar5 = (ulong)(bVar3 & 0x3f);
  lVar11 = uVar5 * 0x20;
  piVar2 = piVar4 + uVar5 * 8;
  *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar2 + 9);
  piVar2[8] = 1;
LAB_001a5510:
  puVar12 = *(undefined8 **)((long)piVar4 + lVar11 + 0x10);
  lVar8 = *(long *)(piVar4 + 0xe80);
  *puVar12 = *(undefined8 *)((long)piVar4 + lVar11 + 8);
  *(undefined8 **)(*(long *)((long)piVar4 + lVar11 + 8) + 8) = puVar12;
  puVar12 = *(undefined8 **)(lVar8 + 8);
  *puVar12 = piVar2 + 2;
  *(undefined8 **)((long)piVar4 + lVar11 + 0x10) = puVar12;
  *(int **)(lVar8 + 8) = piVar2 + 2;
  *(long *)((long)piVar4 + lVar11 + 8) = lVar8;
  return;
}

