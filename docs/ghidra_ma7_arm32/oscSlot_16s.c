/* oscSlot_16s @ 0003a8b4 744B */


/* ARM::CStmSynth::oscSlot_16s(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_16s(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 != (_tagSTEREOOUT *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x9c) >> 0x10;
    uVar9 = *(uint *)(param_1 + 0x9c) & 0xffff;
    uVar6 = uVar5 & 1;
    iVar8 = *(int *)(param_1 + uVar6 * 4 + 0x28);
    iVar7 = *(int *)(param_1 + uVar6 * 4 + 0x30);
    if (uVar9 == 0) {
      *(int *)param_2 = iVar8;
      *(int *)(param_2 + 4) = iVar7;
    }
    else {
      uVar3 = uVar5 + 1 & 1;
      lVar1 = (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar8) * (ulonglong)uVar9;
      *(uint *)param_2 =
           ((uint)lVar1 >> 0x10 |
           (uVar9 * (*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar8 >> 0x1f) +
           (int)((ulonglong)lVar1 >> 0x20)) * 0x10000) + iVar8;
      lVar1 = (ulonglong)uVar9 * (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar7);
      *(uint *)(param_2 + 4) =
           ((uint)lVar1 >> 0x10 |
           (uVar9 * (*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar7 >> 0x1f) +
           (int)((ulonglong)lVar1 >> 0x20)) * 0x10000) + iVar7;
    }
    uVar9 = *(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x9c);
    *(uint *)(param_1 + 0x9c) = uVar9;
    if (uVar9 >> 0x10 != uVar5) {
      do {
        iVar7 = *(int *)(param_1 + 0xc0);
        if (iVar7 == 0) {
          uVar2 = *(uint *)(param_1 + 0x3c);
          uVar3 = uVar2;
LAB_0003a940:
          iVar7 = 0;
        }
        else {
          uVar4 = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
          uVar2 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(uint *)(param_1 + 0xb8) = uVar4;
          *(int *)(param_1 + 0xc0) = iVar7 + -1;
          if (iVar7 + -1 == 0) {
            uVar3 = *(uint *)(param_1 + 0x3c);
            goto LAB_0003a940;
          }
          iVar7 = iVar7 + -2;
          uVar3 = (uint)(byte)param_1[uVar4 + 0xcc];
          *(int *)(param_1 + 0xc0) = iVar7;
          *(uint *)(param_1 + 0xb8) = uVar4 + 1 & *(uint *)(param_1 + 0xc4);
        }
        iVar8 = uVar2 + uVar3 * 0x100;
        if (0x7fff < iVar8) {
          iVar8 = iVar8 + -0x10000;
        }
        *(int *)(param_1 + uVar6 * 4 + 0x28) = iVar8;
        if (iVar7 == 0) {
          uVar3 = *(uint *)(param_1 + 0x3c);
          uVar4 = uVar3;
        }
        else {
          uVar2 = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
          uVar3 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          *(uint *)(param_1 + 0xb8) = uVar2;
          *(int *)(param_1 + 0xc0) = iVar7 + -1;
          if (iVar7 + -1 == 0) {
            uVar4 = *(uint *)(param_1 + 0x3c);
          }
          else {
            uVar4 = (uint)(byte)param_1[uVar2 + 0xcc];
            *(int *)(param_1 + 0xc0) = iVar7 + -2;
            *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xc4) & uVar2 + 1;
          }
        }
        iVar7 = uVar3 + uVar4 * 0x100;
        uVar5 = uVar5 + 1;
        if (0x7fff < iVar7) {
          iVar7 = iVar7 + -0x10000;
        }
        *(int *)(param_1 + uVar6 * 4 + 0x30) = iVar7;
        if (uVar5 == uVar9 >> 0x10) break;
        uVar6 = uVar5 & 1;
      } while( true );
    }
    *(uint *)(param_1 + 0x9c) = uVar9 & 0x1ffff;
    return;
  }
  iVar7 = *(int *)(param_1 + 0xc0);
  if (iVar7 == 0) {
    uVar9 = *(uint *)(param_1 + 0x3c);
    uVar5 = uVar9;
LAB_0003aa26:
    iVar7 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
    uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(uint *)(param_1 + 0xb8) = uVar6;
    *(int *)(param_1 + 0xc0) = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      uVar9 = *(uint *)(param_1 + 0x3c);
      goto LAB_0003aa26;
    }
    iVar7 = iVar7 + -2;
    uVar9 = (uint)(byte)param_1[uVar6 + 0xcc];
    *(int *)(param_1 + 0xc0) = iVar7;
    *(uint *)(param_1 + 0xb8) = uVar6 + 1 & *(uint *)(param_1 + 0xc4);
  }
  iVar8 = uVar5 + uVar9 * 0x100;
  if (0x7fff < iVar8) {
    iVar8 = iVar8 + -0x10000;
  }
  *(int *)(param_1 + 0x28) = iVar8;
  if (iVar7 == 0) {
    uVar9 = *(uint *)(param_1 + 0x3c);
    uVar5 = uVar9;
LAB_0003aa42:
    iVar7 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
    uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(uint *)(param_1 + 0xb8) = uVar6;
    *(int *)(param_1 + 0xc0) = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      uVar9 = *(uint *)(param_1 + 0x3c);
      goto LAB_0003aa42;
    }
    iVar7 = iVar7 + -2;
    uVar9 = (uint)(byte)param_1[uVar6 + 0xcc];
    *(int *)(param_1 + 0xc0) = iVar7;
    *(uint *)(param_1 + 0xb8) = uVar6 + 1 & *(uint *)(param_1 + 0xc4);
  }
  iVar8 = uVar5 + uVar9 * 0x100;
  if (0x7fff < iVar8) {
    iVar8 = iVar8 + -0x10000;
  }
  *(int *)(param_1 + 0x30) = iVar8;
  if (iVar7 == 0) {
    uVar5 = *(uint *)(param_1 + 0x3c);
    uVar9 = uVar5;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
    uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(uint *)(param_1 + 0xb8) = uVar6;
    *(int *)(param_1 + 0xc0) = iVar7 + -1;
    if (iVar7 + -1 != 0) {
      iVar7 = iVar7 + -2;
      uVar9 = (uint)(byte)param_1[uVar6 + 0xcc];
      *(int *)(param_1 + 0xc0) = iVar7;
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xc4) & uVar6 + 1;
      goto LAB_0003aa5e;
    }
    uVar9 = *(uint *)(param_1 + 0x3c);
  }
  iVar7 = 0;
LAB_0003aa5e:
  iVar8 = uVar5 + uVar9 * 0x100;
  if (0x7fff < iVar8) {
    iVar8 = iVar8 + -0x10000;
  }
  *(int *)(param_1 + 0x2c) = iVar8;
  if (iVar7 == 0) {
    uVar9 = *(uint *)(param_1 + 0x3c);
    uVar5 = uVar9;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
    uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(uint *)(param_1 + 0xb8) = uVar6;
    *(int *)(param_1 + 0xc0) = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      uVar9 = *(uint *)(param_1 + 0x3c);
    }
    else {
      uVar9 = (uint)(byte)param_1[uVar6 + 0xcc];
      *(int *)(param_1 + 0xc0) = iVar7 + -2;
      *(uint *)(param_1 + 0xb8) = uVar6 + 1 & *(uint *)(param_1 + 0xc4);
    }
  }
  iVar7 = uVar5 + uVar9 * 0x100;
  if (0x7fff < iVar7) {
    iVar7 = iVar7 + -0x10000;
  }
  *(int *)(param_1 + 0x34) = iVar7;
  return;
}

