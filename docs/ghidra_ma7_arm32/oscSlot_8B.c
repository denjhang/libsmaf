/* oscSlot_8B @ 0003dc50 754B */


/* ARM::CWtSynth::oscSlot_8B(ARM::_tagWTSLOTINFO*) */

int ARM::CWtSynth::oscSlot_8B(_tagWTSLOTINFO *param_1)

{
  _tagWTSLOTINFO _Var1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  if (*(code **)(param_1 + 0x80a4) == (code *)0x0) {
    return 0;
  }
  (**(code **)(param_1 + 0x80a4))();
  if (*(int *)(param_1 + 0x80b4) == 1) {
    return *(int *)(param_1 + 0x80a8) *
           ((int)(*(int *)(param_1 + 0x80dc) * (uint)*(ushort *)(param_1 + 0x80d6)) >> 0xf) >> 0xf;
  }
  uVar3 = *(uint *)(param_1 + 0x80b0);
  uVar4 = *(uint *)(param_1 + 0x8044);
  uVar9 = uVar3 >> 0x10;
  if (uVar4 <= uVar3 >> 0x10) {
    uVar9 = uVar4;
  }
  uVar7 = uVar9 + 1;
  if ((uVar4 <= uVar9 + 1) &&
     (uVar7 = *(uint *)(param_1 + 0x8040), uVar4 <= *(uint *)(param_1 + 0x8040))) {
    uVar7 = uVar9;
  }
  if (*(int *)(param_1 + 0x80dc) == 0) {
    _Var1 = param_1[0x8048];
    iVar6 = 0;
  }
  else {
    iVar6 = *(byte *)(*(int *)(param_1 + 0x10) + uVar9) - 0x80;
    _Var1 = param_1[0x8048];
    uVar9 = (*(byte *)(*(int *)(param_1 + 0x10) + uVar7) - 0x80) * 0x100 + iVar6 * -0x100;
    lVar2 = (ulonglong)uVar9 * (ulonglong)(uVar3 & 0xffff);
    iVar6 = (int)((((uint)lVar2 >> 0x10 |
                   ((uVar3 & 0xffff) * ((int)uVar9 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20)) *
                   0x10000) + iVar6 * 0x100) *
                 ((int)((uint)*(ushort *)(param_1 + 0x80d6) * *(int *)(param_1 + 0x80dc)) >> 0xf))
            >> 0xf;
  }
  if (_Var1 == (_tagWTSLOTINFO)0x0) {
    uVar3 = uVar3 + *(int *)(param_1 + 0x80e0);
    *(uint *)(param_1 + 0x80b0) = uVar3;
    goto LAB_0003dca8;
  }
  switch(*(undefined4 *)(param_1 + 0x80ec)) {
  case 1:
    if (param_1[0x80f0] == (_tagWTSLOTINFO)0x0) {
      uVar9 = *(uint *)(param_1 + 0x80f4);
      if ((int)uVar9 < *(int *)(param_1 + 0x8118)) {
        *(uint *)(param_1 + 0x80f4) = uVar9 + *(int *)(param_1 + 0x8104);
        uVar9 = (uVar9 + *(int *)(param_1 + 0x8104) & 0xfffffff) >> 0x10 ^ 0x800;
      }
      else {
        if (*(int *)(param_1 + 0x8118) < (int)uVar9) {
          uVar9 = uVar9 - *(int *)(param_1 + 0x8104);
          *(uint *)(param_1 + 0x80f4) = uVar9;
        }
LAB_0003deb6:
        uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
      }
    }
    else {
      uVar9 = (int)*(short *)(param_1 + 0x80f6) + 0x800U & 0xfff;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x80ec) = 3;
    *(uint *)(param_1 + 0x80f4) = *(uint *)(param_1 + 0x8108);
    uVar9 = (*(uint *)(param_1 + 0x8108) & 0xfffffff) >> 0x10 ^ 0x800;
    break;
  case 3:
    uVar9 = *(uint *)(param_1 + 0x80f4);
    uVar7 = *(uint *)(param_1 + 0x810c);
    if ((int)uVar9 < (int)uVar7) {
      uVar9 = uVar9 + *(int *)(param_1 + 0x80f8);
      if ((int)uVar9 < (int)uVar7) goto LAB_0003ded8;
    }
    else {
      if ((int)uVar9 <= (int)uVar7) {
        uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
        *(undefined4 *)(param_1 + 0x80ec) = 4;
        break;
      }
      uVar9 = uVar9 - *(int *)(param_1 + 0x80f8);
      if ((int)uVar7 < (int)uVar9) goto LAB_0003ded8;
    }
    *(uint *)(param_1 + 0x80f4) = uVar7;
    uVar9 = (uVar7 & 0xfffffff) >> 0x10 ^ 0x800;
    *(undefined4 *)(param_1 + 0x80ec) = 4;
    break;
  case 4:
    uVar9 = *(uint *)(param_1 + 0x80f4);
    uVar7 = *(uint *)(param_1 + 0x8110);
    if ((int)uVar9 < (int)uVar7) {
      uVar9 = uVar9 + *(int *)(param_1 + 0x80fc);
      if ((int)uVar9 < (int)uVar7) {
LAB_0003ded8:
        *(uint *)(param_1 + 0x80f4) = uVar9;
        uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
      }
      else {
LAB_0003de34:
        *(uint *)(param_1 + 0x80f4) = uVar7;
        uVar9 = (uVar7 & 0xfffffff) >> 0x10 ^ 0x800;
        *(undefined4 *)(param_1 + 0x80ec) = 5;
      }
    }
    else {
      if ((int)uVar7 < (int)uVar9) {
        uVar9 = uVar9 - *(int *)(param_1 + 0x80fc);
        if ((int)uVar9 <= (int)uVar7) goto LAB_0003de34;
        goto LAB_0003ded8;
      }
      uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
      *(undefined4 *)(param_1 + 0x80ec) = 5;
    }
    break;
  case 5:
    uVar9 = *(uint *)(param_1 + 0x80f4);
    if ((int)uVar9 < *(int *)(param_1 + 0x8114)) {
      uVar9 = uVar9 + *(int *)(param_1 + 0x8100);
      *(uint *)(param_1 + 0x80f4) = uVar9;
      uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
    }
    else {
      if ((int)uVar9 <= *(int *)(param_1 + 0x8114)) goto LAB_0003deb6;
      uVar9 = uVar9 - *(int *)(param_1 + 0x8100);
      *(uint *)(param_1 + 0x80f4) = uVar9;
      uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
    }
    break;
  default:
    uVar9 = 0x800;
    *(undefined4 *)(param_1 + 0x80f4) = 0;
  }
  uVar9 = *(uint *)(DAT_0003df4c + 0x3de00 + uVar9 * 4);
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x80e0) * (ulonglong)uVar9;
  uVar3 = uVar3 + ((uint)lVar2 >> 0x1d |
                  (*(uint *)(param_1 + 0x80e0) * ((int)uVar9 >> 0x1f) +
                  (int)((ulonglong)lVar2 >> 0x20)) * 8);
  *(uint *)(param_1 + 0x80b0) = uVar3;
