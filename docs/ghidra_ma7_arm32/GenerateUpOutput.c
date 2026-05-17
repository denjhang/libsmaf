/* GenerateUpOutput @ 00049b30 1302B */


/* ARM::CSrc::GenerateUpOutput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::GenerateUpOutput(CSrc *this,uint param_1,_genbuf *param_2)

{
  CSrc *pCVar1;
  CSrc *pCVar2;
  int iVar3;
  int extraout_r1;
  CSrc *pCVar4;
  int iVar5;
  uint uVar6;
  int extraout_r2;
  CSrc *pCVar7;
  CSrc *pCVar8;
  int *piVar9;
  int iVar10;
  CSrc *pCVar11;
  int iVar12;
  CSrc *pCVar13;
  int iVar14;
  CSrc *pCVar15;
  undefined4 uVar16;
  CSrc *pCVar17;
  CSrc *pCVar18;
  CSrc *pCVar19;
  int iVar20;
  CSrc *pCVar21;
  int iVar22;
  int iVar23;
  CSrc *pCVar24;
  CSrc *pCVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  uint local_c4;
  int local_c0;
  int *local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_6c;
  int *local_38;
  
  if (param_2 == (_genbuf *)0x0) {
    *(undefined4 *)(this + 0x1fb2c) = 0;
    *(undefined4 *)(this + 0x1fb30) = 0;
    *(undefined4 *)(this + 0x1fb34) = 0;
    *(undefined4 *)(this + 0x1fb38) = 0;
    *(undefined4 *)(this + 0x1fb3c) = 0;
    *(undefined4 *)(this + 0x1fb40) = 0;
    *(undefined4 *)(this + 0x1fb44) = 0;
    *(undefined4 *)(this + 0x1fb48) = 0;
    *(undefined4 *)(this + 0x1fb4c) = 0;
    *(undefined4 *)(this + 0x1fb50) = 0;
    *(undefined4 *)(this + 0x1fb54) = 0;
    *(undefined4 *)(this + 0x1fb58) = 0;
    *(undefined4 *)(this + 0x1fb5c) = 0;
    local_38 = (int *)0x0;
  }
  else {
    local_38 = *(int **)param_2;
    *(int **)(this + 0x1fb2c) = local_38;
    *(undefined4 *)(this + 0x1fb30) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x1fb34) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(this + 0x1fb38) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(this + 0x1fb3c) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(this + 0x1fb40) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(this + 0x1fb44) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(this + 0x1fb48) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(this + 0x1fb4c) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(this + 0x1fb50) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(this + 0x1fb54) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(this + 0x1fb58) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(this + 0x1fb5c) = *(undefined4 *)(param_2 + 0x30);
  }
  if (param_1 == 0) {
    return;
  }
  pCVar17 = this + 0x1fb30;
  pCVar1 = this + 0x1fb3c;
  pCVar7 = this + 0x1fb40;
  pCVar11 = this + 0x1fb44;
  pCVar4 = this + 0x1fb48;
  pCVar24 = this + 0x1fb34;
  pCVar18 = this + 0x1fb4c;
  pCVar21 = this + 0x1fb38;
  pCVar13 = this + 0x1fb5c;
  pCVar15 = this + 0x3338c;
  local_c4 = *(uint *)(this + 0x33388);
  pCVar19 = this + 0x1fb54;
  pCVar25 = this + 0x1fb58;
  pCVar8 = this + 0x1fb50;
  pCVar2 = this + 0x33388;
  local_6c = 0;
  iVar5 = *(int *)(this + 0x18);
  iVar3 = iVar5 * *(int *)(this + 0x3338c);
  if (iVar5 == 0) goto LAB_00049fe8;
  do {
    local_c0 = 0;
    local_8c = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_bc = (int *)(*(int *)(this + 0x20) + iVar3 * 4);
    do {
      piVar9 = local_bc + 1;
      iVar27 = *local_bc;
      local_b4 = local_b4 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x272c)) >> 8 |
                 (int)((ulonglong)
                       ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x272c)) >> 0x20
                      ) << 0x18);
      iVar12 = local_c4 * 4;
      local_b0 = local_b0 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x4e2c)) >> 8 |
                 (int)((ulonglong)
                       ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x4e2c)) >> 0x20
                      ) << 0x18);
      iVar10 = local_c4 * 4;
      local_ac = local_ac +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x752c)) >> 8 |
                 (int)((ulonglong)
                       ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x752c)) >> 0x20
                      ) << 0x18);
      local_a8 = local_a8 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x9c2c)) >> 8 |
                 (int)((ulonglong)
                       ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x9c2c)) >> 0x20
                      ) << 0x18);
      iVar14 = local_c4 * 4;
      local_a4 = local_a4 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0xc32c)) >> 8 |
                 (int)((ulonglong)
                       ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0xc32c)) >> 0x20
                      ) << 0x18);
      local_a0 = local_a0 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0xea2c)) >> 8 |
                 (int)((ulonglong)
                       ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0xea2c)) >> 0x20
                      ) << 0x18);
      local_9c = local_9c +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x1112c)) >> 8
                 | (int)((ulonglong)
                         ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x1112c)) >>
                        0x20) << 0x18);
      local_98 = local_98 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x1382c)) >> 8
                 | (int)((ulonglong)
                         ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x1382c)) >>
                        0x20) << 0x18);
      local_94 = local_94 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x15f2c)) >> 8
                 | (int)((ulonglong)
                         ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x15f2c)) >>
                        0x20) << 0x18);
      local_90 = local_90 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x1862c)) >> 8
                 | (int)((ulonglong)
                         ((longlong)iVar27 * (longlong)*(int *)(this + local_c4 * 4 + 0x1862c)) >>
                        0x20) << 0x18);
      uVar6 = local_c4 - 1;
      bVar29 = local_c4 != 0;
      local_c4 = 0x9bf;
      if (bVar29) {
        local_c4 = uVar6;
      }
      local_8c = local_8c +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + iVar12 + 0x1ad2c)) >> 8 |
                 (int)((ulonglong)((longlong)iVar27 * (longlong)*(int *)(this + iVar12 + 0x1ad2c))
                      >> 0x20) << 0x18);
      local_c0 = local_c0 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + iVar14 + 0x1d42c)) >> 8 |
                 (int)((ulonglong)((longlong)iVar27 * (longlong)*(int *)(this + iVar14 + 0x1d42c))
                      >> 0x20) << 0x18);
      local_b8 = local_b8 +
                 ((uint)((longlong)iVar27 * (longlong)*(int *)(this + iVar10 + 0x2c)) >> 8 |
                 (int)((ulonglong)((longlong)iVar27 * (longlong)*(int *)(this + iVar10 + 0x2c)) >>
                      0x20) << 0x18);
      local_bc = piVar9;
    } while (piVar9 != (int *)(*(int *)(this + 0x20) + (iVar3 + iVar5) * 4));
    local_ac = local_ac >> 7;
    iVar3 = local_b0 >> 7;
    iVar5 = local_b4 >> 7;
    iVar10 = local_b8 >> 7;
    iVar12 = local_a8 >> 7;
    iVar14 = local_a4 >> 7;
    iVar27 = local_a0 >> 7;
    iVar20 = local_94 >> 7;
    iVar22 = local_90 >> 7;
    iVar23 = local_8c >> 7;
    iVar26 = local_c0 >> 7;
    iVar28 = local_98 >> 7;
    local_c4 = local_9c >> 7;
    while( true ) {
      if (local_38 != (int *)0x0) {
        *local_38 = iVar10;
        *(int *)(this + 0x1fb2c) = *(int *)(this + 0x1fb2c) + 4;
      }
      if (*(int **)pCVar17 != (int *)0x0) {
        **(int **)pCVar17 = iVar5;
        *(int *)pCVar17 = *(int *)pCVar17 + 4;
      }
      if (*(int **)pCVar24 != (int *)0x0) {
        **(int **)pCVar24 = iVar3;
        *(int *)pCVar24 = *(int *)pCVar24 + 4;
      }
      if (*(int **)pCVar21 != (int *)0x0) {
        **(int **)pCVar21 = local_ac;
        *(int *)pCVar21 = *(int *)pCVar21 + 4;
      }
      if (*(int **)pCVar1 != (int *)0x0) {
        **(int **)pCVar1 = iVar12;
        *(int *)pCVar1 = *(int *)pCVar1 + 4;
      }
      if (*(int **)pCVar7 != (int *)0x0) {
        **(int **)pCVar7 = iVar14;
        *(int *)pCVar7 = *(int *)pCVar7 + 4;
      }
      if (*(int **)pCVar11 != (int *)0x0) {
        **(int **)pCVar11 = iVar27;
        *(int *)pCVar11 = *(int *)pCVar11 + 4;
      }
      if (*(int **)pCVar4 != (int *)0x0) {
        **(int **)pCVar4 = local_c4;
        *(int *)pCVar4 = *(int *)pCVar4 + 4;
      }
      if (*(int **)pCVar18 != (int *)0x0) {
        **(int **)pCVar18 = iVar28;
        *(int *)pCVar18 = *(int *)pCVar18 + 4;
      }
      if (*(int **)pCVar8 != (int *)0x0) {
        **(int **)pCVar8 = iVar20;
        *(int *)pCVar8 = *(int *)pCVar8 + 4;
      }
      if (*(int **)pCVar19 != (int *)0x0) {
        **(int **)pCVar19 = iVar22;
        *(int *)pCVar19 = *(int *)pCVar19 + 4;
      }
      if (*(int **)pCVar25 != (int *)0x0) {
        **(int **)pCVar25 = iVar23;
        *(int *)pCVar25 = *(int *)pCVar25 + 4;
      }
      if (*(int **)pCVar13 != (int *)0x0) {
        **(int **)pCVar13 = iVar26;
        *(int *)pCVar13 = *(int *)pCVar13 + 4;
      }
      iVar5 = *(int *)(this + 8) + *(int *)pCVar15;
      *(int *)pCVar15 = iVar5;
      uVar16 = *(undefined4 *)(this + 0xc);
      iVar3 = __udivsi3(iVar5,uVar16);
      local_6c = local_6c + 1;
      local_c4 = iVar3 + *(int *)pCVar2;
      if (local_c4 < 0x9c0) {
        *(uint *)pCVar2 = local_c4;
        iVar3 = extraout_r2;
      }
      else {
        iVar3 = (local_c4 >> 6) * 0x6906908;
        local_c4 = local_c4 + ((local_c4 >> 6) / 0x27) * -0x9c0;
        *(uint *)pCVar2 = local_c4;
      }
      __aeabi_uidivmod(iVar5,uVar16,iVar3);
      *(int *)pCVar15 = extraout_r1;
      if (local_6c == param_1) {
        return;
      }
      local_38 = *(int **)(this + 0x1fb2c);
      iVar5 = *(int *)(this + 0x18);
      iVar3 = iVar5 * extraout_r1;
      if (iVar5 != 0) break;
LAB_00049fe8:
      local_ac = 0;
      iVar3 = local_ac;
      iVar5 = local_ac;
      iVar10 = local_ac;
      iVar12 = local_ac;
      iVar14 = local_ac;
      iVar27 = local_ac;
      iVar20 = local_ac;
      iVar22 = local_ac;
      iVar23 = local_ac;
      iVar26 = local_ac;
      iVar28 = local_ac;
      local_c4 = local_ac;
    }
  } while( true );
}

