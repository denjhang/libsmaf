/* GenerateDownOutput @ 0004a048 1254B */


/* ARM::CSrc::GenerateDownOutput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::GenerateDownOutput(CSrc *this,uint param_1,_genbuf *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  CSrc *pCVar7;
  int iVar8;
  int extraout_r1;
  CSrc *pCVar9;
  int iVar10;
  int extraout_r2;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  CSrc *pCVar14;
  int iVar15;
  CSrc *pCVar16;
  CSrc *pCVar17;
  int *piVar18;
  CSrc *pCVar19;
  CSrc *pCVar20;
  int *piVar21;
  int iVar22;
  bool bVar23;
  uint local_80;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_5c;
  uint local_58;
  uint local_40;
  int *local_38;
  
  iVar11 = *(int *)this;
  iVar12 = *(int *)(&DAT_003bf708 + iVar11);
  if (param_2 == (_genbuf *)0x0) {
    *(undefined4 *)(this + 0x33360) = 0;
    *(undefined4 *)(this + 0x33364) = 0;
    if (iVar12 == 0) {
      local_38 = (int *)0x0;
    }
    else {
      *(undefined4 *)(this + 0x33368) = 0;
      *(undefined4 *)(this + 0x3336c) = 0;
      *(undefined4 *)(this + 0x33370) = 0;
      *(undefined4 *)(this + 0x33374) = 0;
      *(undefined4 *)(this + 0x33378) = 0;
      *(undefined4 *)(this + 0x3337c) = 0;
      local_38 = (int *)0x0;
    }
  }
  else {
    local_38 = *(int **)param_2;
    *(int **)(this + 0x33360) = local_38;
    *(undefined4 *)(this + 0x33364) = *(undefined4 *)(param_2 + 4);
    if (iVar12 != 0) {
      *(undefined4 *)(this + 0x33368) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(this + 0x3336c) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(this + 0x33370) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(this + 0x33374) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(this + 0x33378) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(this + 0x3337c) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  if (param_1 == 0) {
    return;
  }
  pCVar19 = *(CSrc **)(this + 0x33390);
  pCVar9 = this + 0x33390;
  iVar12 = *(int *)(this + 0x33394);
  pCVar14 = this + 0x33364;
  pCVar7 = this + 0x33394;
  local_40 = 0;
  do {
    iVar10 = *(int *)(this + 0x1c);
    iVar11 = *(int *)(&DAT_003bf708 + iVar11);
    iVar12 = iVar10 * iVar12;
    if (iVar10 == 0) {
      iVar10 = 0;
      iVar12 = 0;
      iVar8 = 0;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
    }
    else {
      iVar15 = *(int *)(this + 0x24);
      if (iVar11 == 0) {
        iVar8 = *(int *)(iVar15 + iVar12 * 4);
        piVar18 = (int *)(iVar15 + (iVar12 + iVar10) * 4);
        iVar15 = iVar15 + iVar12 * 4;
        piVar21 = (int *)(iVar15 + 4);
        pCVar20 = pCVar19 + -1;
        lVar2 = (longlong)iVar8 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x1fb60);
        lVar3 = (longlong)iVar8 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x22260);
        local_5c = (uint)lVar2 >> 8 | (int)((ulonglong)lVar2 >> 0x20) << 0x18;
        if (pCVar19 == (CSrc *)0x0) {
          pCVar20 = (CSrc *)0x9bf;
        }
        local_58 = (uint)lVar3 >> 8 | (int)((ulonglong)lVar3 >> 0x20) << 0x18;
        if (piVar21 != piVar18) {
          pCVar17 = this;
          if (((int)piVar18 + (-4 - iVar15)) * 0x20000000 < 0) {
            pCVar16 = (CSrc *)0x9bf;
            if (pCVar20 != (CSrc *)0x0) {
              pCVar16 = pCVar20 + -1;
            }
            piVar21 = (int *)(iVar15 + 8);
            if (piVar21 != piVar18) {
              pCVar19 = this;
            }
            lVar2 = (longlong)*(int *)(iVar15 + 4) *
                    (longlong)*(int *)(this + (int)pCVar20 * 4 + 0x1fb60);
            lVar3 = (longlong)*(int *)(iVar15 + 4) *
                    (longlong)*(int *)(this + (int)pCVar20 * 4 + 0x22260);
            local_5c = local_5c + ((uint)lVar2 >> 8 | (int)((ulonglong)lVar2 >> 0x20) << 0x18);
            local_58 = local_58 + ((uint)lVar3 >> 8 | (int)((ulonglong)lVar3 >> 0x20) << 0x18);
            pCVar17 = pCVar19;
            pCVar20 = pCVar16;
            if (piVar21 == piVar18) goto LAB_0004a22c;
          }
          do {
            pCVar19 = (CSrc *)0x9bf;
            if (pCVar20 != (CSrc *)0x0) {
              pCVar19 = pCVar20 + -1;
            }
            iVar12 = (int)pCVar20 * 4;
            iVar8 = *piVar21;
            iVar10 = (int)pCVar20 * 4;
            pCVar20 = (CSrc *)0x9bf;
            if (pCVar19 != (CSrc *)0x0) {
              pCVar20 = pCVar19 + -1;
            }
            piVar1 = piVar21 + 1;
            lVar2 = (longlong)iVar8 * (longlong)*(int *)(pCVar17 + iVar10 + 0x1fb60);
            piVar21 = piVar21 + 2;
            lVar3 = (longlong)iVar8 * (longlong)*(int *)(pCVar17 + iVar12 + 0x22260);
            lVar4 = (longlong)*piVar1 * (longlong)*(int *)(pCVar17 + (int)pCVar19 * 4 + 0x1fb60);
            lVar5 = (longlong)*piVar1 * (longlong)*(int *)(pCVar17 + (int)pCVar19 * 4 + 0x22260);
            local_5c = local_5c + ((uint)lVar2 >> 8 | (int)((ulonglong)lVar2 >> 0x20) << 0x18) +
                       ((uint)lVar4 >> 8 | (int)((ulonglong)lVar4 >> 0x20) << 0x18);
            local_58 = local_58 + ((uint)lVar3 >> 8 | (int)((ulonglong)lVar3 >> 0x20) << 0x18) +
                       ((uint)lVar5 >> 8 | (int)((ulonglong)lVar5 >> 0x20) << 0x18);
          } while (piVar21 != piVar18);
        }
LAB_0004a22c:
        iVar8 = 0;
        local_64 = 0;
        local_68 = 0;
        local_6c = 0;
        local_70 = 0;
        local_74 = 0;
      }
      else {
        iVar8 = 0;
        local_5c = 0;
        local_58 = 0;
        local_64 = 0;
        local_68 = 0;
        local_6c = 0;
        local_70 = 0;
        local_74 = 0;
        piVar18 = (int *)(iVar15 + iVar12 * 4);
        do {
          piVar21 = piVar18 + 1;
          iVar22 = *piVar18;
          iVar6 = (int)pCVar19 * 4;
          local_5c = local_5c +
                     ((uint)((longlong)iVar22 *
                            (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x1fb60)) >> 8 |
                     (int)((ulonglong)
                           ((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x1fb60)
                           ) >> 0x20) << 0x18);
          local_58 = local_58 +
                     ((uint)((longlong)iVar22 *
                            (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x22260)) >> 8 |
                     (int)((ulonglong)
                           ((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x22260)
                           ) >> 0x20) << 0x18);
          local_74 = local_74 +
                     ((uint)((longlong)iVar22 *
                            (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x24960)) >> 8 |
                     (int)((ulonglong)
                           ((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x24960)
                           ) >> 0x20) << 0x18);
          local_70 = local_70 +
                     ((uint)((longlong)iVar22 *
                            (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x27060)) >> 8 |
                     (int)((ulonglong)
                           ((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x27060)
                           ) >> 0x20) << 0x18);
          local_80 = (uint)((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x2e560)
                           );
          local_6c = local_6c +
                     ((uint)((longlong)iVar22 *
                            (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x29760)) >> 8 |
                     (int)((ulonglong)
                           ((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x29760)
                           ) >> 0x20) << 0x18);
          local_7c = (int)((ulonglong)
                           ((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x2e560)
                           ) >> 0x20);
          pCVar20 = pCVar19 + -1;
          local_68 = local_68 +
                     ((uint)((longlong)iVar22 *
                            (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x2be60)) >> 8 |
                     (int)((ulonglong)
                           ((longlong)iVar22 * (longlong)*(int *)(this + (int)pCVar19 * 4 + 0x2be60)
                           ) >> 0x20) << 0x18);
          bVar23 = pCVar19 != (CSrc *)0x0;
          pCVar19 = (CSrc *)0x9bf;
          if (bVar23) {
            pCVar19 = pCVar20;
          }
          local_64 = local_64 + (local_80 >> 8 | local_7c << 0x18);
          iVar8 = iVar8 + ((uint)((longlong)iVar22 * (longlong)*(int *)(this + iVar6 + 0x30c60)) >>
                           8 | (int)((ulonglong)
                                     ((longlong)iVar22 * (longlong)*(int *)(this + iVar6 + 0x30c60))
                                    >> 0x20) << 0x18);
          piVar18 = piVar21;
        } while (piVar21 != (int *)(iVar15 + (iVar10 + iVar12) * 4));
      }
      iVar12 = (int)local_5c >> 7;
      iVar10 = (int)local_58 >> 7;
    }
    if (iVar11 != 0) {
      iVar8 = iVar8 >> 7;
      local_74 = local_74 >> 7;
      local_70 = local_70 >> 7;
      local_6c = local_6c >> 7;
      local_68 = local_68 >> 7;
      local_64 = local_64 >> 7;
    }
    if (local_38 != (int *)0x0) {
      *local_38 = iVar12;
      *(int *)(this + 0x33360) = *(int *)(this + 0x33360) + 4;
    }
    if (*(int **)pCVar14 != (int *)0x0) {
      **(int **)pCVar14 = iVar10;
      *(int *)pCVar14 = *(int *)pCVar14 + 4;
    }
    if (iVar11 != 0) {
      if (*(int **)(this + 0x33368) != (int *)0x0) {
        **(int **)(this + 0x33368) = local_74;
        *(int *)(this + 0x33368) = *(int *)(this + 0x33368) + 4;
      }
      if (*(int **)(this + 0x3336c) != (int *)0x0) {
        **(int **)(this + 0x3336c) = local_70;
        *(int *)(this + 0x3336c) = *(int *)(this + 0x3336c) + 4;
      }
      if (*(int **)(this + 0x33370) != (int *)0x0) {
        **(int **)(this + 0x33370) = local_6c;
        *(int *)(this + 0x33370) = *(int *)(this + 0x33370) + 4;
      }
      if (*(int **)(this + 0x33374) != (int *)0x0) {
        **(int **)(this + 0x33374) = local_68;
        *(int *)(this + 0x33374) = *(int *)(this + 0x33374) + 4;
      }
      if (*(int **)(this + 0x33378) != (int *)0x0) {
        **(int **)(this + 0x33378) = local_64;
        *(int *)(this + 0x33378) = *(int *)(this + 0x33378) + 4;
      }
      if (*(int **)(this + 0x3337c) != (int *)0x0) {
        **(int **)(this + 0x3337c) = iVar8;
        *(int *)(this + 0x3337c) = *(int *)(this + 0x3337c) + 4;
      }
    }
    iVar12 = *(int *)(this + 0x10) + *(int *)pCVar7;
    *(int *)pCVar7 = iVar12;
    uVar13 = *(undefined4 *)(this + 0x14);
    iVar11 = __udivsi3(iVar12,uVar13);
    pCVar19 = (CSrc *)(iVar11 + *(int *)pCVar9);
    if (pCVar19 < (CSrc *)0x9c0) {
      *(CSrc **)pCVar9 = pCVar19;
      iVar11 = extraout_r2;
    }
    else {
      iVar11 = ((uint)pCVar19 >> 6) * 0x6906908;
      pCVar19 = pCVar19 + (((uint)pCVar19 >> 6) / 0x27) * -0x9c0;
      *(CSrc **)pCVar9 = pCVar19;
    }
    local_40 = local_40 + 1;
    __aeabi_uidivmod(iVar12,uVar13,iVar11);
    *(int *)pCVar7 = extraout_r1;
    if (local_40 == param_1) {
      return;
    }
    local_38 = *(int **)(this + 0x33360);
    iVar11 = *(int *)this;
    iVar12 = extraout_r1;
  } while( true );
}

