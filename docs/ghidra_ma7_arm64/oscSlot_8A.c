/* oscSlot_8A @ 001405d4 1016B */


/* ARM::CWtSynth::oscSlot_8A(ARM::_tagWTSLOTINFO*) */

int ARM::CWtSynth::oscSlot_8A(_tagWTSLOTINFO *param_1)

{
  uint uVar1;
  _tagWTSLOTINFO _Var2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (*(code **)(param_1 + 0x80c0) == (code *)0x0) {
    return 0;
  }
  (**(code **)(param_1 + 0x80c0))();
  if (*(int *)(param_1 + 0x80d4) == 1) {
    return ((int)((uint)*(ushort *)(param_1 + 0x80f6) * *(int *)(param_1 + 0x80fc)) >> 0xf) *
           *(int *)(param_1 + 0x80c8) >> 0xf;
  }
  uVar5 = *(uint *)(param_1 + 0x80d0);
  uVar1 = *(uint *)(param_1 + 0x805c);
  uVar7 = uVar5 >> 0x10;
  if (uVar1 < uVar5 >> 0x10) {
    uVar7 = uVar1;
  }
  uVar4 = uVar7 + 1;
  if ((uVar1 <= uVar7 + 1) &&
     (uVar4 = *(uint *)(param_1 + 0x8058), uVar1 <= *(uint *)(param_1 + 0x8058))) {
    uVar4 = uVar7;
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x80fc) == 0) {
    _Var2 = param_1[0x8060];
  }
  else {
    iVar6 = (int)*(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar7);
    _Var2 = param_1[0x8060];
    iVar6 = ((int)(*(int *)(param_1 + 0x80fc) * (uint)*(ushort *)(param_1 + 0x80f6)) >> 0xf) *
            (iVar6 * 0x100 +
            (int)((long)(*(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) * 0x100 +
                        iVar6 * -0x100) * (ulong)(ushort)uVar5 >> 0x10)) >> 0xf;
  }
  if (_Var2 == (_tagWTSLOTINFO)0x0) {
    uVar5 = uVar5 + *(int *)(param_1 + 0x8100);
    *(uint *)(param_1 + 0x80d0) = uVar5;
    goto LAB_0014064c;
  }
  switch(*(undefined4 *)(param_1 + 0x810c)) {
  case 1:
    if (param_1[0x8110] == (_tagWTSLOTINFO)0x0) {
      iVar8 = *(int *)(param_1 + 0x8114);
      if (iVar8 < *(int *)(param_1 + 0x8138)) {
        iVar3 = *(int *)(param_1 + 0x8124);
        goto LAB_0014097c;
      }
      if (*(int *)(param_1 + 0x8138) < iVar8) {
        iVar3 = *(int *)(param_1 + 0x8124);
        goto LAB_001408f4;
      }
LAB_001408fc:
      uVar7 = (iVar8 >> 0x10) + 0x800U & 0xfff;
    }
    else {
      uVar7 = (int)*(short *)(param_1 + 0x8116) + 0x800U & 0xfff;
    }
    break;
  case 2:
    *(int *)(param_1 + 0x8114) = *(int *)(param_1 + 0x8128);
    *(undefined4 *)(param_1 + 0x810c) = 3;
    uVar7 = (*(int *)(param_1 + 0x8128) >> 0x10) + 0x800U & 0xfff;
    break;
  case 3:
    iVar8 = *(int *)(param_1 + 0x8114);
    iVar3 = *(int *)(param_1 + 0x812c);
    if (iVar8 < iVar3) {
      iVar8 = iVar8 + *(int *)(param_1 + 0x8118);
      if (iVar8 < iVar3) goto LAB_0014093c;
    }
    else {
      if (iVar8 <= iVar3) {
        *(undefined4 *)(param_1 + 0x810c) = 4;
        uVar7 = (iVar8 >> 0x10) + 0x800U & 0xfff;
        break;
      }
      iVar8 = iVar8 - *(int *)(param_1 + 0x8118);
      if (iVar3 < iVar8) goto LAB_0014093c;
    }
    *(int *)(param_1 + 0x8114) = iVar3;
    *(undefined4 *)(param_1 + 0x810c) = 4;
    uVar7 = (iVar3 >> 0x10) + 0x800U & 0xfff;
    break;
  case 4:
    iVar8 = *(int *)(param_1 + 0x8114);
    iVar3 = *(int *)(param_1 + 0x8130);
    if (iVar8 < iVar3) {
      iVar8 = iVar8 + *(int *)(param_1 + 0x811c);
      if (iVar8 < iVar3) {
LAB_0014093c:
        *(int *)(param_1 + 0x8114) = iVar8;
        uVar7 = (iVar8 >> 0x10) + 0x800U & 0xfff;
      }
      else {
LAB_0014085c:
        *(int *)(param_1 + 0x8114) = iVar3;
        *(undefined4 *)(param_1 + 0x810c) = 5;
        uVar7 = (iVar3 >> 0x10) + 0x800U & 0xfff;
      }
    }
    else {
      if (iVar3 < iVar8) {
        iVar8 = iVar8 - *(int *)(param_1 + 0x811c);
        if (iVar8 <= iVar3) goto LAB_0014085c;
        goto LAB_0014093c;
      }
      *(undefined4 *)(param_1 + 0x810c) = 5;
      uVar7 = (iVar8 >> 0x10) + 0x800U & 0xfff;
    }
    break;
  case 5:
    iVar8 = *(int *)(param_1 + 0x8114);
    if (*(int *)(param_1 + 0x8134) <= iVar8) {
      if (*(int *)(param_1 + 0x8134) < iVar8) {
        iVar3 = *(int *)(param_1 + 0x8120);
LAB_001408f4:
        iVar8 = iVar8 - iVar3;
        *(int *)(param_1 + 0x8114) = iVar8;
      }
      goto LAB_001408fc;
    }
    iVar3 = *(int *)(param_1 + 0x8120);
LAB_0014097c:
    *(int *)(param_1 + 0x8114) = iVar8 + iVar3;
    uVar7 = (iVar8 + iVar3 >> 0x10) + 0x800U & 0xfff;
    break;
  default:
    *(undefined4 *)(param_1 + 0x8114) = 0;
    uVar7 = 0x800;
  }
  uVar5 = uVar5 + (int)((long)((ulong)*(uint *)(param_1 + 0x8100) *
                              (long)*(int *)(&DAT_0028d0f0 + (long)(int)uVar7 * 4)) >> 0x1d);
  *(uint *)(param_1 + 0x80d0) = uVar5;
