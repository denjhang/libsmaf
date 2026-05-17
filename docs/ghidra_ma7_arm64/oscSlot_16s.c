/* oscSlot_16s @ 0013ca20 1064B */


/* ARM::CStmSynth::oscSlot_16s(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_16s(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  int iVar1;
  _tagSTSLOTINFO _Var2;
  ulong uVar3;
  uint uVar4;
  _tagSTSLOTINFO *p_Var5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  
  if (param_2 != (_tagSTEREOOUT *)0x0) {
    uVar9 = *(uint *)(param_1 + 0xa0);
    uVar7 = uVar9 >> 0x10;
    uVar4 = uVar9 & 0xffff;
    uVar10 = (ulong)(uVar7 & 1);
    iVar11 = *(int *)(param_1 + uVar10 * 4 + 0x28);
    iVar6 = *(int *)(param_1 + uVar10 * 4 + 0x30);
    if (uVar4 != 0) {
      uVar3 = (ulong)(uVar7 + 1) & 1;
      iVar11 = iVar11 + (int)((long)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar11) * (ulong)uVar4
                             >> 0x10);
      iVar6 = iVar6 + (int)((ulong)uVar4 * (long)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar6) >>
                           0x10);
    }
    iVar1 = *(int *)(param_1 + 0x9c);
    *(int *)param_2 = iVar11;
    uVar9 = uVar9 + iVar1;
    *(int *)(param_2 + 4) = iVar6;
    *(uint *)(param_1 + 0xa0) = uVar9;
    if (uVar9 >> 0x10 != uVar7) {
      iVar11 = *(int *)(param_1 + 0xdc);
      if (iVar11 != 0) goto LAB_0013cad0;
LAB_0013ca74:
      uVar4 = *(uint *)(param_1 + 0x40);
      uVar8 = uVar4;
LAB_0013ca7c:
      p_Var5 = param_1 + uVar10 * 4;
      iVar11 = uVar8 + uVar4 * 0x100;
      iVar6 = iVar11 + -0x10000;
      if (iVar11 < 0x8000) {
        iVar6 = iVar11;
      }
      *(int *)(p_Var5 + 0x28) = iVar6;
LAB_0013ca9c:
      uVar4 = *(uint *)(param_1 + 0x40);
      uVar8 = uVar4;
      do {
        iVar11 = uVar4 + uVar8 * 0x100;
        iVar6 = iVar11 + -0x10000;
        if (iVar11 < 0x8000) {
          iVar6 = iVar11;
        }
        *(int *)(p_Var5 + 0x30) = iVar6;
        while( true ) {
          uVar7 = uVar7 + 1;
          if (uVar7 == uVar9 >> 0x10) goto LAB_0013cb9c;
          iVar11 = *(int *)(param_1 + 0xdc);
          uVar10 = (ulong)(uVar7 & 1);
          if (iVar11 == 0) goto LAB_0013ca74;
LAB_0013cad0:
          _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
          uVar8 = (uint)(byte)_Var2;
          uVar4 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          *(int *)(param_1 + 0xdc) = iVar11 + -1;
          *(uint *)(param_1 + 0xd4) = uVar4;
          if (iVar11 + -1 == 0) {
            uVar4 = *(uint *)(param_1 + 0x40);
            goto LAB_0013ca7c;
          }
          p_Var5 = param_1 + uVar10 * 4;
          uVar8 = (uint)(byte)_Var2 + (uint)(byte)param_1[(ulong)uVar4 + 0xe8] * 0x100;
          *(int *)(param_1 + 0xdc) = iVar11 + -2;
          *(uint *)(param_1 + 0xd4) = uVar4 + 1 & *(uint *)(param_1 + 0xe0);
          uVar4 = uVar8 - 0x10000;
          if (uVar8 < 0x8000) {
            uVar4 = uVar8;
          }
          *(uint *)(p_Var5 + 0x28) = uVar4;
          if (iVar11 + -2 == 0) goto LAB_0013ca9c;
          _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
          uVar8 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          *(int *)(param_1 + 0xdc) = iVar11 + -3;
          *(uint *)(param_1 + 0xd4) = uVar8;
          uVar4 = (uint)(byte)_Var2;
          if (iVar11 + -3 == 0) break;
          _Var2 = param_1[(ulong)uVar8 + 0xe8];
          *(int *)(param_1 + 0xdc) = iVar11 + -4;
          uVar4 = uVar4 + (uint)(byte)_Var2 * 0x100;
          *(uint *)(param_1 + 0xd4) = uVar8 + 1 & *(uint *)(param_1 + 0xe0);
          uVar8 = uVar4 - 0x10000;
          if (uVar4 < 0x8000) {
            uVar8 = uVar4;
          }
          *(uint *)(p_Var5 + 0x30) = uVar8;
        }
        uVar8 = *(uint *)(param_1 + 0x40);
      } while( true );
    }
LAB_0013cb9c:
    *(uint *)(param_1 + 0xa0) = uVar9 & 0x1ffff;
    return;
  }
  iVar11 = *(int *)(param_1 + 0xdc);
  if (iVar11 == 0) {
    uVar4 = *(uint *)(param_1 + 0x40);
    uVar9 = uVar4;
LAB_0013cbfc:
    iVar6 = uVar4 + uVar9 * 0x100;
    if (0x7fff < iVar6) {
      iVar11 = 0;
      uVar4 = iVar6 - 0x10000;
      goto LAB_0013cc14;
    }
    *(int *)(param_1 + 0x28) = iVar6;
    uVar4 = uVar9;
LAB_0013cc24:
    iVar6 = uVar4 + uVar9 * 0x100;
    if (0x7fff < iVar6) {
      iVar11 = 0;
      uVar4 = iVar6 - 0x10000;
      goto LAB_0013cc3c;
    }
    *(int *)(param_1 + 0x30) = iVar6;
    uVar4 = uVar9;
LAB_0013cc4c:
    iVar6 = uVar4 + uVar9 * 0x100;
    if (iVar6 < 0x8000) {
      *(int *)(param_1 + 0x2c) = iVar6;
      uVar4 = uVar9;
      goto LAB_0013cc78;
    }
    iVar11 = 0;
    uVar4 = iVar6 - 0x10000;
  }
  else {
    _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    uVar9 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar11 + -1;
    *(uint *)(param_1 + 0xd4) = uVar9;
    uVar4 = (uint)(byte)_Var2;
    if (iVar11 + -1 == 0) {
      uVar9 = *(uint *)(param_1 + 0x40);
      goto LAB_0013cbfc;
    }
    iVar11 = iVar11 + -2;
    uVar4 = (uint)(byte)_Var2 + (uint)(byte)param_1[(ulong)uVar9 + 0xe8] * 0x100;
    *(uint *)(param_1 + 0xd4) = uVar9 + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar11;
    if (0x7fff < uVar4) {
      uVar4 = uVar4 - 0x10000;
    }
LAB_0013cc14:
    *(uint *)(param_1 + 0x28) = uVar4;
    if (iVar11 == 0) {
      uVar9 = *(uint *)(param_1 + 0x40);
      uVar4 = uVar9;
      goto LAB_0013cc24;
    }
    _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    uVar9 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar11 + -1;
    *(uint *)(param_1 + 0xd4) = uVar9;
    if (iVar11 + -1 == 0) {
      uVar9 = *(uint *)(param_1 + 0x40);
      uVar4 = (uint)(byte)_Var2;
      goto LAB_0013cc24;
    }
    iVar11 = iVar11 + -2;
    uVar4 = (uint)(byte)_Var2 + (uint)(byte)param_1[(ulong)uVar9 + 0xe8] * 0x100;
    *(uint *)(param_1 + 0xd4) = uVar9 + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar11;
    if (0x7fff < uVar4) {
      uVar4 = uVar4 - 0x10000;
    }
LAB_0013cc3c:
    *(uint *)(param_1 + 0x30) = uVar4;
    if (iVar11 == 0) {
      uVar9 = *(uint *)(param_1 + 0x40);
      uVar4 = uVar9;
      goto LAB_0013cc4c;
    }
    _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    uVar9 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar11 + -1;
    *(uint *)(param_1 + 0xd4) = uVar9;
    if (iVar11 + -1 == 0) {
      uVar9 = *(uint *)(param_1 + 0x40);
      uVar4 = (uint)(byte)_Var2;
      goto LAB_0013cc4c;
    }
    iVar11 = iVar11 + -2;
    uVar4 = (uint)(byte)_Var2 + (uint)(byte)param_1[(ulong)uVar9 + 0xe8] * 0x100;
    *(uint *)(param_1 + 0xd4) = uVar9 + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar11;
    if (0x7fff < uVar4) {
      uVar4 = uVar4 - 0x10000;
    }
  }
  *(uint *)(param_1 + 0x2c) = uVar4;
  if (iVar11 == 0) {
    uVar9 = *(uint *)(param_1 + 0x40);
    uVar4 = uVar9;
  }
  else {
    uVar9 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    uVar4 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar11 + -1;
    *(uint *)(param_1 + 0xd4) = uVar4;
    if (iVar11 + -1 == 0) {
      uVar4 = *(uint *)(param_1 + 0x40);
    }
    else {
      _Var2 = param_1[(ulong)uVar4 + 0xe8];
      *(int *)(param_1 + 0xdc) = iVar11 + -2;
      *(uint *)(param_1 + 0xd4) = uVar4 + 1 & *(uint *)(param_1 + 0xe0);
      uVar4 = (uint)(byte)_Var2;
    }
  }
LAB_0013cc78:
  iVar11 = uVar9 + uVar4 * 0x100;
  iVar6 = iVar11 + -0x10000;
  if (iVar11 < 0x8000) {
    iVar6 = iVar11;
  }
  *(int *)(param_1 + 0x34) = iVar6;
  return;
}

