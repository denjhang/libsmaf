/* ProcDsp2 @ 0006145c 21440B */


/* ARM::CDsp2::ProcDsp2() */

void __thiscall ARM::CDsp2::ProcDsp2(CDsp2 *this)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  short sVar5;
  ushort uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  ushort uVar12;
  uint unaff_r4;
  CDsp2 *pCVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  CDsp2 *pCVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  int iVar49;
  undefined4 uVar50;
  uint uVar51;
  CDsp2 *pCVar52;
  uint uVar53;
  uint uVar54;
  int iVar55;
  int iVar56;
  uint uVar57;
  bool bVar58;
  uint local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  uint local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  uint local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_80;
  int local_7c;
  int local_70;
  int local_5c;
  CDsp2 *local_50;
  int local_4c;
  int local_34;
  ushort uVar7;
  
  if (*(int *)(this + 0x10) == 0) {
    return;
  }
  if (*(int *)(this + 8) == 0) {
    return;
  }
  pCVar28 = this + 0x9a70;
  iVar8 = *(int *)(this + 0x9a70);
  iVar19 = iVar8 + 1;
  if (iVar19 == 0x20) {
    iVar19 = 0;
  }
  uVar47 = iVar19 - 1;
  *(int *)(this + 0x9a70) = iVar19;
  if ((int)uVar47 < 0) {
    uVar47 = iVar19 + 0x1f;
  }
  if (0x1f < uVar47) {
    unaff_r4 = uVar47 & 0x1f;
  }
  if (uVar47 < 0x20) {
    unaff_r4 = uVar47;
  }
  *(uint *)(this + 0x9a74) = unaff_r4;
  iVar10 = *(int *)pCVar28;
  pCVar52 = this + 0x9a74;
  iVar19 = 2;
  while( true ) {
    pCVar13 = (CDsp2 *)(iVar10 - iVar19);
    if ((int)pCVar13 < 0) {
      pCVar13 = pCVar13 + 0x20;
    }
    if ((CDsp2 *)0x1f < pCVar13) {
      pCVar13 = (CDsp2 *)((uint)pCVar13 & 0x1f);
    }
    *(CDsp2 **)(pCVar52 + 4) = pCVar13;
    if (iVar19 + 1 == 0x18) break;
    uVar47 = *(int *)pCVar28 - (iVar19 + 1);
    if ((int)uVar47 < 0) {
      uVar47 = uVar47 + 0x20;
    }
    if (0x1f < uVar47) {
      uVar47 = uVar47 & 0x1f;
    }
    *(uint *)(pCVar52 + 8) = uVar47;
    uVar47 = *(int *)pCVar28 - (iVar19 + 2);
    if ((int)uVar47 < 0) {
      uVar47 = uVar47 + 0x20;
    }
    if (0x1f < uVar47) {
      uVar47 = uVar47 & 0x1f;
    }
    *(uint *)(pCVar52 + 0xc) = uVar47;
    uVar47 = *(int *)pCVar28 - (iVar19 + 3);
    if ((int)uVar47 < 0) {
      uVar47 = uVar47 + 0x20;
    }
    if (0x1f < uVar47) {
      uVar47 = uVar47 & 0x1f;
    }
    *(uint *)(pCVar52 + 0x10) = uVar47;
    uVar47 = *(int *)pCVar28 - (iVar19 + 4);
    if ((int)uVar47 < 0) {
      uVar47 = uVar47 + 0x20;
    }
    if (0x1f < uVar47) {
      uVar47 = uVar47 & 0x1f;
    }
    *(uint *)(pCVar52 + 0x14) = uVar47;
    uVar47 = *(int *)pCVar28 - (iVar19 + 5);
    if ((int)uVar47 < 0) {
      uVar47 = uVar47 + 0x20;
    }
    if (0x1f < uVar47) {
      uVar47 = uVar47 & 0x1f;
    }
    *(uint *)(pCVar52 + 0x18) = uVar47;
    uVar47 = *(int *)pCVar28 - (iVar19 + 6);
    if ((int)uVar47 < 0) {
      uVar47 = uVar47 + 0x20;
    }
    if (0x1f < uVar47) {
      uVar47 = uVar47 & 0x1f;
    }
    *(uint *)(pCVar52 + 0x1c) = uVar47;
    iVar10 = *(int *)pCVar28;
    pCVar52 = pCVar52 + 0x1c;
    iVar19 = iVar19 + 7;
  }
  pCVar28 = this + 0x7400;
  iVar19 = *(int *)(this + 0x742c) + 1;
  bVar58 = iVar19 != 0x8000;
  if (bVar58) {
    *(int *)(this + 0x742c) = iVar19;
    pCVar28 = pCVar13;
  }
  else {
    iVar19 = 0;
  }
  if (!bVar58) {
    *(int *)(pCVar28 + 0x2c) = iVar19;
  }
  iVar19 = *(int *)(this + 0x9a2c);
  uVar47 = iVar19 + 1;
  *(uint *)(this + 0x9a2c) = uVar47;
  if (iVar19 == -2) {
    *(undefined4 *)(this + 0x9a2c) = 0;
LAB_00061bbc:
    iVar19 = *(int *)(this + 0x9a28) + 1;
    if (iVar19 == 0x8000) {
      iVar19 = 0;
    }
    *(int *)(this + 0x9a28) = iVar19;
  }
  else if (uVar47 == (uVar47 / 3) * 3) goto LAB_00061bbc;
  iVar10 = *(int *)this;
  piVar11 = *(int **)(&DAT_003bf6f8 + iVar10);
  iVar19 = *(int *)(&DAT_003bf6fc + iVar10);
  if (piVar11 == (int *)0x0) {
    *(undefined4 *)(this + 0x9a34) = 0;
    *(undefined4 *)(this + 0x9a38) = 0;
    *(undefined4 *)(this + 0x9a3c) = 0;
    *(undefined4 *)(this + 0x9a40) = 0;
    *(undefined4 *)(this + 0x9a44) = 0;
    *(undefined4 *)(this + 0x9a48) = 0;
    *(undefined4 *)(this + 0x9a4c) = 0;
    *(undefined4 *)(this + 0x9a50) = 0;
    *(undefined4 *)(this + 0x9a54) = 0;
    *(undefined4 *)(this + 0x9a58) = 0;
    *(undefined4 *)(this + 0x9a5c) = 0;
    iVar29 = 0;
    iVar14 = 0;
    local_b8 = 0;
    local_90 = 0;
    local_80 = 0;
    local_7c = 0;
    local_70 = 0;
    local_5c = 0;
    local_4c = 0;
  }
  else {
    iVar29 = 0;
    if (piVar11[0xb] != 0) {
      iVar29 = *(int *)(piVar11[0xb] + iVar19 * 4) << 8;
    }
    *(int *)(this + 0x9a34) = iVar29;
    iVar29 = 0;
    if (piVar11[0xc] != 0) {
      iVar29 = *(int *)(piVar11[0xc] + iVar19 * 4) << 8;
    }
    *(int *)(this + 0x9a38) = iVar29;
    if (*piVar11 == 0) {
      iVar29 = 0;
      local_80 = 0;
    }
    else {
      local_80 = *(int *)(*piVar11 + iVar19 * 4);
      iVar29 = local_80 << 8;
      local_80 = local_80 << 0xb;
    }
    *(int *)(this + 0x9a3c) = iVar29;
    if (piVar11[1] == 0) {
      iVar29 = 0;
      local_70 = 0;
    }
    else {
      local_70 = *(int *)(piVar11[1] + iVar19 * 4);
      iVar29 = local_70 << 8;
      local_70 = local_70 << 0xb;
    }
    *(int *)(this + 0x9a40) = iVar29;
    if (piVar11[2] == 0) {
      local_b8 = 0;
    }
    else {
      local_b8 = *(int *)(piVar11[2] + iVar19 * 4) << 8;
    }
    *(uint *)(this + 0x9a44) = local_b8;
    iVar29 = 0;
    if (piVar11[3] != 0) {
      iVar29 = *(int *)(piVar11[3] + iVar19 * 4) << 8;
    }
    *(int *)(this + 0x9a48) = iVar29;
    iVar14 = 0;
    if (piVar11[4] != 0) {
      iVar14 = *(int *)(piVar11[4] + iVar19 * 4) << 8;
    }
    *(int *)(this + 0x9a4c) = iVar14;
    if (piVar11[5] == 0) {
      iVar20 = 0;
      local_90 = 0;
    }
    else {
      local_90 = *(int *)(piVar11[5] + iVar19 * 4);
      iVar20 = local_90 << 8;
      local_90 = local_90 << 0xb;
    }
    *(int *)(this + 0x9a50) = iVar20;
    if (piVar11[6] == 0) {
      iVar20 = 0;
      local_7c = 0;
    }
    else {
      local_7c = *(int *)(piVar11[6] + iVar19 * 4);
      iVar20 = local_7c << 8;
      local_7c = local_7c << 0xb;
    }
    *(int *)(this + 0x9a54) = iVar20;
    if (piVar11[7] == 0) {
      iVar20 = 0;
      local_5c = 0;
    }
    else {
      local_5c = *(int *)(piVar11[7] + iVar19 * 4);
      iVar20 = local_5c << 8;
      local_5c = local_5c << 0xb;
    }
    *(int *)(this + 0x9a58) = iVar20;
    if (piVar11[8] == 0) {
      *(undefined4 *)(this + 0x9a5c) = 0;
      local_4c = 0;
    }
    else {
      iVar19 = *(int *)(piVar11[8] + iVar19 * 4);
      local_4c = iVar19 << 0xb;
      *(int *)(this + 0x9a5c) = iVar19 << 8;
    }
  }
  iVar19 = *(int *)(this + 0x9a70);
  pCVar28 = this + 0x1e20;
  *(undefined4 *)(this + iVar19 * 4 + 0xa750) = 0;
  *(undefined4 *)(this + iVar19 * 4 + 0xa7d0) = 0;
  *(undefined4 *)(this + iVar19 * 4 + 0xa2d0) = 0;
  *(undefined4 *)(this + iVar19 * 4 + 0xa350) = 0;
  *(undefined4 *)(this + iVar19 * 4 + 0xa3d0) = 0;
  *(undefined4 *)(this + iVar19 * 4 + 0xa450) = 0;
  *(undefined4 *)(this + iVar19 * 4 + 0xa850) = 0;
  *(undefined4 *)(this + iVar19 * 4 + 0xa8d0) = 0;
  iVar20 = *(int *)(this + 0x1e3c);
  if (iVar20 == 0) {
    *(int *)(this + iVar19 * 4 + 0x9ad0) =
         (int)((ulonglong)((longlong)(*(int *)(this + 0x366c) << 0xe) * (longlong)(iVar29 << 3)) >>
              0x20);
    uVar47 = (uint)((ulonglong)
                    ((longlong)(*(int *)(this + 0x3670) << 0xe) * (longlong)(iVar14 << 3)) >> 0x20);
    *(uint *)(this + iVar19 * 4 + 0x9b50) = uVar47;
    iVar29 = *(int *)(this + 0x1e48);
    if (iVar29 == 0) {
      iVar29 = *(int *)(this + 0x9a78);
      iVar14 = *(int *)(this + 0x9a74);
      iVar9 = (int)((ulonglong)((longlong)(*(int *)(this + 0x4338) << 0xe) * -0x40000) >> 0x20) -
              (int)((ulonglong)
                    ((longlong)(*(int *)(this + 0x433c) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac2d0) << 3)) >> 0x20);
      if (iVar9 < 0x800000) {
        if (iVar9 < -0x800000) {
          iVar9 = iVar9 + 0x1000000;
        }
      }
      else {
        iVar9 = iVar9 + -0x1000000;
      }
      *(int *)(this + iVar19 * 4 + 0x2ac2d0) = iVar9;
      iVar15 = *(int *)(this + iVar14 * 4 + 0x2ac2d0);
      iVar9 = (int)((ulonglong)((longlong)(*(int *)(this + 0x4340) << 0xe) * -0x4000000) >> 0x20) +
              iVar15;
      if (iVar9 < 0x800000) {
        if (iVar9 < -0x800000) {
          iVar9 = iVar9 + 0x1000000;
        }
      }
      else {
        iVar9 = iVar9 + -0x1000000;
      }
      *(int *)(this + iVar19 * 4 + 0x2ac350) = iVar9;
      uVar47 = (int)((ulonglong)((longlong)(*(int *)(this + 0x4344) << 0xe) * -0x4000000) >> 0x20) +
               iVar15;
      if ((int)uVar47 < 0x800000) {
        if ((int)uVar47 < -0x800000) {
          uVar47 = uVar47 + 0x1000000;
        }
      }
      else {
        uVar47 = uVar47 - 0x1000000;
      }
      *(uint *)(this + iVar19 * 4 + 0x2ac3d0) = uVar47;
      uVar54 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4348) << 0xe) * (longlong)(iVar15 << 3)) >> 0x20
                     );
      if ((int)uVar54 < 0x800000) {
        if ((int)uVar54 < -0x800000) {
          uVar54 = uVar54 + 0x1000000;
        }
      }
      else {
        uVar54 = uVar54 - 0x1000000;
      }
      iVar15 = (uVar54 ^ (int)uVar54 >> 0x1f) - ((int)uVar54 >> 0x1f);
      *(int *)(this + iVar19 * 4 + 0x2ac450) = iVar15;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      iVar9 = (int)((ulonglong)((longlong)(*(int *)(this + 0x434c) << 0xe) * (longlong)(iVar9 << 3))
                   >> 0x20);
      if (iVar9 < -0x800000) {
        iVar9 = -0x800000;
      }
      if (0x7ffffe < iVar9) {
        iVar9 = 0x7fffff;
      }
      *(int *)(this + iVar19 * 4 + 0x2ac4d0) = iVar9;
      iVar21 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4350) << 0xe) *
                     (longlong)(int)(((uVar47 ^ (int)uVar47 >> 0x1f) - ((int)uVar47 >> 0x1f)) * 8))
                    >> 0x20);
      iVar16 = -0x800000;
      if (-0x800001 < iVar21) {
        iVar16 = iVar21;
      }
      iVar21 = 0x7fffff;
      if (iVar16 < 0x7fffff) {
        iVar21 = iVar16;
      }
      *(int *)(this + iVar19 * 4 + 0x2ac550) = iVar21;
      iVar16 = *(int *)(this + 0x9838);
      uVar57 = *(int *)(this + 0x9834) + iVar15;
      iVar22 = *(int *)(this + 0x983c);
      iVar15 = *(int *)(this + 0x9840);
      uVar47 = iVar16 + iVar21 >> 0xb;
      uVar54 = (int)uVar57 >> 0xb;
      uVar23 = iVar22 + iVar9 >> 0xb;
      uVar51 = iVar21 + iVar15 >> 0xb;
      if (iVar22 < 0) {
        uVar23 = uVar23 + *(ushort *)(this + 0x2ecad0);
        uVar51 = uVar51 + *(ushort *)(this + 0x2ecad0);
      }
      local_a0 = uVar51 & 0xffff;
      iVar30 = *(int *)(this + 0x742c);
      iVar31 = (int)(short)((short)uVar54 + 2);
      if (iVar31 < 0) {
        uVar51 = (uint)*(ushort *)pCVar28;
        uVar54 = (uVar54 & 0xffff) + uVar51 + 2;
        while( true ) {
          uVar46 = (uVar54 & 0xffff) + uVar51;
          sVar5 = (short)uVar54;
          uVar24 = (uVar46 & 0xffff) + uVar51;
          if ((uVar54 & 0x8000) == 0) break;
          uVar54 = (uVar24 & 0xffff) + uVar51;
          sVar5 = (short)uVar46;
          if ((uVar46 & 0x8000) == 0) break;
          uVar46 = (uVar54 & 0xffff) + uVar51;
          sVar5 = (short)uVar24;
          uVar45 = (uVar46 & 0xffff) + uVar51;
          if ((uVar24 & 0x8000) == 0) break;
          sVar5 = (short)uVar54;
          uVar24 = (uVar45 & 0xffff) + uVar51;
          if ((uVar54 & 0x8000) == 0) break;
          sVar5 = (short)uVar46;
          uVar25 = (uVar24 & 0xffff) + uVar51;
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar45;
          uVar54 = (uVar25 & 0xffff) + uVar51;
          if ((((uVar45 & 0x8000) == 0) || (sVar5 = (short)uVar24, (uVar24 & 0x8000) == 0)) ||
             (sVar5 = (short)uVar25, -1 < (int)(uVar25 * 0x10000))) break;
        }
        iVar31 = (int)sVar5;
      }
      uVar54 = iVar30 - iVar31;
      if ((int)uVar54 < 0) {
        uVar54 = uVar54 + 0x8000;
      }
      iVar31 = (int)(short)((short)uVar47 + 2);
      if (0x7fff < uVar54) {
        uVar54 = uVar54 & 0x7fff;
      }
      iVar32 = uVar54 - 1;
      if (iVar32 == -1) {
        iVar32 = 0x7fff;
      }
      if (iVar31 < 0) {
        uVar51 = (uint)*(ushort *)pCVar28;
        uVar47 = (uVar47 & 0xffff) + uVar51 + 2;
        while( true ) {
          uVar24 = (uVar47 & 0xffff) + uVar51;
          sVar5 = (short)uVar47;
          uVar46 = (uVar24 & 0xffff) + uVar51;
          if ((uVar47 & 0x8000) == 0) break;
          uVar47 = (uVar46 & 0xffff) + uVar51;
          sVar5 = (short)uVar24;
          if ((uVar24 & 0x8000) == 0) break;
          uVar45 = (uVar47 & 0xffff) + uVar51;
          sVar5 = (short)uVar46;
          uVar24 = (uVar45 & 0xffff) + uVar51;
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar47;
          uVar46 = (uVar24 & 0xffff) + uVar51;
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar45;
          uVar25 = (uVar46 & 0xffff) + uVar51;
          if ((uVar45 & 0x8000) == 0) break;
          sVar5 = (short)uVar24;
          uVar47 = (uVar25 & 0xffff) + uVar51;
          if ((((uVar24 & 0x8000) == 0) || (sVar5 = (short)uVar46, (uVar46 & 0x8000) == 0)) ||
             (sVar5 = (short)uVar25, -1 < (int)(uVar25 * 0x10000))) break;
        }
        iVar31 = (int)sVar5;
      }
      uVar47 = (uVar23 & 0xffff) + 2;
      uVar23 = iVar30 - iVar31;
      if ((int)uVar23 < 0) {
        uVar23 = uVar23 + 0x8000;
      }
      if (0x7fff < uVar23) {
        uVar23 = uVar23 & 0x7fff;
      }
      iVar31 = uVar23 - 1;
      if (iVar31 == -1) {
        iVar31 = 0x7fff;
      }
      iVar33 = (int)(short)uVar47;
      if (iVar33 < 0) {
        uVar51 = (uint)*(ushort *)pCVar28;
        while( true ) {
          uVar47 = (uVar47 & 0xffff) + uVar51;
          sVar5 = (short)uVar47;
          uVar24 = uVar51 + (uVar47 & 0xffff);
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar24;
          uVar47 = uVar51 + (uVar24 & 0xffff);
          if ((uVar24 & 0x8000) == 0) break;
          sVar5 = (short)uVar47;
          uVar24 = uVar51 + (uVar47 & 0xffff);
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar24;
          uVar47 = uVar51 + (uVar24 & 0xffff);
          if ((uVar24 & 0x8000) == 0) break;
          sVar5 = (short)uVar47;
          uVar24 = uVar51 + (uVar47 & 0xffff);
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar24;
          uVar46 = uVar51 + (uVar24 & 0xffff);
          if ((uVar24 & 0x8000) == 0) break;
          sVar5 = (short)uVar46;
          uVar47 = uVar51 + (uVar46 & 0xffff);
          if (((uVar46 & 0x8000) == 0) || (sVar5 = (short)uVar47, -1 < (int)(uVar47 * 0x10000)))
          break;
        }
        iVar33 = (int)sVar5;
      }
      uVar51 = iVar30 - iVar33;
      uVar47 = local_a0 + 2;
      if ((int)uVar51 < 0) {
        uVar51 = uVar51 + 0x8000;
      }
      if (0x7fff < uVar51) {
        uVar51 = uVar51 & 0x7fff;
      }
      iVar33 = uVar51 - 1;
      iVar34 = (int)(short)uVar47;
      if (iVar33 == -1) {
        iVar33 = 0x7fff;
      }
      if (iVar34 < 0) {
        uVar24 = (uint)*(ushort *)pCVar28;
        while( true ) {
          uVar47 = (uVar47 & 0xffff) + uVar24;
          sVar5 = (short)uVar47;
          uVar46 = uVar24 + (uVar47 & 0xffff);
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar46;
          uVar47 = uVar24 + (uVar46 & 0xffff);
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar47;
          uVar46 = uVar24 + (uVar47 & 0xffff);
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar46;
          uVar47 = uVar24 + (uVar46 & 0xffff);
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar47;
          uVar46 = uVar24 + (uVar47 & 0xffff);
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar46;
          uVar45 = uVar24 + (uVar46 & 0xffff);
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar45;
          uVar47 = uVar24 + (uVar45 & 0xffff);
          if (((uVar45 & 0x8000) == 0) || (sVar5 = (short)uVar47, -1 < (int)(uVar47 * 0x10000)))
          break;
        }
        iVar34 = (int)sVar5;
      }
      uVar47 = iVar30 - iVar34;
      if ((int)uVar47 < 0) {
        uVar47 = uVar47 + 0x8000;
      }
      if (0x7fff < uVar47) {
        uVar47 = uVar47 & 0x7fff;
      }
      iVar34 = uVar47 - 1;
      if (iVar34 == -1) {
        iVar34 = 0x7fff;
      }
      iVar36 = (int)((longlong)(*(int *)(this + 0x435c) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac5d0) << 3) +
                     ((longlong)(*(int *)(this + 0x4358) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x9ad0) << 3) +
                      ((longlong)(*(int *)(this + 0x4354) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U)
                     & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac5d0) = iVar36;
      iVar35 = (int)((longlong)(*(int *)(this + 0x4368) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac650) << 3) +
                     ((longlong)(*(int *)(this + 0x4364) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x9b50) << 3) +
                      ((longlong)(*(int *)(this + 0x4360) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x9b50) << 3) & 0xffffffff00000000U)
                     & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac650) = iVar35;
      *(int *)(this + iVar19 * 4 + 0x2ac6d0) =
           (int)((longlong)(*(int *)(this + 0x437c) << 0xe) *
                 (longlong)(*(int *)(this + iVar29 * 4 + 0x2ac6d0) << 3) +
                 ((longlong)(*(int *)(this + 0x4378) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac6d0) << 3) +
                  ((longlong)(*(int *)(this + 0x4374) << 0xe) *
                   (longlong)(*(int *)(this + iVar29 * 4 + 0x2ac5d0) << 3) +
                   ((longlong)(*(int *)(this + 0x4370) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac5d0) << 3) +
                    ((longlong)(*(int *)(this + 0x436c) << 0xe) * (longlong)(iVar36 << 3) &
                    0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac750) =
           (int)((longlong)(*(int *)(this + 0x4390) << 0xe) *
                 (longlong)(*(int *)(this + iVar29 * 4 + 0x2ac750) << 3) +
                 ((longlong)(*(int *)(this + 0x438c) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac750) << 3) +
                  ((longlong)(*(int *)(this + 0x4388) << 0xe) *
                   (longlong)(*(int *)(this + iVar29 * 4 + 0x2ac650) << 3) +
                   ((longlong)(*(int *)(this + 0x4384) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac650) << 3) +
                    ((longlong)(*(int *)(this + 0x4380) << 0xe) * (longlong)(iVar35 << 3) &
                    0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                 0xffffffff00000000) >> 0x20);
      iVar35 = (int)((longlong)(*(int *)(this + 0x439c) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac7d0) << 3) +
                     ((longlong)(*(int *)(this + 0x4398) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x2ac6d0) << 3) +
                      ((longlong)(*(int *)(this + 0x4394) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac6d0) << 3) & 0xffffffff00000000U
                      ) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac7d0) = iVar35;
      iVar36 = (int)((longlong)(*(int *)(this + 0x43a8) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac850) << 3) +
                     ((longlong)(*(int *)(this + 0x43a4) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x2ac750) << 3) +
                      ((longlong)(*(int *)(this + 0x43a0) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac750) << 3) & 0xffffffff00000000U
                      ) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac850) = iVar36;
      iVar29 = (uVar57 & 0x7ff) << 0x12;
      iVar32 = (int)((longlong)iVar29 * (longlong)(*(int *)(this + (iVar32 + 0xab2b4) * 4) << 3) +
                     ((ulonglong)
                      (uint)(*(int *)(this + (uVar54 + 0xab2b4) * 4) -
                            (int)((ulonglong)
                                  ((longlong)iVar29 *
                                  (longlong)(*(int *)(this + (uVar54 + 0xab2b4) * 4) << 3)) >> 0x20)
                            ) << 0x20) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac8d0) = iVar32;
      iVar29 = (iVar16 + iVar21 & 0x7ffU) << 0x12;
      iVar14 = (int)((longlong)iVar29 * (longlong)(*(int *)(this + (iVar31 + 0xab2b4) * 4) << 3) +
                     ((ulonglong)
                      (uint)(*(int *)(this + (uVar23 + 0xab2b4) * 4) -
                            (int)((ulonglong)
                                  ((longlong)iVar29 *
                                  (longlong)(*(int *)(this + (uVar23 + 0xab2b4) * 4) << 3)) >> 0x20)
                            ) << 0x20) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac950) = iVar14;
      iVar29 = (iVar22 + iVar9 & 0x7ffU) << 0x12;
      iVar9 = (int)((longlong)iVar29 * (longlong)(*(int *)(this + (iVar33 + 0xb32b4) * 4) << 3) +
                    ((ulonglong)
                     (uint)(*(int *)(this + (uVar51 + 0xb32b4) * 4) -
                           (int)((ulonglong)
                                 ((longlong)iVar29 *
                                 (longlong)(*(int *)(this + (uVar51 + 0xb32b4) * 4) << 3)) >> 0x20))
                    << 0x20) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac9d0) = iVar9;
      iVar29 = (iVar21 + iVar15 & 0x7ffU) << 0x12;
      iVar29 = (int)((longlong)iVar29 * (longlong)(*(int *)(this + (iVar34 + 0xb32b4) * 4) << 3) +
                     ((ulonglong)
                      (uint)(*(int *)(this + (uVar47 + 0xb32b4) * 4) -
                            (int)((ulonglong)
                                  ((longlong)iVar29 *
                                  (longlong)(*(int *)(this + (uVar47 + 0xb32b4) * 4) << 3)) >> 0x20)
                            ) << 0x20) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2aca50) = iVar29;
      iVar35 = iVar35 << 3;
      iVar36 = iVar36 << 3;
      iVar32 = iVar32 << 3;
      uVar17 = (undefined4)
               ((longlong)(*(int *)(this + 0x43b4) << 0xe) * (longlong)iVar32 +
                ((longlong)(*(int *)(this + 0x43b0) << 0xe) * (longlong)iVar36 +
                 ((longlong)(*(int *)(this + 0x43ac) << 0xe) * (longlong)iVar35 &
                 0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(undefined4 *)(this + iVar30 * 4 + 0x2acad0) = uVar17;
      if (iVar22 < 0) {
        *(undefined4 *)(this + iVar30 * 4 + 0x2ccad0) = uVar17;
      }
      else {
        *(int *)(this + iVar30 * 4 + 0x2ccad0) =
             (int)((longlong)(*(int *)(this + 0x43bc) << 0xe) * (longlong)(iVar9 << 3) +
                   ((longlong)(*(int *)(this + 0x43b8) << 0xe) * (longlong)iVar36 &
                   0xffffffff00000000U) >> 0x20);
      }
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((longlong)(*(int *)(this + 0x43c8) << 0xe) * (longlong)(iVar14 << 3) +
                 ((longlong)(*(int *)(this + 0x43c4) << 0xe) * (longlong)iVar32 +
                  ((longlong)(*(int *)(this + 0x43c0) << 0xe) * (longlong)iVar35 &
                  0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      iVar29 = (int)((longlong)(*(int *)(this + 0x43d4) << 0xe) * (longlong)(iVar29 << 3) +
                     ((longlong)(*(int *)(this + 0x43d0) << 0xe) * (longlong)(iVar9 << 3) +
                      ((longlong)(*(int *)(this + 0x43cc) << 0xe) * (longlong)iVar36 &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar29;
      iVar29 = iVar29 << 3;
    }
    else if (iVar29 == 1) {
      iVar29 = *(int *)(this + 0x742c);
      iVar14 = *(int *)(this + 0x9a74);
      uVar47 = iVar29 - 1;
      if ((int)uVar47 < 0) {
        uVar47 = iVar29 + 0x7fff;
      }
      if (0x7fff < uVar47) {
        uVar47 = uVar47 & 0x7fff;
      }
      iVar9 = (int)((ulonglong)
                    ((longlong)(*(int *)(this + 0x43dc) << 0xe) * -0x40000 +
                    (longlong)(*(int *)(this + 0x43d8) << 0xe) * -0x40000) >> 0x20) -
              (int)((ulonglong)
                    ((longlong)(*(int *)(this + 0x43e0) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x2ecad4) << 3)) >> 0x20);
      if (iVar9 < 0x800000) {
        if (iVar9 < -0x800000) {
          iVar9 = iVar9 + 0x1000000;
        }
      }
      else {
        iVar9 = iVar9 + -0x1000000;
      }
      *(int *)(this + iVar19 * 4 + 0x2ecad4) = iVar9;
      uVar23 = *(uint *)(this + iVar14 * 4 + 0x2ecad4);
      uVar54 = (uint)((longlong)(*(int *)(this + 0x43e4) << 0xe) * -0x4000000 +
                      ((ulonglong)uVar23 << 0x20) >> 0x20);
      if ((int)uVar54 < 0x800000) {
        if ((int)uVar54 < -0x800000) {
          uVar54 = uVar54 + 0x1000000;
        }
      }
      else {
        uVar54 = uVar54 - 0x1000000;
      }
      if ((int)uVar54 < 0) {
        uVar54 = -uVar54;
      }
      iVar9 = (*(int *)(this + iVar14 * 4 + 0x2ecb54) +
              (int)((ulonglong)
                    ((longlong)(*(int *)(this + 0x442c) << 0xe) *
                    (longlong)
                    ((int)((ulonglong)
                           ((longlong)(*(int *)(this + 0x43ec) << 0xe) *
                           (longlong)
                           ((int)((longlong)(*(int *)(this + 0x43e8) << 0xe) * -0x4000000 +
                                  ((ulonglong)uVar54 << 0x20) >> 0x20) << 3)) >> 0x20) << 3)) >>
                   0x20)) -
              (int)((ulonglong)
                    ((longlong)(*(int *)(this + 0x4430) << 0xe) *
                    (longlong)
                    ((int)((ulonglong)
                           ((longlong)(*(int *)(this + 0x43f0) << 0xe) *
                           (longlong)(*(int *)(this + iVar14 * 4 + 0x2ecb54) << 3)) >> 0x20) << 3))
                   >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ecb54) = iVar9;
      uVar54 = (uint)((longlong)(*(int *)(this + 0x43f4) << 0xe) * -0x4000000 +
                      ((ulonglong)uVar23 << 0x20) >> 0x20);
      if ((int)uVar54 < 0x800000) {
        if ((int)uVar54 < -0x800000) {
          uVar54 = uVar54 + 0x1000000;
        }
      }
      else {
        uVar54 = uVar54 - 0x1000000;
      }
      if ((int)uVar54 < 0) {
        uVar54 = -uVar54;
      }
      iVar15 = ((int)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4434) << 0xe) *
                      (longlong)
                      ((int)((ulonglong)
                             ((longlong)(*(int *)(this + 0x43fc) << 0xe) *
                             (longlong)
                             ((int)((longlong)(*(int *)(this + 0x43f8) << 0xe) * -0x4000000 +
                                    ((ulonglong)uVar54 << 0x20) >> 0x20) << 3)) >> 0x20) << 3)) >>
                     0x20) + *(int *)(this + iVar14 * 4 + 0x2ecbd4)) -
               (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4438) << 0xe) *
                     (longlong)
                     ((int)((ulonglong)
                            ((longlong)(*(int *)(this + 0x4400) << 0xe) *
                            (longlong)(*(int *)(this + iVar14 * 4 + 0x2ecbd4) << 3)) >> 0x20) << 3))
                    >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ecbd4) = iVar15;
      uVar23 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4404) << 0xe) * (longlong)(iVar9 * 8)) >> 0x20);
      uVar54 = 0xff800000;
      if (-0x800001 < (int)uVar23) {
        uVar54 = uVar23;
      }
      if (0x7ffffe < (int)uVar54) {
        uVar54 = 0x7fffff;
      }
      lVar2 = (longlong)(*(int *)(this + 0x4408) << 0xe) * -0x4000000 + ((ulonglong)uVar54 << 0x20);
      uVar54 = (uint)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0x7fffff;
        if ((int)uVar54 < 0x7fffff) {
          uVar23 = uVar54;
        }
      }
      uVar54 = (int)((longlong)(*(int *)(this + 0x440c) << 0xe) * -0x4000000 +
                     ((ulonglong)uVar23 << 0x20) >> 0x20) * 4;
      if ((int)uVar54 < -0x800000) {
        uVar54 = 0xff800000;
      }
      if ((int)uVar54 < 0x800000) {
        *(uint *)(this + iVar19 * 4 + 0x2ecc54) = uVar54;
      }
      else {
        *(undefined4 *)(this + iVar19 * 4 + 0x2ecc54) = 0x7fffff;
      }
      uVar23 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4410) << 0xe) * (longlong)(iVar15 * 8)) >> 0x20)
      ;
      uVar54 = 0xff800000;
      if (-0x800001 < (int)uVar23) {
        uVar54 = uVar23;
      }
      if (0x7ffffe < (int)uVar54) {
        uVar54 = 0x7fffff;
      }
      lVar2 = (longlong)(*(int *)(this + 0x4414) << 0xe) * -0x4000000 + ((ulonglong)uVar54 << 0x20);
      uVar54 = (uint)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0x7fffff;
        if ((int)uVar54 < 0x7fffff) {
          uVar23 = uVar54;
        }
      }
      iVar15 = (int)((longlong)(*(int *)(this + 0x4418) << 0xe) * -0x4000000 +
                     ((ulonglong)uVar23 << 0x20) >> 0x20) * 4;
      iVar9 = -0x800000;
      if (iVar15 < -0x800000) {
        iVar15 = iVar9;
      }
      iVar16 = 0x7fffff;
      if (iVar15 < 0x800000) {
        *(int *)(this + iVar19 * 4 + 0x2eccd4) = iVar15;
      }
      else {
        *(undefined4 *)(this + iVar19 * 4 + 0x2eccd4) = 0x7fffff;
      }
      iVar21 = *(int *)(this + iVar14 * 4 + 0x2ecc54);
      iVar15 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x441c) << 0xe) * (longlong)(iVar21 << 3)) >> 0x20)
      ;
      if (iVar15 < -0x800000) {
        iVar15 = iVar9;
      }
      if (0x7ffffe < iVar15) {
        iVar15 = iVar16;
      }
      *(int *)(this + iVar19 * 4 + 0x2ecd54) = iVar15;
      iVar21 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4420) << 0xe) * (longlong)(iVar21 << 3)) >> 0x20)
      ;
      if (iVar21 < -0x800000) {
        iVar21 = iVar9;
      }
      if (0x7ffffe < iVar21) {
        iVar21 = iVar16;
      }
      *(int *)(this + iVar19 * 4 + 0x2ecdd4) = iVar21;
      iVar30 = *(int *)(this + iVar14 * 4 + 0x2eccd4);
      iVar22 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4424) << 0xe) * (longlong)(iVar30 << 3)) >> 0x20)
      ;
      if (iVar22 < -0x800000) {
        iVar22 = iVar9;
      }
      if (0x7ffffe < iVar22) {
        iVar22 = iVar16;
      }
      *(int *)(this + iVar19 * 4 + 0x2ece54) = iVar22;
      iVar30 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4428) << 0xe) * (longlong)(iVar30 << 3)) >> 0x20)
      ;
      if (iVar30 < -0x800000) {
        iVar30 = iVar9;
      }
      if (iVar30 < 0x7fffff) {
        iVar16 = iVar30;
      }
      *(int *)(this + iVar19 * 4 + 0x2eced4) = iVar16;
      iVar30 = *(int *)(this + 0x9844);
      iVar9 = *(int *)(this + 0x9848);
      uVar54 = iVar9 + iVar16 >> 0xb;
      uVar23 = iVar30 + iVar21 >> 0xb;
      uVar51 = uVar54 & 0xffff;
      if (iVar9 < 0) {
        local_a0 = 1;
        uVar51 = *(uint *)(this + 0x32d2d4);
      }
      iVar31 = (int)(short)uVar23;
      if (iVar9 < 0) {
        uVar51 = uVar51 + uVar54 & 0xffff;
      }
      else {
        local_a0 = 0;
      }
      if (iVar31 < 0) {
        uVar54 = (uint)*(ushort *)pCVar28;
        while( true ) {
          uVar23 = uVar23 + uVar54;
          uVar24 = (uVar23 & 0xffff) + uVar54;
          sVar5 = (short)uVar23;
          uVar57 = (uVar24 & 0xffff) + uVar54;
          if ((uVar23 & 0x8000) == 0) break;
          uVar23 = (uVar57 & 0xffff) + uVar54;
          sVar5 = (short)uVar24;
          if ((uVar24 & 0x8000) == 0) break;
          uVar24 = (uVar23 & 0xffff) + uVar54;
          sVar5 = (short)uVar57;
          uVar46 = (uVar24 & 0xffff) + uVar54;
          if ((uVar57 & 0x8000) == 0) break;
          sVar5 = (short)uVar23;
          uVar57 = (uVar46 & 0xffff) + uVar54;
          if ((uVar23 & 0x8000) == 0) break;
          sVar5 = (short)uVar24;
          uVar45 = (uVar57 & 0xffff) + uVar54;
          if ((uVar24 & 0x8000) == 0) break;
          uVar23 = uVar45 & 0xffff;
          sVar5 = (short)uVar46;
          if ((((uVar46 & 0x8000) == 0) || (sVar5 = (short)uVar57, (uVar57 & 0x8000) == 0)) ||
             (sVar5 = (short)uVar45, -1 < (int)(uVar45 * 0x10000))) break;
        }
        iVar31 = (int)sVar5;
      }
      uVar54 = iVar29 - iVar31;
      if ((int)uVar54 < 0) {
        uVar54 = uVar54 + 0x8000;
      }
      if (0x7fff < uVar54) {
        uVar54 = uVar54 & 0x7fff;
      }
      iVar31 = (int)(short)uVar51;
      iVar32 = uVar54 - 1;
      if (iVar32 == -1) {
        iVar32 = 0x7fff;
      }
      if (iVar31 < 0) {
        uVar23 = (uint)*(ushort *)pCVar28;
        do {
          uVar51 = uVar51 + uVar23;
          sVar5 = (short)uVar51;
          uVar57 = uVar23 + (uVar51 & 0xffff);
          if ((uVar51 & 0x8000) == 0) break;
          sVar5 = (short)uVar57;
          uVar51 = uVar23 + (uVar57 & 0xffff);
          if ((uVar57 & 0x8000) == 0) break;
          sVar5 = (short)uVar51;
          uVar57 = uVar23 + (uVar51 & 0xffff);
          if ((uVar51 & 0x8000) == 0) break;
          sVar5 = (short)uVar57;
          uVar51 = uVar23 + (uVar57 & 0xffff);
          if ((uVar57 & 0x8000) == 0) break;
          sVar5 = (short)uVar51;
          uVar57 = uVar23 + (uVar51 & 0xffff);
          if ((uVar51 & 0x8000) == 0) break;
          sVar5 = (short)uVar57;
          uVar51 = uVar23 + (uVar57 & 0xffff);
          if ((uVar57 & 0x8000) == 0) break;
          sVar5 = (short)uVar51;
          uVar57 = uVar23 + (uVar51 & 0xffff);
          if ((uVar51 & 0x8000) == 0) break;
          uVar51 = uVar57 & 0xffff;
          sVar5 = (short)uVar57;
        } while ((int)(uVar57 * 0x10000) < 0);
        iVar31 = (int)sVar5;
      }
      uVar23 = iVar29 - iVar31;
      if ((int)uVar23 < 0) {
        uVar23 = uVar23 + 0x8000;
      }
      if (0x7fff < uVar23) {
        uVar23 = uVar23 & 0x7fff;
      }
      iVar31 = uVar23 - 1;
      if (iVar31 == -1) {
        iVar31 = 0x7fff;
      }
      iVar34 = (int)((longlong)(*(int *)(this + 0x4444) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ecf54) << 3) +
                     ((longlong)(*(int *)(this + 0x4440) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x9ad0) << 3) +
                      ((longlong)(*(int *)(this + 0x443c) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U)
                     & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ecf54) = iVar34;
      iVar33 = (int)((longlong)(*(int *)(this + 0x4450) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ecfd4) << 3) +
                     ((longlong)(*(int *)(this + 0x444c) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x9b50) << 3) +
                      ((longlong)(*(int *)(this + 0x4448) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x9b50) << 3) & 0xffffffff00000000U)
                     & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ecfd4) = iVar33;
      iVar34 = (int)((longlong)(*(int *)(this + 0x445c) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ed054) << 3) +
                     ((longlong)(*(int *)(this + 0x4458) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x2ecf54) << 3) +
                      ((longlong)(*(int *)(this + 0x4454) << 0xe) * (longlong)(iVar34 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ed054) = iVar34;
      iVar33 = (int)((longlong)(*(int *)(this + 0x4468) << 0xe) *
                     (longlong)(*(int *)(this + uVar47 * 4 + 0x2ed0d4) << 3) +
                     ((longlong)(*(int *)(this + 0x4464) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x2ecfd4) << 3) +
                      ((longlong)(*(int *)(this + 0x4460) << 0xe) * (longlong)(iVar33 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar29 * 4 + 0x2ed0d4) = iVar33;
      uVar17 = (undefined4)
               ((longlong)(*(int *)(this + 0x4470) << 0xe) * (longlong)(iVar33 << 3) +
                ((longlong)(*(int *)(this + 0x446c) << 0xe) * (longlong)(iVar34 << 3) &
                0xffffffff00000000U) >> 0x20);
      *(undefined4 *)(this + iVar29 * 4 + 0x30d0d4) = uVar17;
      if (local_a0 != 0) {
        *(undefined4 *)(this + iVar29 * 4 + 0x2ed0d4) = uVar17;
      }
      iVar29 = (iVar30 + iVar21 & 0x7ffU) << 0x12;
      *(int *)(this + iVar19 * 4 + 0x32d0d4) =
           (int)((longlong)iVar29 * (longlong)(*(int *)(this + (iVar32 + 0xc3434) * 4 + 4) << 3) +
                 ((ulonglong)
                  (uint)(*(int *)(this + (uVar54 + 0xc3434) * 4 + 4) -
                        (int)((ulonglong)
                              ((longlong)iVar29 *
                              (longlong)(*(int *)(this + (uVar54 + 0xc3434) * 4 + 4) << 3)) >> 0x20)
                        ) << 0x20) >> 0x20);
      iVar29 = (iVar9 + iVar16 & 0x7ffU) << 0x12;
      *(int *)(this + iVar19 * 4 + 0x32d154) =
           (int)((longlong)iVar29 * (longlong)(*(int *)(this + (iVar31 + 0xbb434) * 4 + 4) << 3) +
                 ((ulonglong)
                  (uint)(*(int *)(this + (uVar23 + 0xbb434) * 4 + 4) -
                        (int)((ulonglong)
                              ((longlong)iVar29 *
                              (longlong)(*(int *)(this + (uVar23 + 0xbb434) * 4 + 4) << 3)) >> 0x20)
                        ) << 0x20) >> 0x20);
      lVar2 = (longlong)iVar15 * (longlong)*(int *)(this + iVar14 * 4 + 0x32d0d4);
      local_d8 = (uint)lVar2;
      iVar29 = *(int *)(this + iVar14 * 4 + 0x32d0d4) +
               (local_d8 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9);
      *(int *)(this + iVar19 * 4 + 0x32d1d4) = iVar29;
      lVar2 = (longlong)iVar22 * (longlong)*(int *)(this + iVar14 * 4 + 0x32d154);
      iVar9 = *(int *)(this + iVar14 * 4 + 0x32d154) +
              ((uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9);
      *(int *)(this + iVar19 * 4 + 0x32d254) = iVar9;
      lVar2 = (longlong)iVar15 * (longlong)*(int *)(this + iVar14 * 4 + 0x2ed054);
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((longlong)(*(int *)(this + 0x447c) << 0xe) * (longlong)(iVar29 * 8) +
                 ((longlong)(*(int *)(this + 0x4474) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x2ed054) << 3) +
                  ((longlong)(*(int *)(this + 0x4478) << 0xe) *
                   (longlong)
                   (int)(((uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9) << 3) &
                  0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      lVar2 = (longlong)iVar22 * (longlong)*(int *)(this + uVar47 * 4 + 0x2ed0d4);
      iVar29 = (int)((longlong)(*(int *)(this + 0x4488) << 0xe) * (longlong)(iVar9 * 8) +
                     ((longlong)(*(int *)(this + 0x4480) << 0xe) *
                      (longlong)(*(int *)(this + uVar47 * 4 + 0x2ed0d4) << 3) +
                      ((longlong)(*(int *)(this + 0x4484) << 0xe) *
                       (longlong)
                       (int)(((uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9) << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar29;
      iVar29 = iVar29 << 3;
    }
    else if (iVar29 == 2) {
      iVar29 = *(int *)(this + 0x9a74);
      iVar14 = *(int *)(this + iVar29 * 4 + 0x32d2d8) +
               (int)((ulonglong)((longlong)(*(int *)(this + 0x448c) << 0xe) * -0x40000) >> 0x20);
      if (iVar14 < 0x800000) {
        if (iVar14 < -0x800000) {
          iVar14 = iVar14 + 0x1000000;
        }
      }
      else {
        iVar14 = iVar14 + -0x1000000;
      }
      *(int *)(this + iVar19 * 4 + 0x32d2d8) = iVar14;
      lVar2 = (longlong)(*(int *)(this + 0x4494) << 0xe) * -0x4000000 +
              ((longlong)(*(int *)(this + 0x4490) << 0xe) * (longlong)(iVar14 << 3) &
              0xffffffff00000000U);
      iVar14 = (int)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        iVar14 = 0;
      }
      else if (0x7ffffe < iVar14) {
        iVar14 = 0x7fffff;
      }
      *(int *)(this + iVar19 * 4 + 0x32d358) = iVar14;
      lVar2 = (longlong)(*(int *)(this + 0x4498) << 0xe) *
              (longlong)(*(int *)(this + iVar29 * 4 + 0x32d358) << 3);
      iVar14 = (int)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0x7fffff;
        if (iVar14 < 0x7fffff) {
          iVar9 = iVar14;
        }
      }
      *(int *)(this + iVar19 * 4 + 0x32d458) = iVar9;
      uVar47 = *(uint *)(this + iVar29 * 4 + 0x32d2d8);
      iVar14 = (int)((longlong)(*(int *)(this + 0x449c) << 0xe) * -0x4000000 +
                     ((ulonglong)uVar47 << 0x20) >> 0x20);
      if (iVar14 < 0x800000) {
        if (iVar14 < -0x800000) {
          iVar14 = iVar14 + 0x1000000;
        }
      }
      else {
        iVar14 = iVar14 + -0x1000000;
      }
      uVar54 = (uint)((longlong)(*(int *)(this + 0x44a4) << 0xe) * -0x4000000 +
                      ((longlong)(*(int *)(this + 0x44a0) << 0xe) * (longlong)(iVar14 << 3) &
                      0xffffffff00000000U) >> 0x20);
      lVar2 = (longlong)(*(int *)(this + 0x44a8) << 0xe) *
              (longlong)(int)((uVar54 & ~((int)uVar54 >> 0x1f)) << 3);
      iVar14 = (int)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = 0x7fffff;
        if (iVar14 < 0x7fffff) {
          iVar15 = iVar14;
        }
      }
      *(int *)(this + iVar19 * 4 + 0x32d4d8) = iVar15;
      lVar2 = (longlong)(*(int *)(this + 0x44ac) << 0xe) * (longlong)(int)(uVar47 << 3);
      iVar14 = (int)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        iVar14 = -iVar14;
      }
      uVar47 = (uint)((longlong)(*(int *)(this + 0x44b0) << 0xe) * -0x4000000 +
                      ((ulonglong)(uint)(iVar14 << 2) << 0x20) >> 0x20);
      iVar16 = (int)((ulonglong)
                     ((longlong)(int)((uVar47 & ~((int)uVar47 >> 0x1f)) << 0xe) *
                     (longlong)(*(int *)(this + 0x44b4) << 3)) >> 0x20);
      if (iVar16 < -0x800000) {
        iVar16 = -0x800000;
      }
      if (0x7ffffe < iVar16) {
        iVar16 = 0x7fffff;
      }
      *(int *)(this + iVar19 * 4 + 0x32d658) = iVar16;
      uVar47 = (uint)((longlong)(*(int *)(this + 0x44b8) << 0xe) * -0x4000000 +
                      ((ulonglong)(uint)(iVar14 << 2) << 0x20) >> 0x20);
      iVar21 = (int)((ulonglong)
                     ((longlong)(int)((uVar47 & ~((int)uVar47 >> 0x1f)) << 0xe) *
                     (longlong)(*(int *)(this + 0x44bc) << 3)) >> 0x20);
      iVar14 = -0x800000;
      if (-0x800001 < iVar21) {
        iVar14 = iVar21;
      }
      if (0x7ffffe < iVar14) {
        iVar14 = 0x7fffff;
      }
      *(int *)(this + iVar19 * 4 + 0x32d6d8) = iVar14;
      iVar21 = *(int *)(this + iVar29 * 4 + 0x32d3d8) +
               (int)((ulonglong)((longlong)(*(int *)(this + 0x44c0) << 0xe) * -0x40000) >> 0x20);
      if (iVar21 < 0x800000) {
        if (iVar21 < -0x800000) {
          iVar21 = iVar21 + 0x1000000;
        }
      }
      else {
        iVar21 = iVar21 + -0x1000000;
      }
      *(int *)(this + iVar19 * 4 + 0x32d3d8) = iVar21;
      uVar54 = *(uint *)(this + iVar29 * 4 + 0x32d3d8);
      iVar22 = uVar54 << 3;
      uVar47 = (uint)((longlong)(*(int *)(this + 0x44c8) << 0xe) * -0x4000000 +
                      ((longlong)(*(int *)(this + 0x44c4) << 0xe) * (longlong)iVar22 &
                      0xffffffff00000000U) >> 0x20);
      lVar2 = (longlong)(*(int *)(this + 0x44cc) << 0xe) *
              (longlong)(int)((uVar47 & ~((int)uVar47 >> 0x1f)) << 3);
      iVar21 = (int)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        iVar21 = 0;
      }
      else if (0x7ffffe < iVar21) {
        iVar21 = 0x7fffff;
      }
      *(int *)(this + iVar19 * 4 + 0x32d558) = iVar21;
      iVar30 = (int)((longlong)(*(int *)(this + 0x44d0) << 0xe) * -0x4000000 +
                     ((ulonglong)uVar54 << 0x20) >> 0x20);
      if (iVar30 < 0x800000) {
        if (iVar30 < -0x800000) {
          iVar30 = iVar30 + 0x1000000;
        }
      }
      else {
        iVar30 = iVar30 + -0x1000000;
      }
      uVar47 = (uint)((longlong)(*(int *)(this + 0x44d8) << 0xe) * -0x4000000 +
                      ((longlong)(*(int *)(this + 0x44d4) << 0xe) * (longlong)(iVar30 << 3) &
                      0xffffffff00000000U) >> 0x20);
      lVar2 = (longlong)(*(int *)(this + 0x44dc) << 0xe) *
              (longlong)(int)((uVar47 & ~((int)uVar47 >> 0x1f)) << 3);
      local_cc = (uint)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        local_cc = 0;
      }
      else if (0x7ffffe < (int)local_cc) {
        local_cc = 0x7fffff;
      }
      *(uint *)(this + iVar19 * 4 + 0x32d5d8) = local_cc;
      lVar2 = (longlong)(*(int *)(this + 0x44e0) << 0xe) * (longlong)iVar22;
      iVar22 = (int)((ulonglong)lVar2 >> 0x20);
      if (lVar2 < 0) {
        iVar22 = -iVar22;
      }
      uVar47 = (uint)((longlong)(*(int *)(this + 0x44e4) << 0xe) * -0x4000000 +
                      ((ulonglong)(uint)(iVar22 << 2) << 0x20) >> 0x20);
      iVar30 = (int)((ulonglong)
                     ((longlong)(int)((uVar47 & ~((int)uVar47 >> 0x1f)) << 0xe) *
                     (longlong)(*(int *)(this + 0x44e8) << 3)) >> 0x20);
      if (iVar30 < -0x800000) {
        iVar30 = -0x800000;
      }
      if (0x7ffffe < iVar30) {
        iVar30 = 0x7fffff;
      }
      *(int *)(this + iVar19 * 4 + 0x32d758) = iVar30;
      uVar47 = (uint)((longlong)(*(int *)(this + 0x44ec) << 0xe) * -0x4000000 +
                      ((ulonglong)(uint)(iVar22 << 2) << 0x20) >> 0x20);
      iVar31 = (int)((ulonglong)
                     ((longlong)(int)((uVar47 & ~((int)uVar47 >> 0x1f)) << 0xe) *
                     (longlong)(*(int *)(this + 0x44f0) << 3)) >> 0x20);
      iVar22 = -0x800000;
      if (-0x800001 < iVar31) {
        iVar22 = iVar31;
      }
      if (0x7ffffe < iVar22) {
        iVar22 = 0x7fffff;
      }
      *(int *)(this + iVar19 * 4 + 0x32d7d8) = iVar22;
      iVar33 = *(int *)(this + 0x9850);
      uVar51 = iVar9 + *(int *)(this + 0x984c);
      iVar32 = *(int *)(this + 0x9854);
      iVar31 = *(int *)(this + 39000);
      uVar47 = iVar32 + iVar21 >> 0xb;
      uVar23 = (int)(iVar31 + local_cc) >> 0xb;
      iVar9 = (int)(short)((short)(uVar51 * 0x20 >> 0x10) + 2);
      uVar54 = iVar33 + iVar15 >> 0xb;
      iVar34 = *(int *)(this + 0x742c);
      if (iVar9 < 0) {
        uVar24 = (uint)*(ushort *)pCVar28;
        uVar57 = uVar24 + 2 + ((uVar51 & 0x7ffffff) >> 0xb);
        while( true ) {
          uVar45 = (uVar57 & 0xffff) + uVar24;
          sVar5 = (short)uVar57;
          uVar46 = (uVar45 & 0xffff) + uVar24;
          if ((uVar57 & 0x8000) == 0) break;
          uVar57 = (uVar46 & 0xffff) + uVar24;
          sVar5 = (short)uVar45;
          if ((uVar45 & 0x8000) == 0) break;
          uVar45 = (uVar57 & 0xffff) + uVar24;
          sVar5 = (short)uVar46;
          uVar25 = (uVar45 & 0xffff) + uVar24;
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar57;
          uVar46 = (uVar25 & 0xffff) + uVar24;
          if ((uVar57 & 0x8000) == 0) break;
          sVar5 = (short)uVar45;
          uVar26 = (uVar46 & 0xffff) + uVar24;
          if ((uVar45 & 0x8000) == 0) break;
          sVar5 = (short)uVar25;
          uVar57 = (uVar26 & 0xffff) + uVar24;
          if ((((uVar25 & 0x8000) == 0) || (sVar5 = (short)uVar46, (uVar46 & 0x8000) == 0)) ||
             (sVar5 = (short)uVar26, -1 < (int)(uVar26 * 0x10000))) break;
        }
        iVar9 = (int)sVar5;
      }
      uVar57 = iVar34 - iVar9;
      if ((int)uVar57 < 0) {
        uVar57 = uVar57 + 0x8000;
      }
      iVar9 = (int)(short)((short)uVar47 + 2);
      if (0x7fff < uVar57) {
        uVar57 = uVar57 & 0x7fff;
      }
      iVar35 = uVar57 - 1;
      if (iVar35 == -1) {
        iVar35 = 0x7fff;
      }
      if (iVar9 < 0) {
        uVar24 = (uint)*(ushort *)pCVar28;
        uVar47 = (uVar47 & 0xffff) + uVar24 + 2;
        while( true ) {
          uVar46 = (uVar47 & 0xffff) + uVar24;
          sVar5 = (short)uVar47;
          uVar45 = (uVar46 & 0xffff) + uVar24;
          if ((uVar47 & 0x8000) == 0) break;
          uVar47 = (uVar45 & 0xffff) + uVar24;
          sVar5 = (short)uVar46;
          if ((uVar46 & 0x8000) == 0) break;
          uVar25 = (uVar47 & 0xffff) + uVar24;
          sVar5 = (short)uVar45;
          uVar46 = (uVar25 & 0xffff) + uVar24;
          if ((uVar45 & 0x8000) == 0) break;
          sVar5 = (short)uVar47;
          uVar45 = (uVar46 & 0xffff) + uVar24;
          if ((uVar47 & 0x8000) == 0) break;
          sVar5 = (short)uVar25;
          uVar26 = (uVar45 & 0xffff) + uVar24;
          if ((uVar25 & 0x8000) == 0) break;
          sVar5 = (short)uVar46;
          uVar47 = (uVar26 & 0xffff) + uVar24;
          if ((((uVar46 & 0x8000) == 0) || (sVar5 = (short)uVar45, (uVar45 & 0x8000) == 0)) ||
             (sVar5 = (short)uVar26, -1 < (int)(uVar26 * 0x10000))) break;
        }
        iVar9 = (int)sVar5;
      }
      uVar47 = iVar34 - iVar9;
      if ((int)uVar47 < 0) {
        uVar47 = uVar47 + 0x8000;
      }
      iVar9 = (int)(short)((short)uVar54 + 2);
      if (0x7fff < uVar47) {
        uVar47 = uVar47 & 0x7fff;
      }
      iVar36 = uVar47 - 1;
      if (iVar36 == -1) {
        iVar36 = 0x7fff;
      }
      if (iVar9 < 0) {
        uVar24 = (uint)*(ushort *)pCVar28;
        uVar54 = (uVar54 & 0xffff) + uVar24 + 2;
        while( true ) {
          uVar45 = (uVar54 & 0xffff) + uVar24;
          sVar5 = (short)uVar54;
          uVar46 = (uVar45 & 0xffff) + uVar24;
          if ((uVar54 & 0x8000) == 0) break;
          uVar54 = (uVar46 & 0xffff) + uVar24;
          sVar5 = (short)uVar45;
          if ((uVar45 & 0x8000) == 0) break;
          uVar45 = (uVar54 & 0xffff) + uVar24;
          sVar5 = (short)uVar46;
          uVar25 = (uVar45 & 0xffff) + uVar24;
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar54;
          uVar46 = (uVar25 & 0xffff) + uVar24;
          if ((uVar54 & 0x8000) == 0) break;
          sVar5 = (short)uVar45;
          uVar26 = (uVar46 & 0xffff) + uVar24;
          if ((uVar45 & 0x8000) == 0) break;
          sVar5 = (short)uVar25;
          uVar54 = (uVar26 & 0xffff) + uVar24;
          if ((((uVar25 & 0x8000) == 0) || (sVar5 = (short)uVar46, (uVar46 & 0x8000) == 0)) ||
             (sVar5 = (short)uVar26, -1 < (int)(uVar26 * 0x10000))) break;
        }
        iVar9 = (int)sVar5;
      }
      uVar54 = iVar34 - iVar9;
      if ((int)uVar54 < 0) {
        uVar54 = uVar54 + 0x8000;
      }
      if (0x7fff < uVar54) {
        uVar54 = uVar54 & 0x7fff;
      }
      iVar9 = uVar54 - 1;
      iVar37 = (int)(short)((short)uVar23 + 2);
      if (iVar9 == -1) {
        iVar9 = 0x7fff;
      }
      if (iVar37 < 0) {
        uVar24 = (uint)*(ushort *)pCVar28;
        uVar23 = (uVar23 & 0xffff) + uVar24 + 2;
        while( true ) {
          uVar45 = (uVar23 & 0xffff) + uVar24;
          sVar5 = (short)uVar23;
          uVar46 = (uVar45 & 0xffff) + uVar24;
          if ((uVar23 & 0x8000) == 0) break;
          uVar23 = (uVar46 & 0xffff) + uVar24;
          sVar5 = (short)uVar45;
          if ((uVar45 & 0x8000) == 0) break;
          uVar45 = (uVar23 & 0xffff) + uVar24;
          sVar5 = (short)uVar46;
          uVar25 = (uVar45 & 0xffff) + uVar24;
          if ((uVar46 & 0x8000) == 0) break;
          sVar5 = (short)uVar23;
          uVar46 = (uVar25 & 0xffff) + uVar24;
          if ((uVar23 & 0x8000) == 0) break;
          sVar5 = (short)uVar45;
          uVar26 = (uVar46 & 0xffff) + uVar24;
          if ((uVar45 & 0x8000) == 0) break;
          sVar5 = (short)uVar25;
          uVar23 = (uVar26 & 0xffff) + uVar24;
          if ((((uVar25 & 0x8000) == 0) || (sVar5 = (short)uVar46, (uVar46 & 0x8000) == 0)) ||
             (sVar5 = (short)uVar26, -1 < (int)(uVar26 * 0x10000))) break;
        }
        iVar37 = (int)sVar5;
      }
      uVar23 = iVar34 - iVar37;
      if ((int)uVar23 < 0) {
        uVar23 = uVar23 + 0x8000;
      }
      if (0x7fff < uVar23) {
        uVar23 = uVar23 & 0x7fff;
      }
      iVar38 = uVar23 - 1;
      iVar37 = (uVar51 & 0x7ff) << 0x12;
      if (iVar38 == -1) {
        iVar38 = 0x7fff;
      }
      *(int *)(this + iVar19 * 4 + 0x32d858) =
           (int)((longlong)iVar37 * (longlong)(*(int *)(this + (iVar35 + 0xcb6d6) * 4) << 3) +
                 ((ulonglong)
                  (uint)(*(int *)(this + (uVar57 + 0xcb6d6) * 4) -
                        (int)((ulonglong)
                              ((longlong)iVar37 *
                              (longlong)(*(int *)(this + (uVar57 + 0xcb6d6) * 4) << 3)) >> 0x20)) <<
                 0x20) >> 0x20);
      lVar2 = (longlong)iVar16 * (longlong)*(int *)(this + iVar29 * 4 + 0x32d858);
      iVar21 = (iVar32 + iVar21 & 0x7ffU) << 0x12;
      local_e8 = (uint)lVar2;
      local_e4 = (int)((ulonglong)lVar2 >> 0x20);
      local_c0 = (uint)((longlong)iVar14 * (longlong)*(int *)(this + iVar29 * 4 + 0x32da58));
      local_bc = (int)((ulonglong)
                       ((longlong)iVar14 * (longlong)*(int *)(this + iVar29 * 4 + 0x32da58)) >> 0x20
                      );
      iVar16 = (*(int *)(this + iVar29 * 4 + 0x32d858) - (local_e8 >> 0x17 | local_e4 << 9)) +
               (local_c0 >> 0x17 | local_bc << 9);
      *(int *)(this + iVar19 * 4 + 0x32d8d8) = iVar16;
      *(int *)(this + iVar19 * 4 + 0x32d958) =
           (int)((longlong)iVar21 * (longlong)(*(int *)(this + (iVar36 + 0xd36d6) * 4) << 3) +
                 ((ulonglong)
                  (uint)(*(int *)(this + (uVar47 + 0xd36d6) * 4) -
                        (int)((ulonglong)
                              ((longlong)iVar21 *
                              (longlong)(*(int *)(this + (uVar47 + 0xd36d6) * 4) << 3)) >> 0x20)) <<
                 0x20) >> 0x20);
      iVar14 = (iVar33 + iVar15 & 0x7ffU) << 0x12;
      lVar2 = (longlong)iVar30 * (longlong)*(int *)(this + iVar29 * 4 + 0x32d958);
      local_e8 = (uint)lVar2;
      local_e4 = (int)((ulonglong)lVar2 >> 0x20);
      local_a8 = (uint)((longlong)iVar22 * (longlong)*(int *)(this + iVar29 * 4 + 0x32dad8));
      local_a4 = (int)((ulonglong)
                       ((longlong)iVar22 * (longlong)*(int *)(this + iVar29 * 4 + 0x32dad8)) >> 0x20
                      );
      iVar15 = (*(int *)(this + iVar29 * 4 + 0x32d958) - (local_e8 >> 0x17 | local_e4 << 9)) +
               (local_a8 >> 0x17 | local_a4 << 9);
      *(int *)(this + iVar19 * 4 + 0x32d9d8) = iVar15;
      *(int *)(this + iVar19 * 4 + 0x32da58) =
           (int)((longlong)iVar14 * (longlong)(*(int *)(this + (iVar9 + 0xcb6d6) * 4) << 3) +
                 ((ulonglong)
                  (uint)(*(int *)(this + (uVar54 + 0xcb6d6) * 4) -
                        (int)((ulonglong)
                              ((longlong)iVar14 *
                              (longlong)(*(int *)(this + (uVar54 + 0xcb6d6) * 4) << 3)) >> 0x20)) <<
                 0x20) >> 0x20);
      iVar14 = (iVar31 + local_cc & 0x7ff) << 0x12;
      *(int *)(this + iVar19 * 4 + 0x32dad8) =
           (int)((longlong)iVar14 * (longlong)(*(int *)(this + (iVar38 + 0xd36d6) * 4) << 3) +
                 ((ulonglong)
                  (uint)(*(int *)(this + (uVar23 + 0xd36d6) * 4) -
                        (int)((ulonglong)
                              ((longlong)iVar14 *
                              (longlong)(*(int *)(this + (uVar23 + 0xd36d6) * 4) << 3)) >> 0x20)) <<
                 0x20) >> 0x20);
      iVar14 = *(int *)(this + iVar19 * 4 + 0x9b50);
      iVar16 = iVar16 * 8;
      *(int *)(this + iVar34 * 4 + 0x32db58) =
           (int)((longlong)(*(int *)(this + 0x44fc) << 0xe) * (longlong)iVar16 +
                 ((longlong)(*(int *)(this + 0x44f8) << 0xe) * (longlong)(iVar14 << 3) +
                  ((longlong)(*(int *)(this + 0x44f4) << 0xe) *
                   (longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U) &
                 0xffffffff00000000) >> 0x20);
      iVar15 = iVar15 * 8;
      *(int *)(this + iVar34 * 4 + 0x34db58) =
           (int)((longlong)(*(int *)(this + 0x4504) << 0xe) * (longlong)iVar15 +
                 ((longlong)(*(int *)(this + 0x4500) << 0xe) * (longlong)(iVar14 << 3) &
                 0xffffffff00000000U) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((longlong)(*(int *)(this + 0x4510) << 0xe) * (longlong)iVar15 +
                 ((longlong)(*(int *)(this + 0x450c) << 0xe) * (longlong)iVar16 +
                  ((longlong)(*(int *)(this + 0x4508) << 0xe) *
                   (longlong)(*(int *)(this + iVar29 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U) &
                 0xffffffff00000000) >> 0x20);
      iVar29 = (int)((longlong)(*(int *)(this + 0x451c) << 0xe) * (longlong)iVar15 +
                     ((longlong)(*(int *)(this + 0x4518) << 0xe) * (longlong)iVar16 +
                      ((longlong)(*(int *)(this + 0x4514) << 0xe) *
                       (longlong)(*(int *)(this + iVar29 * 4 + 0x9b50) << 3) & 0xffffffff00000000U)
                     & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar29;
      iVar29 = iVar29 << 3;
    }
    else if (iVar29 == 3) {
      iVar9 = *(int *)(this + 0x9a78);
      iVar14 = *(int *)(this + 0x9a74);
      iVar29 = (int)((ulonglong)((longlong)(*(int *)(this + 0x4520) << 0xe) * -0x40000) >> 0x20) -
               (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4524) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x36db58) << 3)) >> 0x20);
      if (iVar29 < 0x800000) {
        if (iVar29 < -0x800000) {
          iVar29 = iVar29 + 0x1000000;
        }
      }
      else {
        iVar29 = iVar29 + -0x1000000;
      }
      *(int *)(this + iVar19 * 4 + 0x36db58) = iVar29;
      uVar47 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4528) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36db58) << 3)) >> 0x20);
      if ((int)uVar47 < 0x800000) {
        if ((int)uVar47 < -0x800000) {
          uVar47 = uVar47 + 0x1000000;
        }
      }
      else {
        uVar47 = uVar47 - 0x1000000;
      }
      if ((int)uVar47 < 0) {
        uVar47 = -uVar47;
      }
      uVar17 = (undefined4)
               ((longlong)(*(int *)(this + 0x452c) << 0xe) * -0x4000000 +
                ((ulonglong)uVar47 << 0x20) >> 0x20);
      iVar29 = SignedSaturate(uVar17,0x17);
      SignedDoesSaturate(uVar17,0x17);
      uVar4 = (longlong)iVar29 * (longlong)iVar29 >> 0x17;
      lVar2 = (uVar4 & 0xffffffff) * (uVar4 & 0xffffffff);
      iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (int)uVar4 * (int)(uVar4 >> 0x20) * 2;
      iVar29 = iVar15 >> 0x17;
      uVar46 = (uint)lVar2 >> 0x17 | iVar15 * 0x200;
      *(uint *)(this + iVar19 * 4 + 0x36dbd8) = uVar46;
      iVar15 = (int)((longlong)(*(int *)(this + 0x4534) << 0xe) *
                     (longlong)(*(int *)(this + iVar19 * 4 + 0x9b50) << 3) +
                     ((longlong)(*(int *)(this + 0x4530) << 0xe) *
                      (longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U)
                    >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36dc58) = iVar15;
      *(int *)(this + iVar19 * 4 + 0x36dcd8) =
           (int)((longlong)(*(int *)(this + 0x4540) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x36dcd8) << 3) +
                 ((longlong)(*(int *)(this + 0x453c) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x36dc58) << 3) +
                  ((longlong)(*(int *)(this + 0x4538) << 0xe) * (longlong)(iVar15 << 3) &
                  0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      uVar54 = (uint)((longlong)(*(int *)(this + 0x454c) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36dd58) << 3) +
                      ((longlong)(*(int *)(this + 0x4548) << 0xe) *
                       (longlong)(*(int *)(this + (iVar9 + 0xdb736) * 4) << 3) +
                       ((longlong)(*(int *)(this + 0x4544) << 0xe) *
                        (longlong)(*(int *)(this + iVar14 * 4 + 0x36dcd8) << 3) &
                       0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x36dd58) = uVar54;
      uVar51 = *(uint *)(this + iVar14 * 4 + 0x36e058);
      uVar57 = *(uint *)(this + iVar14 * 4 + 0x36e0d8);
      uVar47 = *(uint *)(this + iVar14 * 4 + 0x36e158);
      iVar16 = (int)((longlong)(*(int *)(this + 0x4558) << 0xe) * (longlong)(int)(uVar47 << 3) +
                     ((longlong)(*(int *)(this + 0x4554) << 0xe) * (longlong)(int)(uVar57 << 3) +
                      ((longlong)(*(int *)(this + 0x4550) << 0xe) * (longlong)(int)(uVar51 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36ddd8) = iVar16;
      uVar23 = *(uint *)(this + iVar14 * 4 + 0x36e1d8);
      iVar15 = (int)((longlong)(*(int *)(this + 0x4564) << 0xe) * (longlong)(int)(uVar23 << 3) +
                     ((longlong)(*(int *)(this + 0x4560) << 0xe) * (longlong)(int)(uVar47 << 3) +
                      ((longlong)(*(int *)(this + 0x455c) << 0xe) * (longlong)(int)(uVar57 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      iVar9 = iVar15 << 3;
      *(int *)(this + iVar19 * 4 + 0x36de58) = iVar15;
      uVar24 = (uint)((longlong)(*(int *)(this + 0x4568) << 0xe) * (longlong)iVar9 +
                      ((ulonglong)uVar54 << 0x20) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x36ded8) = uVar24;
      uVar54 = *(uint *)(this + iVar14 * 4 + 0x36df58);
      uVar24 = (((((uint)((ulonglong)uVar46 * (ulonglong)uVar24) >> 0x17 |
                  ((int)((ulonglong)uVar46 * (ulonglong)uVar24 >> 0x20) +
                  uVar24 * iVar29 + uVar46 * ((int)uVar24 >> 0x1f)) * 0x200) +
                 (int)((ulonglong)
                       ((longlong)(*(int *)(this + 0x456c) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x36ded8) << 3)) >> 0x20)) -
                (int)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4570) << 0xe) * (longlong)(int)(uVar24 << 3)) >>
                     0x20)) + uVar54) -
               ((uint)((ulonglong)uVar46 * (ulonglong)uVar54) >> 0x17 |
               ((int)((ulonglong)uVar46 * (ulonglong)uVar54 >> 0x20) +
               uVar54 * iVar29 + uVar46 * ((int)uVar54 >> 0x1f)) * 0x200);
      *(uint *)(this + iVar19 * 4 + 0x36df58) = uVar24;
      uVar54 = *(uint *)(this + iVar14 * 4 + 0x36dfd8);
      uVar54 = (((((uint)((ulonglong)uVar46 * (ulonglong)uVar24) >> 0x17 |
                  ((int)((ulonglong)uVar46 * (ulonglong)uVar24 >> 0x20) +
                  uVar24 * iVar29 + uVar46 * ((int)uVar24 >> 0x1f)) * 0x200) +
                 (int)((ulonglong)
                       ((longlong)(*(int *)(this + 0x4574) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x36df58) << 3)) >> 0x20)) -
                (int)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4578) << 0xe) * (longlong)(int)(uVar24 * 8)) >>
                     0x20)) + uVar54) -
               ((uint)((ulonglong)uVar46 * (ulonglong)uVar54) >> 0x17 |
               ((int)((ulonglong)uVar46 * (ulonglong)uVar54 >> 0x20) +
               uVar54 * iVar29 + uVar46 * ((int)uVar54 >> 0x1f)) * 0x200);
      *(uint *)(this + iVar19 * 4 + 0x36dfd8) = uVar54;
      local_94 = (int)((ulonglong)uVar46 * (ulonglong)uVar54 >> 0x20);
      local_98 = (uint)((ulonglong)uVar46 * (ulonglong)uVar54);
      uVar54 = (uVar51 + (((int)((ulonglong)
                                 ((longlong)(*(int *)(this + 0x457c) << 0xe) *
                                 (longlong)(*(int *)(this + iVar14 * 4 + 0x36dfd8) << 3)) >> 0x20) +
                          (local_98 >> 0x17 |
                          (local_94 + uVar54 * iVar29 + uVar46 * ((int)uVar54 >> 0x1f)) * 0x200)) -
                         (int)((ulonglong)
                               ((longlong)(*(int *)(this + 0x4580) << 0xe) *
                               (longlong)(int)(uVar54 * 8)) >> 0x20))) -
               ((uint)((ulonglong)uVar46 * (ulonglong)uVar51) >> 0x17 |
               ((int)((ulonglong)uVar46 * (ulonglong)uVar51 >> 0x20) +
               uVar51 * iVar29 + uVar46 * ((int)uVar51 >> 0x1f)) * 0x200);
      *(uint *)(this + iVar19 * 4 + 0x36e058) = uVar54;
      local_dc = (int)((ulonglong)uVar46 * (ulonglong)uVar54 >> 0x20);
      local_e0 = (uint)((ulonglong)uVar46 * (ulonglong)uVar54);
      uVar54 = ((((local_e0 >> 0x17 |
                  (local_dc + uVar54 * iVar29 + uVar46 * ((int)uVar54 >> 0x1f)) * 0x200) +
                 (int)((ulonglong)
                       ((longlong)(*(int *)(this + 0x4584) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x36e058) << 3)) >> 0x20)) -
                (int)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4588) << 0xe) * (longlong)(int)(uVar54 * 8)) >>
                     0x20)) + uVar57) -
               ((uint)((ulonglong)uVar46 * (ulonglong)uVar57) >> 0x17 |
               ((int)((ulonglong)uVar46 * (ulonglong)uVar57 >> 0x20) +
               uVar57 * iVar29 + uVar46 * ((int)uVar57 >> 0x1f)) * 0x200);
      *(uint *)(this + iVar19 * 4 + 0x36e0d8) = uVar54;
      local_dc = (int)((ulonglong)uVar46 * (ulonglong)uVar54 >> 0x20);
      local_e0 = (uint)((ulonglong)uVar46 * (ulonglong)uVar54);
      uVar47 = ((((local_e0 >> 0x17 |
                  (local_dc + uVar54 * iVar29 + uVar46 * ((int)uVar54 >> 0x1f)) * 0x200) +
                 (int)((ulonglong)
                       ((longlong)(*(int *)(this + 0x458c) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x36e0d8) << 3)) >> 0x20)) -
                (int)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4590) << 0xe) * (longlong)(int)(uVar54 * 8)) >>
                     0x20)) + uVar47) -
               ((uint)((ulonglong)uVar46 * (ulonglong)uVar47) >> 0x17 |
               ((int)((ulonglong)uVar46 * (ulonglong)uVar47 >> 0x20) +
               uVar47 * iVar29 + uVar46 * ((int)uVar47 >> 0x1f)) * 0x200);
      *(uint *)(this + iVar19 * 4 + 0x36e158) = uVar47;
      local_dc = (int)((ulonglong)uVar46 * (ulonglong)uVar47 >> 0x20);
      local_e0 = (uint)((ulonglong)uVar46 * (ulonglong)uVar47);
      *(uint *)(this + iVar19 * 4 + 0x36e1d8) =
           ((((local_e0 >> 0x17 |
              (local_dc + uVar47 * iVar29 + uVar46 * ((int)uVar47 >> 0x1f)) * 0x200) +
             (int)((ulonglong)
                   ((longlong)(*(int *)(this + 0x4594) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x36e158) << 3)) >> 0x20)) -
            (int)((ulonglong)
                  ((longlong)(*(int *)(this + 0x4598) << 0xe) * (longlong)(int)(uVar47 * 8)) >> 0x20
                 )) + uVar23) -
           ((uint)((ulonglong)uVar46 * (ulonglong)uVar23) >> 0x17 |
           ((int)((ulonglong)uVar46 * (ulonglong)uVar23 >> 0x20) +
           uVar23 * iVar29 + uVar46 * ((int)uVar23 >> 0x1f)) * 0x200);
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((longlong)(*(int *)(this + 0x45a4) << 0xe) * (longlong)iVar9 +
                 ((longlong)(*(int *)(this + 0x45a0) << 0xe) * (longlong)(iVar16 << 3) +
                  ((longlong)(*(int *)(this + 0x459c) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U) &
                 0xffffffff00000000) >> 0x20);
      iVar29 = (int)((longlong)(*(int *)(this + 0x45ac) << 0xe) * (longlong)iVar9 +
                     ((longlong)(*(int *)(this + 0x45a8) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x9b50) << 3) & 0xffffffff00000000U)
                    >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar29;
      iVar29 = iVar29 << 3;
    }
    else if (iVar29 == 4) {
      iVar29 = *(int *)(this + 0x9a78);
      iVar14 = *(int *)(this + 0x9a74);
      uVar51 = (uint)((longlong)(*(int *)(this + 0x45b4) << 0xe) * (longlong)(int)(uVar47 << 3) +
                      ((longlong)(*(int *)(this + 0x45b0) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U)
                     >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x36e258) = uVar51;
      uVar23 = (uint)((longlong)(*(int *)(this + 0x45bc) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36e258) << 3) +
                      ((longlong)(*(int *)(this + 0x45b8) << 0xe) * (longlong)(int)(uVar51 << 3) &
                      0xffffffff00000000U) >> 0x20);
      uVar54 = 0xff800000;
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      uVar57 = 0x7fffff;
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      uVar23 = (uint)((longlong)(*(int *)(this + 0x45c0) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36e2d8) << 3) +
                      ((ulonglong)uVar23 << 0x20) >> 0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      *(uint *)(this + iVar19 * 4 + 0x36e2d8) = uVar23;
      uVar23 = (uint)((longlong)(*(int *)(this + 0x45c8) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36e2d8) << 3) +
                      ((longlong)(*(int *)(this + 0x45c4) << 0xe) * (longlong)(int)(uVar23 << 3) &
                      0xffffffff00000000U) >> 0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      uVar23 = (uint)((longlong)(*(int *)(this + 0x45cc) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36e358) << 3) +
                      ((ulonglong)uVar23 << 0x20) >> 0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      *(uint *)(this + iVar19 * 4 + 0x36e358) = uVar23;
      uVar23 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45d0) << 0xe) * (longlong)(int)(uVar23 << 3)) >>
                     0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      uVar23 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45d4) << 0xe) * (longlong)(int)(uVar23 << 3)) >>
                     0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      uVar23 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45d8) << 0xe) * (longlong)(int)(uVar23 << 3)) >>
                     0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      uVar23 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45dc) << 0xe) * (longlong)(int)(uVar23 << 3)) >>
                     0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      uVar24 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45e0) << 0xe) * (longlong)(int)(uVar23 << 3)) >>
                     0x20);
      if ((int)uVar24 < -0x800000) {
        uVar24 = uVar54;
      }
      if (0x7ffffe < (int)uVar24) {
        uVar24 = uVar57;
      }
      uVar46 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45e4) << 0xe) * (longlong)(int)(uVar24 << 3)) >>
                     0x20);
      if ((int)uVar46 < -0x800000) {
        uVar46 = uVar54;
      }
      if (0x7ffffe < (int)uVar46) {
        uVar46 = uVar57;
      }
      uVar45 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45e8) << 0xe) * (longlong)(int)(uVar46 << 3)) >>
                     0x20);
      if ((int)uVar45 < -0x800000) {
        uVar45 = uVar54;
      }
      if (0x7ffffe < (int)uVar45) {
        uVar45 = uVar57;
      }
      uVar25 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45ec) << 0xe) * (longlong)(int)(uVar45 << 3)) >>
                     0x20);
      if ((int)uVar25 < -0x800000) {
        uVar25 = uVar54;
      }
      if (0x7ffffe < (int)uVar25) {
        uVar25 = uVar57;
      }
      uVar26 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x45f0) << 0xe) * (longlong)(int)(uVar25 << 3)) >>
                     0x20);
      if ((int)uVar26 < -0x800000) {
        uVar26 = uVar54;
      }
      if (0x7ffffe < (int)uVar26) {
        uVar26 = uVar57;
      }
      *(int *)(this + iVar19 * 4 + 0x36e3d8) =
           (int)((longlong)(*(int *)(this + 0x4608) << 0xe) * (longlong)(int)(uVar26 << 3) +
                 ((longlong)(*(int *)(this + 0x4604) << 0xe) * (longlong)(int)(uVar25 << 3) +
                  ((longlong)(*(int *)(this + 0x4600) << 0xe) * (longlong)(int)(uVar45 << 3) +
                   ((longlong)(*(int *)(this + 0x45fc) << 0xe) * (longlong)(int)(uVar46 << 3) +
                    ((longlong)(*(int *)(this + 0x45f8) << 0xe) * (longlong)(int)(uVar24 << 3) +
                     ((longlong)(*(int *)(this + 0x45f4) << 0xe) * (longlong)(int)(uVar23 << 3) &
                     0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                  0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
      iVar9 = (int)((ulonglong)
                    ((longlong)(*(int *)(this + 0x460c) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x36e3d8) << 3)) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36e458) = iVar9;
      iVar9 = (int)((longlong)(*(int *)(this + 0x4618) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x36e4d8) << 3) +
                    ((longlong)(*(int *)(this + 0x4614) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x36e458) << 3) +
                     ((longlong)(*(int *)(this + 0x4610) << 0xe) * (longlong)(iVar9 << 3) &
                     0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36e4d8) = iVar9;
      uVar23 = (uint)((longlong)(*(int *)(this + 0x462c) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x36e558) << 3) +
                      ((longlong)(*(int *)(this + 0x4628) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x36e558) << 3) +
                       ((longlong)(*(int *)(this + 0x4624) << 0xe) *
                        (longlong)(*(int *)(this + iVar29 * 4 + 0x36e4d8) << 3) +
                        ((longlong)(*(int *)(this + 0x4620) << 0xe) *
                         (longlong)(*(int *)(this + iVar14 * 4 + 0x36e4d8) << 3) +
                         ((longlong)(*(int *)(this + 0x461c) << 0xe) * (longlong)(iVar9 << 3) &
                         0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                      0xffffffff00000000) >> 0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      *(uint *)(this + iVar19 * 4 + 0x36e558) = uVar23;
      uVar23 = (uint)((longlong)(*(int *)(this + 0x4634) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36e558) << 3) +
                      ((longlong)(*(int *)(this + 0x4630) << 0xe) * (longlong)(int)(uVar23 << 3) &
                      0xffffffff00000000U) >> 0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if (0x7ffffe < (int)uVar23) {
        uVar23 = uVar57;
      }
      uVar23 = (uint)((longlong)(*(int *)(this + 0x4638) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x36e5d8) << 3) +
                      ((ulonglong)uVar23 << 0x20) >> 0x20);
      if ((int)uVar23 < -0x800000) {
        uVar23 = uVar54;
      }
      if ((int)uVar23 < 0x7fffff) {
        uVar57 = uVar23;
      }
      *(uint *)(this + iVar19 * 4 + 0x36e5d8) = uVar57;
      iVar29 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4680) << 0xe) *
                     (longlong)(int)(((uVar51 ^ (int)uVar51 >> 0x1f) - ((int)uVar51 >> 0x1f)) * 8))
                    >> 0x20);
      iVar9 = (int)((longlong)(*(int *)(this + 0x465c) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x36e758) << 3) +
                    ((longlong)(*(int *)(this + 0x4658) << 0xe) *
                     (longlong)
                     ((int)((ulonglong)
                            ((longlong)(*(int *)(this + 0x4654) << 0xe) *
                            (longlong)(*(int *)(this + iVar14 * 4 + 0x36e758) << 3)) >> 0x20) << 3)
                    & 0xffffffff00000000U) >> 0x20);
      if (iVar29 <= iVar9) {
        iVar29 = iVar9;
      }
      *(int *)(this + iVar19 * 4 + 0x36e758) = iVar29;
      lVar2 = (longlong)*(int *)(this + 0x4664) *
              (longlong)
              (int)((uint)((longlong)*(int *)(this + 0x4660) * (longlong)iVar29) >> 0xf |
                   (int)((ulonglong)((longlong)*(int *)(this + 0x4660) * (longlong)iVar29) >> 0x20)
                   << 0x11);
      iVar29 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4668) << 0xe) *
                     (longlong)
                     (int)(((uint)lVar2 >> 0xf | (int)((ulonglong)lVar2 >> 0x20) << 0x11) << 3)) >>
                    0x20);
      uVar54 = (int)((ulonglong)((longlong)(*(int *)(this + 0x466c) << 0xe) * 0x2000000) >> 0x20) -
               iVar29;
      iVar9 = *(int *)(this + 0x4674);
      uVar23 = (int)((ulonglong)((longlong)(*(int *)(this + 0x4670) << 0xe) * 0x2000000) >> 0x20) -
               iVar29;
      iVar29 = *(int *)(this + 0x4678);
      iVar15 = *(int *)(this + 0x467c);
      *(int *)(this + iVar19 * 4 + 0x36e658) =
           (int)((ulonglong)
                 ((longlong)(*(int *)(this + 0x463c) << 0xe) *
                 (longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3)) >> 0x20);
      lVar2 = (longlong)
              ((int)((longlong)(iVar15 << 0xe) *
                     (longlong)(int)((uVar23 & ~((int)uVar23 >> 0x1f)) << 3) +
                     ((longlong)(iVar29 << 0xe) *
                      (longlong)(int)((uVar54 & ~((int)uVar54 >> 0x1f)) << 3) +
                      ((((longlong)(iVar9 << 0xe) & 0x3fffffffffU) >> 6) << 0x20) &
                     0xffffffff00000000) >> 0x20) << 8) * (longlong)(int)uVar57;
      *(int *)(this + iVar19 * 4 + 0x36e6d8) =
           (int)((ulonglong)
                 ((longlong)(*(int *)(this + 0x4640) << 0xe) * (longlong)(int)(uVar47 << 3)) >> 0x20
                );
      iVar29 = ((uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9) << 3;
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((longlong)(*(int *)(this + 0x4648) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x36e658) << 3) +
                 ((longlong)(*(int *)(this + 0x4644) << 0xe) * (longlong)iVar29 &
                 0xffffffff00000000U) >> 0x20);
      iVar29 = (int)((longlong)(*(int *)(this + 18000) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x36e6d8) << 3) +
                     ((longlong)(*(int *)(this + 0x464c) << 0xe) * (longlong)iVar29 &
                     0xffffffff00000000U) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar29;
      iVar29 = iVar29 << 3;
    }
    else if (iVar29 == 5) {
      iVar14 = *(int *)(this + 0x9a74);
      *(int *)(this + iVar19 * 4 + 0x36e7d8) =
           (int)((ulonglong)((longlong)(*(int *)(this + 0x4684) << 0xe) * 0x4000000) >> 0x20) -
           (int)((ulonglong)
                 ((longlong)(*(int *)(this + 0x4688) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x36e7d8) << 3)) >> 0x20);
      iVar29 = (int)((ulonglong)((longlong)(*(int *)(this + 0x468c) << 0xe) * 0x40000) >> 0x20) -
               (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4690) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x36e858) << 3)) >> 0x20);
      if (iVar29 < 0x800000) {
        if (iVar29 < -0x800000) {
          iVar29 = iVar29 + 0x1000000;
        }
      }
      else {
        iVar29 = iVar29 + -0x1000000;
      }
      *(int *)(this + iVar19 * 4 + 0x36e858) = iVar29;
      *(int *)(this + iVar19 * 4 + 0x36e8d8) =
           (int)((ulonglong)((longlong)(*(int *)(this + 0x4694) << 0xe) * 0x4000000) >> 0x20) -
           (int)((ulonglong)
                 ((longlong)(*(int *)(this + 0x4698) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x36e8d8) << 3)) >> 0x20);
      lVar2 = (longlong)
              (int)((ulonglong)
                    ((longlong)(*(int *)(this + 0x469c) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x36e7d8) << 3)) >> 0x20) *
              (longlong)*(int *)(this + iVar14 * 4 + 0x36e858);
      uVar47 = (uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9;
      if ((int)uVar47 < 0x800000) {
        if ((int)uVar47 < -0x800000) {
          uVar47 = uVar47 + 0x1000000;
        }
      }
      else {
        uVar47 = uVar47 - 0x1000000;
      }
      if ((int)uVar47 < 0) {
        uVar47 = -uVar47;
      }
      uVar17 = (undefined4)
               ((longlong)(*(int *)(this + 0x46a0) << 0xe) *
                (longlong)(*(int *)(this + iVar14 * 4 + 0x36e8d8) << 3) +
                ((ulonglong)uVar47 << 0x20) >> 0x20);
      iVar29 = SignedSaturate(uVar17,0x17);
      SignedDoesSaturate(uVar17,0x17);
      uVar4 = (longlong)iVar29 * (longlong)iVar29 >> 0x17;
      lVar2 = (uVar4 & 0xffffffff) * (uVar4 & 0xffffffff);
      iVar9 = (int)((ulonglong)lVar2 >> 0x20) + (int)uVar4 * (int)(uVar4 >> 0x20) * 2;
      iVar29 = iVar9 >> 0x17;
      uVar51 = (uint)lVar2 >> 0x17 | iVar9 * 0x200;
      *(uint *)(this + iVar19 * 4 + 0x36e958) = uVar51;
      iVar30 = *(int *)(this + iVar14 * 4 + 0x9ad0);
      iVar15 = (int)((longlong)(*(int *)(this + 0x46ac) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x36e9d8) << 3) +
                     ((longlong)(*(int *)(this + 0x46a8) << 0xe) * (longlong)(iVar30 << 3) +
                      ((longlong)(*(int *)(this + 0x46a4) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3) & 0xffffffff00000000U)
                     & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36e9d8) = iVar15;
      iVar9 = *(int *)(this + iVar14 * 4 + 0x9b50);
      iVar16 = (int)((longlong)(*(int *)(this + 0x46b8) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x36ea58) << 3) +
                     ((longlong)(*(int *)(this + 0x46b4) << 0xe) * (longlong)(iVar9 << 3) +
                      ((longlong)(*(int *)(this + 0x46b0) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x9b50) << 3) & 0xffffffff00000000U)
                     & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36ea58) = iVar16;
      *(int *)(this + iVar19 * 4 + 0x36ead8) =
           (int)((longlong)(*(int *)(this + 0x46c4) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x36ead8) << 3) +
                 ((longlong)(*(int *)(this + 0x46c0) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x36e9d8) << 3) +
                  ((longlong)(*(int *)(this + 0x46bc) << 0xe) * (longlong)(iVar15 << 3) &
                  0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36eb58) =
           (int)((longlong)(*(int *)(this + 0x46d0) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x36eb58) << 3) +
                 ((longlong)(*(int *)(this + 0x46cc) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x36ea58) << 3) +
                  ((longlong)(*(int *)(this + 0x46c8) << 0xe) * (longlong)(iVar16 << 3) &
                  0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      iVar31 = *(int *)(this + iVar14 * 4 + 0x36ead8);
      iVar15 = *(int *)(this + iVar14 * 4 + 0x36ecd8);
      iVar16 = *(int *)(this + iVar14 * 4 + 0x36edd8);
      uVar47 = (uint)((longlong)(*(int *)(this + 0x46dc) << 0xe) * (longlong)(iVar16 << 3) +
                      ((longlong)(*(int *)(this + 0x46d8) << 0xe) * (longlong)(iVar15 << 3) +
                       ((longlong)(*(int *)(this + 0x46d4) << 0xe) * (longlong)(iVar31 << 3) &
                       0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x36ebd8) = uVar47;
      iVar21 = *(int *)(this + iVar14 * 4 + 0x36eb58);
      iVar22 = *(int *)(this + iVar14 * 4 + 0x36ed58);
      iVar14 = *(int *)(this + iVar14 * 4 + 0x36ee58);
      uVar54 = (uint)((longlong)(*(int *)(this + 0x46e8) << 0xe) * (longlong)(iVar14 << 3) +
                      ((longlong)(*(int *)(this + 0x46e4) << 0xe) * (longlong)(iVar22 << 3) +
                       ((longlong)(*(int *)(this + 0x46e0) << 0xe) * (longlong)(iVar21 << 3) &
                       0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x36ec58) = uVar54;
      uVar23 = (uint)((longlong)(*(int *)(this + 0x46ec) << 0xe) * (longlong)(iVar15 << 3) +
                      ((ulonglong)
                       ((uint)((ulonglong)uVar51 * (ulonglong)uVar47) >> 0x17 |
                       ((int)((ulonglong)uVar51 * (ulonglong)uVar47 >> 0x20) +
                       uVar47 * iVar29 + uVar51 * ((int)uVar47 >> 0x1f)) * 0x200) << 0x20) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x36ecd8) = uVar23;
      local_d8 = (uint)((ulonglong)uVar51 * (ulonglong)uVar54);
      local_d4 = (int)((ulonglong)uVar51 * (ulonglong)uVar54 >> 0x20);
      uVar57 = (uint)((longlong)(*(int *)(this + 0x46f0) << 0xe) * (longlong)(iVar22 << 3) +
                      ((ulonglong)
                       (local_d8 >> 0x17 |
                       (local_d4 + uVar54 * iVar29 + uVar51 * ((int)uVar54 >> 0x1f)) * 0x200) <<
                      0x20) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x36ed58) = uVar57;
      local_d8 = (uint)((ulonglong)uVar51 * (ulonglong)uVar23);
      local_d4 = (int)((ulonglong)uVar51 * (ulonglong)uVar23 >> 0x20);
      iVar15 = (int)((longlong)(*(int *)(this + 0x46f4) << 0xe) * (longlong)(iVar16 << 3) +
                     ((ulonglong)
                      (local_d8 >> 0x17 |
                      (local_d4 + uVar23 * iVar29 + uVar51 * ((int)uVar23 >> 0x1f)) * 0x200) << 0x20
                     ) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36edd8) = iVar15;
      local_d4 = (int)((ulonglong)uVar51 * (ulonglong)uVar57 >> 0x20);
      local_d8 = (uint)((ulonglong)uVar51 * (ulonglong)uVar57);
      iVar29 = (int)((longlong)(*(int *)(this + 0x46f8) << 0xe) * (longlong)(iVar14 << 3) +
                     ((ulonglong)
                      (local_d8 >> 0x17 |
                      (local_d4 + uVar57 * iVar29 + uVar51 * ((int)uVar57 >> 0x1f)) * 0x200) << 0x20
                     ) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36ee58) = iVar29;
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((longlong)(*(int *)(this + 0x470c) << 0xe) * (longlong)(iVar15 << 3) +
                 ((longlong)(*(int *)(this + 0x4708) << 0xe) * (longlong)(int)(uVar23 << 3) +
                  ((longlong)(*(int *)(this + 0x4704) << 0xe) * (longlong)(int)(uVar47 << 3) +
                   ((longlong)(*(int *)(this + 0x4700) << 0xe) * (longlong)(iVar31 << 3) +
                    ((longlong)(*(int *)(this + 0x46fc) << 0xe) * (longlong)(iVar30 << 3) &
                    0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                 0xffffffff00000000) >> 0x20);
      iVar29 = (int)((longlong)(*(int *)(this + 0x4720) << 0xe) * (longlong)(iVar29 << 3) +
                     ((longlong)(*(int *)(this + 0x471c) << 0xe) * (longlong)(int)(uVar57 << 3) +
                      ((longlong)(*(int *)(this + 0x4718) << 0xe) * (longlong)(int)(uVar54 << 3) +
                       ((longlong)(*(int *)(this + 0x4714) << 0xe) * (longlong)(iVar21 << 3) +
                        ((longlong)(*(int *)(this + 0x4710) << 0xe) * (longlong)(iVar9 << 3) &
                        0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                     0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar29;
      iVar29 = iVar29 << 3;
    }
    else if (iVar29 == 6) {
      iVar9 = *(int *)(this + 0x9a74);
      iVar14 = (uVar47 ^ (int)uVar47 >> 0x1f) - ((int)uVar47 >> 0x1f);
      iVar15 = *(int *)(this + iVar19 * 4 + 0x9ad0);
      iVar29 = iVar15;
      if (iVar15 < 0) {
        iVar29 = -iVar15;
      }
      if (iVar14 < iVar29) {
        iVar14 = iVar29;
      }
      iVar16 = (int)((longlong)(*(int *)(this + 0x47a4) << 0xe) *
                     (longlong)(*(int *)(this + iVar9 * 4 + 0x36f0d8) << 3) +
                     ((longlong)(*(int *)(this + 0x47a0) << 0xe) *
                      (longlong)
                      ((int)((ulonglong)
                             ((longlong)(*(int *)(this + 0x479c) << 0xe) *
                             (longlong)(*(int *)(this + iVar9 * 4 + 0x36f0d8) << 3)) >> 0x20) << 3)
                     & 0xffffffff00000000U) >> 0x20);
      iVar29 = iVar14;
      if (iVar14 <= iVar16) {
        iVar29 = iVar16;
      }
      *(int *)(this + iVar19 * 4 + 0x36f0d8) = iVar29;
      lVar2 = (longlong)*(int *)(this + 0x47ac) *
              (longlong)
              (int)((uint)((longlong)*(int *)(this + 0x47a8) * (longlong)iVar29) >> 0xf |
                   (int)((ulonglong)((longlong)*(int *)(this + 0x47a8) * (longlong)iVar29) >> 0x20)
                   << 0x11);
      iVar29 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x47b0) << 0xe) *
                     (longlong)
                     (int)(((uint)lVar2 >> 0xf | (int)((ulonglong)lVar2 >> 0x20) << 0x11) << 3)) >>
                    0x20);
      uVar23 = (int)((ulonglong)((longlong)(*(int *)(this + 0x47b8) << 0xe) * 0x2000000) >> 0x20) -
               iVar29;
      uVar54 = (int)((ulonglong)((longlong)(*(int *)(this + 0x47c0) << 0xe) * 0x2000000) >> 0x20) -
               iVar29;
      uVar51 = (int)((ulonglong)((longlong)(*(int *)(this + 0x47c8) << 0xe) * 0x2000000) >> 0x20) -
               iVar29;
      iVar29 = (int)((longlong)(*(int *)(this + 0x47cc) << 0xe) *
                     (longlong)(int)((uVar51 & ~((int)uVar51 >> 0x1f)) << 3) +
                     ((longlong)(*(int *)(this + 0x47c4) << 0xe) *
                      (longlong)(int)((uVar54 & ~((int)uVar54 >> 0x1f)) << 3) +
                      ((longlong)(*(int *)(this + 0x47bc) << 0xe) *
                       (longlong)(int)((uVar23 & ~((int)uVar23 >> 0x1f)) << 3) +
                       ((((longlong)(*(int *)(this + 0x47b4) << 0xe) & 0x3fffffffffU) >> 6) << 0x20)
                      & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f158) = iVar29 << 8;
      iVar21 = (int)((longlong)(*(int *)(this + 0x47d8) << 0xe) *
                     (longlong)(*(int *)(this + iVar9 * 4 + 0x36f1d8) << 3) +
                     ((longlong)(*(int *)(this + 0x47d4) << 0xe) *
                      (longlong)(*(int *)(this + iVar9 * 4 + 0x36f158) << 3) +
                      ((longlong)(*(int *)(this + 0x47d0) << 0xe) * (longlong)(iVar29 << 0xb) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f1d8) = iVar21;
      iVar16 = (int)((longlong)(*(int *)(this + 0x472c) << 0xe) *
                     (longlong)(*(int *)(this + iVar9 * 4 + 0x36eed8) << 3) +
                     ((longlong)(*(int *)(this + 0x4728) << 0xe) *
                      (longlong)
                      ((int)((ulonglong)
                             ((longlong)(*(int *)(this + 0x4724) << 0xe) *
                             (longlong)(*(int *)(this + iVar9 * 4 + 0x36eed8) << 3)) >> 0x20) << 3)
                     & 0xffffffff00000000U) >> 0x20);
      iVar29 = iVar14;
      if (iVar14 <= iVar16) {
        iVar29 = iVar16;
      }
      *(int *)(this + iVar19 * 4 + 0x36eed8) = iVar29;
      iVar29 = (int)((longlong)(*(int *)(this + 0x473c) << 0xe) * (longlong)(iVar29 << 3) +
                     ((longlong)(*(int *)(this + 0x47e0) << 0xe) *
                      (longlong)
                      ((int)((ulonglong)
                             ((longlong)(*(int *)(this + 0x47dc) << 0xe) * (longlong)(iVar29 << 3))
                            >> 0x20) << 3) +
                      ((longlong)(*(int *)(this + 0x4738) << 0xe) *
                       (longlong)(*(int *)(this + iVar9 * 4 + 0x36ef58) << 3) +
                       ((longlong)(*(int *)(this + 0x4734) << 0xe) *
                        (longlong)
                        ((int)((ulonglong)
                               ((longlong)(*(int *)(this + 0x4730) << 0xe) *
                               (longlong)(*(int *)(this + iVar9 * 4 + 0x36ef58) << 3)) >> 0x20) << 3
                        ) & 0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20
                    );
      if (iVar29 < iVar14) {
        iVar29 = iVar14;
      }
      *(int *)(this + iVar19 * 4 + 0x36ef58) = iVar29;
      uVar46 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4740) << 0xe) * (longlong)(iVar29 << 3)) >> 0x20
                     );
      uVar45 = (uint)((longlong)(*(int *)(this + 0x4768) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      uVar25 = (uint)((longlong)(*(int *)(this + 0x4770) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      uVar54 = (uint)((longlong)(*(int *)(this + 0x4778) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      uVar57 = (uint)((longlong)(*(int *)(this + 0x4780) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      uVar23 = (uint)((longlong)(*(int *)(this + 0x4748) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      uVar24 = (uint)((longlong)(*(int *)(this + 0x4750) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      uVar51 = (uint)((longlong)(*(int *)(this + 0x4758) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      uVar46 = (uint)((longlong)(*(int *)(this + 0x4760) << 0xe) * 0x4000000 +
                      ((ulonglong)uVar46 << 0x20) >> 0x20);
      iVar29 = (int)((longlong)(*(int *)(this + 0x4764) << 0xe) *
                     (longlong)(int)((uVar46 & ~((int)uVar46 >> 0x1f)) << 3) +
                     ((longlong)(*(int *)(this + 0x475c) << 0xe) *
                      (longlong)(int)((uVar51 & ~((int)uVar51 >> 0x1f)) << 3) +
                      ((longlong)(*(int *)(this + 0x4754) << 0xe) *
                       (longlong)(int)((uVar24 & ~((int)uVar24 >> 0x1f)) << 3) +
                       ((longlong)(*(int *)(this + 0x474c) << 0xe) *
                        (longlong)(int)((uVar23 & ~((int)uVar23 >> 0x1f)) << 3) +
                        (longlong)(*(int *)(this + 0x4744) << 0xe) * 0x4000000 +
                        ((longlong)(*(int *)(this + 0x4788) << 0xe) *
                         (longlong)
                         ((int)((longlong)(*(int *)(this + 0x4784) << 0xe) *
                                (longlong)(int)((uVar57 & ~((int)uVar57 >> 0x1f)) << 3) +
                                ((longlong)(*(int *)(this + 0x477c) << 0xe) *
                                 (longlong)(int)((uVar54 & ~((int)uVar54 >> 0x1f)) << 3) +
                                 ((longlong)(*(int *)(this + 0x4774) << 0xe) *
                                  (longlong)(int)((uVar25 & ~((int)uVar25 >> 0x1f)) << 3) +
                                  ((longlong)(*(int *)(this + 0x476c) << 0xe) *
                                   (longlong)(int)((uVar45 & ~((int)uVar45 >> 0x1f)) << 3) &
                                  0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000)
                               >> 0x20) << 3) & 0xffffffff00000000U) & 0xffffffff00000000) &
                      0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36efd8) = iVar29 << 8;
      iVar29 = (int)((longlong)(*(int *)(this + 0x4794) << 0xe) *
                     (longlong)(*(int *)(this + iVar9 * 4 + 0x36f058) << 3) +
                     ((longlong)(*(int *)(this + 0x4790) << 0xe) *
                      (longlong)(*(int *)(this + iVar9 * 4 + 0x36efd8) << 3) +
                      ((longlong)(*(int *)(this + 0x478c) << 0xe) * (longlong)(iVar29 << 0xb) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f058) = iVar29;
      iVar29 = (int)((ulonglong)
                     ((longlong)(*(int *)(this + 0x4798) << 0xe) * (longlong)(iVar29 << 3)) >> 0x20)
               << 3;
      lVar2 = (longlong)iVar29 *
              (longlong)
              (int)((uint)((longlong)iVar21 * (longlong)(int)uVar47) >> 0x17 |
                   (int)((ulonglong)((longlong)iVar21 * (longlong)(int)uVar47) >> 0x20) << 9);
      lVar3 = (longlong)iVar29 *
              (longlong)
              (int)((uint)((longlong)iVar21 * (longlong)iVar15) >> 0x17 |
                   (int)((ulonglong)((longlong)iVar21 * (longlong)iVar15) >> 0x20) << 9);
      uVar47 = (uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9;
      *(uint *)(this + iVar19 * 4 + 0x9dd0) = uVar47;
      iVar29 = uVar47 << 3;
      *(uint *)(this + iVar19 * 4 + 0x9d50) =
           (uint)lVar3 >> 0x17 | (int)((ulonglong)lVar3 >> 0x20) << 9;
    }
    else if (iVar29 == 8) {
      iVar29 = uVar47 << 3;
      *(undefined4 *)(this + iVar19 * 4 + 0x9d50) = *(undefined4 *)(this + iVar19 * 4 + 0x9ad0);
      *(undefined4 *)(this + iVar19 * 4 + 0x9dd0) = *(undefined4 *)(this + iVar19 * 4 + 0x9b50);
    }
    else if (iVar29 == 7) {
      iVar29 = *(int *)(this + 0x9a74);
      iVar30 = *(int *)(this + 0x9a78);
      iVar14 = *(int *)(this + iVar19 * 4 + 0x9ad0) - uVar47;
      *(int *)(this + iVar19 * 4 + 0x36f458) = iVar14;
      iVar14 = (int)((longlong)(*(int *)(this + 0x4874) << 0xe) *
                     (longlong)(*(int *)(this + iVar29 * 4 + 0x36f4d8) << 3) +
                     ((longlong)(*(int *)(this + 0x4870) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x36f458) << 3) +
                      ((longlong)(*(int *)(this + 0x486c) << 0xe) * (longlong)(iVar14 * 8) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f4d8) = iVar14;
      iVar16 = (int)((longlong)(*(int *)(this + 0x4880) << 0xe) *
                     (longlong)(*(int *)(this + iVar29 * 4 + 0x36f558) << 3) +
                     ((longlong)(*(int *)(this + 0x487c) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x36f4d8) << 3) +
                      ((longlong)(*(int *)(this + 0x4878) << 0xe) * (longlong)(iVar14 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f558) = iVar16;
      iVar21 = *(int *)(this + iVar19 * 4 + 0x9ad0) << 3;
      iVar9 = *(int *)(this + iVar29 * 4 + 0x9ad0);
      iVar15 = *(int *)(this + iVar30 * 4 + 0x9ad0);
      iVar14 = (int)((longlong)(*(int *)(this + 0x4894) << 0xe) *
                     (longlong)(*(int *)(this + iVar30 * 4 + 0x36f5d8) << 3) +
                     ((longlong)(*(int *)(this + 0x4890) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x36f5d8) << 3) +
                      ((longlong)(*(int *)(this + 0x488c) << 0xe) * (longlong)(iVar15 << 3) +
                       ((longlong)(*(int *)(this + 0x4888) << 0xe) * (longlong)(iVar9 << 3) +
                        ((longlong)(*(int *)(this + 0x4884) << 0xe) * (longlong)iVar21 &
                        0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                     0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f5d8) = iVar14;
      iVar21 = (int)((longlong)(*(int *)(this + 0x48a8) << 0xe) *
                     (longlong)(*(int *)(this + iVar30 * 4 + 0x36f658) << 3) +
                     ((longlong)(*(int *)(this + 0x48a4) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x36f658) << 3) +
                      ((longlong)(*(int *)(this + 0x48a0) << 0xe) * (longlong)(iVar15 << 3) +
                       ((longlong)(*(int *)(this + 0x489c) << 0xe) * (longlong)(iVar9 << 3) +
                        ((longlong)(*(int *)(this + 0x4898) << 0xe) * (longlong)iVar21 &
                        0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                     0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f658) = iVar21;
      iVar9 = *(int *)(this + iVar29 * 4 + 0x9b50);
      iVar15 = *(int *)(this + iVar30 * 4 + 0x9b50);
      iVar22 = (int)((longlong)(*(int *)(this + 0x48bc) << 0xe) *
                     (longlong)(*(int *)(this + iVar30 * 4 + 0x36f6d8) << 3) +
                     ((longlong)(*(int *)(this + 0x48b8) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x36f6d8) << 3) +
                      ((longlong)(*(int *)(this + 0x48b4) << 0xe) * (longlong)(iVar15 << 3) +
                       ((longlong)(*(int *)(this + 0x48b0) << 0xe) * (longlong)(iVar9 << 3) +
                        ((longlong)(*(int *)(this + 0x48ac) << 0xe) * (longlong)(int)(uVar47 << 3) &
                        0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                     0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f6d8) = iVar22;
      iVar29 = (int)((longlong)(*(int *)(this + 0x48d0) << 0xe) *
                     (longlong)(*(int *)(this + iVar30 * 4 + 0x36f758) << 3) +
                     ((longlong)(*(int *)(this + 0x48cc) << 0xe) *
                      (longlong)(*(int *)(this + iVar29 * 4 + 0x36f758) << 3) +
                      ((longlong)(*(int *)(this + 0x48c8) << 0xe) * (longlong)(iVar15 << 3) +
                       ((longlong)(*(int *)(this + 0x48c4) << 0xe) * (longlong)(iVar9 << 3) +
                        ((longlong)(*(int *)(this + 0x48c0) << 0xe) * (longlong)(int)(uVar47 << 3) &
                        0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                     0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x36f758) = iVar29;
      iVar16 = iVar16 << 3;
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((longlong)(*(int *)(this + 0x48dc) << 0xe) * (longlong)(iVar21 << 3) +
                 ((longlong)(*(int *)(this + 0x48d8) << 0xe) * (longlong)(iVar14 << 3) +
                  ((longlong)(*(int *)(this + 0x48d4) << 0xe) * (longlong)iVar16 &
                  0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      iVar29 = (int)((longlong)(*(int *)(this + 0x48e8) << 0xe) * (longlong)(iVar29 << 3) +
                     ((longlong)(*(int *)(this + 0x48e4) << 0xe) * (longlong)(iVar22 << 3) +
                      ((longlong)(*(int *)(this + 0x48e0) << 0xe) * (longlong)iVar16 &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar29;
      iVar29 = iVar29 << 3;
    }
    else if (iVar29 == 9) {
      iVar29 = 0;
      *(undefined4 *)(this + iVar19 * 4 + 0x9d50) = 0;
      *(undefined4 *)(this + iVar19 * 4 + 0x9dd0) = 0;
    }
    else if (iVar29 == 10) {
      *(undefined4 *)(this + iVar19 * 4 + 0x9c50) = 0;
      *(undefined4 *)(this + iVar19 * 4 + 0x9cd0) = 0;
      *(int *)(this + iVar19 * 4 + 0x9d50) =
           (int)((ulonglong)((longlong)(*(int *)(this + iVar19 * 4 + 0x9ad0) << 3) * 0x8000000) >>
                0x20);
      iVar14 = (int)((ulonglong)((longlong)(*(int *)(this + iVar19 * 4 + 0x9b50) << 3) * 0x8000000)
                    >> 0x20);
      iVar29 = iVar14 << 3;
      *(int *)(this + iVar19 * 4 + 0x9dd0) = iVar14;
    }
    else {
      iVar29 = *(int *)(this + iVar19 * 4 + 0x9dd0) << 3;
    }
    iVar29 = (int)((longlong)(*(int *)(this + 0x367c) << 0xe) * (longlong)iVar29 +
                   ((longlong)(*(int *)(this + 0x3678) << 0xe) *
                    (longlong)(*(int *)(this + iVar19 * 4 + 0x9d50) << 3) +
                    ((longlong)(*(int *)(this + 0x3674) << 0xe) * (longlong)(int)(local_b8 << 3) &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x9bd0) = iVar29;
    iVar14 = *(int *)(this + 0x1e44);
    if (iVar14 == 0) {
      iVar9 = *(int *)(this + 0x9a78);
      iVar15 = *(int *)(this + 0x9a7c);
      iVar14 = *(int *)(this + 0x9a74);
      iVar29 = (int)((longlong)(*(int *)(this + 0x420c) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x14bc50) << 3) +
                     ((longlong)(*(int *)(this + 0x4208) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x9bd0) << 3) +
                      ((longlong)(*(int *)(this + 0x4204) << 0xe) * (longlong)(iVar29 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x14bc50) = iVar29;
      iVar29 = (int)((longlong)(*(int *)(this + 0x4218) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x14bcd0) << 3) +
                     ((longlong)(*(int *)(this + 0x4214) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x14bc50) << 3) +
                      ((longlong)(*(int *)(this + 0x4210) << 0xe) * (longlong)(iVar29 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x14bcd0) = iVar29;
      uVar47 = (uint)((longlong)(*(int *)(this + 0x4230) << 0xe) *
                      (longlong)(*(int *)(this + iVar9 * 4 + 0x14bd50) << 3) +
                      ((longlong)(*(int *)(this + 0x422c) << 0xe) *
                       (longlong)(*(int *)(this + iVar14 * 4 + 0x14bd50) << 3) +
                       ((longlong)(*(int *)(this + 0x4228) << 0xe) *
                        (longlong)(*(int *)(this + (iVar15 + 0x52f34) * 4) << 3) +
                        ((longlong)(*(int *)(this + 0x4224) << 0xe) *
                         (longlong)(*(int *)(this + iVar9 * 4 + 0x14bcd0) << 3) +
                         ((longlong)(*(int *)(this + 0x4220) << 0xe) *
                          (longlong)(*(int *)(this + iVar14 * 4 + 0x14bcd0) << 3) +
                          ((longlong)(*(int *)(this + 0x421c) << 0xe) * (longlong)(iVar29 << 3) &
                          0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                       0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x14bd50) = uVar47;
      if (*(uint *)(this + 0x9a2c) % 3 == 0) {
        local_9c = iVar19 + 1;
        if (local_9c == 0x20) {
          local_34 = 1;
          local_9c = 0;
        }
        else {
          local_34 = iVar19 + 2;
          if (local_34 == 0x20) {
            local_34 = 0;
          }
        }
        iVar9 = *(int *)(this + 0x9a28);
        uVar6 = *(ushort *)(this + 0x9924);
        iVar29 = (int)(short)uVar6;
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if (((uVar7 & 0x8000) == 0) ||
               (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) ||
               ((((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
                ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                 (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar54 = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x9926);
        if ((int)uVar54 < 0) {
          uVar54 = uVar54 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar54) {
          uVar54 = uVar54 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar23 = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x9928);
        if ((int)uVar23 < 0) {
          uVar23 = uVar23 + 0x8000;
        }
        if (0x7fff < uVar23) {
          uVar23 = uVar23 & 0x7fff;
        }
        iVar29 = (int)(short)uVar6;
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x992a);
        uVar51 = iVar9 - iVar29;
        if ((int)uVar51 < 0) {
          uVar51 = uVar51 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar51) {
          uVar51 = uVar51 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if (((uVar7 & 0x8000) == 0) ||
               (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) ||
               ((((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
                ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                 (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar57 = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x992c);
        if ((int)uVar57 < 0) {
          uVar57 = uVar57 + 0x8000;
        }
        if (0x7fff < uVar57) {
          uVar57 = uVar57 & 0x7fff;
        }
        iVar29 = (int)(short)uVar6;
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        local_b8 = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x992e);
        if ((int)local_b8 < 0) {
          local_b8 = local_b8 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < local_b8) {
          local_b8 = local_b8 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar24 = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x9930);
        if ((int)uVar24 < 0) {
          uVar24 = uVar24 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar24) {
          uVar24 = uVar24 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if (((uVar7 & 0x8000) == 0) ||
               (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) ||
               ((((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
                ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                 (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        local_ac = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x9932);
        if ((int)local_ac < 0) {
          local_ac = local_ac + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < local_ac) {
          local_ac = local_ac & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        local_cc = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x9934);
        if ((int)local_cc < 0) {
          local_cc = local_cc + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < local_cc) {
          local_cc = local_cc & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x9936);
        uVar46 = iVar9 - iVar29;
        if ((int)uVar46 < 0) {
          uVar46 = uVar46 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar46) {
          uVar46 = uVar46 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if (((uVar7 & 0x8000) == 0) ||
               (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) ||
               ((((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
                ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                 (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x9938);
        uVar45 = iVar9 - iVar29;
        if ((int)uVar45 < 0) {
          uVar45 = uVar45 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar45) {
          uVar45 = uVar45 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x993a);
        uVar25 = iVar9 - iVar29;
        if ((int)uVar25 < 0) {
          uVar25 = uVar25 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar25) {
          uVar25 = uVar25 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x993c);
        uVar26 = iVar9 - iVar29;
        if ((int)uVar26 < 0) {
          uVar26 = uVar26 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar26) {
          uVar26 = uVar26 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if (((uVar7 & 0x8000) == 0) ||
               (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) ||
               ((((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
                ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                 (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x993e);
        uVar27 = iVar9 - iVar29;
        if ((int)uVar27 < 0) {
          uVar27 = uVar27 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar27) {
          uVar27 = uVar27 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x9940);
        uVar53 = iVar9 - iVar29;
        if ((int)uVar53 < 0) {
          uVar53 = uVar53 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar53) {
          uVar53 = uVar53 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x9942);
        uVar42 = iVar9 - iVar29;
        if ((int)uVar42 < 0) {
          uVar42 = uVar42 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar42) {
          uVar42 = uVar42 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if (((uVar7 & 0x8000) == 0) ||
               (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) ||
               ((((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
                ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                 (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x9944);
        uVar43 = iVar9 - iVar29;
        if ((int)uVar43 < 0) {
          uVar43 = uVar43 + 0x8000;
        }
        iVar29 = (int)(short)uVar6;
        if (0x7fff < uVar43) {
          uVar43 = uVar43 & 0x7fff;
        }
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar44 = iVar9 - iVar29;
        uVar6 = *(ushort *)(this + 0x9946);
        if ((int)uVar44 < 0) {
          uVar44 = uVar44 + 0x8000;
        }
        if (0x7fff < uVar44) {
          uVar44 = uVar44 & 0x7fff;
        }
        iVar29 = (int)(short)uVar6;
        if (iVar29 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar29 = (int)(short)uVar7;
        }
        uVar18 = iVar9 - iVar29;
        if ((int)uVar18 < 0) {
          uVar18 = uVar18 + 0x8000;
        }
        iVar29 = uVar24 - 1;
        iVar15 = uVar53 - 1;
        iVar21 = uVar46 - 1;
        iVar16 = local_b8 - 1;
        if (0x7fff < uVar18) {
          uVar18 = uVar18 & 0x7fff;
        }
        iVar22 = local_cc - 1;
        if (iVar21 == -1) {
          iVar21 = 0x7fff;
        }
        iVar30 = local_ac - 1;
        if (iVar15 == -1) {
          iVar15 = 0x7fff;
        }
        if (iVar30 == -1) {
          iVar30 = 0x7fff;
        }
        if (iVar16 == -1) {
          iVar16 = 0x7fff;
        }
        if (iVar29 == -1) {
          iVar29 = 0x7fff;
        }
        if (iVar22 == -1) {
          iVar22 = 0x7fff;
        }
        *(int *)(this + iVar9 * 4 + 0x14bdd0) =
             (int)((longlong)(*(int *)(this + 0x4234) << 0xe) *
                   (longlong)(*(int *)(this + uVar54 * 4 + 0x14bdd0) << 3) +
                   ((ulonglong)uVar47 << 0x20) >> 0x20);
        iVar31 = *(int *)(this + uVar54 * 4 + 0x14bdd0);
        *(int *)(this + iVar9 * 4 + 0x16bdd0) =
             (int)((longlong)(*(int *)(this + 0x423c) << 0xe) *
                   (longlong)(*(int *)(this + uVar23 * 4 + 0x16bdd0) << 3) +
                   ((longlong)(*(int *)(this + 0x4238) << 0xe) * (longlong)(iVar31 << 3) &
                   0xffffffff00000000U) >> 0x20);
        iVar31 = (int)((longlong)(*(int *)(this + 0x4244) << 0xe) *
                       (longlong)(*(int *)(this + uVar23 * 4 + 0x16bdd0) << 3) +
                       ((longlong)(*(int *)(this + 0x4240) << 0xe) * (longlong)(iVar31 << 3) &
                       0xffffffff00000000U) >> 0x20);
        iVar32 = iVar31 << 3;
        *(int *)(this + iVar19 * 4 + 0x18bdd0) = iVar31;
        *(int *)(this + iVar9 * 4 + 0x18be50) =
             (int)((longlong)(*(int *)(this + 0x424c) << 0xe) *
                   (longlong)(*(int *)(this + uVar51 * 4 + 0x18be50) << 3) +
                   ((longlong)(*(int *)(this + 0x4248) << 0xe) * (longlong)iVar32 &
                   0xffffffff00000000U) >> 0x20);
        iVar31 = (int)((longlong)(*(int *)(this + 0x4254) << 0xe) *
                       (longlong)(*(int *)(this + uVar51 * 4 + 0x18be50) << 3) +
                       ((longlong)(*(int *)(this + 0x4250) << 0xe) * (longlong)iVar32 &
                       0xffffffff00000000U) >> 0x20);
        iVar32 = iVar31 << 3;
        *(int *)(this + iVar19 * 4 + 0x1abe50) = iVar31;
        *(int *)(this + iVar9 * 4 + 0x1abed0) =
             (int)((longlong)(*(int *)(this + 0x425c) << 0xe) *
                   (longlong)(*(int *)(this + uVar57 * 4 + 0x1abed0) << 3) +
                   ((longlong)(*(int *)(this + 0x4258) << 0xe) * (longlong)iVar32 &
                   0xffffffff00000000U) >> 0x20);
        *(int *)(this + iVar19 * 4 + 0x1cbed0) =
             (int)((longlong)(*(int *)(this + 0x4264) << 0xe) *
                   (longlong)(*(int *)(this + uVar57 * 4 + 0x1abed0) << 3) +
                   ((longlong)(*(int *)(this + 0x4260) << 0xe) * (longlong)iVar32 &
                   0xffffffff00000000U) >> 0x20);
        iVar31 = *(int *)(this + iVar14 * 4 + 0x1cbed0) << 3;
        *(int *)(this + iVar9 * 4 + 0x1cbf50) =
             (int)((longlong)(*(int *)(this + 0x4270) << 0xe) *
                   (longlong)(*(int *)(this + (iVar16 + 0x72fd4) * 4) << 3) +
                   ((longlong)(*(int *)(this + 0x426c) << 0xe) *
                    (longlong)(*(int *)(this + (local_b8 + 0x72fd4) * 4) << 3) +
                    ((longlong)(*(int *)(this + 17000) << 0xe) * (longlong)iVar31 &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
        *(int *)(this + iVar9 * 4 + 0x1ebf50) =
             (int)((longlong)(*(int *)(this + 0x427c) << 0xe) *
                   (longlong)(*(int *)(this + (iVar29 + 0x7afd4) * 4) << 3) +
                   ((longlong)(*(int *)(this + 0x4278) << 0xe) *
                    (longlong)(*(int *)(this + (uVar24 + 0x7afd4) * 4) << 3) +
                    ((longlong)(*(int *)(this + 0x4274) << 0xe) * (longlong)iVar31 &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
        *(int *)(this + iVar9 * 4 + 0x20bf50) =
             (int)((longlong)(*(int *)(this + 0x4288) << 0xe) *
                   (longlong)(*(int *)(this + (iVar30 + 0x82fd4) * 4) << 3) +
                   ((longlong)(*(int *)(this + 0x4284) << 0xe) *
                    (longlong)(*(int *)(this + (local_ac + 0x82fd4) * 4) << 3) +
                    ((longlong)(*(int *)(this + 0x4280) << 0xe) * (longlong)iVar31 &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
        *(int *)(this + iVar9 * 4 + 0x22bf50) =
             (int)((longlong)(*(int *)(this + 0x4294) << 0xe) *
                   (longlong)(*(int *)(this + (iVar22 + 0x8afd4) * 4) << 3) +
                   ((longlong)(*(int *)(this + 0x4290) << 0xe) *
                    (longlong)(*(int *)(this + (local_cc + 0x8afd4) * 4) << 3) +
                    ((longlong)(*(int *)(this + 0x428c) << 0xe) * (longlong)iVar31 &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
        uVar17 = (undefined4)
                 ((longlong)(*(int *)(this + 0x42a8) << 0xe) *
                  (longlong)(*(int *)(this + (uVar27 + 0x8afd4) * 4) << 3) +
                  ((longlong)(*(int *)(this + 0x42a4) << 0xe) *
                   (longlong)(*(int *)(this + (uVar26 + 0x82fd4) * 4) << 3) +
                   ((longlong)(*(int *)(this + 0x42a0) << 0xe) *
                    (longlong)(*(int *)(this + (uVar25 + 0x7afd4) * 4) << 3) +
                    ((longlong)(*(int *)(this + 0x429c) << 0xe) *
                     (longlong)(*(int *)(this + (uVar45 + 0x72fd4) * 4) << 3) +
                     ((longlong)(*(int *)(this + 0x4298) << 0xe) *
                      (longlong)(*(int *)(this + (iVar21 + 0x52f74) * 4) << 3) & 0xffffffff00000000U
                     ) & 0xffffffff00000000) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
        *(undefined4 *)(this + iVar19 * 4 + 0x24bf50) = uVar17;
        *(undefined4 *)(this + local_9c * 4 + 0x24bf50) = uVar17;
        *(undefined4 *)(this + local_34 * 4 + 0x24bf50) = uVar17;
        uVar17 = (undefined4)
                 ((longlong)(*(int *)(this + 0x42bc) << 0xe) *
                  (longlong)(*(int *)(this + (uVar18 + 0x8afd4) * 4) << 3) +
                  ((longlong)(*(int *)(this + 0x42b8) << 0xe) *
                   (longlong)(*(int *)(this + (uVar44 + 0x82fd4) * 4) << 3) +
                   ((longlong)(*(int *)(this + 0x42b4) << 0xe) *
                    (longlong)(*(int *)(this + (uVar43 + 0x7afd4) * 4) << 3) +
                    ((longlong)(*(int *)(this + 0x42b0) << 0xe) *
                     (longlong)(*(int *)(this + (uVar42 + 0x72fd4) * 4) << 3) +
                     ((longlong)(*(int *)(this + 0x42ac) << 0xe) *
                      (longlong)(*(int *)(this + (iVar15 + 0x52f74) * 4) << 3) & 0xffffffff00000000U
                     ) & 0xffffffff00000000) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
        *(undefined4 *)(this + iVar19 * 4 + 0x24bfd0) = uVar17;
        *(undefined4 *)(this + local_9c * 4 + 0x24bfd0) = uVar17;
        *(undefined4 *)(this + local_34 * 4 + 0x24bfd0) = uVar17;
      }
      *(int *)(this + iVar19 * 4 + 0x9c50) =
           (int)((longlong)(*(int *)(this + 0x42c8) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x9c50) << 3) +
                 ((longlong)(*(int *)(this + 0x42c4) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x24bf50) << 3) +
                  ((longlong)(*(int *)(this + 0x42c0) << 0xe) *
                   (longlong)(*(int *)(this + iVar19 * 4 + 0x24bf50) << 3) & 0xffffffff00000000U) &
                 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9cd0) =
           (int)((longlong)(*(int *)(this + 0x42d4) << 0xe) *
                 (longlong)(*(int *)(this + iVar14 * 4 + 0x9cd0) << 3) +
                 ((longlong)(*(int *)(this + 0x42d0) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x24bfd0) << 3) +
                  ((longlong)(*(int *)(this + 0x42cc) << 0xe) *
                   (longlong)(*(int *)(this + iVar19 * 4 + 0x24bfd0) << 3) & 0xffffffff00000000U) &
                 0xffffffff00000000) >> 0x20);
    }
    else if (iVar14 == 1) {
      iVar29 = iVar29 << 3;
      iVar14 = *(int *)(this + 0x9a74);
      iVar9 = (int)((longlong)(*(int *)(this + 0x42ec) << 0xe) *
                    (longlong)(*(int *)(this + *(int *)(this + 0x9a78) * 4 + 0x24c050) << 3) +
                    ((longlong)(*(int *)(this + 0x42e8) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x24c050) << 3) +
                     ((longlong)(*(int *)(this + 0x42e4) << 0xe) *
                      (longlong)(*(int *)(this + (*(int *)(this + 0x9a7c) + 0x26f4) * 4) << 3) +
                      ((longlong)(*(int *)(this + 0x42e0) << 0xe) *
                       (longlong)(*(int *)(this + *(int *)(this + 0x9a78) * 4 + 0x9bd0) << 3) +
                       ((longlong)(*(int *)(this + 0x42dc) << 0xe) *
                        (longlong)(*(int *)(this + iVar14 * 4 + 0x9bd0) << 3) +
                        ((longlong)(*(int *)(this + 0x42d8) << 0xe) * (longlong)iVar29 &
                        0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                     0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x24c050) = iVar9;
      if (*(uint *)(this + 0x9a2c) % 3 == 0) {
        local_b8 = iVar19 + 1;
        if (local_b8 == 0x20) {
          iVar15 = 1;
          local_b8 = 0;
        }
        else {
          iVar15 = iVar19 + 2;
          if (iVar15 == 0x20) {
            iVar15 = 0;
          }
        }
        iVar21 = *(int *)(this + 0x9a28);
        uVar6 = *(ushort *)(this + 0x9948);
        iVar16 = (int)(short)uVar6;
        if (iVar16 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if (((uVar7 & 0x8000) == 0) ||
               (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) ||
               ((((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
                ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                 (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))))) break;
          }
          iVar16 = (int)(short)uVar7;
        }
        uVar6 = *(ushort *)(this + 0x994a);
        uVar47 = iVar21 - iVar16;
        if ((int)uVar47 < 0) {
          uVar47 = uVar47 + 0x8000;
        }
        iVar16 = (int)(short)uVar6;
        if (0x7fff < uVar47) {
          uVar47 = uVar47 & 0x7fff;
        }
        if (iVar16 < 0) {
          uVar1 = *(ushort *)pCVar28;
          while( true ) {
            uVar7 = uVar6 + uVar1;
            uVar6 = uVar1 + uVar7;
            if ((((uVar7 & 0x8000) == 0) ||
                (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
               ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
                (((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
                  (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
                 (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)))))) break;
            uVar6 = uVar1 + uVar12;
            uVar7 = uVar12;
            if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
          }
          iVar16 = (int)(short)uVar7;
        }
        uVar54 = iVar21 - iVar16;
        if ((int)uVar54 < 0) {
          uVar54 = uVar54 + 0x8000;
        }
        if (0x7fff < uVar54) {
          uVar54 = uVar54 & 0x7fff;
        }
        uVar23 = (*(int *)(this + 0x988c) >> 0xb) + 1;
        iVar16 = (int)(short)uVar23;
        if (iVar16 < 0) {
          uVar51 = (uint)*(ushort *)pCVar28;
          while( true ) {
            uVar23 = (uVar23 & 0xffff) + uVar51;
            uVar24 = (uVar23 & 0xffff) + uVar51;
            sVar5 = (short)uVar23;
            uVar57 = (uVar24 & 0xffff) + uVar51;
            if ((uVar23 & 0x8000) == 0) break;
            uVar23 = (uVar57 & 0xffff) + uVar51;
            sVar5 = (short)uVar24;
            if ((uVar24 & 0x8000) == 0) break;
            uVar24 = (uVar23 & 0xffff) + uVar51;
            sVar5 = (short)uVar57;
            uVar46 = (uVar24 & 0xffff) + uVar51;
            if ((uVar57 & 0x8000) == 0) break;
            sVar5 = (short)uVar23;
            uVar57 = (uVar46 & 0xffff) + uVar51;
            if ((uVar23 & 0x8000) == 0) break;
            sVar5 = (short)uVar24;
            uVar23 = (uVar57 & 0xffff) + uVar51;
            if ((((uVar24 & 0x8000) == 0) || (sVar5 = (short)uVar46, (uVar46 & 0x8000) == 0)) ||
               ((sVar5 = (short)uVar57, (uVar57 & 0x8000) == 0 ||
                (sVar5 = (short)uVar23, -1 < (int)(uVar23 * 0x10000))))) break;
          }
          iVar16 = (int)sVar5;
        }
        uVar23 = iVar21 - iVar16;
        if ((int)uVar23 < 0) {
          uVar23 = uVar23 + 0x8000;
        }
        if (0x7fff < uVar23) {
          uVar23 = uVar23 & 0x7fff;
        }
        uVar51 = (*(int *)(this + 0x9890) >> 0xb) + 1;
        iVar16 = (int)(short)uVar51;
        if (iVar16 < 0) {
          uVar57 = (uint)*(ushort *)pCVar28;
          while( true ) {
            uVar51 = (uVar51 & 0xffff) + uVar57;
            uVar46 = (uVar51 & 0xffff) + uVar57;
            sVar5 = (short)uVar51;
            uVar24 = (uVar46 & 0xffff) + uVar57;
            if ((uVar51 & 0x8000) == 0) break;
            uVar51 = (uVar24 & 0xffff) + uVar57;
            sVar5 = (short)uVar46;
            if ((uVar46 & 0x8000) == 0) break;
            uVar46 = (uVar51 & 0xffff) + uVar57;
            sVar5 = (short)uVar24;
            uVar45 = (uVar46 & 0xffff) + uVar57;
            if ((uVar24 & 0x8000) == 0) break;
            sVar5 = (short)uVar51;
            uVar24 = (uVar45 & 0xffff) + uVar57;
            if ((uVar51 & 0x8000) == 0) break;
            sVar5 = (short)uVar46;
            uVar51 = (uVar24 & 0xffff) + uVar57;
            if (((((uVar46 & 0x8000) == 0) || (sVar5 = (short)uVar45, (uVar45 & 0x8000) == 0)) ||
                (sVar5 = (short)uVar24, (uVar24 & 0x8000) == 0)) ||
               (sVar5 = (short)uVar51, -1 < (int)(uVar51 * 0x10000))) break;
          }
          iVar16 = (int)sVar5;
        }
        uVar51 = iVar21 - iVar16;
        if ((int)uVar51 < 0) {
          uVar51 = uVar51 + 0x8000;
        }
        if (0x7fff < uVar51) {
          uVar51 = uVar51 & 0x7fff;
        }
        iVar9 = iVar9 << 3;
        *(int *)(this + iVar21 * 4 + 0x24c0d0) =
             (int)((longlong)(*(int *)(this + 0x42f4) << 0xe) *
                   (longlong)(*(int *)(this + uVar47 * 4 + 0x24c0d0) << 3) +
                   ((longlong)(*(int *)(this + 0x42f0) << 0xe) * (longlong)iVar9 &
                   0xffffffff00000000U) >> 0x20);
        iVar9 = (int)((longlong)(*(int *)(this + 0x42fc) << 0xe) *
                      (longlong)(*(int *)(this + uVar47 * 4 + 0x24c0d0) << 3) +
                      ((longlong)(*(int *)(this + 0x42f8) << 0xe) * (longlong)iVar9 &
                      0xffffffff00000000U) >> 0x20);
        iVar16 = iVar9 << 3;
        *(int *)(this + iVar19 * 4 + 0x26c0d0) = iVar9;
        *(int *)(this + iVar21 * 4 + 0x26c150) =
             (int)((longlong)(*(int *)(this + 0x4304) << 0xe) *
                   (longlong)(*(int *)(this + uVar54 * 4 + 0x26c150) << 3) +
                   ((longlong)(*(int *)(this + 0x4300) << 0xe) * (longlong)iVar16 &
                   0xffffffff00000000U) >> 0x20);
        iVar9 = (int)((longlong)(*(int *)(this + 0x430c) << 0xe) *
                      (longlong)(*(int *)(this + uVar54 * 4 + 0x26c150) << 3) +
                      ((longlong)(*(int *)(this + 0x4308) << 0xe) * (longlong)iVar16 &
                      0xffffffff00000000U) >> 0x20);
        *(int *)(this + iVar19 * 4 + 0x28c150) = iVar9;
        *(int *)(this + iVar21 * 4 + 0x28c1d0) =
             (int)((ulonglong)
                   ((longlong)(*(int *)(this + 0x4310) << 0xe) *
                   (longlong)
                   ((int)((longlong)(*(int *)(this + 0x4318) << 0xe) *
                          (longlong)(*(int *)(this + uVar51 * 4 + 0x28c1d0) << 3) +
                          ((longlong)(*(int *)(this + 0x4314) << 0xe) *
                           (longlong)(*(int *)(this + (uVar23 + 0xa3074) * 4) << 3) &
                          0xffffffff00000000U) >> 0x20) << 3)) >> 0x20) + iVar9;
        uVar17 = *(undefined4 *)(this + uVar51 * 4 + 0x28c1d0);
        *(undefined4 *)(this + iVar19 * 4 + 0x2ac1d0) = uVar17;
        *(undefined4 *)(this + (local_b8 + 0xab074) * 4) = uVar17;
        *(undefined4 *)(this + (iVar15 + 0xab074) * 4) = uVar17;
      }
      iVar14 = (int)((longlong)(*(int *)(this + 0x4324) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac250) << 3) +
                     ((longlong)(*(int *)(this + 0x4320) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x2ac1d0) << 3) +
                      ((longlong)(*(int *)(this + 0x431c) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0x2ac1d0) << 3) & 0xffffffff00000000U
                      ) & 0xffffffff00000000) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x2ac250) = iVar14;
      iVar14 = iVar14 << 3;
      *(int *)(this + iVar19 * 4 + 0x9c50) =
           (int)((longlong)(*(int *)(this + 0x432c) << 0xe) * (longlong)iVar14 +
                 ((longlong)(*(int *)(this + 0x4328) << 0xe) * (longlong)iVar29 &
                 0xffffffff00000000U) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x9cd0) =
           (int)((longlong)(*(int *)(this + 0x4334) << 0xe) * (longlong)iVar14 +
                 ((longlong)(*(int *)(this + 0x4330) << 0xe) * (longlong)iVar29 &
                 0xffffffff00000000U) >> 0x20);
    }
    else if (iVar14 == 2) {
      *(int *)(this + iVar19 * 4 + 0x9c50) = iVar29;
      *(int *)(this + iVar19 * 4 + 0x9cd0) = iVar29;
    }
    else if (iVar14 == 3) {
      *(undefined4 *)(this + iVar19 * 4 + 0x9c50) = 0;
      *(undefined4 *)(this + iVar19 * 4 + 0x9cd0) = 0;
    }
  }
  local_50 = this + 0x1e40;
  uVar54 = (uint)((ulonglong)((longlong)(*(int *)(this + 0x3688) << 0xe) * (longlong)local_80) >>
                 0x20);
  local_b8 = (uint)((ulonglong)((longlong)(*(int *)(this + 0x368c) << 0xe) * (longlong)local_70) >>
                   0x20);
  local_ac = (uint)((ulonglong)((longlong)(*(int *)(this + 0x3690) << 0xe) * (longlong)local_90) >>
                   0x20);
  local_cc = (uint)((ulonglong)((longlong)(*(int *)(this + 0x3694) << 0xe) * (longlong)local_7c) >>
                   0x20);
  local_9c = (uint)((ulonglong)((longlong)(*(int *)(this + 0x3698) << 0xe) * (longlong)local_5c) >>
                   0x20);
  uVar47 = (uint)((ulonglong)((longlong)(*(int *)(this + 0x369c) << 0xe) * (longlong)local_4c) >>
                 0x20);
  if (iVar20 == 0) {
    iVar29 = (int)((longlong)(*(int *)(this + 0x36a4) << 0xe) *
                   (longlong)(*(int *)(this + iVar19 * 4 + 0x9d50) << 3) +
                   ((longlong)(*(int *)(this + 0x36a0) << 0xe) *
                    (longlong)(*(int *)(this + iVar19 * 4 + 0x9c50) << 3) & 0xffffffff00000000U) >>
                  0x20) << 3;
    iVar14 = (int)((longlong)(*(int *)(this + 0x36ac) << 0xe) *
                   (longlong)(*(int *)(this + iVar19 * 4 + 0x9dd0) << 3) +
                   ((longlong)(*(int *)(this + 0x36a8) << 0xe) *
                    (longlong)(*(int *)(this + iVar19 * 4 + 0x9cd0) << 3) & 0xffffffff00000000U) >>
                  0x20) << 3;
    uVar54 = (uint)((longlong)(*(int *)(this + 14000) << 0xe) * (longlong)iVar29 +
                    ((ulonglong)uVar54 << 0x20) >> 0x20);
    local_b8 = (uint)((longlong)(*(int *)(this + 0x36b4) << 0xe) * (longlong)iVar14 +
                      ((ulonglong)local_b8 << 0x20) >> 0x20);
    iVar29 = (int)((longlong)iVar14 * 0x10000000 +
                   ((longlong)iVar29 * 0x10000000 & 0xffffffff00000000U) >> 0x20) << 3;
    local_ac = (uint)((longlong)(*(int *)(this + 0x36b8) << 0xe) * (longlong)iVar29 +
                      ((ulonglong)local_ac << 0x20) >> 0x20);
    local_cc = (uint)((longlong)(*(int *)(this + 0x36bc) << 0xe) * (longlong)iVar29 +
                      ((ulonglong)local_cc << 0x20) >> 0x20);
    local_9c = (uint)((longlong)(*(int *)(this + 0x36c0) << 0xe) * (longlong)iVar29 +
                      ((ulonglong)local_9c << 0x20) >> 0x20);
    uVar47 = (uint)((longlong)(*(int *)(this + 0x36c4) << 0xe) * (longlong)iVar29 +
                    ((ulonglong)uVar47 << 0x20) >> 0x20);
  }
  *(uint *)(this + iVar19 * 4 + 0xa1d0) = uVar54;
  *(uint *)(this + iVar19 * 4 + 0xa250) = local_b8;
  *(uint *)(this + iVar19 * 4 + 0x9fd0) = local_ac;
  *(uint *)(this + iVar19 * 4 + 0xa050) = local_cc;
  *(uint *)(this + iVar19 * 4 + 0xa0d0) = local_9c;
  *(uint *)(this + iVar19 * 4 + 0xa150) = uVar47;
  iVar29 = *(int *)(this + 0x1e50);
  if (iVar29 == 0) {
    iVar14 = *(int *)(this + 0x9a74);
    iVar15 = *(int *)(this + 0x9a78);
    iVar9 = *(int *)(this + 0x742c);
    uVar23 = iVar9 - 1;
    if ((int)uVar23 < 0) {
      uVar23 = iVar9 + 0x7fff;
    }
    if (0x7fff < uVar23) {
      uVar23 = uVar23 & 0x7fff;
    }
    uVar51 = iVar9 - 2;
    if ((int)uVar51 < 0) {
      uVar51 = iVar9 + 0x7ffe;
    }
    uVar6 = *(ushort *)(this + 0x99a2);
    if (0x7fff < uVar51) {
      uVar51 = uVar51 & 0x7fff;
    }
    iVar16 = (int)(short)uVar6;
    if (iVar16 < 0) {
      uVar1 = *(ushort *)pCVar28;
      while( true ) {
        uVar7 = uVar6 + uVar1;
        uVar6 = uVar1 + uVar7;
        if (((uVar7 & 0x8000) == 0) ||
           (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
        uVar6 = uVar1 + uVar12;
        uVar7 = uVar12;
        if (((((uVar12 & 0x8000) == 0) ||
             ((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
              (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)))) ||
            (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
           ((uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0 ||
            (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))))) break;
      }
      iVar16 = (int)(short)uVar7;
    }
    uVar57 = iVar9 - iVar16;
    uVar6 = *(ushort *)(this + 0x99a4);
    if ((int)uVar57 < 0) {
      uVar57 = uVar57 + 0x8000;
    }
    iVar16 = (int)(short)uVar6;
    if (0x7fff < uVar57) {
      uVar57 = uVar57 & 0x7fff;
    }
    if (iVar16 < 0) {
      uVar1 = *(ushort *)pCVar28;
      while( true ) {
        uVar7 = uVar6 + uVar1;
        uVar6 = uVar1 + uVar7;
        if ((((((uVar7 & 0x8000) == 0) ||
              (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) ||
             (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)) ||
            ((uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0 ||
             (uVar6 = uVar1 + uVar12, uVar7 = uVar12, (uVar12 & 0x8000) == 0)))) ||
           (uVar12 = uVar1 + uVar6, uVar7 = uVar6, (uVar6 & 0x8000) == 0)) break;
        uVar6 = uVar1 + uVar12;
        uVar7 = uVar12;
        if (((uVar12 & 0x8000) == 0) || (uVar7 = uVar6, -1 < (int)((uint)uVar6 << 0x10))) break;
      }
      iVar16 = (int)(short)uVar7;
    }
    uVar24 = iVar9 - iVar16;
    if ((int)uVar24 < 0) {
      uVar24 = uVar24 + 0x8000;
    }
    if (0x7fff < uVar24) {
      uVar24 = uVar24 & 0x7fff;
    }
    iVar16 = (int)((ulonglong)
                   ((longlong)(*(int *)(this + 0x3d78) << 0xe) * (longlong)(int)(uVar54 << 8)) >>
                  0x20);
    iVar21 = iVar16 << 3;
    *(int *)(this + iVar9 * 4 + 0x10b250) = iVar16;
    iVar16 = (int)((longlong)(*(int *)(this + 0x3d8c) << 0xe) *
                   (longlong)(*(int *)(this + iVar15 * 4 + 0x12b250) << 3) +
                   ((longlong)(*(int *)(this + 0x3d88) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x12b250) << 3) +
                    ((longlong)(*(int *)(this + 0x3d84) << 0xe) *
                     (longlong)(*(int *)(this + uVar51 * 4 + 0x10b250) << 3) +
                     ((longlong)(*(int *)(this + 0x3d80) << 0xe) *
                      (longlong)(*(int *)(this + uVar23 * 4 + 0x10b250) << 3) +
                      ((longlong)(*(int *)(this + 0x3d7c) << 0xe) * (longlong)iVar21 &
                      0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                   0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x12b250) = iVar16;
    iVar32 = (int)((longlong)(*(int *)(this + 0x3d98) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x12b2d0) << 3) +
                   ((longlong)(*(int *)(this + 0x3d94) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x12b250) << 3) +
                    ((longlong)(*(int *)(this + 0x3d90) << 0xe) * (longlong)(iVar16 << 3) &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x12b2d0) = iVar32;
    iVar16 = *(int *)(this + (uVar57 + 0x42c94) * 4);
    *(int *)(this + iVar19 * 4 + 0x12b350) = iVar16;
    iVar16 = (int)((longlong)(*(int *)(this + 0x3dac) << 0xe) *
                   (longlong)(*(int *)(this + iVar15 * 4 + 0x12b3d0) << 3) +
                   ((longlong)(*(int *)(this + 0x3da8) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x12b3d0) << 3) +
                    ((longlong)(*(int *)(this + 0x3da4) << 0xe) *
                     (longlong)(*(int *)(this + iVar15 * 4 + 0x12b350) << 3) +
                     ((longlong)(*(int *)(this + 0x3da0) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x12b350) << 3) +
                      ((longlong)(*(int *)(this + 0x3d9c) << 0xe) * (longlong)(iVar16 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                   0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x12b3d0) = iVar16;
    iVar16 = (int)((longlong)(*(int *)(this + 0x3dc0) << 0xe) *
                   (longlong)(*(int *)(this + iVar15 * 4 + 0x12b450) << 3) +
                   ((longlong)(*(int *)(this + 0x3dbc) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x12b450) << 3) +
                    ((longlong)(*(int *)(this + 0x3db8) << 0xe) *
                     (longlong)(*(int *)(this + iVar15 * 4 + 0x12b3d0) << 3) +
                     ((longlong)(*(int *)(this + 0x3db4) << 0xe) *
                      (longlong)(*(int *)(this + iVar14 * 4 + 0x12b3d0) << 3) +
                      ((longlong)(*(int *)(this + 0x3db0) << 0xe) * (longlong)(iVar16 << 3) &
                      0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                   0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x12b450) = iVar16;
    iVar30 = (int)((longlong)(*(int *)(this + 0x3dcc) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x12b4d0) << 3) +
                   ((longlong)(*(int *)(this + 0x3dc8) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x12b450) << 3) +
                    ((longlong)(*(int *)(this + 0x3dc4) << 0xe) * (longlong)(iVar16 << 3) &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x12b4d0) = iVar30;
    iVar31 = (int)((longlong)(*(int *)(this + 0x4184) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x12b550) << 3) +
                   ((longlong)(*(int *)(this + 0x4180) << 0xe) * (longlong)iVar21 &
                   0xffffffff00000000U) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x12b550) = iVar31;
    iVar16 = (int)((ulonglong)
                   ((longlong)(*(int *)(this + 0x3de4) << 0xe) * (longlong)(int)(local_b8 << 8)) >>
                  0x20);
    iVar22 = iVar16 << 3;
    *(int *)(this + iVar9 * 4 + 0x12b5d0) = iVar16;
    iVar9 = (int)((longlong)(*(int *)(this + 0x3df8) << 0xe) *
                  (longlong)(*(int *)(this + iVar15 * 4 + 0x14b5d0) << 3) +
                  ((longlong)(*(int *)(this + 0x3df4) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x14b5d0) << 3) +
                   ((longlong)(*(int *)(this + 0x3df0) << 0xe) *
                    (longlong)(*(int *)(this + uVar51 * 4 + 0x12b5d0) << 3) +
                    ((longlong)(*(int *)(this + 0x3dec) << 0xe) *
                     (longlong)(*(int *)(this + uVar23 * 4 + 0x12b5d0) << 3) +
                     ((longlong)(*(int *)(this + 0x3de8) << 0xe) * (longlong)iVar22 &
                     0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                  0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14b5d0) = iVar9;
    iVar16 = (int)((longlong)(*(int *)(this + 0x3e04) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x14b650) << 3) +
                   ((longlong)(*(int *)(this + 0x3e00) << 0xe) *
                    (longlong)(*(int *)(this + iVar14 * 4 + 0x14b5d0) << 3) +
                    ((longlong)(*(int *)(this + 0x3dfc) << 0xe) * (longlong)(iVar9 << 3) &
                    0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14b650) = iVar16;
    iVar9 = *(int *)(this + (uVar24 + 0x4ad74) * 4);
    *(int *)(this + iVar19 * 4 + 0x14b6d0) = iVar9;
    iVar9 = (int)((longlong)(*(int *)(this + 0x3e18) << 0xe) *
                  (longlong)(*(int *)(this + iVar15 * 4 + 0x14b750) << 3) +
                  ((longlong)(*(int *)(this + 0x3e14) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x14b750) << 3) +
                   ((longlong)(*(int *)(this + 0x3e10) << 0xe) *
                    (longlong)(*(int *)(this + iVar15 * 4 + 0x14b6d0) << 3) +
                    ((longlong)(*(int *)(this + 0x3e0c) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x14b6d0) << 3) +
                     ((longlong)(*(int *)(this + 0x3e08) << 0xe) * (longlong)(iVar9 << 3) &
                     0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                  0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14b750) = iVar9;
    iVar9 = (int)((longlong)(*(int *)(this + 0x3e2c) << 0xe) *
                  (longlong)(*(int *)(this + iVar15 * 4 + 0x14b7d0) << 3) +
                  ((longlong)(*(int *)(this + 0x3e28) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x14b7d0) << 3) +
                   ((longlong)(*(int *)(this + 0x3e24) << 0xe) *
                    (longlong)(*(int *)(this + iVar15 * 4 + 0x14b750) << 3) +
                    ((longlong)(*(int *)(this + 0x3e20) << 0xe) *
                     (longlong)(*(int *)(this + iVar14 * 4 + 0x14b750) << 3) +
                     ((longlong)(*(int *)(this + 0x3e1c) << 0xe) * (longlong)(iVar9 << 3) &
                     0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) &
                  0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14b7d0) = iVar9;
    iVar9 = (int)((longlong)(*(int *)(this + 0x3e38) << 0xe) *
                  (longlong)(*(int *)(this + iVar14 * 4 + 0x14b850) << 3) +
                  ((longlong)(*(int *)(this + 0x3e34) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x14b7d0) << 3) +
                   ((longlong)(*(int *)(this + 0x3e30) << 0xe) * (longlong)(iVar9 << 3) &
                   0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14b850) = iVar9;
    iVar15 = (int)((longlong)(*(int *)(this + 0x418c) << 0xe) *
                   (longlong)(*(int *)(this + iVar14 * 4 + 0x14b8d0) << 3) +
                   ((longlong)(*(int *)(this + 0x4188) << 0xe) * (longlong)iVar22 &
                   0xffffffff00000000U) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14b8d0) = iVar15;
    iVar32 = iVar32 << 3;
    iVar16 = iVar16 << 3;
    iVar9 = (int)((longlong)(*(int *)(this + 0x3ddc) << 0xe) * (longlong)(iVar9 << 3) +
                  ((longlong)(*(int *)(this + 0x3dd8) << 0xe) * (longlong)iVar16 +
                   ((longlong)(*(int *)(this + 0x3dd4) << 0xe) * (longlong)iVar32 +
                    ((longlong)(*(int *)(this + 0x3dd0) << 0xe) * (longlong)iVar21 &
                    0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
    iVar14 = *(int *)(this + 0x3de0);
    if ((iVar14 + 0x8000U < 0x10000) && (iVar33 = iVar9 >> 8, iVar33 + 0x8000U < 0x10000)) {
      uVar23 = iVar33 * iVar14 >> 7;
    }
    else {
      lVar2 = (longlong)iVar14 * (longlong)iVar9;
      uVar23 = (uint)lVar2 >> 0xf | (int)((ulonglong)lVar2 >> 0x20) << 0x11;
    }
    iVar9 = *(int *)(this + 0x36dc);
    iVar14 = *(int *)(this + 0x36e0);
    lVar2 = (longlong)*(int *)(this + 0x3e4c) *
            (longlong)
            (int)((longlong)(*(int *)(this + 0x3e48) << 0xe) * (longlong)(iVar30 << 3) +
                  ((longlong)(*(int *)(this + 0x3e44) << 0xe) * (longlong)iVar32 +
                   ((longlong)(*(int *)(this + 0x3e40) << 0xe) * (longlong)iVar16 +
                    ((longlong)(*(int *)(this + 0x3e3c) << 0xe) * (longlong)iVar22 &
                    0xffffffff00000000U) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
    local_c4 = (int)((ulonglong)lVar2 >> 0x20);
    *(uint *)(this + iVar19 * 4 + 0xa750) = uVar54;
    *(uint *)(this + iVar19 * 4 + 0xa7d0) = local_b8;
    local_c8 = (uint)lVar2;
    *(int *)(this + iVar19 * 4 + 0xa3d0) =
         (int)((longlong)
               ((longlong)(iVar14 << 0xe) * (longlong)iVar22 +
               ((longlong)(iVar9 << 0xe) * (longlong)iVar21 & 0xffffffff00000000U)) >> 0x25);
    *(int *)(this + iVar19 * 4 + 0xa450) = iVar31 + iVar15 >> 5;
    *(int *)(this + iVar19 * 4 + 0xa850) = (int)uVar23 >> 5;
    *(int *)(this + iVar19 * 4 + 0xa8d0) = (int)(local_c8 >> 0xf | local_c4 << 0x11) >> 5;
  }
  else if (iVar29 == 1) {
    iVar14 = uVar54 << 3;
    uVar17 = (undefined4)
             ((ulonglong)((longlong)(*(int *)(this + 0x3f0c) << 0xe) * (longlong)iVar14) >> 0x20);
    iVar9 = *(int *)(this + 0x9a74);
    iVar22 = (int)((longlong)(*(int *)(this + 0x4184) << 0xe) *
                   (longlong)(*(int *)(this + iVar9 * 4 + 0x14ba50) << 3) +
                   ((longlong)(*(int *)(this + 0x4180) << 0xe) * (longlong)iVar14 &
                   0xffffffff00000000U) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14ba50) = iVar22;
    iVar16 = *(int *)(this + 0x36dc);
    iVar15 = local_b8 << 3;
    uVar50 = (undefined4)
             ((ulonglong)((longlong)(*(int *)(this + 0x3fd4) << 0xe) * (longlong)iVar15) >> 0x20);
    iVar9 = (int)((longlong)(*(int *)(this + 0x418c) << 0xe) *
                  (longlong)(*(int *)(this + iVar9 * 4 + 0x14bad0) << 3) +
                  ((longlong)(*(int *)(this + 0x4188) << 0xe) * (longlong)iVar15 &
                  0xffffffff00000000U) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0x14bad0) = iVar9;
    iVar21 = *(int *)(this + 0x36e0);
    *(uint *)(this + iVar19 * 4 + 0xa750) = uVar54;
    *(uint *)(this + iVar19 * 4 + 0xa7d0) = local_b8;
    *(undefined4 *)(this + iVar19 * 4 + 0xa8d0) = uVar50;
    *(undefined4 *)(this + iVar19 * 4 + 0xa850) = uVar17;
    *(undefined4 *)(this + iVar19 * 4 + 0xa2d0) = uVar17;
    *(undefined4 *)(this + iVar19 * 4 + 0xa350) = uVar50;
    *(int *)(this + iVar19 * 4 + 0xa3d0) =
         (int)((longlong)(iVar21 << 0xe) * (longlong)iVar15 +
               ((longlong)(iVar16 << 0xe) * (longlong)iVar14 & 0xffffffff00000000U) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0xa450) = iVar9 + iVar22;
  }
  else {
    if (iVar29 == 2) {
      pCVar28 = this + *(int *)(this + 0x9a74) * 4;
      iVar14 = (int)((longlong)(*(int *)(this + 0x4184) << 0xe) *
                     (longlong)(*(int *)(pCVar28 + 0x14bb50) << 3) +
                     ((longlong)(*(int *)(this + 0x4180) << 0xe) * (longlong)(int)(uVar54 << 3) &
                     0xffffffff00000000U) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x14bb50) = iVar14;
      uVar57 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x36dc) << 0xe) * (longlong)(int)(uVar54 << 3)) >>
                     0x20);
      uVar51 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4188) << 0xe) * (longlong)(int)(local_b8 << 3))
                     >> 0x20);
      uVar23 = 0xbad0;
    }
    else {
      if (iVar29 != 3) {
        if (iVar29 == 4) {
          iVar21 = *(int *)(this + 0x9a74);
          iVar31 = *(int *)(this + 0x9a78);
          *(uint *)(this + iVar19 * 4 + 0x36f7d8) = uVar54 - local_b8;
          iVar14 = (int)((longlong)(*(int *)(this + 0x48f4) << 0xe) *
                         (longlong)(*(int *)(this + iVar21 * 4 + 0x36f858) << 3) +
                         ((longlong)(*(int *)(this + 0x48f0) << 0xe) *
                          (longlong)(*(int *)(this + iVar21 * 4 + 0x36f7d8) << 3) +
                          ((longlong)(*(int *)(this + 0x48ec) << 0xe) *
                           (longlong)(int)((uVar54 - local_b8) * 8) & 0xffffffff00000000U) &
                         0xffffffff00000000) >> 0x20);
          *(int *)(this + iVar19 * 4 + 0x36f858) = iVar14;
          iVar16 = (int)((longlong)(*(int *)(this + 0x4900) << 0xe) *
                         (longlong)(*(int *)(this + iVar21 * 4 + 0x36f8d8) << 3) +
                         ((longlong)(*(int *)(this + 0x48fc) << 0xe) *
                          (longlong)(*(int *)(this + iVar21 * 4 + 0x36f858) << 3) +
                          ((longlong)(*(int *)(this + 0x48f8) << 0xe) * (longlong)(iVar14 << 3) &
                          0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
          *(int *)(this + iVar19 * 4 + 0x36f8d8) = iVar16;
          iVar9 = *(int *)(this + iVar21 * 4 + 0xa1d0);
          iVar15 = *(int *)(this + iVar31 * 4 + 0xa1d0);
          iVar14 = (int)((longlong)(*(int *)(this + 0x4914) << 0xe) *
                         (longlong)(*(int *)(this + iVar31 * 4 + 0x36f958) << 3) +
                         ((longlong)(*(int *)(this + 0x4910) << 0xe) *
                          (longlong)(*(int *)(this + iVar21 * 4 + 0x36f958) << 3) +
                          ((longlong)(*(int *)(this + 0x490c) << 0xe) * (longlong)(iVar15 << 3) +
                           ((longlong)(*(int *)(this + 0x4908) << 0xe) * (longlong)(iVar9 << 3) +
                            ((longlong)(*(int *)(this + 0x4904) << 0xe) *
                             (longlong)(int)(uVar54 << 3) & 0xffffffff00000000U) &
                           0xffffffff00000000) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
          *(int *)(this + iVar19 * 4 + 0x36f958) = iVar14;
          iVar15 = (int)((longlong)(*(int *)(this + 0x4928) << 0xe) *
                         (longlong)(*(int *)(this + iVar31 * 4 + 0x36f9d8) << 3) +
                         ((longlong)(*(int *)(this + 0x4924) << 0xe) *
                          (longlong)(*(int *)(this + iVar21 * 4 + 0x36f9d8) << 3) +
                          ((longlong)(*(int *)(this + 0x4920) << 0xe) * (longlong)(iVar15 << 3) +
                           ((longlong)(*(int *)(this + 0x491c) << 0xe) * (longlong)(iVar9 << 3) +
                            ((longlong)(*(int *)(this + 0x4918) << 0xe) *
                             (longlong)(int)(uVar54 << 3) & 0xffffffff00000000U) &
                           0xffffffff00000000) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
          *(int *)(this + iVar19 * 4 + 0x36f9d8) = iVar15;
          iVar22 = *(int *)(this + iVar21 * 4 + 0xa250);
          iVar30 = *(int *)(this + iVar31 * 4 + 0xa250);
          iVar9 = (int)((longlong)(*(int *)(this + 0x493c) << 0xe) *
                        (longlong)(*(int *)(this + iVar31 * 4 + 0x36fa58) << 3) +
                        ((longlong)(*(int *)(this + 0x4938) << 0xe) *
                         (longlong)(*(int *)(this + iVar21 * 4 + 0x36fa58) << 3) +
                         ((longlong)(*(int *)(this + 0x4934) << 0xe) * (longlong)(iVar30 << 3) +
                          ((longlong)(*(int *)(this + 0x4930) << 0xe) * (longlong)(iVar22 << 3) +
                           ((longlong)(*(int *)(this + 0x492c) << 0xe) *
                            (longlong)(int)(local_b8 << 3) & 0xffffffff00000000U) &
                          0xffffffff00000000) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
          *(int *)(this + iVar19 * 4 + 0x36fa58) = iVar9;
          iVar21 = (int)((longlong)(*(int *)(this + 0x4950) << 0xe) *
                         (longlong)(*(int *)(this + iVar31 * 4 + 0x36fad8) << 3) +
                         ((longlong)(*(int *)(this + 0x494c) << 0xe) *
                          (longlong)(*(int *)(this + iVar21 * 4 + 0x36fad8) << 3) +
                          ((longlong)(*(int *)(this + 0x4948) << 0xe) * (longlong)(iVar30 << 3) +
                           ((longlong)(*(int *)(this + 0x4944) << 0xe) * (longlong)(iVar22 << 3) +
                            ((longlong)(*(int *)(this + 0x4940) << 0xe) *
                             (longlong)(int)(local_b8 << 3) & 0xffffffff00000000U) &
                           0xffffffff00000000) & 0xffffffff00000000) & 0xffffffff00000000) >> 0x20);
          *(int *)(this + iVar19 * 4 + 0x36fad8) = iVar21;
          iVar16 = iVar16 << 3;
          *(int *)(this + iVar19 * 4 + 0xa850) =
               (int)((longlong)(*(int *)(this + 0x495c) << 0xe) * (longlong)(iVar15 << 3) +
                     ((longlong)(*(int *)(this + 0x4958) << 0xe) * (longlong)(iVar14 << 3) +
                      ((longlong)(*(int *)(this + 0x4954) << 0xe) * (longlong)iVar16 &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
          *(int *)(this + iVar19 * 4 + 0xa8d0) =
               (int)((longlong)(*(int *)(this + 0x4968) << 0xe) * (longlong)(iVar21 << 3) +
                     ((longlong)(*(int *)(this + 0x4964) << 0xe) * (longlong)(iVar9 << 3) +
                      ((longlong)(*(int *)(this + 0x4960) << 0xe) * (longlong)iVar16 &
                      0xffffffff00000000U) & 0xffffffff00000000) >> 0x20);
          *(uint *)(this + iVar19 * 4 + 0xa750) = uVar54;
          *(uint *)(this + iVar19 * 4 + 0xa7d0) = local_b8;
        }
        goto LAB_00061878;
      }
      pCVar28 = this + *(int *)(this + 0x9a74) * 4;
      iVar14 = (int)((longlong)(*(int *)(this + 0x4184) << 0xe) *
                     (longlong)(*(int *)(pCVar28 + 0x14b950) << 3) +
                     ((longlong)(*(int *)(this + 0x4180) << 0xe) * (longlong)(int)(uVar54 << 3) &
                     0xffffffff00000000U) >> 0x20);
      *(int *)(this + iVar19 * 4 + 0x14b950) = iVar14;
      uVar57 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x36dc) << 0xe) * (longlong)(int)(uVar54 << 3)) >>
                     0x20);
      uVar51 = (uint)((ulonglong)
                      ((longlong)(*(int *)(this + 0x4188) << 0xe) * (longlong)(int)(local_b8 << 3))
                     >> 0x20);
      uVar23 = 0xb9d0;
    }
    iVar9 = (int)((longlong)(*(int *)(this + 0x418c) << 0xe) *
                  (longlong)(*(int *)(pCVar28 + (uVar23 | 0x140000)) << 3) +
                  ((ulonglong)uVar51 << 0x20) >> 0x20);
    *(int *)(this + (uVar23 | 0x140000) + iVar19 * 4) = iVar9;
    iVar15 = *(int *)(this + 0x36e0);
    *(uint *)(this + iVar19 * 4 + 0xa750) = uVar54;
    *(uint *)(this + iVar19 * 4 + 0xa7d0) = local_b8;
    *(uint *)(this + iVar19 * 4 + 0xa850) = uVar54;
    *(uint *)(this + iVar19 * 4 + 0xa8d0) = local_b8;
    *(int *)(this + iVar19 * 4 + 0xa3d0) =
         (int)((longlong)(iVar15 << 0xe) * (longlong)(int)(local_b8 << 3) +
               ((ulonglong)uVar57 << 0x20) >> 0x20);
    *(int *)(this + iVar19 * 4 + 0xa450) = iVar9 + iVar14;
  }
LAB_00061878:
  if (*(int *)(&DAT_003bf708 + iVar10) != 0) {
    iVar8 = *(int *)(&DAT_003bf6fc + iVar10);
    piVar11 = *(int **)(&DAT_003bf6f8 + iVar10);
    if (iVar29 == 0 || iVar29 - 2U < 3) {
      uVar54 = (uint)((longlong)(*(int *)(this + 0x4864) << 0xe) *
                      (longlong)(*(int *)(this + iVar19 * 4 + 0xa850) << 3) +
                      ((longlong)(*(int *)(this + 0x485c) << 0xe) *
                       (longlong)(*(int *)(this + iVar19 * 4 + 0xa750) << 3) & 0xffffffff00000000U)
                     >> 0x20);
      local_b8 = (uint)((longlong)(*(int *)(this + 0x4868) << 0xe) *
                        (longlong)(*(int *)(this + iVar19 * 4 + 0xa8d0) << 3) +
                        ((longlong)(*(int *)(this + 0x4860) << 0xe) *
                         (longlong)(*(int *)(this + iVar19 * 4 + 0xa7d0) << 3) & 0xffffffff00000000U
                        ) >> 0x20);
    }
    if (piVar11 == (int *)0x0) {
      return;
    }
    if (*piVar11 != 0) {
      *(int *)(*piVar11 + iVar8 * 4) = ((int)uVar54 >> 8) << 2;
    }
    if (piVar11[1] != 0) {
      *(int *)(piVar11[1] + iVar8 * 4) = ((int)local_b8 >> 8) << 2;
    }
    if (piVar11[5] != 0) {
      *(int *)(piVar11[5] + iVar8 * 4) = (*(int *)(this + iVar19 * 4 + 0x9fd0) >> 8) << 2;
    }
    if (piVar11[6] != 0) {
      *(int *)(piVar11[6] + iVar8 * 4) = (*(int *)(this + iVar19 * 4 + 0xa050) >> 8) << 2;
    }
    if (piVar11[7] != 0) {
      *(int *)(piVar11[7] + iVar8 * 4) = (*(int *)(this + iVar19 * 4 + 0xa0d0) >> 8) << 2;
    }
    if (piVar11[8] != 0) {
      *(int *)(piVar11[8] + iVar8 * 4) = (*(int *)(this + iVar19 * 4 + 0xa150) >> 8) << 2;
    }
    if (piVar11[0xb] != 0) {
      *(int *)(piVar11[0xb] + iVar8 * 4) = *(int *)(this + 0x9a34) >> 8;
    }
    if (piVar11[0xc] == 0) {
      return;
    }
    *(int *)(piVar11[0xc] + iVar8 * 4) = *(int *)(this + 0x9a38) >> 8;
    return;
  }
  iVar15 = *(int *)(this + 0x3d58);
  iVar21 = local_ac << 3;
  iVar30 = *(int *)(this + 0x3d5c);
  iVar10 = *(int *)(this + 0x9a74);
  iVar16 = (int)((longlong)(*(int *)(this + 0x4164) << 0xe) *
                 (longlong)(*(int *)(this + iVar10 * 4 + 0x10b050) << 3) +
                 ((longlong)(*(int *)(this + 0x4160) << 0xe) * (longlong)iVar21 &
                 0xffffffff00000000U) >> 0x20);
  *(int *)(this + iVar19 * 4 + 0x10b050) = iVar16;
  iVar31 = *(int *)(this + 0x36cc);
  iVar32 = *(int *)(this + 0x3d60);
  iVar55 = local_cc << 3;
  iVar33 = *(int *)(this + 0x3d64);
  iVar34 = (int)((longlong)(*(int *)(this + 0x416c) << 0xe) *
                 (longlong)(*(int *)(this + iVar10 * 4 + 0x10b0d0) << 3) +
                 ((longlong)(*(int *)(this + 0x4168) << 0xe) * (longlong)iVar55 &
                 0xffffffff00000000U) >> 0x20);
  *(int *)(this + iVar19 * 4 + 0x10b0d0) = iVar34;
  iVar35 = *(int *)(this + 0x36d0);
  iVar36 = *(int *)(this + 0x3d68);
  iVar56 = local_9c << 3;
  iVar37 = *(int *)(this + 0x3d6c);
  iVar48 = (int)((longlong)(*(int *)(this + 0x4174) << 0xe) *
                 (longlong)(*(int *)(this + iVar10 * 4 + 0x10b150) << 3) +
                 ((longlong)(*(int *)(this + 0x4170) << 0xe) * (longlong)iVar56 &
                 0xffffffff00000000U) >> 0x20);
  *(int *)(this + iVar19 * 4 + 0x10b150) = iVar48;
  iVar38 = *(int *)(this + 0x36d4);
  iVar39 = *(int *)(this + 0x3d70);
  iVar49 = uVar47 << 3;
  iVar40 = *(int *)(this + 0x3d74);
  iVar41 = (int)((longlong)(*(int *)(this + 0x417c) << 0xe) *
                 (longlong)(*(int *)(this + iVar10 * 4 + 0x10b1d0) << 3) +
                 ((longlong)(*(int *)(this + 0x4178) << 0xe) * (longlong)iVar49 &
                 0xffffffff00000000U) >> 0x20);
  *(int *)(this + iVar19 * 4 + 0x10b1d0) = iVar41;
  iVar10 = *(int *)(this + 0x36d8);
  iVar29 = (int)((ulonglong)
                 ((longlong)(*(int *)(this + 0x3d50) << 0xe) *
                 (longlong)(*(int *)(this + 0x9a34) << 3)) >> 0x20);
  iVar22 = (int)((ulonglong)
                 ((longlong)(*(int *)(this + 0x3d54) << 0xe) *
                 (longlong)(*(int *)(this + 0x9a38) << 3)) >> 0x20);
  iVar14 = *(int *)(this + 0x36e4);
  iVar9 = *(int *)(this + 0x36e8);
  uVar47 = *(int *)(this + iVar19 * 4 + 0xa2d0) +
           iVar29 + (int)((ulonglong)((longlong)(iVar15 << 0xe) * (longlong)iVar21) >> 0x20) +
                    (int)((ulonglong)((longlong)(iVar32 << 0xe) * (longlong)iVar55) >> 0x20) +
                    (int)((ulonglong)((longlong)(iVar36 << 0xe) * (longlong)iVar56) >> 0x20) +
                    (int)((ulonglong)((longlong)(iVar39 << 0xe) * (longlong)iVar49) >> 0x20);
  *(uint *)(this + iVar19 * 4 + 0xa2d0) = uVar47;
  uVar23 = iVar22 + (int)((ulonglong)((longlong)(iVar30 << 0xe) * (longlong)iVar21) >> 0x20) +
                    (int)((ulonglong)((longlong)(iVar33 << 0xe) * (longlong)iVar55) >> 0x20) +
                    (int)((ulonglong)((longlong)(iVar37 << 0xe) * (longlong)iVar56) >> 0x20) +
                    (int)((ulonglong)((longlong)(iVar40 << 0xe) * (longlong)iVar49) >> 0x20) +
           *(int *)(this + iVar19 * 4 + 0xa350);
  *(uint *)(this + iVar19 * 4 + 0xa350) = uVar23;
  uVar54 = (int)((longlong)(iVar9 << 0xe) * (longlong)(iVar22 << 3) +
                 ((longlong)(iVar14 << 0xe) * (longlong)(iVar29 << 3) +
                  ((longlong)(iVar10 << 0xe) * (longlong)iVar49 +
                   ((longlong)(iVar38 << 0xe) * (longlong)iVar56 +
                    ((longlong)(iVar35 << 0xe) * (longlong)iVar55 +
                     ((longlong)(iVar31 << 0xe) * (longlong)iVar21 & 0xffffffff00000000U) &
                    0xffffffff00000000) & 0xffffffff00000000) & 0xffffffff00000000) &
                 0xffffffff00000000) >> 0x20) + *(int *)(this + iVar19 * 4 + 0xa3d0);
  *(uint *)(this + iVar19 * 4 + 0xa3d0) = uVar54;
  iVar10 = iVar41 + iVar34 + iVar16 + iVar48 + *(int *)(this + iVar19 * 4 + 0xa450);
  *(int *)(this + iVar19 * 4 + 0xa450) = iVar10;
  if (iVar20 == 1) {
    *(int *)(this + iVar19 * 4 + 0xa4d0) = iVar10;
    *(int *)(this + iVar19 * 4 + 0xa550) = iVar10;
    *(int *)(this + iVar19 * 4 + 0xa5d0) = iVar10;
    iVar29 = *(int *)local_50;
    if (iVar29 == 1) {
      uVar54 = (uint)((longlong)(*(int *)(this + 0x36c8) << 0xe) * (longlong)(iVar10 * 8) +
                      ((ulonglong)uVar54 << 0x20) >> 0x20);
      *(uint *)(this + iVar19 * 4 + 0x9e50) = uVar54;
      goto LAB_00062cf2;
    }
  }
  else {
    iVar29 = *(int *)local_50;
    if (iVar29 == 1) {
      *(uint *)(this + iVar19 * 4 + 0x9e50) = uVar54;
LAB_00062cf2:
      *(uint *)(this + iVar19 * 4 + 0x9ed0) = uVar54;
      iVar29 = 1;
      *(uint *)(this + iVar19 * 4 + 0x9f50) = uVar54;
      uVar47 = *(int *)(this + iVar19 * 4 + 0xa2d0) + uVar54;
      uVar23 = *(int *)(this + iVar19 * 4 + 0xa350) + uVar54;
    }
    if (iVar20 != 1) goto LAB_00061ad6;
  }
  uVar47 = (uint)((longlong)(*(int *)(this + 0x3680) << 0xe) *
                  (longlong)(*(int *)(this + iVar19 * 4 + 0xa4d0) << 3) +
                  ((ulonglong)uVar47 << 0x20) >> 0x20);
  uVar23 = (uint)((longlong)(*(int *)(this + 0x3684) << 0xe) *
                  (longlong)(*(int *)(this + iVar19 * 4 + 0xa550) << 3) +
                  ((ulonglong)uVar23 << 0x20) >> 0x20);
LAB_00061ad6:
  *(uint *)(this + iVar19 * 4 + 0xa650) = uVar47;
  *(uint *)(this + iVar19 * 4 + 0xa6d0) = uVar23;
  if (iVar29 == 0) {
    *(uint *)(this + iVar19 * 4 + 0xa950) = uVar47;
    *(uint *)(this + iVar19 * 4 + 0xa9d0) = uVar23;
  }
  else {
    *(undefined4 *)(this + iVar8 * 4 + 0xa950) = *(undefined4 *)(this + iVar8 * 4 + 0xa650);
    *(undefined4 *)(this + iVar8 * 4 + 0xa9d0) = *(undefined4 *)(this + iVar8 * 4 + 0xa6d0);
  }
  iVar8 = *(int *)(this + 0x9a70);
  uVar47 = (uint)((longlong)(*(int *)(this + 0x485c) << 0xe) *
                  (longlong)(*(int *)(this + iVar8 * 4 + 0xa750) << 3) +
                  ((ulonglong)*(uint *)(this + iVar8 * 4 + 0xa950) << 0x20) >> 0x20);
  uVar54 = (uint)((longlong)(*(int *)(this + 0x4860) << 0xe) *
                  (longlong)(*(int *)(this + iVar8 * 4 + 0xa7d0) << 3) +
                  ((ulonglong)*(uint *)(this + iVar8 * 4 + 0xa9d0) << 0x20) >> 0x20);
  if (*(int *)(this + 0x1e50) == 0 || *(int *)(this + 0x1e50) - 2U < 3) {
    uVar47 = (uint)((longlong)(*(int *)(this + 0x4864) << 0xe) *
                    (longlong)(*(int *)(this + iVar8 * 4 + 0xa850) << 3) +
                    ((ulonglong)uVar47 << 0x20) >> 0x20);
    uVar54 = (uint)((longlong)(*(int *)(this + 0x4868) << 0xe) *
                    (longlong)(*(int *)(this + iVar8 * 4 + 0xa8d0) << 3) +
                    ((ulonglong)uVar54 << 0x20) >> 0x20);
  }
  iVar19 = uVar47 << 2;
  *(int *)(this + 0x9a60) = iVar19;
  *(int *)(this + 0x9a68) = iVar19;
  *(uint *)(this + 0x9a64) = uVar54 << 2;
  *(uint *)(this + 0x9a6c) = uVar54 << 2;
  piVar11 = *(int **)(&DAT_003bf6f8 + *(int *)this);
  iVar8 = *(int *)(&DAT_003bf6fc + *(int *)this);
  if (piVar11 != (int *)0x0) {
    if (*piVar11 != 0) {
      *(int *)(*piVar11 + iVar8 * 4) = iVar19 >> 8;
    }
    if (piVar11[1] != 0) {
      *(int *)(piVar11[1] + iVar8 * 4) = *(int *)(this + 0x9a6c) >> 8;
      return;
    }
  }
  return;
}