LAB_0014064c:
  uVar7 = uVar1 * 0x10000;
  if (uVar7 <= uVar5) {
    if (*(uint *)(param_1 + 0x8058) < uVar1) {
      iVar8 = *(uint *)(param_1 + 0x8058) * 0x10000 + uVar1 * -0x10000;
      while ((((uVar5 = iVar8 + uVar5, uVar7 <= uVar5 && (uVar5 = uVar5 + iVar8, uVar7 <= uVar5)) &&
              (uVar5 = uVar5 + iVar8, uVar7 <= uVar5)) &&
             (((uVar5 = uVar5 + iVar8, uVar7 <= uVar5 && (uVar5 = uVar5 + iVar8, uVar7 <= uVar5)) &&
              ((uVar5 = uVar5 + iVar8, uVar7 <= uVar5 &&
               ((uVar5 = uVar5 + iVar8, uVar7 <= uVar5 && (uVar5 = uVar5 + iVar8, uVar7 <= uVar5))))
              ))))) {
        uVar5 = uVar5 + iVar8;
        if ((uVar5 < uVar7) ||
           (((((uVar5 = uVar5 + iVar8, uVar5 < uVar7 || (uVar5 = uVar5 + iVar8, uVar5 < uVar7)) ||
              (uVar5 = uVar5 + iVar8, uVar5 < uVar7)) ||
             ((uVar5 = uVar5 + iVar8, uVar5 < uVar7 || (uVar5 = uVar5 + iVar8, uVar5 < uVar7)))) ||
            ((uVar5 = uVar5 + iVar8, uVar5 < uVar7 || (uVar5 = uVar5 + iVar8, uVar5 < uVar7))))))
        break;
      }
      *(uint *)(param_1 + 0x80d0) = uVar5;
    }
    else {
      *(undefined **)(param_1 + 0x80c0) = PTR_CalcEgSlot_RELEASE_005679c8;
      *(undefined4 *)(param_1 + 0x80d4) = 1;
    }
  }
  *(int *)(param_1 + 0x80c8) = iVar6;
  return iVar6;
}

