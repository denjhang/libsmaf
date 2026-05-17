/* oscSlot_8Bs @ 0013c3b4 772B */


/* ARM::CStmSynth::oscSlot_8Bs(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_8Bs(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  int iVar1;
  _tagSTSLOTINFO _Var2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  _tagSTSLOTINFO *p_Var6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 != (_tagSTEREOOUT *)0x0) {
    uVar10 = *(uint *)(param_1 + 0xa0);
    uVar7 = uVar10 >> 0x10;
    uVar5 = uVar10 & 0xffff;
    uVar9 = (ulong)(uVar7 & 1);
    iVar8 = *(int *)(param_1 + uVar9 * 4 + 0x28);
    iVar4 = *(int *)(param_1 + uVar9 * 4 + 0x30);
    if (uVar5 != 0) {
      uVar3 = (ulong)(uVar7 + 1) & 1;
      iVar8 = iVar8 + (int)((long)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar8) * (ulong)uVar5 >>
                           0x10);
      iVar4 = iVar4 + (int)((ulong)uVar5 * (long)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar4) >>
                           0x10);
    }
    iVar1 = *(int *)(param_1 + 0x9c);
    *(int *)(param_2 + 4) = iVar4;
    uVar10 = uVar10 + iVar1;
    *(int *)param_2 = iVar8;
    *(uint *)(param_1 + 0xa0) = uVar10;
    uVar7 = (uVar10 >> 0x10) - uVar7;
    if (uVar7 != 0) {
      iVar8 = *(int *)(param_1 + 0xdc);
      if ((uVar7 & 1) == 0) {
        if (iVar8 == 0) goto LAB_0013c448;
        goto LAB_0013c508;
      }
      if (iVar8 != 0) goto LAB_0013c480;
LAB_0013c408:
      p_Var6 = param_1 + uVar9 * 4;
      *(int *)(p_Var6 + 0x28) = (*(int *)(param_1 + 0x40) + -0x80) * 0x100;
LAB_0013c420:
      uVar7 = uVar7 - 1;
      iVar8 = 0;
      iVar4 = (int)uVar9;
      *(int *)(p_Var6 + 0x30) = (*(int *)(param_1 + 0x40) + -0x80) * 0x100;
      if (uVar7 != 0) {
        do {
          uVar9 = (ulong)(iVar4 + 1U & 1);
          if (iVar8 == 0) {
LAB_0013c448:
            uVar5 = (uint)uVar9;
            p_Var6 = param_1 + uVar9 * 4;
            *(int *)(p_Var6 + 0x28) = (*(int *)(param_1 + 0x40) + -0x80) * 0x100;
LAB_0013c460:
            uVar11 = *(uint *)(param_1 + 0x40);
            iVar8 = 0;
          }
          else {
LAB_0013c508:
            uVar5 = (uint)uVar9;
            p_Var6 = param_1 + uVar9 * 4;
            _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
            *(int *)(param_1 + 0xdc) = iVar8 + -1;
            *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
            *(uint *)(p_Var6 + 0x28) = ((byte)_Var2 - 0x80) * 0x100;
            if (iVar8 + -1 == 0) goto LAB_0013c460;
            iVar8 = iVar8 + -2;
            uVar11 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
            *(int *)(param_1 + 0xdc) = iVar8;
            *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          }
          uVar7 = uVar7 - 1;
          *(uint *)(p_Var6 + 0x30) = (uVar11 - 0x80) * 0x100;
          uVar9 = (ulong)(uVar5 ^ 1);
          if (iVar8 == 0) goto LAB_0013c408;
LAB_0013c480:
          p_Var6 = param_1 + uVar9 * 4;
          _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
          *(int *)(param_1 + 0xdc) = iVar8 + -1;
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          *(uint *)(p_Var6 + 0x28) = ((byte)_Var2 - 0x80) * 0x100;
          if (iVar8 + -1 == 0) goto LAB_0013c420;
          iVar8 = iVar8 + -2;
          _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
          *(int *)(param_1 + 0xdc) = iVar8;
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          uVar7 = uVar7 - 1;
          *(uint *)(p_Var6 + 0x30) = ((byte)_Var2 - 0x80) * 0x100;
          iVar4 = (int)uVar9;
          if (uVar7 == 0) break;
        } while( true );
      }
    }
    *(uint *)(param_1 + 0xa0) = uVar10 & 0x1ffff;
    return;
  }
  iVar8 = *(int *)(param_1 + 0xdc);
  if (iVar8 == 0) {
    uVar10 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x28) = (uVar10 - 0x80) * 0x100;
LAB_0013c5c8:
    *(uint *)(param_1 + 0x30) = (uVar10 - 0x80) * 0x100;
  }
  else {
    _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    uVar5 = *(uint *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xdc) = iVar8 + -1;
    uVar10 = *(uint *)(param_1 + 0xd4) + 1 & uVar5;
    *(uint *)(param_1 + 0xd4) = uVar10;
    *(uint *)(param_1 + 0x28) = ((byte)_Var2 - 0x80) * 0x100;
    if (iVar8 + -1 == 0) {
      uVar10 = *(uint *)(param_1 + 0x40);
      goto LAB_0013c5c8;
    }
    _Var2 = param_1[(ulong)uVar10 + 0xe8];
    uVar10 = uVar10 + 1 & uVar5;
    *(int *)(param_1 + 0xdc) = iVar8 + -2;
    *(uint *)(param_1 + 0xd4) = uVar10;
    *(uint *)(param_1 + 0x30) = ((byte)_Var2 - 0x80) * 0x100;
    if (iVar8 + -2 != 0) {
      _Var2 = param_1[(ulong)uVar10 + 0xe8];
      uVar10 = uVar10 + 1 & uVar5;
      *(int *)(param_1 + 0xdc) = iVar8 + -3;
      *(uint *)(param_1 + 0xd4) = uVar10;
      *(uint *)(param_1 + 0x2c) = ((byte)_Var2 - 0x80) * 0x100;
      if (iVar8 + -3 == 0) {
        uVar10 = *(uint *)(param_1 + 0x40);
      }
      else {
        _Var2 = param_1[(ulong)uVar10 + 0xe8];
        *(int *)(param_1 + 0xdc) = iVar8 + -4;
        *(uint *)(param_1 + 0xd4) = uVar10 + 1 & uVar5;
        uVar10 = (uint)(byte)_Var2;
      }
      goto LAB_0013c5e0;
    }
    uVar10 = *(uint *)(param_1 + 0x40);
  }
  *(uint *)(param_1 + 0x2c) = (uVar10 - 0x80) * 0x100;
LAB_0013c5e0:
  *(uint *)(param_1 + 0x34) = (uVar10 - 0x80) * 0x100;
  return;
}

