/* ProcDsp1 @ 00053910 282B */


/* ARM::CDsp1::ProcDsp1() */

void __thiscall ARM::CDsp1::ProcDsp1(CDsp1 *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_30;
  int local_2c;
  
  iVar3 = *(int *)this;
  if (*(int *)(&DAT_003bf708 + iVar3) == 0) {
    piVar1 = *(int **)(&DAT_003bf6f8 + iVar3);
    iVar3 = *(int *)(&DAT_003bf6fc + iVar3);
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
      iVar4 = 0;
      local_30 = 0;
      local_2c = 0;
      *(undefined4 *)(this + 0x4c) = 0;
      *(undefined4 *)(this + 0x50) = 0;
      iVar5 = 0;
      iVar8 = 0;
    }
    else {
      if (*piVar1 == 0) {
        local_30 = 0;
        local_2c = 0;
      }
      else {
        local_30 = *(uint *)(*piVar1 + iVar3 * 4);
        local_2c = (int)local_30 >> 0x1f;
      }
      *(uint *)(this + 0x44) = local_30;
      if (piVar1[1] == 0) {
        uVar2 = 0;
        iVar4 = 0;
      }
      else {
        uVar2 = *(uint *)(piVar1[1] + iVar3 * 4);
        iVar4 = (int)uVar2 >> 0x1f;
      }
      *(uint *)(this + 0x48) = uVar2;
      iVar5 = 0;
      if (piVar1[9] != 0) {
        iVar5 = *(int *)(piVar1[9] + iVar3 * 4);
      }
      *(int *)(this + 0x4c) = iVar5;
      if (piVar1[10] == 0) {
        *(undefined4 *)(this + 0x50) = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(piVar1[10] + iVar3 * 4);
        *(int *)(this + 0x50) = iVar8;
      }
    }
    uVar7 = *(uint *)(this + 0xc4);
    uVar6 = *(uint *)(this + 0xc0);
    iVar8 = ((uint)((ulonglong)uVar7 * (ulonglong)uVar2) >> 0xf |
            ((int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) +
            uVar2 * ((int)uVar7 >> 0x1f) + uVar7 * iVar4) * 0x20000) + iVar8;
    *(int *)(this + 0x48) = iVar8;
    iVar5 = iVar5 + ((uint)((ulonglong)uVar6 * (ulonglong)local_30) >> 0xf |
                    ((int)((ulonglong)uVar6 * (ulonglong)local_30 >> 0x20) +
                    local_30 * ((int)uVar6 >> 0x1f) + uVar6 * local_2c) * 0x20000);
    *(int *)(this + 0x44) = iVar5;
    iVar4 = iVar8;
    if (this[0x40] != (CDsp1)0x0) {
      *(int *)(this + 0x48) = iVar5;
      *(int *)(this + 0x44) = iVar8;
      iVar4 = iVar5;
      iVar5 = iVar8;
    }
    *(int *)(this + 0x54) = iVar5;
    *(int *)(this + 0x58) = iVar4;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + iVar3 * 4) = iVar5;
      }
      if (piVar1[1] != 0) {
        *(undefined4 *)(piVar1[1] + iVar3 * 4) = *(undefined4 *)(this + 0x58);
      }
    }
  }
  return;
}

