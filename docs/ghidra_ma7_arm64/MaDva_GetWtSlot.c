/* MaDva_GetWtSlot @ 001a571c 1268B */


/* YAMAHA::MaDva_GetWtSlot(unsigned int, unsigned int, unsigned int, unsigned int,
   _MADVA_GETSLOTINFO*) */

void YAMAHA::MaDva_GetWtSlot
               (uint param_1,uint param_2,uint param_3,uint param_4,_MADVA_GETSLOTINFO *param_5)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  uVar1 = param_2 + param_1 * 0x10;
  *(undefined4 *)param_5 = 1;
  *(undefined4 *)(param_5 + 4) = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  piVar4 = DAT_005d87a0;
  if (param_4 == 1) goto LAB_001a5780;
  if (param_4 != 2) {
    uVar5 = (ulong)uVar1;
    if ((DAT_005d87a0[uVar5 * 3 + 0x432] != 0) || (DAT_005d87a0[uVar5 * 3 + 0x434] < 1)) {
LAB_001a58c8:
      uVar1 = uVar1 + param_3 * 0x40;
      *(undefined1 *)((long)piVar4 + (ulong)uVar1 + 0x13c8) = 0;
      plVar9 = (long *)**(undefined8 **)(piVar4 + 0xe7a);
      if (*(long **)(piVar4 + 0xe7e) == plVar9) {
        plVar9 = (long *)*plVar9;
      }
      lVar7 = plVar9[3];
      *(uint *)(param_5 + 4) = (uint)*(byte *)((long)plVar9 + 0x1c);
      if ((int)lVar7 == 1) {
        uVar12 = (ulong)*(uint *)(plVar9 + 2);
        if (*(int *)((long)plVar9 + 0x14) == 1) {
          *(byte *)((long)piVar4 + uVar12 + 0x13c8) =
               *(byte *)((long)piVar4 + uVar12 + 0x13c8) & 0x7f;
        }
        else {
          piVar4[(uVar12 & 0x3f) * 3 + 0x434] = 0;
        }
      }
      piVar4[uVar5 * 3 + 0x432] = 0;
      *(undefined1 *)(piVar4 + uVar5 * 3 + 0x433) = 0x40;
      piVar4[uVar5 * 3 + 0x434] = 1;
      *(undefined4 *)(plVar9 + 3) = 1;
      plVar8 = (long *)plVar9[1];
      lVar7 = *(long *)(piVar4 + 0xe82);
      *plVar8 = *plVar9;
      *(long **)(*plVar9 + 8) = plVar8;
      puVar11 = *(undefined8 **)(lVar7 + 8);
      *puVar11 = plVar9;
      plVar9[1] = (long)puVar11;
      *(long **)(lVar7 + 8) = plVar9;
      *(uint *)(plVar9 + 2) = uVar1;
      *plVar9 = lVar7;
      *(undefined4 *)((long)plVar9 + 0x14) = 0;
      *(undefined1 *)((long)piVar4 + uVar5 * 0xc + 0x10cd) = *(undefined1 *)((long)plVar9 + 0x1c);
      return;
    }
    if ((char)DAT_005d87a0[uVar5 * 3 + 0x433] != '@') {
      uVar12 = (ulong)*(byte *)((long)DAT_005d87a0 + uVar5 * 0xc + 0x10cd);
      *(undefined4 *)param_5 = 3;
      *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar4 + uVar12 * 8 + 9);
      if (piVar4[uVar12 * 8 + 8] == 1) {
        piVar4[uVar12 * 8 + 8] = 0;
        lVar7 = *(long *)(piVar4 + 0xe7c);
        puVar11 = *(undefined8 **)(piVar4 + uVar12 * 8 + 4);
        *puVar11 = *(undefined8 *)(piVar4 + uVar12 * 8 + 2);
        *(undefined8 **)(*(long *)(piVar4 + uVar12 * 8 + 2) + 8) = puVar11;
        plVar9 = *(long **)(lVar7 + 8);
        *plVar9 = (long)(piVar4 + uVar12 * 8 + 2);
        *(long **)(piVar4 + uVar12 * 8 + 4) = plVar9;
        *(int **)(lVar7 + 8) = piVar4 + uVar12 * 8 + 2;
        *(long *)(piVar4 + uVar12 * 8 + 2) = lVar7;
      }
      goto LAB_001a58c8;
    }
    uVar12 = (ulong)*(byte *)((long)DAT_005d87a0 + uVar5 * 0xc + 0x10cd);
    *(undefined4 *)param_5 = 2;
    lVar7 = uVar12 << 5;
    piVar2 = piVar4 + uVar12 * 8;
    *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar2 + 0x221);
    piVar4[uVar5 * 3 + 0x434] = piVar4[uVar5 * 3 + 0x434] + 1;
    piVar2[0x220] = 1;
    goto LAB_001a583c;
  }
  bVar3 = (&DAT_0048c250)[param_3];
  if (bVar3 == 0) {
LAB_001a5780:
    uVar10 = uVar1 + param_3 * 0x40;
  }
  else {
    if (*DAT_005d87a0 != 1) {
      DAT_005d87a0[(ulong)(uVar1 + (uint)bVar3 * 0x40) + 0xcf8] = uVar1 + param_3 * 0x40;
      param_3 = (uint)(byte)(&DAT_0048c2d0)[param_3];
      goto LAB_001a5780;
    }
    uVar10 = uVar1 + param_3 * 0x40;
    DAT_005d87a0[(long)(int)(uint)bVar3 + 0xcf2] = uVar10;
  }
  uVar5 = (ulong)uVar1;
  if ((piVar4[uVar5 * 3 + 0x432] == 0) && (0 < piVar4[uVar5 * 3 + 0x434])) {
    piVar4[uVar5 * 3 + 0x434] = 0;
    if ((char)piVar4[uVar5 * 3 + 0x433] == '@') {
      uVar12 = (ulong)*(byte *)((long)piVar4 + uVar5 * 0xc + 0x10cd);
      piVar4[uVar5 * 3 + 0x432] = param_4;
      piVar4[uVar12 * 8 + 0x21e] = uVar10;
      piVar4[uVar12 * 8 + 0x21f] = 1;
      *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar4 + uVar12 * 8 + 0x221);
      piVar4[uVar12 * 8 + 0x220] = 1;
      puVar11 = *(undefined8 **)(piVar4 + uVar12 * 8 + 0x21c);
      lVar7 = *(long *)(piVar4 + 0xe82);
      *puVar11 = *(undefined8 *)(piVar4 + uVar12 * 8 + 0x21a);
      *(undefined8 **)(*(long *)(piVar4 + uVar12 * 8 + 0x21a) + 8) = puVar11;
      plVar9 = *(long **)(lVar7 + 8);
      *plVar9 = (long)(piVar4 + uVar12 * 8 + 0x21a);
      *(long **)(piVar4 + uVar12 * 8 + 0x21c) = plVar9;
      *(int **)(lVar7 + 8) = piVar4 + uVar12 * 8 + 0x21a;
      *(long *)(piVar4 + uVar12 * 8 + 0x21a) = lVar7;
      *(char *)((long)piVar4 + (ulong)uVar10 + 0x13c8) = (char)piVar4[uVar12 * 8 + 0x221] + -0x40;
      return;
    }
    uVar12 = (ulong)*(byte *)((long)piVar4 + uVar5 * 0xc + 0x10cd);
    *(undefined4 *)param_5 = 3;
    *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar4 + uVar12 * 8 + 0x221);
    if (piVar4[uVar12 * 8 + 0x220] == 1) {
      piVar4[uVar12 * 8 + 0x220] = 0;
      lVar7 = *(long *)(piVar4 + 0xe7c);
      puVar11 = *(undefined8 **)(piVar4 + uVar12 * 8 + 0x21c);
      *puVar11 = *(undefined8 *)(piVar4 + uVar12 * 8 + 0x21a);
      *(undefined8 **)(*(long *)(piVar4 + uVar12 * 8 + 0x21a) + 8) = puVar11;
      plVar9 = *(long **)(lVar7 + 8);
      *plVar9 = (long)(piVar4 + uVar12 * 8 + 0x21a);
      *(long **)(piVar4 + uVar12 * 8 + 0x21c) = plVar9;
      *(int **)(lVar7 + 8) = piVar4 + uVar12 * 8 + 0x21a;
      *(long *)(piVar4 + uVar12 * 8 + 0x21a) = lVar7;
    }
  }
  piVar4[uVar5 * 3 + 0x432] = param_4;
  bVar3 = *(byte *)((long)piVar4 + (ulong)uVar10 + 0x13c8);
  uVar1 = bVar3 & 0xc0;
  if (uVar1 == 0x80) {
    uVar5 = (ulong)(bVar3 & 0x3f);
    *(undefined4 *)param_5 = 3;
    *(uint *)(param_5 + 8) = (uint)*(byte *)(piVar4 + uVar5 * 8 + 9);
    if (piVar4[uVar5 * 8 + 8] == 1) {
      piVar4[uVar5 * 8 + 8] = 0;
      lVar7 = *(long *)(piVar4 + 0xe7c);
      puVar11 = *(undefined8 **)(piVar4 + uVar5 * 8 + 4);
      *puVar11 = *(undefined8 *)(piVar4 + uVar5 * 8 + 2);
      *(undefined8 **)(*(long *)(piVar4 + uVar5 * 8 + 2) + 8) = puVar11;
      plVar9 = *(long **)(lVar7 + 8);
      *plVar9 = (long)(piVar4 + uVar5 * 8 + 2);
      *(long **)(piVar4 + uVar5 * 8 + 4) = plVar9;
      *(int **)(lVar7 + 8) = piVar4 + uVar5 * 8 + 2;
      *(long *)(piVar4 + uVar5 * 8 + 2) = lVar7;
    }
  }
  else if (uVar1 == 0xc0) {
    lVar7 = (ulong)(bVar3 & 0x3f) * 0x20;
    piVar2 = piVar4 + (long)(int)(bVar3 & 0x3f) * 8;
    *(uint *)(param_5 + 4) = (uint)*(byte *)(piVar2 + 0x221);
    piVar2[0x220] = 1;
LAB_001a583c:
    puVar11 = *(undefined8 **)((long)piVar4 + lVar7 + 0x870);
    lVar6 = *(long *)(piVar4 + 0xe82);
    *puVar11 = *(undefined8 *)((long)piVar4 + lVar7 + 0x868);
    *(undefined8 **)(*(long *)((long)piVar4 + lVar7 + 0x868) + 8) = puVar11;
    puVar11 = *(undefined8 **)(lVar6 + 8);
    *puVar11 = piVar2 + 0x21a;
    *(undefined8 **)((long)piVar4 + lVar7 + 0x870) = puVar11;
    *(int **)(lVar6 + 8) = piVar2 + 0x21a;
    *(long *)((long)piVar4 + lVar7 + 0x868) = lVar6;
    return;
  }
  plVar9 = (long *)**(undefined8 **)(piVar4 + 0xe7a);
  if (*(long **)(piVar4 + 0xe7e) == plVar9) {
    plVar9 = (long *)*plVar9;
  }
  lVar7 = plVar9[3];
  *(uint *)(param_5 + 4) = (uint)*(byte *)((long)plVar9 + 0x1c);
  if ((int)lVar7 == 1) {
    uVar5 = (ulong)*(uint *)(plVar9 + 2);
    if (*(int *)((long)plVar9 + 0x14) == 1) {
      *(byte *)((long)piVar4 + uVar5 + 0x13c8) = *(byte *)((long)piVar4 + uVar5 + 0x13c8) & 0x7f;
    }
    else {
      piVar4[(uVar5 & 0x3f) * 3 + 0x434] = 0;
    }
  }
  plVar8 = (long *)plVar9[1];
  *(undefined4 *)(plVar9 + 3) = 1;
  *plVar8 = *plVar9;
  lVar7 = *(long *)(piVar4 + 0xe82);
  *(long **)(*plVar9 + 8) = plVar8;
  puVar11 = *(undefined8 **)(lVar7 + 8);
  *puVar11 = plVar9;
  plVar9[1] = (long)puVar11;
  *(long **)(lVar7 + 8) = plVar9;
  *plVar9 = lVar7;
  *(char *)((long)piVar4 + (ulong)uVar10 + 0x13c8) = *(char *)((long)plVar9 + 0x1c) + -0x40;
  *(uint *)(plVar9 + 2) = uVar10;
  *(undefined4 *)((long)plVar9 + 0x14) = 1;
  return;
}

