/* oscSlot_8As @ 0013be60 756B */


/* ARM::CStmSynth::oscSlot_8As(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_8As(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  _tagSTSLOTINFO *p_Var9;
  
  if (param_2 != (_tagSTEREOOUT *)0x0) {
    uVar6 = *(uint *)(param_1 + 0xa0);
    uVar2 = uVar6 >> 0x10;
    uVar5 = uVar6 & 0xffff;
    uVar4 = (ulong)(uVar2 & 1);
    iVar7 = *(int *)(param_1 + uVar4 * 4 + 0x28);
    iVar8 = *(int *)(param_1 + uVar4 * 4 + 0x30);
    if (uVar5 != 0) {
      uVar3 = (ulong)(uVar2 + 1) & 1;
      iVar7 = iVar7 + (int)((long)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar7) * (ulong)uVar5 >>
                           0x10);
      iVar8 = iVar8 + (int)((ulong)uVar5 * (long)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar8) >>
                           0x10);
    }
    iVar1 = *(int *)(param_1 + 0x9c);
    *(int *)(param_2 + 4) = iVar8;
    uVar6 = uVar6 + iVar1;
    *(int *)param_2 = iVar7;
    *(uint *)(param_1 + 0xa0) = uVar6;
    iVar7 = (uVar6 >> 0x10) - uVar2;
    if (iVar7 != 0) {
      do {
        if (*(int *)(param_1 + 0xdc) == 0) {
          uVar5 = *(int *)(param_1 + 0x40) * 0x100;
          iVar8 = 0;
          if (0x7fff < (int)uVar5) {
LAB_0013bf30:
            uVar5 = uVar5 - 0x10000;
            goto LAB_0013bf34;
          }
          p_Var9 = param_1 + uVar4 * 4;
          *(uint *)(p_Var9 + 0x28) = uVar5;
LAB_0013bed0:
          iVar1 = *(int *)(param_1 + 0x40) * 0x100;
          iVar8 = iVar1 + -0x10000;
          if (iVar1 < 0x8000) {
            iVar8 = iVar1;
          }
          *(int *)(p_Var9 + 0x30) = iVar8;
        }
        else {
          iVar8 = *(int *)(param_1 + 0xdc) + -1;
          uVar5 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8] * 0x100;
          *(int *)(param_1 + 0xdc) = iVar8;
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          if (0x7fff < uVar5) goto LAB_0013bf30;
LAB_0013bf34:
          p_Var9 = param_1 + uVar4 * 4;
          *(uint *)(p_Var9 + 0x28) = uVar5;
          if (iVar8 == 0) goto LAB_0013bed0;
          uVar2 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8] * 0x100;
          *(int *)(param_1 + 0xdc) = iVar8 + -1;
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          uVar5 = uVar2 - 0x10000;
          if (uVar2 < 0x8000) {
            uVar5 = uVar2;
          }
          *(uint *)(p_Var9 + 0x30) = uVar5;
        }
        if (iVar7 == 1) break;
        iVar7 = iVar7 + -1;
        uVar4 = (ulong)((int)uVar4 + 1U & 1);
      } while( true );
    }
    *(uint *)(param_1 + 0xa0) = uVar6 & 0x1ffff;
    return;
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar5 = *(uint *)(param_1 + 0x40);
    uVar6 = uVar5 * 0x100;
    iVar7 = 0;
    if (0x7fff < (int)uVar6) {
LAB_0013bff0:
      uVar6 = uVar6 - 0x10000;
      goto LAB_0013bff4;
    }
    *(uint *)(param_1 + 0x28) = uVar6;
LAB_0013c000:
    iVar8 = uVar5 * 0x100;
    if (0x7fff < iVar8) {
      iVar7 = 0;
      uVar6 = iVar8 - 0x10000;
      goto LAB_0013c018;
    }
    *(int *)(param_1 + 0x30) = iVar8;
LAB_0013c024:
    iVar8 = uVar5 * 0x100;
    if (iVar8 < 0x8000) {
      *(int *)(param_1 + 0x2c) = iVar8;
      goto LAB_0013c048;
    }
    iVar7 = 0;
    uVar6 = iVar8 - 0x10000;
  }
  else {
    uVar6 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8] * 0x100;
    iVar7 = *(int *)(param_1 + 0xdc) + -1;
    *(int *)(param_1 + 0xdc) = iVar7;
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    if (0x7fff < uVar6) goto LAB_0013bff0;
LAB_0013bff4:
    *(uint *)(param_1 + 0x28) = uVar6;
    if (iVar7 == 0) {
      uVar5 = *(uint *)(param_1 + 0x40);
      goto LAB_0013c000;
    }
    uVar6 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8] * 0x100;
    iVar7 = iVar7 + -1;
    *(int *)(param_1 + 0xdc) = iVar7;
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    if (0x7fff < uVar6) {
      uVar6 = uVar6 - 0x10000;
    }
LAB_0013c018:
    *(uint *)(param_1 + 0x30) = uVar6;
    if (iVar7 == 0) {
      uVar5 = *(uint *)(param_1 + 0x40);
      goto LAB_0013c024;
    }
    uVar6 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8] * 0x100;
    iVar7 = iVar7 + -1;
    *(int *)(param_1 + 0xdc) = iVar7;
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
    if (0x7fff < uVar6) {
      uVar6 = uVar6 - 0x10000;
    }
  }
  *(uint *)(param_1 + 0x2c) = uVar6;
  if (iVar7 == 0) {
    uVar5 = *(uint *)(param_1 + 0x40);
  }
  else {
    uVar5 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
    *(int *)(param_1 + 0xdc) = iVar7 + -1;
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
  }
LAB_0013c048:
  iVar8 = uVar5 * 0x100;
  iVar7 = iVar8 + -0x10000;
  if (iVar8 < 0x8000) {
    iVar7 = iVar8;
  }
  *(int *)(param_1 + 0x34) = iVar7;
  return;
}

