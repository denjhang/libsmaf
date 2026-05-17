/* oscSlot_16 @ 0013ce48 824B */


/* ARM::CStmSynth::oscSlot_16(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_16(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  _tagSTSLOTINFO _Var4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 != (_tagSTEREOOUT *)0x0) {
    uVar10 = *(uint *)(param_1 + 0xa0);
    uVar7 = uVar10 >> 0x10;
    uVar9 = (ulong)(uVar7 & 1);
    iVar8 = *(int *)(param_1 + (uVar9 + 8) * 4 + 8);
    if ((uVar10 & 0xffff) != 0) {
      iVar8 = iVar8 + (int)((long)(*(int *)(param_1 + (((ulong)(uVar7 + 1) & 1) + 8) * 4 + 8) -
                                  iVar8) * (ulong)(uVar10 & 0xffff) >> 0x10);
    }
    iVar3 = *(int *)(param_1 + 0x9c);
    *(int *)param_2 = iVar8;
    uVar10 = uVar10 + iVar3;
    *(int *)(param_2 + 4) = iVar8;
    uVar5 = uVar10 >> 0x10;
    *(uint *)(param_1 + 0xa0) = uVar10;
    if (uVar5 != uVar7) {
      if ((~uVar7 + uVar5 & 1) == 0) goto LAB_0013cf60;
      iVar8 = *(int *)(param_1 + 0xdc);
      if (iVar8 == 0) {
        uVar6 = *(uint *)(param_1 + 0x40);
        uVar11 = uVar6;
      }
      else {
        _Var4 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
        uVar2 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
        *(int *)(param_1 + 0xdc) = iVar8 + -1;
        *(uint *)(param_1 + 0xd4) = uVar2;
        uVar11 = (uint)(byte)_Var4;
        if (iVar8 + -1 == 0) {
          uVar6 = *(uint *)(param_1 + 0x40);
        }
        else {
          uVar6 = (uint)(byte)param_1[(ulong)uVar2 + 0xe8];
          *(int *)(param_1 + 0xdc) = iVar8 + -2;
          *(uint *)(param_1 + 0xd4) = uVar2 + 1 & *(uint *)(param_1 + 0xe0);
        }
      }
      while( true ) {
        lVar1 = uVar9 + 8;
        iVar8 = uVar11 + uVar6 * 0x100;
        uVar7 = uVar7 + 1;
        iVar3 = iVar8 + -0x10000;
        if (iVar8 < 0x8000) {
          iVar3 = iVar8;
        }
        uVar9 = (ulong)(uVar7 & 1);
        *(int *)(param_1 + lVar1 * 4 + 8) = iVar3;
LAB_0013cf60:
        iVar8 = *(int *)(param_1 + 0xdc);
        if (iVar8 == 0) {
          uVar6 = *(uint *)(param_1 + 0x40);
          uVar11 = uVar6;
        }
        else {
          _Var4 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
          uVar2 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          *(int *)(param_1 + 0xdc) = iVar8 + -1;
          *(uint *)(param_1 + 0xd4) = uVar2;
          uVar11 = (uint)(byte)_Var4;
          if (iVar8 + -1 == 0) {
            uVar6 = *(uint *)(param_1 + 0x40);
          }
          else {
            uVar6 = (uint)(byte)param_1[(ulong)uVar2 + 0xe8];
            *(int *)(param_1 + 0xdc) = iVar8 + -2;
            *(uint *)(param_1 + 0xd4) = uVar2 + 1 & *(uint *)(param_1 + 0xe0);
          }
        }
        iVar8 = uVar11 + uVar6 * 0x100;
        uVar7 = uVar7 + 1;
        iVar3 = iVar8 + -0x10000;
        if (iVar8 < 0x8000) {
          iVar3 = iVar8;
        }
        *(int *)(param_1 + (uVar9 + 8) * 4 + 8) = iVar3;
        if (uVar7 == uVar5) break;
        iVar8 = *(int *)(param_1 + 0xdc);
        uVar9 = (ulong)(uVar7 & 1);
        if (iVar8 == 0) {
          uVar6 = *(uint *)(param_1 + 0x40);
          uVar11 = uVar6;
        }
        else {
          _Var4 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
          uVar2 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          *(int *)(param_1 + 0xdc) = iVar8 + -1;
          *(uint *)(param_1 + 0xd4) = uVar2;
          uVar11 = (uint)(byte)_Var4;
          if (iVar8 + -1 == 0) {
            uVar6 = *(uint *)(param_1 + 0x40);
          }
          else {
            uVar6 = (uint)(byte)param_1[(ulong)uVar2 + 0xe8];
            *(int *)(param_1 + 0xdc) = iVar8 + -2;
            *(uint *)(param_1 + 0xd4) = uVar2 + 1 & *(uint *)(param_1 + 0xe0);
          }
        }
      }
    }
    *(uint *)(param_1 + 0xa0) = uVar10 & 0x1ffff;
    return;
  }
  iVar8 = *(int *)(param_1 + 0xdc);
  if (iVar8 == 0) {
    uVar10 = *(uint *)(param_1 + 0x40);
    uVar7 = uVar10;
LAB_0013d05c:
    iVar3 = uVar10 + uVar7 * 0x100;
    if (iVar3 < 0x8000) {
      *(int *)(param_1 + 0x28) = iVar3;
      uVar10 = uVar7;
      goto LAB_0013d088;
    }
    iVar8 = 0;
    uVar10 = iVar3 - 0x10000;
  }
  else {
    _Var4 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    uVar7 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar8 + -1;
    *(uint *)(param_1 + 0xd4) = uVar7;
    uVar10 = (uint)(byte)_Var4;
    if (iVar8 + -1 == 0) {
      uVar7 = *(uint *)(param_1 + 0x40);
      goto LAB_0013d05c;
    }
    iVar8 = iVar8 + -2;
    uVar10 = (uint)(byte)_Var4 + (uint)(byte)param_1[(ulong)uVar7 + 0xe8] * 0x100;
    *(uint *)(param_1 + 0xd4) = uVar7 + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar8;
    if (0x7fff < uVar10) {
      uVar10 = uVar10 - 0x10000;
    }
  }
  *(uint *)(param_1 + 0x28) = uVar10;
  if (iVar8 == 0) {
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar10 = uVar7;
  }
  else {
    uVar7 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    uVar10 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar8 + -1;
    *(uint *)(param_1 + 0xd4) = uVar10;
    if (iVar8 + -1 == 0) {
      uVar10 = *(uint *)(param_1 + 0x40);
    }
    else {
      _Var4 = param_1[(ulong)uVar10 + 0xe8];
      *(int *)(param_1 + 0xdc) = iVar8 + -2;
      *(uint *)(param_1 + 0xd4) = uVar10 + 1 & *(uint *)(param_1 + 0xe0);
      uVar10 = (uint)(byte)_Var4;
    }
  }
LAB_0013d088:
  iVar8 = uVar7 + uVar10 * 0x100;
  iVar3 = iVar8 + -0x10000;
  if (iVar8 < 0x8000) {
    iVar3 = iVar8;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  return;
}

