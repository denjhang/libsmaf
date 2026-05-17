/* ProcDsp1 @ 0015b328 292B */


/* ARM::CDsp1::ProcDsp1() */

void __thiscall ARM::CDsp1::ProcDsp1(CDsp1 *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)this;
  if (*(int *)(&DAT_003bf7e0 + lVar2) == 0) {
    plVar5 = *(long **)(&DAT_003bf7a0 + lVar2);
    uVar1 = *(uint *)(&DAT_003bf7a8 + lVar2);
    if (plVar5 == (long *)0x0) {
      iVar4 = 0;
      *(undefined8 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      lVar2 = 0;
      lVar7 = 0;
      iVar6 = iVar4;
    }
    else {
      if (*plVar5 == 0) {
        iVar6 = 0;
        lVar2 = 0;
      }
      else {
        iVar6 = *(int *)(*plVar5 + (ulong)uVar1 * 4);
        lVar2 = (long)iVar6;
      }
      lVar7 = plVar5[1];
      *(int *)(this + 0x48) = iVar6;
      if (lVar7 == 0) {
        iVar6 = 0;
        lVar7 = 0;
      }
      else {
        iVar6 = *(int *)(lVar7 + (ulong)uVar1 * 4);
        lVar7 = (long)iVar6;
      }
      lVar8 = plVar5[9];
      *(int *)(this + 0x4c) = iVar6;
      if (lVar8 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar8 + (ulong)uVar1 * 4);
      }
      lVar8 = plVar5[10];
      *(int *)(this + 0x50) = iVar4;
      if (lVar8 == 0) {
        *(undefined4 *)(this + 0x54) = 0;
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar8 + (ulong)uVar1 * 4);
        *(int *)(this + 0x54) = iVar6;
      }
    }
    iVar6 = iVar6 + (int)(*(int *)(this + 200) * lVar7 >> 0xf);
    iVar4 = iVar4 + (int)(*(int *)(this + 0xc4) * lVar2 >> 0xf);
    *(int *)(this + 0x4c) = iVar6;
    *(int *)(this + 0x48) = iVar4;
    iVar3 = iVar6;
    if (this[0x44] != (CDsp1)0x0) {
      *(int *)(this + 0x48) = iVar6;
      *(int *)(this + 0x4c) = iVar4;
      iVar3 = iVar4;
      iVar4 = iVar6;
    }
    *(int *)(this + 0x58) = iVar4;
    *(int *)(this + 0x5c) = iVar3;
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != 0) {
        *(int *)(*plVar5 + (ulong)uVar1 * 4) = iVar4;
      }
      if (plVar5[1] != 0) {
        *(undefined4 *)(plVar5[1] + (ulong)uVar1 * 4) = *(undefined4 *)(this + 0x5c);
      }
    }
  }
  return;
}

