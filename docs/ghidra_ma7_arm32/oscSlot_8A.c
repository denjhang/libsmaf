/* oscSlot_8A @ 0003d958 746B */


/* ARM::CWtSynth::oscSlot_8A(ARM::_tagWTSLOTINFO*) */

int ARM::CWtSynth::oscSlot_8A(_tagWTSLOTINFO *param_1)

{
  _tagWTSLOTINFO _Var1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  uVar8 = uVar9 + 1;
  if ((uVar4 <= uVar9 + 1) &&
     (uVar8 = *(uint *)(param_1 + 0x8040), uVar4 <= *(uint *)(param_1 + 0x8040))) {
    uVar8 = uVar9;
  }
  if (*(int *)(param_1 + 0x80dc) == 0) {
    _Var1 = param_1[0x8048];
    iVar6 = 0;
  }
  else {
    iVar6 = (int)*(char *)(*(int *)(param_1 + 0xc) + uVar9);
    uVar9 = *(char *)(*(int *)(param_1 + 0xc) + uVar8) * 0x100 + iVar6 * -0x100;
    lVar2 = (ulonglong)uVar9 * (ulonglong)(uVar3 & 0xffff);
    _Var1 = param_1[0x8048];
    iVar6 = (int)((((uint)lVar2 >> 0x10 |
                   ((uVar3 & 0xffff) * ((int)uVar9 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20)) *
                   0x10000) + iVar6 * 0x100) *
                 ((int)((uint)*(ushort *)(param_1 + 0x80d6) * *(int *)(param_1 + 0x80dc)) >> 0xf))
            >> 0xf;
  }
  if (_Var1 == (_tagWTSLOTINFO)0x0) {
    uVar3 = uVar3 + *(int *)(param_1 + 0x80e0);
    *(uint *)(param_1 + 0x80b0) = uVar3;
    goto LAB_0003d9b0;
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
LAB_0003dbb6:
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
    uVar8 = *(uint *)(param_1 + 0x810c);
    if ((int)uVar9 < (int)uVar8) {
      uVar9 = uVar9 + *(int *)(param_1 + 0x80f8);
      if ((int)uVar9 < (int)uVar8) goto LAB_0003dbd8;
    }
    else {
      if ((int)uVar9 <= (int)uVar8) {
        uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
        *(undefined4 *)(param_1 + 0x80ec) = 4;
        break;
      }
      uVar9 = uVar9 - *(int *)(param_1 + 0x80f8);
      if ((int)uVar8 < (int)uVar9) goto LAB_0003dbd8;
    }
    *(uint *)(param_1 + 0x80f4) = uVar8;
    uVar9 = (uVar8 & 0xfffffff) >> 0x10 ^ 0x800;
    *(undefined4 *)(param_1 + 0x80ec) = 4;
    break;
  case 4:
    uVar9 = *(uint *)(param_1 + 0x80f4);
    uVar8 = *(uint *)(param_1 + 0x8110);
    if ((int)uVar9 < (int)uVar8) {
      uVar9 = uVar9 + *(int *)(param_1 + 0x80fc);
      if ((int)uVar9 < (int)uVar8) {
LAB_0003dbd8:
        *(uint *)(param_1 + 0x80f4) = uVar9;
        uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
      }
      else {
LAB_0003db34:
        *(uint *)(param_1 + 0x80f4) = uVar8;
        uVar9 = (uVar8 & 0xfffffff) >> 0x10 ^ 0x800;
        *(undefined4 *)(param_1 + 0x80ec) = 5;
      }
    }
    else {
      if ((int)uVar8 < (int)uVar9) {
        uVar9 = uVar9 - *(int *)(param_1 + 0x80fc);
        if ((int)uVar9 <= (int)uVar8) goto LAB_0003db34;
        goto LAB_0003dbd8;
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
      if ((int)uVar9 <= *(int *)(param_1 + 0x8114)) goto LAB_0003dbb6;
      uVar9 = uVar9 - *(int *)(param_1 + 0x8100);
      *(uint *)(param_1 + 0x80f4) = uVar9;
      uVar9 = (uVar9 & 0xfffffff) >> 0x10 ^ 0x800;
    }
    break;
  default:
    uVar9 = 0x800;
    *(undefined4 *)(param_1 + 0x80f4) = 0;
  }
  uVar9 = *(uint *)(DAT_0003dc4c + 0x3dafe + uVar9 * 4);
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x80e0) * (ulonglong)uVar9;
  uVar3 = uVar3 + ((uint)lVar2 >> 0x1d |
                  (*(uint *)(param_1 + 0x80e0) * ((int)uVar9 >> 0x1f) +
                  (int)((ulonglong)lVar2 >> 0x20)) * 8);
  *(uint *)(param_1 + 0x80b0) = uVar3;
LAB_0003d9b0:
  iVar5 = DAT_0003dc48;
  uVar9 = uVar4 * 0x10000;
  if (uVar9 < uVar3 || uVar9 - uVar3 == 0) {
    if (uVar4 <= *(uint *)(param_1 + 0x8040)) {
      *(int *)(param_1 + 0x80a8) = iVar6;
      uVar7 = *(undefined4 *)(iVar5 + 0x3daa6);
      *(undefined4 *)(param_1 + 0x80b4) = 1;
      *(undefined4 *)(param_1 + 0x80a4) = uVar7;
      return iVar6;
    }
    iVar5 = *(uint *)(param_1 + 0x8040) * 0x10000 + uVar4 * -0x10000;
    uVar3 = iVar5 + uVar3;
    if (uVar9 < uVar3 || uVar9 - uVar3 == 0) {
      while ((((uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0 &&
               (uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0)) &&
              (uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0)) &&
             (((uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0 &&
               (uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0)) &&
              ((uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0 &&
               ((uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0 &&
                (uVar3 = uVar3 + iVar5, uVar9 < uVar3 || uVar9 - uVar3 == 0))))))))) {
        uVar3 = uVar3 + iVar5;
        if ((uVar3 <= uVar9 && uVar9 - uVar3 != 0) ||
           (((((uVar3 = uVar3 + iVar5, uVar3 <= uVar9 && uVar9 - uVar3 != 0 ||
               (uVar3 = uVar3 + iVar5, uVar3 <= uVar9 && uVar9 - uVar3 != 0)) ||
              (uVar3 = uVar3 + iVar5, uVar3 <= uVar9 && uVar9 - uVar3 != 0)) ||
             ((uVar3 = uVar3 + iVar5, uVar3 <= uVar9 && uVar9 - uVar3 != 0 ||
              (uVar3 = uVar3 + iVar5, uVar3 <= uVar9 && uVar9 - uVar3 != 0)))) ||
            ((uVar3 = uVar3 + iVar5, uVar3 <= uVar9 && uVar9 - uVar3 != 0 ||
             (uVar3 = uVar3 + iVar5, uVar3 <= uVar9 && uVar9 - uVar3 != 0)))))) break;
      }
    }
    *(uint *)(param_1 + 0x80b0) = uVar3;
  }
  *(int *)(param_1 + 0x80a8) = iVar6;
  return iVar6;
}

