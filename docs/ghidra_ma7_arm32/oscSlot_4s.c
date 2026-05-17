/* oscSlot_4s @ 0003b2d4 846B */


/* ARM::CStmSynth::oscSlot_4s(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_4s(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  _tagSTSLOTINFO _Var1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int local_48 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 == (_tagSTEREOOUT *)0x0) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      _Var1 = param_1[*(int *)(param_1 + 0xb8) + 0xcc];
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
      *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
      *(uint *)(param_1 + 0x24) = (uint)(byte)_Var1;
      uVar6 = FUN_00039bfc((byte)_Var1 & 0xf,param_1 + 0x10,param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x28) = uVar6;
      uVar6 = FUN_00039bfc(*(uint *)(param_1 + 0x24) >> 4,param_1 + 0x18,param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x30) = uVar6;
      if (*(int *)(param_1 + 0xc0) == 0) {
        uVar13 = *(uint *)(param_1 + 0x3c);
      }
      else {
        uVar13 = (uint)(byte)param_1[*(int *)(param_1 + 0xb8) + 0xcc];
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
        *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
      }
      *(uint *)(param_1 + 0x24) = uVar13;
      uVar6 = FUN_00039bfc(uVar13 & 0xf,param_1 + 0x10,param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      uVar6 = FUN_00039bfc(*(uint *)(param_1 + 0x24) >> 4,param_1 + 0x18,param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x34) = uVar6;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x9c) >> 0x10;
    uVar9 = *(uint *)(param_1 + 0x9c) & 0xffff;
    uVar13 = uVar7 & 1;
    iVar12 = *(int *)(param_1 + uVar13 * 4 + 0x28);
    iVar10 = *(int *)(param_1 + uVar13 * 4 + 0x30);
    if (uVar9 == 0) {
      *(int *)param_2 = iVar12;
      *(int *)(param_2 + 4) = iVar10;
    }
    else {
      uVar3 = uVar7 + 1 & 1;
      lVar2 = (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar12) * (ulonglong)uVar9;
      *(uint *)param_2 =
           ((uint)lVar2 >> 0x10 |
           (uVar9 * (*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar12 >> 0x1f) +
           (int)((ulonglong)lVar2 >> 0x20)) * 0x10000) + iVar12;
      lVar2 = (ulonglong)uVar9 * (ulonglong)(uint)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar10);
      *(uint *)(param_2 + 4) =
           iVar10 + ((uint)lVar2 >> 0x10 |
                    (uVar9 * (*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar10 >> 0x1f) +
                    (int)((ulonglong)lVar2 >> 0x20)) * 0x10000);
    }
    uVar9 = *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x9c) = uVar9;
    iVar12 = DAT_0003b628;
    iVar10 = (uVar9 >> 0x10) - uVar7;
    if (iVar10 != 0) {
      iVar8 = *(int *)(param_1 + 0xc0);
      piVar4 = (int *)(DAT_0003b628 + 0x3b376);
      while( true ) {
        if (iVar8 == 0) {
          *(undefined4 *)(param_1 + uVar13 * 4 + 0x28) = 0;
          *(undefined4 *)(param_1 + uVar13 * 4 + 0x30) = 0;
        }
        else {
          uVar7 = *(uint *)(param_1 + 0x10);
          iVar8 = iVar8 + -1;
          _Var1 = param_1[*(int *)(param_1 + 0xb8) + 0xcc];
          uVar9 = (uint)(byte)_Var1;
          *(int *)(param_1 + 0xc0) = iVar8;
          *(uint *)(param_1 + 0x24) = uVar9;
          *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1U & *(uint *)(param_1 + 0xc4);
          iVar5 = (uVar7 >> 1) * -((int)(uVar9 << 0x1e) >> 0x1f) +
                  uVar7 * -((int)(uVar9 << 0x1d) >> 0x1f) +
                  (uVar9 & 1) * (uVar7 >> 2) + (uVar7 >> 3);
          iVar11 = local_48[uVar9 & 7];
          if ((uVar9 & 0xf) >> 3 != 0) {
            iVar5 = -iVar5;
          }
          iVar5 = iVar5 + *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar5;
          uVar7 = iVar11 * uVar7 >> 0xe;
          if (uVar7 < 0x7f) {
            *(undefined4 *)(param_1 + 0x10) = 0x7f;
          }
          else {
            if (0x6000 < uVar7) {
              uVar7 = 0x6000;
            }
            *(uint *)(param_1 + 0x10) = uVar7;
          }
          if (iVar5 < 0x8000) {
            if (iVar5 < -0x8000) {
              iVar5 = -0x8000;
              *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
            }
          }
          else {
            iVar5 = 0x7fff;
            *(undefined4 *)(param_1 + 0x14) = 0x7fff;
          }
          uVar3 = (uint)((byte)_Var1 >> 4);
          *(int *)(param_1 + uVar13 * 4 + 0x28) = iVar5;
          uVar7 = *(uint *)(param_1 + 0x18);
          local_48[0] = *piVar4;
          local_48[1] = *(undefined4 *)(iVar12 + 0x3b37a);
          local_48[2] = *(undefined4 *)(iVar12 + 0x3b37e);
          local_48[3] = *(undefined4 *)(iVar12 + 0x3b382);
          local_38 = *(undefined4 *)(iVar12 + 0x3b386);
          uStack_34 = *(undefined4 *)(iVar12 + 0x3b38a);
          uStack_30 = *(undefined4 *)(iVar12 + 0x3b38e);
          uStack_2c = *(undefined4 *)(iVar12 + 0x3b392);
          iVar5 = (uVar7 >> 1) * -((int)(uVar9 << 0x1a) >> 0x1f) +
                  uVar7 * -((int)(uVar9 << 0x19) >> 0x1f) +
                  (uVar7 >> 2) * (uVar3 & 1) + (uVar7 >> 3);
          iVar11 = local_48[uVar3 & 7];
          if ((int)(uVar3 << 0x1c) < 0) {
            iVar5 = -iVar5;
          }
          iVar5 = *(int *)(param_1 + 0x1c) + iVar5;
          *(int *)(param_1 + 0x1c) = iVar5;
          uVar7 = iVar11 * uVar7 >> 0xe;
          if (uVar7 < 0x7f) {
            *(undefined4 *)(param_1 + 0x18) = 0x7f;
          }
          else {
            if (0x6000 < uVar7) {
              uVar7 = 0x6000;
            }
            *(uint *)(param_1 + 0x18) = uVar7;
          }
          if (iVar5 < 0x8000) {
            if (iVar5 < -0x8000) {
              iVar5 = -0x8000;
              *(undefined4 *)(param_1 + 0x1c) = 0xffff8000;
            }
          }
          else {
            iVar5 = 0x7fff;
            *(undefined4 *)(param_1 + 0x1c) = 0x7fff;
          }
          *(int *)(param_1 + uVar13 * 4 + 0x30) = iVar5;
        }
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) break;
        uVar13 = uVar13 + 1 & 1;
      }
      uVar9 = *(uint *)(param_1 + 0x9c);
    }
    *(uint *)(param_1 + 0x9c) = uVar9 & 0x1ffff;
  }
  return;
}

