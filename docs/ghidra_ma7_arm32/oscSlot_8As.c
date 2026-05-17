/* oscSlot_8As @ 00039cbc 790B */


/* ARM::CStmSynth::oscSlot_8As(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_8As(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (param_2 != (_tagSTEREOOUT *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x9c) >> 0x10;
    uVar8 = *(uint *)(param_1 + 0x9c) & 0xffff;
    uVar4 = uVar5 & 1;
    iVar7 = *(int *)(param_1 + uVar4 * 4 + 0x28);
    iVar6 = *(int *)(param_1 + uVar4 * 4 + 0x30);
    if (uVar8 == 0) {
      *(int *)param_2 = iVar7;
      *(int *)(param_2 + 4) = iVar6;
    }
    else {
      uVar3 = uVar5 + 1 & 1;
      lVar1 = (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar7) * (ulonglong)uVar8;
      *(uint *)param_2 =
           ((uint)lVar1 >> 0x10 |
           (uVar8 * (*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar7 >> 0x1f) +
           (int)((ulonglong)lVar1 >> 0x20)) * 0x10000) + iVar7;
      lVar1 = (ulonglong)uVar8 * (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar6);
      *(uint *)(param_2 + 4) =
           ((uint)lVar1 >> 0x10 |
           (uVar8 * (*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar6 >> 0x1f) +
           (int)((ulonglong)lVar1 >> 0x20)) * 0x10000) + iVar6;
    }
    uVar8 = *(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x9c);
    *(uint *)(param_1 + 0x9c) = uVar8;
    iVar6 = (uVar8 >> 0x10) - uVar5;
    if (iVar6 != 0) {
      uVar5 = uVar4;
      if (-1 < iVar6 * -0x80000000) {
        if (*(int *)(param_1 + 0xc0) == 0) {
          uVar5 = *(uint *)(param_1 + 0x3c);
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_1 + 0xc0) + -1;
          uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(int *)(param_1 + 0xc0) = iVar7;
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xc4) & *(int *)(param_1 + 0xb8) + 1U;
        }
        iVar2 = uVar5 * 0x100;
        if (0x7fff < iVar2) {
          iVar2 = iVar2 + -0x10000;
        }
        *(int *)(param_1 + uVar4 * 4 + 0x28) = iVar2;
        if (iVar7 == 0) {
          uVar5 = *(uint *)(param_1 + 0x3c);
        }
        else {
          uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(int *)(param_1 + 0xc0) = iVar7 + -1;
          *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
        }
        iVar7 = uVar5 * 0x100;
        iVar6 = iVar6 + -1;
        uVar5 = uVar4 ^ 1;
        if (0x7fff < iVar7) {
          iVar7 = iVar7 + -0x10000;
        }
        *(int *)(param_1 + uVar4 * 4 + 0x30) = iVar7;
      }
      while( true ) {
        if (*(int *)(param_1 + 0xc0) == 0) {
          uVar4 = *(uint *)(param_1 + 0x3c);
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_1 + 0xc0) + -1;
          uVar4 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(int *)(param_1 + 0xc0) = iVar7;
          *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
        }
        iVar2 = uVar4 * 0x100;
        if (0x7fff < iVar2) {
          iVar2 = iVar2 + -0x10000;
        }
        *(int *)(param_1 + uVar5 * 4 + 0x28) = iVar2;
        if (iVar7 == 0) {
          uVar4 = *(uint *)(param_1 + 0x3c);
        }
        else {
          uVar4 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(int *)(param_1 + 0xc0) = iVar7 + -1;
          *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
        }
        iVar7 = uVar4 * 0x100;
        if (0x7fff < iVar7) {
          iVar7 = iVar7 + -0x10000;
        }
        *(int *)(param_1 + uVar5 * 4 + 0x30) = iVar7;
        if (iVar6 == 1) break;
        uVar4 = uVar5 + 1 & 1;
        if (*(int *)(param_1 + 0xc0) == 0) {
          uVar5 = *(uint *)(param_1 + 0x3c);
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_1 + 0xc0) + -1;
          uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(int *)(param_1 + 0xc0) = iVar7;
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xc4) & *(int *)(param_1 + 0xb8) + 1U;
        }
        iVar2 = uVar5 * 0x100;
        if (0x7fff < iVar2) {
          iVar2 = iVar2 + -0x10000;
        }
        *(int *)(param_1 + uVar4 * 4 + 0x28) = iVar2;
        if (iVar7 == 0) {
          uVar5 = *(uint *)(param_1 + 0x3c);
        }
        else {
          uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(int *)(param_1 + 0xc0) = iVar7 + -1;
          *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
        }
        iVar7 = uVar5 * 0x100;
        iVar6 = iVar6 + -2;
        uVar5 = uVar4 ^ 1;
        if (0x7fff < iVar7) {
          iVar7 = iVar7 + -0x10000;
        }
        *(int *)(param_1 + uVar4 * 4 + 0x30) = iVar7;
      }
    }
    *(uint *)(param_1 + 0x9c) = uVar8 & 0x1ffff;
    return;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar4 = *(uint *)(param_1 + 0x3c);
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc0) + -1;
    uVar4 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(int *)(param_1 + 0xc0) = iVar6;
    *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
  }
  iVar7 = uVar4 * 0x100;
  if (0x7fff < iVar7) {
    iVar7 = iVar7 + -0x10000;
  }
  *(int *)(param_1 + 0x28) = iVar7;
  if (iVar6 == 0) {
    uVar4 = *(uint *)(param_1 + 0x3c);
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -1;
    uVar4 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(int *)(param_1 + 0xc0) = iVar6;
    *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
  }
  iVar7 = uVar4 * 0x100;
  if (0x7fff < iVar7) {
    iVar7 = iVar7 + -0x10000;
  }
  *(int *)(param_1 + 0x30) = iVar7;
  if (iVar6 == 0) {
    uVar4 = *(uint *)(param_1 + 0x3c);
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -1;
    uVar4 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(int *)(param_1 + 0xc0) = iVar6;
    *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
  }
  iVar7 = uVar4 * 0x100;
  if (0x7fff < iVar7) {
    iVar7 = iVar7 + -0x10000;
  }
  *(int *)(param_1 + 0x2c) = iVar7;
  if (iVar6 == 0) {
    uVar4 = *(uint *)(param_1 + 0x3c);
  }
  else {
    uVar4 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(int *)(param_1 + 0xc0) = iVar6 + -1;
    *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
  }
  iVar6 = uVar4 * 0x100;
  if (0x7fff < iVar6) {
    iVar6 = iVar6 + -0x10000;
  }
  *(int *)(param_1 + 0x34) = iVar6;
  return;
}

