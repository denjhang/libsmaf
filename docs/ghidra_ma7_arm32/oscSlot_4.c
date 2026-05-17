/* oscSlot_4 @ 0003d47c 1216B */


/* ARM::CWtSynth::oscSlot_4(ARM::_tagWTSLOTINFO*) */

int ARM::CWtSynth::oscSlot_4(_tagWTSLOTINFO *param_1)

{
  _tagWTSLOTINFO _Var1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  uint local_38;
  
  iVar8 = DAT_0003d948 + 0x3d494;
  if (*(code **)(param_1 + 0x80a4) == (code *)0x0) {
    return 0;
  }
  (**(code **)(param_1 + 0x80a4))();
  if (*(int *)(param_1 + 0x80b4) == 1) {
    return *(int *)(param_1 + 0x80a8) *
           ((int)(*(int *)(param_1 + 0x80dc) * (uint)*(ushort *)(param_1 + 0x80d6)) >> 0xf) >> 0xf;
  }
  uVar10 = *(uint *)(param_1 + 0x80b0);
  uVar17 = *(uint *)(param_1 + 0x8044);
  uVar14 = uVar10 >> 0x10;
  if (uVar17 <= uVar10 >> 0x10) {
    uVar14 = uVar17;
  }
  uVar4 = uVar14 + 1;
  local_38 = uVar4;
  if ((uVar17 <= uVar4) &&
     (local_38 = *(uint *)(param_1 + 0x8040), uVar17 <= *(uint *)(param_1 + 0x8040))) {
    local_38 = uVar14;
  }
  iVar12 = *(int *)(param_1 + 0x80dc);
  if (iVar12 == 0) {
    _Var1 = param_1[0x8048];
    iVar12 = 0;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x14);
    if (uVar14 < uVar13) {
      iVar18 = (int)*(short *)(param_1 + ((uVar14 & 0x3fff) + 0x10) * 2);
      uVar4 = uVar13;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x10);
      iVar11 = *(int *)(iVar8 + DAT_0003d950);
      iVar18 = *(int *)(param_1 + 0x1c);
      do {
        iVar19 = *(int *)(param_1 + 0x18);
        bVar2 = *(byte *)(iVar5 + (uVar13 >> 1));
        if ((int)(uVar13 << 0x1f) < 0) {
          uVar14 = (uint)(bVar2 >> 4);
        }
        else {
          uVar14 = bVar2 & 0xf;
        }
        iVar16 = *(int *)(iVar11 + (uVar14 & 7) * 4);
        iVar9 = (iVar19 >> 2) * (uVar14 & 1) +
                iVar19 * -((int)(uVar14 << 0x1d) >> 0x1f) +
                (iVar19 >> 1) * -((int)(uVar14 << 0x1e) >> 0x1f) + (iVar19 >> 3);
        if (uVar14 >> 3 != 0) {
          iVar9 = -iVar9;
        }
        iVar18 = iVar18 + iVar9;
        *(int *)(param_1 + 0x1c) = iVar18;
        uVar14 = (uint)(iVar16 * iVar19) >> 0xe;
        if (uVar14 < 0x7f) {
          *(undefined4 *)(param_1 + 0x18) = 0x7f;
        }
        else {
          if (0x6000 < uVar14) {
            uVar14 = 0x6000;
          }
          *(uint *)(param_1 + 0x18) = uVar14;
        }
        if (iVar18 < 0x8000) {
          if (iVar18 < -0x8000) {
            uVar7 = 0x8000;
            iVar18 = -0x8000;
            *(undefined4 *)(param_1 + 0x1c) = 0xffff8000;
          }
          else {
            uVar7 = (undefined2)iVar18;
          }
        }
        else {
          uVar7 = 0x7fff;
          *(undefined4 *)(param_1 + 0x1c) = 0x7fff;
          iVar18 = 0x7fff;
        }
        uVar14 = uVar13 & 0x3fff;
        uVar13 = uVar13 + 1;
        *(undefined2 *)(param_1 + (uVar14 + 0x10) * 2) = uVar7;
        *(uint *)(param_1 + 0x14) = uVar13;
      } while (uVar4 != uVar13);
    }
    if (local_38 < uVar4) {
      iVar11 = (int)*(short *)(param_1 + ((local_38 & 0x3fff) + 0x10) * 2);
    }
    else {
      iVar19 = *(int *)(param_1 + 0x10);
      iVar5 = *(int *)(iVar8 + DAT_0003d950);
      iVar11 = *(int *)(param_1 + 0x1c);
      do {
        bVar20 = -1 < (int)(uVar4 << 0x1f);
        iVar9 = *(int *)(param_1 + 0x18);
        uVar14 = (uint)*(byte *)(iVar19 + (uVar4 >> 1));
        if (bVar20) {
          uVar14 = uVar14 & 0xf;
        }
        if (!bVar20) {
          uVar14 = uVar14 >> 4;
        }
        iVar6 = *(int *)(iVar5 + (uVar14 & 7) * 4);
        iVar16 = (iVar9 >> 2) * (uVar14 & 1) +
                 iVar9 * -((int)(uVar14 << 0x1d) >> 0x1f) +
                 (iVar9 >> 1) * -((int)(uVar14 << 0x1e) >> 0x1f) + (iVar9 >> 3);
        if (uVar14 >> 3 != 0) {
          iVar16 = -iVar16;
        }
        iVar11 = iVar11 + iVar16;
        *(int *)(param_1 + 0x1c) = iVar11;
        uVar14 = (uint)(iVar6 * iVar9) >> 0xe;
        if (uVar14 < 0x7f) {
          *(undefined4 *)(param_1 + 0x18) = 0x7f;
        }
        else {
          if (0x6000 < uVar14) {
            uVar14 = 0x6000;
          }
          *(uint *)(param_1 + 0x18) = uVar14;
        }
        if (iVar11 < 0x8000) {
          if (iVar11 < -0x8000) {
            uVar7 = 0x8000;
            iVar11 = -0x8000;
            *(undefined4 *)(param_1 + 0x1c) = 0xffff8000;
          }
          else {
            uVar7 = (undefined2)iVar11;
          }
        }
        else {
          uVar7 = 0x7fff;
          *(undefined4 *)(param_1 + 0x1c) = 0x7fff;
          iVar11 = 0x7fff;
        }
        uVar14 = uVar4 & 0x3fff;
        uVar4 = uVar4 + 1;
        *(undefined2 *)(param_1 + (uVar14 + 0x10) * 2) = uVar7;
        *(uint *)(param_1 + 0x14) = uVar4;
      } while (uVar4 != local_38 + 1);
    }
    lVar3 = (ulonglong)(uint)(iVar11 - iVar18) * (ulonglong)(uVar10 & 0xffff);
    _Var1 = param_1[0x8048];
    iVar12 = (int)((((uint)lVar3 >> 0x10 |
                    ((uVar10 & 0xffff) * (iVar11 - iVar18 >> 0x1f) + (int)((ulonglong)lVar3 >> 0x20)
                    ) * 0x10000) + iVar18) *
                  ((int)((uint)*(ushort *)(param_1 + 0x80d6) * iVar12) >> 0xf)) >> 0xf;
  }
  if (_Var1 == (_tagWTSLOTINFO)0x0) {
    uVar10 = *(int *)(param_1 + 0x80e0) + uVar10;
    *(uint *)(param_1 + 0x80b0) = uVar10;
    goto LAB_0003d542;
  }
  switch(*(undefined4 *)(param_1 + 0x80ec)) {
  case 1:
    if (param_1[0x80f0] == (_tagWTSLOTINFO)0x0) {
      uVar14 = *(uint *)(param_1 + 0x80f4);
      if ((int)uVar14 < *(int *)(param_1 + 0x8118)) {
        *(uint *)(param_1 + 0x80f4) = uVar14 + *(int *)(param_1 + 0x8104);
        uVar14 = (uVar14 + *(int *)(param_1 + 0x8104) & 0xfffffff) >> 0x10 ^ 0x800;
      }
      else {
        if (*(int *)(param_1 + 0x8118) < (int)uVar14) {
          uVar14 = uVar14 - *(int *)(param_1 + 0x8104);
          *(uint *)(param_1 + 0x80f4) = uVar14;
        }
LAB_0003d8b4:
        uVar14 = (uVar14 & 0xfffffff) >> 0x10 ^ 0x800;
      }
    }
    else {
      uVar14 = (int)*(short *)(param_1 + 0x80f6) + 0x800U & 0xfff;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x80ec) = 3;
    *(uint *)(param_1 + 0x80f4) = *(uint *)(param_1 + 0x8108);
    uVar14 = (*(uint *)(param_1 + 0x8108) & 0xfffffff) >> 0x10 ^ 0x800;
    break;
  case 3:
    uVar14 = *(uint *)(param_1 + 0x80f4);
    uVar4 = *(uint *)(param_1 + 0x810c);
    if ((int)uVar14 < (int)uVar4) {
      uVar14 = uVar14 + *(int *)(param_1 + 0x80f8);
      if ((int)uVar14 < (int)uVar4) goto LAB_0003d8d6;
    }
    else {
      if ((int)uVar14 <= (int)uVar4) {
        uVar14 = (uVar14 & 0xfffffff) >> 0x10 ^ 0x800;
        *(undefined4 *)(param_1 + 0x80ec) = 4;
        break;
      }
      uVar14 = uVar14 - *(int *)(param_1 + 0x80f8);
      if ((int)uVar4 < (int)uVar14) goto LAB_0003d8d6;
    }
    *(uint *)(param_1 + 0x80f4) = uVar4;
    uVar14 = (uVar4 & 0xfffffff) >> 0x10 ^ 0x800;
    *(undefined4 *)(param_1 + 0x80ec) = 4;
    break;
  case 4:
    uVar14 = *(uint *)(param_1 + 0x80f4);
    uVar4 = *(uint *)(param_1 + 0x8110);
    if ((int)uVar14 < (int)uVar4) {
      uVar14 = uVar14 + *(int *)(param_1 + 0x80fc);
      if ((int)uVar14 < (int)uVar4) {
LAB_0003d8d6:
        *(uint *)(param_1 + 0x80f4) = uVar14;
        uVar14 = (uVar14 & 0xfffffff) >> 0x10 ^ 0x800;
      }
      else {
LAB_0003d832:
        *(uint *)(param_1 + 0x80f4) = uVar4;
        uVar14 = (uVar4 & 0xfffffff) >> 0x10 ^ 0x800;
        *(undefined4 *)(param_1 + 0x80ec) = 5;
      }
    }
    else {
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar14 - *(int *)(param_1 + 0x80fc);
        if ((int)uVar14 <= (int)uVar4) goto LAB_0003d832;
        goto LAB_0003d8d6;
      }
      uVar14 = (uVar14 & 0xfffffff) >> 0x10 ^ 0x800;
      *(undefined4 *)(param_1 + 0x80ec) = 5;
    }
    break;
  case 5:
    uVar14 = *(uint *)(param_1 + 0x80f4);
    if ((int)uVar14 < *(int *)(param_1 + 0x8114)) {
      uVar14 = uVar14 + *(int *)(param_1 + 0x8100);
      *(uint *)(param_1 + 0x80f4) = uVar14;
      uVar14 = (uVar14 & 0xfffffff) >> 0x10 ^ 0x800;
    }
    else {
      if ((int)uVar14 <= *(int *)(param_1 + 0x8114)) goto LAB_0003d8b4;
      uVar14 = uVar14 - *(int *)(param_1 + 0x8100);
      *(uint *)(param_1 + 0x80f4) = uVar14;
      uVar14 = (uVar14 & 0xfffffff) >> 0x10 ^ 0x800;
    }
    break;
  default:
    uVar14 = 0x800;
    *(undefined4 *)(param_1 + 0x80f4) = 0;
  }
  uVar14 = *(uint *)(DAT_0003d954 + 0x3d7fc + uVar14 * 4);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x80e0) * (ulonglong)uVar14;
  uVar10 = ((uint)lVar3 >> 0x1d |
           (*(uint *)(param_1 + 0x80e0) * ((int)uVar14 >> 0x1f) + (int)((ulonglong)lVar3 >> 0x20)) *
           8) + uVar10;
  *(uint *)(param_1 + 0x80b0) = uVar10;