LAB_0003dca8:
  iVar5 = DAT_0003df48;
  uVar9 = uVar4 * 0x10000;
  if (uVar9 <= uVar3) {
    if (uVar4 <= *(uint *)(param_1 + 0x8040)) {
      *(int *)(param_1 + 0x80a8) = iVar6;
      uVar8 = *(undefined4 *)(iVar5 + 0x3dda8);
      *(undefined4 *)(param_1 + 0x80b4) = 1;
      *(undefined4 *)(param_1 + 0x80a4) = uVar8;
      return iVar6;
    }
    iVar5 = *(uint *)(param_1 + 0x8040) * 0x10000 + uVar4 * -0x10000;
    uVar3 = iVar5 + uVar3;
    if (uVar9 <= uVar3) {
      while ((((uVar3 = uVar3 + iVar5, uVar9 <= uVar3 && (uVar3 = uVar3 + iVar5, uVar9 <= uVar3)) &&
              (uVar3 = uVar3 + iVar5, uVar9 <= uVar3)) &&
             (((uVar3 = uVar3 + iVar5, uVar9 <= uVar3 && (uVar3 = uVar3 + iVar5, uVar9 <= uVar3)) &&
              ((uVar3 = uVar3 + iVar5, uVar9 <= uVar3 &&
               ((uVar3 = uVar3 + iVar5, uVar9 <= uVar3 && (uVar3 = uVar3 + iVar5, uVar9 <= uVar3))))
              ))))) {
        uVar3 = uVar3 + iVar5;
        if ((uVar3 < uVar9) ||
           (((((uVar3 = uVar3 + iVar5, uVar3 < uVar9 || (uVar3 = uVar3 + iVar5, uVar3 < uVar9)) ||
              (uVar3 = uVar3 + iVar5, uVar3 < uVar9)) ||
             ((uVar3 = uVar3 + iVar5, uVar3 < uVar9 || (uVar3 = uVar3 + iVar5, uVar3 < uVar9)))) ||
            ((uVar3 = uVar3 + iVar5, uVar3 < uVar9 || (uVar3 = uVar3 + iVar5, uVar3 < uVar9))))))
        break;
      }
    }
    *(uint *)(param_1 + 0x80b0) = uVar3;
  }
  *(int *)(param_1 + 0x80a8) = iVar6;
  return iVar6;
}

