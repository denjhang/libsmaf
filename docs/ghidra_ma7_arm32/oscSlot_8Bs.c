/* oscSlot_8Bs @ 0003a2e0 774B */


/* ARM::CStmSynth::oscSlot_8Bs(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_8Bs(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  _tagSTSLOTINFO _Var1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 != (_tagSTEREOOUT *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x9c) >> 0x10;
    uVar9 = *(uint *)(param_1 + 0x9c) & 0xffff;
    uVar4 = uVar5 & 1;
    iVar7 = *(int *)(param_1 + uVar4 * 4 + 0x28);
    iVar6 = *(int *)(param_1 + uVar4 * 4 + 0x30);
    if (uVar9 == 0) {
      *(int *)param_2 = iVar7;
      *(int *)(param_2 + 4) = iVar6;
    }
    else {
      uVar3 = uVar5 + 1 & 1;
      lVar2 = (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar7) * (ulonglong)uVar9;
      *(uint *)param_2 =
           ((uint)lVar2 >> 0x10 |
           (uVar9 * (*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar7 >> 0x1f) +
           (int)((ulonglong)lVar2 >> 0x20)) * 0x10000) + iVar7;
      lVar2 = (ulonglong)uVar9 * (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar6);
      *(uint *)(param_2 + 4) =
           ((uint)lVar2 >> 0x10 |
           (uVar9 * (*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar6 >> 0x1f) +
           (int)((ulonglong)lVar2 >> 0x20)) * 0x10000) + iVar6;
    }
    uVar9 = *(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x9c);
    *(uint *)(param_1 + 0x9c) = uVar9;
    iVar6 = (uVar9 >> 0x10) - uVar5;
    if (iVar6 == 0) {
LAB_0003a4bc:
      *(uint *)(param_1 + 0x9c) = uVar9 & 0x1ffff;
      return;
    }
    iVar7 = *(int *)(param_1 + 0xc0);
    if (iVar6 * -0x80000000 < 0) goto LAB_0003a39c;
    if (iVar7 == 0) {
      *(int *)(param_1 + (uVar4 + 10) * 4) = (*(int *)(param_1 + 0x3c) + -0x80) * 0x100;
LAB_0003a384:
      uVar5 = *(uint *)(param_1 + 0x3c);
      iVar7 = 0;
    }
    else {
      _Var1 = param_1[*(int *)(param_1 + 0xb8) + 0xcc];
      *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
      *(int *)(param_1 + 0xc0) = iVar7 + -1;
      *(uint *)(param_1 + (uVar4 + 10) * 4) = ((byte)_Var1 - 0x80) * 0x100;
      if (iVar7 + -1 == 0) goto LAB_0003a384;
      iVar7 = iVar7 + -2;
      uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
      *(int *)(param_1 + 0xc0) = iVar7;
      *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
    }
    iVar8 = uVar4 + 0xc;
    iVar6 = iVar6 + -1;
    uVar4 = uVar4 ^ 1;
    *(uint *)(param_1 + iVar8 * 4) = (uVar5 - 0x80) * 0x100;
LAB_0003a39c:
    if (iVar7 != 0) goto LAB_0003a3fe;
LAB_0003a39e:
    *(int *)(param_1 + (uVar4 + 10) * 4) = (*(int *)(param_1 + 0x3c) + -0x80) * 0x100;
LAB_0003a3ae:
    uVar5 = *(uint *)(param_1 + 0x3c);
    iVar7 = 0;
    do {
      *(uint *)(param_1 + (uVar4 + 0xc) * 4) = (uVar5 - 0x80) * 0x100;
      if (iVar6 == 1) goto LAB_0003a4bc;
      uVar5 = uVar4 + 1 & 1;
      if (iVar7 == 0) {
        *(int *)(param_1 + (uVar5 + 10) * 4) = (*(int *)(param_1 + 0x3c) + -0x80) * 0x100;
LAB_0003a3e2:
        uVar3 = *(uint *)(param_1 + 0x3c);
        iVar7 = 0;
      }
      else {
        _Var1 = param_1[*(int *)(param_1 + 0xb8) + 0xcc];
        *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
        *(int *)(param_1 + 0xc0) = iVar7 + -1;
        *(uint *)(param_1 + (uVar5 + 10) * 4) = ((byte)_Var1 - 0x80) * 0x100;
        if (iVar7 + -1 == 0) goto LAB_0003a3e2;
        iVar7 = iVar7 + -2;
        uVar3 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
        *(int *)(param_1 + 0xc0) = iVar7;
        *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
      }
      iVar6 = iVar6 + -2;
      uVar4 = uVar5 ^ 1;
      *(uint *)(param_1 + (uVar5 + 0xc) * 4) = (uVar3 - 0x80) * 0x100;
      if (iVar7 == 0) goto LAB_0003a39e;
LAB_0003a3fe:
      _Var1 = param_1[*(int *)(param_1 + 0xb8) + 0xcc];
      *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
      *(int *)(param_1 + 0xc0) = iVar7 + -1;
      *(uint *)(param_1 + (uVar4 + 10) * 4) = ((byte)_Var1 - 0x80) * 0x100;
      if (iVar7 + -1 == 0) goto LAB_0003a3ae;
      iVar7 = iVar7 + -2;
      uVar5 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
      *(int *)(param_1 + 0xc0) = iVar7;
      *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
    } while( true );
  }
  iVar6 = *(int *)(param_1 + 0xc0);
  if (iVar6 == 0) {
    uVar5 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x28) = (uVar5 - 0x80) * 0x100;
LAB_0003a536:
    *(uint *)(param_1 + 0x30) = (uVar5 - 0x80) * 0x100;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xc4);
    uVar5 = *(int *)(param_1 + 0xb8) + 1U & uVar4;
    _Var1 = param_1[*(int *)(param_1 + 0xb8) + 0xcc];
    *(uint *)(param_1 + 0xb8) = uVar5;
    *(int *)(param_1 + 0xc0) = iVar6 + -1;
    *(uint *)(param_1 + 0x28) = ((byte)_Var1 - 0x80) * 0x100;
    if (iVar6 + -1 == 0) {
      uVar5 = *(uint *)(param_1 + 0x3c);
      goto LAB_0003a536;
    }
    uVar9 = uVar5 + 1 & uVar4;
    _Var1 = param_1[uVar5 + 0xcc];
    *(uint *)(param_1 + 0xb8) = uVar9;
    *(int *)(param_1 + 0xc0) = iVar6 + -2;
    *(uint *)(param_1 + 0x30) = ((byte)_Var1 - 0x80) * 0x100;
    if (iVar6 + -2 != 0) {
      uVar3 = uVar9 + 1 & uVar4;
      _Var1 = param_1[uVar9 + 0xcc];
      *(uint *)(param_1 + 0xb8) = uVar3;
      *(int *)(param_1 + 0xc0) = iVar6 + -3;
      *(uint *)(param_1 + 0x2c) = ((byte)_Var1 - 0x80) * 0x100;
      if (iVar6 + -3 == 0) {
        uVar5 = *(uint *)(param_1 + 0x3c);
      }
      else {
        uVar5 = (uint)(byte)param_1[uVar3 + 0xcc];
        *(int *)(param_1 + 0xc0) = iVar6 + -4;
        *(uint *)(param_1 + 0xb8) = uVar4 & uVar3 + 1;
      }
      goto LAB_0003a546;
    }
    uVar5 = *(uint *)(param_1 + 0x3c);
  }
  *(uint *)(param_1 + 0x2c) = (uVar5 - 0x80) * 0x100;
LAB_0003a546:
  *(uint *)(param_1 + 0x34) = (uVar5 - 0x80) * 0x100;
  return;
}