LAB_0003d542:
  uVar14 = uVar17 * 0x10000;
  if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
    if (*(uint *)(param_1 + 0x8040) < uVar17) {
      iVar8 = *(uint *)(param_1 + 0x8040) * 0x10000 + uVar17 * -0x10000;
      while ((((uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0 &&
               (uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0)) &&
              (uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0)) &&
             (((uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0 &&
               (uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0)) &&
              ((uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0 &&
               ((uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0 &&
                (uVar10 = uVar10 + iVar8, uVar14 < uVar10 || uVar14 - uVar10 == 0))))))))) {
        uVar10 = uVar10 + iVar8;
        if ((uVar10 <= uVar14 && uVar14 - uVar10 != 0) ||
           (((((uVar10 = uVar10 + iVar8, uVar10 <= uVar14 && uVar14 - uVar10 != 0 ||
               (uVar10 = uVar10 + iVar8, uVar10 <= uVar14 && uVar14 - uVar10 != 0)) ||
              (uVar10 = uVar10 + iVar8, uVar10 <= uVar14 && uVar14 - uVar10 != 0)) ||
             ((uVar10 = uVar10 + iVar8, uVar10 <= uVar14 && uVar14 - uVar10 != 0 ||
              (uVar10 = uVar10 + iVar8, uVar10 <= uVar14 && uVar14 - uVar10 != 0)))) ||
            ((uVar10 = uVar10 + iVar8, uVar10 <= uVar14 && uVar14 - uVar10 != 0 ||
             (uVar10 = uVar10 + iVar8, uVar10 <= uVar14 && uVar14 - uVar10 != 0)))))) break;
      }
      *(uint *)(param_1 + 0x80b0) = uVar10;
    }
    else {
      uVar15 = *(undefined4 *)(iVar8 + DAT_0003d94c);
      *(undefined4 *)(param_1 + 0x80b4) = 1;
      *(undefined4 *)(param_1 + 0x80a4) = uVar15;
    }
  }
  *(int *)(param_1 + 0x80a8) = iVar12;
  return iVar12;
}

